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


UNIX_Magazine::UNIX_Magazine(void)
{
}

UNIX_Magazine::~UNIX_Magazine(void)
{
}


Boolean UNIX_Magazine::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_Magazine::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_Magazine::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_Magazine::getCaption() const
{
	return String ("");
}

Boolean UNIX_Magazine::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_Magazine::getDescription() const
{
	return String ("");
}

Boolean UNIX_Magazine::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_Magazine::getElementName() const
{
	return String("Magazine");
}

Boolean UNIX_Magazine::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_Magazine::getInstallDate() const
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

Boolean UNIX_Magazine::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_Magazine::getName() const
{
	return String ("");
}

Boolean UNIX_Magazine::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_Magazine::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Magazine::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_Magazine::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Magazine::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_Magazine::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_Magazine::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_Magazine::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_Magazine::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_Magazine::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_Magazine::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_Magazine::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_Magazine::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_Magazine::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_Magazine::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_Magazine::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_Magazine::getTag(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TAG, getTag());
	return true;
}

String UNIX_Magazine::getTag() const
{
	return String ("");
}

Boolean UNIX_Magazine::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_Magazine::getCreationClassName() const
{
	return String("UNIX_Magazine");
}

Boolean UNIX_Magazine::getManufacturer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURER, getManufacturer());
	return true;
}

String UNIX_Magazine::getManufacturer() const
{
	return String ("");
}

Boolean UNIX_Magazine::getModel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MODEL, getModel());
	return true;
}

String UNIX_Magazine::getModel() const
{
	return String ("");
}

Boolean UNIX_Magazine::getSKU(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_K_U, getSKU());
	return true;
}

String UNIX_Magazine::getSKU() const
{
	return String ("");
}

Boolean UNIX_Magazine::getSerialNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERIAL_NUMBER, getSerialNumber());
	return true;
}

String UNIX_Magazine::getSerialNumber() const
{
	return String ("");
}

Boolean UNIX_Magazine::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_Magazine::getVersion() const
{
	return String ("");
}

Boolean UNIX_Magazine::getPartNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_NUMBER, getPartNumber());
	return true;
}

String UNIX_Magazine::getPartNumber() const
{
	return String ("");
}

Boolean UNIX_Magazine::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

String UNIX_Magazine::getOtherIdentifyingInfo() const
{
	return String ("");
}

Boolean UNIX_Magazine::getPoweredOn(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWERED_ON, getPoweredOn());
	return true;
}

Boolean UNIX_Magazine::getPoweredOn() const
{
	return Boolean(false);
}

Boolean UNIX_Magazine::getManufactureDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURE_DATE, getManufactureDate());
	return true;
}

CIMDateTime UNIX_Magazine::getManufactureDate() const
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

Boolean UNIX_Magazine::getVendorEquipmentType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_EQUIPMENT_TYPE, getVendorEquipmentType());
	return true;
}

String UNIX_Magazine::getVendorEquipmentType() const
{
	return String ("");
}

Boolean UNIX_Magazine::getUserTracking(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_TRACKING, getUserTracking());
	return true;
}

String UNIX_Magazine::getUserTracking() const
{
	return String ("");
}

Boolean UNIX_Magazine::getCanBeFRUed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAN_BE_F_R_UED, getCanBeFRUed());
	return true;
}

Boolean UNIX_Magazine::getCanBeFRUed() const
{
	return Boolean(false);
}

Boolean UNIX_Magazine::getRemovalConditions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOVAL_CONDITIONS, getRemovalConditions());
	return true;
}

Uint16 UNIX_Magazine::getRemovalConditions() const
{
	return Uint16(0);
}

Boolean UNIX_Magazine::getRemovable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOVABLE, getRemovable());
	return true;
}

Boolean UNIX_Magazine::getRemovable() const
{
	return Boolean(false);
}

Boolean UNIX_Magazine::getReplaceable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPLACEABLE, getReplaceable());
	return true;
}

