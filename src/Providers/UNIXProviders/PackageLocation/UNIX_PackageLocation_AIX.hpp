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


UNIX_PackageLocation::UNIX_PackageLocation(void)
{
}

UNIX_PackageLocation::~UNIX_PackageLocation(void)
{
}


Boolean UNIX_PackageLocation::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PackageLocation::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_PackageLocation::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PackageLocation::getCaption() const
{
	return String ("");
}

Boolean UNIX_PackageLocation::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PackageLocation::getDescription() const
{
	return String ("");
}

Boolean UNIX_PackageLocation::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PackageLocation::getElementName() const
{
	return String("PackageLocation");
}

Boolean UNIX_PackageLocation::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_PackageLocation::getInstallDate() const
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

Boolean UNIX_PackageLocation::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PackageLocation::getName() const
{
	return String ("");
}

Boolean UNIX_PackageLocation::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_PackageLocation::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PackageLocation::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_PackageLocation::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PackageLocation::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_PackageLocation::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_PackageLocation::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_PackageLocation::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_PackageLocation::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_PackageLocation::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_PackageLocation::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_PackageLocation::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_PackageLocation::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_PackageLocation::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_PackageLocation::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_PackageLocation::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_PackageLocation::getTag(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TAG, getTag());
	return true;
}

String UNIX_PackageLocation::getTag() const
{
	return String ("");
}

Boolean UNIX_PackageLocation::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_PackageLocation::getCreationClassName() const
{
	return String("UNIX_PackageLocation");
}

Boolean UNIX_PackageLocation::getManufacturer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURER, getManufacturer());
	return true;
}

String UNIX_PackageLocation::getManufacturer() const
{
	return String ("");
}

Boolean UNIX_PackageLocation::getModel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MODEL, getModel());
	return true;
}

String UNIX_PackageLocation::getModel() const
{
	return String ("");
}

Boolean UNIX_PackageLocation::getSKU(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_K_U, getSKU());
	return true;
}

String UNIX_PackageLocation::getSKU() const
{
	return String ("");
}

Boolean UNIX_PackageLocation::getSerialNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERIAL_NUMBER, getSerialNumber());
	return true;
}

String UNIX_PackageLocation::getSerialNumber() const
{
	return String ("");
}

Boolean UNIX_PackageLocation::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_PackageLocation::getVersion() const
{
	return String ("");
}

Boolean UNIX_PackageLocation::getPartNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_NUMBER, getPartNumber());
	return true;
}

String UNIX_PackageLocation::getPartNumber() const
{
	return String ("");
}

Boolean UNIX_PackageLocation::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

String UNIX_PackageLocation::getOtherIdentifyingInfo() const
{
	return String ("");
}

Boolean UNIX_PackageLocation::getPoweredOn(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWERED_ON, getPoweredOn());
	return true;
}

Boolean UNIX_PackageLocation::getPoweredOn() const
{
	return Boolean(false);
}

Boolean UNIX_PackageLocation::getManufactureDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURE_DATE, getManufactureDate());
	return true;
}

CIMDateTime UNIX_PackageLocation::getManufactureDate() const
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

Boolean UNIX_PackageLocation::getVendorEquipmentType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_EQUIPMENT_TYPE, getVendorEquipmentType());
	return true;
}

String UNIX_PackageLocation::getVendorEquipmentType() const
{
	return String ("");
}

Boolean UNIX_PackageLocation::getUserTracking(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_TRACKING, getUserTracking());
	return true;
}

String UNIX_PackageLocation::getUserTracking() const
{
	return String ("");
}

Boolean UNIX_PackageLocation::getCanBeFRUed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAN_BE_F_R_UED, getCanBeFRUed());
	return true;
}

Boolean UNIX_PackageLocation::getCanBeFRUed() const
{
	return Boolean(false);
}

Boolean UNIX_PackageLocation::getRemovalConditions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOVAL_CONDITIONS, getRemovalConditions());
	return true;
}

Uint16 UNIX_PackageLocation::getRemovalConditions() const
{
	return Uint16(0);
}

Boolean UNIX_PackageLocation::getRemovable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOVABLE, getRemovable());
	return true;
}

Boolean UNIX_PackageLocation::getRemovable() const
{
	return Boolean(false);
}

Boolean UNIX_PackageLocation::getReplaceable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPLACEABLE, getReplaceable());
	return true;
}

Boolean UNIX_PackageLocation::getReplaceable() const
{
	return Boolean(false);
}

Boolean UNIX_PackageLocation::getHotSwappable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOT_SWAPPABLE, getHotSwappable());
	return true;
}

Boolean UNIX_PackageLocation::getHotSwappable() const
{
	return Boolean(false);
}

Boolean UNIX_PackageLocation::getHeight(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEIGHT, getHeight());
	return true;
}

Real32 UNIX_PackageLocation::getHeight() const
{
	return Real32(0);
}

Boolean UNIX_PackageLocation::getDepth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPTH, getDepth());
	return true;
}

Real32 UNIX_PackageLocation::getDepth() const
{
	return Real32(0);
}

Boolean UNIX_PackageLocation::getWidth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WIDTH, getWidth());
	return true;
}

Real32 UNIX_PackageLocation::getWidth() const
{
	return Real32(0);
}

Boolean UNIX_PackageLocation::getWeight(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WEIGHT, getWeight());
	return true;
}

Real32 UNIX_PackageLocation::getWeight() const
{
	return Real32(0);
}

Boolean UNIX_PackageLocation::getPackageType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_TYPE, getPackageType());
	return true;
}

Uint16 UNIX_PackageLocation::getPackageType() const
{
	return Uint16(0);
}

Boolean UNIX_PackageLocation::getOtherPackageType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PACKAGE_TYPE, getOtherPackageType());
	return true;
}

String UNIX_PackageLocation::getOtherPackageType() const
{
	return String ("");
}

Boolean UNIX_PackageLocation::getVendorCompatibilityStrings(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_COMPATIBILITY_STRINGS, getVendorCompatibilityStrings());
	return true;
}

Array<String> UNIX_PackageLocation::getVendorCompatibilityStrings() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PackageLocation::getLocationCoordinates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_COORDINATES, getLocationCoordinates());
	return true;
}

String UNIX_PackageLocation::getLocationCoordinates() const
{
	return String ("");
}



Boolean UNIX_PackageLocation::initialize()
{
	return false;
}

Boolean UNIX_PackageLocation::load(int &pIndex)
{
	return false;
}

Boolean UNIX_PackageLocation::finalize()
{
	return false;
}

Boolean UNIX_PackageLocation::find(Array<CIMKeyBinding> &kbArray)
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
