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


UNIX_BiometricAuthentication::UNIX_BiometricAuthentication(void)
{
}

UNIX_BiometricAuthentication::~UNIX_BiometricAuthentication(void)
{
}


Boolean UNIX_BiometricAuthentication::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BiometricAuthentication::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_BiometricAuthentication::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BiometricAuthentication::getCaption() const
{
	return String ("");
}

Boolean UNIX_BiometricAuthentication::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BiometricAuthentication::getDescription() const
{
	return String ("");
}

Boolean UNIX_BiometricAuthentication::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BiometricAuthentication::getElementName() const
{
	return String("BiometricAuthentication");
}

Boolean UNIX_BiometricAuthentication::getCommonName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMON_NAME, getCommonName());
	return true;
}

String UNIX_BiometricAuthentication::getCommonName() const
{
	return String ("");
}

Boolean UNIX_BiometricAuthentication::getPolicyKeywords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_KEYWORDS, getPolicyKeywords());
	return true;
}

Array<String> UNIX_BiometricAuthentication::getPolicyKeywords() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_BiometricAuthentication::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_BiometricAuthentication::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_BiometricAuthentication::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_BiometricAuthentication::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_BiometricAuthentication::getPolicyRuleCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_RULE_CREATION_CLASS_NAME, getPolicyRuleCreationClassName());
	return true;
}

String UNIX_BiometricAuthentication::getPolicyRuleCreationClassName() const
{
	return String ("");
}

Boolean UNIX_BiometricAuthentication::getPolicyRuleName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_RULE_NAME, getPolicyRuleName());
	return true;
}

String UNIX_BiometricAuthentication::getPolicyRuleName() const
{
	return String ("");
}

Boolean UNIX_BiometricAuthentication::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_BiometricAuthentication::getCreationClassName() const
{
	return String("UNIX_BiometricAuthentication");
}

Boolean UNIX_BiometricAuthentication::getPolicyConditionName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_CONDITION_NAME, getPolicyConditionName());
	return true;
}

String UNIX_BiometricAuthentication::getPolicyConditionName() const
{
	return String ("");
}

Boolean UNIX_BiometricAuthentication::getTypeOfBiometric(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TYPE_OF_BIOMETRIC, getTypeOfBiometric());
	return true;
}

Uint16 UNIX_BiometricAuthentication::getTypeOfBiometric() const
{
	return Uint16(0);
}

Boolean UNIX_BiometricAuthentication::getOtherBiometric(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_BIOMETRIC, getOtherBiometric());
	return true;
}

String UNIX_BiometricAuthentication::getOtherBiometric() const
{
	return String ("");
}

Boolean UNIX_BiometricAuthentication::getPersonalIdentifier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERSONAL_IDENTIFIER, getPersonalIdentifier());
	return true;
}

String UNIX_BiometricAuthentication::getPersonalIdentifier() const
{
	return String ("");
}



Boolean UNIX_BiometricAuthentication::initialize()
{
	return false;
}

Boolean UNIX_BiometricAuthentication::load(int &pIndex)
{
	return false;
}

Boolean UNIX_BiometricAuthentication::finalize()
{
	return false;
}

Boolean UNIX_BiometricAuthentication::find(Array<CIMKeyBinding> &kbArray)
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
