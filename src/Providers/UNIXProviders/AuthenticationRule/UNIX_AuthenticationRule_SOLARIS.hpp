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


UNIX_AuthenticationRule::UNIX_AuthenticationRule(void)
{
}

UNIX_AuthenticationRule::~UNIX_AuthenticationRule(void)
{
}


Boolean UNIX_AuthenticationRule::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_AuthenticationRule::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_AuthenticationRule::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_AuthenticationRule::getCaption() const
{
	return String ("");
}

Boolean UNIX_AuthenticationRule::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_AuthenticationRule::getDescription() const
{
	return String ("");
}

Boolean UNIX_AuthenticationRule::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_AuthenticationRule::getElementName() const
{
	return String("AuthenticationRule");
}

Boolean UNIX_AuthenticationRule::getCommonName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMON_NAME, getCommonName());
	return true;
}

String UNIX_AuthenticationRule::getCommonName() const
{
	return String ("");
}

Boolean UNIX_AuthenticationRule::getPolicyKeywords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_KEYWORDS, getPolicyKeywords());
	return true;
}

Array<String> UNIX_AuthenticationRule::getPolicyKeywords() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_AuthenticationRule::getPolicyDecisionStrategy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_DECISION_STRATEGY, getPolicyDecisionStrategy());
	return true;
}

Uint16 UNIX_AuthenticationRule::getPolicyDecisionStrategy() const
{
	return Uint16(0);
}

Boolean UNIX_AuthenticationRule::getPolicyRoles(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_ROLES, getPolicyRoles());
	return true;
}

Array<String> UNIX_AuthenticationRule::getPolicyRoles() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_AuthenticationRule::getEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED, getEnabled());
	return true;
}

Uint16 UNIX_AuthenticationRule::getEnabled() const
{
	return Uint16(0);
}

Boolean UNIX_AuthenticationRule::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_AuthenticationRule::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_AuthenticationRule::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_AuthenticationRule::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_AuthenticationRule::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_AuthenticationRule::getCreationClassName() const
{
	return String("UNIX_AuthenticationRule");
}

Boolean UNIX_AuthenticationRule::getPolicyRuleName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_RULE_NAME, getPolicyRuleName());
	return true;
}

String UNIX_AuthenticationRule::getPolicyRuleName() const
{
	return String ("");
}

Boolean UNIX_AuthenticationRule::getConditionListType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONDITION_LIST_TYPE, getConditionListType());
	return true;
}

Uint16 UNIX_AuthenticationRule::getConditionListType() const
{
	return Uint16(0);
}

Boolean UNIX_AuthenticationRule::getRuleUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RULE_USAGE, getRuleUsage());
	return true;
}

String UNIX_AuthenticationRule::getRuleUsage() const
{
	return String ("");
}

Boolean UNIX_AuthenticationRule::getPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIORITY, getPriority());
	return true;
}

Uint16 UNIX_AuthenticationRule::getPriority() const
{
	return Uint16(0);
}

Boolean UNIX_AuthenticationRule::getMandatory(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANDATORY, getMandatory());
	return true;
}

Boolean UNIX_AuthenticationRule::getMandatory() const
{
	return Boolean(false);
}

Boolean UNIX_AuthenticationRule::getSequencedActions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEQUENCED_ACTIONS, getSequencedActions());
	return true;
}

Uint16 UNIX_AuthenticationRule::getSequencedActions() const
{
	return Uint16(0);
}

Boolean UNIX_AuthenticationRule::getExecutionStrategy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXECUTION_STRATEGY, getExecutionStrategy());
	return true;
}

Uint16 UNIX_AuthenticationRule::getExecutionStrategy() const
{
	return Uint16(0);
}



Boolean UNIX_AuthenticationRule::initialize()
{
	return false;
}

Boolean UNIX_AuthenticationRule::load(int &pIndex)
{
	return false;
}

Boolean UNIX_AuthenticationRule::finalize()
{
	return false;
}

Boolean UNIX_AuthenticationRule::find(Array<CIMKeyBinding> &kbArray)
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
