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


UNIX_Rack::UNIX_Rack(void)
{
}

UNIX_Rack::~UNIX_Rack(void)
{
}


Boolean UNIX_Rack::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_Rack::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_Rack::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_Rack::getCaption() const
{
	return String ("");
}

Boolean UNIX_Rack::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_Rack::getDescription() const
{
	return String ("");
}

Boolean UNIX_Rack::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_Rack::getElementName() const
{
	return String("Rack");
}

Boolean UNIX_Rack::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_Rack::getInstallDate() const
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

Boolean UNIX_Rack::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_Rack::getName() const
{
	return String ("");
}

Boolean UNIX_Rack::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_Rack::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Rack::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_Rack::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Rack::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_Rack::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_Rack::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_Rack::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_Rack::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_Rack::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_Rack::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_Rack::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_Rack::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_Rack::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_Rack::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_Rack::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_Rack::getTag(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TAG, getTag());
	return true;
}

String UNIX_Rack::getTag() const
{
	return String ("");
}

Boolean UNIX_Rack::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_Rack::getCreationClassName() const
{
	return String("UNIX_Rack");
}

Boolean UNIX_Rack::getManufacturer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURER, getManufacturer());
	return true;
}

String UNIX_Rack::getManufacturer() const
{
	return String ("");
}

Boolean UNIX_Rack::getModel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MODEL, getModel());
	return true;
}

String UNIX_Rack::getModel() const
{
	return String ("");
}

Boolean UNIX_Rack::getSKU(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_K_U, getSKU());
	return true;
}

String UNIX_Rack::getSKU() const
{
	return String ("");
}

Boolean UNIX_Rack::getSerialNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERIAL_NUMBER, getSerialNumber());
	return true;
}

String UNIX_Rack::getSerialNumber() const
{
	return String ("");
}

Boolean UNIX_Rack::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_Rack::getVersion() const
{
	return String ("");
}

Boolean UNIX_Rack::getPartNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_NUMBER, getPartNumber());
	return true;
}

String UNIX_Rack::getPartNumber() const
{
	return String ("");
}

Boolean UNIX_Rack::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

String UNIX_Rack::getOtherIdentifyingInfo() const
{
	return String ("");
}

Boolean UNIX_Rack::getPoweredOn(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWERED_ON, getPoweredOn());
	return true;
}

Boolean UNIX_Rack::getPoweredOn() const
{
	return Boolean(false);
}

Boolean UNIX_Rack::getManufactureDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURE_DATE, getManufactureDate());
	return true;
}

CIMDateTime UNIX_Rack::getManufactureDate() const
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

Boolean UNIX_Rack::getVendorEquipmentType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_EQUIPMENT_TYPE, getVendorEquipmentType());
	return true;
}

String UNIX_Rack::getVendorEquipmentType() const
{
	return String ("");
}

Boolean UNIX_Rack::getUserTracking(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_TRACKING, getUserTracking());
	return true;
}

String UNIX_Rack::getUserTracking() const
{
	return String ("");
}

Boolean UNIX_Rack::getCanBeFRUed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAN_BE_F_R_UED, getCanBeFRUed());
	return true;
}

Boolean UNIX_Rack::getCanBeFRUed() const
{
	return Boolean(false);
}

Boolean UNIX_Rack::getRemovalConditions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOVAL_CONDITIONS, getRemovalConditions());
	return true;
}

Uint16 UNIX_Rack::getRemovalConditions() const
{
	return Uint16(0);
}

Boolean UNIX_Rack::getRemovable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOVABLE, getRemovable());
	return true;
}

Boolean UNIX_Rack::getRemovable() const
{
	return Boolean(false);
}

Boolean UNIX_Rack::getReplaceable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPLACEABLE, getReplaceable());
	return true;
}

Boolean UNIX_Rack::getReplaceable() const
{
	return Boolean(false);
}

Boolean UNIX_Rack::getHotSwappable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOT_SWAPPABLE, getHotSwappable());
	return true;
}

