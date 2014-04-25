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


#include "UNIX_DiagnosticResultProvider.h"

UNIX_DiagnosticResultProvider::UNIX_DiagnosticResultProvider()
{
}

UNIX_DiagnosticResultProvider::~UNIX_DiagnosticResultProvider()
{
}

CIMInstance UNIX_DiagnosticResultProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_DiagnosticResult &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_DiagnosticResult"),
			constructKeyBindings(_p)));

	//CIM_DiagnosticResult Properties
	if (_p.getDiagnosticCreationClassName(p)) inst.addProperty(p);
	if (_p.getDiagnosticName(p)) inst.addProperty(p);
	if (_p.getDiagSystemCreationClassName(p)) inst.addProperty(p);
	if (_p.getDiagSystemName(p)) inst.addProperty(p);
	if (_p.getExecutionID(p)) inst.addProperty(p);
	if (_p.getTimeStamp(p)) inst.addProperty(p);
	if (_p.getIsPackage(p)) inst.addProperty(p);
	if (_p.getTestStartTime(p)) inst.addProperty(p);
	if (_p.getTestCompletionTime(p)) inst.addProperty(p);
	if (_p.getTestState(p)) inst.addProperty(p);
	if (_p.getOtherStateDescription(p)) inst.addProperty(p);
	if (_p.getEstimatedTimeOfPerforming(p)) inst.addProperty(p);
	if (_p.getTestResults(p)) inst.addProperty(p);
	if (_p.getPercentComplete(p)) inst.addProperty(p);
	if (_p.getErrorCode(p)) inst.addProperty(p);
	if (_p.getErrorCount(p)) inst.addProperty(p);
	if (_p.getLoopsFailed(p)) inst.addProperty(p);
	if (_p.getLoopsPassed(p)) inst.addProperty(p);
	if (_p.getTestWarningLevel(p)) inst.addProperty(p);
	if (_p.getReportSoftErrors(p)) inst.addProperty(p);
	if (_p.getReportStatusMessages(p)) inst.addProperty(p);
	if (_p.getHaltOnError(p)) inst.addProperty(p);
	if (_p.getQuickMode(p)) inst.addProperty(p);
	if (_p.getPercentOfTestCoverage(p)) inst.addProperty(p);


	return inst;
}

Array<CIMKeyBinding> UNIX_DiagnosticResultProvider::constructKeyBindings(const UNIX_DiagnosticResult& _p)

{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_DIAGNOSTIC_CREATION_CLASS_NAME,
		_p.getDiagnosticCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_DIAGNOSTIC_NAME,
		_p.getDiagnosticName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_DIAG_SYSTEM_CREATION_CLASS_NAME,
		_p.getDiagSystemCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_DIAG_SYSTEM_NAME,
		_p.getDiagSystemName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_EXECUTION_ID,
		_p.getExecutionID(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_DiagnosticResultProvider
#define UNIX_PROVIDER_NAME "UNIX_DiagnosticResultProvider"
#define CLASS_IMPLEMENTATION UNIX_DiagnosticResult
#define CLASS_IMPLEMENTATION_NAME "UNIX_DiagnosticResult"
#define BASE_CLASS_NAME "CIM_DiagnosticResult"
#define NUMKEYS_CLASS_IMPLEMENTATION 5


#include "UNIXProviderBase.hpp"

