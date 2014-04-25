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

#ifndef __CIM_JOB_H
#define __CIM_JOB_H


#include "CIM_LogicalElement.h"


#define PROPERTY_JOB_STATUS				"JobStatus"
#define PROPERTY_TIME_SUBMITTED				"TimeSubmitted"
#define PROPERTY_SCHEDULED_START_TIME				"ScheduledStartTime"
#define PROPERTY_START_TIME				"StartTime"
#define PROPERTY_ELAPSED_TIME				"ElapsedTime"
#define PROPERTY_JOB_RUN_TIMES				"JobRunTimes"
#define PROPERTY_RUN_MONTH				"RunMonth"
#define PROPERTY_RUN_DAY				"RunDay"
#define PROPERTY_RUN_DAY_OF_WEEK				"RunDayOfWeek"
#define PROPERTY_RUN_START_INTERVAL				"RunStartInterval"
#define PROPERTY_LOCAL_OR_UTC_TIME				"LocalOrUtcTime"
#define PROPERTY_UNTIL_TIME				"UntilTime"
#define PROPERTY_NOTIFY				"Notify"
#define PROPERTY_OWNER				"Owner"
#define PROPERTY_PRIORITY				"Priority"
#define PROPERTY_PERCENT_COMPLETE				"PercentComplete"
#define PROPERTY_DELETE_ON_COMPLETION				"DeleteOnCompletion"
#define PROPERTY_ERROR_CODE				"ErrorCode"
#define PROPERTY_ERROR_DESCRIPTION				"ErrorDescription"
#define PROPERTY_RECOVERY_ACTION				"RecoveryAction"
#define PROPERTY_OTHER_RECOVERY_ACTION				"OtherRecoveryAction"


class CIM_Job :
	public CIM_LogicalElement
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean finalize()=0;
	virtual Boolean find(Array<CIMKeyBinding>&)=0;
	virtual Boolean validateKey(CIMKeyBinding&) const=0;
	virtual void setScope(CIMName)=0;

	virtual Boolean getJobStatus(CIMProperty&) const=0;
	virtual String getJobStatus() const=0;
	virtual Boolean getTimeSubmitted(CIMProperty&) const=0;
	virtual CIMDateTime getTimeSubmitted() const=0;
	virtual Boolean getScheduledStartTime(CIMProperty&) const=0;
	virtual CIMDateTime getScheduledStartTime() const=0;
	virtual Boolean getStartTime(CIMProperty&) const=0;
	virtual CIMDateTime getStartTime() const=0;
	virtual Boolean getElapsedTime(CIMProperty&) const=0;
	virtual CIMDateTime getElapsedTime() const=0;
	virtual Boolean getJobRunTimes(CIMProperty&) const=0;
	virtual Uint32 getJobRunTimes() const=0;
	virtual Boolean getRunMonth(CIMProperty&) const=0;
	virtual Uint8 getRunMonth() const=0;
	virtual Boolean getRunDay(CIMProperty&) const=0;
	virtual Sint8 getRunDay() const=0;
	virtual Boolean getRunDayOfWeek(CIMProperty&) const=0;
	virtual Sint8 getRunDayOfWeek() const=0;
	virtual Boolean getRunStartInterval(CIMProperty&) const=0;
	virtual CIMDateTime getRunStartInterval() const=0;
	virtual Boolean getLocalOrUtcTime(CIMProperty&) const=0;
	virtual Uint16 getLocalOrUtcTime() const=0;
	virtual Boolean getUntilTime(CIMProperty&) const=0;
	virtual CIMDateTime getUntilTime() const=0;
	virtual Boolean getNotify(CIMProperty&) const=0;
	virtual String getNotify() const=0;
	virtual Boolean getOwner(CIMProperty&) const=0;
	virtual String getOwner() const=0;
	virtual Boolean getPriority(CIMProperty&) const=0;
	virtual Uint32 getPriority() const=0;
	virtual Boolean getPercentComplete(CIMProperty&) const=0;
	virtual Uint16 getPercentComplete() const=0;
	virtual Boolean getDeleteOnCompletion(CIMProperty&) const=0;
	virtual Boolean getDeleteOnCompletion() const=0;
	virtual Boolean getErrorCode(CIMProperty&) const=0;
	virtual Uint16 getErrorCode() const=0;
	virtual Boolean getErrorDescription(CIMProperty&) const=0;
	virtual String getErrorDescription() const=0;
	virtual Boolean getRecoveryAction(CIMProperty&) const=0;
	virtual Uint16 getRecoveryAction() const=0;
	virtual Boolean getOtherRecoveryAction(CIMProperty&) const=0;
	virtual String getOtherRecoveryAction() const=0;

private:

};

#endif /* CIM_JOB */
