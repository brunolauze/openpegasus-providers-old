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


UNIX_MultiStateSensor::UNIX_MultiStateSensor(void)
{
}

UNIX_MultiStateSensor::~UNIX_MultiStateSensor(void)
{
}


Boolean UNIX_MultiStateSensor::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_MultiStateSensor::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_MultiStateSensor::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_MultiStateSensor::getCaption() const
{
	return String ("");
}

Boolean UNIX_MultiStateSensor::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_MultiStateSensor::getDescription() const
{
	return String ("");
}

Boolean UNIX_MultiStateSensor::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_MultiStateSensor::getElementName() const
{
	return String("MultiStateSensor");
}

Boolean UNIX_MultiStateSensor::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_MultiStateSensor::getInstallDate() const
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

Boolean UNIX_MultiStateSensor::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_MultiStateSensor::getName() const
{
	return String ("");
}

Boolean UNIX_MultiStateSensor::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_MultiStateSensor::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_MultiStateSensor::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_MultiStateSensor::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_MultiStateSensor::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_MultiStateSensor::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_MultiStateSensor::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_MultiStateSensor::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_MultiStateSensor::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_MultiStateSensor::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_MultiStateSensor::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_MultiStateSensor::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_MultiStateSensor::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_MultiStateSensor::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_MultiStateSensor::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_MultiStateSensor::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_MultiStateSensor::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_MultiStateSensor::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_MultiStateSensor::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_MultiStateSensor::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_MultiStateSensor::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_MultiStateSensor::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_MultiStateSensor::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_MultiStateSensor::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_MultiStateSensor::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_MultiStateSensor::getTimeOfLastStateChange() const
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

Boolean UNIX_MultiStateSensor::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_MultiStateSensor::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_MultiStateSensor::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_MultiStateSensor::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_MultiStateSensor::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_MultiStateSensor::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_MultiStateSensor::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_MultiStateSensor::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_MultiStateSensor::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_MultiStateSensor::getCreationClassName() const
{
	return String("UNIX_MultiStateSensor");
}

Boolean UNIX_MultiStateSensor::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_MultiStateSensor::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_MultiStateSensor::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_MultiStateSensor::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_MultiStateSensor::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_MultiStateSensor::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_MultiStateSensor::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_MultiStateSensor::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_MultiStateSensor::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_MultiStateSensor::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_MultiStateSensor::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_MultiStateSensor::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_MultiStateSensor::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_MultiStateSensor::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_MultiStateSensor::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_MultiStateSensor::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_MultiStateSensor::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_MultiStateSensor::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_MultiStateSensor::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_MultiStateSensor::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_MultiStateSensor::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_MultiStateSensor::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_MultiStateSensor::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_MultiStateSensor::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_MultiStateSensor::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_MultiStateSensor::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_MultiStateSensor::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_MultiStateSensor::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_MultiStateSensor::getSensorType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SENSOR_TYPE, getSensorType());
	return true;
}

Uint16 UNIX_MultiStateSensor::getSensorType() const
{
	return Uint16(0);
}

Boolean UNIX_MultiStateSensor::getOtherSensorTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SENSOR_TYPE_DESCRIPTION, getOtherSensorTypeDescription());
	return true;
}

String UNIX_MultiStateSensor::getOtherSensorTypeDescription() const
{
	return String ("");
}

Boolean UNIX_MultiStateSensor::getPossibleStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSSIBLE_STATES, getPossibleStates());
	return true;
}

Array<String> UNIX_MultiStateSensor::getPossibleStates() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_MultiStateSensor::getCurrentState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_STATE, getCurrentState());
	return true;
}

String UNIX_MultiStateSensor::getCurrentState() const
{
	return String ("");
}

Boolean UNIX_MultiStateSensor::getPollingInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLLING_INTERVAL, getPollingInterval());
	return true;
}

Uint64 UNIX_MultiStateSensor::getPollingInterval() const
{
	return Uint64(0);
}

Boolean UNIX_MultiStateSensor::getSensorContext(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SENSOR_CONTEXT, getSensorContext());
	return true;
}

String UNIX_MultiStateSensor::getSensorContext() const
{
	return String ("");
}



Boolean UNIX_MultiStateSensor::initialize()
{
	return false;
}

Boolean UNIX_MultiStateSensor::load(int &pIndex)
{
	return false;
}

Boolean UNIX_MultiStateSensor::finalize()
{
	return false;
}

Boolean UNIX_MultiStateSensor::find(Array<CIMKeyBinding> &kbArray)
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
