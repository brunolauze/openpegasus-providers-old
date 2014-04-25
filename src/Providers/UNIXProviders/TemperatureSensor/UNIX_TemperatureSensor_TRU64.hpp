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


UNIX_TemperatureSensor::UNIX_TemperatureSensor(void)
{
}

UNIX_TemperatureSensor::~UNIX_TemperatureSensor(void)
{
}


Boolean UNIX_TemperatureSensor::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_TemperatureSensor::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_TemperatureSensor::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_TemperatureSensor::getCaption() const
{
	return String ("");
}

Boolean UNIX_TemperatureSensor::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_TemperatureSensor::getDescription() const
{
	return String ("");
}

Boolean UNIX_TemperatureSensor::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_TemperatureSensor::getElementName() const
{
	return String("TemperatureSensor");
}

Boolean UNIX_TemperatureSensor::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_TemperatureSensor::getInstallDate() const
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

Boolean UNIX_TemperatureSensor::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_TemperatureSensor::getName() const
{
	return String ("");
}

Boolean UNIX_TemperatureSensor::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_TemperatureSensor::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_TemperatureSensor::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_TemperatureSensor::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_TemperatureSensor::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_TemperatureSensor::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_TemperatureSensor::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_TemperatureSensor::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_TemperatureSensor::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_TemperatureSensor::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_TemperatureSensor::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_TemperatureSensor::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_TemperatureSensor::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_TemperatureSensor::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_TemperatureSensor::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_TemperatureSensor::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_TemperatureSensor::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_TemperatureSensor::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_TemperatureSensor::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_TemperatureSensor::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_TemperatureSensor::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_TemperatureSensor::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_TemperatureSensor::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_TemperatureSensor::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_TemperatureSensor::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_TemperatureSensor::getTimeOfLastStateChange() const
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

Boolean UNIX_TemperatureSensor::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_TemperatureSensor::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_TemperatureSensor::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_TemperatureSensor::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_TemperatureSensor::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_TemperatureSensor::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_TemperatureSensor::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_TemperatureSensor::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_TemperatureSensor::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_TemperatureSensor::getCreationClassName() const
{
	return String("UNIX_TemperatureSensor");
}

Boolean UNIX_TemperatureSensor::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_TemperatureSensor::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_TemperatureSensor::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_TemperatureSensor::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_TemperatureSensor::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_TemperatureSensor::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_TemperatureSensor::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_TemperatureSensor::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_TemperatureSensor::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_TemperatureSensor::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_TemperatureSensor::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_TemperatureSensor::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_TemperatureSensor::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_TemperatureSensor::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_TemperatureSensor::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_TemperatureSensor::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_TemperatureSensor::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_TemperatureSensor::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_TemperatureSensor::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_TemperatureSensor::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_TemperatureSensor::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_TemperatureSensor::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_TemperatureSensor::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_TemperatureSensor::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_TemperatureSensor::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_TemperatureSensor::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_TemperatureSensor::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_TemperatureSensor::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_TemperatureSensor::getSensorType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SENSOR_TYPE, getSensorType());
	return true;
}

Uint16 UNIX_TemperatureSensor::getSensorType() const
{
	return Uint16(0);
}

Boolean UNIX_TemperatureSensor::getOtherSensorTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SENSOR_TYPE_DESCRIPTION, getOtherSensorTypeDescription());
	return true;
}

String UNIX_TemperatureSensor::getOtherSensorTypeDescription() const
{
	return String ("");
}

Boolean UNIX_TemperatureSensor::getPossibleStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSSIBLE_STATES, getPossibleStates());
	return true;
}

Array<String> UNIX_TemperatureSensor::getPossibleStates() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_TemperatureSensor::getCurrentState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_STATE, getCurrentState());
	return true;
}

String UNIX_TemperatureSensor::getCurrentState() const
{
	return String ("");
}

Boolean UNIX_TemperatureSensor::getPollingInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLLING_INTERVAL, getPollingInterval());
	return true;
}

Uint64 UNIX_TemperatureSensor::getPollingInterval() const
{
	return Uint64(0);
}

Boolean UNIX_TemperatureSensor::getSensorContext(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SENSOR_CONTEXT, getSensorContext());
	return true;
}

String UNIX_TemperatureSensor::getSensorContext() const
{
	return String ("");
}

Boolean UNIX_TemperatureSensor::getBaseUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BASE_UNITS, getBaseUnits());
	return true;
}

Uint16 UNIX_TemperatureSensor::getBaseUnits() const
{
	return Uint16(0);
}

Boolean UNIX_TemperatureSensor::getUnitModifier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNIT_MODIFIER, getUnitModifier());
	return true;
}

Sint32 UNIX_TemperatureSensor::getUnitModifier() const
{
	return Sint32(0);
}

Boolean UNIX_TemperatureSensor::getRateUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_UNITS, getRateUnits());
	return true;
}

Uint16 UNIX_TemperatureSensor::getRateUnits() const
{
	return Uint16(0);
}

Boolean UNIX_TemperatureSensor::getCurrentReading(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_READING, getCurrentReading());
	return true;
}

Sint32 UNIX_TemperatureSensor::getCurrentReading() const
{
	return Sint32(0);
}

