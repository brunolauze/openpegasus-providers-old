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

#ifndef __UNIX_MESSAGELOG_H
#define __UNIX_MESSAGELOG_H


#include "CIM_Log.h"

#include "UNIX_MessageLogDeps.h"


#define PROPERTY_CREATION_CLASS_NAME				"CreationClassName"
#define PROPERTY_CAPABILITIES				"Capabilities"
#define PROPERTY_CAPABILITIES_DESCRIPTIONS				"CapabilitiesDescriptions"
#define PROPERTY_MAX_LOG_SIZE				"MaxLogSize"
#define PROPERTY_SIZE_OF_HEADER				"SizeOfHeader"
#define PROPERTY_HEADER_FORMAT				"HeaderFormat"
#define PROPERTY_MAX_RECORD_SIZE				"MaxRecordSize"
#define PROPERTY_SIZE_OF_RECORD_HEADER				"SizeOfRecordHeader"
#define PROPERTY_RECORD_HEADER_FORMAT				"RecordHeaderFormat"
#define PROPERTY_OTHER_POLICY_DESCRIPTION				"OtherPolicyDescription"
#define PROPERTY_TIME_WHEN_OUTDATED				"TimeWhenOutdated"
#define PROPERTY_PERCENTAGE_NEAR_FULL				"PercentageNearFull"
#define PROPERTY_LAST_CHANGE				"LastChange"
#define PROPERTY_TIME_OF_LAST_CHANGE				"TimeOfLastChange"
#define PROPERTY_RECORD_LAST_CHANGED				"RecordLastChanged"
#define PROPERTY_IS_FROZEN				"IsFrozen"
#define PROPERTY_CHARACTER_SET				"CharacterSet"


class UNIX_MessageLog :
	public CIM_Log
{
public:

	UNIX_MessageLog();
	~UNIX_MessageLog();

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
	virtual Boolean getEnabledState(CIMProperty&) const;
	virtual Uint16 getEnabledState() const;
	virtual Boolean getOtherEnabledState(CIMProperty&) const;
	virtual String getOtherEnabledState() const;
	virtual Boolean getRequestedState(CIMProperty&) const;
	virtual Uint16 getRequestedState() const;
	virtual Boolean getEnabledDefault(CIMProperty&) const;
	virtual Uint16 getEnabledDefault() const;
	virtual Boolean getTimeOfLastStateChange(CIMProperty&) const;
	virtual CIMDateTime getTimeOfLastStateChange() const;
	virtual Boolean getAvailableRequestedStates(CIMProperty&) const;
	virtual Array<Uint16> getAvailableRequestedStates() const;
	virtual Boolean getTransitioningToState(CIMProperty&) const;
	virtual Uint16 getTransitioningToState() const;
	virtual Boolean getMaxNumberOfRecords(CIMProperty&) const;
	virtual Uint64 getMaxNumberOfRecords() const;
	virtual Boolean getCurrentNumberOfRecords(CIMProperty&) const;
	virtual Uint64 getCurrentNumberOfRecords() const;
	virtual Boolean getOverwritePolicy(CIMProperty&) const;
	virtual Uint16 getOverwritePolicy() const;
	virtual Boolean getLogState(CIMProperty&) const;
	virtual Uint16 getLogState() const;
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual Boolean getCapabilities(CIMProperty&) const;
	virtual Array<Uint16> getCapabilities() const;
	virtual Boolean getCapabilitiesDescriptions(CIMProperty&) const;
	virtual Array<String> getCapabilitiesDescriptions() const;
	virtual Boolean getMaxLogSize(CIMProperty&) const;
	virtual Uint64 getMaxLogSize() const;
	virtual Boolean getSizeOfHeader(CIMProperty&) const;
	virtual Uint64 getSizeOfHeader() const;
	virtual Boolean getHeaderFormat(CIMProperty&) const;
	virtual String getHeaderFormat() const;
	virtual Boolean getMaxRecordSize(CIMProperty&) const;
	virtual Uint64 getMaxRecordSize() const;
	virtual Boolean getSizeOfRecordHeader(CIMProperty&) const;
	virtual Uint64 getSizeOfRecordHeader() const;
	virtual Boolean getRecordHeaderFormat(CIMProperty&) const;
	virtual String getRecordHeaderFormat() const;
	virtual Boolean getOtherPolicyDescription(CIMProperty&) const;
	virtual String getOtherPolicyDescription() const;
	virtual Boolean getTimeWhenOutdated(CIMProperty&) const;
	virtual CIMDateTime getTimeWhenOutdated() const;
	virtual Boolean getPercentageNearFull(CIMProperty&) const;
	virtual Uint8 getPercentageNearFull() const;
	virtual Boolean getLastChange(CIMProperty&) const;
	virtual Uint16 getLastChange() const;
	virtual Boolean getTimeOfLastChange(CIMProperty&) const;
	virtual CIMDateTime getTimeOfLastChange() const;
	virtual Boolean getRecordLastChanged(CIMProperty&) const;
	virtual Uint64 getRecordLastChanged() const;
	virtual Boolean getIsFrozen(CIMProperty&) const;
	virtual Boolean getIsFrozen() const;
	virtual Boolean getCharacterSet(CIMProperty&) const;
	virtual Uint16 getCharacterSet() const;

#if defined(PEGASUS_OS_FREEBSD)
	virtual Boolean getFileName(String&) const;
#endif

private:
	CIMName currentScope;

#	include "UNIX_MessageLogPrivate.h"


};

#endif /* UNIX_MESSAGELOG */
