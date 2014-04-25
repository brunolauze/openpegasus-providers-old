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


UNIX_Battery::UNIX_Battery(void)
{
}

UNIX_Battery::~UNIX_Battery(void)
{
}


Boolean UNIX_Battery::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_Battery::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_Battery::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_Battery::getCaption() const
{
	return String ("");
}

Boolean UNIX_Battery::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_Battery::getDescription() const
{
	return String ("");
}

Boolean UNIX_Battery::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_Battery::getElementName() const
{
	return String("Battery");
}

Boolean UNIX_Battery::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_Battery::getInstallDate() const
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

Boolean UNIX_Battery::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_Battery::getName() const
{
	return String ("");
}

Boolean UNIX_Battery::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_Battery::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Battery::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_Battery::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Battery::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_Battery::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_Battery::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_Battery::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_Battery::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_Battery::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_Battery::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_Battery::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_Battery::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_Battery::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_Battery::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_Battery::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_Battery::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_Battery::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_Battery::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_Battery::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_Battery::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_Battery::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_Battery::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_Battery::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_Battery::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_Battery::getTimeOfLastStateChange() const
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

Boolean UNIX_Battery::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_Battery::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Battery::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_Battery::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_Battery::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_Battery::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_Battery::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_Battery::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_Battery::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_Battery::getCreationClassName() const
{
	return String("UNIX_Battery");
}

Boolean UNIX_Battery::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_Battery::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_Battery::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_Battery::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_Battery::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_Battery::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Battery::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_Battery::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_Battery::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_Battery::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_Battery::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_Battery::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_Battery::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_Battery::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_Battery::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_Battery::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_Battery::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_Battery::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Battery::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_Battery::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_Battery::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_Battery::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_Battery::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_Battery::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Battery::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_Battery::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Battery::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_Battery::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_Battery::getBatteryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BATTERY_STATUS, getBatteryStatus());
	return true;
}

Uint16 UNIX_Battery::getBatteryStatus() const
{
	return Uint16(0);
}

Boolean UNIX_Battery::getTimeOnBattery(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_ON_BATTERY, getTimeOnBattery());
	return true;
}

Uint32 UNIX_Battery::getTimeOnBattery() const
{
	return Uint32(0);
}

Boolean UNIX_Battery::getEstimatedRunTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ESTIMATED_RUN_TIME, getEstimatedRunTime());
	return true;
}

Uint32 UNIX_Battery::getEstimatedRunTime() const
{
	return Uint32(0);
}

Boolean UNIX_Battery::getEstimatedChargeRemaining(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ESTIMATED_CHARGE_REMAINING, getEstimatedChargeRemaining());
	return true;
}

Uint16 UNIX_Battery::getEstimatedChargeRemaining() const
{
	return Uint16(0);
}

Boolean UNIX_Battery::getChemistry(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHEMISTRY, getChemistry());
	return true;
}

Uint16 UNIX_Battery::getChemistry() const
{
	return Uint16(0);
}

Boolean UNIX_Battery::getDesignCapacity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESIGN_CAPACITY, getDesignCapacity());
	return true;
}

Uint32 UNIX_Battery::getDesignCapacity() const
{
	return Uint32(0);
}

Boolean UNIX_Battery::getFullChargeCapacity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FULL_CHARGE_CAPACITY, getFullChargeCapacity());
	return true;
}

Uint32 UNIX_Battery::getFullChargeCapacity() const
{
	return Uint32(0);
}

Boolean UNIX_Battery::getDesignVoltage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESIGN_VOLTAGE, getDesignVoltage());
	return true;
}

Uint64 UNIX_Battery::getDesignVoltage() const
{
	return Uint64(0);
}

Boolean UNIX_Battery::getSmartBatteryVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SMART_BATTERY_VERSION, getSmartBatteryVersion());
	return true;
}

String UNIX_Battery::getSmartBatteryVersion() const
{
	return String ("");
}

Boolean UNIX_Battery::getTimeToFullCharge(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_TO_FULL_CHARGE, getTimeToFullCharge());
	return true;
}

Uint32 UNIX_Battery::getTimeToFullCharge() const
{
	return Uint32(0);
}

Boolean UNIX_Battery::getExpectedLife(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXPECTED_LIFE, getExpectedLife());
	return true;
}

Uint32 UNIX_Battery::getExpectedLife() const
{
	return Uint32(0);
}

Boolean UNIX_Battery::getMaxRechargeTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_RECHARGE_TIME, getMaxRechargeTime());
	return true;
}

Uint32 UNIX_Battery::getMaxRechargeTime() const
{
	return Uint32(0);
}

Boolean UNIX_Battery::getRechargeCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECHARGE_COUNT, getRechargeCount());
	return true;
}

Uint32 UNIX_Battery::getRechargeCount() const
{
	return Uint32(0);
}

Boolean UNIX_Battery::getMaxRechargeCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_RECHARGE_COUNT, getMaxRechargeCount());
	return true;
}

Uint32 UNIX_Battery::getMaxRechargeCount() const
{
	return Uint32(0);
}

Boolean UNIX_Battery::getRemainingCapacity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMAINING_CAPACITY, getRemainingCapacity());
	return true;
}

Uint32 UNIX_Battery::getRemainingCapacity() const
{
	return Uint32(0);
}

Boolean UNIX_Battery::getRemainingCapacityMaxError(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMAINING_CAPACITY_MAX_ERROR, getRemainingCapacityMaxError());
	return true;
}

Uint8 UNIX_Battery::getRemainingCapacityMaxError() const
{
	return Uint8(0);
}

Boolean UNIX_Battery::getOtherChemistryDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_CHEMISTRY_DESCRIPTION, getOtherChemistryDescription());
	return true;
}

String UNIX_Battery::getOtherChemistryDescription() const
{
	return String ("");
}

Boolean UNIX_Battery::getChargingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHARGING_STATUS, getChargingStatus());
	return true;
}

Uint16 UNIX_Battery::getChargingStatus() const
{
	return Uint16(0);
}

Boolean UNIX_Battery::getHealthPercent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_PERCENT, getHealthPercent());
	return true;
}

Uint8 UNIX_Battery::getHealthPercent() const
{
	return Uint8(0);
}



Boolean UNIX_Battery::initialize()
{
	return false;
}

Boolean UNIX_Battery::load(int &pIndex)
{
	return false;
}

Boolean UNIX_Battery::finalize()
{
	return false;
}

Boolean UNIX_Battery::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String creationClassNameKey;
	String deviceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DEVICE_ID)) deviceIDKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
