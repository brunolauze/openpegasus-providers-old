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


UNIX_SharedSecretAuthentication::UNIX_SharedSecretAuthentication(void)
{
}

UNIX_SharedSecretAuthentication::~UNIX_SharedSecretAuthentication(void)
{
}


Boolean UNIX_SharedSecretAuthentication::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SharedSecretAuthentication::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_SharedSecretAuthentication::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SharedSecretAuthentication::getCaption() const
{
	return String ("");
}

Boolean UNIX_SharedSecretAuthentication::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SharedSecretAuthentication::getDescription() const
{
	return String ("");
}

Boolean UNIX_SharedSecretAuthentication::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SharedSecretAuthentication::getElementName() const
{
	return String("SharedSecretAuthentication");
}

Boolean UNIX_SharedSecretAuthentication::getCommonName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMON_NAME, getCommonName());
	return true;
}

String UNIX_SharedSecretAuthentication::getCommonName() const
{
	return String ("");
}

Boolean UNIX_SharedSecretAuthentication::getPolicyKeywords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_KEYWORDS, getPolicyKeywords());
	return true;
}

Array<String> UNIX_SharedSecretAuthentication::getPolicyKeywords() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_SharedSecretAuthentication::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_SharedSecretAuthentication::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_SharedSecretAuthentication::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_SharedSecretAuthentication::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_SharedSecretAuthentication::getPolicyRuleCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_RULE_CREATION_CLASS_NAME, getPolicyRuleCreationClassName());
	return true;
}

String UNIX_SharedSecretAuthentication::getPolicyRuleCreationClassName() const
{
	return String ("");
}

Boolean UNIX_SharedSecretAuthentication::getPolicyRuleName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_RULE_NAME, getPolicyRuleName());
	return true;
}

String UNIX_SharedSecretAuthentication::getPolicyRuleName() const
{
	return String ("");
}

Boolean UNIX_SharedSecretAuthentication::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_SharedSecretAuthentication::getCreationClassName() const
{
	return String("UNIX_SharedSecretAuthentication");
}

Boolean UNIX_SharedSecretAuthentication::getPolicyConditionName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_CONDITION_NAME, getPolicyConditionName());
	return true;
}

String UNIX_SharedSecretAuthentication::getPolicyConditionName() const
{
	return String ("");
}

Boolean UNIX_SharedSecretAuthentication::getIDOfPrincipal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ID_OF_PRINCIPAL, getIDOfPrincipal());
	return true;
}

String UNIX_SharedSecretAuthentication::getIDOfPrincipal() const
{
	return String ("");
}

Boolean UNIX_SharedSecretAuthentication::getContextOfSecret(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONTEXT_OF_SECRET, getContextOfSecret());
	return true;
}

String UNIX_SharedSecretAuthentication::getContextOfSecret() const
{
	return String ("");
}



Boolean UNIX_SharedSecretAuthentication::initialize()
{
	return false;
}

Boolean UNIX_SharedSecretAuthentication::load(int &pIndex)
{
	return false;
}

Boolean UNIX_SharedSecretAuthentication::finalize()
{
	return false;
}

Boolean UNIX_SharedSecretAuthentication::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String policyRuleCreationClassNameKey;
	String policyRuleNameKey;
	String creationClassNameKey;
	String policyConditionNameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_POLICY_RULE_CREATION_CLASS_NAME)) policyRuleCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_POLICY_RULE_NAME)) policyRuleNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_POLICY_CONDITION_NAME)) policyConditionNameKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
