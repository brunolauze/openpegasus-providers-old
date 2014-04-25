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


UNIX_Card::UNIX_Card(void)
{
}

UNIX_Card::~UNIX_Card(void)
{
}


Boolean UNIX_Card::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_Card::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_Card::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_Card::getCaption() const
{
	return String ("");
}

Boolean UNIX_Card::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_Card::getDescription() const
{
	return String ("");
}

Boolean UNIX_Card::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_Card::getElementName() const
{
	return String("Card");
}

Boolean UNIX_Card::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_Card::getInstallDate() const
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

Boolean UNIX_Card::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_Card::getName() const
{
	return String ("");
}

Boolean UNIX_Card::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_Card::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Card::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_Card::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Card::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_Card::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_Card::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_Card::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_Card::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_Card::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_Card::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_Card::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_Card::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_Card::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_Card::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_Card::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_Card::getTag(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TAG, getTag());
	return true;
}

String UNIX_Card::getTag() const
{
	return String ("");
}

Boolean UNIX_Card::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_Card::getCreationClassName() const
{
	return String("UNIX_Card");
}

Boolean UNIX_Card::getManufacturer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURER, getManufacturer());
	return true;
}

String UNIX_Card::getManufacturer() const
{
	return String ("");
}

Boolean UNIX_Card::getModel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MODEL, getModel());
	return true;
}

String UNIX_Card::getModel() const
{
	return String ("");
}

Boolean UNIX_Card::getSKU(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_K_U, getSKU());
	return true;
}

String UNIX_Card::getSKU() const
{
	return String ("");
}

Boolean UNIX_Card::getSerialNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERIAL_NUMBER, getSerialNumber());
	return true;
}

String UNIX_Card::getSerialNumber() const
{
	return String ("");
}

Boolean UNIX_Card::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_Card::getVersion() const
{
	return String ("");
}

Boolean UNIX_Card::getPartNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_NUMBER, getPartNumber());
	return true;
}

String UNIX_Card::getPartNumber() const
{
	return String ("");
}

Boolean UNIX_Card::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

String UNIX_Card::getOtherIdentifyingInfo() const
{
	return String ("");
}

Boolean UNIX_Card::getPoweredOn(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWERED_ON, getPoweredOn());
	return true;
}

Boolean UNIX_Card::getPoweredOn() const
{
	return Boolean(false);
}

Boolean UNIX_Card::getManufactureDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURE_DATE, getManufactureDate());
	return true;
}

CIMDateTime UNIX_Card::getManufactureDate() const
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

Boolean UNIX_Card::getVendorEquipmentType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_EQUIPMENT_TYPE, getVendorEquipmentType());
	return true;
}

String UNIX_Card::getVendorEquipmentType() const
{
	return String ("");
}

Boolean UNIX_Card::getUserTracking(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_TRACKING, getUserTracking());
	return true;
}

String UNIX_Card::getUserTracking() const
{
	return String ("");
}

Boolean UNIX_Card::getCanBeFRUed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAN_BE_F_R_UED, getCanBeFRUed());
	return true;
}

Boolean UNIX_Card::getCanBeFRUed() const
{
	return Boolean(false);
}

Boolean UNIX_Card::getRemovalConditions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOVAL_CONDITIONS, getRemovalConditions());
	return true;
}

Uint16 UNIX_Card::getRemovalConditions() const
{
	return Uint16(0);
}

Boolean UNIX_Card::getRemovable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOVABLE, getRemovable());
	return true;
}

Boolean UNIX_Card::getRemovable() const
{
	return Boolean(false);
}

Boolean UNIX_Card::getReplaceable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPLACEABLE, getReplaceable());
	return true;
}

Boolean UNIX_Card::getReplaceable() const
{
	return Boolean(false);
}

Boolean UNIX_Card::getHotSwappable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOT_SWAPPABLE, getHotSwappable());
	return true;
}

Boolean UNIX_Card::getHotSwappable() const
{
	return Boolean(false);
}

Boolean UNIX_Card::getHeight(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEIGHT, getHeight());
	return true;
}

Real32 UNIX_Card::getHeight() const
{
	return Real32(0);
}

Boolean UNIX_Card::getDepth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPTH, getDepth());
	return true;
}

Real32 UNIX_Card::getDepth() const
{
	return Real32(0);
}

Boolean UNIX_Card::getWidth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WIDTH, getWidth());
	return true;
}

Real32 UNIX_Card::getWidth() const
{
	return Real32(0);
}

Boolean UNIX_Card::getWeight(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WEIGHT, getWeight());
	return true;
}

Real32 UNIX_Card::getWeight() const
{
	return Real32(0);
}

Boolean UNIX_Card::getPackageType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_TYPE, getPackageType());
	return true;
}

Uint16 UNIX_Card::getPackageType() const
{
	return Uint16(0);
}

Boolean UNIX_Card::getOtherPackageType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PACKAGE_TYPE, getOtherPackageType());
	return true;
}

String UNIX_Card::getOtherPackageType() const
{
	return String ("");
}

Boolean UNIX_Card::getVendorCompatibilityStrings(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_COMPATIBILITY_STRINGS, getVendorCompatibilityStrings());
	return true;
}

Array<String> UNIX_Card::getVendorCompatibilityStrings() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Card::getHostingBoard(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOSTING_BOARD, getHostingBoard());
	return true;
}

Boolean UNIX_Card::getHostingBoard() const
{
	return Boolean(false);
}

Boolean UNIX_Card::getSlotLayout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SLOT_LAYOUT, getSlotLayout());
	return true;
}

String UNIX_Card::getSlotLayout() const
{
	return String ("");
}

Boolean UNIX_Card::getRequiresDaughterBoard(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUIRES_DAUGHTER_BOARD, getRequiresDaughterBoard());
	return true;
}

Boolean UNIX_Card::getRequiresDaughterBoard() const
{
	return Boolean(false);
}

Boolean UNIX_Card::getSpecialRequirements(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPECIAL_REQUIREMENTS, getSpecialRequirements());
	return true;
}

Boolean UNIX_Card::getSpecialRequirements() const
{
	return Boolean(false);
}

Boolean UNIX_Card::getRequirementsDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUIREMENTS_DESCRIPTION, getRequirementsDescription());
	return true;
}

String UNIX_Card::getRequirementsDescription() const
{
	return String ("");
}

Boolean UNIX_Card::getOperatingVoltages(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_VOLTAGES, getOperatingVoltages());
	return true;
}

Array<Sint16> UNIX_Card::getOperatingVoltages() const
{
	Array<Sint16> as;
	

	return as;

}



Boolean UNIX_Card::initialize()
{
	return false;
}

Boolean UNIX_Card::load(int &pIndex)
{
	return false;
}

Boolean UNIX_Card::finalize()
{
	return false;
}

Boolean UNIX_Card::find(Array<CIMKeyBinding> &kbArray)
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
