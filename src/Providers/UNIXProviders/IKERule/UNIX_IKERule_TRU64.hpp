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


UNIX_IKERule::UNIX_IKERule(void)
{
}

UNIX_IKERule::~UNIX_IKERule(void)
{
}


Boolean UNIX_IKERule::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_IKERule::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_IKERule::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_IKERule::getCaption() const
{
	return String ("");
}

Boolean UNIX_IKERule::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_IKERule::getDescription() const
{
	return String ("");
}

Boolean UNIX_IKERule::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_IKERule::getElementName() const
{
	return String("IKERule");
}

Boolean UNIX_IKERule::getCommonName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMON_NAME, getCommonName());
	return true;
}

String UNIX_IKERule::getCommonName() const
{
	return String ("");
}

Boolean UNIX_IKERule::getPolicyKeywords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_KEYWORDS, getPolicyKeywords());
	return true;
}

Array<String> UNIX_IKERule::getPolicyKeywords() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_IKERule::getPolicyDecisionStrategy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_DECISION_STRATEGY, getPolicyDecisionStrategy());
	return true;
}

Uint16 UNIX_IKERule::getPolicyDecisionStrategy() const
{
	return Uint16(0);
}

Boolean UNIX_IKERule::getPolicyRoles(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_ROLES, getPolicyRoles());
	return true;
}

Array<String> UNIX_IKERule::getPolicyRoles() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_IKERule::getEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED, getEnabled());
	return true;
}

Uint16 UNIX_IKERule::getEnabled() const
{
	return Uint16(0);
}

Boolean UNIX_IKERule::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_IKERule::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_IKERule::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_IKERule::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_IKERule::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_IKERule::getCreationClassName() const
{
	return String("UNIX_IKERule");
}

Boolean UNIX_IKERule::getPolicyRuleName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_RULE_NAME, getPolicyRuleName());
	return true;
}

String UNIX_IKERule::getPolicyRuleName() const
{
	return String ("");
}

Boolean UNIX_IKERule::getConditionListType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONDITION_LIST_TYPE, getConditionListType());
	return true;
}

Uint16 UNIX_IKERule::getConditionListType() const
{
	return Uint16(0);
}

Boolean UNIX_IKERule::getRuleUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RULE_USAGE, getRuleUsage());
	return true;
}

String UNIX_IKERule::getRuleUsage() const
{
	return String ("");
}

Boolean UNIX_IKERule::getPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIORITY, getPriority());
	return true;
}

Uint16 UNIX_IKERule::getPriority() const
{
	return Uint16(0);
}

Boolean UNIX_IKERule::getMandatory(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANDATORY, getMandatory());
	return true;
}

Boolean UNIX_IKERule::getMandatory() const
{
	return Boolean(false);
}

Boolean UNIX_IKERule::getSequencedActions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEQUENCED_ACTIONS, getSequencedActions());
	return true;
}

Uint16 UNIX_IKERule::getSequencedActions() const
{
	return Uint16(0);
}

Boolean UNIX_IKERule::getExecutionStrategy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXECUTION_STRATEGY, getExecutionStrategy());
	return true;
}

Uint16 UNIX_IKERule::getExecutionStrategy() const
{
	return Uint16(0);
}

Boolean UNIX_IKERule::getLimitNegotiation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LIMIT_NEGOTIATION, getLimitNegotiation());
	return true;
}

Uint16 UNIX_IKERule::getLimitNegotiation() const
{
	return Uint16(0);
}

Boolean UNIX_IKERule::getIdentityContexts(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTITY_CONTEXTS, getIdentityContexts());
	return true;
}

Array<String> UNIX_IKERule::getIdentityContexts() const
{
	Array<String> as;
	

	return as;

}



Boolean UNIX_IKERule::initialize()
{
	return false;
}

Boolean UNIX_IKERule::load(int &pIndex)
{
	return false;
}

Boolean UNIX_IKERule::finalize()
{
	return false;
}

Boolean UNIX_IKERule::find(Array<CIMKeyBinding> &kbArray)
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
