#if defined(PEGASUS_OS_FREEBSD)
	smbios::parser meta;
	vector<smbios::header *>::iterator it;
	smbios::byte_t *buff;
	size_t  buff_size;
	smbios::bios_info *p;
	smbios::string_array_t strings;


#endif
