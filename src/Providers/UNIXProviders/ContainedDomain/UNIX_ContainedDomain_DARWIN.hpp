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


UNIX_ContainedDomain::UNIX_ContainedDomain(void)
{
}

UNIX_ContainedDomain::~UNIX_ContainedDomain(void)
{
}


Boolean UNIX_ContainedDomain::getGroupComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_COMPONENT, getGroupComponent());
	return true;
}

CIMInstance UNIX_ContainedDomain::getGroupComponent() const
{
	return CIMInstance(CIMName("CIM_Component"));
}

Boolean UNIX_ContainedDomain::getPartComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_COMPONENT, getPartComponent());
	return true;
}

CIMInstance UNIX_ContainedDomain::getPartComponent() const
{
	return CIMInstance(CIMName("CIM_Component"));
}



Boolean UNIX_ContainedDomain::initialize()
{
	groupIndex = -1;
	partIndex = 0;
	group_UNIX_ReusablePolicyContainer_Index = -1;
	endOf_UNIX_ReusablePolicyContainer_Group = false;
	group_UNIX_ReusablePolicyContainer_Component.initialize();
	group_UNIX_RoutingProtocolDomain_Index = -1;
	endOf_UNIX_RoutingProtocolDomain_Group = false;
	group_UNIX_RoutingProtocolDomain_Component.initialize();
	group_UNIX_OSPFArea_Index = -1;
	endOf_UNIX_OSPFArea_Group = false;
	group_UNIX_OSPFArea_Component.initialize();
	group_UNIX_Network_Index = -1;
	endOf_UNIX_Network_Group = false;
	group_UNIX_Network_Component.initialize();
	group_UNIX_PolicyRepository_Index = -1;
	endOf_UNIX_PolicyRepository_Group = false;
	group_UNIX_PolicyRepository_Component.initialize();
	group_UNIX_AutonomousSystem_Index = -1;
	endOf_UNIX_AutonomousSystem_Group = false;
	group_UNIX_AutonomousSystem_Component.initialize();
	part_UNIX_ReusablePolicyContainer_Index = -1;
	endOf_UNIX_ReusablePolicyContainer_Part = false;
	part_UNIX_RoutingProtocolDomain_Index = -1;
	endOf_UNIX_RoutingProtocolDomain_Part = false;
	part_UNIX_OSPFArea_Index = -1;
	endOf_UNIX_OSPFArea_Part = false;
	part_UNIX_Network_Index = -1;
	endOf_UNIX_Network_Part = false;
	part_UNIX_PolicyRepository_Index = -1;
	endOf_UNIX_PolicyRepository_Part = false;
	part_UNIX_AutonomousSystem_Index = -1;
	endOf_UNIX_AutonomousSystem_Part = false;
	return true;
}

