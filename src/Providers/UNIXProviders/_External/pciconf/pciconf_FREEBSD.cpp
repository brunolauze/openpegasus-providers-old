#include <sys/types.h>
#include <sys/fcntl.h>

#include <assert.h>
#include <ctype.h>
#include <err.h>
#include <inttypes.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/pciio.h>
#include <sys/queue.h>

#include <dev/pci/pcireg.h>

/* $FreeBSD: head/usr.sbin/pciconf/pathnames.h 69700 2000-12-07 10:52:59Z msmith $ */
#define _PATH_DEVPCI    "/dev/pci"
#define _PATH_PCIVDB    "/usr/share/misc/pci_vendors"

#include "pciconf_FREEBSD.h"
#include <iostream>

/*
 * This is a direct cut-and-paste from the table in sys/dev/pci/pci.c.
 */
static struct
{
	int	classid;
	int	subclass;
	const char *desc;
} pci_nomatch_tab[] = {
	{PCIC_OLD,		-1,			"old"},
	{PCIC_OLD,		PCIS_OLD_NONVGA,	"non-VGA display device"},
	{PCIC_OLD,		PCIS_OLD_VGA,		"VGA-compatible display device"},
	{PCIC_STORAGE,		-1,			"mass storage"},
	{PCIC_STORAGE,		PCIS_STORAGE_SCSI,	"SCSI"},
	{PCIC_STORAGE,		PCIS_STORAGE_IDE,	"ATA"},
	{PCIC_STORAGE,		PCIS_STORAGE_FLOPPY,	"floppy disk"},
	{PCIC_STORAGE,		PCIS_STORAGE_IPI,	"IPI"},
	{PCIC_STORAGE,		PCIS_STORAGE_RAID,	"RAID"},
	{PCIC_STORAGE,		PCIS_STORAGE_ATA_ADMA,	"ATA (ADMA)"},
	{PCIC_STORAGE,		PCIS_STORAGE_SATA,	"SATA"},
	{PCIC_STORAGE,		PCIS_STORAGE_SAS,	"SAS"},
	{PCIC_STORAGE,		PCIS_STORAGE_NVM,	"NVM"},
	{PCIC_NETWORK,		-1,			"network"},
	{PCIC_NETWORK,		PCIS_NETWORK_ETHERNET,	"ethernet"},
	{PCIC_NETWORK,		PCIS_NETWORK_TOKENRING,	"token ring"},
	{PCIC_NETWORK,		PCIS_NETWORK_FDDI,	"fddi"},
	{PCIC_NETWORK,		PCIS_NETWORK_ATM,	"ATM"},
	{PCIC_NETWORK,		PCIS_NETWORK_ISDN,	"ISDN"},
	{PCIC_DISPLAY,		-1,			"display"},
	{PCIC_DISPLAY,		PCIS_DISPLAY_VGA,	"VGA"},
	{PCIC_DISPLAY,		PCIS_DISPLAY_XGA,	"XGA"},
	{PCIC_DISPLAY,		PCIS_DISPLAY_3D,	"3D"},
	{PCIC_MULTIMEDIA,	-1,			"multimedia"},
	{PCIC_MULTIMEDIA,	PCIS_MULTIMEDIA_VIDEO,	"video"},
	{PCIC_MULTIMEDIA,	PCIS_MULTIMEDIA_AUDIO,	"audio"},
	{PCIC_MULTIMEDIA,	PCIS_MULTIMEDIA_TELE,	"telephony"},
	{PCIC_MULTIMEDIA,	PCIS_MULTIMEDIA_HDA,	"HDA"},
	{PCIC_MEMORY,		-1,			"memory"},
	{PCIC_MEMORY,		PCIS_MEMORY_RAM,	"RAM"},
	{PCIC_MEMORY,		PCIS_MEMORY_FLASH,	"flash"},
	{PCIC_BRIDGE,		-1,			"bridge"},
	{PCIC_BRIDGE,		PCIS_BRIDGE_HOST,	"HOST-PCI"},
	{PCIC_BRIDGE,		PCIS_BRIDGE_ISA,	"PCI-ISA"},
	{PCIC_BRIDGE,		PCIS_BRIDGE_EISA,	"PCI-EISA"},
	{PCIC_BRIDGE,		PCIS_BRIDGE_MCA,	"PCI-MCA"},
	{PCIC_BRIDGE,		PCIS_BRIDGE_PCI,	"PCI-PCI"},
	{PCIC_BRIDGE,		PCIS_BRIDGE_PCMCIA,	"PCI-PCMCIA"},
	{PCIC_BRIDGE,		PCIS_BRIDGE_NUBUS,	"PCI-NuBus"},
	{PCIC_BRIDGE,		PCIS_BRIDGE_CARDBUS,	"PCI-CardBus"},
	{PCIC_BRIDGE,		PCIS_BRIDGE_RACEWAY,	"PCI-RACEway"},
	{PCIC_SIMPLECOMM,	-1,			"simple comms"},
	{PCIC_SIMPLECOMM,	PCIS_SIMPLECOMM_UART,	"UART"},	/* could detect 16550 */
	{PCIC_SIMPLECOMM,	PCIS_SIMPLECOMM_PAR,	"parallel port"},
	{PCIC_SIMPLECOMM,	PCIS_SIMPLECOMM_MULSER,	"multiport serial"},
	{PCIC_SIMPLECOMM,	PCIS_SIMPLECOMM_MODEM,	"generic modem"},
	{PCIC_BASEPERIPH,	-1,			"base peripheral"},
	{PCIC_BASEPERIPH,	PCIS_BASEPERIPH_PIC,	"interrupt controller"},
	{PCIC_BASEPERIPH,	PCIS_BASEPERIPH_DMA,	"DMA controller"},
	{PCIC_BASEPERIPH,	PCIS_BASEPERIPH_TIMER,	"timer"},
	{PCIC_BASEPERIPH,	PCIS_BASEPERIPH_RTC,	"realtime clock"},
	{PCIC_BASEPERIPH,	PCIS_BASEPERIPH_PCIHOT,	"PCI hot-plug controller"},
	{PCIC_BASEPERIPH,	PCIS_BASEPERIPH_SDHC,	"SD host controller"},
	{PCIC_INPUTDEV,		-1,			"input device"},
	{PCIC_INPUTDEV,		PCIS_INPUTDEV_KEYBOARD,	"keyboard"},
	{PCIC_INPUTDEV,		PCIS_INPUTDEV_DIGITIZER,"digitizer"},
	{PCIC_INPUTDEV,		PCIS_INPUTDEV_MOUSE,	"mouse"},
	{PCIC_INPUTDEV,		PCIS_INPUTDEV_SCANNER,	"scanner"},
	{PCIC_INPUTDEV,		PCIS_INPUTDEV_GAMEPORT,	"gameport"},
	{PCIC_DOCKING,		-1,			"docking station"},
	{PCIC_PROCESSOR,	-1,			"processor"},
	{PCIC_SERIALBUS,	-1,			"serial bus"},
	{PCIC_SERIALBUS,	PCIS_SERIALBUS_FW,	"FireWire"},
	{PCIC_SERIALBUS,	PCIS_SERIALBUS_ACCESS,	"AccessBus"},
	{PCIC_SERIALBUS,	PCIS_SERIALBUS_SSA,	"SSA"},
	{PCIC_SERIALBUS,	PCIS_SERIALBUS_USB,	"USB"},
	{PCIC_SERIALBUS,	PCIS_SERIALBUS_FC,	"Fibre Channel"},
	{PCIC_SERIALBUS,	PCIS_SERIALBUS_SMBUS,	"SMBus"},
	{PCIC_WIRELESS,		-1,			"wireless controller"},
	{PCIC_WIRELESS,		PCIS_WIRELESS_IRDA,	"iRDA"},
	{PCIC_WIRELESS,		PCIS_WIRELESS_IR,	"IR"},
	{PCIC_WIRELESS,		PCIS_WIRELESS_RF,	"RF"},
	{PCIC_INTELLIIO,	-1,			"intelligent I/O controller"},
	{PCIC_INTELLIIO,	PCIS_INTELLIIO_I2O,	"I2O"},
	{PCIC_SATCOM,		-1,			"satellite communication"},
	{PCIC_SATCOM,		PCIS_SATCOM_TV,		"sat TV"},
	{PCIC_SATCOM,		PCIS_SATCOM_AUDIO,	"sat audio"},
	{PCIC_SATCOM,		PCIS_SATCOM_VOICE,	"sat voice"},
	{PCIC_SATCOM,		PCIS_SATCOM_DATA,	"sat data"},
	{PCIC_CRYPTO,		-1,			"encrypt/decrypt"},
	{PCIC_CRYPTO,		PCIS_CRYPTO_NETCOMP,	"network/computer crypto"},
	{PCIC_CRYPTO,		PCIS_CRYPTO_NETCOMP,	"entertainment crypto"},
	{PCIC_DASP,		-1,			"dasp"},
	{PCIC_DASP,		PCIS_DASP_DPIO,		"DPIO module"},
	{0, 0,		NULL}
};

