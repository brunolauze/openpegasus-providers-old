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


UNIX_PolicyConditionInPolicyRule::UNIX_PolicyConditionInPolicyRule(void)
{
}

UNIX_PolicyConditionInPolicyRule::~UNIX_PolicyConditionInPolicyRule(void)
{
}


Boolean UNIX_PolicyConditionInPolicyRule::getGroupComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_COMPONENT, getGroupComponent());
	return true;
}

CIMInstance UNIX_PolicyConditionInPolicyRule::getGroupComponent() const
{
	return CIMInstance(CIMName("CIM_Component"));
}

Boolean UNIX_PolicyConditionInPolicyRule::getPartComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_COMPONENT, getPartComponent());
	return true;
}

CIMInstance UNIX_PolicyConditionInPolicyRule::getPartComponent() const
{
	return CIMInstance(CIMName("CIM_Component"));
}

Boolean UNIX_PolicyConditionInPolicyRule::getGroupNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_NUMBER, getGroupNumber());
	return true;
}

Uint16 UNIX_PolicyConditionInPolicyRule::getGroupNumber() const
{
	return Uint16(0);
}

Boolean UNIX_PolicyConditionInPolicyRule::getConditionNegated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONDITION_NEGATED, getConditionNegated());
	return true;
}

Boolean UNIX_PolicyConditionInPolicyRule::getConditionNegated() const
{
	return Boolean(false);
}



Boolean UNIX_PolicyConditionInPolicyRule::initialize()
{
	groupIndex = -1;
	partIndex = 0;
	group_UNIX_IPsecRule_Index = -1;
	endOf_UNIX_IPsecRule_Group = false;
	group_UNIX_IPsecRule_Component.initialize();
	group_UNIX_IKERule_Index = -1;
	endOf_UNIX_IKERule_Group = false;
	group_UNIX_IKERule_Component.initialize();
	group_UNIX_AuthenticationRule_Index = -1;
	endOf_UNIX_AuthenticationRule_Group = false;
	group_UNIX_AuthenticationRule_Component.initialize();
	part_UNIX_VendorPolicyCondition_Index = -1;
	endOf_UNIX_VendorPolicyCondition_Part = false;
	part_UNIX_DocumentAuthentication_Index = -1;
	endOf_UNIX_DocumentAuthentication_Part = false;
	part_UNIX_PublicPrivateKeyAuthentication_Index = -1;
	endOf_UNIX_PublicPrivateKeyAuthentication_Part = false;
	part_UNIX_KerberosAuthentication_Index = -1;
	endOf_UNIX_KerberosAuthentication_Part = false;
	part_UNIX_NetworkingIDAuthentication_Index = -1;
	endOf_UNIX_NetworkingIDAuthentication_Part = false;
	part_UNIX_SharedSecretAuthentication_Index = -1;
	endOf_UNIX_SharedSecretAuthentication_Part = false;
	part_UNIX_PhysicalCredentialAuthentication_Index = -1;
	endOf_UNIX_PhysicalCredentialAuthentication_Part = false;
	part_UNIX_AccountAuthentication_Index = -1;
	endOf_UNIX_AccountAuthentication_Part = false;
	part_UNIX_BiometricAuthentication_Index = -1;
	endOf_UNIX_BiometricAuthentication_Part = false;
	part_UNIX_PolicyTimePeriodCondition_Index = -1;
	endOf_UNIX_PolicyTimePeriodCondition_Part = false;
	part_UNIX_QueryCondition_Index = -1;
	endOf_UNIX_QueryCondition_Part = false;
	part_UNIX_PacketFilterCondition_Index = -1;
	endOf_UNIX_PacketFilterCondition_Part = false;
	part_UNIX_CompoundPolicyCondition_Index = -1;
	endOf_UNIX_CompoundPolicyCondition_Part = false;
	return true;
}

