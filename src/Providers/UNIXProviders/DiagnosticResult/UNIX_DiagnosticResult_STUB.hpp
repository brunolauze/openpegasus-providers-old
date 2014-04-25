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


UNIX_DiagnosticResult::UNIX_DiagnosticResult(void)
{
}

UNIX_DiagnosticResult::~UNIX_DiagnosticResult(void)
{
}


Boolean UNIX_DiagnosticResult::getDiagnosticCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DIAGNOSTIC_CREATION_CLASS_NAME, getDiagnosticCreationClassName());
	return true;
}

String UNIX_DiagnosticResult::getDiagnosticCreationClassName() const
{
	return String ("");
}

Boolean UNIX_DiagnosticResult::getDiagnosticName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DIAGNOSTIC_NAME, getDiagnosticName());
	return true;
}

String UNIX_DiagnosticResult::getDiagnosticName() const
{
	return String ("");
}

Boolean UNIX_DiagnosticResult::getDiagSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DIAG_SYSTEM_CREATION_CLASS_NAME, getDiagSystemCreationClassName());
	return true;
}

String UNIX_DiagnosticResult::getDiagSystemCreationClassName() const
{
	return String ("");
}

Boolean UNIX_DiagnosticResult::getDiagSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DIAG_SYSTEM_NAME, getDiagSystemName());
	return true;
}

String UNIX_DiagnosticResult::getDiagSystemName() const
{
	return String ("");
}

Boolean UNIX_DiagnosticResult::getExecutionID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXECUTION_ID, getExecutionID());
	return true;
}

String UNIX_DiagnosticResult::getExecutionID() const
{
	return String ("");
}

Boolean UNIX_DiagnosticResult::getTimeStamp(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_STAMP, getTimeStamp());
	return true;
}

CIMDateTime UNIX_DiagnosticResult::getTimeStamp() const
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

Boolean UNIX_DiagnosticResult::getIsPackage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_PACKAGE, getIsPackage());
	return true;
}

Boolean UNIX_DiagnosticResult::getIsPackage() const
{
	return Boolean(false);
}

Boolean UNIX_DiagnosticResult::getTestStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TEST_START_TIME, getTestStartTime());
	return true;
}

CIMDateTime UNIX_DiagnosticResult::getTestStartTime() const
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

Boolean UNIX_DiagnosticResult::getTestCompletionTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TEST_COMPLETION_TIME, getTestCompletionTime());
	return true;
}

CIMDateTime UNIX_DiagnosticResult::getTestCompletionTime() const
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

Boolean UNIX_DiagnosticResult::getTestState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TEST_STATE, getTestState());
	return true;
}

Uint16 UNIX_DiagnosticResult::getTestState() const
{
	return Uint16(0);
}

Boolean UNIX_DiagnosticResult::getOtherStateDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_STATE_DESCRIPTION, getOtherStateDescription());
	return true;
}

String UNIX_DiagnosticResult::getOtherStateDescription() const
{
	return String ("");
}

Boolean UNIX_DiagnosticResult::getEstimatedTimeOfPerforming(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ESTIMATED_TIME_OF_PERFORMING, getEstimatedTimeOfPerforming());
	return true;
}

Uint32 UNIX_DiagnosticResult::getEstimatedTimeOfPerforming() const
{
	return Uint32(0);
}

Boolean UNIX_DiagnosticResult::getTestResults(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TEST_RESULTS, getTestResults());
	return true;
}

Array<String> UNIX_DiagnosticResult::getTestResults() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_DiagnosticResult::getPercentComplete(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERCENT_COMPLETE, getPercentComplete());
	return true;
}

Uint8 UNIX_DiagnosticResult::getPercentComplete() const
{
	return Uint8(0);
}

Boolean UNIX_DiagnosticResult::getErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CODE, getErrorCode());
	return true;
}

Array<String> UNIX_DiagnosticResult::getErrorCode() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_DiagnosticResult::getErrorCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_COUNT, getErrorCount());
	return true;
}

Array<Uint32> UNIX_DiagnosticResult::getErrorCount() const
{
	Array<Uint32> as;
	

	return as;

}

Boolean UNIX_DiagnosticResult::getLoopsFailed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOOPS_FAILED, getLoopsFailed());
	return true;
}

Uint32 UNIX_DiagnosticResult::getLoopsFailed() const
{
	return Uint32(0);
}

Boolean UNIX_DiagnosticResult::getLoopsPassed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOOPS_PASSED, getLoopsPassed());
	return true;
}

Uint32 UNIX_DiagnosticResult::getLoopsPassed() const
{
	return Uint32(0);
}

Boolean UNIX_DiagnosticResult::getTestWarningLevel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TEST_WARNING_LEVEL, getTestWarningLevel());
	return true;
}

Uint16 UNIX_DiagnosticResult::getTestWarningLevel() const
{
	return Uint16(0);
}

Boolean UNIX_DiagnosticResult::getReportSoftErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPORT_SOFT_ERRORS, getReportSoftErrors());
	return true;
}

Boolean UNIX_DiagnosticResult::getReportSoftErrors() const
{
	return Boolean(false);
}

Boolean UNIX_DiagnosticResult::getReportStatusMessages(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPORT_STATUS_MESSAGES, getReportStatusMessages());
	return true;
}

Boolean UNIX_DiagnosticResult::getReportStatusMessages() const
{
	return Boolean(false);
}

Boolean UNIX_DiagnosticResult::getHaltOnError(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HALT_ON_ERROR, getHaltOnError());
	return true;
}

Boolean UNIX_DiagnosticResult::getHaltOnError() const
{
	return Boolean(false);
}

Boolean UNIX_DiagnosticResult::getQuickMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_QUICK_MODE, getQuickMode());
	return true;
}

Boolean UNIX_DiagnosticResult::getQuickMode() const
{
	return Boolean(false);
}

Boolean UNIX_DiagnosticResult::getPercentOfTestCoverage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERCENT_OF_TEST_COVERAGE, getPercentOfTestCoverage());
	return true;
}

Uint8 UNIX_DiagnosticResult::getPercentOfTestCoverage() const
{
	return Uint8(0);
}



Boolean UNIX_DiagnosticResult::initialize()
{
	return false;
}

Boolean UNIX_DiagnosticResult::load(int &pIndex)
{
	return false;
}

Boolean UNIX_DiagnosticResult::finalize()
{
	return false;
}

Boolean UNIX_DiagnosticResult::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String diagnosticCreationClassNameKey;
	String diagnosticNameKey;
	String diagSystemCreationClassNameKey;
	String diagSystemNameKey;
	String executionIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_DIAGNOSTIC_CREATION_CLASS_NAME)) diagnosticCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DIAGNOSTIC_NAME)) diagnosticNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DIAG_SYSTEM_CREATION_CLASS_NAME)) diagSystemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DIAG_SYSTEM_NAME)) diagSystemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_EXECUTION_ID)) executionIDKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
