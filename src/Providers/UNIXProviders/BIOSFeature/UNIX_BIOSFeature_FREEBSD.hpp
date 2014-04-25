//%LICENSE////////////////////////////////////////////////////////////////
//
// Licensed to The Open Group (TOG) under one or more contributor license
// agreements.  Refer to the OpenPegasusNOTICE.txt file distributed with
// this work for additional information regarding copyright ownership.
// Each contributor licenses this file to you under the OpenPegasus Open
// Source License; you may not use this file except in compliance with the
// License.
//
// Permission is hereby granted, free of charge, to any person obtaining a
// copy of this software and associated documentation files (the "Software"),
// to deal in the Software without restriction, including without limitation
// the rights to use, copy, modify, merge, publish, distribute, sublicense,
// and/or sell copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included
// in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
// IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
// CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
// TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
// SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//
//////////////////////////////////////////////////////////////////////////
//
//%/////////////////////////////////////////////////////////////////////////

using namespace smbios;

UNIX_BIOSFeature::UNIX_BIOSFeature(void)
{
}

UNIX_BIOSFeature::~UNIX_BIOSFeature(void)
{
 	
}


Boolean UNIX_BIOSFeature::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BIOSFeature::getInstanceID() const
{
	return String ("BIOS Feature Information");
}

Boolean UNIX_BIOSFeature::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BIOSFeature::getCaption() const
{
	return getInstanceID();
}

Boolean UNIX_BIOSFeature::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BIOSFeature::getDescription() const
{
	return String ("");
}

Boolean UNIX_BIOSFeature::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BIOSFeature::getElementName() const
{
	return String("BIOSFeature");
}

Boolean UNIX_BIOSFeature::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_BIOSFeature::getInstallDate() const
{
	struct tm clock;			// create a time structure
	sscanf(strings[3],"%d/%d/%d",
	     &clock.tm_mon,
	     &clock.tm_mday,
	     &clock.tm_year);
	return CIMDateTime(
		clock.tm_year,
		clock.tm_mon,
		clock.tm_mday,
		0,
		0,
		0,
		0,0,
		0);
}

Boolean UNIX_BIOSFeature::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_BIOSFeature::getName() const
{
	String s;
	s.append(getVendor());
	s.append(" ");
	s.append(getVersion());
	return s;
}

Boolean UNIX_BIOSFeature::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_BIOSFeature::getOperationalStatus() const
{
	Array<Uint16> as;
	as.append(2); //OK

	return as;

}

Boolean UNIX_BIOSFeature::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_BIOSFeature::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_BIOSFeature::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_BIOSFeature::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_BIOSFeature::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_BIOSFeature::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_BIOSFeature::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_BIOSFeature::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_BIOSFeature::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_BIOSFeature::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_BIOSFeature::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_BIOSFeature::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_BIOSFeature::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_BIOSFeature::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_BIOSFeature::getIdentifyingNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_NUMBER, getIdentifyingNumber());
	return true;
}

String UNIX_BIOSFeature::getIdentifyingNumber() const
{
	return String ("");
}

Boolean UNIX_BIOSFeature::getProductName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRODUCT_NAME, getProductName());
	return true;
}

String UNIX_BIOSFeature::getProductName() const
{
	return String (strings[1]);
}

Boolean UNIX_BIOSFeature::getVendor(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR, getVendor());
	return true;
}

String UNIX_BIOSFeature::getVendor() const
{
	return String (strings[1]);
}

Boolean UNIX_BIOSFeature::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_BIOSFeature::getVersion() const
{
	return String (strings[2]);
}

Boolean UNIX_BIOSFeature::getCharacteristics(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHARACTERISTICS, getCharacteristics());
	return true;
}

Array<Uint16> UNIX_BIOSFeature::getCharacteristics() const
{
	Array<Uint16> as;
	u64 code_0 = QWORD(data + 0x0A);
	u8 code_1 = data[0x12];
	u8 code_2 = data[0x13];

	/* 7.1.1 */
    
	int i;
	/*
	* This isn't very clear what this bit is supposed to mean
    */
    if (code_0.l & (1 << 3))
    {
            as.append(Uint16(0));
            return as;
    }

    for (i = 4; i <= 31; i++)
        if (code_0.l & (1 << i))
            as.append(Uint16(i));
        
	for (i = 0; i <= 7; i++)
            if (code_1 & (1 << i))
                    as.append(Uint16(i + 32));

	for (i = 0; i <= 4; i++)
            if (code_2 & (1 << i))
                    as.append(Uint16(i + 40));
	return as;

}

