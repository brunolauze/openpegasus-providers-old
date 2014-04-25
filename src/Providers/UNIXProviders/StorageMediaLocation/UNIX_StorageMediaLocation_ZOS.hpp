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


UNIX_StorageMediaLocation::UNIX_StorageMediaLocation(void)
{
}

UNIX_StorageMediaLocation::~UNIX_StorageMediaLocation(void)
{
}


Boolean UNIX_StorageMediaLocation::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_StorageMediaLocation::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_StorageMediaLocation::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_StorageMediaLocation::getCaption() const
{
	return String ("");
}

Boolean UNIX_StorageMediaLocation::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_StorageMediaLocation::getDescription() const
{
	return String ("");
}

Boolean UNIX_StorageMediaLocation::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_StorageMediaLocation::getElementName() const
{
	return String("StorageMediaLocation");
}

Boolean UNIX_StorageMediaLocation::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_StorageMediaLocation::getInstallDate() const
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

Boolean UNIX_StorageMediaLocation::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_StorageMediaLocation::getName() const
{
	return String ("");
}

Boolean UNIX_StorageMediaLocation::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_StorageMediaLocation::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_StorageMediaLocation::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_StorageMediaLocation::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_StorageMediaLocation::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_StorageMediaLocation::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_StorageMediaLocation::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_StorageMediaLocation::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_StorageMediaLocation::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_StorageMediaLocation::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_StorageMediaLocation::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_StorageMediaLocation::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_StorageMediaLocation::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_StorageMediaLocation::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_StorageMediaLocation::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_StorageMediaLocation::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_StorageMediaLocation::getTag(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TAG, getTag());
	return true;
}

String UNIX_StorageMediaLocation::getTag() const
{
	return String ("");
}

Boolean UNIX_StorageMediaLocation::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_StorageMediaLocation::getCreationClassName() const
{
	return String("UNIX_StorageMediaLocation");
}

Boolean UNIX_StorageMediaLocation::getManufacturer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURER, getManufacturer());
	return true;
}

String UNIX_StorageMediaLocation::getManufacturer() const
{
	return String ("");
}

Boolean UNIX_StorageMediaLocation::getModel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MODEL, getModel());
	return true;
}

String UNIX_StorageMediaLocation::getModel() const
{
	return String ("");
}

Boolean UNIX_StorageMediaLocation::getSKU(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_K_U, getSKU());
	return true;
}

String UNIX_StorageMediaLocation::getSKU() const
{
	return String ("");
}

Boolean UNIX_StorageMediaLocation::getSerialNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERIAL_NUMBER, getSerialNumber());
	return true;
}

String UNIX_StorageMediaLocation::getSerialNumber() const
{
	return String ("");
}

Boolean UNIX_StorageMediaLocation::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_StorageMediaLocation::getVersion() const
{
	return String ("");
}

Boolean UNIX_StorageMediaLocation::getPartNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_NUMBER, getPartNumber());
	return true;
}

String UNIX_StorageMediaLocation::getPartNumber() const
{
	return String ("");
}

Boolean UNIX_StorageMediaLocation::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

String UNIX_StorageMediaLocation::getOtherIdentifyingInfo() const
{
	return String ("");
}

Boolean UNIX_StorageMediaLocation::getPoweredOn(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWERED_ON, getPoweredOn());
	return true;
}

Boolean UNIX_StorageMediaLocation::getPoweredOn() const
{
	return Boolean(false);
}

Boolean UNIX_StorageMediaLocation::getManufactureDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURE_DATE, getManufactureDate());
	return true;
}

CIMDateTime UNIX_StorageMediaLocation::getManufactureDate() const
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

Boolean UNIX_StorageMediaLocation::getVendorEquipmentType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_EQUIPMENT_TYPE, getVendorEquipmentType());
	return true;
}

String UNIX_StorageMediaLocation::getVendorEquipmentType() const
{
	return String ("");
}

Boolean UNIX_StorageMediaLocation::getUserTracking(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_TRACKING, getUserTracking());
	return true;
}

String UNIX_StorageMediaLocation::getUserTracking() const
{
	return String ("");
}

Boolean UNIX_StorageMediaLocation::getCanBeFRUed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAN_BE_F_R_UED, getCanBeFRUed());
	return true;
}

Boolean UNIX_StorageMediaLocation::getCanBeFRUed() const
{
	return Boolean(false);
}

