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

#ifndef __UNIX_PRINTJOB_H
#define __UNIX_PRINTJOB_H


#include "CIM_Job.h"

#include "UNIX_PrintJobDeps.h"


#define PROPERTY_SYSTEM_CREATION_CLASS_NAME				"SystemCreationClassName"
#define PROPERTY_SYSTEM_NAME				"SystemName"
#define PROPERTY_QUEUE_CREATION_CLASS_NAME				"QueueCreationClassName"
#define PROPERTY_QUEUE_NAME				"QueueName"
#define PROPERTY_JOB_ID				"JobID"
#define PROPERTY_SCHEDULING_INFORMATION				"SchedulingInformation"
#define PROPERTY_JOB_SIZE				"JobSize"
#define PROPERTY_LANGUAGE				"Language"
#define PROPERTY_MIME_TYPES				"MimeTypes"
#define PROPERTY_REQUIRED_PAPER_TYPE				"RequiredPaperType"
#define PROPERTY_FINISHING				"Finishing"
#define PROPERTY_COPIES				"Copies"
#define PROPERTY_HORIZONTAL_RESOLUTION				"HorizontalResolution"
#define PROPERTY_VERTICAL_RESOLUTION				"VerticalResolution"
#define PROPERTY_CHAR_SET				"CharSet"
#define PROPERTY_NATURAL_LANGUAGE				"NaturalLanguage"
#define PROPERTY_NUMBER_UP				"NumberUp"
#define PROPERTY_PRINT_JOB_STATUS				"PrintJobStatus"
#define PROPERTY_TIME_COMPLETED				"TimeCompleted"
#define PROPERTY_REQUIRED_JOB_SHEETS				"RequiredJobSheets"
#define PROPERTY_JOB_ORIGINATION				"JobOrigination"


