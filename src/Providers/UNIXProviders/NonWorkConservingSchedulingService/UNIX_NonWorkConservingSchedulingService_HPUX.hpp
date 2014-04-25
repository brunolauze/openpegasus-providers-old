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


UNIX_NonWorkConservingSchedulingService::UNIX_NonWorkConservingSchedulingService(void)
{
}

UNIX_NonWorkConservingSchedulingService::~UNIX_NonWorkConservingSchedulingService(void)
{
}


Boolean UNIX_NonWorkConservingSchedulingService::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_NonWorkConservingSchedulingService::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_NonWorkConservingSchedulingService::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_NonWorkConservingSchedulingService::getCaption() const
{
	return String ("");
}

Boolean UNIX_NonWorkConservingSchedulingService::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_NonWorkConservingSchedulingService::getDescription() const
{
	return String ("");
}

Boolean UNIX_NonWorkConservingSchedulingService::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_NonWorkConservingSchedulingService::getElementName() const
{
	return String("NonWorkConservingSchedulingService");
}

Boolean UNIX_NonWorkConservingSchedulingService::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_NonWorkConservingSchedulingService::getInstallDate() const
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

Boolean UNIX_NonWorkConservingSchedulingService::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_NonWorkConservingSchedulingService::getName() const
{
	return String ("");
}

Boolean UNIX_NonWorkConservingSchedulingService::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_NonWorkConservingSchedulingService::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_NonWorkConservingSchedulingService::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_NonWorkConservingSchedulingService::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_NonWorkConservingSchedulingService::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_NonWorkConservingSchedulingService::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_NonWorkConservingSchedulingService::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_NonWorkConservingSchedulingService::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_NonWorkConservingSchedulingService::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_NonWorkConservingSchedulingService::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_NonWorkConservingSchedulingService::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_NonWorkConservingSchedulingService::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_NonWorkConservingSchedulingService::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_NonWorkConservingSchedulingService::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_NonWorkConservingSchedulingService::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_NonWorkConservingSchedulingService::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_NonWorkConservingSchedulingService::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_NonWorkConservingSchedulingService::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_NonWorkConservingSchedulingService::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_NonWorkConservingSchedulingService::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_NonWorkConservingSchedulingService::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_NonWorkConservingSchedulingService::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_NonWorkConservingSchedulingService::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_NonWorkConservingSchedulingService::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_NonWorkConservingSchedulingService::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_NonWorkConservingSchedulingService::getTimeOfLastStateChange() const
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

Boolean UNIX_NonWorkConservingSchedulingService::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_NonWorkConservingSchedulingService::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_NonWorkConservingSchedulingService::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_NonWorkConservingSchedulingService::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_NonWorkConservingSchedulingService::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_NonWorkConservingSchedulingService::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_NonWorkConservingSchedulingService::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_NonWorkConservingSchedulingService::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_NonWorkConservingSchedulingService::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_NonWorkConservingSchedulingService::getCreationClassName() const
{
	return String("UNIX_NonWorkConservingSchedulingService");
}

Boolean UNIX_NonWorkConservingSchedulingService::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_NonWorkConservingSchedulingService::getPrimaryOwnerName() const
{
	return String ("");
}

Boolean UNIX_NonWorkConservingSchedulingService::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_NonWorkConservingSchedulingService::getPrimaryOwnerContact() const
{
	return String ("");
}

Boolean UNIX_NonWorkConservingSchedulingService::getStartMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_MODE, getStartMode());
	return true;
}

String UNIX_NonWorkConservingSchedulingService::getStartMode() const
{
	return String ("");
}

Boolean UNIX_NonWorkConservingSchedulingService::getStarted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTED, getStarted());
	return true;
}

Boolean UNIX_NonWorkConservingSchedulingService::getStarted() const
{
	return Boolean(false);
}

Boolean UNIX_NonWorkConservingSchedulingService::getEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED, getEnabled());
	return true;
}

Boolean UNIX_NonWorkConservingSchedulingService::getEnabled() const
{
	return Boolean(false);
}

Boolean UNIX_NonWorkConservingSchedulingService::getSchedulerType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCHEDULER_TYPE, getSchedulerType());
	return true;
}

Uint16 UNIX_NonWorkConservingSchedulingService::getSchedulerType() const
{
	return Uint16(0);
}

Boolean UNIX_NonWorkConservingSchedulingService::getOtherSchedulerType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SCHEDULER_TYPE, getOtherSchedulerType());
	return true;
}

String UNIX_NonWorkConservingSchedulingService::getOtherSchedulerType() const
{
	return String ("");
}



Boolean UNIX_NonWorkConservingSchedulingService::initialize()
{
	return false;
}

Boolean UNIX_NonWorkConservingSchedulingService::load(int &pIndex)
{
	return false;
}

Boolean UNIX_NonWorkConservingSchedulingService::finalize()
{
	return false;
}

Boolean UNIX_NonWorkConservingSchedulingService::find(Array<CIMKeyBinding> &kbArray)
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
