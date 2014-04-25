#include "smbios.h"
#include "dmifind.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>

// Implementation
namespace smbios {

int parser::init(byte_t *buff, size_t buff_size)
{
	clear(buff);
	struct DMI_FIND *dmif = NULL;
	void * biosptr=NULL, * raw_smbios=NULL;
	memfile = open("/dev/mem",O_RDONLY);
    size_t pagesz = getpagesize();
    unsigned offbios = 0xe0000, offsmbios;
    size_t bioslen = 0x20000;

    if (memfile < 0 ) {
      //printf("Error opening /dev/mem\n");
      return (-1);
    }
	biosptr=mmap(NULL,bioslen,PROT_READ,MAP_SHARED,memfile,offbios);
	if (biosptr ==  MAP_FAILED) {
		//Error mapping /dev/mem BIOS
		return (-1);
	} else {
		/* find DMI anchor */
		for (dmif=(struct DMI_FIND*)biosptr;(void*)dmif<(((struct DMI_FIND*)biosptr)+bioslen);dmif++) {
		  if (memcmp("_DMI_",dmif->dmi_sig,5)==0) {
	#ifdef DEBUG
		    //printf("DMI Signature found at %08x\n",
		    //	   (void*)dmif-(biosptr+offbios);
	#endif
		    //printf("DMI Signature found\n");
		    //printf("SMBIOS Structures reside at %08x\n",
			//   dmif->dmi_base);
		    break;
		  }
		}
		/* map SMBIOS structure to virtual memory (page-aligned) */
		if (pagesz != 0 && dmif->dmi_base%pagesz != 0) {
		  offsmbios = dmif->dmi_base/pagesz * pagesz;
		} else {
		  offsmbios = dmif->dmi_base;
		}
		raw_smbios = mmap(NULL,dmif->dmi_len + dmif->dmi_base - offsmbios,
				 PROT_READ,MAP_SHARED, memfile,offsmbios);
		if (raw_smbios == MAP_FAILED) {
		  	//printf("Error mapping /dev/mem SMBIOS\n");
		  	return (-1);
		} 
		raw_size = dmif->dmi_len;
		buff_size = dmif->dmi_len;
		address_len = (dmif->dmi_len + dmif->dmi_base - offsmbios);
		buff = dmif->dmi_base - offsmbios + (byte_t*)raw_smbios;
	}

	byte_t *x = buff;
	int i = 0;
	while ((size_t) (x - buff) < raw_size) {
		headers.push_back((header *) x);
		x = skip(x);
		i++;
	}

    if (biosptr) 
      munmap(biosptr,bioslen);
    
    return i;
}

byte_t * parser::skip(byte_t *x) {
    header *hdr = (header *)x;
    if (hdr == 0) return NULL;
	byte_t *ptr = x + hdr->length;
	size_t len = 0;
	if (*ptr == 0) ptr += 2;
	else do {
		len  = strlen((const char *) ptr);
		ptr += len + 1;
	} while(len > 0);
	return ptr;
};

header * parser::extract_strings(header *x, string_array_t &a) {
	byte_t *ptr = ((byte_t *) x) + x->length;

	a.clear();
	a.push_back(nullptr);

	if (*ptr == 0) ptr += 2;
	else for(;;) {
		char   *str = (char *) ptr;
		size_t len = strlen(str);

		ptr += len + 1;

		if (len == 0) break;
		else a.push_back(str);
	}

	return (header *) ptr;
}

void parser::clear(byte_t *buf) {
	if (buf) 
       munmap(buf, address_len);
	if (memfile > 0)
		close(memfile);
	headers.clear ();
	delete [] buf;
	raw_size = 0;
	memfile = 0;
	free(buf);
};

} // namespace smbios


/* EXAMPLE *//*
	using namespace smbios;

	parser meta;
	byte_t *buff = nullptr;
	size_t  buff_size = 0;

	//////////////////////////////////////////////////////
	// Code that makes buffer to point (or hold) smbios //
	// structure table. Don't forget about size.        //
	//////////////////////////////////////////////////////

	meta.feed(buff, buff_size);

	for (auto it = meta.headers.begin(); it != meta.headers.end(); ++it) {
		string_array_t strings;

		parser::extract_strings(*it, strings);

		switch ((*it)->type) {

		// ...

			case types::memory_device: {
				auto x = static_cast<mem_device *>(*it);

				if (x->total_width == 0)
					break;

				printf("Memory device %s (%s):\n", strings[x->device_locator], strings[x->bank_locator]);
				printf("  Data width:    %d bit\n", x->data_width);
				printf("  Size:          %d M\n",   x->size);
				printf("  Speed:         %d MHz\n", x->speed);
				printf("  Clock speed:   %d MHz\n", x->clock_speed);
				printf("  Manufacturer:  %s\n",     strings[x->manufacturer]);
				printf("  S/N:           %s\n",     strings[x->serial_number]);
				printf("  Tag number:    %s\n",     strings[x->assert_tag]);
				printf("  Part number:   %s\n",     strings[x->part_number]);
				printf("\n");
			} break;

		// ...
		// Handle all other struct types
		// ...

			default: printf("Unknown structure of type %d\n", (*it)->type);
		}
	}

	//////////////////
	// Free buffers //
	//////////////////

*/
