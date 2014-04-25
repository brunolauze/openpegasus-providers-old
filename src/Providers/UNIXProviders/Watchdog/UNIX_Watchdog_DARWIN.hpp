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


UNIX_Watchdog::UNIX_Watchdog(void)
{
}

UNIX_Watchdog::~UNIX_Watchdog(void)
{
}


Boolean UNIX_Watchdog::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_Watchdog::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_Watchdog::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_Watchdog::getCaption() const
{
	return String ("");
}

Boolean UNIX_Watchdog::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_Watchdog::getDescription() const
{
	return String ("");
}

Boolean UNIX_Watchdog::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_Watchdog::getElementName() const
{
	return String("Watchdog");
}

Boolean UNIX_Watchdog::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_Watchdog::getInstallDate() const
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

Boolean UNIX_Watchdog::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_Watchdog::getName() const
{
	return String ("");
}

Boolean UNIX_Watchdog::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_Watchdog::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Watchdog::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_Watchdog::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Watchdog::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_Watchdog::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_Watchdog::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_Watchdog::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_Watchdog::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_Watchdog::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_Watchdog::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_Watchdog::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_Watchdog::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_Watchdog::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_Watchdog::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_Watchdog::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_Watchdog::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_Watchdog::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_Watchdog::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_Watchdog::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_Watchdog::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_Watchdog::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_Watchdog::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_Watchdog::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_Watchdog::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_Watchdog::getTimeOfLastStateChange() const
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

Boolean UNIX_Watchdog::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_Watchdog::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Watchdog::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_Watchdog::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_Watchdog::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_Watchdog::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_Watchdog::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_Watchdog::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_Watchdog::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_Watchdog::getCreationClassName() const
{
	return String("UNIX_Watchdog");
}

Boolean UNIX_Watchdog::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_Watchdog::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_Watchdog::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_Watchdog::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_Watchdog::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_Watchdog::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Watchdog::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_Watchdog::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_Watchdog::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_Watchdog::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_Watchdog::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_Watchdog::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_Watchdog::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_Watchdog::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_Watchdog::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_Watchdog::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_Watchdog::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_Watchdog::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Watchdog::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_Watchdog::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_Watchdog::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_Watchdog::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_Watchdog::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_Watchdog::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Watchdog::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_Watchdog::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Watchdog::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_Watchdog::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_Watchdog::getMonitoredEntity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MONITORED_ENTITY, getMonitoredEntity());
	return true;
}

Uint16 UNIX_Watchdog::getMonitoredEntity() const
{
	return Uint16(0);
}

Boolean UNIX_Watchdog::getMonitoredEntityDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MONITORED_ENTITY_DESCRIPTION, getMonitoredEntityDescription());
	return true;
}

String UNIX_Watchdog::getMonitoredEntityDescription() const
{
	return String ("");
}

Boolean UNIX_Watchdog::getTimeoutInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIMEOUT_INTERVAL, getTimeoutInterval());
	return true;
}

Uint32 UNIX_Watchdog::getTimeoutInterval() const
{
	return Uint32(0);
}

Boolean UNIX_Watchdog::getTimerResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIMER_RESOLUTION, getTimerResolution());
	return true;
}

Uint32 UNIX_Watchdog::getTimerResolution() const
{
	return Uint32(0);
}

Boolean UNIX_Watchdog::getTimeOfLastExpiration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_EXPIRATION, getTimeOfLastExpiration());
	return true;
}

CIMDateTime UNIX_Watchdog::getTimeOfLastExpiration() const
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

Boolean UNIX_Watchdog::getMonitoredEntityOnLastExpiration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MONITORED_ENTITY_ON_LAST_EXPIRATION, getMonitoredEntityOnLastExpiration());
	return true;
}

Uint16 UNIX_Watchdog::getMonitoredEntityOnLastExpiration() const
{
	return Uint16(0);
}

Boolean UNIX_Watchdog::getActionOnExpiration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTION_ON_EXPIRATION, getActionOnExpiration());
	return true;
}

Uint16 UNIX_Watchdog::getActionOnExpiration() const
{
	return Uint16(0);
}



Boolean UNIX_Watchdog::initialize()
{
	return false;
}

Boolean UNIX_Watchdog::load(int &pIndex)
{
	return false;
}

Boolean UNIX_Watchdog::finalize()
{
	return false;
}

Boolean UNIX_Watchdog::find(Array<CIMKeyBinding> &kbArray)
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