Boolean UNIX_TemperatureSensor::getNominalReading(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NOMINAL_READING, getNominalReading());
	return true;
}

Sint32 UNIX_TemperatureSensor::getNominalReading() const
{
	return Sint32(0);
}

Boolean UNIX_TemperatureSensor::getNormalMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NORMAL_MAX, getNormalMax());
	return true;
}

Sint32 UNIX_TemperatureSensor::getNormalMax() const
{
	return Sint32(0);
}

Boolean UNIX_TemperatureSensor::getNormalMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NORMAL_MIN, getNormalMin());
	return true;
}

Sint32 UNIX_TemperatureSensor::getNormalMin() const
{
	return Sint32(0);
}

Boolean UNIX_TemperatureSensor::getMaxReadable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_READABLE, getMaxReadable());
	return true;
}

Sint32 UNIX_TemperatureSensor::getMaxReadable() const
{
	return Sint32(0);
}

Boolean UNIX_TemperatureSensor::getMinReadable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_READABLE, getMinReadable());
	return true;
}

Sint32 UNIX_TemperatureSensor::getMinReadable() const
{
	return Sint32(0);
}

Boolean UNIX_TemperatureSensor::getResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESOLUTION, getResolution());
	return true;
}

Uint32 UNIX_TemperatureSensor::getResolution() const
{
	return Uint32(0);
}

Boolean UNIX_TemperatureSensor::getTolerance(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOLERANCE, getTolerance());
	return true;
}

Sint32 UNIX_TemperatureSensor::getTolerance() const
{
	return Sint32(0);
}

Boolean UNIX_TemperatureSensor::getAccuracy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCURACY, getAccuracy());
	return true;
}

Sint32 UNIX_TemperatureSensor::getAccuracy() const
{
	return Sint32(0);
}

Boolean UNIX_TemperatureSensor::getIsLinear(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_LINEAR, getIsLinear());
	return true;
}

Boolean UNIX_TemperatureSensor::getIsLinear() const
{
	return Boolean(false);
}

Boolean UNIX_TemperatureSensor::getHysteresis(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HYSTERESIS, getHysteresis());
	return true;
}

Uint32 UNIX_TemperatureSensor::getHysteresis() const
{
	return Uint32(0);
}

Boolean UNIX_TemperatureSensor::getLowerThresholdNonCritical(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOWER_THRESHOLD_NON_CRITICAL, getLowerThresholdNonCritical());
	return true;
}

Sint32 UNIX_TemperatureSensor::getLowerThresholdNonCritical() const
{
	return Sint32(0);
}

Boolean UNIX_TemperatureSensor::getUpperThresholdNonCritical(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UPPER_THRESHOLD_NON_CRITICAL, getUpperThresholdNonCritical());
	return true;
}

Sint32 UNIX_TemperatureSensor::getUpperThresholdNonCritical() const
{
	return Sint32(0);
}

Boolean UNIX_TemperatureSensor::getLowerThresholdCritical(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOWER_THRESHOLD_CRITICAL, getLowerThresholdCritical());
	return true;
}

Sint32 UNIX_TemperatureSensor::getLowerThresholdCritical() const
{
	return Sint32(0);
}

Boolean UNIX_TemperatureSensor::getUpperThresholdCritical(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UPPER_THRESHOLD_CRITICAL, getUpperThresholdCritical());
	return true;
}

Sint32 UNIX_TemperatureSensor::getUpperThresholdCritical() const
{
	return Sint32(0);
}

Boolean UNIX_TemperatureSensor::getLowerThresholdFatal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOWER_THRESHOLD_FATAL, getLowerThresholdFatal());
	return true;
}

Sint32 UNIX_TemperatureSensor::getLowerThresholdFatal() const
{
	return Sint32(0);
}

Boolean UNIX_TemperatureSensor::getUpperThresholdFatal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UPPER_THRESHOLD_FATAL, getUpperThresholdFatal());
	return true;
}

Sint32 UNIX_TemperatureSensor::getUpperThresholdFatal() const
{
	return Sint32(0);
}

Boolean UNIX_TemperatureSensor::getSupportedThresholds(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_THRESHOLDS, getSupportedThresholds());
	return true;
}

Array<Uint16> UNIX_TemperatureSensor::getSupportedThresholds() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_TemperatureSensor::getEnabledThresholds(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_THRESHOLDS, getEnabledThresholds());
	return true;
}

Array<Uint16> UNIX_TemperatureSensor::getEnabledThresholds() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_TemperatureSensor::getSettableThresholds(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SETTABLE_THRESHOLDS, getSettableThresholds());
	return true;
}

Array<Uint16> UNIX_TemperatureSensor::getSettableThresholds() const
{
	Array<Uint16> as;
	

	return as;

}



Boolean UNIX_TemperatureSensor::initialize()
{
	return false;
}

Boolean UNIX_TemperatureSensor::load(int &pIndex)
{
	return false;
}

Boolean UNIX_TemperatureSensor::finalize()
{
	return false;
}

Boolean UNIX_TemperatureSensor::find(Array<CIMKeyBinding> &kbArray)
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
