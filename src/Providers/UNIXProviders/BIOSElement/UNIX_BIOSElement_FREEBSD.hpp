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


static unsigned int dmi_bios_runtime_size(unsigned int code)
{
        if (code & 0x000003FF)
                return code;
        else
                return code >> 10;
}

UNIX_BIOSElement::UNIX_BIOSElement(void)
{
}

UNIX_BIOSElement::~UNIX_BIOSElement(void)
{
}


Boolean UNIX_BIOSElement::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BIOSElement::getInstanceID() const
{
	return String ("BIOS Information");
}

Boolean UNIX_BIOSElement::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BIOSElement::getCaption() const
{
	return getInstanceID();
}

Boolean UNIX_BIOSElement::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BIOSElement::getDescription() const
{
	return String ("");
}

Boolean UNIX_BIOSElement::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BIOSElement::getElementName() const
{
	return String("BIOSElement");
}

Boolean UNIX_BIOSElement::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_BIOSElement::getInstallDate() const
{
	return getReleaseDate();
}

Boolean UNIX_BIOSElement::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_BIOSElement::getName() const
{
	String s;
	s.append(getManufacturer());
	s.append(" ");
	s.append(getVersion());
	s.append(" Revision ");
	s.append(getBuildNumber());
	return s;
}

Boolean UNIX_BIOSElement::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_BIOSElement::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_BIOSElement::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_BIOSElement::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_BIOSElement::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_BIOSElement::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_BIOSElement::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_BIOSElement::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_BIOSElement::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_BIOSElement::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_BIOSElement::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_BIOSElement::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_BIOSElement::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_BIOSElement::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_BIOSElement::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_BIOSElement::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_BIOSElement::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_BIOSElement::getVersion() const
{
	return String (strings[2]);
}

Boolean UNIX_BIOSElement::getSoftwareElementState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOFTWARE_ELEMENT_STATE, getSoftwareElementState());
	return true;
}

Uint16 UNIX_BIOSElement::getSoftwareElementState() const
{
	return Uint16(3);
}

Boolean UNIX_BIOSElement::getSoftwareElementID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOFTWARE_ELEMENT_ID, getSoftwareElementID());
	return true;
}

String UNIX_BIOSElement::getSoftwareElementID() const
{
	return String ("");
}

Boolean UNIX_BIOSElement::getTargetOperatingSystem(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TARGET_OPERATING_SYSTEM, getTargetOperatingSystem());
	return true;
}

Uint16 UNIX_BIOSElement::getTargetOperatingSystem() const
{
	return Uint16(42);
}

Boolean UNIX_BIOSElement::getOtherTargetOS(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TARGET_OS, getOtherTargetOS());
	return true;
}

String UNIX_BIOSElement::getOtherTargetOS() const
{
	return CIMHelper::OSName;
}

Boolean UNIX_BIOSElement::getManufacturer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURER, getManufacturer());
	return true;
}

String UNIX_BIOSElement::getManufacturer() const
{
	return String (strings[1]);
}

Boolean UNIX_BIOSElement::getBuildNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUILD_NUMBER, getBuildNumber());
	return true;
}

String UNIX_BIOSElement::getBuildNumber() const
{
	char val[21];
	sprintf(val, "%u.%u", p->buildnumber, p->revision);
	return String (val);
}

Boolean UNIX_BIOSElement::getSerialNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERIAL_NUMBER, getSerialNumber());
	return true;
}

String UNIX_BIOSElement::getSerialNumber() const
{
	return String ("");
}

Boolean UNIX_BIOSElement::getCodeSet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CODE_SET, getCodeSet());
	return true;
}

String UNIX_BIOSElement::getCodeSet() const
{
	return String ("UTF-8");
}

Boolean UNIX_BIOSElement::getIdentificationCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFICATION_CODE, getIdentificationCode());
	return true;
}

