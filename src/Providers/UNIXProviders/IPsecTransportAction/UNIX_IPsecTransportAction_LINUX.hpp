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


UNIX_IPsecTransportAction::UNIX_IPsecTransportAction(void)
{
}

UNIX_IPsecTransportAction::~UNIX_IPsecTransportAction(void)
{
}


Boolean UNIX_IPsecTransportAction::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_IPsecTransportAction::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_IPsecTransportAction::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_IPsecTransportAction::getCaption() const
{
	return String ("");
}

Boolean UNIX_IPsecTransportAction::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_IPsecTransportAction::getDescription() const
{
	return String ("");
}

Boolean UNIX_IPsecTransportAction::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_IPsecTransportAction::getElementName() const
{
	return String("IPsecTransportAction");
}

Boolean UNIX_IPsecTransportAction::getCommonName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMON_NAME, getCommonName());
	return true;
}

String UNIX_IPsecTransportAction::getCommonName() const
{
	return String ("");
}

Boolean UNIX_IPsecTransportAction::getPolicyKeywords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_KEYWORDS, getPolicyKeywords());
	return true;
}

Array<String> UNIX_IPsecTransportAction::getPolicyKeywords() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_IPsecTransportAction::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_IPsecTransportAction::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_IPsecTransportAction::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_IPsecTransportAction::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_IPsecTransportAction::getPolicyRuleCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_RULE_CREATION_CLASS_NAME, getPolicyRuleCreationClassName());
	return true;
}

String UNIX_IPsecTransportAction::getPolicyRuleCreationClassName() const
{
	return String ("");
}

Boolean UNIX_IPsecTransportAction::getPolicyRuleName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_RULE_NAME, getPolicyRuleName());
	return true;
}

String UNIX_IPsecTransportAction::getPolicyRuleName() const
{
	return String ("");
}

Boolean UNIX_IPsecTransportAction::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_IPsecTransportAction::getCreationClassName() const
{
	return String("UNIX_IPsecTransportAction");
}

Boolean UNIX_IPsecTransportAction::getPolicyActionName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_ACTION_NAME, getPolicyActionName());
	return true;
}

String UNIX_IPsecTransportAction::getPolicyActionName() const
{
	return String ("");
}

Boolean UNIX_IPsecTransportAction::getDoActionLogging(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DO_ACTION_LOGGING, getDoActionLogging());
	return true;
}

Boolean UNIX_IPsecTransportAction::getDoActionLogging() const
{
	return Boolean(false);
}

Boolean UNIX_IPsecTransportAction::getDoPacketLogging(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DO_PACKET_LOGGING, getDoPacketLogging());
	return true;
}

Boolean UNIX_IPsecTransportAction::getDoPacketLogging() const
{
	return Boolean(false);
}

Boolean UNIX_IPsecTransportAction::getMinLifetimeSeconds(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_LIFETIME_SECONDS, getMinLifetimeSeconds());
	return true;
}

Uint64 UNIX_IPsecTransportAction::getMinLifetimeSeconds() const
{
	return Uint64(0);
}

Boolean UNIX_IPsecTransportAction::getIdleDurationSeconds(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDLE_DURATION_SECONDS, getIdleDurationSeconds());
	return true;
}

Uint64 UNIX_IPsecTransportAction::getIdleDurationSeconds() const
{
	return Uint64(0);
}

Boolean UNIX_IPsecTransportAction::getMinLifetimeKilobytes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_LIFETIME_KILOBYTES, getMinLifetimeKilobytes());
	return true;
}

Uint64 UNIX_IPsecTransportAction::getMinLifetimeKilobytes() const
{
	return Uint64(0);
}

Boolean UNIX_IPsecTransportAction::getUsePFS(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USE_P_FS, getUsePFS());
	return true;
}

Boolean UNIX_IPsecTransportAction::getUsePFS() const
{
	return Boolean(false);
}

Boolean UNIX_IPsecTransportAction::getUsePhase1Group(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USE_PHASE_1_GROUP, getUsePhase1Group());
	return true;
}

Boolean UNIX_IPsecTransportAction::getUsePhase1Group() const
{
	return Boolean(false);
}

Boolean UNIX_IPsecTransportAction::getGroupId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_ID, getGroupId());
	return true;
}

Uint16 UNIX_IPsecTransportAction::getGroupId() const
{
	return Uint16(0);
}

Boolean UNIX_IPsecTransportAction::getVendorID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_ID, getVendorID());
	return true;
}

String UNIX_IPsecTransportAction::getVendorID() const
{
	return String ("");
}

Boolean UNIX_IPsecTransportAction::getGranularity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GRANULARITY, getGranularity());
	return true;
}

Uint16 UNIX_IPsecTransportAction::getGranularity() const
{
	return Uint16(0);
}

Boolean UNIX_IPsecTransportAction::getOtherGranularity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_GRANULARITY, getOtherGranularity());
	return true;
}

String UNIX_IPsecTransportAction::getOtherGranularity() const
{
	return String ("");
}



Boolean UNIX_IPsecTransportAction::initialize()
{
	return false;
}

Boolean UNIX_IPsecTransportAction::load(int &pIndex)
{
	return false;
}

Boolean UNIX_IPsecTransportAction::finalize()
{
	return false;
}

Boolean UNIX_IPsecTransportAction::find(Array<CIMKeyBinding> &kbArray)
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
