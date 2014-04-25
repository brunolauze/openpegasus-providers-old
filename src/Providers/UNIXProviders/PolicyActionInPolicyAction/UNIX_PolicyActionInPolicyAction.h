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

#ifndef __UNIX_POLICYACTIONINPOLICYACTION_H
#define __UNIX_POLICYACTIONINPOLICYACTION_H


#include "CIM_PolicyActionStructure.h"
#include <CompoundPolicyAction/UNIX_CompoundPolicyAction.h>
#include <RejectConnectionAction/UNIX_RejectConnectionAction.h>
#include <VendorPolicyAction/UNIX_VendorPolicyAction.h>
#include <NetworkPacketAction/UNIX_NetworkPacketAction.h>
#include <MethodAction/UNIX_MethodAction.h>
#include <CompoundPolicyAction/UNIX_CompoundPolicyAction.h>
#include <IKEAction/UNIX_IKEAction.h>
#include <IPsecTunnelAction/UNIX_IPsecTunnelAction.h>
#include <IPsecTransportAction/UNIX_IPsecTransportAction.h>
#include <PreconfiguredTunnelAction/UNIX_PreconfiguredTunnelAction.h>
#include <PreconfiguredTransportAction/UNIX_PreconfiguredTransportAction.h>

#include "UNIX_PolicyActionInPolicyActionDeps.h"




class UNIX_PolicyActionInPolicyAction :
	public CIM_PolicyActionStructure
{
public:

	UNIX_PolicyActionInPolicyAction();
	~UNIX_PolicyActionInPolicyAction();

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
	virtual Boolean getActionOrder(CIMProperty&) const;
	virtual Uint16 getActionOrder() const;

private:
	CIMName currentScope;

#	include "UNIX_PolicyActionInPolicyActionPrivate.h"

	int groupIndex;
	int partIndex;
	UNIX_CompoundPolicyAction group_UNIX_CompoundPolicyAction_Component;
	int group_UNIX_CompoundPolicyAction_Index;
	bool endOf_UNIX_CompoundPolicyAction_Group;
	UNIX_RejectConnectionAction part_UNIX_RejectConnectionAction_Component;
	int part_UNIX_RejectConnectionAction_Index;
	bool endOf_UNIX_RejectConnectionAction_Part;
	UNIX_VendorPolicyAction part_UNIX_VendorPolicyAction_Component;
	int part_UNIX_VendorPolicyAction_Index;
	bool endOf_UNIX_VendorPolicyAction_Part;
	UNIX_NetworkPacketAction part_UNIX_NetworkPacketAction_Component;
	int part_UNIX_NetworkPacketAction_Index;
	bool endOf_UNIX_NetworkPacketAction_Part;
	UNIX_MethodAction part_UNIX_MethodAction_Component;
	int part_UNIX_MethodAction_Index;
	bool endOf_UNIX_MethodAction_Part;
	UNIX_CompoundPolicyAction part_UNIX_CompoundPolicyAction_Component;
	int part_UNIX_CompoundPolicyAction_Index;
	bool endOf_UNIX_CompoundPolicyAction_Part;
	UNIX_IKEAction part_UNIX_IKEAction_Component;
	int part_UNIX_IKEAction_Index;
	bool endOf_UNIX_IKEAction_Part;
	UNIX_IPsecTunnelAction part_UNIX_IPsecTunnelAction_Component;
	int part_UNIX_IPsecTunnelAction_Index;
	bool endOf_UNIX_IPsecTunnelAction_Part;
	UNIX_IPsecTransportAction part_UNIX_IPsecTransportAction_Component;
	int part_UNIX_IPsecTransportAction_Index;
	bool endOf_UNIX_IPsecTransportAction_Part;
	UNIX_PreconfiguredTunnelAction part_UNIX_PreconfiguredTunnelAction_Component;
	int part_UNIX_PreconfiguredTunnelAction_Index;
	bool endOf_UNIX_PreconfiguredTunnelAction_Part;
	UNIX_PreconfiguredTransportAction part_UNIX_PreconfiguredTransportAction_Component;
	int part_UNIX_PreconfiguredTransportAction_Index;
	bool endOf_UNIX_PreconfiguredTransportAction_Part;


};

#endif /* UNIX_POLICYACTIONINPOLICYACTION */
