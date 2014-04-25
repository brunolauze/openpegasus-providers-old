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


#include "UNIX_ProcessProvider.h"

UNIX_ProcessProvider::UNIX_ProcessProvider()
{
}

UNIX_ProcessProvider::~UNIX_ProcessProvider()
{
}

CIMInstance UNIX_ProcessProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_Process &_p) const
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			className,
			constructKeyBindings(_p)));

	//CIM_ManagedElement Properties
	if (_p.getInstanceID(p)) inst.addProperty(p);
	if (_p.getCaption(p)) inst.addProperty(p);
	if (_p.getDescription(p)) inst.addProperty(p);
	if (_p.getElementName(p)) inst.addProperty(p);

	//CIM_ManagedSystemElement Properties
	if (_p.getInstallDate(p)) inst.addProperty(p);
	if (_p.getName(p)) inst.addProperty(p);
	if (_p.getOperationalStatus(p)) inst.addProperty(p);
	if (_p.getStatusDescriptions(p)) inst.addProperty(p);
	if (_p.getStatus(p)) inst.addProperty(p);
	if (_p.getHealthState(p)) inst.addProperty(p);
	if (_p.getCommunicationStatus(p)) inst.addProperty(p);
	if (_p.getDetailedStatus(p)) inst.addProperty(p);
	if (_p.getOperatingStatus(p)) inst.addProperty(p);
	if (_p.getPrimaryStatus(p)) inst.addProperty(p);

	//CIM_LogicalElement Properties

	//CIM_EnabledLogicalElement Properties
	if (_p.getEnabledState(p)) inst.addProperty(p);
	if (_p.getOtherEnabledState(p)) inst.addProperty(p);
	if (_p.getRequestedState(p)) inst.addProperty(p);
	if (_p.getEnabledDefault(p)) inst.addProperty(p);
	if (_p.getTimeOfLastStateChange(p)) inst.addProperty(p);
	if (_p.getAvailableRequestedStates(p)) inst.addProperty(p);
	if (_p.getTransitioningToState(p)) inst.addProperty(p);

	//CIM_Process Properties
	if (_p.getCSCreationClassName(p)) inst.addProperty(p);
	if (_p.getCSName(p)) inst.addProperty(p);
	if (_p.getOSCreationClassName(p)) inst.addProperty(p);
	if (_p.getOSName(p)) inst.addProperty(p);
	if (_p.getCreationClassName(p)) inst.addProperty(p);
	if (_p.getHandle(p)) inst.addProperty(p);
	if (_p.getPriority(p)) inst.addProperty(p);
	if (_p.getExecutionState(p)) inst.addProperty(p);
	if (_p.getOtherExecutionDescription(p)) inst.addProperty(p);
	if (_p.getCreationDate(p)) inst.addProperty(p);
	if (_p.getTerminationDate(p)) inst.addProperty(p);
	if (_p.getKernelModeTime(p)) inst.addProperty(p);
	if (_p.getUserModeTime(p)) inst.addProperty(p);
	if (_p.getWorkingSetSize(p)) inst.addProperty(p);

	if (className.equal("CIM_Process")) return inst;

	//CIM_UnixProcess Properties
	if (_p.getParentProcessID(p)) inst.addProperty(p);
	if (_p.getRealUserID(p)) inst.addProperty(p);
	if (_p.getProcessGroupID(p)) inst.addProperty(p);
	if (_p.getProcessSessionID(p)) inst.addProperty(p);
	if (_p.getProcessTTY(p)) inst.addProperty(p);
	if (_p.getModulePath(p)) inst.addProperty(p);
	if (_p.getParameters(p)) inst.addProperty(p);
	if (_p.getProcessNiceValue(p)) inst.addProperty(p);
	if (_p.getProcessWaitingForEvent(p)) inst.addProperty(p);


	return inst;
}

Array<CIMKeyBinding> UNIX_ProcessProvider::constructKeyBindings(const UNIX_Process& _p) const

{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_CS_CREATION_CLASS_NAME,
		_p.getCSCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_CS_NAME,
		_p.getCSName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_OS_CREATION_CLASS_NAME,
		_p.getOSCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_OS_NAME,
		_p.getOSName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_CREATION_CLASS_NAME,
		_p.getCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_HANDLE,
		_p.getHandle(),
		CIMKeyBinding::STRING));


	return keys;
}


#define __createInstance_H
void UNIX_ProcessProvider::createInstance(
    const OperationContext& context,
    const CIMObjectPath& ref,
    const CIMInstance& instanceObject,
    ObjectPathResponseHandler& handler )
{

    CIMObjectPath localReference(String(""), //empty host
    				ref.getNameSpace(),
    				ref.getClassName(),
    				ref.getKeyBindings());
    CIMName className(localReference.getClassName());
	_checkClass(className);
	_p.createInstance(instanceObject);
}

#define UNIX_PROVIDER UNIX_ProcessProvider
#define UNIX_PROVIDER_NAME "UNIX_ProcessProvider"
#define CLASS_IMPLEMENTATION UNIX_Process
#define CLASS_IMPLEMENTATION_NAME "UNIX_Process"
#define BASE_CLASS_NAME "CIM_UnixProcess"
#define BASE_BASE_CLASS_NAME "CIM_Process"
#define NUMKEYS_CLASS_IMPLEMENTATION 6


#include "UNIXProviderBase.hpp"

