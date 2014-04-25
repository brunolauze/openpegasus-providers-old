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


UNIX_Tachometer::UNIX_Tachometer(void)
{
}

UNIX_Tachometer::~UNIX_Tachometer(void)
{
}


Boolean UNIX_Tachometer::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_Tachometer::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_Tachometer::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_Tachometer::getCaption() const
{
	return String ("");
}

Boolean UNIX_Tachometer::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_Tachometer::getDescription() const
{
	return String ("");
}

Boolean UNIX_Tachometer::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_Tachometer::getElementName() const
{
	return String("Tachometer");
}

Boolean UNIX_Tachometer::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_Tachometer::getInstallDate() const
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

Boolean UNIX_Tachometer::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_Tachometer::getName() const
{
	return String ("");
}

Boolean UNIX_Tachometer::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_Tachometer::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Tachometer::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_Tachometer::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Tachometer::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_Tachometer::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_Tachometer::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_Tachometer::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_Tachometer::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_Tachometer::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_Tachometer::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_Tachometer::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_Tachometer::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_Tachometer::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_Tachometer::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_Tachometer::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_Tachometer::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_Tachometer::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_Tachometer::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_Tachometer::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_Tachometer::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_Tachometer::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_Tachometer::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_Tachometer::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_Tachometer::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_Tachometer::getTimeOfLastStateChange() const
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

Boolean UNIX_Tachometer::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_Tachometer::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Tachometer::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_Tachometer::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_Tachometer::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_Tachometer::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_Tachometer::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_Tachometer::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_Tachometer::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_Tachometer::getCreationClassName() const
{
	return String("UNIX_Tachometer");
}

Boolean UNIX_Tachometer::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_Tachometer::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_Tachometer::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_Tachometer::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_Tachometer::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_Tachometer::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Tachometer::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_Tachometer::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_Tachometer::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_Tachometer::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_Tachometer::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_Tachometer::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_Tachometer::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_Tachometer::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_Tachometer::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_Tachometer::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_Tachometer::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_Tachometer::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Tachometer::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_Tachometer::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_Tachometer::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_Tachometer::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_Tachometer::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_Tachometer::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Tachometer::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_Tachometer::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Tachometer::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_Tachometer::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_Tachometer::getSensorType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SENSOR_TYPE, getSensorType());
	return true;
}

Uint16 UNIX_Tachometer::getSensorType() const
{
	return Uint16(0);
}

Boolean UNIX_Tachometer::getOtherSensorTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SENSOR_TYPE_DESCRIPTION, getOtherSensorTypeDescription());
	return true;
}

String UNIX_Tachometer::getOtherSensorTypeDescription() const
{
	return String ("");
}

Boolean UNIX_Tachometer::getPossibleStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSSIBLE_STATES, getPossibleStates());
	return true;
}

Array<String> UNIX_Tachometer::getPossibleStates() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Tachometer::getCurrentState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_STATE, getCurrentState());
	return true;
}

String UNIX_Tachometer::getCurrentState() const
{
	return String ("");
}

Boolean UNIX_Tachometer::getPollingInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLLING_INTERVAL, getPollingInterval());
	return true;
}

Uint64 UNIX_Tachometer::getPollingInterval() const
{
	return Uint64(0);
}

Boolean UNIX_Tachometer::getSensorContext(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SENSOR_CONTEXT, getSensorContext());
	return true;
}

String UNIX_Tachometer::getSensorContext() const
{
	return String ("");
}

Boolean UNIX_Tachometer::getBaseUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BASE_UNITS, getBaseUnits());
	return true;
}

Uint16 UNIX_Tachometer::getBaseUnits() const
{
	return Uint16(0);
}

Boolean UNIX_Tachometer::getUnitModifier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNIT_MODIFIER, getUnitModifier());
	return true;
}

Sint32 UNIX_Tachometer::getUnitModifier() const
{
	return Sint32(0);
}

Boolean UNIX_Tachometer::getRateUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RATE_UNITS, getRateUnits());
	return true;
}

Uint16 UNIX_Tachometer::getRateUnits() const
{
	return Uint16(0);
}

Boolean UNIX_Tachometer::getCurrentReading(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_READING, getCurrentReading());
	return true;
}

Sint32 UNIX_Tachometer::getCurrentReading() const
{
	return Sint32(0);
}

Boolean UNIX_Tachometer::getNominalReading(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NOMINAL_READING, getNominalReading());
	return true;
}

Sint32 UNIX_Tachometer::getNominalReading() const
{
	return Sint32(0);
}

