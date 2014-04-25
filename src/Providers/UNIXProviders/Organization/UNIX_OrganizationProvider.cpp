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


#include "UNIX_OrganizationProvider.h"

UNIX_OrganizationProvider::UNIX_OrganizationProvider()
{
}

UNIX_OrganizationProvider::~UNIX_OrganizationProvider()
{
}

CIMInstance UNIX_OrganizationProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_Organization &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_Organization"),
			constructKeyBindings(_p)));

	//CIM_ManagedElement Properties
	if (_p.getInstanceID(p)) inst.addProperty(p);
	if (_p.getCaption(p)) inst.addProperty(p);
	if (_p.getDescription(p)) inst.addProperty(p);
	if (_p.getElementName(p)) inst.addProperty(p);

	//CIM_OrganizationalEntity Properties

	//CIM_Organization Properties
	if (_p.getCreationClassName(p)) inst.addProperty(p);
	if (_p.getName(p)) inst.addProperty(p);
	if (_p.getBusinessCategory(p)) inst.addProperty(p);
	if (_p.getFacsimileTelephoneNumber(p)) inst.addProperty(p);
	if (_p.getLocalityName(p)) inst.addProperty(p);
	if (_p.getMail(p)) inst.addProperty(p);
	if (_p.getOrganizationName(p)) inst.addProperty(p);
	if (_p.getPostalAddress(p)) inst.addProperty(p);
	if (_p.getPostalCode(p)) inst.addProperty(p);
	if (_p.getStateOrProvince(p)) inst.addProperty(p);
	if (_p.getTelephoneNumber(p)) inst.addProperty(p);


	return inst;
}

Array<CIMKeyBinding> UNIX_OrganizationProvider::constructKeyBindings(const UNIX_Organization& _p)

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



#define UNIX_PROVIDER UNIX_OrganizationProvider
#define UNIX_PROVIDER_NAME "UNIX_OrganizationProvider"
#define CLASS_IMPLEMENTATION UNIX_Organization
#define CLASS_IMPLEMENTATION_NAME "UNIX_Organization"
#define BASE_CLASS_NAME "CIM_Organization"
#define NUMKEYS_CLASS_IMPLEMENTATION 2


#include "UNIXProviderBase.hpp"

