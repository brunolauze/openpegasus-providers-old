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

#ifndef __UNIX_DIAGNOSTICRESULT_H
#define __UNIX_DIAGNOSTICRESULT_H


#include "CIM_ClassBase.h"

#include "UNIX_DiagnosticResultDeps.h"


#define PROPERTY_DIAGNOSTIC_CREATION_CLASS_NAME				"DiagnosticCreationClassName"
#define PROPERTY_DIAGNOSTIC_NAME				"DiagnosticName"
#define PROPERTY_DIAG_SYSTEM_CREATION_CLASS_NAME				"DiagSystemCreationClassName"
#define PROPERTY_DIAG_SYSTEM_NAME				"DiagSystemName"
#define PROPERTY_EXECUTION_ID				"ExecutionID"
#define PROPERTY_TIME_STAMP				"TimeStamp"
#define PROPERTY_IS_PACKAGE				"IsPackage"
#define PROPERTY_TEST_START_TIME				"TestStartTime"
#define PROPERTY_TEST_COMPLETION_TIME				"TestCompletionTime"
#define PROPERTY_TEST_STATE				"TestState"
#define PROPERTY_OTHER_STATE_DESCRIPTION				"OtherStateDescription"
#define PROPERTY_ESTIMATED_TIME_OF_PERFORMING				"EstimatedTimeOfPerforming"
#define PROPERTY_TEST_RESULTS				"TestResults"
#define PROPERTY_PERCENT_COMPLETE				"PercentComplete"
#define PROPERTY_ERROR_CODE				"ErrorCode"
#define PROPERTY_ERROR_COUNT				"ErrorCount"
#define PROPERTY_LOOPS_FAILED				"LoopsFailed"
#define PROPERTY_LOOPS_PASSED				"LoopsPassed"
#define PROPERTY_TEST_WARNING_LEVEL				"TestWarningLevel"
#define PROPERTY_REPORT_SOFT_ERRORS				"ReportSoftErrors"
#define PROPERTY_REPORT_STATUS_MESSAGES				"ReportStatusMessages"
#define PROPERTY_HALT_ON_ERROR				"HaltOnError"
#define PROPERTY_QUICK_MODE				"QuickMode"
#define PROPERTY_PERCENT_OF_TEST_COVERAGE				"PercentOfTestCoverage"


class UNIX_DiagnosticResult :
	public CIM_ClassBase
{
public:

	UNIX_DiagnosticResult();
	~UNIX_DiagnosticResult();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean finalize();
	virtual Boolean find(Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);

	virtual Boolean getDiagnosticCreationClassName(CIMProperty&) const;
	virtual String getDiagnosticCreationClassName() const;
	virtual Boolean getDiagnosticName(CIMProperty&) const;
	virtual String getDiagnosticName() const;
	virtual Boolean getDiagSystemCreationClassName(CIMProperty&) const;
	virtual String getDiagSystemCreationClassName() const;
	virtual Boolean getDiagSystemName(CIMProperty&) const;
	virtual String getDiagSystemName() const;
	virtual Boolean getExecutionID(CIMProperty&) const;
	virtual String getExecutionID() const;
	virtual Boolean getTimeStamp(CIMProperty&) const;
	virtual CIMDateTime getTimeStamp() const;
	virtual Boolean getIsPackage(CIMProperty&) const;
	virtual Boolean getIsPackage() const;
	virtual Boolean getTestStartTime(CIMProperty&) const;
	virtual CIMDateTime getTestStartTime() const;
	virtual Boolean getTestCompletionTime(CIMProperty&) const;
	virtual CIMDateTime getTestCompletionTime() const;
	virtual Boolean getTestState(CIMProperty&) const;
	virtual Uint16 getTestState() const;
	virtual Boolean getOtherStateDescription(CIMProperty&) const;
	virtual String getOtherStateDescription() const;
	virtual Boolean getEstimatedTimeOfPerforming(CIMProperty&) const;
	virtual Uint32 getEstimatedTimeOfPerforming() const;
	virtual Boolean getTestResults(CIMProperty&) const;
	virtual Array<String> getTestResults() const;
	virtual Boolean getPercentComplete(CIMProperty&) const;
	virtual Uint8 getPercentComplete() const;
	virtual Boolean getErrorCode(CIMProperty&) const;
	virtual Array<String> getErrorCode() const;
	virtual Boolean getErrorCount(CIMProperty&) const;
	virtual Array<Uint32> getErrorCount() const;
	virtual Boolean getLoopsFailed(CIMProperty&) const;
	virtual Uint32 getLoopsFailed() const;
	virtual Boolean getLoopsPassed(CIMProperty&) const;
	virtual Uint32 getLoopsPassed() const;
	virtual Boolean getTestWarningLevel(CIMProperty&) const;
	virtual Uint16 getTestWarningLevel() const;
	virtual Boolean getReportSoftErrors(CIMProperty&) const;
	virtual Boolean getReportSoftErrors() const;
	virtual Boolean getReportStatusMessages(CIMProperty&) const;
	virtual Boolean getReportStatusMessages() const;
	virtual Boolean getHaltOnError(CIMProperty&) const;
	virtual Boolean getHaltOnError() const;
	virtual Boolean getQuickMode(CIMProperty&) const;
	virtual Boolean getQuickMode() const;
	virtual Boolean getPercentOfTestCoverage(CIMProperty&) const;
	virtual Uint8 getPercentOfTestCoverage() const;

private:
	CIMName currentScope;

#	include "UNIX_DiagnosticResultPrivate.h"


};

#endif /* UNIX_DIAGNOSTICRESULT */
