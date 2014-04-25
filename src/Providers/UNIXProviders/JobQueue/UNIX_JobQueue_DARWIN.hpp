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


UNIX_JobQueue::UNIX_JobQueue(void)
{
}

UNIX_JobQueue::~UNIX_JobQueue(void)
{
}


Boolean UNIX_JobQueue::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_JobQueue::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_JobQueue::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_JobQueue::getCaption() const
{
	return String ("");
}

Boolean UNIX_JobQueue::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_JobQueue::getDescription() const
{
	return String ("");
}

Boolean UNIX_JobQueue::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_JobQueue::getElementName() const
{
	return String("JobQueue");
}

Boolean UNIX_JobQueue::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_JobQueue::getInstallDate() const
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

Boolean UNIX_JobQueue::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_JobQueue::getName() const
{
	return String ("");
}

Boolean UNIX_JobQueue::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_JobQueue::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_JobQueue::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_JobQueue::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_JobQueue::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_JobQueue::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_JobQueue::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_JobQueue::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_JobQueue::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_JobQueue::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_JobQueue::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_JobQueue::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_JobQueue::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_JobQueue::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_JobQueue::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_JobQueue::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_JobQueue::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_JobQueue::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_JobQueue::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_JobQueue::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_JobQueue::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_JobQueue::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_JobQueue::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_JobQueue::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_JobQueue::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_JobQueue::getTimeOfLastStateChange() const
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

Boolean UNIX_JobQueue::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_JobQueue::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_JobQueue::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_JobQueue::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_JobQueue::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_JobQueue::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_JobQueue::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_JobQueue::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_JobQueue::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_JobQueue::getCreationClassName() const
{
	return String("UNIX_JobQueue");
}

Boolean UNIX_JobQueue::getQueueStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_QUEUE_STATUS, getQueueStatus());
	return true;
}

Uint16 UNIX_JobQueue::getQueueStatus() const
{
	return Uint16(0);
}

Boolean UNIX_JobQueue::getQueueStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_QUEUE_STATUS_INFO, getQueueStatusInfo());
	return true;
}

String UNIX_JobQueue::getQueueStatusInfo() const
{
	return String ("");
}

Boolean UNIX_JobQueue::getDefaultJobPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_JOB_PRIORITY, getDefaultJobPriority());
	return true;
}

Uint32 UNIX_JobQueue::getDefaultJobPriority() const
{
	return Uint32(0);
}

Boolean UNIX_JobQueue::getMaxTimeOnQueue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_TIME_ON_QUEUE, getMaxTimeOnQueue());
	return true;
}

CIMDateTime UNIX_JobQueue::getMaxTimeOnQueue() const
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

Boolean UNIX_JobQueue::getMaxJobsOnQueue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_JOBS_ON_QUEUE, getMaxJobsOnQueue());
	return true;
}

Uint32 UNIX_JobQueue::getMaxJobsOnQueue() const
{
	return Uint32(0);
}

Boolean UNIX_JobQueue::getMaxJobCPUTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_JOB_C_P_U_TIME, getMaxJobCPUTime());
	return true;
}

Uint32 UNIX_JobQueue::getMaxJobCPUTime() const
{
	return Uint32(0);
}



Boolean UNIX_JobQueue::initialize()
{
	return false;
}

Boolean UNIX_JobQueue::load(int &pIndex)
{
	return false;
}

Boolean UNIX_JobQueue::finalize()
{
	return false;
}

Boolean UNIX_JobQueue::find(Array<CIMKeyBinding> &kbArray)
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
