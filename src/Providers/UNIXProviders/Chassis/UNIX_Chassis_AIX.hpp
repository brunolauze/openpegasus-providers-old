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


UNIX_Chassis::UNIX_Chassis(void)
{
}

UNIX_Chassis::~UNIX_Chassis(void)
{
}


Boolean UNIX_Chassis::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_Chassis::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_Chassis::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_Chassis::getCaption() const
{
	return String ("");
}

Boolean UNIX_Chassis::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_Chassis::getDescription() const
{
	return String ("");
}

Boolean UNIX_Chassis::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_Chassis::getElementName() const
{
	return String("Chassis");
}

Boolean UNIX_Chassis::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_Chassis::getInstallDate() const
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

Boolean UNIX_Chassis::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_Chassis::getName() const
{
	return String ("");
}

Boolean UNIX_Chassis::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_Chassis::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Chassis::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_Chassis::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Chassis::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_Chassis::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_Chassis::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_Chassis::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_Chassis::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_Chassis::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_Chassis::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_Chassis::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_Chassis::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_Chassis::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_Chassis::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_Chassis::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_Chassis::getTag(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TAG, getTag());
	return true;
}

String UNIX_Chassis::getTag() const
{
	return String ("");
}

Boolean UNIX_Chassis::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_Chassis::getCreationClassName() const
{
	return String("UNIX_Chassis");
}

Boolean UNIX_Chassis::getManufacturer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURER, getManufacturer());
	return true;
}

String UNIX_Chassis::getManufacturer() const
{
	return String ("");
}

Boolean UNIX_Chassis::getModel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MODEL, getModel());
	return true;
}

String UNIX_Chassis::getModel() const
{
	return String ("");
}

Boolean UNIX_Chassis::getSKU(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_K_U, getSKU());
	return true;
}

String UNIX_Chassis::getSKU() const
{
	return String ("");
}

Boolean UNIX_Chassis::getSerialNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERIAL_NUMBER, getSerialNumber());
	return true;
}

String UNIX_Chassis::getSerialNumber() const
{
	return String ("");
}

Boolean UNIX_Chassis::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_Chassis::getVersion() const
{
	return String ("");
}

Boolean UNIX_Chassis::getPartNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_NUMBER, getPartNumber());
	return true;
}

String UNIX_Chassis::getPartNumber() const
{
	return String ("");
}

Boolean UNIX_Chassis::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

String UNIX_Chassis::getOtherIdentifyingInfo() const
{
	return String ("");
}

Boolean UNIX_Chassis::getPoweredOn(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWERED_ON, getPoweredOn());
	return true;
}

Boolean UNIX_Chassis::getPoweredOn() const
{
	return Boolean(false);
}

Boolean UNIX_Chassis::getManufactureDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURE_DATE, getManufactureDate());
	return true;
}

CIMDateTime UNIX_Chassis::getManufactureDate() const
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

Boolean UNIX_Chassis::getVendorEquipmentType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_EQUIPMENT_TYPE, getVendorEquipmentType());
	return true;
}

String UNIX_Chassis::getVendorEquipmentType() const
{
	return String ("");
}

Boolean UNIX_Chassis::getUserTracking(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_TRACKING, getUserTracking());
	return true;
}

String UNIX_Chassis::getUserTracking() const
{
	return String ("");
}

Boolean UNIX_Chassis::getCanBeFRUed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAN_BE_F_R_UED, getCanBeFRUed());
	return true;
}

Boolean UNIX_Chassis::getCanBeFRUed() const
{
	return Boolean(false);
}

Boolean UNIX_Chassis::getRemovalConditions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOVAL_CONDITIONS, getRemovalConditions());
	return true;
}

Uint16 UNIX_Chassis::getRemovalConditions() const
{
	return Uint16(0);
}

Boolean UNIX_Chassis::getRemovable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOVABLE, getRemovable());
	return true;
}

Boolean UNIX_Chassis::getRemovable() const
{
	return Boolean(false);
}

Boolean UNIX_Chassis::getReplaceable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPLACEABLE, getReplaceable());
	return true;
}

Boolean UNIX_Chassis::getReplaceable() const
{
	return Boolean(false);
}

Boolean UNIX_Chassis::getHotSwappable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOT_SWAPPABLE, getHotSwappable());
	return true;
}

Boolean UNIX_Chassis::getHotSwappable() const
{
	return Boolean(false);
}

Boolean UNIX_Chassis::getHeight(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEIGHT, getHeight());
	return true;
}

Real32 UNIX_Chassis::getHeight() const
{
	return Real32(0);
}

Boolean UNIX_Chassis::getDepth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPTH, getDepth());
	return true;
}

Real32 UNIX_Chassis::getDepth() const
{
	return Real32(0);
}

Boolean UNIX_Chassis::getWidth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WIDTH, getWidth());
	return true;
}

Real32 UNIX_Chassis::getWidth() const
{
	return Real32(0);
}

Boolean UNIX_Chassis::getWeight(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WEIGHT, getWeight());
	return true;
}

