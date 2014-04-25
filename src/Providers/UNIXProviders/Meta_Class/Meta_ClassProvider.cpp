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


#include "Meta_ClassProvider.h"

Meta_ClassProvider::Meta_ClassProvider()
{
}

Meta_ClassProvider::~Meta_ClassProvider()
{
}

#ifndef __initialize_H
#define __initialize_H
/*
================================================================================
NAME              : initialize
DESCRIPTION       : Initializes the provider.
ASSUMPTIONS       : None
PRE-CONDITIONS    :
POST-CONDITIONS   :
NOTES             :
PARAMETERS        :
================================================================================
*/
void Meta_ClassProvider::initialize(CIMOMHandle &ch)
{
	_cimomHandle = ch;
	_p.setCIMOMHandle(_cimomHandle);
}
#endif

CIMInstance Meta_ClassProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const Meta_Class &_p) const
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("Meta_Class"),
			constructKeyBindings(_p)));

	
	//CIM_ManagedElement Properties
	if (_p.getInstanceID(p)) inst.addProperty(p);
	if (_p.getCaption(p)) inst.addProperty(p);
	if (_p.getDescription(p)) inst.addProperty(p);
	if (_p.getElementName(p)) inst.addProperty(p);

	if (_p.getName(p)) inst.addProperty(p);

	if (_p.getClassName(p)) inst.addProperty(p);
	if (_p.getSuperClassName(p)) inst.addProperty(p);
	if (_p.getNamespace(p)) inst.addProperty(p);
	if (_p.getProperties(p)) inst.addProperty(p);

	return inst;
}

Array<CIMKeyBinding> Meta_ClassProvider::constructKeyBindings(const Meta_Class& _p) const

{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_NAMESPACE,
		_p.getNamespace(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_NAME,
		_p.getName(),
		CIMKeyBinding::STRING));

	return keys;
}

#define __PROVIDER_PREPARE prepareEnumeration

void Meta_ClassProvider::__PROVIDER_PREPARE(
    const OperationContext& context,
    const CIMName &className,
    const CIMNamespaceName &ns,
    const Boolean includeQualifiers,
    const Boolean includeClassOrigin,
    Meta_Class _p) const
{
	_p.setContext(context, ns);
}

#define UNIX_PROVIDER Meta_ClassProvider
#define UNIX_PROVIDER_NAME "Meta_ClassProvider"
#define CLASS_IMPLEMENTATION Meta_Class
#define CLASS_IMPLEMENTATION_NAME "Meta_Class"
#define BASE_CLASS_NAME "Meta_Class"
#define NUMKEYS_CLASS_IMPLEMENTATION 2


#include "UNIXProviderBase.hpp"

