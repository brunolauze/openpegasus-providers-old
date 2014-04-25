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


UNIX_PrintJob::UNIX_PrintJob(void)
{
}

UNIX_PrintJob::~UNIX_PrintJob(void)
{
}


Boolean UNIX_PrintJob::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PrintJob::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_PrintJob::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PrintJob::getCaption() const
{
	return String ("");
}

Boolean UNIX_PrintJob::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PrintJob::getDescription() const
{
	return String ("");
}

Boolean UNIX_PrintJob::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PrintJob::getElementName() const
{
	return String("PrintJob");
}

Boolean UNIX_PrintJob::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_PrintJob::getInstallDate() const
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

Boolean UNIX_PrintJob::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PrintJob::getName() const
{
	return String ("");
}

Boolean UNIX_PrintJob::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_PrintJob::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PrintJob::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_PrintJob::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PrintJob::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_PrintJob::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_PrintJob::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_PrintJob::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_PrintJob::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_PrintJob::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_PrintJob::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_PrintJob::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_PrintJob::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_PrintJob::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_PrintJob::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_PrintJob::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_PrintJob::getJobStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_JOB_STATUS, getJobStatus());
	return true;
}

String UNIX_PrintJob::getJobStatus() const
{
	return String ("");
}

Boolean UNIX_PrintJob::getTimeSubmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_SUBMITTED, getTimeSubmitted());
	return true;
}

CIMDateTime UNIX_PrintJob::getTimeSubmitted() const
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

Boolean UNIX_PrintJob::getScheduledStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCHEDULED_START_TIME, getScheduledStartTime());
	return true;
}

CIMDateTime UNIX_PrintJob::getScheduledStartTime() const
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

Boolean UNIX_PrintJob::getStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_TIME, getStartTime());
	return true;
}

CIMDateTime UNIX_PrintJob::getStartTime() const
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

Boolean UNIX_PrintJob::getElapsedTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELAPSED_TIME, getElapsedTime());
	return true;
}

CIMDateTime UNIX_PrintJob::getElapsedTime() const
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

Boolean UNIX_PrintJob::getJobRunTimes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_JOB_RUN_TIMES, getJobRunTimes());
	return true;
}

Uint32 UNIX_PrintJob::getJobRunTimes() const
{
	return Uint32(0);
}

Boolean UNIX_PrintJob::getRunMonth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RUN_MONTH, getRunMonth());
	return true;
}

Uint8 UNIX_PrintJob::getRunMonth() const
{
	return Uint8(0);
}

Boolean UNIX_PrintJob::getRunDay(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RUN_DAY, getRunDay());
	return true;
}

Sint8 UNIX_PrintJob::getRunDay() const
{
	return Sint8(0);
}

Boolean UNIX_PrintJob::getRunDayOfWeek(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RUN_DAY_OF_WEEK, getRunDayOfWeek());
	return true;
}

Sint8 UNIX_PrintJob::getRunDayOfWeek() const
{
	return Sint8(0);
}

Boolean UNIX_PrintJob::getRunStartInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RUN_START_INTERVAL, getRunStartInterval());
	return true;
}

CIMDateTime UNIX_PrintJob::getRunStartInterval() const
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

Boolean UNIX_PrintJob::getLocalOrUtcTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCAL_OR_UTC_TIME, getLocalOrUtcTime());
	return true;
}

Uint16 UNIX_PrintJob::getLocalOrUtcTime() const
{
	return Uint16(0);
}

Boolean UNIX_PrintJob::getUntilTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNTIL_TIME, getUntilTime());
	return true;
}

CIMDateTime UNIX_PrintJob::getUntilTime() const
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

Boolean UNIX_PrintJob::getNotify(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NOTIFY, getNotify());
	return true;
}

String UNIX_PrintJob::getNotify() const
{
	return String ("");
}

Boolean UNIX_PrintJob::getOwner(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OWNER, getOwner());
	return true;
}

String UNIX_PrintJob::getOwner() const
{
	return String ("");
}

Boolean UNIX_PrintJob::getPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIORITY, getPriority());
	return true;
}

Uint32 UNIX_PrintJob::getPriority() const
{
	return Uint32(0);
}

Boolean UNIX_PrintJob::getPercentComplete(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERCENT_COMPLETE, getPercentComplete());
	return true;
}

Uint16 UNIX_PrintJob::getPercentComplete() const
{
	return Uint16(0);
}

Boolean UNIX_PrintJob::getDeleteOnCompletion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELETE_ON_COMPLETION, getDeleteOnCompletion());
	return true;
}

Boolean UNIX_PrintJob::getDeleteOnCompletion() const
{
	return Boolean(false);
}

Boolean UNIX_PrintJob::getErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CODE, getErrorCode());
	return true;
}

Uint16 UNIX_PrintJob::getErrorCode() const
{
	return Uint16(0);
}

Boolean UNIX_PrintJob::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_PrintJob::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_PrintJob::getRecoveryAction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECOVERY_ACTION, getRecoveryAction());
	return true;
}

