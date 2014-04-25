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


UNIX_IPsecTunnelAction::UNIX_IPsecTunnelAction(void)
{
}

UNIX_IPsecTunnelAction::~UNIX_IPsecTunnelAction(void)
{
}


Boolean UNIX_IPsecTunnelAction::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_IPsecTunnelAction::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_IPsecTunnelAction::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_IPsecTunnelAction::getCaption() const
{
	return String ("");
}

Boolean UNIX_IPsecTunnelAction::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_IPsecTunnelAction::getDescription() const
{
	return String ("");
}

Boolean UNIX_IPsecTunnelAction::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_IPsecTunnelAction::getElementName() const
{
	return String("IPsecTunnelAction");
}

Boolean UNIX_IPsecTunnelAction::getCommonName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMON_NAME, getCommonName());
	return true;
}

String UNIX_IPsecTunnelAction::getCommonName() const
{
	return String ("");
}

Boolean UNIX_IPsecTunnelAction::getPolicyKeywords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_KEYWORDS, getPolicyKeywords());
	return true;
}

Array<String> UNIX_IPsecTunnelAction::getPolicyKeywords() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_IPsecTunnelAction::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_IPsecTunnelAction::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_IPsecTunnelAction::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_IPsecTunnelAction::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_IPsecTunnelAction::getPolicyRuleCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_RULE_CREATION_CLASS_NAME, getPolicyRuleCreationClassName());
	return true;
}

String UNIX_IPsecTunnelAction::getPolicyRuleCreationClassName() const
{
	return String ("");
}

Boolean UNIX_IPsecTunnelAction::getPolicyRuleName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_RULE_NAME, getPolicyRuleName());
	return true;
}

String UNIX_IPsecTunnelAction::getPolicyRuleName() const
{
	return String ("");
}

Boolean UNIX_IPsecTunnelAction::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_IPsecTunnelAction::getCreationClassName() const
{
	return String("UNIX_IPsecTunnelAction");
}

Boolean UNIX_IPsecTunnelAction::getPolicyActionName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_ACTION_NAME, getPolicyActionName());
	return true;
}

String UNIX_IPsecTunnelAction::getPolicyActionName() const
{
	return String ("");
}

Boolean UNIX_IPsecTunnelAction::getDoActionLogging(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DO_ACTION_LOGGING, getDoActionLogging());
	return true;
}

Boolean UNIX_IPsecTunnelAction::getDoActionLogging() const
{
	return Boolean(false);
}

Boolean UNIX_IPsecTunnelAction::getDoPacketLogging(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DO_PACKET_LOGGING, getDoPacketLogging());
	return true;
}

Boolean UNIX_IPsecTunnelAction::getDoPacketLogging() const
{
	return Boolean(false);
}

Boolean UNIX_IPsecTunnelAction::getMinLifetimeSeconds(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_LIFETIME_SECONDS, getMinLifetimeSeconds());
	return true;
}

Uint64 UNIX_IPsecTunnelAction::getMinLifetimeSeconds() const
{
	return Uint64(0);
}

Boolean UNIX_IPsecTunnelAction::getIdleDurationSeconds(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDLE_DURATION_SECONDS, getIdleDurationSeconds());
	return true;
}

Uint64 UNIX_IPsecTunnelAction::getIdleDurationSeconds() const
{
	return Uint64(0);
}

Boolean UNIX_IPsecTunnelAction::getMinLifetimeKilobytes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_LIFETIME_KILOBYTES, getMinLifetimeKilobytes());
	return true;
}

Uint64 UNIX_IPsecTunnelAction::getMinLifetimeKilobytes() const
{
	return Uint64(0);
}

Boolean UNIX_IPsecTunnelAction::getUsePFS(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USE_P_FS, getUsePFS());
	return true;
}

Boolean UNIX_IPsecTunnelAction::getUsePFS() const
{
	return Boolean(false);
}

Boolean UNIX_IPsecTunnelAction::getUsePhase1Group(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USE_PHASE_1_GROUP, getUsePhase1Group());
	return true;
}

Boolean UNIX_IPsecTunnelAction::getUsePhase1Group() const
{
	return Boolean(false);
}

Boolean UNIX_IPsecTunnelAction::getGroupId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_ID, getGroupId());
	return true;
}

Uint16 UNIX_IPsecTunnelAction::getGroupId() const
{
	return Uint16(0);
}

Boolean UNIX_IPsecTunnelAction::getVendorID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_ID, getVendorID());
	return true;
}

String UNIX_IPsecTunnelAction::getVendorID() const
{
	return String ("");
}

Boolean UNIX_IPsecTunnelAction::getGranularity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GRANULARITY, getGranularity());
	return true;
}

Uint16 UNIX_IPsecTunnelAction::getGranularity() const
{
	return Uint16(0);
}

Boolean UNIX_IPsecTunnelAction::getOtherGranularity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_GRANULARITY, getOtherGranularity());
	return true;
}

String UNIX_IPsecTunnelAction::getOtherGranularity() const
{
	return String ("");
}

Boolean UNIX_IPsecTunnelAction::getDFHandling(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_D_F_HANDLING, getDFHandling());
	return true;
}

Uint16 UNIX_IPsecTunnelAction::getDFHandling() const
{
	return Uint16(0);
}



Boolean UNIX_IPsecTunnelAction::initialize()
{
	return false;
}

Boolean UNIX_IPsecTunnelAction::load(int &pIndex)
{
	return false;
}

Boolean UNIX_IPsecTunnelAction::finalize()
{
	return false;
}

Boolean UNIX_IPsecTunnelAction::find(Array<CIMKeyBinding> &kbArray)
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
