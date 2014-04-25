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


UNIX_IKEAction::UNIX_IKEAction(void)
{
}

UNIX_IKEAction::~UNIX_IKEAction(void)
{
}


Boolean UNIX_IKEAction::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_IKEAction::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_IKEAction::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_IKEAction::getCaption() const
{
	return String ("");
}

Boolean UNIX_IKEAction::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_IKEAction::getDescription() const
{
	return String ("");
}

Boolean UNIX_IKEAction::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_IKEAction::getElementName() const
{
	return String("IKEAction");
}

Boolean UNIX_IKEAction::getCommonName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMON_NAME, getCommonName());
	return true;
}

String UNIX_IKEAction::getCommonName() const
{
	return String ("");
}

Boolean UNIX_IKEAction::getPolicyKeywords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_KEYWORDS, getPolicyKeywords());
	return true;
}

Array<String> UNIX_IKEAction::getPolicyKeywords() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_IKEAction::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_IKEAction::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_IKEAction::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_IKEAction::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_IKEAction::getPolicyRuleCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_RULE_CREATION_CLASS_NAME, getPolicyRuleCreationClassName());
	return true;
}

String UNIX_IKEAction::getPolicyRuleCreationClassName() const
{
	return String ("");
}

Boolean UNIX_IKEAction::getPolicyRuleName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_RULE_NAME, getPolicyRuleName());
	return true;
}

String UNIX_IKEAction::getPolicyRuleName() const
{
	return String ("");
}

Boolean UNIX_IKEAction::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_IKEAction::getCreationClassName() const
{
	return String("UNIX_IKEAction");
}

Boolean UNIX_IKEAction::getPolicyActionName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_ACTION_NAME, getPolicyActionName());
	return true;
}

String UNIX_IKEAction::getPolicyActionName() const
{
	return String ("");
}

Boolean UNIX_IKEAction::getDoActionLogging(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DO_ACTION_LOGGING, getDoActionLogging());
	return true;
}

Boolean UNIX_IKEAction::getDoActionLogging() const
{
	return Boolean(false);
}

Boolean UNIX_IKEAction::getDoPacketLogging(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DO_PACKET_LOGGING, getDoPacketLogging());
	return true;
}

Boolean UNIX_IKEAction::getDoPacketLogging() const
{
	return Boolean(false);
}

Boolean UNIX_IKEAction::getMinLifetimeSeconds(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_LIFETIME_SECONDS, getMinLifetimeSeconds());
	return true;
}

Uint64 UNIX_IKEAction::getMinLifetimeSeconds() const
{
	return Uint64(0);
}

Boolean UNIX_IKEAction::getIdleDurationSeconds(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDLE_DURATION_SECONDS, getIdleDurationSeconds());
	return true;
}

Uint64 UNIX_IKEAction::getIdleDurationSeconds() const
{
	return Uint64(0);
}

Boolean UNIX_IKEAction::getMinLifetimeKilobytes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_LIFETIME_KILOBYTES, getMinLifetimeKilobytes());
	return true;
}

Uint64 UNIX_IKEAction::getMinLifetimeKilobytes() const
{
	return Uint64(0);
}

Boolean UNIX_IKEAction::getExchangeMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXCHANGE_MODE, getExchangeMode());
	return true;
}

Uint16 UNIX_IKEAction::getExchangeMode() const
{
	return Uint16(0);
}

Boolean UNIX_IKEAction::getUseIKEIdentityType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USE_I_K_E_IDENTITY_TYPE, getUseIKEIdentityType());
	return true;
}

Uint16 UNIX_IKEAction::getUseIKEIdentityType() const
{
	return Uint16(0);
}

Boolean UNIX_IKEAction::getVendorID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_ID, getVendorID());
	return true;
}

String UNIX_IKEAction::getVendorID() const
{
	return String ("");
}

Boolean UNIX_IKEAction::getAggressiveModeGroupID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AGGRESSIVE_MODE_GROUP_ID, getAggressiveModeGroupID());
	return true;
}

Uint16 UNIX_IKEAction::getAggressiveModeGroupID() const
{
	return Uint16(0);
}



Boolean UNIX_IKEAction::initialize()
{
	return false;
}

Boolean UNIX_IKEAction::load(int &pIndex)
{
	return false;
}

Boolean UNIX_IKEAction::finalize()
{
	return false;
}

Boolean UNIX_IKEAction::find(Array<CIMKeyBinding> &kbArray)
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
