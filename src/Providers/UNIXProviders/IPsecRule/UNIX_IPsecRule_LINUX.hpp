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


UNIX_IPsecRule::UNIX_IPsecRule(void)
{
}

UNIX_IPsecRule::~UNIX_IPsecRule(void)
{
}


Boolean UNIX_IPsecRule::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_IPsecRule::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_IPsecRule::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_IPsecRule::getCaption() const
{
	return String ("");
}

Boolean UNIX_IPsecRule::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_IPsecRule::getDescription() const
{
	return String ("");
}

Boolean UNIX_IPsecRule::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_IPsecRule::getElementName() const
{
	return String("IPsecRule");
}

Boolean UNIX_IPsecRule::getCommonName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMON_NAME, getCommonName());
	return true;
}

String UNIX_IPsecRule::getCommonName() const
{
	return String ("");
}

Boolean UNIX_IPsecRule::getPolicyKeywords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_KEYWORDS, getPolicyKeywords());
	return true;
}

Array<String> UNIX_IPsecRule::getPolicyKeywords() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_IPsecRule::getPolicyDecisionStrategy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_DECISION_STRATEGY, getPolicyDecisionStrategy());
	return true;
}

Uint16 UNIX_IPsecRule::getPolicyDecisionStrategy() const
{
	return Uint16(0);
}

Boolean UNIX_IPsecRule::getPolicyRoles(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_ROLES, getPolicyRoles());
	return true;
}

Array<String> UNIX_IPsecRule::getPolicyRoles() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_IPsecRule::getEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED, getEnabled());
	return true;
}

Uint16 UNIX_IPsecRule::getEnabled() const
{
	return Uint16(0);
}

Boolean UNIX_IPsecRule::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_IPsecRule::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_IPsecRule::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_IPsecRule::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_IPsecRule::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_IPsecRule::getCreationClassName() const
{
	return String("UNIX_IPsecRule");
}

Boolean UNIX_IPsecRule::getPolicyRuleName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_RULE_NAME, getPolicyRuleName());
	return true;
}

String UNIX_IPsecRule::getPolicyRuleName() const
{
	return String ("");
}

Boolean UNIX_IPsecRule::getConditionListType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONDITION_LIST_TYPE, getConditionListType());
	return true;
}

Uint16 UNIX_IPsecRule::getConditionListType() const
{
	return Uint16(0);
}

Boolean UNIX_IPsecRule::getRuleUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RULE_USAGE, getRuleUsage());
	return true;
}

String UNIX_IPsecRule::getRuleUsage() const
{
	return String ("");
}

Boolean UNIX_IPsecRule::getPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIORITY, getPriority());
	return true;
}

Uint16 UNIX_IPsecRule::getPriority() const
{
	return Uint16(0);
}

Boolean UNIX_IPsecRule::getMandatory(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANDATORY, getMandatory());
	return true;
}

Boolean UNIX_IPsecRule::getMandatory() const
{
	return Boolean(false);
}

Boolean UNIX_IPsecRule::getSequencedActions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEQUENCED_ACTIONS, getSequencedActions());
	return true;
}

Uint16 UNIX_IPsecRule::getSequencedActions() const
{
	return Uint16(0);
}

Boolean UNIX_IPsecRule::getExecutionStrategy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXECUTION_STRATEGY, getExecutionStrategy());
	return true;
}

Uint16 UNIX_IPsecRule::getExecutionStrategy() const
{
	return Uint16(0);
}

Boolean UNIX_IPsecRule::getLimitNegotiation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LIMIT_NEGOTIATION, getLimitNegotiation());
	return true;
}

Uint16 UNIX_IPsecRule::getLimitNegotiation() const
{
	return Uint16(0);
}



Boolean UNIX_IPsecRule::initialize()
{
	return false;
}

Boolean UNIX_IPsecRule::load(int &pIndex)
{
	return false;
}

Boolean UNIX_IPsecRule::finalize()
{
	return false;
}

Boolean UNIX_IPsecRule::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String creationClassNameKey;
	String policyRuleNameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_POLICY_RULE_NAME)) policyRuleNameKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
