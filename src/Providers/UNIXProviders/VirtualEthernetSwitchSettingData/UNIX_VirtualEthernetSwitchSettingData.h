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

#ifndef __UNIX_VIRTUALETHERNETSWITCHSETTINGDATA_H
#define __UNIX_VIRTUALETHERNETSWITCHSETTINGDATA_H


#include "CIM_VirtualSystemSettingData.h"

#include "UNIX_VirtualEthernetSwitchSettingDataDeps.h"


#define PROPERTY_V_L_A_N_CONNECTION				"VLANConnection"
#define PROPERTY_ASSOCIATED_RESOURCE_POOL				"AssociatedResourcePool"
#define PROPERTY_MAX_NUM_M_A_C_ADDRESS				"MaxNumMACAddress"
#define PROPERTY_E_V_B_MODE				"EVBMode"
#define PROPERTY_OTHER_E_V_B_MODE				"OtherEVBMode"


class UNIX_VirtualEthernetSwitchSettingData :
	public CIM_VirtualSystemSettingData
{
public:

	UNIX_VirtualEthernetSwitchSettingData();
	~UNIX_VirtualEthernetSwitchSettingData();

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
	virtual Boolean getVLANConnection(CIMProperty&) const;
	virtual Array<String> getVLANConnection() const;
	virtual Boolean getAssociatedResourcePool(CIMProperty&) const;
	virtual Array<String> getAssociatedResourcePool() const;
	virtual Boolean getMaxNumMACAddress(CIMProperty&) const;
	virtual Uint32 getMaxNumMACAddress() const;
	virtual Boolean getEVBMode(CIMProperty&) const;
	virtual Uint16 getEVBMode() const;
	virtual Boolean getOtherEVBMode(CIMProperty&) const;
	virtual String getOtherEVBMode() const;

private:
	CIMName currentScope;

#	include "UNIX_VirtualEthernetSwitchSettingDataPrivate.h"


};

#endif /* UNIX_VIRTUALETHERNETSWITCHSETTINGDATA */
