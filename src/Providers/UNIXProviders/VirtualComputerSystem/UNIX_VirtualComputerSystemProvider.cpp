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


#include "UNIX_VirtualComputerSystemProvider.h"

UNIX_VirtualComputerSystemProvider::UNIX_VirtualComputerSystemProvider()
{
}

UNIX_VirtualComputerSystemProvider::~UNIX_VirtualComputerSystemProvider()
{
}

CIMInstance UNIX_VirtualComputerSystemProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_VirtualComputerSystem &_p) const
{
	CIMProperty p;
	// Use CreationClassName as Instance to be created.
	CIMInstance inst(_p.getCreationClassName());

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			_p.getCreationClassName(),
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

	//CIM_System Properties
	if (_p.getCreationClassName(p)) inst.addProperty(p);
	if (_p.getNameFormat(p)) inst.addProperty(p);
	if (_p.getPrimaryOwnerName(p)) inst.addProperty(p);
	if (_p.getPrimaryOwnerContact(p)) inst.addProperty(p);
	if (_p.getRoles(p)) inst.addProperty(p);
	if (_p.getOtherIdentifyingInfo(p)) inst.addProperty(p);
	if (_p.getIdentifyingDescriptions(p)) inst.addProperty(p);

	//CIM_ComputerSystem Properties
	if (_p.getDedicated(p)) inst.addProperty(p);
	if (_p.getOtherDedicatedDescriptions(p)) inst.addProperty(p);
	if (_p.getResetCapability(p)) inst.addProperty(p);
	if (_p.getPowerManagementCapabilities(p)) inst.addProperty(p);

	//CIM_VirtualComputerSystem Properties
	if (_p.getVirtualSystem(p)) inst.addProperty(p);


	return inst;
}

Array<CIMKeyBinding> UNIX_VirtualComputerSystemProvider::constructKeyBindings(const UNIX_VirtualComputerSystem& _p) const
{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_CREATION_CLASS_NAME,
		_p.getCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_NAME,
		_p.getName(),
		CIMKeyBinding::STRING));


	return keys;
}

#define __invokeMethod_H
/*
================================================================================
NAME              : invokeMethod
DESCRIPTION       : tests the argument for valid classname,
                  : throws exception if not
ASSUMPTIONS       : None
PRE-CONDITIONS    :
POST-CONDITIONS   :
NOTES             :
================================================================================
*/
void UNIX_VirtualComputerSystemProvider::invokeMethod(
    const OperationContext& context,
    const CIMObjectPath& objectReference,
    const CIMName& methodName,
    const Array<CIMParamValue>& inParameters,
    MethodResultResponseHandler& handler)
{
    Array<CIMKeyBinding> bindings(objectReference.getKeyBindings());
    CIMName className(objectReference.getClassName());
    _checkClass(className);
    handler.processing();
    _p.initialize();
	if (_p.find(bindings))
	{
		cout << "CHECKING METHOD NAME" << endl;
		if (methodName.equal(String("RequestStateChange")))
		{
			_p.setContext(className);

			/* Extract Parameters */
			Uint32 requestState = CIMHelper::extractUint32Parameter(inParameters, String("RequestedState"));
			CIMDateTime timeoutPeriod = CIMHelper::extractDateTimeParameter(inParameters, String("TimeoutPeriod"));

			_p.requestStateChange(requestState, timeoutPeriod);
			handler.deliver(CIMValue(Uint32(0)));
		}
		else if (methodName.equal(String("SetPowerState")))
		{
			_p.setContext(className);


			handler.deliver(CIMValue(Uint32(0)));
		}
		else { handler.deliver(CIMValue(Uint32(3))); }
	}
	else { handler.deliver(CIMValue(Uint32(3))); }
	_p.finalize();
	handler.complete();
}


#define __PROVIDER_PREPARE prepareEnumeration

void UNIX_VirtualComputerSystemProvider::__PROVIDER_PREPARE(
    const OperationContext& context,
    const CIMName &className,
    const CIMNamespaceName &ns,
    const Boolean includeQualifiers,
    const Boolean includeClassOrigin,
    UNIX_VirtualComputerSystem _p) const
{
	_p.setContext(className);
}

#define UNIX_PROVIDER UNIX_VirtualComputerSystemProvider
#define UNIX_PROVIDER_NAME "UNIX_VirtualComputerSystemProvider"
#define CLASS_IMPLEMENTATION UNIX_VirtualComputerSystem
#define CLASS_IMPLEMENTATION_NAME "UNIX_VirtualComputerSystem"
#define BASE_CLASS_NAME "CIM_VirtualComputerSystem"


#define NUMKEYS_CLASS_IMPLEMENTATION 2


#include "UNIXProviderBase.hpp"

#undef EXTRA_CLASS_IMPLEMENTATION_STATEMENTS