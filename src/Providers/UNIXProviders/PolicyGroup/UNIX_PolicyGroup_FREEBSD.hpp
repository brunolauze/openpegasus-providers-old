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


UNIX_PolicyGroup::UNIX_PolicyGroup(void)
{
}

UNIX_PolicyGroup::~UNIX_PolicyGroup(void)
{
}


Boolean UNIX_PolicyGroup::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PolicyGroup::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_PolicyGroup::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PolicyGroup::getCaption() const
{
	return String ("");
}

Boolean UNIX_PolicyGroup::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PolicyGroup::getDescription() const
{
	return String ("");
}

Boolean UNIX_PolicyGroup::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PolicyGroup::getElementName() const
{
	return String("PolicyGroup");
}

Boolean UNIX_PolicyGroup::getCommonName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMON_NAME, getCommonName());
	return true;
}

String UNIX_PolicyGroup::getCommonName() const
{
	return String ("");
}

Boolean UNIX_PolicyGroup::getPolicyKeywords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_KEYWORDS, getPolicyKeywords());
	return true;
}

Array<String> UNIX_PolicyGroup::getPolicyKeywords() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PolicyGroup::getPolicyDecisionStrategy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_DECISION_STRATEGY, getPolicyDecisionStrategy());
	return true;
}

Uint16 UNIX_PolicyGroup::getPolicyDecisionStrategy() const
{
	return Uint16(0);
}

Boolean UNIX_PolicyGroup::getPolicyRoles(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_ROLES, getPolicyRoles());
	return true;
}

Array<String> UNIX_PolicyGroup::getPolicyRoles() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PolicyGroup::getEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED, getEnabled());
	return true;
}

Uint16 UNIX_PolicyGroup::getEnabled() const
{
	return Uint16(0);
}

Boolean UNIX_PolicyGroup::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_PolicyGroup::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_PolicyGroup::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_PolicyGroup::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_PolicyGroup::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_PolicyGroup::getCreationClassName() const
{
	return String("UNIX_PolicyGroup");
}

Boolean UNIX_PolicyGroup::getPolicyGroupName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLICY_GROUP_NAME, getPolicyGroupName());
	return true;
}

String UNIX_PolicyGroup::getPolicyGroupName() const
{
	return String ("");
}



Boolean UNIX_PolicyGroup::initialize()
{
	return false;
}

Boolean UNIX_PolicyGroup::load(int &pIndex)
{
	return false;
}

Boolean UNIX_PolicyGroup::finalize()
{
	return false;
}

Boolean UNIX_PolicyGroup::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String creationClassNameKey;
	String policyGroupNameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_POLICY_GROUP_NAME)) policyGroupNameKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
