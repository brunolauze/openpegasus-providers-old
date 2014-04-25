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


#include "UNIX_BGPPeerGroupProvider.h"

UNIX_BGPPeerGroupProvider::UNIX_BGPPeerGroupProvider()
{
}

UNIX_BGPPeerGroupProvider::~UNIX_BGPPeerGroupProvider()
{
}

CIMInstance UNIX_BGPPeerGroupProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_BGPPeerGroup &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_BGPPeerGroup"),
			constructKeyBindings(_p)));

	//CIM_ManagedElement Properties
	if (_p.getInstanceID(p)) inst.addProperty(p);
	if (_p.getCaption(p)) inst.addProperty(p);
	if (_p.getDescription(p)) inst.addProperty(p);
	if (_p.getElementName(p)) inst.addProperty(p);

	//CIM_Collection Properties

	//CIM_CollectionOfMSEs Properties
	if (_p.getCollectionID(p)) inst.addProperty(p);

	//CIM_BGPPeerGroup Properties
	if (_p.getSystemCreationClassName(p)) inst.addProperty(p);
	if (_p.getSystemName(p)) inst.addProperty(p);
	if (_p.getCreationClassName(p)) inst.addProperty(p);
	if (_p.getName(p)) inst.addProperty(p);
	if (_p.getConnectRetryInterval(p)) inst.addProperty(p);
	if (_p.getHoldTimeConfigured(p)) inst.addProperty(p);
	if (_p.getKeepAliveConfigured(p)) inst.addProperty(p);
	if (_p.getMinASOriginationInterval(p)) inst.addProperty(p);
	if (_p.getMinRouteAdvertisementInterval(p)) inst.addProperty(p);


	return inst;
}

Array<CIMKeyBinding> UNIX_BGPPeerGroupProvider::constructKeyBindings(const UNIX_BGPPeerGroup& _p)

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
		PROPERTY_CREATION_CLASS_NAME,
		_p.getCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_NAME,
		_p.getName(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_BGPPeerGroupProvider
#define UNIX_PROVIDER_NAME "UNIX_BGPPeerGroupProvider"
#define CLASS_IMPLEMENTATION UNIX_BGPPeerGroup
#define CLASS_IMPLEMENTATION_NAME "UNIX_BGPPeerGroup"
#define BASE_CLASS_NAME "CIM_BGPPeerGroup"
#define NUMKEYS_CLASS_IMPLEMENTATION 4


#include "UNIXProviderBase.hpp"

