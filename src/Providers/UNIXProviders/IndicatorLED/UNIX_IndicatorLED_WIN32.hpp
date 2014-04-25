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


UNIX_IndicatorLED::UNIX_IndicatorLED(void)
{
}

UNIX_IndicatorLED::~UNIX_IndicatorLED(void)
{
}


Boolean UNIX_IndicatorLED::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_IndicatorLED::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_IndicatorLED::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_IndicatorLED::getCaption() const
{
	return String ("");
}

Boolean UNIX_IndicatorLED::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_IndicatorLED::getDescription() const
{
	return String ("");
}

Boolean UNIX_IndicatorLED::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_IndicatorLED::getElementName() const
{
	return String("IndicatorLED");
}

Boolean UNIX_IndicatorLED::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_IndicatorLED::getInstallDate() const
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

Boolean UNIX_IndicatorLED::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_IndicatorLED::getName() const
{
	return String ("");
}

Boolean UNIX_IndicatorLED::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_IndicatorLED::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_IndicatorLED::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_IndicatorLED::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_IndicatorLED::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_IndicatorLED::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_IndicatorLED::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_IndicatorLED::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_IndicatorLED::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_IndicatorLED::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_IndicatorLED::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_IndicatorLED::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_IndicatorLED::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_IndicatorLED::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_IndicatorLED::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_IndicatorLED::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_IndicatorLED::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_IndicatorLED::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_IndicatorLED::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_IndicatorLED::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_IndicatorLED::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_IndicatorLED::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_IndicatorLED::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_IndicatorLED::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_IndicatorLED::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_IndicatorLED::getTimeOfLastStateChange() const
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

Boolean UNIX_IndicatorLED::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_IndicatorLED::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_IndicatorLED::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_IndicatorLED::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_IndicatorLED::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_IndicatorLED::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_IndicatorLED::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_IndicatorLED::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_IndicatorLED::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_IndicatorLED::getCreationClassName() const
{
	return String("UNIX_IndicatorLED");
}

Boolean UNIX_IndicatorLED::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_IndicatorLED::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_IndicatorLED::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_IndicatorLED::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_IndicatorLED::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_IndicatorLED::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_IndicatorLED::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_IndicatorLED::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_IndicatorLED::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_IndicatorLED::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_IndicatorLED::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_IndicatorLED::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_IndicatorLED::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_IndicatorLED::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_IndicatorLED::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_IndicatorLED::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_IndicatorLED::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_IndicatorLED::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_IndicatorLED::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_IndicatorLED::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_IndicatorLED::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_IndicatorLED::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_IndicatorLED::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_IndicatorLED::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_IndicatorLED::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_IndicatorLED::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_IndicatorLED::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_IndicatorLED::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_IndicatorLED::getIndicatedConditions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INDICATED_CONDITIONS, getIndicatedConditions());
	return true;
}

Array<Uint16> UNIX_IndicatorLED::getIndicatedConditions() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_IndicatorLED::getOtherIndicatedConditionDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_INDICATED_CONDITION_DESCRIPTION, getOtherIndicatedConditionDescription());
	return true;
}

String UNIX_IndicatorLED::getOtherIndicatedConditionDescription() const
{
	return String ("");
}

Boolean UNIX_IndicatorLED::getColor(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COLOR, getColor());
	return true;
}

Uint16 UNIX_IndicatorLED::getColor() const
{
	return Uint16(0);
}

Boolean UNIX_IndicatorLED::getOtherColorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_COLOR_DESCRIPTION, getOtherColorDescription());
	return true;
}

String UNIX_IndicatorLED::getOtherColorDescription() const
{
	return String ("");
}

Boolean UNIX_IndicatorLED::getControlMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONTROL_MODE, getControlMode());
	return true;
}

Uint16 UNIX_IndicatorLED::getControlMode() const
{
	return Uint16(0);
}

Boolean UNIX_IndicatorLED::getDefaultActivationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_ACTIVATION_STATE, getDefaultActivationState());
	return true;
}

Uint16 UNIX_IndicatorLED::getDefaultActivationState() const
{
	return Uint16(0);
}

Boolean UNIX_IndicatorLED::getActivationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTIVATION_STATE, getActivationState());
	return true;
}

Uint16 UNIX_IndicatorLED::getActivationState() const
{
	return Uint16(0);
}

Boolean UNIX_IndicatorLED::getControlPattern(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONTROL_PATTERN, getControlPattern());
	return true;
}

String UNIX_IndicatorLED::getControlPattern() const
{
	return String ("");
}



Boolean UNIX_IndicatorLED::initialize()
{
	return false;
}

Boolean UNIX_IndicatorLED::load(int &pIndex)
{
	return false;
}

Boolean UNIX_IndicatorLED::finalize()
{
	return false;
}

Boolean UNIX_IndicatorLED::find(Array<CIMKeyBinding> &kbArray)
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