Boolean UNIX_Rack::getHotSwappable() const
{
	return Boolean(false);
}

Boolean UNIX_Rack::getHeight(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEIGHT, getHeight());
	return true;
}

Real32 UNIX_Rack::getHeight() const
{
	return Real32(0);
}

Boolean UNIX_Rack::getDepth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPTH, getDepth());
	return true;
}

Real32 UNIX_Rack::getDepth() const
{
	return Real32(0);
}

Boolean UNIX_Rack::getWidth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WIDTH, getWidth());
	return true;
}

Real32 UNIX_Rack::getWidth() const
{
	return Real32(0);
}

Boolean UNIX_Rack::getWeight(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WEIGHT, getWeight());
	return true;
}

Real32 UNIX_Rack::getWeight() const
{
	return Real32(0);
}

Boolean UNIX_Rack::getPackageType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_TYPE, getPackageType());
	return true;
}

Uint16 UNIX_Rack::getPackageType() const
{
	return Uint16(0);
}

Boolean UNIX_Rack::getOtherPackageType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PACKAGE_TYPE, getOtherPackageType());
	return true;
}

String UNIX_Rack::getOtherPackageType() const
{
	return String ("");
}

Boolean UNIX_Rack::getVendorCompatibilityStrings(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_COMPATIBILITY_STRINGS, getVendorCompatibilityStrings());
	return true;
}

Array<String> UNIX_Rack::getVendorCompatibilityStrings() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Rack::getCableManagementStrategy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CABLE_MANAGEMENT_STRATEGY, getCableManagementStrategy());
	return true;
}

String UNIX_Rack::getCableManagementStrategy() const
{
	return String ("");
}

Boolean UNIX_Rack::getServicePhilosophy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_PHILOSOPHY, getServicePhilosophy());
	return true;
}

Array<Uint16> UNIX_Rack::getServicePhilosophy() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Rack::getServiceDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_DESCRIPTIONS, getServiceDescriptions());
	return true;
}

Array<String> UNIX_Rack::getServiceDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Rack::getLockPresent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCK_PRESENT, getLockPresent());
	return true;
}

Boolean UNIX_Rack::getLockPresent() const
{
	return Boolean(false);
}

Boolean UNIX_Rack::getAudibleAlarm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUDIBLE_ALARM, getAudibleAlarm());
	return true;
}

Boolean UNIX_Rack::getAudibleAlarm() const
{
	return Boolean(false);
}

Boolean UNIX_Rack::getVisibleAlarm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VISIBLE_ALARM, getVisibleAlarm());
	return true;
}

Boolean UNIX_Rack::getVisibleAlarm() const
{
	return Boolean(false);
}

Boolean UNIX_Rack::getSecurityBreach(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SECURITY_BREACH, getSecurityBreach());
	return true;
}

Uint16 UNIX_Rack::getSecurityBreach() const
{
	return Uint16(0);
}

Boolean UNIX_Rack::getBreachDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BREACH_DESCRIPTION, getBreachDescription());
	return true;
}

String UNIX_Rack::getBreachDescription() const
{
	return String ("");
}

Boolean UNIX_Rack::getIsLocked(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_LOCKED, getIsLocked());
	return true;
}

Boolean UNIX_Rack::getIsLocked() const
{
	return Boolean(false);
}

Boolean UNIX_Rack::getTypeOfRack(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TYPE_OF_RACK, getTypeOfRack());
	return true;
}

Uint16 UNIX_Rack::getTypeOfRack() const
{
	return Uint16(0);
}

Boolean UNIX_Rack::getCountryDesignation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COUNTRY_DESIGNATION, getCountryDesignation());
	return true;
}

String UNIX_Rack::getCountryDesignation() const
{
	return String ("");
}



Boolean UNIX_Rack::initialize()
{
	return false;
}

Boolean UNIX_Rack::load(int &pIndex)
{
	return false;
}

Boolean UNIX_Rack::finalize()
{
	return false;
}

Boolean UNIX_Rack::find(Array<CIMKeyBinding> &kbArray)
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
