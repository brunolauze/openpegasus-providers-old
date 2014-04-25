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


#include "UNIX_UnsignedPublicKeyProvider.h"

UNIX_UnsignedPublicKeyProvider::UNIX_UnsignedPublicKeyProvider()
{
}

UNIX_UnsignedPublicKeyProvider::~UNIX_UnsignedPublicKeyProvider()
{
}

CIMInstance UNIX_UnsignedPublicKeyProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_UnsignedPublicKey &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_UnsignedPublicKey"),
			constructKeyBindings(_p)));

	//CIM_ManagedElement Properties
	if (_p.getInstanceID(p)) inst.addProperty(p);
	if (_p.getCaption(p)) inst.addProperty(p);
	if (_p.getDescription(p)) inst.addProperty(p);
	if (_p.getElementName(p)) inst.addProperty(p);

	//CIM_Credential Properties
	if (_p.getIssued(p)) inst.addProperty(p);
	if (_p.getExpires(p)) inst.addProperty(p);

	//CIM_UnsignedPublicKey Properties
	if (_p.getSystemCreationClassName(p)) inst.addProperty(p);
	if (_p.getSystemName(p)) inst.addProperty(p);
	if (_p.getServiceCreationClassName(p)) inst.addProperty(p);
	if (_p.getServiceName(p)) inst.addProperty(p);
	if (_p.getPeerIdentity(p)) inst.addProperty(p);
	if (_p.getPeerIdentityType(p)) inst.addProperty(p);
	if (_p.getPublicKey(p)) inst.addProperty(p);


	return inst;
}

Array<CIMKeyBinding> UNIX_UnsignedPublicKeyProvider::constructKeyBindings(const UNIX_UnsignedPublicKey& _p)

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
		PROPERTY_PEER_IDENTITY,
		_p.getPeerIdentity(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_UnsignedPublicKeyProvider
#define UNIX_PROVIDER_NAME "UNIX_UnsignedPublicKeyProvider"
#define CLASS_IMPLEMENTATION UNIX_UnsignedPublicKey
#define CLASS_IMPLEMENTATION_NAME "UNIX_UnsignedPublicKey"
#define BASE_CLASS_NAME "CIM_UnsignedPublicKey"
#define NUMKEYS_CLASS_IMPLEMENTATION 5


#include "UNIXProviderBase.hpp"

