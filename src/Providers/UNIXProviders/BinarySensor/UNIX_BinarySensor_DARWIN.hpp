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


UNIX_BinarySensor::UNIX_BinarySensor(void)
{
}

UNIX_BinarySensor::~UNIX_BinarySensor(void)
{
}


Boolean UNIX_BinarySensor::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BinarySensor::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_BinarySensor::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BinarySensor::getCaption() const
{
	return String ("");
}

Boolean UNIX_BinarySensor::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BinarySensor::getDescription() const
{
	return String ("");
}

Boolean UNIX_BinarySensor::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BinarySensor::getElementName() const
{
	return String("BinarySensor");
}

Boolean UNIX_BinarySensor::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_BinarySensor::getInstallDate() const
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

Boolean UNIX_BinarySensor::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_BinarySensor::getName() const
{
	return String ("");
}

Boolean UNIX_BinarySensor::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_BinarySensor::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_BinarySensor::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_BinarySensor::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_BinarySensor::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_BinarySensor::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_BinarySensor::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_BinarySensor::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_BinarySensor::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_BinarySensor::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_BinarySensor::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_BinarySensor::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_BinarySensor::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_BinarySensor::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_BinarySensor::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_BinarySensor::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_BinarySensor::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_BinarySensor::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_BinarySensor::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_BinarySensor::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_BinarySensor::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_BinarySensor::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_BinarySensor::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_BinarySensor::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_BinarySensor::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_BinarySensor::getTimeOfLastStateChange() const
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

Boolean UNIX_BinarySensor::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_BinarySensor::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_BinarySensor::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_BinarySensor::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_BinarySensor::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_BinarySensor::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_BinarySensor::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_BinarySensor::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_BinarySensor::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_BinarySensor::getCreationClassName() const
{
	return String("UNIX_BinarySensor");
}

Boolean UNIX_BinarySensor::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_BinarySensor::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_BinarySensor::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_BinarySensor::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_BinarySensor::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_BinarySensor::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_BinarySensor::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_BinarySensor::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_BinarySensor::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_BinarySensor::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_BinarySensor::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_BinarySensor::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_BinarySensor::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_BinarySensor::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_BinarySensor::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_BinarySensor::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_BinarySensor::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_BinarySensor::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_BinarySensor::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_BinarySensor::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_BinarySensor::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_BinarySensor::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_BinarySensor::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_BinarySensor::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_BinarySensor::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_BinarySensor::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_BinarySensor::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_BinarySensor::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_BinarySensor::getSensorType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SENSOR_TYPE, getSensorType());
	return true;
}

Uint16 UNIX_BinarySensor::getSensorType() const
{
	return Uint16(0);
}

Boolean UNIX_BinarySensor::getOtherSensorTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SENSOR_TYPE_DESCRIPTION, getOtherSensorTypeDescription());
	return true;
}

String UNIX_BinarySensor::getOtherSensorTypeDescription() const
{
	return String ("");
}

Boolean UNIX_BinarySensor::getPossibleStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSSIBLE_STATES, getPossibleStates());
	return true;
}

Array<String> UNIX_BinarySensor::getPossibleStates() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_BinarySensor::getCurrentState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_STATE, getCurrentState());
	return true;
}

String UNIX_BinarySensor::getCurrentState() const
{
	return String ("");
}

Boolean UNIX_BinarySensor::getPollingInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLLING_INTERVAL, getPollingInterval());
	return true;
}

Uint64 UNIX_BinarySensor::getPollingInterval() const
{
	return Uint64(0);
}

Boolean UNIX_BinarySensor::getSensorContext(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SENSOR_CONTEXT, getSensorContext());
	return true;
}

String UNIX_BinarySensor::getSensorContext() const
{
	return String ("");
}

Boolean UNIX_BinarySensor::getCurrentReading(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_READING, getCurrentReading());
	return true;
}

Boolean UNIX_BinarySensor::getCurrentReading() const
{
	return Boolean(false);
}

Boolean UNIX_BinarySensor::getExpectedReading(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXPECTED_READING, getExpectedReading());
	return true;
}

Boolean UNIX_BinarySensor::getExpectedReading() const
{
	return Boolean(false);
}

Boolean UNIX_BinarySensor::getInterpretationOfTrue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERPRETATION_OF_TRUE, getInterpretationOfTrue());
	return true;
}

String UNIX_BinarySensor::getInterpretationOfTrue() const
{
	return String ("");
}

Boolean UNIX_BinarySensor::getInterpretationOfFalse(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERPRETATION_OF_FALSE, getInterpretationOfFalse());
	return true;
}

String UNIX_BinarySensor::getInterpretationOfFalse() const
{
	return String ("");
}



Boolean UNIX_BinarySensor::initialize()
{
	return false;
}

Boolean UNIX_BinarySensor::load(int &pIndex)
{
	return false;
}

Boolean UNIX_BinarySensor::finalize()
{
	return false;
}

Boolean UNIX_BinarySensor::find(Array<CIMKeyBinding> &kbArray)
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
