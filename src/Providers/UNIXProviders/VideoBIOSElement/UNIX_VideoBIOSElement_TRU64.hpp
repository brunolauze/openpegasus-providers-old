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


UNIX_VideoBIOSElement::UNIX_VideoBIOSElement(void)
{
}

UNIX_VideoBIOSElement::~UNIX_VideoBIOSElement(void)
{
}


Boolean UNIX_VideoBIOSElement::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_VideoBIOSElement::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_VideoBIOSElement::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_VideoBIOSElement::getCaption() const
{
	return String ("");
}

Boolean UNIX_VideoBIOSElement::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_VideoBIOSElement::getDescription() const
{
	return String ("");
}

Boolean UNIX_VideoBIOSElement::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_VideoBIOSElement::getElementName() const
{
	return String("VideoBIOSElement");
}

Boolean UNIX_VideoBIOSElement::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_VideoBIOSElement::getInstallDate() const
{
	struct tm* clock;			// create a time structure
	time_t val = time(NULL);
	clock = gmtime(&(val));	// Get the last modified time and put it into the time structure
	return CIMDateTime(
		clock->tm_year + 1900,
		clock->tm_mon + 1,
		clock->tm_mday,
		clock->tm_hour,
		clock->tm_min,
		clock->tm_sec,
		0,0,
		clock->tm_gmtoff);
}

Boolean UNIX_VideoBIOSElement::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_VideoBIOSElement::getName() const
{
	return String ("");
}

Boolean UNIX_VideoBIOSElement::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_VideoBIOSElement::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_VideoBIOSElement::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_VideoBIOSElement::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_VideoBIOSElement::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_VideoBIOSElement::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_VideoBIOSElement::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_VideoBIOSElement::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_VideoBIOSElement::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_VideoBIOSElement::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_VideoBIOSElement::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_VideoBIOSElement::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_VideoBIOSElement::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_VideoBIOSElement::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_VideoBIOSElement::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_VideoBIOSElement::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_VideoBIOSElement::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_VideoBIOSElement::getVersion() const
{
	return String ("");
}

Boolean UNIX_VideoBIOSElement::getSoftwareElementState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOFTWARE_ELEMENT_STATE, getSoftwareElementState());
	return true;
}

Uint16 UNIX_VideoBIOSElement::getSoftwareElementState() const
{
	return Uint16(0);
}

Boolean UNIX_VideoBIOSElement::getSoftwareElementID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOFTWARE_ELEMENT_ID, getSoftwareElementID());
	return true;
}

String UNIX_VideoBIOSElement::getSoftwareElementID() const
{
	return String ("");
}

Boolean UNIX_VideoBIOSElement::getTargetOperatingSystem(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TARGET_OPERATING_SYSTEM, getTargetOperatingSystem());
	return true;
}

Uint16 UNIX_VideoBIOSElement::getTargetOperatingSystem() const
{
	return Uint16(0);
}

Boolean UNIX_VideoBIOSElement::getOtherTargetOS(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TARGET_OS, getOtherTargetOS());
	return true;
}

String UNIX_VideoBIOSElement::getOtherTargetOS() const
{
	return String ("");
}

Boolean UNIX_VideoBIOSElement::getManufacturer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURER, getManufacturer());
	return true;
}

String UNIX_VideoBIOSElement::getManufacturer() const
{
	return String ("");
}

Boolean UNIX_VideoBIOSElement::getBuildNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUILD_NUMBER, getBuildNumber());
	return true;
}

String UNIX_VideoBIOSElement::getBuildNumber() const
{
	return String ("");
}

Boolean UNIX_VideoBIOSElement::getSerialNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERIAL_NUMBER, getSerialNumber());
	return true;
}

String UNIX_VideoBIOSElement::getSerialNumber() const
{
	return String ("");
}

Boolean UNIX_VideoBIOSElement::getCodeSet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CODE_SET, getCodeSet());
	return true;
}

String UNIX_VideoBIOSElement::getCodeSet() const
{
	return String ("");
}

Boolean UNIX_VideoBIOSElement::getIdentificationCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFICATION_CODE, getIdentificationCode());
	return true;
}

String UNIX_VideoBIOSElement::getIdentificationCode() const
{
	return String ("");
}

Boolean UNIX_VideoBIOSElement::getLanguageEdition(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LANGUAGE_EDITION, getLanguageEdition());
	return true;
}

String UNIX_VideoBIOSElement::getLanguageEdition() const
{
	return String ("");
}

Boolean UNIX_VideoBIOSElement::getIsShadowed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_SHADOWED, getIsShadowed());
	return true;
}

Boolean UNIX_VideoBIOSElement::getIsShadowed() const
{
	return Boolean(false);
}

Boolean UNIX_VideoBIOSElement::getReleaseDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RELEASE_DATE, getReleaseDate());
	return true;
}

CIMDateTime UNIX_VideoBIOSElement::getReleaseDate() const
{
	struct tm* clock;			// create a time structure
	time_t val = time(NULL);
	clock = gmtime(&(val));	// Get the last modified time and put it into the time structure
	return CIMDateTime(
		clock->tm_year + 1900,
		clock->tm_mon + 1,
		clock->tm_mday,
		clock->tm_hour,
		clock->tm_min,
		clock->tm_sec,
		0,0,
		clock->tm_gmtoff);
}



Boolean UNIX_VideoBIOSElement::initialize()
{
	return false;
}

Boolean UNIX_VideoBIOSElement::load(int &pIndex)
{
	return false;
}

Boolean UNIX_VideoBIOSElement::finalize()
{
	return false;
}

Boolean UNIX_VideoBIOSElement::find(Array<CIMKeyBinding> &kbArray)
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
