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


UNIX_SystemBIOS::UNIX_SystemBIOS(void)
{
}

UNIX_SystemBIOS::~UNIX_SystemBIOS(void)
{
}


Boolean UNIX_SystemBIOS::getGroupComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_COMPONENT, getGroupComponent());
	return true;
}

CIMInstance UNIX_SystemBIOS::getGroupComponent() const
{
	CIMInstance instance;
	if (groupIndex == 0)
	{
		instance = group_UNIX_VirtualComputerSystem_ComponentProvider.constructInstance(
			CIMName("UNIX_VirtualComputerSystem"),
			CIMNamespaceName("root/cimv2"),
			group_UNIX_VirtualComputerSystem_Component
		);
	}
	else if (groupIndex == 1)
	{
		instance = group_UNIX_ComputerSystem_ComponentProvider.constructInstance(
			CIMName("UNIX_ComputerSystem"),
			CIMNamespaceName("root/cimv2"),
			group_UNIX_ComputerSystem_Component
		);
	}
	else if (groupIndex == 2)
	{
		instance = group_UNIX_Cluster_ComponentProvider.constructInstance(
			CIMName("UNIX_Cluster"),
			CIMNamespaceName("root/cimv2"),
			group_UNIX_Cluster_Component
		);
	}
	return instance;
}

Boolean UNIX_SystemBIOS::getPartComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_COMPONENT, getPartComponent());
	return true;
}

CIMInstance UNIX_SystemBIOS::getPartComponent() const
{
	CIMInstance instance = part_UNIX_BIOSElement_ComponentProvider.constructInstance(
		CIMName("UNIX_BIOSElement"),
		CIMNamespaceName("root/cimv2"),
		part_UNIX_BIOSElement_Component
	);
		
	return instance;
}



Boolean UNIX_SystemBIOS::initialize()
{
	groupIndex = 0;
	partIndex = 0;
	group_UNIX_VirtualComputerSystem_Index = -1;
	endOf_UNIX_VirtualComputerSystem_Group = !group_UNIX_VirtualComputerSystem_Component.initialize();
	group_UNIX_ComputerSystem_Index = -1;
	endOf_UNIX_ComputerSystem_Group = !group_UNIX_ComputerSystem_Component.initialize();
	group_UNIX_Cluster_Index = -1;
	endOf_UNIX_Cluster_Group = !group_UNIX_Cluster_Component.initialize();
	part_UNIX_BIOSElement_Component.setScope(CIMName("UNIX_VirtualComputerSystem"));
	part_UNIX_BIOSElement_Index = -1;
	endOf_UNIX_BIOSElement_Part = !part_UNIX_BIOSElement_Component.initialize();
	return true;
}

Boolean UNIX_SystemBIOS::load(int &pIndex)
{
	if (pIndex == 0 || (endOf_UNIX_BIOSElement_Part))
	{
		if (groupIndex == 0)
		{
			group_UNIX_VirtualComputerSystem_Index++;
			endOf_UNIX_VirtualComputerSystem_Group = !group_UNIX_VirtualComputerSystem_Component.load(group_UNIX_VirtualComputerSystem_Index);
			if (endOf_UNIX_VirtualComputerSystem_Group)
			{
				endOf_UNIX_BIOSElement_Part = false;
				part_UNIX_BIOSElement_Component.finalize();
				part_UNIX_BIOSElement_Component.setScope(CIMName("UNIX_ComputerSystem"));
				part_UNIX_BIOSElement_Component.initialize();
				partIndex = 0;
				groupIndex++;
				pIndex++;
				int tmp = 0;
				return load(tmp);
			}
		}
		else if (groupIndex == 1)
		{
			group_UNIX_ComputerSystem_Index++;
			endOf_UNIX_ComputerSystem_Group = !group_UNIX_ComputerSystem_Component.load(group_UNIX_ComputerSystem_Index);
			if (endOf_UNIX_ComputerSystem_Group)
			{
				endOf_UNIX_BIOSElement_Part = false;
				part_UNIX_BIOSElement_Component.finalize();
				part_UNIX_BIOSElement_Component.setScope(CIMName("UNIX_Cluster"));
				part_UNIX_BIOSElement_Component.initialize();
				partIndex = 0;
				groupIndex++;
				pIndex++;
				int tmp = 0;
				return load(tmp);
			}
		}
		else if (groupIndex == 2)
		{
			group_UNIX_Cluster_Index++;
			endOf_UNIX_Cluster_Group = !group_UNIX_Cluster_Component.load(group_UNIX_Cluster_Index);
			if (endOf_UNIX_Cluster_Group)
			{
				return false;
			}
		}
	}
		
	if (partIndex == 0 && !endOf_UNIX_BIOSElement_Part)
	{
		part_UNIX_BIOSElement_Index++;
		endOf_UNIX_BIOSElement_Part = !part_UNIX_BIOSElement_Component.load(part_UNIX_BIOSElement_Index);
	}
	if (partIndex == 0 && endOf_UNIX_BIOSElement_Part)
	{
		part_UNIX_BIOSElement_Component.finalize();
		partIndex++;
		pIndex++;
		return load(pIndex);
	}

	if (endOf_UNIX_VirtualComputerSystem_Group &&
		endOf_UNIX_ComputerSystem_Group &&
		endOf_UNIX_Cluster_Group &&
		endOf_UNIX_BIOSElement_Part)		return false;
	return true;
}

Boolean UNIX_SystemBIOS::finalize()
{
	group_UNIX_VirtualComputerSystem_Component.finalize();
	group_UNIX_ComputerSystem_Component.finalize();
	group_UNIX_Cluster_Component.finalize();
	part_UNIX_BIOSElement_Component.finalize();
	return true;
}

Boolean UNIX_SystemBIOS::find(Array<CIMKeyBinding> &kbArray)
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