class UNIX_PrintJob :
	public CIM_Job
{
public:

	UNIX_PrintJob();
	~UNIX_PrintJob();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean finalize();
	virtual Boolean find(Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);

	virtual Boolean getInstanceID(CIMProperty&) const;
	virtual String getInstanceID() const;
	virtual Boolean getCaption(CIMProperty&) const;
	virtual String getCaption() const;
	virtual Boolean getDescription(CIMProperty&) const;
	virtual String getDescription() const;
	virtual Boolean getElementName(CIMProperty&) const;
	virtual String getElementName() const;
	virtual Boolean getInstallDate(CIMProperty&) const;
	virtual CIMDateTime getInstallDate() const;
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual Boolean getOperationalStatus(CIMProperty&) const;
	virtual Array<Uint16> getOperationalStatus() const;
	virtual Boolean getStatusDescriptions(CIMProperty&) const;
	virtual Array<String> getStatusDescriptions() const;
	virtual Boolean getStatus(CIMProperty&) const;
	virtual String getStatus() const;
	virtual Boolean getHealthState(CIMProperty&) const;
	virtual Uint16 getHealthState() const;
	virtual Boolean getCommunicationStatus(CIMProperty&) const;
	virtual Uint16 getCommunicationStatus() const;
	virtual Boolean getDetailedStatus(CIMProperty&) const;
	virtual Uint16 getDetailedStatus() const;
	virtual Boolean getOperatingStatus(CIMProperty&) const;
	virtual Uint16 getOperatingStatus() const;
	virtual Boolean getPrimaryStatus(CIMProperty&) const;
	virtual Uint16 getPrimaryStatus() const;
	virtual Boolean getJobStatus(CIMProperty&) const;
	virtual String getJobStatus() const;
	virtual Boolean getTimeSubmitted(CIMProperty&) const;
	virtual CIMDateTime getTimeSubmitted() const;
	virtual Boolean getScheduledStartTime(CIMProperty&) const;
	virtual CIMDateTime getScheduledStartTime() const;
	virtual Boolean getStartTime(CIMProperty&) const;
	virtual CIMDateTime getStartTime() const;
	virtual Boolean getElapsedTime(CIMProperty&) const;
	virtual CIMDateTime getElapsedTime() const;
	virtual Boolean getJobRunTimes(CIMProperty&) const;
	virtual Uint32 getJobRunTimes() const;
	virtual Boolean getRunMonth(CIMProperty&) const;
	virtual Uint8 getRunMonth() const;
	virtual Boolean getRunDay(CIMProperty&) const;
	virtual Sint8 getRunDay() const;
	virtual Boolean getRunDayOfWeek(CIMProperty&) const;
	virtual Sint8 getRunDayOfWeek() const;
	virtual Boolean getRunStartInterval(CIMProperty&) const;
	virtual CIMDateTime getRunStartInterval() const;
	virtual Boolean getLocalOrUtcTime(CIMProperty&) const;
	virtual Uint16 getLocalOrUtcTime() const;
	virtual Boolean getUntilTime(CIMProperty&) const;
	virtual CIMDateTime getUntilTime() const;
	virtual Boolean getNotify(CIMProperty&) const;
	virtual String getNotify() const;
	virtual Boolean getOwner(CIMProperty&) const;
	virtual String getOwner() const;
	virtual Boolean getPriority(CIMProperty&) const;
	virtual Uint32 getPriority() const;
	virtual Boolean getPercentComplete(CIMProperty&) const;
	virtual Uint16 getPercentComplete() const;
	virtual Boolean getDeleteOnCompletion(CIMProperty&) const;
	virtual Boolean getDeleteOnCompletion() const;
	virtual Boolean getErrorCode(CIMProperty&) const;
	virtual Uint16 getErrorCode() const;
	virtual Boolean getErrorDescription(CIMProperty&) const;
	virtual String getErrorDescription() const;
	virtual Boolean getRecoveryAction(CIMProperty&) const;
	virtual Uint16 getRecoveryAction() const;
	virtual Boolean getOtherRecoveryAction(CIMProperty&) const;
	virtual String getOtherRecoveryAction() const;
	virtual Boolean getSystemCreationClassName(CIMProperty&) const;
	virtual String getSystemCreationClassName() const;
	virtual Boolean getSystemName(CIMProperty&) const;
	virtual String getSystemName() const;
	virtual Boolean getQueueCreationClassName(CIMProperty&) const;
	virtual String getQueueCreationClassName() const;
	virtual Boolean getQueueName(CIMProperty&) const;
	virtual String getQueueName() const;
	virtual Boolean getJobID(CIMProperty&) const;
	virtual String getJobID() const;
	virtual Boolean getSchedulingInformation(CIMProperty&) const;
	virtual String getSchedulingInformation() const;
	virtual Boolean getJobSize(CIMProperty&) const;
	virtual Uint32 getJobSize() const;
	virtual Boolean getLanguage(CIMProperty&) const;
	virtual Uint16 getLanguage() const;
	virtual Boolean getMimeTypes(CIMProperty&) const;
	virtual Array<String> getMimeTypes() const;
	virtual Boolean getRequiredPaperType(CIMProperty&) const;
	virtual String getRequiredPaperType() const;
	virtual Boolean getFinishing(CIMProperty&) const;
	virtual Array<Uint16> getFinishing() const;
	virtual Boolean getCopies(CIMProperty&) const;
	virtual Uint32 getCopies() const;
	virtual Boolean getHorizontalResolution(CIMProperty&) const;
	virtual Uint32 getHorizontalResolution() const;
	virtual Boolean getVerticalResolution(CIMProperty&) const;
	virtual Uint32 getVerticalResolution() const;
	virtual Boolean getCharSet(CIMProperty&) const;
	virtual String getCharSet() const;
	virtual Boolean getNaturalLanguage(CIMProperty&) const;
	virtual String getNaturalLanguage() const;
	virtual Boolean getNumberUp(CIMProperty&) const;
	virtual Uint32 getNumberUp() const;
	virtual Boolean getPrintJobStatus(CIMProperty&) const;
	virtual Uint16 getPrintJobStatus() const;
	virtual Boolean getTimeCompleted(CIMProperty&) const;
	virtual CIMDateTime getTimeCompleted() const;
	virtual Boolean getRequiredJobSheets(CIMProperty&) const;
	virtual Array<String> getRequiredJobSheets() const;
	virtual Boolean getJobOrigination(CIMProperty&) const;
	virtual String getJobOrigination() const;

private:
	CIMName currentScope;

#	include "UNIX_PrintJobPrivate.h"


};

#endif /* UNIX_PRINTJOB */
