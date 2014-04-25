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


UNIX_PlatformWatchdogService::UNIX_PlatformWatchdogService(void)
{
}

UNIX_PlatformWatchdogService::~UNIX_PlatformWatchdogService(void)
{
}


Boolean UNIX_PlatformWatchdogService::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PlatformWatchdogService::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_PlatformWatchdogService::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PlatformWatchdogService::getCaption() const
{
	return String ("");
}

Boolean UNIX_PlatformWatchdogService::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PlatformWatchdogService::getDescription() const
{
	return String ("");
}

Boolean UNIX_PlatformWatchdogService::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PlatformWatchdogService::getElementName() const
{
	return String("PlatformWatchdogService");
}

Boolean UNIX_PlatformWatchdogService::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_PlatformWatchdogService::getInstallDate() const
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

Boolean UNIX_PlatformWatchdogService::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PlatformWatchdogService::getName() const
{
	return String ("");
}

Boolean UNIX_PlatformWatchdogService::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_PlatformWatchdogService::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PlatformWatchdogService::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_PlatformWatchdogService::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PlatformWatchdogService::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_PlatformWatchdogService::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_PlatformWatchdogService::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_PlatformWatchdogService::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_PlatformWatchdogService::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_PlatformWatchdogService::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_PlatformWatchdogService::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_PlatformWatchdogService::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_PlatformWatchdogService::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_PlatformWatchdogService::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_PlatformWatchdogService::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_PlatformWatchdogService::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_PlatformWatchdogService::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_PlatformWatchdogService::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_PlatformWatchdogService::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_PlatformWatchdogService::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_PlatformWatchdogService::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_PlatformWatchdogService::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_PlatformWatchdogService::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_PlatformWatchdogService::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_PlatformWatchdogService::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_PlatformWatchdogService::getTimeOfLastStateChange() const
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

Boolean UNIX_PlatformWatchdogService::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_PlatformWatchdogService::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PlatformWatchdogService::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_PlatformWatchdogService::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_PlatformWatchdogService::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_PlatformWatchdogService::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_PlatformWatchdogService::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_PlatformWatchdogService::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_PlatformWatchdogService::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_PlatformWatchdogService::getCreationClassName() const
{
	return String("UNIX_PlatformWatchdogService");
}

Boolean UNIX_PlatformWatchdogService::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_PlatformWatchdogService::getPrimaryOwnerName() const
{
	return String ("");
}

Boolean UNIX_PlatformWatchdogService::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_PlatformWatchdogService::getPrimaryOwnerContact() const
{
	return String ("");
}

Boolean UNIX_PlatformWatchdogService::getStartMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_MODE, getStartMode());
	return true;
}

String UNIX_PlatformWatchdogService::getStartMode() const
{
	return String ("");
}

Boolean UNIX_PlatformWatchdogService::getStarted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTED, getStarted());
	return true;
}

Boolean UNIX_PlatformWatchdogService::getStarted() const
{
	return Boolean(false);
}

Boolean UNIX_PlatformWatchdogService::getMonitoredEntityType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MONITORED_ENTITY_TYPE, getMonitoredEntityType());
	return true;
}

Uint16 UNIX_PlatformWatchdogService::getMonitoredEntityType() const
{
	return Uint16(0);
}

Boolean UNIX_PlatformWatchdogService::getOtherMonitoredEntityTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_MONITORED_ENTITY_TYPE_DESCRIPTION, getOtherMonitoredEntityTypeDescription());
	return true;
}

String UNIX_PlatformWatchdogService::getOtherMonitoredEntityTypeDescription() const
{
	return String ("");
}

Boolean UNIX_PlatformWatchdogService::getTimeoutInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIMEOUT_INTERVAL, getTimeoutInterval());
	return true;
}

CIMDateTime UNIX_PlatformWatchdogService::getTimeoutInterval() const
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

Boolean UNIX_PlatformWatchdogService::getTimerExpired(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIMER_EXPIRED, getTimerExpired());
	return true;
}

Boolean UNIX_PlatformWatchdogService::getTimerExpired() const
{
	return Boolean(false);
}

Boolean UNIX_PlatformWatchdogService::getTimerResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIMER_RESOLUTION, getTimerResolution());
	return true;
}

CIMDateTime UNIX_PlatformWatchdogService::getTimerResolution() const
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

Boolean UNIX_PlatformWatchdogService::getCurrentTimerValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_TIMER_VALUE, getCurrentTimerValue());
	return true;
}

CIMDateTime UNIX_PlatformWatchdogService::getCurrentTimerValue() const
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

Boolean UNIX_PlatformWatchdogService::getTimeOfLastExpiration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_EXPIRATION, getTimeOfLastExpiration());
	return true;
}

CIMDateTime UNIX_PlatformWatchdogService::getTimeOfLastExpiration() const
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

Boolean UNIX_PlatformWatchdogService::getActionOnExpiration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTION_ON_EXPIRATION, getActionOnExpiration());
	return true;
}

Uint16 UNIX_PlatformWatchdogService::getActionOnExpiration() const
{
	return Uint16(0);
}

Boolean UNIX_PlatformWatchdogService::getOtherActionOnExpiration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ACTION_ON_EXPIRATION, getOtherActionOnExpiration());
	return true;
}

String UNIX_PlatformWatchdogService::getOtherActionOnExpiration() const
{
	return String ("");
}



Boolean UNIX_PlatformWatchdogService::initialize()
{
	return false;
}

Boolean UNIX_PlatformWatchdogService::load(int &pIndex)
{
	return false;
}

Boolean UNIX_PlatformWatchdogService::finalize()
{
	return false;
}

Boolean UNIX_PlatformWatchdogService::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
