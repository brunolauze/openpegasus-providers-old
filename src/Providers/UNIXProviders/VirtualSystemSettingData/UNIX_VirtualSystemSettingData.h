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

#ifndef __UNIX_VIRTUALSYSTEMSETTINGDATA_H
#define __UNIX_VIRTUALSYSTEMSETTINGDATA_H


#include "CIM_SettingData.h"

#include "UNIX_VirtualSystemSettingDataDeps.h"


#define PROPERTY_VIRTUAL_SYSTEM_IDENTIFIER				"VirtualSystemIdentifier"
#define PROPERTY_VIRTUAL_SYSTEM_TYPE				"VirtualSystemType"
#define PROPERTY_NOTES				"Notes"
#define PROPERTY_CREATION_TIME				"CreationTime"
#define PROPERTY_CONFIGURATION_ID				"ConfigurationID"
#define PROPERTY_CONFIGURATION_DATA_ROOT				"ConfigurationDataRoot"
#define PROPERTY_CONFIGURATION_FILE				"ConfigurationFile"
#define PROPERTY_SNAPSHOT_DATA_ROOT				"SnapshotDataRoot"
#define PROPERTY_SUSPEND_DATA_ROOT				"SuspendDataRoot"
#define PROPERTY_SWAP_FILE_DATA_ROOT				"SwapFileDataRoot"
#define PROPERTY_LOG_DATA_ROOT				"LogDataRoot"
#define PROPERTY_AUTOMATIC_STARTUP_ACTION				"AutomaticStartupAction"
#define PROPERTY_AUTOMATIC_STARTUP_ACTION_DELAY				"AutomaticStartupActionDelay"
#define PROPERTY_AUTOMATIC_STARTUP_ACTION_SEQUENCE_NUMBER				"AutomaticStartupActionSequenceNumber"
#define PROPERTY_AUTOMATIC_SHUTDOWN_ACTION				"AutomaticShutdownAction"
#define PROPERTY_AUTOMATIC_RECOVERY_ACTION				"AutomaticRecoveryAction"
#define PROPERTY_RECOVERY_FILE				"RecoveryFile"


class UNIX_VirtualSystemSettingData :
	public CIM_SettingData
{
public:

	UNIX_VirtualSystemSettingData();
	~UNIX_VirtualSystemSettingData();

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
	virtual Boolean getChangeableType(CIMProperty&) const;
	virtual Uint16 getChangeableType() const;
	virtual Boolean getConfigurationName(CIMProperty&) const;
	virtual String getConfigurationName() const;
	virtual Boolean getVirtualSystemIdentifier(CIMProperty&) const;
	virtual String getVirtualSystemIdentifier() const;
	virtual Boolean getVirtualSystemType(CIMProperty&) const;
	virtual String getVirtualSystemType() const;
	virtual Boolean getNotes(CIMProperty&) const;
	virtual Array<String> getNotes() const;
	virtual Boolean getCreationTime(CIMProperty&) const;
	virtual CIMDateTime getCreationTime() const;
	virtual Boolean getConfigurationID(CIMProperty&) const;
	virtual String getConfigurationID() const;
	virtual Boolean getConfigurationDataRoot(CIMProperty&) const;
	virtual String getConfigurationDataRoot() const;
	virtual Boolean getConfigurationFile(CIMProperty&) const;
	virtual String getConfigurationFile() const;
	virtual Boolean getSnapshotDataRoot(CIMProperty&) const;
	virtual String getSnapshotDataRoot() const;
	virtual Boolean getSuspendDataRoot(CIMProperty&) const;
	virtual String getSuspendDataRoot() const;
	virtual Boolean getSwapFileDataRoot(CIMProperty&) const;
	virtual String getSwapFileDataRoot() const;
	virtual Boolean getLogDataRoot(CIMProperty&) const;
	virtual String getLogDataRoot() const;
	virtual Boolean getAutomaticStartupAction(CIMProperty&) const;
	virtual Uint16 getAutomaticStartupAction() const;
	virtual Boolean getAutomaticStartupActionDelay(CIMProperty&) const;
	virtual CIMDateTime getAutomaticStartupActionDelay() const;
	virtual Boolean getAutomaticStartupActionSequenceNumber(CIMProperty&) const;
	virtual Uint16 getAutomaticStartupActionSequenceNumber() const;
	virtual Boolean getAutomaticShutdownAction(CIMProperty&) const;
	virtual Uint16 getAutomaticShutdownAction() const;
	virtual Boolean getAutomaticRecoveryAction(CIMProperty&) const;
	virtual Uint16 getAutomaticRecoveryAction() const;
	virtual Boolean getRecoveryFile(CIMProperty&) const;
	virtual String getRecoveryFile() const;

private:
	CIMName currentScope;

#	include "UNIX_VirtualSystemSettingDataPrivate.h"


};

#endif /* UNIX_VIRTUALSYSTEMSETTINGDATA */
