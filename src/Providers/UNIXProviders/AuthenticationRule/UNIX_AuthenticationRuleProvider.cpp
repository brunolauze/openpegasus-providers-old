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


#include "UNIX_AuthenticationRuleProvider.h"

UNIX_AuthenticationRuleProvider::UNIX_AuthenticationRuleProvider()
{
}

UNIX_AuthenticationRuleProvider::~UNIX_AuthenticationRuleProvider()
{
}

CIMInstance UNIX_AuthenticationRuleProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_AuthenticationRule &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_AuthenticationRule"),
			constructKeyBindings(_p)));

	//CIM_ManagedElement Properties
	if (_p.getInstanceID(p)) inst.addProperty(p);
	if (_p.getCaption(p)) inst.addProperty(p);
	if (_p.getDescription(p)) inst.addProperty(p);
	if (_p.getElementName(p)) inst.addProperty(p);

	//CIM_Policy Properties
	if (_p.getCommonName(p)) inst.addProperty(p);
	if (_p.getPolicyKeywords(p)) inst.addProperty(p);

	//CIM_PolicySet Properties
	if (_p.getPolicyDecisionStrategy(p)) inst.addProperty(p);
	if (_p.getPolicyRoles(p)) inst.addProperty(p);
	if (_p.getEnabled(p)) inst.addProperty(p);

	//CIM_PolicyRule Properties
	if (_p.getSystemCreationClassName(p)) inst.addProperty(p);
	if (_p.getSystemName(p)) inst.addProperty(p);
	if (_p.getCreationClassName(p)) inst.addProperty(p);
	if (_p.getPolicyRuleName(p)) inst.addProperty(p);
	if (_p.getConditionListType(p)) inst.addProperty(p);
	if (_p.getRuleUsage(p)) inst.addProperty(p);
	if (_p.getPriority(p)) inst.addProperty(p);
	if (_p.getMandatory(p)) inst.addProperty(p);
	if (_p.getSequencedActions(p)) inst.addProperty(p);
	if (_p.getExecutionStrategy(p)) inst.addProperty(p);

	//CIM_AuthenticationRule Properties


	return inst;
}

Array<CIMKeyBinding> UNIX_AuthenticationRuleProvider::constructKeyBindings(const UNIX_AuthenticationRule& _p)

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
		PROPERTY_POLICY_RULE_NAME,
		_p.getPolicyRuleName(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_AuthenticationRuleProvider
#define UNIX_PROVIDER_NAME "UNIX_AuthenticationRuleProvider"
#define CLASS_IMPLEMENTATION UNIX_AuthenticationRule
#define CLASS_IMPLEMENTATION_NAME "UNIX_AuthenticationRule"
#define BASE_CLASS_NAME "CIM_AuthenticationRule"
#define NUMKEYS_CLASS_IMPLEMENTATION 0


#include "UNIXProviderBase.hpp"