Boolean UNIX_StorageMediaLocation::getRemovalConditions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOVAL_CONDITIONS, getRemovalConditions());
	return true;
}

Uint16 UNIX_StorageMediaLocation::getRemovalConditions() const
{
	return Uint16(0);
}

Boolean UNIX_StorageMediaLocation::getRemovable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOVABLE, getRemovable());
	return true;
}

Boolean UNIX_StorageMediaLocation::getRemovable() const
{
	return Boolean(false);
}

Boolean UNIX_StorageMediaLocation::getReplaceable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPLACEABLE, getReplaceable());
	return true;
}

Boolean UNIX_StorageMediaLocation::getReplaceable() const
{
	return Boolean(false);
}

Boolean UNIX_StorageMediaLocation::getHotSwappable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOT_SWAPPABLE, getHotSwappable());
	return true;
}

Boolean UNIX_StorageMediaLocation::getHotSwappable() const
{
	return Boolean(false);
}

Boolean UNIX_StorageMediaLocation::getHeight(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEIGHT, getHeight());
	return true;
}

Real32 UNIX_StorageMediaLocation::getHeight() const
{
	return Real32(0);
}

Boolean UNIX_StorageMediaLocation::getDepth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPTH, getDepth());
	return true;
}

Real32 UNIX_StorageMediaLocation::getDepth() const
{
	return Real32(0);
}

Boolean UNIX_StorageMediaLocation::getWidth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WIDTH, getWidth());
	return true;
}

Real32 UNIX_StorageMediaLocation::getWidth() const
{
	return Real32(0);
}

Boolean UNIX_StorageMediaLocation::getWeight(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WEIGHT, getWeight());
	return true;
}

Real32 UNIX_StorageMediaLocation::getWeight() const
{
	return Real32(0);
}

Boolean UNIX_StorageMediaLocation::getPackageType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_TYPE, getPackageType());
	return true;
}

Uint16 UNIX_StorageMediaLocation::getPackageType() const
{
	return Uint16(0);
}

Boolean UNIX_StorageMediaLocation::getOtherPackageType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PACKAGE_TYPE, getOtherPackageType());
	return true;
}

String UNIX_StorageMediaLocation::getOtherPackageType() const
{
	return String ("");
}

Boolean UNIX_StorageMediaLocation::getVendorCompatibilityStrings(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_COMPATIBILITY_STRINGS, getVendorCompatibilityStrings());
	return true;
}

Array<String> UNIX_StorageMediaLocation::getVendorCompatibilityStrings() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_StorageMediaLocation::getLocationCoordinates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_COORDINATES, getLocationCoordinates());
	return true;
}

String UNIX_StorageMediaLocation::getLocationCoordinates() const
{
	return String ("");
}

Boolean UNIX_StorageMediaLocation::getLocationType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_TYPE, getLocationType());
	return true;
}

Uint16 UNIX_StorageMediaLocation::getLocationType() const
{
	return Uint16(0);
}

Boolean UNIX_StorageMediaLocation::getMediaTypesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA_TYPES_SUPPORTED, getMediaTypesSupported());
	return true;
}

Array<Uint16> UNIX_StorageMediaLocation::getMediaTypesSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_StorageMediaLocation::getMediaSizesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA_SIZES_SUPPORTED, getMediaSizesSupported());
	return true;
}

Array<Real32> UNIX_StorageMediaLocation::getMediaSizesSupported() const
{
	Array<Real32> as;
	

	return as;

}

Boolean UNIX_StorageMediaLocation::getMediaCapacity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA_CAPACITY, getMediaCapacity());
	return true;
}

Uint32 UNIX_StorageMediaLocation::getMediaCapacity() const
{
	return Uint32(0);
}

Boolean UNIX_StorageMediaLocation::getTypeDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TYPE_DESCRIPTIONS, getTypeDescriptions());
	return true;
}

Array<String> UNIX_StorageMediaLocation::getTypeDescriptions() const
{
	Array<String> as;
	

	return as;

}



Boolean UNIX_StorageMediaLocation::initialize()
{
	return false;
}

Boolean UNIX_StorageMediaLocation::load(int &pIndex)
{
	return false;
}

Boolean UNIX_StorageMediaLocation::finalize()
{
	return false;
}

Boolean UNIX_StorageMediaLocation::find(Array<CIMKeyBinding> &kbArray)
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
