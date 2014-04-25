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


UNIX_PolicyActionInPolicyAction::UNIX_PolicyActionInPolicyAction(void)
{
}

UNIX_PolicyActionInPolicyAction::~UNIX_PolicyActionInPolicyAction(void)
{
}


Boolean UNIX_PolicyActionInPolicyAction::getGroupComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_COMPONENT, getGroupComponent());
	return true;
}

CIMInstance UNIX_PolicyActionInPolicyAction::getGroupComponent() const
{
	return CIMInstance(CIMName("CIM_Component"));
}

Boolean UNIX_PolicyActionInPolicyAction::getPartComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_COMPONENT, getPartComponent());
	return true;
}

CIMInstance UNIX_PolicyActionInPolicyAction::getPartComponent() const
{
	return CIMInstance(CIMName("CIM_Component"));
}

Boolean UNIX_PolicyActionInPolicyAction::getActionOrder(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTION_ORDER, getActionOrder());
	return true;
}

Uint16 UNIX_PolicyActionInPolicyAction::getActionOrder() const
{
	return Uint16(0);
}



Boolean UNIX_PolicyActionInPolicyAction::initialize()
{
	groupIndex = -1;
	partIndex = 0;
	group_UNIX_CompoundPolicyAction_Index = -1;
	endOf_UNIX_CompoundPolicyAction_Group = false;
	group_UNIX_CompoundPolicyAction_Component.initialize();
	part_UNIX_RejectConnectionAction_Index = -1;
	endOf_UNIX_RejectConnectionAction_Part = false;
	part_UNIX_VendorPolicyAction_Index = -1;
	endOf_UNIX_VendorPolicyAction_Part = false;
	part_UNIX_NetworkPacketAction_Index = -1;
	endOf_UNIX_NetworkPacketAction_Part = false;
	part_UNIX_MethodAction_Index = -1;
	endOf_UNIX_MethodAction_Part = false;
	part_UNIX_CompoundPolicyAction_Index = -1;
	endOf_UNIX_CompoundPolicyAction_Part = false;
	part_UNIX_IKEAction_Index = -1;
	endOf_UNIX_IKEAction_Part = false;
	part_UNIX_IPsecTunnelAction_Index = -1;
	endOf_UNIX_IPsecTunnelAction_Part = false;
	part_UNIX_IPsecTransportAction_Index = -1;
	endOf_UNIX_IPsecTransportAction_Part = false;
	part_UNIX_PreconfiguredTunnelAction_Index = -1;
	endOf_UNIX_PreconfiguredTunnelAction_Part = false;
	part_UNIX_PreconfiguredTransportAction_Index = -1;
	endOf_UNIX_PreconfiguredTransportAction_Part = false;
	return true;
}

