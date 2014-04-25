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


UNIX_PowerSupply::UNIX_PowerSupply(void)
{
}

UNIX_PowerSupply::~UNIX_PowerSupply(void)
{
}


Boolean UNIX_PowerSupply::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PowerSupply::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_PowerSupply::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PowerSupply::getCaption() const
{
	return String ("");
}

Boolean UNIX_PowerSupply::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PowerSupply::getDescription() const
{
	return String ("");
}

Boolean UNIX_PowerSupply::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PowerSupply::getElementName() const
{
	return String("PowerSupply");
}

Boolean UNIX_PowerSupply::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_PowerSupply::getInstallDate() const
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

Boolean UNIX_PowerSupply::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PowerSupply::getName() const
{
	return String ("");
}

Boolean UNIX_PowerSupply::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_PowerSupply::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PowerSupply::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_PowerSupply::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PowerSupply::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_PowerSupply::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_PowerSupply::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_PowerSupply::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_PowerSupply::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_PowerSupply::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_PowerSupply::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_PowerSupply::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_PowerSupply::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_PowerSupply::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_PowerSupply::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_PowerSupply::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_PowerSupply::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_PowerSupply::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_PowerSupply::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_PowerSupply::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_PowerSupply::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_PowerSupply::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_PowerSupply::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_PowerSupply::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_PowerSupply::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_PowerSupply::getTimeOfLastStateChange() const
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

Boolean UNIX_PowerSupply::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_PowerSupply::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PowerSupply::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_PowerSupply::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_PowerSupply::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_PowerSupply::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_PowerSupply::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_PowerSupply::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_PowerSupply::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_PowerSupply::getCreationClassName() const
{
	return String("UNIX_PowerSupply");
}

Boolean UNIX_PowerSupply::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_PowerSupply::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_PowerSupply::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_PowerSupply::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_PowerSupply::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_PowerSupply::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PowerSupply::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_PowerSupply::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_PowerSupply::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_PowerSupply::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_PowerSupply::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_PowerSupply::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_PowerSupply::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_PowerSupply::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_PowerSupply::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_PowerSupply::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_PowerSupply::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_PowerSupply::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PowerSupply::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_PowerSupply::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_PowerSupply::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_PowerSupply::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_PowerSupply::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_PowerSupply::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PowerSupply::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_PowerSupply::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PowerSupply::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_PowerSupply::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_PowerSupply::getIsSwitchingSupply(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_SWITCHING_SUPPLY, getIsSwitchingSupply());
	return true;
}

Boolean UNIX_PowerSupply::getIsSwitchingSupply() const
{
	return Boolean(false);
}

Boolean UNIX_PowerSupply::getRange1InputVoltageLow(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RANGE_1_INPUT_VOLTAGE_LOW, getRange1InputVoltageLow());
	return true;
}

Uint32 UNIX_PowerSupply::getRange1InputVoltageLow() const
{
	return Uint32(0);
}

Boolean UNIX_PowerSupply::getRange1InputVoltageHigh(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RANGE_1_INPUT_VOLTAGE_HIGH, getRange1InputVoltageHigh());
	return true;
}

Uint32 UNIX_PowerSupply::getRange1InputVoltageHigh() const
{
	return Uint32(0);
}

Boolean UNIX_PowerSupply::getRange1InputFrequencyLow(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RANGE_1_INPUT_FREQUENCY_LOW, getRange1InputFrequencyLow());
	return true;
}

Uint32 UNIX_PowerSupply::getRange1InputFrequencyLow() const
{
	return Uint32(0);
}

Boolean UNIX_PowerSupply::getRange1InputFrequencyHigh(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RANGE_1_INPUT_FREQUENCY_HIGH, getRange1InputFrequencyHigh());
	return true;
}

Uint32 UNIX_PowerSupply::getRange1InputFrequencyHigh() const
{
	return Uint32(0);
}

Boolean UNIX_PowerSupply::getRange2InputVoltageLow(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RANGE_2_INPUT_VOLTAGE_LOW, getRange2InputVoltageLow());
	return true;
}

Uint32 UNIX_PowerSupply::getRange2InputVoltageLow() const
{
	return Uint32(0);
}

Boolean UNIX_PowerSupply::getRange2InputVoltageHigh(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RANGE_2_INPUT_VOLTAGE_HIGH, getRange2InputVoltageHigh());
	return true;
}

Uint32 UNIX_PowerSupply::getRange2InputVoltageHigh() const
{
	return Uint32(0);
}

Boolean UNIX_PowerSupply::getRange2InputFrequencyLow(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RANGE_2_INPUT_FREQUENCY_LOW, getRange2InputFrequencyLow());
	return true;
}

Uint32 UNIX_PowerSupply::getRange2InputFrequencyLow() const
{
	return Uint32(0);
}

Boolean UNIX_PowerSupply::getRange2InputFrequencyHigh(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RANGE_2_INPUT_FREQUENCY_HIGH, getRange2InputFrequencyHigh());
	return true;
}

Uint32 UNIX_PowerSupply::getRange2InputFrequencyHigh() const
{
	return Uint32(0);
}

Boolean UNIX_PowerSupply::getActiveInputVoltage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTIVE_INPUT_VOLTAGE, getActiveInputVoltage());
	return true;
}

Uint16 UNIX_PowerSupply::getActiveInputVoltage() const
{
	return Uint16(0);
}

Boolean UNIX_PowerSupply::getTypeOfRangeSwitching(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TYPE_OF_RANGE_SWITCHING, getTypeOfRangeSwitching());
	return true;
}

Uint16 UNIX_PowerSupply::getTypeOfRangeSwitching() const
{
	return Uint16(0);
}

Boolean UNIX_PowerSupply::getTotalOutputPower(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_OUTPUT_POWER, getTotalOutputPower());
	return true;
}

Uint32 UNIX_PowerSupply::getTotalOutputPower() const
{
	return Uint32(0);
}



Boolean UNIX_PowerSupply::initialize()
{
	return false;
}

Boolean UNIX_PowerSupply::load(int &pIndex)
{
	return false;
}

Boolean UNIX_PowerSupply::finalize()
{
	return false;
}

Boolean UNIX_PowerSupply::find(Array<CIMKeyBinding> &kbArray)
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
