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


UNIX_CurrentSensor::UNIX_CurrentSensor(void)
{
}

UNIX_CurrentSensor::~UNIX_CurrentSensor(void)
{
}


Boolean UNIX_CurrentSensor::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_CurrentSensor::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_CurrentSensor::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_CurrentSensor::getCaption() const
{
	return String ("");
}

Boolean UNIX_CurrentSensor::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_CurrentSensor::getDescription() const
{
	return String ("");
}

Boolean UNIX_CurrentSensor::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_CurrentSensor::getElementName() const
{
	return String("CurrentSensor");
}

Boolean UNIX_CurrentSensor::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_CurrentSensor::getInstallDate() const
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

Boolean UNIX_CurrentSensor::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_CurrentSensor::getName() const
{
	return String ("");
}

Boolean UNIX_CurrentSensor::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_CurrentSensor::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_CurrentSensor::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_CurrentSensor::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_CurrentSensor::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_CurrentSensor::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_CurrentSensor::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_CurrentSensor::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_CurrentSensor::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_CurrentSensor::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_CurrentSensor::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_CurrentSensor::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_CurrentSensor::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_CurrentSensor::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_CurrentSensor::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_CurrentSensor::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_CurrentSensor::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_CurrentSensor::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_CurrentSensor::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_CurrentSensor::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_CurrentSensor::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_CurrentSensor::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_CurrentSensor::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_CurrentSensor::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_CurrentSensor::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_CurrentSensor::getTimeOfLastStateChange() const
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

Boolean UNIX_CurrentSensor::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_CurrentSensor::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_CurrentSensor::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_CurrentSensor::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_CurrentSensor::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_CurrentSensor::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_CurrentSensor::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_CurrentSensor::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_CurrentSensor::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_CurrentSensor::getCreationClassName() const
{
	return String("UNIX_CurrentSensor");
}

Boolean UNIX_CurrentSensor::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_CurrentSensor::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_CurrentSensor::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_CurrentSensor::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_CurrentSensor::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_CurrentSensor::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_CurrentSensor::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_CurrentSensor::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_CurrentSensor::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_CurrentSensor::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_CurrentSensor::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_CurrentSensor::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_CurrentSensor::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_CurrentSensor::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_CurrentSensor::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_CurrentSensor::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_CurrentSensor::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_CurrentSensor::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_CurrentSensor::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_CurrentSensor::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_CurrentSensor::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_CurrentSensor::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_CurrentSensor::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_CurrentSensor::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_CurrentSensor::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_CurrentSensor::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_CurrentSensor::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_CurrentSensor::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_CurrentSensor::getSensorType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SENSOR_TYPE, getSensorType());
	return true;
}

Uint16 UNIX_CurrentSensor::getSensorType() const
{
	return Uint16(0);
}

Boolean UNIX_CurrentSensor::getOtherSensorTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SENSOR_TYPE_DESCRIPTION, getOtherSensorTypeDescription());
	return true;
}

String UNIX_CurrentSensor::getOtherSensorTypeDescription() const
{
	return String ("");
}

Boolean UNIX_CurrentSensor::getPossibleStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSSIBLE_STATES, getPossibleStates());
	return true;
}

Array<String> UNIX_CurrentSensor::getPossibleStates() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_CurrentSensor::getCurrentState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_STATE, getCurrentState());
	return true;
}

String UNIX_CurrentSensor::getCurrentState() const
{
	return String ("");
}

Boolean UNIX_CurrentSensor::getPollingInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLLING_INTERVAL, getPollingInterval());
	return true;
}

Uint64 UNIX_CurrentSensor::getPollingInterval() const
{
	return Uint64(0);
}

Boolean UNIX_CurrentSensor::getSensorContext(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SENSOR_CONTEXT, getSensorContext());
	return true;
}

String UNIX_CurrentSensor::getSensorContext() const
{
	return String ("");
}

Boolean UNIX_CurrentSensor::getBaseUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BASE_UNITS, getBaseUnits());
	return true;
}

Uint16 UNIX_CurrentSensor::getBaseUnits() const
{
	return Uint16(0);
}

Boolean UNIX_CurrentSensor::getUnitModifier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNIT_MODIFIER, getUnitModifier());
	return true;
}

Sint32 UNIX_CurrentSensor::getUnitModifier() const
{
	return Sint32(0);
}

Boolean UNIX_CurrentSensor::getRateUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_UNITS, getRateUnits());
	return true;
}

Uint16 UNIX_CurrentSensor::getRateUnits() const
{
	return Uint16(0);
}

Boolean UNIX_CurrentSensor::getCurrentReading(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_READING, getCurrentReading());
	return true;
}

Sint32 UNIX_CurrentSensor::getCurrentReading() const
{
	return Sint32(0);
}

Boolean UNIX_CurrentSensor::getNominalReading(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NOMINAL_READING, getNominalReading());
	return true;
}

