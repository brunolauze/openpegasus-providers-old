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

#ifndef __UNIX_DIAGNOSTICCOMPLETIONRECORD_H
#define __UNIX_DIAGNOSTICCOMPLETIONRECORD_H


#include "CIM_DiagnosticServiceRecord.h"

#include "UNIX_DiagnosticCompletionRecordDeps.h"


#define PROPERTY_COMPLETION_STATE				"CompletionState"
#define PROPERTY_OTHER_COMPLETION_STATE_DESCRIPTION				"OtherCompletionStateDescription"


class UNIX_DiagnosticCompletionRecord :
	public CIM_DiagnosticServiceRecord
{
public:

	UNIX_DiagnosticCompletionRecord();
	~UNIX_DiagnosticCompletionRecord();

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
	virtual Boolean getRecordFormat(CIMProperty&) const;
	virtual String getRecordFormat() const;
	virtual Boolean getRecordData(CIMProperty&) const;
	virtual String getRecordData() const;
	virtual Boolean getLocale(CIMProperty&) const;
	virtual String getLocale() const;
	virtual Boolean getPerceivedSeverity(CIMProperty&) const;
	virtual Uint16 getPerceivedSeverity() const;
	virtual Boolean getServiceName(CIMProperty&) const;
	virtual String getServiceName() const;
	virtual Boolean getManagedElementName(CIMProperty&) const;
	virtual String getManagedElementName() const;
	virtual Boolean getExpirationDate(CIMProperty&) const;
	virtual CIMDateTime getExpirationDate() const;
	virtual Boolean getRecordType(CIMProperty&) const;
	virtual Uint16 getRecordType() const;
	virtual Boolean getOtherRecordTypeDescription(CIMProperty&) const;
	virtual String getOtherRecordTypeDescription() const;
	virtual Boolean getCreationTimeStamp(CIMProperty&) const;
	virtual CIMDateTime getCreationTimeStamp() const;
	virtual Boolean getErrorCode(CIMProperty&) const;
	virtual Array<String> getErrorCode() const;
	virtual Boolean getErrorCount(CIMProperty&) const;
	virtual Array<Uint32> getErrorCount() const;
	virtual Boolean getLoopsFailed(CIMProperty&) const;
	virtual Uint32 getLoopsFailed() const;
	virtual Boolean getLoopsPassed(CIMProperty&) const;
	virtual Uint32 getLoopsPassed() const;
	virtual Boolean getCompletionState(CIMProperty&) const;
	virtual Uint16 getCompletionState() const;
	virtual Boolean getOtherCompletionStateDescription(CIMProperty&) const;
	virtual String getOtherCompletionStateDescription() const;

private:
	CIMName currentScope;

#	include "UNIX_DiagnosticCompletionRecordPrivate.h"


};

#endif /* UNIX_DIAGNOSTICCOMPLETIONRECORD */
