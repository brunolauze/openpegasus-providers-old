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


#include "UNIX_AccountOnSystemProvider.h"

UNIX_AccountOnSystemProvider::UNIX_AccountOnSystemProvider()
{
}

UNIX_AccountOnSystemProvider::~UNIX_AccountOnSystemProvider()
{
}

CIMInstance UNIX_AccountOnSystemProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_AccountOnSystem &_p) const
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_AccountOnSystem"),
			constructKeyBindings(_p)));

	//CIM_Component Properties
	if (_p.getGroupComponent(p)) inst.addProperty(p);
	if (_p.getPartComponent(p)) inst.addProperty(p);

	//CIM_SystemComponent Properties

	//CIM_AccountOnSystem Properties


	return inst;
}

Array<CIMKeyBinding> UNIX_AccountOnSystemProvider::constructKeyBindings(const UNIX_AccountOnSystem& _p) const

{

	Array<CIMKeyBinding> keys;

	CIMKeyBinding k1(
		PROPERTY_GROUP_COMPONENT,
		CIMValue(_p.getGroupComponent().getPath()));
	k1.setType(CIMKeyBinding::REFERENCE);
	CIMKeyBinding k2(
		PROPERTY_PART_COMPONENT,
		CIMValue(_p.getPartComponent().getPath()));
	k2.setType(CIMKeyBinding::REFERENCE);

	keys.append(k1);
	keys.append(k2);


	return keys;
}



#define UNIX_PROVIDER UNIX_AccountOnSystemProvider
#define UNIX_PROVIDER_NAME "UNIX_AccountOnSystemProvider"
#define CLASS_IMPLEMENTATION UNIX_AccountOnSystem
#define CLASS_IMPLEMENTATION_NAME "UNIX_AccountOnSystem"
#define BASE_CLASS_NAME "CIM_AccountOnSystem"
#define NUMKEYS_CLASS_IMPLEMENTATION 2


#include "UNIXProviderBase.hpp"

