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

#ifndef __UNIX_THREAD_H
#define __UNIX_THREAD_H


#include "CIM_Thread.h"

#include "UNIX_ThreadDeps.h"


#define PROPERTY_SCHED_POLICY				"SchedPolicy"
#define PROPERTY_OTHER_SCHED_POLICY				"OtherSchedPolicy"
#define PROPERTY_GUARD_SIZE				"GuardSize"
#define PROPERTY_DETACH_STATE				"DetachState"
#define PROPERTY_INHERIT_SCHED				"InheritSched"
#define PROPERTY_CONTENTION_SCOPE				"ContentionScope"
#define PROPERTY_STACK_SIZE				"StackSize"
#define PROPERTY_CONCURRENCY_LEVEL				"ConcurrencyLevel"
#define PROPERTY_CANCEL_STATE				"CancelState"
#define PROPERTY_CANCEL_TYPE				"CancelType"


class UNIX_Thread :
	public CIM_Thread
{
public:

	UNIX_Thread();
	~UNIX_Thread();

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
	virtual Boolean getCSCreationClassName(CIMProperty&) const;
	virtual String getCSCreationClassName() const;
	virtual Boolean getCSName(CIMProperty&) const;
	virtual String getCSName() const;
	virtual Boolean getOSCreationClassName(CIMProperty&) const;
	virtual String getOSCreationClassName() const;
	virtual Boolean getOSName(CIMProperty&) const;
	virtual String getOSName() const;
	virtual Boolean getProcessCreationClassName(CIMProperty&) const;
	virtual String getProcessCreationClassName() const;
	virtual Boolean getProcessHandle(CIMProperty&) const;
	virtual String getProcessHandle() const;
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual Boolean getHandle(CIMProperty&) const;
	virtual String getHandle() const;
	virtual Boolean getPriority(CIMProperty&) const;
	virtual Uint32 getPriority() const;
	virtual Boolean getExecutionState(CIMProperty&) const;
	virtual Uint16 getExecutionState() const;
	virtual Boolean getKernelModeTime(CIMProperty&) const;
	virtual Uint64 getKernelModeTime() const;
	virtual Boolean getUserModeTime(CIMProperty&) const;
	virtual Uint64 getUserModeTime() const;
	virtual Boolean getSchedPolicy(CIMProperty&) const;
	virtual Uint16 getSchedPolicy() const;
	virtual Boolean getOtherSchedPolicy(CIMProperty&) const;
	virtual String getOtherSchedPolicy() const;
	virtual Boolean getGuardSize(CIMProperty&) const;
	virtual String getGuardSize() const;
	virtual Boolean getDetachState(CIMProperty&) const;
	virtual Uint16 getDetachState() const;
	virtual Boolean getInheritSched(CIMProperty&) const;
	virtual Uint16 getInheritSched() const;
	virtual Boolean getContentionScope(CIMProperty&) const;
	virtual Uint16 getContentionScope() const;
	virtual Boolean getStackSize(CIMProperty&) const;
	virtual String getStackSize() const;
	virtual Boolean getConcurrencyLevel(CIMProperty&) const;
	virtual Uint64 getConcurrencyLevel() const;
	virtual Boolean getCancelState(CIMProperty&) const;
	virtual Uint16 getCancelState() const;
	virtual Boolean getCancelType(CIMProperty&) const;
	virtual Uint16 getCancelType() const;

private:
	CIMName currentScope;

#	include "UNIX_ThreadPrivate.h"


};

#endif /* UNIX_THREAD */
