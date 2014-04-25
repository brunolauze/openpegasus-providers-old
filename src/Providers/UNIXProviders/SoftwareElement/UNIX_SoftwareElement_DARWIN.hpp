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


UNIX_SoftwareElement::UNIX_SoftwareElement(void)
{
}

UNIX_SoftwareElement::~UNIX_SoftwareElement(void)
{
}


Boolean UNIX_SoftwareElement::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SoftwareElement::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_SoftwareElement::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SoftwareElement::getCaption() const
{
	return String ("");
}

Boolean UNIX_SoftwareElement::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SoftwareElement::getDescription() const
{
	return String ("");
}

Boolean UNIX_SoftwareElement::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SoftwareElement::getElementName() const
{
	return String("SoftwareElement");
}

Boolean UNIX_SoftwareElement::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_SoftwareElement::getInstallDate() const
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

Boolean UNIX_SoftwareElement::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_SoftwareElement::getName() const
{
	return String ("");
}

Boolean UNIX_SoftwareElement::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_SoftwareElement::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_SoftwareElement::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_SoftwareElement::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_SoftwareElement::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_SoftwareElement::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_SoftwareElement::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_SoftwareElement::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_SoftwareElement::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_SoftwareElement::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_SoftwareElement::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_SoftwareElement::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_SoftwareElement::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_SoftwareElement::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_SoftwareElement::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_SoftwareElement::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_SoftwareElement::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_SoftwareElement::getVersion() const
{
	return String ("");
}

Boolean UNIX_SoftwareElement::getSoftwareElementState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOFTWARE_ELEMENT_STATE, getSoftwareElementState());
	return true;
}

Uint16 UNIX_SoftwareElement::getSoftwareElementState() const
{
	return Uint16(0);
}

Boolean UNIX_SoftwareElement::getSoftwareElementID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOFTWARE_ELEMENT_ID, getSoftwareElementID());
	return true;
}

String UNIX_SoftwareElement::getSoftwareElementID() const
{
	return String ("");
}

Boolean UNIX_SoftwareElement::getTargetOperatingSystem(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TARGET_OPERATING_SYSTEM, getTargetOperatingSystem());
	return true;
}

Uint16 UNIX_SoftwareElement::getTargetOperatingSystem() const
{
	return Uint16(0);
}

Boolean UNIX_SoftwareElement::getOtherTargetOS(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TARGET_OS, getOtherTargetOS());
	return true;
}

String UNIX_SoftwareElement::getOtherTargetOS() const
{
	return String ("");
}

Boolean UNIX_SoftwareElement::getManufacturer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURER, getManufacturer());
	return true;
}

String UNIX_SoftwareElement::getManufacturer() const
{
	return String ("");
}

Boolean UNIX_SoftwareElement::getBuildNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUILD_NUMBER, getBuildNumber());
	return true;
}

String UNIX_SoftwareElement::getBuildNumber() const
{
	return String ("");
}

Boolean UNIX_SoftwareElement::getSerialNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERIAL_NUMBER, getSerialNumber());
	return true;
}

String UNIX_SoftwareElement::getSerialNumber() const
{
	return String ("");
}

Boolean UNIX_SoftwareElement::getCodeSet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CODE_SET, getCodeSet());
	return true;
}

String UNIX_SoftwareElement::getCodeSet() const
{
	return String ("");
}

Boolean UNIX_SoftwareElement::getIdentificationCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFICATION_CODE, getIdentificationCode());
	return true;
}

String UNIX_SoftwareElement::getIdentificationCode() const
{
	return String ("");
}

Boolean UNIX_SoftwareElement::getLanguageEdition(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LANGUAGE_EDITION, getLanguageEdition());
	return true;
}

String UNIX_SoftwareElement::getLanguageEdition() const
{
	return String ("");
}



Boolean UNIX_SoftwareElement::initialize()
{
	return false;
}

Boolean UNIX_SoftwareElement::load(int &pIndex)
{
	return false;
}

Boolean UNIX_SoftwareElement::finalize()
{
	return false;
}

Boolean UNIX_SoftwareElement::find(Array<CIMKeyBinding> &kbArray)
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
