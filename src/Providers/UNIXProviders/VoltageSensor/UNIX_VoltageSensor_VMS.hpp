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


UNIX_VoltageSensor::UNIX_VoltageSensor(void)
{
}

UNIX_VoltageSensor::~UNIX_VoltageSensor(void)
{
}


Boolean UNIX_VoltageSensor::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_VoltageSensor::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_VoltageSensor::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_VoltageSensor::getCaption() const
{
	return String ("");
}

Boolean UNIX_VoltageSensor::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_VoltageSensor::getDescription() const
{
	return String ("");
}

Boolean UNIX_VoltageSensor::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_VoltageSensor::getElementName() const
{
	return String("VoltageSensor");
}

Boolean UNIX_VoltageSensor::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_VoltageSensor::getInstallDate() const
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

Boolean UNIX_VoltageSensor::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_VoltageSensor::getName() const
{
	return String ("");
}

Boolean UNIX_VoltageSensor::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_VoltageSensor::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_VoltageSensor::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_VoltageSensor::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_VoltageSensor::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_VoltageSensor::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_VoltageSensor::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_VoltageSensor::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_VoltageSensor::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_VoltageSensor::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_VoltageSensor::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_VoltageSensor::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_VoltageSensor::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_VoltageSensor::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_VoltageSensor::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_VoltageSensor::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_VoltageSensor::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_VoltageSensor::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_VoltageSensor::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_VoltageSensor::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_VoltageSensor::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_VoltageSensor::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_VoltageSensor::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_VoltageSensor::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_VoltageSensor::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_VoltageSensor::getTimeOfLastStateChange() const
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

Boolean UNIX_VoltageSensor::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_VoltageSensor::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_VoltageSensor::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_VoltageSensor::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_VoltageSensor::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_VoltageSensor::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_VoltageSensor::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_VoltageSensor::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_VoltageSensor::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_VoltageSensor::getCreationClassName() const
{
	return String("UNIX_VoltageSensor");
}

Boolean UNIX_VoltageSensor::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_VoltageSensor::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_VoltageSensor::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_VoltageSensor::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_VoltageSensor::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_VoltageSensor::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_VoltageSensor::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_VoltageSensor::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_VoltageSensor::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_VoltageSensor::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_VoltageSensor::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_VoltageSensor::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_VoltageSensor::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_VoltageSensor::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_VoltageSensor::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_VoltageSensor::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_VoltageSensor::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_VoltageSensor::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_VoltageSensor::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_VoltageSensor::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_VoltageSensor::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_VoltageSensor::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_VoltageSensor::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_VoltageSensor::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_VoltageSensor::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_VoltageSensor::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_VoltageSensor::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_VoltageSensor::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_VoltageSensor::getSensorType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SENSOR_TYPE, getSensorType());
	return true;
}

Uint16 UNIX_VoltageSensor::getSensorType() const
{
	return Uint16(0);
}

Boolean UNIX_VoltageSensor::getOtherSensorTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SENSOR_TYPE_DESCRIPTION, getOtherSensorTypeDescription());
	return true;
}

String UNIX_VoltageSensor::getOtherSensorTypeDescription() const
{
	return String ("");
}

Boolean UNIX_VoltageSensor::getPossibleStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSSIBLE_STATES, getPossibleStates());
	return true;
}

Array<String> UNIX_VoltageSensor::getPossibleStates() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_VoltageSensor::getCurrentState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_STATE, getCurrentState());
	return true;
}

String UNIX_VoltageSensor::getCurrentState() const
{
	return String ("");
}

Boolean UNIX_VoltageSensor::getPollingInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLLING_INTERVAL, getPollingInterval());
	return true;
}

Uint64 UNIX_VoltageSensor::getPollingInterval() const
{
	return Uint64(0);
}

Boolean UNIX_VoltageSensor::getSensorContext(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SENSOR_CONTEXT, getSensorContext());
	return true;
}

String UNIX_VoltageSensor::getSensorContext() const
{
	return String ("");
}

Boolean UNIX_VoltageSensor::getBaseUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BASE_UNITS, getBaseUnits());
	return true;
}

Uint16 UNIX_VoltageSensor::getBaseUnits() const
{
	return Uint16(0);
}

Boolean UNIX_VoltageSensor::getUnitModifier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNIT_MODIFIER, getUnitModifier());
	return true;
}

Sint32 UNIX_VoltageSensor::getUnitModifier() const
{
	return Sint32(0);
}

Boolean UNIX_VoltageSensor::getRateUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_UNITS, getRateUnits());
	return true;
}

Uint16 UNIX_VoltageSensor::getRateUnits() const
{
	return Uint16(0);
}

Boolean UNIX_VoltageSensor::getCurrentReading(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_READING, getCurrentReading());
	return true;
}

Sint32 UNIX_VoltageSensor::getCurrentReading() const
{
	return Sint32(0);
}