Sint32 UNIX_CurrentSensor::getNominalReading() const
{
	return Sint32(0);
}

Boolean UNIX_CurrentSensor::getNormalMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NORMAL_MAX, getNormalMax());
	return true;
}

Sint32 UNIX_CurrentSensor::getNormalMax() const
{
	return Sint32(0);
}

Boolean UNIX_CurrentSensor::getNormalMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NORMAL_MIN, getNormalMin());
	return true;
}

Sint32 UNIX_CurrentSensor::getNormalMin() const
{
	return Sint32(0);
}

Boolean UNIX_CurrentSensor::getMaxReadable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_READABLE, getMaxReadable());
	return true;
}

Sint32 UNIX_CurrentSensor::getMaxReadable() const
{
	return Sint32(0);
}

Boolean UNIX_CurrentSensor::getMinReadable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_READABLE, getMinReadable());
	return true;
}

Sint32 UNIX_CurrentSensor::getMinReadable() const
{
	return Sint32(0);
}

Boolean UNIX_CurrentSensor::getResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESOLUTION, getResolution());
	return true;
}

Uint32 UNIX_CurrentSensor::getResolution() const
{
	return Uint32(0);
}

Boolean UNIX_CurrentSensor::getTolerance(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOLERANCE, getTolerance());
	return true;
}

Sint32 UNIX_CurrentSensor::getTolerance() const
{
	return Sint32(0);
}

Boolean UNIX_CurrentSensor::getAccuracy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCURACY, getAccuracy());
	return true;
}

Sint32 UNIX_CurrentSensor::getAccuracy() const
{
	return Sint32(0);
}

Boolean UNIX_CurrentSensor::getIsLinear(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_LINEAR, getIsLinear());
	return true;
}

Boolean UNIX_CurrentSensor::getIsLinear() const
{
	return Boolean(false);
}

Boolean UNIX_CurrentSensor::getHysteresis(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HYSTERESIS, getHysteresis());
	return true;
}

Uint32 UNIX_CurrentSensor::getHysteresis() const
{
	return Uint32(0);
}

Boolean UNIX_CurrentSensor::getLowerThresholdNonCritical(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOWER_THRESHOLD_NON_CRITICAL, getLowerThresholdNonCritical());
	return true;
}

Sint32 UNIX_CurrentSensor::getLowerThresholdNonCritical() const
{
	return Sint32(0);
}

Boolean UNIX_CurrentSensor::getUpperThresholdNonCritical(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UPPER_THRESHOLD_NON_CRITICAL, getUpperThresholdNonCritical());
	return true;
}

Sint32 UNIX_CurrentSensor::getUpperThresholdNonCritical() const
{
	return Sint32(0);
}

Boolean UNIX_CurrentSensor::getLowerThresholdCritical(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOWER_THRESHOLD_CRITICAL, getLowerThresholdCritical());
	return true;
}

Sint32 UNIX_CurrentSensor::getLowerThresholdCritical() const
{
	return Sint32(0);
}

Boolean UNIX_CurrentSensor::getUpperThresholdCritical(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UPPER_THRESHOLD_CRITICAL, getUpperThresholdCritical());
	return true;
}

Sint32 UNIX_CurrentSensor::getUpperThresholdCritical() const
{
	return Sint32(0);
}

Boolean UNIX_CurrentSensor::getLowerThresholdFatal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOWER_THRESHOLD_FATAL, getLowerThresholdFatal());
	return true;
}

Sint32 UNIX_CurrentSensor::getLowerThresholdFatal() const
{
	return Sint32(0);
}

Boolean UNIX_CurrentSensor::getUpperThresholdFatal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UPPER_THRESHOLD_FATAL, getUpperThresholdFatal());
	return true;
}

Sint32 UNIX_CurrentSensor::getUpperThresholdFatal() const
{
	return Sint32(0);
}

Boolean UNIX_CurrentSensor::getSupportedThresholds(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_THRESHOLDS, getSupportedThresholds());
	return true;
}

Array<Uint16> UNIX_CurrentSensor::getSupportedThresholds() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_CurrentSensor::getEnabledThresholds(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_THRESHOLDS, getEnabledThresholds());
	return true;
}

Array<Uint16> UNIX_CurrentSensor::getEnabledThresholds() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_CurrentSensor::getSettableThresholds(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SETTABLE_THRESHOLDS, getSettableThresholds());
	return true;
}

Array<Uint16> UNIX_CurrentSensor::getSettableThresholds() const
{
	Array<Uint16> as;
	

	return as;

}



Boolean UNIX_CurrentSensor::initialize()
{
	return false;
}

Boolean UNIX_CurrentSensor::load(int &pIndex)
{
	return false;
}

Boolean UNIX_CurrentSensor::finalize()
{
	return false;
}

Boolean UNIX_CurrentSensor::find(Array<CIMKeyBinding> &kbArray)
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
