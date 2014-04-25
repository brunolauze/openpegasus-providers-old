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


UNIX_PhysicalLink::UNIX_PhysicalLink(void)
{
}

UNIX_PhysicalLink::~UNIX_PhysicalLink(void)
{
}


Boolean UNIX_PhysicalLink::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PhysicalLink::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_PhysicalLink::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PhysicalLink::getCaption() const
{
	return String ("");
}

Boolean UNIX_PhysicalLink::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PhysicalLink::getDescription() const
{
	return String ("");
}

Boolean UNIX_PhysicalLink::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PhysicalLink::getElementName() const
{
	return String("PhysicalLink");
}

Boolean UNIX_PhysicalLink::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_PhysicalLink::getInstallDate() const
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

Boolean UNIX_PhysicalLink::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PhysicalLink::getName() const
{
	return String ("");
}

Boolean UNIX_PhysicalLink::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_PhysicalLink::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PhysicalLink::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_PhysicalLink::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PhysicalLink::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_PhysicalLink::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_PhysicalLink::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_PhysicalLink::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_PhysicalLink::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_PhysicalLink::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalLink::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_PhysicalLink::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalLink::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_PhysicalLink::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_PhysicalLink::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_PhysicalLink::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_PhysicalLink::getTag(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TAG, getTag());
	return true;
}

String UNIX_PhysicalLink::getTag() const
{
	return String ("");
}

Boolean UNIX_PhysicalLink::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_PhysicalLink::getCreationClassName() const
{
	return String("UNIX_PhysicalLink");
}

Boolean UNIX_PhysicalLink::getManufacturer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURER, getManufacturer());
	return true;
}

String UNIX_PhysicalLink::getManufacturer() const
{
	return String ("");
}

Boolean UNIX_PhysicalLink::getModel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MODEL, getModel());
	return true;
}

String UNIX_PhysicalLink::getModel() const
{
	return String ("");
}

Boolean UNIX_PhysicalLink::getSKU(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_K_U, getSKU());
	return true;
}

String UNIX_PhysicalLink::getSKU() const
{
	return String ("");
}

Boolean UNIX_PhysicalLink::getSerialNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERIAL_NUMBER, getSerialNumber());
	return true;
}

String UNIX_PhysicalLink::getSerialNumber() const
{
	return String ("");
}

Boolean UNIX_PhysicalLink::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_PhysicalLink::getVersion() const
{
	return String ("");
}

Boolean UNIX_PhysicalLink::getPartNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_NUMBER, getPartNumber());
	return true;
}

String UNIX_PhysicalLink::getPartNumber() const
{
	return String ("");
}

Boolean UNIX_PhysicalLink::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

String UNIX_PhysicalLink::getOtherIdentifyingInfo() const
{
	return String ("");
}

Boolean UNIX_PhysicalLink::getPoweredOn(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWERED_ON, getPoweredOn());
	return true;
}

Boolean UNIX_PhysicalLink::getPoweredOn() const
{
	return Boolean(false);
}

Boolean UNIX_PhysicalLink::getManufactureDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURE_DATE, getManufactureDate());
	return true;
}

CIMDateTime UNIX_PhysicalLink::getManufactureDate() const
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

Boolean UNIX_PhysicalLink::getVendorEquipmentType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_EQUIPMENT_TYPE, getVendorEquipmentType());
	return true;
}

String UNIX_PhysicalLink::getVendorEquipmentType() const
{
	return String ("");
}

Boolean UNIX_PhysicalLink::getUserTracking(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_TRACKING, getUserTracking());
	return true;
}

String UNIX_PhysicalLink::getUserTracking() const
{
	return String ("");
}

Boolean UNIX_PhysicalLink::getCanBeFRUed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAN_BE_F_R_UED, getCanBeFRUed());
	return true;
}

Boolean UNIX_PhysicalLink::getCanBeFRUed() const
{
	return Boolean(false);
}

Boolean UNIX_PhysicalLink::getMaxLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_LENGTH, getMaxLength());
	return true;
}

Real64 UNIX_PhysicalLink::getMaxLength() const
{
	return Real64(0);
}

Boolean UNIX_PhysicalLink::getLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LENGTH, getLength());
	return true;
}

Real64 UNIX_PhysicalLink::getLength() const
{
	return Real64(0);
}

Boolean UNIX_PhysicalLink::getWired(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WIRED, getWired());
	return true;
}

Boolean UNIX_PhysicalLink::getWired() const
{
	return Boolean(false);
}

Boolean UNIX_PhysicalLink::getMediaType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA_TYPE, getMediaType());
	return true;
}

Uint16 UNIX_PhysicalLink::getMediaType() const
{
	return Uint16(0);
}



Boolean UNIX_PhysicalLink::initialize()
{
	return false;
}

Boolean UNIX_PhysicalLink::load(int &pIndex)
{
	return false;
}

Boolean UNIX_PhysicalLink::finalize()
{
	return false;
}

Boolean UNIX_PhysicalLink::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String tagKey;
	String creationClassNameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_TAG)) tagKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