String UNIX_BIOSElement::getIdentificationCode() const
{
	return String ("");
}

Boolean UNIX_BIOSElement::getLanguageEdition(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LANGUAGE_EDITION, getLanguageEdition());
	return true;
}

String UNIX_BIOSElement::getLanguageEdition() const
{
	return String ("en-US");
}

Boolean UNIX_BIOSElement::getPrimaryBIOS(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_B_I_OS, getPrimaryBIOS());
	return true;
}

Boolean UNIX_BIOSElement::getPrimaryBIOS() const
{
	return Boolean(true);
}

Boolean UNIX_BIOSElement::getListOfLanguages(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LIST_OF_LANGUAGES, getListOfLanguages());
	return true;
}

Array<String> UNIX_BIOSElement::getListOfLanguages() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_BIOSElement::getCurrentLanguage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_LANGUAGE, getCurrentLanguage());
	return true;
}

String UNIX_BIOSElement::getCurrentLanguage() const
{
	return String ("en-US");
}

Boolean UNIX_BIOSElement::getLoadedStartingAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOADED_STARTING_ADDRESS, getLoadedStartingAddress());
	return true;
}

Uint64 UNIX_BIOSElement::getLoadedStartingAddress() const
{
	return Uint64(p->starting_address);
}

Boolean UNIX_BIOSElement::getLoadedEndingAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOADED_ENDING_ADDRESS, getLoadedEndingAddress());
	return true;
}

Uint64 UNIX_BIOSElement::getLoadedEndingAddress() const
{
	return Uint64(p->ending_address);
}

Boolean UNIX_BIOSElement::getLoadUtilityInformation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOAD_UTILITY_INFORMATION, getLoadUtilityInformation());
	return true;
}

String UNIX_BIOSElement::getLoadUtilityInformation() const
{
	return String ("");
}

Boolean UNIX_BIOSElement::getReleaseDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RELEASE_DATE, getReleaseDate());
	return true;
}

CIMDateTime UNIX_BIOSElement::getReleaseDate() const
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

Boolean UNIX_BIOSElement::getRegistryURIs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REGISTRY_U_R_IS, getRegistryURIs());
	return true;
}

Array<String> UNIX_BIOSElement::getRegistryURIs() const
{
	Array<String> as;
	

	return as;
}



Boolean UNIX_BIOSElement::initialize()
{
	buff = nullptr;
	buff_size = 0;
	int count = meta.init(buff, buff_size);
	if (count < 1) return false;
	it = meta.headers.begin();
	return true;
}

Boolean UNIX_BIOSElement::load(int &pIndex)
{
	while (it != meta.headers.end())
    {
    	if ((*it)->type == types::bios_info)
    	{
    		p = (bios_info*)malloc(sizeof(struct bios_info*)); //static_cast<bios_info *>(*it);
			parser::extract_strings(*it, strings);
			byte_t *data = (byte_t*)*it;
			p->romsize = (data[0x09] + 1) << 6;
			p->runtimesize = dmi_bios_runtime_size((0x10000 - WORD(data + 0x06)) << 4);
			p->buildnumber = data[0x14];
			p->revision = data[0x15];
			p->starting_address = 0x10000;
			p->ending_address = WORD(data + 0x06);
			++it;
    		return true;
    	}
    	++it;
    }
    return false;
}

Boolean UNIX_BIOSElement::finalize()
{
    meta.clear(buff);
	return true;
}

Boolean UNIX_BIOSElement::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String nameKey;
	String versionKey;
	String softwareElementStateKey;
	String softwareElementIDKey;
	String targetOperatingSystemKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_VERSION)) versionKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SOFTWARE_ELEMENT_STATE)) softwareElementStateKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SOFTWARE_ELEMENT_ID)) softwareElementIDKey = kb.getValue();
		else if (keyName.equal(PROPERTY_TARGET_OPERATING_SYSTEM)) targetOperatingSystemKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