Uint16 UNIX_PrintJob::getRecoveryAction() const
{
	return Uint16(0);
}

Boolean UNIX_PrintJob::getOtherRecoveryAction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_RECOVERY_ACTION, getOtherRecoveryAction());
	return true;
}

String UNIX_PrintJob::getOtherRecoveryAction() const
{
	return String ("");
}

Boolean UNIX_PrintJob::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_PrintJob::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_PrintJob::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_PrintJob::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_PrintJob::getQueueCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_QUEUE_CREATION_CLASS_NAME, getQueueCreationClassName());
	return true;
}

String UNIX_PrintJob::getQueueCreationClassName() const
{
	return String ("");
}

Boolean UNIX_PrintJob::getQueueName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_QUEUE_NAME, getQueueName());
	return true;
}

String UNIX_PrintJob::getQueueName() const
{
	return String ("");
}

Boolean UNIX_PrintJob::getJobID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_JOB_ID, getJobID());
	return true;
}

String UNIX_PrintJob::getJobID() const
{
	return String ("");
}

Boolean UNIX_PrintJob::getSchedulingInformation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCHEDULING_INFORMATION, getSchedulingInformation());
	return true;
}

String UNIX_PrintJob::getSchedulingInformation() const
{
	return String ("");
}

Boolean UNIX_PrintJob::getJobSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_JOB_SIZE, getJobSize());
	return true;
}

Uint32 UNIX_PrintJob::getJobSize() const
{
	return Uint32(0);
}

Boolean UNIX_PrintJob::getLanguage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LANGUAGE, getLanguage());
	return true;
}

Uint16 UNIX_PrintJob::getLanguage() const
{
	return Uint16(0);
}

Boolean UNIX_PrintJob::getMimeTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIME_TYPES, getMimeTypes());
	return true;
}

Array<String> UNIX_PrintJob::getMimeTypes() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PrintJob::getRequiredPaperType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUIRED_PAPER_TYPE, getRequiredPaperType());
	return true;
}

String UNIX_PrintJob::getRequiredPaperType() const
{
	return String ("");
}

Boolean UNIX_PrintJob::getFinishing(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FINISHING, getFinishing());
	return true;
}

Array<Uint16> UNIX_PrintJob::getFinishing() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PrintJob::getCopies(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COPIES, getCopies());
	return true;
}

Uint32 UNIX_PrintJob::getCopies() const
{
	return Uint32(0);
}

Boolean UNIX_PrintJob::getHorizontalResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HORIZONTAL_RESOLUTION, getHorizontalResolution());
	return true;
}

Uint32 UNIX_PrintJob::getHorizontalResolution() const
{
	return Uint32(0);
}

Boolean UNIX_PrintJob::getVerticalResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERTICAL_RESOLUTION, getVerticalResolution());
	return true;
}

Uint32 UNIX_PrintJob::getVerticalResolution() const
{
	return Uint32(0);
}

Boolean UNIX_PrintJob::getCharSet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHAR_SET, getCharSet());
	return true;
}

String UNIX_PrintJob::getCharSet() const
{
	return String ("");
}

Boolean UNIX_PrintJob::getNaturalLanguage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NATURAL_LANGUAGE, getNaturalLanguage());
	return true;
}

String UNIX_PrintJob::getNaturalLanguage() const
{
	return String ("");
}

Boolean UNIX_PrintJob::getNumberUp(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_UP, getNumberUp());
	return true;
}

Uint32 UNIX_PrintJob::getNumberUp() const
{
	return Uint32(0);
}

Boolean UNIX_PrintJob::getPrintJobStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRINT_JOB_STATUS, getPrintJobStatus());
	return true;
}

Uint16 UNIX_PrintJob::getPrintJobStatus() const
{
	return Uint16(0);
}

Boolean UNIX_PrintJob::getTimeCompleted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_COMPLETED, getTimeCompleted());
	return true;
}

CIMDateTime UNIX_PrintJob::getTimeCompleted() const
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

Boolean UNIX_PrintJob::getRequiredJobSheets(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUIRED_JOB_SHEETS, getRequiredJobSheets());
	return true;
}

Array<String> UNIX_PrintJob::getRequiredJobSheets() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PrintJob::getJobOrigination(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_JOB_ORIGINATION, getJobOrigination());
	return true;
}

String UNIX_PrintJob::getJobOrigination() const
{
	return String ("");
}



Boolean UNIX_PrintJob::initialize()
{
	return false;
}

Boolean UNIX_PrintJob::load(int &pIndex)
{
	return false;
}

Boolean UNIX_PrintJob::finalize()
{
	return false;
}

Boolean UNIX_PrintJob::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String queueCreationClassNameKey;
	String queueNameKey;
	String jobIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_QUEUE_CREATION_CLASS_NAME)) queueCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_QUEUE_NAME)) queueNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_JOB_ID)) jobIDKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