Boolean UNIX_PolicyConditionInPolicyRule::load(int &pIndex)
{
	if (pIndex == 0 || (endOf_UNIX_VendorPolicyCondition_Part &&
			endOf_UNIX_DocumentAuthentication_Part &&
			endOf_UNIX_PublicPrivateKeyAuthentication_Part &&
			endOf_UNIX_KerberosAuthentication_Part &&
			endOf_UNIX_NetworkingIDAuthentication_Part &&
			endOf_UNIX_SharedSecretAuthentication_Part &&
			endOf_UNIX_PhysicalCredentialAuthentication_Part &&
			endOf_UNIX_AccountAuthentication_Part &&
			endOf_UNIX_BiometricAuthentication_Part &&
			endOf_UNIX_PolicyTimePeriodCondition_Part &&
			endOf_UNIX_QueryCondition_Part &&
			endOf_UNIX_PacketFilterCondition_Part &&
			endOf_UNIX_CompoundPolicyCondition_Part))
	{
		if (groupIndex == 0)
		{
			group_UNIX_IPsecRule_Index++;
			endOf_UNIX_IPsecRule_Group = !group_UNIX_IPsecRule_Component.load(group_UNIX_IPsecRule_Index);
			if (endOf_UNIX_IPsecRule_Group)
			{
				endOf_UNIX_VendorPolicyCondition_Part = false;
				part_UNIX_VendorPolicyCondition_Component.setScope(CIMName("UNIX_IPsecRule"));
				part_UNIX_VendorPolicyCondition_Component.initialize();
				endOf_UNIX_DocumentAuthentication_Part = false;
				part_UNIX_DocumentAuthentication_Component.setScope(CIMName("UNIX_IPsecRule"));
				part_UNIX_DocumentAuthentication_Component.initialize();
				endOf_UNIX_PublicPrivateKeyAuthentication_Part = false;
				part_UNIX_PublicPrivateKeyAuthentication_Component.setScope(CIMName("UNIX_IPsecRule"));
				part_UNIX_PublicPrivateKeyAuthentication_Component.initialize();
				endOf_UNIX_KerberosAuthentication_Part = false;
				part_UNIX_KerberosAuthentication_Component.setScope(CIMName("UNIX_IPsecRule"));
				part_UNIX_KerberosAuthentication_Component.initialize();
				endOf_UNIX_NetworkingIDAuthentication_Part = false;
				part_UNIX_NetworkingIDAuthentication_Component.setScope(CIMName("UNIX_IPsecRule"));
				part_UNIX_NetworkingIDAuthentication_Component.initialize();
				endOf_UNIX_SharedSecretAuthentication_Part = false;
				part_UNIX_SharedSecretAuthentication_Component.setScope(CIMName("UNIX_IPsecRule"));
				part_UNIX_SharedSecretAuthentication_Component.initialize();
				endOf_UNIX_PhysicalCredentialAuthentication_Part = false;
				part_UNIX_PhysicalCredentialAuthentication_Component.setScope(CIMName("UNIX_IPsecRule"));
				part_UNIX_PhysicalCredentialAuthentication_Component.initialize();
				endOf_UNIX_AccountAuthentication_Part = false;
				part_UNIX_AccountAuthentication_Component.setScope(CIMName("UNIX_IPsecRule"));
				part_UNIX_AccountAuthentication_Component.initialize();
				endOf_UNIX_BiometricAuthentication_Part = false;
				part_UNIX_BiometricAuthentication_Component.setScope(CIMName("UNIX_IPsecRule"));
				part_UNIX_BiometricAuthentication_Component.initialize();
				endOf_UNIX_PolicyTimePeriodCondition_Part = false;
				part_UNIX_PolicyTimePeriodCondition_Component.setScope(CIMName("UNIX_IPsecRule"));
				part_UNIX_PolicyTimePeriodCondition_Component.initialize();
				endOf_UNIX_QueryCondition_Part = false;
				part_UNIX_QueryCondition_Component.setScope(CIMName("UNIX_IPsecRule"));
				part_UNIX_QueryCondition_Component.initialize();
				endOf_UNIX_PacketFilterCondition_Part = false;
				part_UNIX_PacketFilterCondition_Component.setScope(CIMName("UNIX_IPsecRule"));
				part_UNIX_PacketFilterCondition_Component.initialize();
				endOf_UNIX_CompoundPolicyCondition_Part = false;
				part_UNIX_CompoundPolicyCondition_Component.setScope(CIMName("UNIX_IPsecRule"));
				part_UNIX_CompoundPolicyCondition_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 1)
		{
			group_UNIX_IKERule_Index++;
			endOf_UNIX_IKERule_Group = !group_UNIX_IKERule_Component.load(group_UNIX_IKERule_Index);
			if (endOf_UNIX_IKERule_Group)
			{
				endOf_UNIX_VendorPolicyCondition_Part = false;
				part_UNIX_VendorPolicyCondition_Component.setScope(CIMName("UNIX_IKERule"));
				part_UNIX_VendorPolicyCondition_Component.initialize();
				endOf_UNIX_DocumentAuthentication_Part = false;
				part_UNIX_DocumentAuthentication_Component.setScope(CIMName("UNIX_IKERule"));
				part_UNIX_DocumentAuthentication_Component.initialize();
				endOf_UNIX_PublicPrivateKeyAuthentication_Part = false;
				part_UNIX_PublicPrivateKeyAuthentication_Component.setScope(CIMName("UNIX_IKERule"));
				part_UNIX_PublicPrivateKeyAuthentication_Component.initialize();
				endOf_UNIX_KerberosAuthentication_Part = false;
				part_UNIX_KerberosAuthentication_Component.setScope(CIMName("UNIX_IKERule"));
				part_UNIX_KerberosAuthentication_Component.initialize();
				endOf_UNIX_NetworkingIDAuthentication_Part = false;
				part_UNIX_NetworkingIDAuthentication_Component.setScope(CIMName("UNIX_IKERule"));
				part_UNIX_NetworkingIDAuthentication_Component.initialize();
				endOf_UNIX_SharedSecretAuthentication_Part = false;
				part_UNIX_SharedSecretAuthentication_Component.setScope(CIMName("UNIX_IKERule"));
				part_UNIX_SharedSecretAuthentication_Component.initialize();
				endOf_UNIX_PhysicalCredentialAuthentication_Part = false;
				part_UNIX_PhysicalCredentialAuthentication_Component.setScope(CIMName("UNIX_IKERule"));
				part_UNIX_PhysicalCredentialAuthentication_Component.initialize();
				endOf_UNIX_AccountAuthentication_Part = false;
				part_UNIX_AccountAuthentication_Component.setScope(CIMName("UNIX_IKERule"));
				part_UNIX_AccountAuthentication_Component.initialize();
				endOf_UNIX_BiometricAuthentication_Part = false;
				part_UNIX_BiometricAuthentication_Component.setScope(CIMName("UNIX_IKERule"));
				part_UNIX_BiometricAuthentication_Component.initialize();
				endOf_UNIX_PolicyTimePeriodCondition_Part = false;
				part_UNIX_PolicyTimePeriodCondition_Component.setScope(CIMName("UNIX_IKERule"));
				part_UNIX_PolicyTimePeriodCondition_Component.initialize();
				endOf_UNIX_QueryCondition_Part = false;
				part_UNIX_QueryCondition_Component.setScope(CIMName("UNIX_IKERule"));
				part_UNIX_QueryCondition_Component.initialize();
				endOf_UNIX_PacketFilterCondition_Part = false;
				part_UNIX_PacketFilterCondition_Component.setScope(CIMName("UNIX_IKERule"));
				part_UNIX_PacketFilterCondition_Component.initialize();
				endOf_UNIX_CompoundPolicyCondition_Part = false;
				part_UNIX_CompoundPolicyCondition_Component.setScope(CIMName("UNIX_IKERule"));
				part_UNIX_CompoundPolicyCondition_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 2)
		{
			group_UNIX_AuthenticationRule_Index++;
			endOf_UNIX_AuthenticationRule_Group = !group_UNIX_AuthenticationRule_Component.load(group_UNIX_AuthenticationRule_Index);
			if (endOf_UNIX_AuthenticationRule_Group)
			{
				endOf_UNIX_VendorPolicyCondition_Part = false;
				part_UNIX_VendorPolicyCondition_Component.setScope(CIMName("UNIX_AuthenticationRule"));
				part_UNIX_VendorPolicyCondition_Component.initialize();
				endOf_UNIX_DocumentAuthentication_Part = false;
				part_UNIX_DocumentAuthentication_Component.setScope(CIMName("UNIX_AuthenticationRule"));
				part_UNIX_DocumentAuthentication_Component.initialize();
				endOf_UNIX_PublicPrivateKeyAuthentication_Part = false;
				part_UNIX_PublicPrivateKeyAuthentication_Component.setScope(CIMName("UNIX_AuthenticationRule"));
				part_UNIX_PublicPrivateKeyAuthentication_Component.initialize();
				endOf_UNIX_KerberosAuthentication_Part = false;
				part_UNIX_KerberosAuthentication_Component.setScope(CIMName("UNIX_AuthenticationRule"));
				part_UNIX_KerberosAuthentication_Component.initialize();
				endOf_UNIX_NetworkingIDAuthentication_Part = false;
				part_UNIX_NetworkingIDAuthentication_Component.setScope(CIMName("UNIX_AuthenticationRule"));
				part_UNIX_NetworkingIDAuthentication_Component.initialize();
				endOf_UNIX_SharedSecretAuthentication_Part = false;
				part_UNIX_SharedSecretAuthentication_Component.setScope(CIMName("UNIX_AuthenticationRule"));
				part_UNIX_SharedSecretAuthentication_Component.initialize();
				endOf_UNIX_PhysicalCredentialAuthentication_Part = false;
				part_UNIX_PhysicalCredentialAuthentication_Component.setScope(CIMName("UNIX_AuthenticationRule"));
				part_UNIX_PhysicalCredentialAuthentication_Component.initialize();
				endOf_UNIX_AccountAuthentication_Part = false;
				part_UNIX_AccountAuthentication_Component.setScope(CIMName("UNIX_AuthenticationRule"));
				part_UNIX_AccountAuthentication_Component.initialize();
				endOf_UNIX_BiometricAuthentication_Part = false;
				part_UNIX_BiometricAuthentication_Component.setScope(CIMName("UNIX_AuthenticationRule"));
				part_UNIX_BiometricAuthentication_Component.initialize();
				endOf_UNIX_PolicyTimePeriodCondition_Part = false;
				part_UNIX_PolicyTimePeriodCondition_Component.setScope(CIMName("UNIX_AuthenticationRule"));
				part_UNIX_PolicyTimePeriodCondition_Component.initialize();
				endOf_UNIX_QueryCondition_Part = false;
				part_UNIX_QueryCondition_Component.setScope(CIMName("UNIX_AuthenticationRule"));
				part_UNIX_QueryCondition_Component.initialize();
				endOf_UNIX_PacketFilterCondition_Part = false;
				part_UNIX_PacketFilterCondition_Component.setScope(CIMName("UNIX_AuthenticationRule"));
				part_UNIX_PacketFilterCondition_Component.initialize();
				endOf_UNIX_CompoundPolicyCondition_Part = false;
				part_UNIX_CompoundPolicyCondition_Component.setScope(CIMName("UNIX_AuthenticationRule"));
				part_UNIX_CompoundPolicyCondition_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
	}
	if (partIndex == 0)
	{
		part_UNIX_VendorPolicyCondition_Index++;
	endOf_UNIX_VendorPolicyCondition_Part = !part_UNIX_VendorPolicyCondition_Component.load(part_UNIX_VendorPolicyCondition_Index);
	}
	if (partIndex == 1)
	{
		part_UNIX_DocumentAuthentication_Index++;
	endOf_UNIX_DocumentAuthentication_Part = !part_UNIX_DocumentAuthentication_Component.load(part_UNIX_DocumentAuthentication_Index);
	}
	if (partIndex == 2)
	{
		part_UNIX_PublicPrivateKeyAuthentication_Index++;
	endOf_UNIX_PublicPrivateKeyAuthentication_Part = !part_UNIX_PublicPrivateKeyAuthentication_Component.load(part_UNIX_PublicPrivateKeyAuthentication_Index);
	}
	if (partIndex == 3)
	{
		part_UNIX_KerberosAuthentication_Index++;
	endOf_UNIX_KerberosAuthentication_Part = !part_UNIX_KerberosAuthentication_Component.load(part_UNIX_KerberosAuthentication_Index);
	}
	if (partIndex == 4)
	{
		part_UNIX_NetworkingIDAuthentication_Index++;
	endOf_UNIX_NetworkingIDAuthentication_Part = !part_UNIX_NetworkingIDAuthentication_Component.load(part_UNIX_NetworkingIDAuthentication_Index);
	}
	if (partIndex == 5)
	{
		part_UNIX_SharedSecretAuthentication_Index++;
	endOf_UNIX_SharedSecretAuthentication_Part = !part_UNIX_SharedSecretAuthentication_Component.load(part_UNIX_SharedSecretAuthentication_Index);
	}
	if (partIndex == 6)
	{
		part_UNIX_PhysicalCredentialAuthentication_Index++;
	endOf_UNIX_PhysicalCredentialAuthentication_Part = !part_UNIX_PhysicalCredentialAuthentication_Component.load(part_UNIX_PhysicalCredentialAuthentication_Index);
	}
	if (partIndex == 7)
	{
		part_UNIX_AccountAuthentication_Index++;
	endOf_UNIX_AccountAuthentication_Part = !part_UNIX_AccountAuthentication_Component.load(part_UNIX_AccountAuthentication_Index);
	}
	if (partIndex == 8)
	{
		part_UNIX_BiometricAuthentication_Index++;
	endOf_UNIX_BiometricAuthentication_Part = !part_UNIX_BiometricAuthentication_Component.load(part_UNIX_BiometricAuthentication_Index);
	}
	if (partIndex == 9)
	{
		part_UNIX_PolicyTimePeriodCondition_Index++;
	endOf_UNIX_PolicyTimePeriodCondition_Part = !part_UNIX_PolicyTimePeriodCondition_Component.load(part_UNIX_PolicyTimePeriodCondition_Index);
	}
	if (partIndex == 10)
	{
		part_UNIX_QueryCondition_Index++;
	endOf_UNIX_QueryCondition_Part = !part_UNIX_QueryCondition_Component.load(part_UNIX_QueryCondition_Index);
	}
	if (partIndex == 11)
	{
		part_UNIX_PacketFilterCondition_Index++;
	endOf_UNIX_PacketFilterCondition_Part = !part_UNIX_PacketFilterCondition_Component.load(part_UNIX_PacketFilterCondition_Index);
	}
	if (partIndex == 12)
	{
		part_UNIX_CompoundPolicyCondition_Index++;
	endOf_UNIX_CompoundPolicyCondition_Part = !part_UNIX_CompoundPolicyCondition_Component.load(part_UNIX_CompoundPolicyCondition_Index);
	}
	if (partIndex == 0 && endOf_UNIX_VendorPolicyCondition_Part)
	{
		part_UNIX_VendorPolicyCondition_Component.finalize();
		partIndex++;
	}
	if (partIndex == 1 && endOf_UNIX_DocumentAuthentication_Part)
	{
		part_UNIX_DocumentAuthentication_Component.finalize();
		partIndex++;
	}
	if (partIndex == 2 && endOf_UNIX_PublicPrivateKeyAuthentication_Part)
	{
		part_UNIX_PublicPrivateKeyAuthentication_Component.finalize();
		partIndex++;
	}
	if (partIndex == 3 && endOf_UNIX_KerberosAuthentication_Part)
	{
		part_UNIX_KerberosAuthentication_Component.finalize();
		partIndex++;
	}
	if (partIndex == 4 && endOf_UNIX_NetworkingIDAuthentication_Part)
	{
		part_UNIX_NetworkingIDAuthentication_Component.finalize();
		partIndex++;
	}
	if (partIndex == 5 && endOf_UNIX_SharedSecretAuthentication_Part)
	{
		part_UNIX_SharedSecretAuthentication_Component.finalize();
		partIndex++;
	}
	if (partIndex == 6 && endOf_UNIX_PhysicalCredentialAuthentication_Part)
	{
		part_UNIX_PhysicalCredentialAuthentication_Component.finalize();
		partIndex++;
	}
	if (partIndex == 7 && endOf_UNIX_AccountAuthentication_Part)
	{
		part_UNIX_AccountAuthentication_Component.finalize();
		partIndex++;
	}
	if (partIndex == 8 && endOf_UNIX_BiometricAuthentication_Part)
	{
		part_UNIX_BiometricAuthentication_Component.finalize();
		partIndex++;
	}
	if (partIndex == 9 && endOf_UNIX_PolicyTimePeriodCondition_Part)
	{
		part_UNIX_PolicyTimePeriodCondition_Component.finalize();
		partIndex++;
	}
	if (partIndex == 10 && endOf_UNIX_QueryCondition_Part)
	{
		part_UNIX_QueryCondition_Component.finalize();
		partIndex++;
	}
	if (partIndex == 11 && endOf_UNIX_PacketFilterCondition_Part)
	{
		part_UNIX_PacketFilterCondition_Component.finalize();
		partIndex++;
	}
	if (partIndex == 12 && endOf_UNIX_CompoundPolicyCondition_Part)
	{
		part_UNIX_CompoundPolicyCondition_Component.finalize();
		partIndex++;
	}

	if (endOf_UNIX_IPsecRule_Group &&
		endOf_UNIX_IKERule_Group &&
		endOf_UNIX_AuthenticationRule_Group &&
		endOf_UNIX_VendorPolicyCondition_Part &&
		endOf_UNIX_DocumentAuthentication_Part &&
		endOf_UNIX_PublicPrivateKeyAuthentication_Part &&
		endOf_UNIX_KerberosAuthentication_Part &&
		endOf_UNIX_NetworkingIDAuthentication_Part &&
		endOf_UNIX_SharedSecretAuthentication_Part &&
		endOf_UNIX_PhysicalCredentialAuthentication_Part &&
		endOf_UNIX_AccountAuthentication_Part &&
		endOf_UNIX_BiometricAuthentication_Part &&
		endOf_UNIX_PolicyTimePeriodCondition_Part &&
		endOf_UNIX_QueryCondition_Part &&
		endOf_UNIX_PacketFilterCondition_Part &&
		endOf_UNIX_CompoundPolicyCondition_Part)		return false;
	return true;
}

Boolean UNIX_PolicyConditionInPolicyRule::finalize()
{
	group_UNIX_IPsecRule_Component.finalize();
	group_UNIX_IKERule_Component.finalize();
	group_UNIX_AuthenticationRule_Component.finalize();
	part_UNIX_VendorPolicyCondition_Component.finalize();
	part_UNIX_DocumentAuthentication_Component.finalize();
	part_UNIX_PublicPrivateKeyAuthentication_Component.finalize();
	part_UNIX_KerberosAuthentication_Component.finalize();
	part_UNIX_NetworkingIDAuthentication_Component.finalize();
	part_UNIX_SharedSecretAuthentication_Component.finalize();
	part_UNIX_PhysicalCredentialAuthentication_Component.finalize();
	part_UNIX_AccountAuthentication_Component.finalize();
	part_UNIX_BiometricAuthentication_Component.finalize();
	part_UNIX_PolicyTimePeriodCondition_Component.finalize();
	part_UNIX_QueryCondition_Component.finalize();
	part_UNIX_PacketFilterCondition_Component.finalize();
	part_UNIX_CompoundPolicyCondition_Component.finalize();
	return true;
}

Boolean UNIX_PolicyConditionInPolicyRule::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String groupComponentKey;
	String partComponentKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_GROUP_COMPONENT)) groupComponentKey = kb.getValue();
		else if (keyName.equal(PROPERTY_PART_COMPONENT)) partComponentKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
