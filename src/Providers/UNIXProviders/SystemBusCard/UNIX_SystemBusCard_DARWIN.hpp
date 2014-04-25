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


UNIX_SystemBusCard::UNIX_SystemBusCard(void)
{
}

UNIX_SystemBusCard::~UNIX_SystemBusCard(void)
{
}


Boolean UNIX_SystemBusCard::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SystemBusCard::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_SystemBusCard::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SystemBusCard::getCaption() const
{
	return String ("");
}

Boolean UNIX_SystemBusCard::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SystemBusCard::getDescription() const
{
	return String ("");
}

Boolean UNIX_SystemBusCard::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SystemBusCard::getElementName() const
{
	return String("SystemBusCard");
}

Boolean UNIX_SystemBusCard::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_SystemBusCard::getInstallDate() const
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

Boolean UNIX_SystemBusCard::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_SystemBusCard::getName() const
{
	return String ("");
}

Boolean UNIX_SystemBusCard::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_SystemBusCard::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_SystemBusCard::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_SystemBusCard::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_SystemBusCard::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_SystemBusCard::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_SystemBusCard::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_SystemBusCard::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_SystemBusCard::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_SystemBusCard::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_SystemBusCard::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_SystemBusCard::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_SystemBusCard::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_SystemBusCard::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_SystemBusCard::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_SystemBusCard::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_SystemBusCard::getTag(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TAG, getTag());
	return true;
}

String UNIX_SystemBusCard::getTag() const
{
	return String ("");
}

Boolean UNIX_SystemBusCard::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_SystemBusCard::getCreationClassName() const
{
	return String("UNIX_SystemBusCard");
}

Boolean UNIX_SystemBusCard::getManufacturer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURER, getManufacturer());
	return true;
}

String UNIX_SystemBusCard::getManufacturer() const
{
	return String ("");
}

Boolean UNIX_SystemBusCard::getModel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MODEL, getModel());
	return true;
}

String UNIX_SystemBusCard::getModel() const
{
	return String ("");
}

Boolean UNIX_SystemBusCard::getSKU(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_K_U, getSKU());
	return true;
}

String UNIX_SystemBusCard::getSKU() const
{
	return String ("");
}

Boolean UNIX_SystemBusCard::getSerialNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERIAL_NUMBER, getSerialNumber());
	return true;
}

String UNIX_SystemBusCard::getSerialNumber() const
{
	return String ("");
}

Boolean UNIX_SystemBusCard::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_SystemBusCard::getVersion() const
{
	return String ("");
}

Boolean UNIX_SystemBusCard::getPartNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_NUMBER, getPartNumber());
	return true;
}

String UNIX_SystemBusCard::getPartNumber() const
{
	return String ("");
}

Boolean UNIX_SystemBusCard::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

String UNIX_SystemBusCard::getOtherIdentifyingInfo() const
{
	return String ("");
}

Boolean UNIX_SystemBusCard::getPoweredOn(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWERED_ON, getPoweredOn());
	return true;
}

Boolean UNIX_SystemBusCard::getPoweredOn() const
{
	return Boolean(false);
}

Boolean UNIX_SystemBusCard::getManufactureDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURE_DATE, getManufactureDate());
	return true;
}

CIMDateTime UNIX_SystemBusCard::getManufactureDate() const
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

Boolean UNIX_SystemBusCard::getVendorEquipmentType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_EQUIPMENT_TYPE, getVendorEquipmentType());
	return true;
}

String UNIX_SystemBusCard::getVendorEquipmentType() const
{
	return String ("");
}

Boolean UNIX_SystemBusCard::getUserTracking(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_TRACKING, getUserTracking());
	return true;
}

String UNIX_SystemBusCard::getUserTracking() const
{
	return String ("");
}

Boolean UNIX_SystemBusCard::getCanBeFRUed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAN_BE_F_R_UED, getCanBeFRUed());
	return true;
}

Boolean UNIX_SystemBusCard::getCanBeFRUed() const
{
	return Boolean(false);
}

Boolean UNIX_SystemBusCard::getRemovalConditions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOVAL_CONDITIONS, getRemovalConditions());
	return true;
}

Uint16 UNIX_SystemBusCard::getRemovalConditions() const
{
	return Uint16(0);
}

Boolean UNIX_SystemBusCard::getRemovable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOVABLE, getRemovable());
	return true;
}