Boolean UNIX_ContainedDomain::load(int &pIndex)
{
	if (pIndex == 0 || (endOf_UNIX_ReusablePolicyContainer_Part &&
			endOf_UNIX_RoutingProtocolDomain_Part &&
			endOf_UNIX_OSPFArea_Part &&
			endOf_UNIX_Network_Part &&
			endOf_UNIX_PolicyRepository_Part &&
			endOf_UNIX_AutonomousSystem_Part))
	{
		if (groupIndex == 0)
		{
			group_UNIX_ReusablePolicyContainer_Index++;
			endOf_UNIX_ReusablePolicyContainer_Group = !group_UNIX_ReusablePolicyContainer_Component.load(group_UNIX_ReusablePolicyContainer_Index);
			if (endOf_UNIX_ReusablePolicyContainer_Group)
			{
				endOf_UNIX_ReusablePolicyContainer_Part = false;
				part_UNIX_ReusablePolicyContainer_Component.setScope(CIMName("UNIX_ReusablePolicyContainer"));
				part_UNIX_ReusablePolicyContainer_Component.initialize();
				endOf_UNIX_RoutingProtocolDomain_Part = false;
				part_UNIX_RoutingProtocolDomain_Component.setScope(CIMName("UNIX_ReusablePolicyContainer"));
				part_UNIX_RoutingProtocolDomain_Component.initialize();
				endOf_UNIX_OSPFArea_Part = false;
				part_UNIX_OSPFArea_Component.setScope(CIMName("UNIX_ReusablePolicyContainer"));
				part_UNIX_OSPFArea_Component.initialize();
				endOf_UNIX_Network_Part = false;
				part_UNIX_Network_Component.setScope(CIMName("UNIX_ReusablePolicyContainer"));
				part_UNIX_Network_Component.initialize();
				endOf_UNIX_PolicyRepository_Part = false;
				part_UNIX_PolicyRepository_Component.setScope(CIMName("UNIX_ReusablePolicyContainer"));
				part_UNIX_PolicyRepository_Component.initialize();
				endOf_UNIX_AutonomousSystem_Part = false;
				part_UNIX_AutonomousSystem_Component.setScope(CIMName("UNIX_ReusablePolicyContainer"));
				part_UNIX_AutonomousSystem_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 1)
		{
			group_UNIX_RoutingProtocolDomain_Index++;
			endOf_UNIX_RoutingProtocolDomain_Group = !group_UNIX_RoutingProtocolDomain_Component.load(group_UNIX_RoutingProtocolDomain_Index);
			if (endOf_UNIX_RoutingProtocolDomain_Group)
			{
				endOf_UNIX_ReusablePolicyContainer_Part = false;
				part_UNIX_ReusablePolicyContainer_Component.setScope(CIMName("UNIX_RoutingProtocolDomain"));
				part_UNIX_ReusablePolicyContainer_Component.initialize();
				endOf_UNIX_RoutingProtocolDomain_Part = false;
				part_UNIX_RoutingProtocolDomain_Component.setScope(CIMName("UNIX_RoutingProtocolDomain"));
				part_UNIX_RoutingProtocolDomain_Component.initialize();
				endOf_UNIX_OSPFArea_Part = false;
				part_UNIX_OSPFArea_Component.setScope(CIMName("UNIX_RoutingProtocolDomain"));
				part_UNIX_OSPFArea_Component.initialize();
				endOf_UNIX_Network_Part = false;
				part_UNIX_Network_Component.setScope(CIMName("UNIX_RoutingProtocolDomain"));
				part_UNIX_Network_Component.initialize();
				endOf_UNIX_PolicyRepository_Part = false;
				part_UNIX_PolicyRepository_Component.setScope(CIMName("UNIX_RoutingProtocolDomain"));
				part_UNIX_PolicyRepository_Component.initialize();
				endOf_UNIX_AutonomousSystem_Part = false;
				part_UNIX_AutonomousSystem_Component.setScope(CIMName("UNIX_RoutingProtocolDomain"));
				part_UNIX_AutonomousSystem_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 2)
		{
			group_UNIX_OSPFArea_Index++;
			endOf_UNIX_OSPFArea_Group = !group_UNIX_OSPFArea_Component.load(group_UNIX_OSPFArea_Index);
			if (endOf_UNIX_OSPFArea_Group)
			{
				endOf_UNIX_ReusablePolicyContainer_Part = false;
				part_UNIX_ReusablePolicyContainer_Component.setScope(CIMName("UNIX_OSPFArea"));
				part_UNIX_ReusablePolicyContainer_Component.initialize();
				endOf_UNIX_RoutingProtocolDomain_Part = false;
				part_UNIX_RoutingProtocolDomain_Component.setScope(CIMName("UNIX_OSPFArea"));
				part_UNIX_RoutingProtocolDomain_Component.initialize();
				endOf_UNIX_OSPFArea_Part = false;
				part_UNIX_OSPFArea_Component.setScope(CIMName("UNIX_OSPFArea"));
				part_UNIX_OSPFArea_Component.initialize();
				endOf_UNIX_Network_Part = false;
				part_UNIX_Network_Component.setScope(CIMName("UNIX_OSPFArea"));
				part_UNIX_Network_Component.initialize();
				endOf_UNIX_PolicyRepository_Part = false;
				part_UNIX_PolicyRepository_Component.setScope(CIMName("UNIX_OSPFArea"));
				part_UNIX_PolicyRepository_Component.initialize();
				endOf_UNIX_AutonomousSystem_Part = false;
				part_UNIX_AutonomousSystem_Component.setScope(CIMName("UNIX_OSPFArea"));
				part_UNIX_AutonomousSystem_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 3)
		{
			group_UNIX_Network_Index++;
			endOf_UNIX_Network_Group = !group_UNIX_Network_Component.load(group_UNIX_Network_Index);
			if (endOf_UNIX_Network_Group)
			{
				endOf_UNIX_ReusablePolicyContainer_Part = false;
				part_UNIX_ReusablePolicyContainer_Component.setScope(CIMName("UNIX_Network"));
				part_UNIX_ReusablePolicyContainer_Component.initialize();
				endOf_UNIX_RoutingProtocolDomain_Part = false;
				part_UNIX_RoutingProtocolDomain_Component.setScope(CIMName("UNIX_Network"));
				part_UNIX_RoutingProtocolDomain_Component.initialize();
				endOf_UNIX_OSPFArea_Part = false;
				part_UNIX_OSPFArea_Component.setScope(CIMName("UNIX_Network"));
				part_UNIX_OSPFArea_Component.initialize();
				endOf_UNIX_Network_Part = false;
				part_UNIX_Network_Component.setScope(CIMName("UNIX_Network"));
				part_UNIX_Network_Component.initialize();
				endOf_UNIX_PolicyRepository_Part = false;
				part_UNIX_PolicyRepository_Component.setScope(CIMName("UNIX_Network"));
				part_UNIX_PolicyRepository_Component.initialize();
				endOf_UNIX_AutonomousSystem_Part = false;
				part_UNIX_AutonomousSystem_Component.setScope(CIMName("UNIX_Network"));
				part_UNIX_AutonomousSystem_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 4)
		{
			group_UNIX_PolicyRepository_Index++;
			endOf_UNIX_PolicyRepository_Group = !group_UNIX_PolicyRepository_Component.load(group_UNIX_PolicyRepository_Index);
			if (endOf_UNIX_PolicyRepository_Group)
			{
				endOf_UNIX_ReusablePolicyContainer_Part = false;
				part_UNIX_ReusablePolicyContainer_Component.setScope(CIMName("UNIX_PolicyRepository"));
				part_UNIX_ReusablePolicyContainer_Component.initialize();
				endOf_UNIX_RoutingProtocolDomain_Part = false;
				part_UNIX_RoutingProtocolDomain_Component.setScope(CIMName("UNIX_PolicyRepository"));
				part_UNIX_RoutingProtocolDomain_Component.initialize();
				endOf_UNIX_OSPFArea_Part = false;
				part_UNIX_OSPFArea_Component.setScope(CIMName("UNIX_PolicyRepository"));
				part_UNIX_OSPFArea_Component.initialize();
				endOf_UNIX_Network_Part = false;
				part_UNIX_Network_Component.setScope(CIMName("UNIX_PolicyRepository"));
				part_UNIX_Network_Component.initialize();
				endOf_UNIX_PolicyRepository_Part = false;
				part_UNIX_PolicyRepository_Component.setScope(CIMName("UNIX_PolicyRepository"));
				part_UNIX_PolicyRepository_Component.initialize();
				endOf_UNIX_AutonomousSystem_Part = false;
				part_UNIX_AutonomousSystem_Component.setScope(CIMName("UNIX_PolicyRepository"));
				part_UNIX_AutonomousSystem_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 5)
		{
			group_UNIX_AutonomousSystem_Index++;
			endOf_UNIX_AutonomousSystem_Group = !group_UNIX_AutonomousSystem_Component.load(group_UNIX_AutonomousSystem_Index);
			if (endOf_UNIX_AutonomousSystem_Group)
			{
				endOf_UNIX_ReusablePolicyContainer_Part = false;
				part_UNIX_ReusablePolicyContainer_Component.setScope(CIMName("UNIX_AutonomousSystem"));
				part_UNIX_ReusablePolicyContainer_Component.initialize();
				endOf_UNIX_RoutingProtocolDomain_Part = false;
				part_UNIX_RoutingProtocolDomain_Component.setScope(CIMName("UNIX_AutonomousSystem"));
				part_UNIX_RoutingProtocolDomain_Component.initialize();
				endOf_UNIX_OSPFArea_Part = false;
				part_UNIX_OSPFArea_Component.setScope(CIMName("UNIX_AutonomousSystem"));
				part_UNIX_OSPFArea_Component.initialize();
				endOf_UNIX_Network_Part = false;
				part_UNIX_Network_Component.setScope(CIMName("UNIX_AutonomousSystem"));
				part_UNIX_Network_Component.initialize();
				endOf_UNIX_PolicyRepository_Part = false;
				part_UNIX_PolicyRepository_Component.setScope(CIMName("UNIX_AutonomousSystem"));
				part_UNIX_PolicyRepository_Component.initialize();
				endOf_UNIX_AutonomousSystem_Part = false;
				part_UNIX_AutonomousSystem_Component.setScope(CIMName("UNIX_AutonomousSystem"));
				part_UNIX_AutonomousSystem_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
	}
	if (partIndex == 0)
	{
		part_UNIX_ReusablePolicyContainer_Index++;
	endOf_UNIX_ReusablePolicyContainer_Part = !part_UNIX_ReusablePolicyContainer_Component.load(part_UNIX_ReusablePolicyContainer_Index);
	}
	if (partIndex == 1)
	{
		part_UNIX_RoutingProtocolDomain_Index++;
	endOf_UNIX_RoutingProtocolDomain_Part = !part_UNIX_RoutingProtocolDomain_Component.load(part_UNIX_RoutingProtocolDomain_Index);
	}
	if (partIndex == 2)
	{
		part_UNIX_OSPFArea_Index++;
	endOf_UNIX_OSPFArea_Part = !part_UNIX_OSPFArea_Component.load(part_UNIX_OSPFArea_Index);
	}
	if (partIndex == 3)
	{
		part_UNIX_Network_Index++;
	endOf_UNIX_Network_Part = !part_UNIX_Network_Component.load(part_UNIX_Network_Index);
	}
	if (partIndex == 4)
	{
		part_UNIX_PolicyRepository_Index++;
	endOf_UNIX_PolicyRepository_Part = !part_UNIX_PolicyRepository_Component.load(part_UNIX_PolicyRepository_Index);
	}
	if (partIndex == 5)
	{
		part_UNIX_AutonomousSystem_Index++;
	endOf_UNIX_AutonomousSystem_Part = !part_UNIX_AutonomousSystem_Component.load(part_UNIX_AutonomousSystem_Index);
	}
	if (partIndex == 0 && endOf_UNIX_ReusablePolicyContainer_Part)
	{
		part_UNIX_ReusablePolicyContainer_Component.finalize();
		partIndex++;
	}
	if (partIndex == 1 && endOf_UNIX_RoutingProtocolDomain_Part)
	{
		part_UNIX_RoutingProtocolDomain_Component.finalize();
		partIndex++;
	}
	if (partIndex == 2 && endOf_UNIX_OSPFArea_Part)
	{
		part_UNIX_OSPFArea_Component.finalize();
		partIndex++;
	}
	if (partIndex == 3 && endOf_UNIX_Network_Part)
	{
		part_UNIX_Network_Component.finalize();
		partIndex++;
	}
	if (partIndex == 4 && endOf_UNIX_PolicyRepository_Part)
	{
		part_UNIX_PolicyRepository_Component.finalize();
		partIndex++;
	}
	if (partIndex == 5 && endOf_UNIX_AutonomousSystem_Part)
	{
		part_UNIX_AutonomousSystem_Component.finalize();
		partIndex++;
	}

	if (endOf_UNIX_ReusablePolicyContainer_Group &&
		endOf_UNIX_RoutingProtocolDomain_Group &&
		endOf_UNIX_OSPFArea_Group &&
		endOf_UNIX_Network_Group &&
		endOf_UNIX_PolicyRepository_Group &&
		endOf_UNIX_AutonomousSystem_Group &&
		endOf_UNIX_ReusablePolicyContainer_Part &&
		endOf_UNIX_RoutingProtocolDomain_Part &&
		endOf_UNIX_OSPFArea_Part &&
		endOf_UNIX_Network_Part &&
		endOf_UNIX_PolicyRepository_Part &&
		endOf_UNIX_AutonomousSystem_Part)		return false;
	return true;
}

Boolean UNIX_ContainedDomain::finalize()
{
	group_UNIX_ReusablePolicyContainer_Component.finalize();
	group_UNIX_RoutingProtocolDomain_Component.finalize();
	group_UNIX_OSPFArea_Component.finalize();
	group_UNIX_Network_Component.finalize();
	group_UNIX_PolicyRepository_Component.finalize();
	group_UNIX_AutonomousSystem_Component.finalize();
	part_UNIX_ReusablePolicyContainer_Component.finalize();
	part_UNIX_RoutingProtocolDomain_Component.finalize();
	part_UNIX_OSPFArea_Component.finalize();
	part_UNIX_Network_Component.finalize();
	part_UNIX_PolicyRepository_Component.finalize();
	part_UNIX_AutonomousSystem_Component.finalize();
	return true;
}

Boolean UNIX_ContainedDomain::find(Array<CIMKeyBinding> &kbArray)
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
