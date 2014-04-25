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


UNIX_ConcreteJob::UNIX_ConcreteJob(void)
{
}

UNIX_ConcreteJob::~UNIX_ConcreteJob(void)
{
}


Boolean UNIX_ConcreteJob::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ConcreteJob::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_ConcreteJob::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ConcreteJob::getCaption() const
{
	return String ("");
}

Boolean UNIX_ConcreteJob::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ConcreteJob::getDescription() const
{
	return String ("");
}

Boolean UNIX_ConcreteJob::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ConcreteJob::getElementName() const
{
	return String("ConcreteJob");
}

Boolean UNIX_ConcreteJob::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_ConcreteJob::getInstallDate() const
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

Boolean UNIX_ConcreteJob::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_ConcreteJob::getName() const
{
	return String ("");
}

Boolean UNIX_ConcreteJob::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_ConcreteJob::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_ConcreteJob::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_ConcreteJob::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_ConcreteJob::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_ConcreteJob::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_ConcreteJob::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_ConcreteJob::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_ConcreteJob::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_ConcreteJob::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_ConcreteJob::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_ConcreteJob::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_ConcreteJob::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_ConcreteJob::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_ConcreteJob::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_ConcreteJob::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_ConcreteJob::getJobStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_JOB_STATUS, getJobStatus());
	return true;
}

String UNIX_ConcreteJob::getJobStatus() const
{
	return String ("");
}

Boolean UNIX_ConcreteJob::getTimeSubmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_SUBMITTED, getTimeSubmitted());
	return true;
}

CIMDateTime UNIX_ConcreteJob::getTimeSubmitted() const
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

Boolean UNIX_ConcreteJob::getScheduledStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCHEDULED_START_TIME, getScheduledStartTime());
	return true;
}

CIMDateTime UNIX_ConcreteJob::getScheduledStartTime() const
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

Boolean UNIX_ConcreteJob::getStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_TIME, getStartTime());
	return true;
}

CIMDateTime UNIX_ConcreteJob::getStartTime() const
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

Boolean UNIX_ConcreteJob::getElapsedTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELAPSED_TIME, getElapsedTime());
	return true;
}

CIMDateTime UNIX_ConcreteJob::getElapsedTime() const
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

Boolean UNIX_ConcreteJob::getJobRunTimes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_JOB_RUN_TIMES, getJobRunTimes());
	return true;
}

Uint32 UNIX_ConcreteJob::getJobRunTimes() const
{
	return Uint32(0);
}

Boolean UNIX_ConcreteJob::getRunMonth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RUN_MONTH, getRunMonth());
	return true;
}

Uint8 UNIX_ConcreteJob::getRunMonth() const
{
	return Uint8(0);
}

Boolean UNIX_ConcreteJob::getRunDay(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RUN_DAY, getRunDay());
	return true;
}

Sint8 UNIX_ConcreteJob::getRunDay() const
{
	return Sint8(0);
}

Boolean UNIX_ConcreteJob::getRunDayOfWeek(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RUN_DAY_OF_WEEK, getRunDayOfWeek());
	return true;
}

Sint8 UNIX_ConcreteJob::getRunDayOfWeek() const
{
	return Sint8(0);
}

Boolean UNIX_ConcreteJob::getRunStartInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RUN_START_INTERVAL, getRunStartInterval());
	return true;
}

CIMDateTime UNIX_ConcreteJob::getRunStartInterval() const
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

Boolean UNIX_ConcreteJob::getLocalOrUtcTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCAL_OR_UTC_TIME, getLocalOrUtcTime());
	return true;
}

Uint16 UNIX_ConcreteJob::getLocalOrUtcTime() const
{
	return Uint16(0);
}

Boolean UNIX_ConcreteJob::getUntilTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNTIL_TIME, getUntilTime());
	return true;
}

CIMDateTime UNIX_ConcreteJob::getUntilTime() const
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

Boolean UNIX_ConcreteJob::getNotify(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NOTIFY, getNotify());
	return true;
}

String UNIX_ConcreteJob::getNotify() const
{
	return String ("");
}

Boolean UNIX_ConcreteJob::getOwner(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OWNER, getOwner());
	return true;
}

String UNIX_ConcreteJob::getOwner() const
{
	return String ("");
}

Boolean UNIX_ConcreteJob::getPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIORITY, getPriority());
	return true;
}

Uint32 UNIX_ConcreteJob::getPriority() const
{
	return Uint32(0);
}

Boolean UNIX_ConcreteJob::getPercentComplete(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERCENT_COMPLETE, getPercentComplete());
	return true;
}

Uint16 UNIX_ConcreteJob::getPercentComplete() const
{
	return Uint16(0);
}

Boolean UNIX_ConcreteJob::getDeleteOnCompletion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELETE_ON_COMPLETION, getDeleteOnCompletion());
	return true;
}

Boolean UNIX_ConcreteJob::getDeleteOnCompletion() const
{
	return Boolean(false);
}

Boolean UNIX_ConcreteJob::getErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CODE, getErrorCode());
	return true;
}

Uint16 UNIX_ConcreteJob::getErrorCode() const
{
	return Uint16(0);
}

Boolean UNIX_ConcreteJob::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_ConcreteJob::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_ConcreteJob::getRecoveryAction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECOVERY_ACTION, getRecoveryAction());
	return true;
}

Uint16 UNIX_ConcreteJob::getRecoveryAction() const
{
	return Uint16(0);
}

Boolean UNIX_ConcreteJob::getOtherRecoveryAction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_RECOVERY_ACTION, getOtherRecoveryAction());
	return true;
}

String UNIX_ConcreteJob::getOtherRecoveryAction() const
{
	return String ("");
}

Boolean UNIX_ConcreteJob::getJobState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_JOB_STATE, getJobState());
	return true;
}

Uint16 UNIX_ConcreteJob::getJobState() const
{
	return Uint16(0);
}

Boolean UNIX_ConcreteJob::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_ConcreteJob::getTimeOfLastStateChange() const
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

Boolean UNIX_ConcreteJob::getTimeBeforeRemoval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_BEFORE_REMOVAL, getTimeBeforeRemoval());
	return true;
}

CIMDateTime UNIX_ConcreteJob::getTimeBeforeRemoval() const
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



Boolean UNIX_ConcreteJob::initialize()
{
	return false;
}

Boolean UNIX_ConcreteJob::load(int &pIndex)
{
	return false;
}

Boolean UNIX_ConcreteJob::finalize()
{
	return false;
}

Boolean UNIX_ConcreteJob::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String instanceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_INSTANCE_ID)) instanceIDKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