Boolean UNIX_SystemBusCard::getRemovable() const
{
	return Boolean(false);
}

Boolean UNIX_SystemBusCard::getReplaceable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPLACEABLE, getReplaceable());
	return true;
}

Boolean UNIX_SystemBusCard::getReplaceable() const
{
	return Boolean(false);
}

Boolean UNIX_SystemBusCard::getHotSwappable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOT_SWAPPABLE, getHotSwappable());
	return true;
}

Boolean UNIX_SystemBusCard::getHotSwappable() const
{
	return Boolean(false);
}

Boolean UNIX_SystemBusCard::getHeight(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEIGHT, getHeight());
	return true;
}

Real32 UNIX_SystemBusCard::getHeight() const
{
	return Real32(0);
}

Boolean UNIX_SystemBusCard::getDepth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPTH, getDepth());
	return true;
}

Real32 UNIX_SystemBusCard::getDepth() const
{
	return Real32(0);
}

Boolean UNIX_SystemBusCard::getWidth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WIDTH, getWidth());
	return true;
}

Real32 UNIX_SystemBusCard::getWidth() const
{
	return Real32(0);
}

Boolean UNIX_SystemBusCard::getWeight(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WEIGHT, getWeight());
	return true;
}

Real32 UNIX_SystemBusCard::getWeight() const
{
	return Real32(0);
}

Boolean UNIX_SystemBusCard::getPackageType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_TYPE, getPackageType());
	return true;
}

Uint16 UNIX_SystemBusCard::getPackageType() const
{
	return Uint16(0);
}

Boolean UNIX_SystemBusCard::getOtherPackageType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PACKAGE_TYPE, getOtherPackageType());
	return true;
}

String UNIX_SystemBusCard::getOtherPackageType() const
{
	return String ("");
}

Boolean UNIX_SystemBusCard::getVendorCompatibilityStrings(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_COMPATIBILITY_STRINGS, getVendorCompatibilityStrings());
	return true;
}

Array<String> UNIX_SystemBusCard::getVendorCompatibilityStrings() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_SystemBusCard::getHostingBoard(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOSTING_BOARD, getHostingBoard());
	return true;
}

Boolean UNIX_SystemBusCard::getHostingBoard() const
{
	return Boolean(false);
}

Boolean UNIX_SystemBusCard::getSlotLayout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SLOT_LAYOUT, getSlotLayout());
	return true;
}

String UNIX_SystemBusCard::getSlotLayout() const
{
	return String ("");
}

Boolean UNIX_SystemBusCard::getRequiresDaughterBoard(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUIRES_DAUGHTER_BOARD, getRequiresDaughterBoard());
	return true;
}

Boolean UNIX_SystemBusCard::getRequiresDaughterBoard() const
{
	return Boolean(false);
}

Boolean UNIX_SystemBusCard::getSpecialRequirements(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPECIAL_REQUIREMENTS, getSpecialRequirements());
	return true;
}

Boolean UNIX_SystemBusCard::getSpecialRequirements() const
{
	return Boolean(false);
}

Boolean UNIX_SystemBusCard::getRequirementsDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUIREMENTS_DESCRIPTION, getRequirementsDescription());
	return true;
}

String UNIX_SystemBusCard::getRequirementsDescription() const
{
	return String ("");
}

Boolean UNIX_SystemBusCard::getOperatingVoltages(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_VOLTAGES, getOperatingVoltages());
	return true;
}

Array<Sint16> UNIX_SystemBusCard::getOperatingVoltages() const
{
	Array<Sint16> as;
	

	return as;

}

Boolean UNIX_SystemBusCard::getBusType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUS_TYPE, getBusType());
	return true;
}

Uint16 UNIX_SystemBusCard::getBusType() const
{
	return Uint16(0);
}

Boolean UNIX_SystemBusCard::getBusWidth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUS_WIDTH, getBusWidth());
	return true;
}

Uint16 UNIX_SystemBusCard::getBusWidth() const
{
	return Uint16(0);
}



Boolean UNIX_SystemBusCard::initialize()
{
	return false;
}

Boolean UNIX_SystemBusCard::load(int &pIndex)
{
	return false;
}

Boolean UNIX_SystemBusCard::finalize()
{
	return false;
}

Boolean UNIX_SystemBusCard::find(Array<CIMKeyBinding> &kbArray)
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
