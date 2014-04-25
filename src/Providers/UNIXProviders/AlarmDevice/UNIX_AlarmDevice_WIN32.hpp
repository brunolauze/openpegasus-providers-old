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


UNIX_AlarmDevice::UNIX_AlarmDevice(void)
{
}

UNIX_AlarmDevice::~UNIX_AlarmDevice(void)
{
}


Boolean UNIX_AlarmDevice::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_AlarmDevice::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_AlarmDevice::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_AlarmDevice::getCaption() const
{
	return String ("");
}

Boolean UNIX_AlarmDevice::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_AlarmDevice::getDescription() const
{
	return String ("");
}

Boolean UNIX_AlarmDevice::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_AlarmDevice::getElementName() const
{
	return String("AlarmDevice");
}

Boolean UNIX_AlarmDevice::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_AlarmDevice::getInstallDate() const
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

Boolean UNIX_AlarmDevice::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_AlarmDevice::getName() const
{
	return String ("");
}

Boolean UNIX_AlarmDevice::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_AlarmDevice::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_AlarmDevice::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_AlarmDevice::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_AlarmDevice::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_AlarmDevice::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_AlarmDevice::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_AlarmDevice::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_AlarmDevice::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_AlarmDevice::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_AlarmDevice::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_AlarmDevice::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_AlarmDevice::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_AlarmDevice::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_AlarmDevice::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_AlarmDevice::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_AlarmDevice::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_AlarmDevice::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_AlarmDevice::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_AlarmDevice::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_AlarmDevice::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_AlarmDevice::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_AlarmDevice::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_AlarmDevice::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_AlarmDevice::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_AlarmDevice::getTimeOfLastStateChange() const
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

Boolean UNIX_AlarmDevice::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_AlarmDevice::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_AlarmDevice::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_AlarmDevice::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_AlarmDevice::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_AlarmDevice::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_AlarmDevice::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_AlarmDevice::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_AlarmDevice::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_AlarmDevice::getCreationClassName() const
{
	return String("UNIX_AlarmDevice");
}

Boolean UNIX_AlarmDevice::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_AlarmDevice::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_AlarmDevice::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_AlarmDevice::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_AlarmDevice::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_AlarmDevice::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_AlarmDevice::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_AlarmDevice::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_AlarmDevice::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_AlarmDevice::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_AlarmDevice::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_AlarmDevice::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_AlarmDevice::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_AlarmDevice::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_AlarmDevice::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_AlarmDevice::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_AlarmDevice::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_AlarmDevice::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_AlarmDevice::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_AlarmDevice::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_AlarmDevice::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_AlarmDevice::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_AlarmDevice::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_AlarmDevice::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_AlarmDevice::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_AlarmDevice::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_AlarmDevice::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_AlarmDevice::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_AlarmDevice::getAudibleAlarm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUDIBLE_ALARM, getAudibleAlarm());
	return true;
}

Boolean UNIX_AlarmDevice::getAudibleAlarm() const
{
	return Boolean(false);
}

Boolean UNIX_AlarmDevice::getVisibleAlarm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VISIBLE_ALARM, getVisibleAlarm());
	return true;
}

Boolean UNIX_AlarmDevice::getVisibleAlarm() const
{
	return Boolean(false);
}

Boolean UNIX_AlarmDevice::getMotionAlarm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MOTION_ALARM, getMotionAlarm());
	return true;
}

Boolean UNIX_AlarmDevice::getMotionAlarm() const
{
	return Boolean(false);
}

Boolean UNIX_AlarmDevice::getUrgency(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_URGENCY, getUrgency());
	return true;
}

Uint16 UNIX_AlarmDevice::getUrgency() const
{
	return Uint16(0);
}

Boolean UNIX_AlarmDevice::getAlarmState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALARM_STATE, getAlarmState());
	return true;
}

Uint16 UNIX_AlarmDevice::getAlarmState() const
{
	return Uint16(0);
}

Boolean UNIX_AlarmDevice::getAudioIndicatorIsDisabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUDIO_INDICATOR_IS_DISABLED, getAudioIndicatorIsDisabled());
	return true;
}

Boolean UNIX_AlarmDevice::getAudioIndicatorIsDisabled() const
{
	return Boolean(false);
}

Boolean UNIX_AlarmDevice::getVisualIndicatorIsDisabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VISUAL_INDICATOR_IS_DISABLED, getVisualIndicatorIsDisabled());
	return true;
}

Boolean UNIX_AlarmDevice::getVisualIndicatorIsDisabled() const
{
	return Boolean(false);
}

Boolean UNIX_AlarmDevice::getMotionIndicatorIsDisabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MOTION_INDICATOR_IS_DISABLED, getMotionIndicatorIsDisabled());
	return true;
}

Boolean UNIX_AlarmDevice::getMotionIndicatorIsDisabled() const
{
	return Boolean(false);
}



Boolean UNIX_AlarmDevice::initialize()
{
	return false;
}

Boolean UNIX_AlarmDevice::load(int &pIndex)
{
	return false;
}

Boolean UNIX_AlarmDevice::finalize()
{
	return false;
}

Boolean UNIX_AlarmDevice::find(Array<CIMKeyBinding> &kbArray)
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
