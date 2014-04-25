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


#include "UNIX_DiagnosticCompletionRecordProvider.h"

UNIX_DiagnosticCompletionRecordProvider::UNIX_DiagnosticCompletionRecordProvider()
{
}

UNIX_DiagnosticCompletionRecordProvider::~UNIX_DiagnosticCompletionRecordProvider()
{
}

CIMInstance UNIX_DiagnosticCompletionRecordProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_DiagnosticCompletionRecord &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_DiagnosticCompletionRecord"),
			constructKeyBindings(_p)));

	//CIM_ManagedElement Properties
	if (_p.getInstanceID(p)) inst.addProperty(p);
	if (_p.getCaption(p)) inst.addProperty(p);
	if (_p.getDescription(p)) inst.addProperty(p);
	if (_p.getElementName(p)) inst.addProperty(p);

	//CIM_RecordForLog Properties
	if (_p.getRecordFormat(p)) inst.addProperty(p);
	if (_p.getRecordData(p)) inst.addProperty(p);
	if (_p.getLocale(p)) inst.addProperty(p);
	if (_p.getPerceivedSeverity(p)) inst.addProperty(p);

	//CIM_DiagnosticRecord Properties
	if (_p.getServiceName(p)) inst.addProperty(p);
	if (_p.getManagedElementName(p)) inst.addProperty(p);
	if (_p.getExpirationDate(p)) inst.addProperty(p);
	if (_p.getRecordType(p)) inst.addProperty(p);
	if (_p.getOtherRecordTypeDescription(p)) inst.addProperty(p);
	if (_p.getCreationTimeStamp(p)) inst.addProperty(p);

	//CIM_DiagnosticServiceRecord Properties
	if (_p.getErrorCode(p)) inst.addProperty(p);
	if (_p.getErrorCount(p)) inst.addProperty(p);
	if (_p.getLoopsFailed(p)) inst.addProperty(p);
	if (_p.getLoopsPassed(p)) inst.addProperty(p);

	//CIM_DiagnosticCompletionRecord Properties
	if (_p.getCompletionState(p)) inst.addProperty(p);
	if (_p.getOtherCompletionStateDescription(p)) inst.addProperty(p);


	return inst;
}

Array<CIMKeyBinding> UNIX_DiagnosticCompletionRecordProvider::constructKeyBindings(const UNIX_DiagnosticCompletionRecord& _p)

{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_INSTANCE_ID,
		_p.getInstanceID(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_DiagnosticCompletionRecordProvider
#define UNIX_PROVIDER_NAME "UNIX_DiagnosticCompletionRecordProvider"
#define CLASS_IMPLEMENTATION UNIX_DiagnosticCompletionRecord
#define CLASS_IMPLEMENTATION_NAME "UNIX_DiagnosticCompletionRecord"
#define BASE_CLASS_NAME "CIM_DiagnosticCompletionRecord"
#define NUMKEYS_CLASS_IMPLEMENTATION 0


#include "UNIXProviderBase.hpp"

