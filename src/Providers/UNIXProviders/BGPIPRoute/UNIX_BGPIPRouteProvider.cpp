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


#include "UNIX_BGPIPRouteProvider.h"

UNIX_BGPIPRouteProvider::UNIX_BGPIPRouteProvider()
{
}

UNIX_BGPIPRouteProvider::~UNIX_BGPIPRouteProvider()
{
}

CIMInstance UNIX_BGPIPRouteProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_BGPIPRoute &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_BGPIPRoute"),
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

	//CIM_NextHopRouting Properties
	if (_p.getDestinationAddress(p)) inst.addProperty(p);
	if (_p.getDestinationMask(p)) inst.addProperty(p);
	if (_p.getNextHop(p)) inst.addProperty(p);
	if (_p.getIsStatic(p)) inst.addProperty(p);

	//CIM_IPRoute Properties
	if (_p.getSystemCreationClassName(p)) inst.addProperty(p);
	if (_p.getSystemName(p)) inst.addProperty(p);
	if (_p.getServiceCreationClassName(p)) inst.addProperty(p);
	if (_p.getServiceName(p)) inst.addProperty(p);
	if (_p.getCreationClassName(p)) inst.addProperty(p);
	if (_p.getIPDestinationAddress(p)) inst.addProperty(p);
	if (_p.getIPDestinationMask(p)) inst.addProperty(p);
	if (_p.getAddressType(p)) inst.addProperty(p);

	//CIM_BGPIPRoute Properties
	if (_p.getIsBackDoorRoute(p)) inst.addProperty(p);
	if (_p.getUsesLoopbackPeering(p)) inst.addProperty(p);


	return inst;
}

Array<CIMKeyBinding> UNIX_BGPIPRouteProvider::constructKeyBindings(const UNIX_BGPIPRoute& _p)

{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_SYSTEM_CREATION_CLASS_NAME,
		_p.getSystemCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_SYSTEM_NAME,
		_p.getSystemName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_SERVICE_CREATION_CLASS_NAME,
		_p.getServiceCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_SERVICE_NAME,
		_p.getServiceName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_CREATION_CLASS_NAME,
		_p.getCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_I_P_DESTINATION_ADDRESS,
		_p.getIPDestinationAddress(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_I_P_DESTINATION_MASK,
		_p.getIPDestinationMask(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_ADDRESS_TYPE,
		CIMValue(_p.getAddressType()).toString(),
		CIMKeyBinding::NUMERIC));


	return keys;
}



#define UNIX_PROVIDER UNIX_BGPIPRouteProvider
#define UNIX_PROVIDER_NAME "UNIX_BGPIPRouteProvider"
#define CLASS_IMPLEMENTATION UNIX_BGPIPRoute
#define CLASS_IMPLEMENTATION_NAME "UNIX_BGPIPRoute"
#define BASE_CLASS_NAME "CIM_BGPIPRoute"
#define NUMKEYS_CLASS_IMPLEMENTATION 0


#include "UNIXProviderBase.hpp"