Boolean UNIX_BIOSFeature::getCharacteristicDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHARACTERISTIC_DESCRIPTIONS, getCharacteristicDescriptions());
	return true;
}

Array<String> UNIX_BIOSFeature::getCharacteristicDescriptions() const
{
	Array<String> as;
	u64 code_0 = QWORD(data + 0x0A);
	u8 code_1 = data[0x12];
	u8 code_2 = data[0x13];
	static const char *characteristics_0[] = {
                "BIOS characteristics not supported", /* 3 */
                "ISA is supported",
                "MCA is supported",
                "EISA is supported",
                "PCI is supported",
                "PC Card (PCMCIA) is supported",
                "PNP is supported",
                "APM is supported",
                "BIOS is upgradeable",
                "BIOS shadowing is allowed",
                "VLB is supported",
                "ESCD support is available",
                "Boot from CD is supported",
                "Selectable boot is supported",
                "BIOS ROM is socketed",
                "Boot from PC Card (PCMCIA) is supported",
                "EDD is supported",
                "Japanese floppy for NEC 9800 1.2 MB is supported (int 13h)",
                "Japanese floppy for Toshiba 1.2 MB is supported (int 13h)",
                "5.25\"/360 kB floppy services are supported (int 13h)",
                "5.25\"/1.2 MB floppy services are supported (int 13h)",
                "3.5\"/720 kB floppy services are supported (int 13h)",
                "3.5\"/2.88 MB floppy services are supported (int 13h)",
                "Print screen service is supported (int 5h)",
                "8042 keyboard services are supported (int 9h)",
                "Serial services are supported (int 14h)",
                "Printer services are supported (int 17h)",
                "CGA/mono video services are supported (int 10h)",
                "NEC PC-98" /* 31 */
        };
    int i;
            /*
     * This isn't very clear what this bit is supposed to mean
     */
    if (code_0.l & (1 << 3))
    {
            as.append(String(characteristics_0[0]));
            return as;
    }

    for (i = 4; i <= 31; i++)
            if (code_0.l & (1 << i))
                    as.append(String(characteristics_0[i - 3]));

	 /* 7.1.2.1 */
    static const char *characteristics_1[] = {
                "ACPI is supported", /* 0 */
                "USB legacy is supported",
                "AGP is supported",
                "I2O boot is supported",
                "LS-120 boot is supported",
                "ATAPI Zip drive boot is supported",
                "IEEE 1394 boot is supported",
                "Smart battery is supported" /* 7 */
    };

    for (i = 0; i <= 7; i++)
            if (code_1 & (1 << i))
                    as.append(String(characteristics_1[i]));

	/* 37.1.2.2 */
    static const char *characteristics_2[] = {
            "BIOS boot specification is supported", /* 0 */
            "Function key-initiated network boot is supported",
            "Targeted content distribution is supported",
            "UEFI is supported",
            "System is a virtual machine" /* 4 */
    };

    for (i = 0; i <= 4; i++)
            if (code_2 & (1 << i))
                    as.append(String(characteristics_2[i]));
	
	return as;
}


Boolean UNIX_BIOSFeature::initialize()
{
	buff = nullptr;
	buff_size = 0;
	int count = meta.init(buff, buff_size);
	if (count < 1) return false;
	it = meta.headers.begin();
	return true;
}

Boolean UNIX_BIOSFeature::load(int &pIndex)
{
	while (it != meta.headers.end())
    {
    	if ((*it)->type == types::bios_info)
    	{
    		p = (bios_info*)malloc(sizeof(struct bios_info*)); //static_cast<bios_info *>(*it);
			parser::extract_strings(*it, strings);
			data = (byte_t*)*it;
			//p->romsize = (data[0x09] + 1) << 6;
			//p->runtimesize = dmi_bios_runtime_size((0x10000 - WORD(data + 0x06)) << 4);
			sscanf(strings[2], "%u.%u", 
				&p->buildnumber,
				&p->revision);
			p->starting_address = 0x10000;
			p->ending_address = WORD(data + 0x06);
			++it;
    		return true;
    	}
    	++it;
    }
    return false;
}

Boolean UNIX_BIOSFeature::finalize()
{
    meta.clear(buff);
	return true;
}

Boolean UNIX_BIOSFeature::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String identifyingNumberKey;
	String productNameKey;
	String vendorKey;
	String versionKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_IDENTIFYING_NUMBER)) identifyingNumberKey = kb.getValue();
		else if (keyName.equal(PROPERTY_PRODUCT_NAME)) productNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_VENDOR)) vendorKey = kb.getValue();
		else if (keyName.equal(PROPERTY_VERSION)) versionKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