Boolean UNIX_VoltageSensor::getNominalReading(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NOMINAL_READING, getNominalReading());
	return true;
}

Sint32 UNIX_VoltageSensor::getNominalReading() const
{
	return Sint32(0);
}

Boolean UNIX_VoltageSensor::getNormalMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NORMAL_MAX, getNormalMax());
	return true;
}

Sint32 UNIX_VoltageSensor::getNormalMax() const
{
	return Sint32(0);
}

Boolean UNIX_VoltageSensor::getNormalMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NORMAL_MIN, getNormalMin());
	return true;
}

Sint32 UNIX_VoltageSensor::getNormalMin() const
{
	return Sint32(0);
}

Boolean UNIX_VoltageSensor::getMaxReadable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_READABLE, getMaxReadable());
	return true;
}

Sint32 UNIX_VoltageSensor::getMaxReadable() const
{
	return Sint32(0);
}

Boolean UNIX_VoltageSensor::getMinReadable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_READABLE, getMinReadable());
	return true;
}

Sint32 UNIX_VoltageSensor::getMinReadable() const
{
	return Sint32(0);
}

Boolean UNIX_VoltageSensor::getResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESOLUTION, getResolution());
	return true;
}

Uint32 UNIX_VoltageSensor::getResolution() const
{
	return Uint32(0);
}

Boolean UNIX_VoltageSensor::getTolerance(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOLERANCE, getTolerance());
	return true;
}

Sint32 UNIX_VoltageSensor::getTolerance() const
{
	return Sint32(0);
}

Boolean UNIX_VoltageSensor::getAccuracy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCURACY, getAccuracy());
	return true;
}

Sint32 UNIX_VoltageSensor::getAccuracy() const
{
	return Sint32(0);
}

Boolean UNIX_VoltageSensor::getIsLinear(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_LINEAR, getIsLinear());
	return true;
}

Boolean UNIX_VoltageSensor::getIsLinear() const
{
	return Boolean(false);
}

Boolean UNIX_VoltageSensor::getHysteresis(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HYSTERESIS, getHysteresis());
	return true;
}

Uint32 UNIX_VoltageSensor::getHysteresis() const
{
	return Uint32(0);
}

Boolean UNIX_VoltageSensor::getLowerThresholdNonCritical(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOWER_THRESHOLD_NON_CRITICAL, getLowerThresholdNonCritical());
	return true;
}

Sint32 UNIX_VoltageSensor::getLowerThresholdNonCritical() const
{
	return Sint32(0);
}

Boolean UNIX_VoltageSensor::getUpperThresholdNonCritical(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UPPER_THRESHOLD_NON_CRITICAL, getUpperThresholdNonCritical());
	return true;
}

Sint32 UNIX_VoltageSensor::getUpperThresholdNonCritical() const
{
	return Sint32(0);
}

Boolean UNIX_VoltageSensor::getLowerThresholdCritical(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOWER_THRESHOLD_CRITICAL, getLowerThresholdCritical());
	return true;
}

Sint32 UNIX_VoltageSensor::getLowerThresholdCritical() const
{
	return Sint32(0);
}

Boolean UNIX_VoltageSensor::getUpperThresholdCritical(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UPPER_THRESHOLD_CRITICAL, getUpperThresholdCritical());
	return true;
}

Sint32 UNIX_VoltageSensor::getUpperThresholdCritical() const
{
	return Sint32(0);
}

Boolean UNIX_VoltageSensor::getLowerThresholdFatal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOWER_THRESHOLD_FATAL, getLowerThresholdFatal());
	return true;
}

Sint32 UNIX_VoltageSensor::getLowerThresholdFatal() const
{
	return Sint32(0);
}

Boolean UNIX_VoltageSensor::getUpperThresholdFatal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UPPER_THRESHOLD_FATAL, getUpperThresholdFatal());
	return true;
}

Sint32 UNIX_VoltageSensor::getUpperThresholdFatal() const
{
	return Sint32(0);
}

Boolean UNIX_VoltageSensor::getSupportedThresholds(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_THRESHOLDS, getSupportedThresholds());
	return true;
}

Array<Uint16> UNIX_VoltageSensor::getSupportedThresholds() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_VoltageSensor::getEnabledThresholds(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_THRESHOLDS, getEnabledThresholds());
	return true;
}

Array<Uint16> UNIX_VoltageSensor::getEnabledThresholds() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_VoltageSensor::getSettableThresholds(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SETTABLE_THRESHOLDS, getSettableThresholds());
	return true;
}

Array<Uint16> UNIX_VoltageSensor::getSettableThresholds() const
{
	Array<Uint16> as;
	

	return as;

}



Boolean UNIX_VoltageSensor::initialize()
{
	return false;
}

Boolean UNIX_VoltageSensor::load(int &pIndex)
{
	return false;
}

Boolean UNIX_VoltageSensor::finalize()
{
	return false;
}

Boolean UNIX_VoltageSensor::find(Array<CIMKeyBinding> &kbArray)
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
