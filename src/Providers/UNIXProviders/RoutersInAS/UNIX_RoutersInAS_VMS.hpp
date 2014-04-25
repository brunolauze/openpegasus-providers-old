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


UNIX_RoutersInAS::UNIX_RoutersInAS(void)
{
}

UNIX_RoutersInAS::~UNIX_RoutersInAS(void)
{
}


Boolean UNIX_RoutersInAS::getGroupComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_COMPONENT, getGroupComponent());
	return true;
}

CIMInstance UNIX_RoutersInAS::getGroupComponent() const
{
	return CIMInstance(CIMName("CIM_Component"));
}

Boolean UNIX_RoutersInAS::getPartComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_COMPONENT, getPartComponent());
	return true;
}

CIMInstance UNIX_RoutersInAS::getPartComponent() const
{
	return CIMInstance(CIMName("CIM_Component"));
}

Boolean UNIX_RoutersInAS::getBGPSupportedAttributes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_B_G_P_SUPPORTED_ATTRIBUTES, getBGPSupportedAttributes());
	return true;
}

Array<String> UNIX_RoutersInAS::getBGPSupportedAttributes() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_RoutersInAS::getAddCommunityValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADD_COMMUNITY_VALUE, getAddCommunityValue());
	return true;
}

Boolean UNIX_RoutersInAS::getAddCommunityValue() const
{
	return Boolean(false);
}

Boolean UNIX_RoutersInAS::getRole(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROLE, getRole());
	return true;
}

Uint16 UNIX_RoutersInAS::getRole() const
{
	return Uint16(0);
}

Boolean UNIX_RoutersInAS::getOtherRoleDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ROLE_DESCRIPTION, getOtherRoleDescription());
	return true;
}

String UNIX_RoutersInAS::getOtherRoleDescription() const
{
	return String ("");
}



Boolean UNIX_RoutersInAS::initialize()
{
	groupIndex = -1;
	partIndex = 0;
	group_UNIX_AutonomousSystem_Index = -1;
	endOf_UNIX_AutonomousSystem_Group = false;
	group_UNIX_AutonomousSystem_Component.initialize();
	part_UNIX_VirtualComputerSystem_Index = -1;
	endOf_UNIX_VirtualComputerSystem_Part = false;
	part_UNIX_ComputerSystem_Index = -1;
	endOf_UNIX_ComputerSystem_Part = false;
	part_UNIX_Cluster_Index = -1;
	endOf_UNIX_Cluster_Part = false;
	return true;
}

Boolean UNIX_RoutersInAS::load(int &pIndex)
{
	if (pIndex == 0 || (endOf_UNIX_VirtualComputerSystem_Part &&
			endOf_UNIX_ComputerSystem_Part &&
			endOf_UNIX_Cluster_Part))
	{
		if (groupIndex == 0)
		{
			group_UNIX_AutonomousSystem_Index++;
			endOf_UNIX_AutonomousSystem_Group = !group_UNIX_AutonomousSystem_Component.load(group_UNIX_AutonomousSystem_Index);
			if (endOf_UNIX_AutonomousSystem_Group)
			{
				endOf_UNIX_VirtualComputerSystem_Part = false;
				part_UNIX_VirtualComputerSystem_Component.setScope(CIMName("UNIX_AutonomousSystem"));
				part_UNIX_VirtualComputerSystem_Component.initialize();
				endOf_UNIX_ComputerSystem_Part = false;
				part_UNIX_ComputerSystem_Component.setScope(CIMName("UNIX_AutonomousSystem"));
				part_UNIX_ComputerSystem_Component.initialize();
				endOf_UNIX_Cluster_Part = false;
				part_UNIX_Cluster_Component.setScope(CIMName("UNIX_AutonomousSystem"));
				part_UNIX_Cluster_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
	}
	if (partIndex == 0)
	{
		part_UNIX_VirtualComputerSystem_Index++;
	endOf_UNIX_VirtualComputerSystem_Part = !part_UNIX_VirtualComputerSystem_Component.load(part_UNIX_VirtualComputerSystem_Index);
	}
	if (partIndex == 1)
	{
		part_UNIX_ComputerSystem_Index++;
	endOf_UNIX_ComputerSystem_Part = !part_UNIX_ComputerSystem_Component.load(part_UNIX_ComputerSystem_Index);
	}
	if (partIndex == 2)
	{
		part_UNIX_Cluster_Index++;
	endOf_UNIX_Cluster_Part = !part_UNIX_Cluster_Component.load(part_UNIX_Cluster_Index);
	}
	if (partIndex == 0 && endOf_UNIX_VirtualComputerSystem_Part)
	{
		part_UNIX_VirtualComputerSystem_Component.finalize();
		partIndex++;
	}
	if (partIndex == 1 && endOf_UNIX_ComputerSystem_Part)
	{
		part_UNIX_ComputerSystem_Component.finalize();
		partIndex++;
	}
	if (partIndex == 2 && endOf_UNIX_Cluster_Part)
	{
		part_UNIX_Cluster_Component.finalize();
		partIndex++;
	}

	if (endOf_UNIX_AutonomousSystem_Group &&
		endOf_UNIX_VirtualComputerSystem_Part &&
		endOf_UNIX_ComputerSystem_Part &&
		endOf_UNIX_Cluster_Part)		return false;
	return true;
}

Boolean UNIX_RoutersInAS::finalize()
{
	group_UNIX_AutonomousSystem_Component.finalize();
	part_UNIX_VirtualComputerSystem_Component.finalize();
	part_UNIX_ComputerSystem_Component.finalize();
	part_UNIX_Cluster_Component.finalize();
	return true;
}

Boolean UNIX_RoutersInAS::find(Array<CIMKeyBinding> &kbArray)
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
