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


UNIX_ContainedProposal::UNIX_ContainedProposal(void)
{
}

UNIX_ContainedProposal::~UNIX_ContainedProposal(void)
{
}


Boolean UNIX_ContainedProposal::getGroupComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_COMPONENT, getGroupComponent());
	return true;
}

CIMInstance UNIX_ContainedProposal::getGroupComponent() const
{
	return CIMInstance(CIMName("CIM_Component"));
}

Boolean UNIX_ContainedProposal::getPartComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_COMPONENT, getPartComponent());
	return true;
}

CIMInstance UNIX_ContainedProposal::getPartComponent() const
{
	return CIMInstance(CIMName("CIM_Component"));
}

Boolean UNIX_ContainedProposal::getSequenceNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEQUENCE_NUMBER, getSequenceNumber());
	return true;
}

Uint16 UNIX_ContainedProposal::getSequenceNumber() const
{
	return Uint16(0);
}



Boolean UNIX_ContainedProposal::initialize()
{
	groupIndex = -1;
	partIndex = 0;
	group_UNIX_IKEAction_Index = -1;
	endOf_UNIX_IKEAction_Group = false;
	group_UNIX_IKEAction_Component.initialize();
	group_UNIX_IPsecTunnelAction_Index = -1;
	endOf_UNIX_IPsecTunnelAction_Group = false;
	group_UNIX_IPsecTunnelAction_Component.initialize();
	group_UNIX_IPsecTransportAction_Index = -1;
	endOf_UNIX_IPsecTransportAction_Group = false;
	group_UNIX_IPsecTransportAction_Component.initialize();
	part_UNIX_IKEProposal_Index = -1;
	endOf_UNIX_IKEProposal_Part = false;
	part_UNIX_IPsecProposal_Index = -1;
	endOf_UNIX_IPsecProposal_Part = false;
	return true;
}

Boolean UNIX_ContainedProposal::load(int &pIndex)
{
	if (pIndex == 0 || (endOf_UNIX_IKEProposal_Part &&
			endOf_UNIX_IPsecProposal_Part))
	{
		if (groupIndex == 0)
		{
			group_UNIX_IKEAction_Index++;
			endOf_UNIX_IKEAction_Group = !group_UNIX_IKEAction_Component.load(group_UNIX_IKEAction_Index);
			if (endOf_UNIX_IKEAction_Group)
			{
				endOf_UNIX_IKEProposal_Part = false;
				part_UNIX_IKEProposal_Component.setScope(CIMName("UNIX_IKEAction"));
				part_UNIX_IKEProposal_Component.initialize();
				endOf_UNIX_IPsecProposal_Part = false;
				part_UNIX_IPsecProposal_Component.setScope(CIMName("UNIX_IKEAction"));
				part_UNIX_IPsecProposal_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 1)
		{
			group_UNIX_IPsecTunnelAction_Index++;
			endOf_UNIX_IPsecTunnelAction_Group = !group_UNIX_IPsecTunnelAction_Component.load(group_UNIX_IPsecTunnelAction_Index);
			if (endOf_UNIX_IPsecTunnelAction_Group)
			{
				endOf_UNIX_IKEProposal_Part = false;
				part_UNIX_IKEProposal_Component.setScope(CIMName("UNIX_IPsecTunnelAction"));
				part_UNIX_IKEProposal_Component.initialize();
				endOf_UNIX_IPsecProposal_Part = false;
				part_UNIX_IPsecProposal_Component.setScope(CIMName("UNIX_IPsecTunnelAction"));
				part_UNIX_IPsecProposal_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 2)
		{
			group_UNIX_IPsecTransportAction_Index++;
			endOf_UNIX_IPsecTransportAction_Group = !group_UNIX_IPsecTransportAction_Component.load(group_UNIX_IPsecTransportAction_Index);
			if (endOf_UNIX_IPsecTransportAction_Group)
			{
				endOf_UNIX_IKEProposal_Part = false;
				part_UNIX_IKEProposal_Component.setScope(CIMName("UNIX_IPsecTransportAction"));
				part_UNIX_IKEProposal_Component.initialize();
				endOf_UNIX_IPsecProposal_Part = false;
				part_UNIX_IPsecProposal_Component.setScope(CIMName("UNIX_IPsecTransportAction"));
				part_UNIX_IPsecProposal_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
	}
	if (partIndex == 0)
	{
		part_UNIX_IKEProposal_Index++;
	endOf_UNIX_IKEProposal_Part = !part_UNIX_IKEProposal_Component.load(part_UNIX_IKEProposal_Index);
	}
	if (partIndex == 1)
	{
		part_UNIX_IPsecProposal_Index++;
	endOf_UNIX_IPsecProposal_Part = !part_UNIX_IPsecProposal_Component.load(part_UNIX_IPsecProposal_Index);
	}
	if (partIndex == 0 && endOf_UNIX_IKEProposal_Part)
	{
		part_UNIX_IKEProposal_Component.finalize();
		partIndex++;
	}
	if (partIndex == 1 && endOf_UNIX_IPsecProposal_Part)
	{
		part_UNIX_IPsecProposal_Component.finalize();
		partIndex++;
	}

	if (endOf_UNIX_IKEAction_Group &&
		endOf_UNIX_IPsecTunnelAction_Group &&
		endOf_UNIX_IPsecTransportAction_Group &&
		endOf_UNIX_IKEProposal_Part &&
		endOf_UNIX_IPsecProposal_Part)		return false;
	return true;
}

Boolean UNIX_ContainedProposal::finalize()
{
	group_UNIX_IKEAction_Component.finalize();
	group_UNIX_IPsecTunnelAction_Component.finalize();
	group_UNIX_IPsecTransportAction_Component.finalize();
	part_UNIX_IKEProposal_Component.finalize();
	part_UNIX_IPsecProposal_Component.finalize();
	return true;
}

Boolean UNIX_ContainedProposal::find(Array<CIMKeyBinding> &kbArray)
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