Boolean UNIX_Magazine::getReplaceable() const
{
	return Boolean(false);
}

Boolean UNIX_Magazine::getHotSwappable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOT_SWAPPABLE, getHotSwappable());
	return true;
}

Boolean UNIX_Magazine::getHotSwappable() const
{
	return Boolean(false);
}

Boolean UNIX_Magazine::getHeight(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEIGHT, getHeight());
	return true;
}

Real32 UNIX_Magazine::getHeight() const
{
	return Real32(0);
}

Boolean UNIX_Magazine::getDepth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPTH, getDepth());
	return true;
}

Real32 UNIX_Magazine::getDepth() const
{
	return Real32(0);
}

Boolean UNIX_Magazine::getWidth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WIDTH, getWidth());
	return true;
}

Real32 UNIX_Magazine::getWidth() const
{
	return Real32(0);
}

Boolean UNIX_Magazine::getWeight(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WEIGHT, getWeight());
	return true;
}

Real32 UNIX_Magazine::getWeight() const
{
	return Real32(0);
}

Boolean UNIX_Magazine::getPackageType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_TYPE, getPackageType());
	return true;
}

Uint16 UNIX_Magazine::getPackageType() const
{
	return Uint16(0);
}

Boolean UNIX_Magazine::getOtherPackageType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PACKAGE_TYPE, getOtherPackageType());
	return true;
}

String UNIX_Magazine::getOtherPackageType() const
{
	return String ("");
}

Boolean UNIX_Magazine::getVendorCompatibilityStrings(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_COMPATIBILITY_STRINGS, getVendorCompatibilityStrings());
	return true;
}

Array<String> UNIX_Magazine::getVendorCompatibilityStrings() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Magazine::getLocationCoordinates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_COORDINATES, getLocationCoordinates());
	return true;
}

String UNIX_Magazine::getLocationCoordinates() const
{
	return String ("");
}

Boolean UNIX_Magazine::getLocationType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_TYPE, getLocationType());
	return true;
}

Uint16 UNIX_Magazine::getLocationType() const
{
	return Uint16(0);
}

Boolean UNIX_Magazine::getMediaTypesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA_TYPES_SUPPORTED, getMediaTypesSupported());
	return true;
}

Array<Uint16> UNIX_Magazine::getMediaTypesSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Magazine::getMediaSizesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA_SIZES_SUPPORTED, getMediaSizesSupported());
	return true;
}

Array<Real32> UNIX_Magazine::getMediaSizesSupported() const
{
	Array<Real32> as;
	

	return as;

}

Boolean UNIX_Magazine::getMediaCapacity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA_CAPACITY, getMediaCapacity());
	return true;
}

Uint32 UNIX_Magazine::getMediaCapacity() const
{
	return Uint32(0);
}

Boolean UNIX_Magazine::getTypeDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TYPE_DESCRIPTIONS, getTypeDescriptions());
	return true;
}

Array<String> UNIX_Magazine::getTypeDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Magazine::getPhysicalLabels(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PHYSICAL_LABELS, getPhysicalLabels());
	return true;
}

Array<String> UNIX_Magazine::getPhysicalLabels() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Magazine::getLabelStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LABEL_STATES, getLabelStates());
	return true;
}

Array<Uint16> UNIX_Magazine::getLabelStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Magazine::getLabelFormats(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LABEL_FORMATS, getLabelFormats());
	return true;
}

Array<Uint16> UNIX_Magazine::getLabelFormats() const
{
	Array<Uint16> as;
	

	return as;

}



Boolean UNIX_Magazine::initialize()
{
	return false;
}

Boolean UNIX_Magazine::load(int &pIndex)
{
	return false;
}

Boolean UNIX_Magazine::finalize()
{
	return false;
}

Boolean UNIX_Magazine::find(Array<CIMKeyBinding> &kbArray)
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
