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


UNIX_CompoundPolicyAction::UNIX_CompoundPolicyAction(void)
{
}

UNIX_CompoundPolicyAction::~UNIX_CompoundPolicyAction(void)
{
}


Boolean UNIX_CompoundPolicyAction::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_CompoundPolicyAction::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_CompoundPolicyAction::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_CompoundPolicyAction::getCaption() const
{
	return String ("");
}

Boolean UNIX_CompoundPolicyAction::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_CompoundPolicyAction::getDescription() const
{
	return String ("");
}

Boolean UNIX_CompoundPolicyAction::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_CompoundPolicyAction::getElementName() const
{
	return String("CompoundPolicyAction");
}

Boolean UNIX_CompoundPolicyAction::getCommonName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMON_NAME, getCommonName());
	return true;
}

String UNIX_CompoundPolicyAction::getCommonName() const
{
	return String ("");
}

Boolean UNIX_CompoundPolicyAction::getPolicyKeywords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_KEYWORDS, getPolicyKeywords());
	return true;
}

Array<String> UNIX_CompoundPolicyAction::getPolicyKeywords() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_CompoundPolicyAction::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_CompoundPolicyAction::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_CompoundPolicyAction::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_CompoundPolicyAction::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_CompoundPolicyAction::getPolicyRuleCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_RULE_CREATION_CLASS_NAME, getPolicyRuleCreationClassName());
	return true;
}

String UNIX_CompoundPolicyAction::getPolicyRuleCreationClassName() const
{
	return String ("");
}

Boolean UNIX_CompoundPolicyAction::getPolicyRuleName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_RULE_NAME, getPolicyRuleName());
	return true;
}

String UNIX_CompoundPolicyAction::getPolicyRuleName() const
{
	return String ("");
}

Boolean UNIX_CompoundPolicyAction::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_CompoundPolicyAction::getCreationClassName() const
{
	return String("UNIX_CompoundPolicyAction");
}

Boolean UNIX_CompoundPolicyAction::getPolicyActionName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_ACTION_NAME, getPolicyActionName());
	return true;
}

String UNIX_CompoundPolicyAction::getPolicyActionName() const
{
	return String ("");
}

Boolean UNIX_CompoundPolicyAction::getDoActionLogging(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DO_ACTION_LOGGING, getDoActionLogging());
	return true;
}

Boolean UNIX_CompoundPolicyAction::getDoActionLogging() const
{
	return Boolean(false);
}

Boolean UNIX_CompoundPolicyAction::getSequencedActions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEQUENCED_ACTIONS, getSequencedActions());
	return true;
}

Uint16 UNIX_CompoundPolicyAction::getSequencedActions() const
{
	return Uint16(0);
}

Boolean UNIX_CompoundPolicyAction::getExecutionStrategy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXECUTION_STRATEGY, getExecutionStrategy());
	return true;
}

Uint16 UNIX_CompoundPolicyAction::getExecutionStrategy() const
{
	return Uint16(0);
}



Boolean UNIX_CompoundPolicyAction::initialize()
{
	return false;
}

Boolean UNIX_CompoundPolicyAction::load(int &pIndex)
{
	return false;
}

Boolean UNIX_CompoundPolicyAction::finalize()
{
	return false;
}

Boolean UNIX_CompoundPolicyAction::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String policyRuleCreationClassNameKey;
	String policyRuleNameKey;
	String creationClassNameKey;
	String policyActionNameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_POLICY_RULE_CREATION_CLASS_NAME)) policyRuleCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_POLICY_RULE_NAME)) policyRuleNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_POLICY_ACTION_NAME)) policyActionNameKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
