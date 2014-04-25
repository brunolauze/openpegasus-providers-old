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


UNIX_Thread::UNIX_Thread(void)
{
}

UNIX_Thread::~UNIX_Thread(void)
{
}


Boolean UNIX_Thread::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_Thread::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_Thread::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_Thread::getCaption() const
{
	return String ("");
}

Boolean UNIX_Thread::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_Thread::getDescription() const
{
	return String ("");
}

Boolean UNIX_Thread::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_Thread::getElementName() const
{
	return String("Thread");
}

Boolean UNIX_Thread::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_Thread::getInstallDate() const
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

Boolean UNIX_Thread::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_Thread::getName() const
{
	return String ("");
}

Boolean UNIX_Thread::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_Thread::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Thread::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_Thread::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Thread::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_Thread::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_Thread::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_Thread::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_Thread::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_Thread::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_Thread::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_Thread::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_Thread::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_Thread::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_Thread::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_Thread::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_Thread::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_Thread::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_Thread::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_Thread::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_Thread::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_Thread::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_Thread::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_Thread::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_Thread::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_Thread::getTimeOfLastStateChange() const
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

Boolean UNIX_Thread::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_Thread::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Thread::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_Thread::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_Thread::getCSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_CREATION_CLASS_NAME, getCSCreationClassName());
	return true;
}

String UNIX_Thread::getCSCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_Thread::getCSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_NAME, getCSName());
	return true;
}

String UNIX_Thread::getCSName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_Thread::getOSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OS_CREATION_CLASS_NAME, getOSCreationClassName());
	return true;
}

String UNIX_Thread::getOSCreationClassName() const
{
	return String("UNIX_OperatingSystem");
}

Boolean UNIX_Thread::getOSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OS_NAME, getOSName());
	return true;
}

String UNIX_Thread::getOSName() const
{
	return CIMHelper::OSName;
}

Boolean UNIX_Thread::getProcessCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROCESS_CREATION_CLASS_NAME, getProcessCreationClassName());
	return true;
}

String UNIX_Thread::getProcessCreationClassName() const
{
	return String ("");
}

Boolean UNIX_Thread::getProcessHandle(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROCESS_HANDLE, getProcessHandle());
	return true;
}

String UNIX_Thread::getProcessHandle() const
{
	return String ("");
}

Boolean UNIX_Thread::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_Thread::getCreationClassName() const
{
	return String("UNIX_Thread");
}

Boolean UNIX_Thread::getHandle(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HANDLE, getHandle());
	return true;
}

String UNIX_Thread::getHandle() const
{
	return String ("");
}

Boolean UNIX_Thread::getPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIORITY, getPriority());
	return true;
}

Uint32 UNIX_Thread::getPriority() const
{
	return Uint32(0);
}

Boolean UNIX_Thread::getExecutionState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXECUTION_STATE, getExecutionState());
	return true;
}

Uint16 UNIX_Thread::getExecutionState() const
{
	return Uint16(0);
}

Boolean UNIX_Thread::getKernelModeTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_KERNEL_MODE_TIME, getKernelModeTime());
	return true;
}

Uint64 UNIX_Thread::getKernelModeTime() const
{
	return Uint64(0);
}

Boolean UNIX_Thread::getUserModeTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_MODE_TIME, getUserModeTime());
	return true;
}

Uint64 UNIX_Thread::getUserModeTime() const
{
	return Uint64(0);
}

Boolean UNIX_Thread::getSchedPolicy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCHED_POLICY, getSchedPolicy());
	return true;
}

Uint16 UNIX_Thread::getSchedPolicy() const
{
	return Uint16(0);
}

Boolean UNIX_Thread::getOtherSchedPolicy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SCHED_POLICY, getOtherSchedPolicy());
	return true;
}

String UNIX_Thread::getOtherSchedPolicy() const
{
	return String ("");
}

Boolean UNIX_Thread::getGuardSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GUARD_SIZE, getGuardSize());
	return true;
}

String UNIX_Thread::getGuardSize() const
{
	return String ("");
}

Boolean UNIX_Thread::getDetachState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETACH_STATE, getDetachState());
	return true;
}

Uint16 UNIX_Thread::getDetachState() const
{
	return Uint16(0);
}

Boolean UNIX_Thread::getInheritSched(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INHERIT_SCHED, getInheritSched());
	return true;
}

Uint16 UNIX_Thread::getInheritSched() const
{
	return Uint16(0);
}

Boolean UNIX_Thread::getContentionScope(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONTENTION_SCOPE, getContentionScope());
	return true;
}

Uint16 UNIX_Thread::getContentionScope() const
{
	return Uint16(0);
}

Boolean UNIX_Thread::getStackSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STACK_SIZE, getStackSize());
	return true;
}

String UNIX_Thread::getStackSize() const
{
	return String ("");
}

Boolean UNIX_Thread::getConcurrencyLevel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONCURRENCY_LEVEL, getConcurrencyLevel());
	return true;
}

Uint64 UNIX_Thread::getConcurrencyLevel() const
{
	return Uint64(0);
}

Boolean UNIX_Thread::getCancelState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CANCEL_STATE, getCancelState());
	return true;
}

Uint16 UNIX_Thread::getCancelState() const
{
	return Uint16(0);
}

Boolean UNIX_Thread::getCancelType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CANCEL_TYPE, getCancelType());
	return true;
}

Uint16 UNIX_Thread::getCancelType() const
{
	return Uint16(0);
}



Boolean UNIX_Thread::initialize()
{
	return false;
}

Boolean UNIX_Thread::load(int &pIndex)
{
	return false;
}

Boolean UNIX_Thread::finalize()
{
	return false;
}

Boolean UNIX_Thread::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String cSCreationClassNameKey;
	String cSNameKey;
	String oSCreationClassNameKey;
	String oSNameKey;
	String processCreationClassNameKey;
	String processHandleKey;
	String creationClassNameKey;
	String handleKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_CS_CREATION_CLASS_NAME)) cSCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CS_NAME)) cSNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_OS_CREATION_CLASS_NAME)) oSCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_OS_NAME)) oSNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_PROCESS_CREATION_CLASS_NAME)) processCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_PROCESS_HANDLE)) processHandleKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_HANDLE)) handleKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
