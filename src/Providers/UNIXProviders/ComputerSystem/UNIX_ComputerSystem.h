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

#ifndef __UNIX_COMPUTERSYSTEM_H
#define __UNIX_COMPUTERSYSTEM_H


#include "CIM_ComputerSystem.h"

#include "UNIX_ComputerSystemDeps.h"


#define PROPERTY_INITIAL_LOAD_INFO				"InitialLoadInfo"
#define PROPERTY_LAST_LOAD_INFO				"LastLoadInfo"
#define PROPERTY_POWER_MANAGEMENT_SUPPORTED				"PowerManagementSupported"
#define PROPERTY_POWER_STATE				"PowerState"
#define PROPERTY_WAKE_UP_TYPE				"WakeUpType"


class UNIX_ComputerSystem :
	public CIM_ComputerSystem
{
public:

	UNIX_ComputerSystem();
	~UNIX_ComputerSystem();

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
	virtual Boolean getGeneration(CIMProperty&) const;
	virtual Uint64 getGeneration() const;
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
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual Boolean getNameFormat(CIMProperty&) const;
	virtual String getNameFormat() const;
	virtual Boolean getPrimaryOwnerName(CIMProperty&) const;
	virtual String getPrimaryOwnerName() const;
	virtual Boolean getPrimaryOwnerContact(CIMProperty&) const;
	virtual String getPrimaryOwnerContact() const;
	virtual Boolean getAllocationState(CIMProperty&) const;
	virtual String getAllocationState() const;
	virtual Boolean getRoles(CIMProperty&) const;
	virtual Array<String> getRoles() const;
	virtual Boolean getOtherIdentifyingInfo(CIMProperty&) const;
	virtual Array<String> getOtherIdentifyingInfo() const;
	virtual Boolean getIdentifyingDescriptions(CIMProperty&) const;
	virtual Array<String> getIdentifyingDescriptions() const;
	virtual Boolean getDedicated(CIMProperty&) const;
	virtual Array<Uint16> getDedicated() const;
	virtual Boolean getOtherDedicatedDescriptions(CIMProperty&) const;
	virtual Array<String> getOtherDedicatedDescriptions() const;
	virtual Boolean getResetCapability(CIMProperty&) const;
	virtual Uint16 getResetCapability() const;
	virtual Boolean getPowerManagementCapabilities(CIMProperty&) const;
	virtual Array<Uint16> getPowerManagementCapabilities() const;
	virtual Boolean getInitialLoadInfo(CIMProperty&) const;
	virtual Array<String> getInitialLoadInfo() const;
	virtual Boolean getLastLoadInfo(CIMProperty&) const;
	virtual String getLastLoadInfo() const;
	virtual Boolean getPowerManagementSupported(CIMProperty&) const;
	virtual Boolean getPowerManagementSupported() const;
	virtual Boolean getPowerState(CIMProperty&) const;
	virtual Uint16 getPowerState() const;
	virtual Boolean getWakeUpType(CIMProperty&) const;
	virtual Uint16 getWakeUpType() const;

private:
	CIMName currentScope;

#	include "UNIX_ComputerSystemPrivate.h"


};

#endif /* UNIX_COMPUTERSYSTEM */