Boolean UNIX_Tachometer::getNormalMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NORMAL_MAX, getNormalMax());
	return true;
}

Sint32 UNIX_Tachometer::getNormalMax() const
{
	return Sint32(0);
}

Boolean UNIX_Tachometer::getNormalMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NORMAL_MIN, getNormalMin());
	return true;
}

Sint32 UNIX_Tachometer::getNormalMin() const
{
	return Sint32(0);
}

Boolean UNIX_Tachometer::getMaxReadable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_READABLE, getMaxReadable());
	return true;
}

Sint32 UNIX_Tachometer::getMaxReadable() const
{
	return Sint32(0);
}

Boolean UNIX_Tachometer::getMinReadable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_READABLE, getMinReadable());
	return true;
}

Sint32 UNIX_Tachometer::getMinReadable() const
{
	return Sint32(0);
}

Boolean UNIX_Tachometer::getResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESOLUTION, getResolution());
	return true;
}

Uint32 UNIX_Tachometer::getResolution() const
{
	return Uint32(0);
}

Boolean UNIX_Tachometer::getTolerance(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOLERANCE, getTolerance());
	return true;
}

Sint32 UNIX_Tachometer::getTolerance() const
{
	return Sint32(0);
}

Boolean UNIX_Tachometer::getAccuracy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCURACY, getAccuracy());
	return true;
}

Sint32 UNIX_Tachometer::getAccuracy() const
{
	return Sint32(0);
}

Boolean UNIX_Tachometer::getIsLinear(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_LINEAR, getIsLinear());
	return true;
}

Boolean UNIX_Tachometer::getIsLinear() const
{
	return Boolean(false);
}

Boolean UNIX_Tachometer::getHysteresis(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HYSTERESIS, getHysteresis());
	return true;
}

Uint32 UNIX_Tachometer::getHysteresis() const
{
	return Uint32(0);
}

Boolean UNIX_Tachometer::getLowerThresholdNonCritical(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOWER_THRESHOLD_NON_CRITICAL, getLowerThresholdNonCritical());
	return true;
}

Sint32 UNIX_Tachometer::getLowerThresholdNonCritical() const
{
	return Sint32(0);
}

Boolean UNIX_Tachometer::getUpperThresholdNonCritical(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UPPER_THRESHOLD_NON_CRITICAL, getUpperThresholdNonCritical());
	return true;
}

Sint32 UNIX_Tachometer::getUpperThresholdNonCritical() const
{
	return Sint32(0);
}

Boolean UNIX_Tachometer::getLowerThresholdCritical(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOWER_THRESHOLD_CRITICAL, getLowerThresholdCritical());
	return true;
}

Sint32 UNIX_Tachometer::getLowerThresholdCritical() const
{
	return Sint32(0);
}

Boolean UNIX_Tachometer::getUpperThresholdCritical(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UPPER_THRESHOLD_CRITICAL, getUpperThresholdCritical());
	return true;
}

Sint32 UNIX_Tachometer::getUpperThresholdCritical() const
{
	return Sint32(0);
}

Boolean UNIX_Tachometer::getLowerThresholdFatal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOWER_THRESHOLD_FATAL, getLowerThresholdFatal());
	return true;
}

Sint32 UNIX_Tachometer::getLowerThresholdFatal() const
{
	return Sint32(0);
}

Boolean UNIX_Tachometer::getUpperThresholdFatal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UPPER_THRESHOLD_FATAL, getUpperThresholdFatal());
	return true;
}

Sint32 UNIX_Tachometer::getUpperThresholdFatal() const
{
	return Sint32(0);
}

Boolean UNIX_Tachometer::getSupportedThresholds(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_THRESHOLDS, getSupportedThresholds());
	return true;
}

Array<Uint16> UNIX_Tachometer::getSupportedThresholds() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Tachometer::getEnabledThresholds(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_THRESHOLDS, getEnabledThresholds());
	return true;
}

Array<Uint16> UNIX_Tachometer::getEnabledThresholds() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Tachometer::getSettableThresholds(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SETTABLE_THRESHOLDS, getSettableThresholds());
	return true;
}

Array<Uint16> UNIX_Tachometer::getSettableThresholds() const
{
	Array<Uint16> as;
	

	return as;

}



Boolean UNIX_Tachometer::initialize()
{
	return false;
}

Boolean UNIX_Tachometer::load(int &pIndex)
{
	return false;
}

Boolean UNIX_Tachometer::finalize()
{
	return false;
}

Boolean UNIX_Tachometer::find(Array<CIMKeyBinding> &kbArray)
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