Boolean UNIX_PolicyActionInPolicyAction::load(int &pIndex)
{
	if (pIndex == 0 || (endOf_UNIX_RejectConnectionAction_Part &&
			endOf_UNIX_VendorPolicyAction_Part &&
			endOf_UNIX_NetworkPacketAction_Part &&
			endOf_UNIX_MethodAction_Part &&
			endOf_UNIX_CompoundPolicyAction_Part &&
			endOf_UNIX_IKEAction_Part &&
			endOf_UNIX_IPsecTunnelAction_Part &&
			endOf_UNIX_IPsecTransportAction_Part &&
			endOf_UNIX_PreconfiguredTunnelAction_Part &&
			endOf_UNIX_PreconfiguredTransportAction_Part))
	{
		if (groupIndex == 0)
		{
			group_UNIX_CompoundPolicyAction_Index++;
			endOf_UNIX_CompoundPolicyAction_Group = !group_UNIX_CompoundPolicyAction_Component.load(group_UNIX_CompoundPolicyAction_Index);
			if (endOf_UNIX_CompoundPolicyAction_Group)
			{
				endOf_UNIX_RejectConnectionAction_Part = false;
				part_UNIX_RejectConnectionAction_Component.setScope(CIMName("UNIX_CompoundPolicyAction"));
				part_UNIX_RejectConnectionAction_Component.initialize();
				endOf_UNIX_VendorPolicyAction_Part = false;
				part_UNIX_VendorPolicyAction_Component.setScope(CIMName("UNIX_CompoundPolicyAction"));
				part_UNIX_VendorPolicyAction_Component.initialize();
				endOf_UNIX_NetworkPacketAction_Part = false;
				part_UNIX_NetworkPacketAction_Component.setScope(CIMName("UNIX_CompoundPolicyAction"));
				part_UNIX_NetworkPacketAction_Component.initialize();
				endOf_UNIX_MethodAction_Part = false;
				part_UNIX_MethodAction_Component.setScope(CIMName("UNIX_CompoundPolicyAction"));
				part_UNIX_MethodAction_Component.initialize();
				endOf_UNIX_CompoundPolicyAction_Part = false;
				part_UNIX_CompoundPolicyAction_Component.setScope(CIMName("UNIX_CompoundPolicyAction"));
				part_UNIX_CompoundPolicyAction_Component.initialize();
				endOf_UNIX_IKEAction_Part = false;
				part_UNIX_IKEAction_Component.setScope(CIMName("UNIX_CompoundPolicyAction"));
				part_UNIX_IKEAction_Component.initialize();
				endOf_UNIX_IPsecTunnelAction_Part = false;
				part_UNIX_IPsecTunnelAction_Component.setScope(CIMName("UNIX_CompoundPolicyAction"));
				part_UNIX_IPsecTunnelAction_Component.initialize();
				endOf_UNIX_IPsecTransportAction_Part = false;
				part_UNIX_IPsecTransportAction_Component.setScope(CIMName("UNIX_CompoundPolicyAction"));
				part_UNIX_IPsecTransportAction_Component.initialize();
				endOf_UNIX_PreconfiguredTunnelAction_Part = false;
				part_UNIX_PreconfiguredTunnelAction_Component.setScope(CIMName("UNIX_CompoundPolicyAction"));
				part_UNIX_PreconfiguredTunnelAction_Component.initialize();
				endOf_UNIX_PreconfiguredTransportAction_Part = false;
				part_UNIX_PreconfiguredTransportAction_Component.setScope(CIMName("UNIX_CompoundPolicyAction"));
				part_UNIX_PreconfiguredTransportAction_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
	}
	if (partIndex == 0)
	{
		part_UNIX_RejectConnectionAction_Index++;
	endOf_UNIX_RejectConnectionAction_Part = !part_UNIX_RejectConnectionAction_Component.load(part_UNIX_RejectConnectionAction_Index);
	}
	if (partIndex == 1)
	{
		part_UNIX_VendorPolicyAction_Index++;
	endOf_UNIX_VendorPolicyAction_Part = !part_UNIX_VendorPolicyAction_Component.load(part_UNIX_VendorPolicyAction_Index);
	}
	if (partIndex == 2)
	{
		part_UNIX_NetworkPacketAction_Index++;
	endOf_UNIX_NetworkPacketAction_Part = !part_UNIX_NetworkPacketAction_Component.load(part_UNIX_NetworkPacketAction_Index);
	}
	if (partIndex == 3)
	{
		part_UNIX_MethodAction_Index++;
	endOf_UNIX_MethodAction_Part = !part_UNIX_MethodAction_Component.load(part_UNIX_MethodAction_Index);
	}
	if (partIndex == 4)
	{
		part_UNIX_CompoundPolicyAction_Index++;
	endOf_UNIX_CompoundPolicyAction_Part = !part_UNIX_CompoundPolicyAction_Component.load(part_UNIX_CompoundPolicyAction_Index);
	}
	if (partIndex == 5)
	{
		part_UNIX_IKEAction_Index++;
	endOf_UNIX_IKEAction_Part = !part_UNIX_IKEAction_Component.load(part_UNIX_IKEAction_Index);
	}
	if (partIndex == 6)
	{
		part_UNIX_IPsecTunnelAction_Index++;
	endOf_UNIX_IPsecTunnelAction_Part = !part_UNIX_IPsecTunnelAction_Component.load(part_UNIX_IPsecTunnelAction_Index);
	}
	if (partIndex == 7)
	{
		part_UNIX_IPsecTransportAction_Index++;
	endOf_UNIX_IPsecTransportAction_Part = !part_UNIX_IPsecTransportAction_Component.load(part_UNIX_IPsecTransportAction_Index);
	}
	if (partIndex == 8)
	{
		part_UNIX_PreconfiguredTunnelAction_Index++;
	endOf_UNIX_PreconfiguredTunnelAction_Part = !part_UNIX_PreconfiguredTunnelAction_Component.load(part_UNIX_PreconfiguredTunnelAction_Index);
	}
	if (partIndex == 9)
	{
		part_UNIX_PreconfiguredTransportAction_Index++;
	endOf_UNIX_PreconfiguredTransportAction_Part = !part_UNIX_PreconfiguredTransportAction_Component.load(part_UNIX_PreconfiguredTransportAction_Index);
	}
	if (partIndex == 0 && endOf_UNIX_RejectConnectionAction_Part)
	{
		part_UNIX_RejectConnectionAction_Component.finalize();
		partIndex++;
	}
	if (partIndex == 1 && endOf_UNIX_VendorPolicyAction_Part)
	{
		part_UNIX_VendorPolicyAction_Component.finalize();
		partIndex++;
	}
	if (partIndex == 2 && endOf_UNIX_NetworkPacketAction_Part)
	{
		part_UNIX_NetworkPacketAction_Component.finalize();
		partIndex++;
	}
	if (partIndex == 3 && endOf_UNIX_MethodAction_Part)
	{
		part_UNIX_MethodAction_Component.finalize();
		partIndex++;
	}
	if (partIndex == 4 && endOf_UNIX_CompoundPolicyAction_Part)
	{
		part_UNIX_CompoundPolicyAction_Component.finalize();
		partIndex++;
	}
	if (partIndex == 5 && endOf_UNIX_IKEAction_Part)
	{
		part_UNIX_IKEAction_Component.finalize();
		partIndex++;
	}
	if (partIndex == 6 && endOf_UNIX_IPsecTunnelAction_Part)
	{
		part_UNIX_IPsecTunnelAction_Component.finalize();
		partIndex++;
	}
	if (partIndex == 7 && endOf_UNIX_IPsecTransportAction_Part)
	{
		part_UNIX_IPsecTransportAction_Component.finalize();
		partIndex++;
	}
	if (partIndex == 8 && endOf_UNIX_PreconfiguredTunnelAction_Part)
	{
		part_UNIX_PreconfiguredTunnelAction_Component.finalize();
		partIndex++;
	}
	if (partIndex == 9 && endOf_UNIX_PreconfiguredTransportAction_Part)
	{
		part_UNIX_PreconfiguredTransportAction_Component.finalize();
		partIndex++;
	}

	if (endOf_UNIX_CompoundPolicyAction_Group &&
		endOf_UNIX_RejectConnectionAction_Part &&
		endOf_UNIX_VendorPolicyAction_Part &&
		endOf_UNIX_NetworkPacketAction_Part &&
		endOf_UNIX_MethodAction_Part &&
		endOf_UNIX_CompoundPolicyAction_Part &&
		endOf_UNIX_IKEAction_Part &&
		endOf_UNIX_IPsecTunnelAction_Part &&
		endOf_UNIX_IPsecTransportAction_Part &&
		endOf_UNIX_PreconfiguredTunnelAction_Part &&
		endOf_UNIX_PreconfiguredTransportAction_Part)		return false;
	return true;
}

Boolean UNIX_PolicyActionInPolicyAction::finalize()
{
	group_UNIX_CompoundPolicyAction_Component.finalize();
	part_UNIX_RejectConnectionAction_Component.finalize();
	part_UNIX_VendorPolicyAction_Component.finalize();
	part_UNIX_NetworkPacketAction_Component.finalize();
	part_UNIX_MethodAction_Component.finalize();
	part_UNIX_CompoundPolicyAction_Component.finalize();
	part_UNIX_IKEAction_Component.finalize();
	part_UNIX_IPsecTunnelAction_Component.finalize();
	part_UNIX_IPsecTransportAction_Component.finalize();
	part_UNIX_PreconfiguredTunnelAction_Component.finalize();
	part_UNIX_PreconfiguredTransportAction_Component.finalize();
	return true;
}

Boolean UNIX_PolicyActionInPolicyAction::find(Array<CIMKeyBinding> &kbArray)
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