Real32 UNIX_Chassis::getWeight() const
{
	return Real32(0);
}

Boolean UNIX_Chassis::getPackageType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_TYPE, getPackageType());
	return true;
}

Uint16 UNIX_Chassis::getPackageType() const
{
	return Uint16(0);
}

Boolean UNIX_Chassis::getOtherPackageType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PACKAGE_TYPE, getOtherPackageType());
	return true;
}

String UNIX_Chassis::getOtherPackageType() const
{
	return String ("");
}

Boolean UNIX_Chassis::getVendorCompatibilityStrings(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_COMPATIBILITY_STRINGS, getVendorCompatibilityStrings());
	return true;
}

Array<String> UNIX_Chassis::getVendorCompatibilityStrings() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Chassis::getCableManagementStrategy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CABLE_MANAGEMENT_STRATEGY, getCableManagementStrategy());
	return true;
}

String UNIX_Chassis::getCableManagementStrategy() const
{
	return String ("");
}

Boolean UNIX_Chassis::getServicePhilosophy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_PHILOSOPHY, getServicePhilosophy());
	return true;
}

Array<Uint16> UNIX_Chassis::getServicePhilosophy() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Chassis::getServiceDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_DESCRIPTIONS, getServiceDescriptions());
	return true;
}

Array<String> UNIX_Chassis::getServiceDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Chassis::getLockPresent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCK_PRESENT, getLockPresent());
	return true;
}

Boolean UNIX_Chassis::getLockPresent() const
{
	return Boolean(false);
}

Boolean UNIX_Chassis::getAudibleAlarm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUDIBLE_ALARM, getAudibleAlarm());
	return true;
}

Boolean UNIX_Chassis::getAudibleAlarm() const
{
	return Boolean(false);
}

Boolean UNIX_Chassis::getVisibleAlarm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VISIBLE_ALARM, getVisibleAlarm());
	return true;
}

Boolean UNIX_Chassis::getVisibleAlarm() const
{
	return Boolean(false);
}

Boolean UNIX_Chassis::getSecurityBreach(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SECURITY_BREACH, getSecurityBreach());
	return true;
}

Uint16 UNIX_Chassis::getSecurityBreach() const
{
	return Uint16(0);
}

Boolean UNIX_Chassis::getBreachDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BREACH_DESCRIPTION, getBreachDescription());
	return true;
}

String UNIX_Chassis::getBreachDescription() const
{
	return String ("");
}

Boolean UNIX_Chassis::getIsLocked(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_LOCKED, getIsLocked());
	return true;
}

Boolean UNIX_Chassis::getIsLocked() const
{
	return Boolean(false);
}

Boolean UNIX_Chassis::getNumberOfPowerCords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_POWER_CORDS, getNumberOfPowerCords());
	return true;
}

Uint16 UNIX_Chassis::getNumberOfPowerCords() const
{
	return Uint16(0);
}

Boolean UNIX_Chassis::getCurrentRequiredOrProduced(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_REQUIRED_OR_PRODUCED, getCurrentRequiredOrProduced());
	return true;
}

Sint16 UNIX_Chassis::getCurrentRequiredOrProduced() const
{
	return Sint16(0);
}

Boolean UNIX_Chassis::getHeatGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEAT_GENERATION, getHeatGeneration());
	return true;
}

Uint16 UNIX_Chassis::getHeatGeneration() const
{
	return Uint16(0);
}

Boolean UNIX_Chassis::getChassisTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHASSIS_TYPES, getChassisTypes());
	return true;
}

Array<Uint16> UNIX_Chassis::getChassisTypes() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Chassis::getTypeDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TYPE_DESCRIPTIONS, getTypeDescriptions());
	return true;
}

Array<String> UNIX_Chassis::getTypeDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Chassis::getChassisPackageType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHASSIS_PACKAGE_TYPE, getChassisPackageType());
	return true;
}

Uint16 UNIX_Chassis::getChassisPackageType() const
{
	return Uint16(0);
}

Boolean UNIX_Chassis::getChassisTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHASSIS_TYPE_DESCRIPTION, getChassisTypeDescription());
	return true;
}

String UNIX_Chassis::getChassisTypeDescription() const
{
	return String ("");
}

Boolean UNIX_Chassis::getMultipleSystemSupport(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MULTIPLE_SYSTEM_SUPPORT, getMultipleSystemSupport());
	return true;
}

Uint16 UNIX_Chassis::getMultipleSystemSupport() const
{
	return Uint16(0);
}

Boolean UNIX_Chassis::getRackMountable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RACK_MOUNTABLE, getRackMountable());
	return true;
}

Uint16 UNIX_Chassis::getRackMountable() const
{
	return Uint16(0);
}



Boolean UNIX_Chassis::initialize()
{
	return false;
}

Boolean UNIX_Chassis::load(int &pIndex)
{
	return false;
}

Boolean UNIX_Chassis::finalize()
{
	return false;
}

Boolean UNIX_Chassis::find(Array<CIMKeyBinding> &kbArray)
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