int
PCIConf::load_vendors(void)
{
        const char *dbf;
        FILE *db;
        struct pci_vendor_info *cv;
        struct pci_device_info *cd;
        char buf[1024], str[1024];
        char *ch;
        int id, error;
 
        /*
         * Locate the database and initialise.
         */
        TAILQ_INIT(&pci_vendors);
        if ((dbf = getenv("PCICONF_VENDOR_DATABASE")) == NULL)
                dbf = _PATH_PCIVDB;
        if ((db = fopen(dbf, "r")) == NULL)
                return(1);
        cv = NULL;
        cd = NULL;
        error = 0;

        /*
         * Scan input lines from the database
         */
        for (;;) {
                if (fgets(buf, sizeof(buf), db) == NULL)
                        break;

                if ((ch = strchr(buf, '#')) != NULL)
                        *ch = '\0';
                ch = strchr(buf, '\0') - 1;
                while (ch > buf && isspace(*ch))
                        *ch-- = '\0';
                if (ch <= buf)
                        continue;
                /* Can't handle subvendor / subdevice entries yet */
                if (buf[0] == '\t' && buf[1] == '\t')
                        continue;

                /* Check for vendor entry */
                if (buf[0] != '\t' && sscanf(buf, "%04x %[^\n]", &id, str) == 2) {
                        if ((id == 0) || (strlen(str) < 1))
                                continue;
                        if ((cv = (struct pci_vendor_info*)malloc(sizeof(struct pci_vendor_info))) == NULL) {
                                warn("allocating vendor entry");
                                error = 1;
                                break;
                        }
                        if ((cv->desc = strdup(str)) == NULL) {
                                free(cv);
                                warn("allocating vendor description");
                                error = 1;
                                break;
                        }
                        cv->id = id;
                        TAILQ_INIT(&cv->devs);
                        TAILQ_INSERT_TAIL(&pci_vendors, cv, link);
                        continue;
                }

                /* Check for device entry */
                if (buf[0] == '\t' && sscanf(buf + 1, "%04x %[^\n]", &id, str) == 2) {
                        if ((id == 0) || (strlen(str) < 1))
                                continue;
                        if (cv == NULL) {
                                warnx("device entry with no vendor!");
                                continue;
                        }
                        if ((cd = (struct pci_device_info*)malloc(sizeof(struct pci_device_info))) == NULL) {
                                warn("allocating device entry");
                                error = 1;

                                break;
                        }
                        if ((cd->desc = strdup(str)) == NULL) {
                                free(cd);
                                warn("allocating device description");
                                error = 1;
                                break;
                        }
                        cd->id = id;
                        TAILQ_INSERT_TAIL(&cv->devs, cd, link);
                        continue;
                }

                /* It's a comment or junk, ignore it */
        }
        if (ferror(db))
                error = 1;
        fclose(db);

        return(error);
}



