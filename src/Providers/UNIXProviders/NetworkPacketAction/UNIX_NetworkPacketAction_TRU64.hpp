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


UNIX_NetworkPacketAction::UNIX_NetworkPacketAction(void)
{
}

UNIX_NetworkPacketAction::~UNIX_NetworkPacketAction(void)
{
}


Boolean UNIX_NetworkPacketAction::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_NetworkPacketAction::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_NetworkPacketAction::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_NetworkPacketAction::getCaption() const
{
	return String ("");
}

Boolean UNIX_NetworkPacketAction::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_NetworkPacketAction::getDescription() const
{
	return String ("");
}

Boolean UNIX_NetworkPacketAction::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_NetworkPacketAction::getElementName() const
{
	return String("NetworkPacketAction");
}

Boolean UNIX_NetworkPacketAction::getCommonName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMON_NAME, getCommonName());
	return true;
}

String UNIX_NetworkPacketAction::getCommonName() const
{
	return String ("");
}

Boolean UNIX_NetworkPacketAction::getPolicyKeywords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_KEYWORDS, getPolicyKeywords());
	return true;
}

Array<String> UNIX_NetworkPacketAction::getPolicyKeywords() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_NetworkPacketAction::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_NetworkPacketAction::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_NetworkPacketAction::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_NetworkPacketAction::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_NetworkPacketAction::getPolicyRuleCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_RULE_CREATION_CLASS_NAME, getPolicyRuleCreationClassName());
	return true;
}

String UNIX_NetworkPacketAction::getPolicyRuleCreationClassName() const
{
	return String ("");
}

Boolean UNIX_NetworkPacketAction::getPolicyRuleName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_RULE_NAME, getPolicyRuleName());
	return true;
}

String UNIX_NetworkPacketAction::getPolicyRuleName() const
{
	return String ("");
}

Boolean UNIX_NetworkPacketAction::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_NetworkPacketAction::getCreationClassName() const
{
	return String("UNIX_NetworkPacketAction");
}

Boolean UNIX_NetworkPacketAction::getPolicyActionName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_ACTION_NAME, getPolicyActionName());
	return true;
}

String UNIX_NetworkPacketAction::getPolicyActionName() const
{
	return String ("");
}

Boolean UNIX_NetworkPacketAction::getDoActionLogging(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DO_ACTION_LOGGING, getDoActionLogging());
	return true;
}

Boolean UNIX_NetworkPacketAction::getDoActionLogging() const
{
	return Boolean(false);
}

Boolean UNIX_NetworkPacketAction::getPacketAction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKET_ACTION, getPacketAction());
	return true;
}

Uint16 UNIX_NetworkPacketAction::getPacketAction() const
{
	return Uint16(0);
}

Boolean UNIX_NetworkPacketAction::getOtherAction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ACTION, getOtherAction());
	return true;
}

String UNIX_NetworkPacketAction::getOtherAction() const
{
	return String ("");
}



Boolean UNIX_NetworkPacketAction::initialize()
{
	return false;
}

Boolean UNIX_NetworkPacketAction::load(int &pIndex)
{
	return false;
}

Boolean UNIX_NetworkPacketAction::finalize()
{
	return false;
}

Boolean UNIX_NetworkPacketAction::find(Array<CIMKeyBinding> &kbArray)
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
