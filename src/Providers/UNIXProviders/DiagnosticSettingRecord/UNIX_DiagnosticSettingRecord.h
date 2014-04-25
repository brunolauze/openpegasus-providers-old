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

#ifndef __UNIX_DIAGNOSTICSETTINGRECORD_H
#define __UNIX_DIAGNOSTICSETTINGRECORD_H


#include "CIM_DiagnosticRecord.h"

#include "UNIX_DiagnosticSettingRecordDeps.h"


#define PROPERTY_HALT_ON_ERROR				"HaltOnError"
#define PROPERTY_QUICK_MODE				"QuickMode"
#define PROPERTY_PERCENT_OF_TEST_COVERAGE				"PercentOfTestCoverage"
#define PROPERTY_LOOP_CONTROL_PARAMETER				"LoopControlParameter"
#define PROPERTY_LOOP_CONTROL				"LoopControl"
#define PROPERTY_OTHER_LOOP_CONTROL_DESCRIPTIONS				"OtherLoopControlDescriptions"
#define PROPERTY_RESULT_PERSISTENCE				"ResultPersistence"
#define PROPERTY_LOG_OPTIONS				"LogOptions"
#define PROPERTY_OTHER_LOG_OPTIONS_DESCRIPTIONS				"OtherLogOptionsDescriptions"
#define PROPERTY_LOG_STORAGE				"LogStorage"
#define PROPERTY_OTHER_LOG_STORAGE_DESCRIPTIONS				"OtherLogStorageDescriptions"
#define PROPERTY_VERBOSITY_LEVEL				"VerbosityLevel"


class UNIX_DiagnosticSettingRecord :
	public CIM_DiagnosticRecord
{
public:

	UNIX_DiagnosticSettingRecord();
	~UNIX_DiagnosticSettingRecord();

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
	virtual Boolean getHaltOnError(CIMProperty&) const;
	virtual Boolean getHaltOnError() const;
	virtual Boolean getQuickMode(CIMProperty&) const;
	virtual Boolean getQuickMode() const;
	virtual Boolean getPercentOfTestCoverage(CIMProperty&) const;
	virtual Uint8 getPercentOfTestCoverage() const;
	virtual Boolean getLoopControlParameter(CIMProperty&) const;
	virtual Array<String> getLoopControlParameter() const;
	virtual Boolean getLoopControl(CIMProperty&) const;
	virtual Array<Uint16> getLoopControl() const;
	virtual Boolean getOtherLoopControlDescriptions(CIMProperty&) const;
	virtual Array<String> getOtherLoopControlDescriptions() const;
	virtual Boolean getResultPersistence(CIMProperty&) const;
	virtual Uint32 getResultPersistence() const;
	virtual Boolean getLogOptions(CIMProperty&) const;
	virtual Array<Uint16> getLogOptions() const;
	virtual Boolean getOtherLogOptionsDescriptions(CIMProperty&) const;
	virtual Array<String> getOtherLogOptionsDescriptions() const;
	virtual Boolean getLogStorage(CIMProperty&) const;
	virtual Array<Uint16> getLogStorage() const;
	virtual Boolean getOtherLogStorageDescriptions(CIMProperty&) const;
	virtual Array<String> getOtherLogStorageDescriptions() const;
	virtual Boolean getVerbosityLevel(CIMProperty&) const;
	virtual Array<Uint16> getVerbosityLevel() const;

private:
	CIMName currentScope;

#	include "UNIX_DiagnosticSettingRecordPrivate.h"


};

#endif /* UNIX_DIAGNOSTICSETTINGRECORD */