struct pci_conf_info * PCIConf::list_devs(const char *name, struct pci_conf_info *items)
{
        int fd;
        struct pci_conf_io pc;
        struct pci_conf conf[255], *p;

        load_vendors();

        fd = open(_PATH_DEVPCI, O_RDONLY, 0);
        if (fd < 0)
			return items; //err(1, "%s", _PATH_DEVPCI);

        bzero(&pc, sizeof(struct pci_conf_io));
        pc.match_buf_len = sizeof(conf);
        pc.matches = conf;

        do {
                if (ioctl(fd, PCIOCGETCONF, &pc) == -1)
					return items; //err(1, "ioctl(PCIOCGETCONF)");

                /*
                 * 255 entries should be more than enough for most people,
                                  * but if someone has more devices, and then changes things
                 * around between ioctls, we'll do the cheesy thing and
                 * just bail.  The alternative would be to go back to the
                 * beginning of the list, and print things twice, which may
                 * not be desirable.
                 */
                if (pc.status == PCI_GETCONF_LIST_CHANGED) {
                        //warnx("PCI device list changed, please try again");
                        //exitstatus = 1;
                        close(fd);
                        return items;
                } else if (pc.status ==  PCI_GETCONF_ERROR) {
                        //warnx("error returned from PCIOCGETCONF ioctl");
                        //exitstatus = 1;
                        close(fd);
                        return items;
                }
                for (p = conf; p < &conf[pc.num_matches]; p++) {
                		
                		const char *sc;
                		if (name != NULL)
                		{
	                		if ((sc = guess_subclass(p)) != NULL)
							{	
								if (strcmp(sc, name) != 0)
								{
									continue;
								}
							}
							else continue;
						}

                		struct pci_conf_info *temp;
						struct pci_conf_info *nn=(struct pci_conf_info*)malloc(sizeof(struct pci_conf_info));
						struct pci_vendor_info	*vi;
						struct pci_device_info	*di;
						const char *dp;
						/*
						printf("%s%d@pci%d:%d:%d:%d:\tclass=0x%06x card=0x%08x "
                            "chip=0x%08x rev=0x%02x hdr=0x%02x\n",
                            (p->pd_name && *p->pd_name) ? p->pd_name :
                            "none",
                            (p->pd_name && *p->pd_name) ? (int)p->pd_unit :
                            none_count++, p->pc_sel.pc_domain,
                            p->pc_sel.pc_bus, p->pc_sel.pc_dev,
                            p->pc_sel.pc_func, (p->pc_class << 16) |
                            (p->pc_subclass << 8) | p->pc_progif,
                            (p->pc_subdevice << 16) | p->pc_subvendor,
                            (p->pc_device << 16) | p->pc_vendor,
                            p->pc_revid, p->pc_hdr);
                        */
						nn->id = 0;

						TAILQ_FOREACH(vi, &pci_vendors, link) {
							if (vi->id == p->pc_vendor) {
								nn->vendor = vi->desc;
								break;
							}
						}

						if (vi == NULL) {
							di = NULL;
						} else {
							TAILQ_FOREACH(di, &vi->devs, link) {
								if (di->id == p->pc_device) {
									nn->desc = di->desc;
									break;
								}
							}
						}

						if ((dp = guess_class(p)) != NULL)
							nn->classid = dp;
						nn->subclass = sc;
						nn->next=NULL;

						if(items==NULL)
						{
							items=nn;
						}
						else
						{
						   temp=items;
						   while(temp->next!=NULL)
						     temp=temp->next;
						   temp->next=nn;
						}

                        /*
                        if (verbose)
                                list_verbose(p);
                        if (bars)
                                list_bars(fd, p);
                        if (caps)
                                list_caps(fd, p);
                        if (errors)
                        		list_errors(fd, p);
                        if (vpd)
                                list_vpd(fd, p);
                        */
                }
        } while (pc.status == PCI_GETCONF_MORE_DEVS);

        close(fd);
        return items;
}



const char *
PCIConf::guess_class(struct pci_conf *p)
{
	int	i;

	for (i = 0; pci_nomatch_tab[i].desc != NULL; i++) {
		if (pci_nomatch_tab[i].classid == p->pc_class)
			return(pci_nomatch_tab[i].desc);
	}
	return(NULL);
}

const char *
PCIConf::guess_subclass(struct pci_conf *p)
{
	int	i;

	for (i = 0; pci_nomatch_tab[i].desc != NULL; i++) {
		if ((pci_nomatch_tab[i].classid == p->pc_class) &&
		    (pci_nomatch_tab[i].subclass == p->pc_subclass))
			return(pci_nomatch_tab[i].desc);
	}
	return(NULL);
}

