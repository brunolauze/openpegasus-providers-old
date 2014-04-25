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

#ifndef __UNIX_POLICYCONDITIONINPOLICYCONDITION_H
#define __UNIX_POLICYCONDITIONINPOLICYCONDITION_H


#include "CIM_PolicyConditionStructure.h"
#include <CompoundPolicyCondition/UNIX_CompoundPolicyCondition.h>
#include <VendorPolicyCondition/UNIX_VendorPolicyCondition.h>
#include <DocumentAuthentication/UNIX_DocumentAuthentication.h>
#include <PublicPrivateKeyAuthentication/UNIX_PublicPrivateKeyAuthentication.h>
#include <KerberosAuthentication/UNIX_KerberosAuthentication.h>
#include <NetworkingIDAuthentication/UNIX_NetworkingIDAuthentication.h>
#include <SharedSecretAuthentication/UNIX_SharedSecretAuthentication.h>
#include <PhysicalCredentialAuthentication/UNIX_PhysicalCredentialAuthentication.h>
#include <AccountAuthentication/UNIX_AccountAuthentication.h>
#include <BiometricAuthentication/UNIX_BiometricAuthentication.h>
#include <PolicyTimePeriodCondition/UNIX_PolicyTimePeriodCondition.h>
#include <QueryCondition/UNIX_QueryCondition.h>
#include <PacketFilterCondition/UNIX_PacketFilterCondition.h>
#include <CompoundPolicyCondition/UNIX_CompoundPolicyCondition.h>

#include "UNIX_PolicyConditionInPolicyConditionDeps.h"




class UNIX_PolicyConditionInPolicyCondition :
	public CIM_PolicyConditionStructure
{
public:

	UNIX_PolicyConditionInPolicyCondition();
	~UNIX_PolicyConditionInPolicyCondition();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean finalize();
	virtual Boolean find(Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);

	virtual Boolean getGroupComponent(CIMProperty&) const;
	virtual CIMInstance getGroupComponent() const;
	virtual Boolean getPartComponent(CIMProperty&) const;
	virtual CIMInstance getPartComponent() const;
	virtual Boolean getGroupNumber(CIMProperty&) const;
	virtual Uint16 getGroupNumber() const;
	virtual Boolean getConditionNegated(CIMProperty&) const;
	virtual Boolean getConditionNegated() const;

private:
	CIMName currentScope;

#	include "UNIX_PolicyConditionInPolicyConditionPrivate.h"

	int groupIndex;
	int partIndex;
	UNIX_CompoundPolicyCondition group_UNIX_CompoundPolicyCondition_Component;
	int group_UNIX_CompoundPolicyCondition_Index;
	bool endOf_UNIX_CompoundPolicyCondition_Group;
	UNIX_VendorPolicyCondition part_UNIX_VendorPolicyCondition_Component;
	int part_UNIX_VendorPolicyCondition_Index;
	bool endOf_UNIX_VendorPolicyCondition_Part;
	UNIX_DocumentAuthentication part_UNIX_DocumentAuthentication_Component;
	int part_UNIX_DocumentAuthentication_Index;
	bool endOf_UNIX_DocumentAuthentication_Part;
	UNIX_PublicPrivateKeyAuthentication part_UNIX_PublicPrivateKeyAuthentication_Component;
	int part_UNIX_PublicPrivateKeyAuthentication_Index;
	bool endOf_UNIX_PublicPrivateKeyAuthentication_Part;
	UNIX_KerberosAuthentication part_UNIX_KerberosAuthentication_Component;
	int part_UNIX_KerberosAuthentication_Index;
	bool endOf_UNIX_KerberosAuthentication_Part;
	UNIX_NetworkingIDAuthentication part_UNIX_NetworkingIDAuthentication_Component;
	int part_UNIX_NetworkingIDAuthentication_Index;
	bool endOf_UNIX_NetworkingIDAuthentication_Part;
	UNIX_SharedSecretAuthentication part_UNIX_SharedSecretAuthentication_Component;
	int part_UNIX_SharedSecretAuthentication_Index;
	bool endOf_UNIX_SharedSecretAuthentication_Part;
	UNIX_PhysicalCredentialAuthentication part_UNIX_PhysicalCredentialAuthentication_Component;
	int part_UNIX_PhysicalCredentialAuthentication_Index;
	bool endOf_UNIX_PhysicalCredentialAuthentication_Part;
	UNIX_AccountAuthentication part_UNIX_AccountAuthentication_Component;
	int part_UNIX_AccountAuthentication_Index;
	bool endOf_UNIX_AccountAuthentication_Part;
	UNIX_BiometricAuthentication part_UNIX_BiometricAuthentication_Component;
	int part_UNIX_BiometricAuthentication_Index;
	bool endOf_UNIX_BiometricAuthentication_Part;
	UNIX_PolicyTimePeriodCondition part_UNIX_PolicyTimePeriodCondition_Component;
	int part_UNIX_PolicyTimePeriodCondition_Index;
	bool endOf_UNIX_PolicyTimePeriodCondition_Part;
	UNIX_QueryCondition part_UNIX_QueryCondition_Component;
	int part_UNIX_QueryCondition_Index;
	bool endOf_UNIX_QueryCondition_Part;
	UNIX_PacketFilterCondition part_UNIX_PacketFilterCondition_Component;
	int part_UNIX_PacketFilterCondition_Index;
	bool endOf_UNIX_PacketFilterCondition_Part;
	UNIX_CompoundPolicyCondition part_UNIX_CompoundPolicyCondition_Component;
	int part_UNIX_CompoundPolicyCondition_Index;
	bool endOf_UNIX_CompoundPolicyCondition_Part;


};

#endif /* UNIX_POLICYCONDITIONINPOLICYCONDITION */
