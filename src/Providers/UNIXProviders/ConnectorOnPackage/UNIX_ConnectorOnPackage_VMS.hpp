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


UNIX_ConnectorOnPackage::UNIX_ConnectorOnPackage(void)
{
}

UNIX_ConnectorOnPackage::~UNIX_ConnectorOnPackage(void)
{
}


Boolean UNIX_ConnectorOnPackage::getGroupComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_COMPONENT, getGroupComponent());
	return true;
}

CIMInstance UNIX_ConnectorOnPackage::getGroupComponent() const
{
	return CIMInstance(CIMName("CIM_Component"));
}

Boolean UNIX_ConnectorOnPackage::getPartComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_COMPONENT, getPartComponent());
	return true;
}

CIMInstance UNIX_ConnectorOnPackage::getPartComponent() const
{
	return CIMInstance(CIMName("CIM_Component"));
}

Boolean UNIX_ConnectorOnPackage::getLocationWithinContainer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_WITHIN_CONTAINER, getLocationWithinContainer());
	return true;
}

String UNIX_ConnectorOnPackage::getLocationWithinContainer() const
{
	return String ("");
}



Boolean UNIX_ConnectorOnPackage::initialize()
{
	groupIndex = -1;
	partIndex = 0;
	group_UNIX_Card_Index = -1;
	endOf_UNIX_Card_Group = false;
	group_UNIX_Card_Component.initialize();
	group_UNIX_SystemBusCard_Index = -1;
	endOf_UNIX_SystemBusCard_Group = false;
	group_UNIX_SystemBusCard_Component.initialize();
	group_UNIX_Rack_Index = -1;
	endOf_UNIX_Rack_Group = false;
	group_UNIX_Rack_Component.initialize();
	group_UNIX_Chassis_Index = -1;
	endOf_UNIX_Chassis_Group = false;
	group_UNIX_Chassis_Component.initialize();
	group_UNIX_PackageLocation_Index = -1;
	endOf_UNIX_PackageLocation_Group = false;
	group_UNIX_PackageLocation_Component.initialize();
	group_UNIX_StorageMediaLocation_Index = -1;
	endOf_UNIX_StorageMediaLocation_Group = false;
	group_UNIX_StorageMediaLocation_Component.initialize();
	group_UNIX_Magazine_Index = -1;
	endOf_UNIX_Magazine_Group = false;
	group_UNIX_Magazine_Component.initialize();
	part_UNIX_PhysicalConnector_Index = -1;
	endOf_UNIX_PhysicalConnector_Part = false;
	return true;
}

Boolean UNIX_ConnectorOnPackage::load(int &pIndex)
{
	if (pIndex == 0 || (endOf_UNIX_PhysicalConnector_Part))
	{
		if (groupIndex == 0)
		{
			group_UNIX_Card_Index++;
			endOf_UNIX_Card_Group = !group_UNIX_Card_Component.load(group_UNIX_Card_Index);
			if (endOf_UNIX_Card_Group)
			{
				endOf_UNIX_PhysicalConnector_Part = false;
				part_UNIX_PhysicalConnector_Component.setScope(CIMName("UNIX_Card"));
				part_UNIX_PhysicalConnector_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 1)
		{
			group_UNIX_SystemBusCard_Index++;
			endOf_UNIX_SystemBusCard_Group = !group_UNIX_SystemBusCard_Component.load(group_UNIX_SystemBusCard_Index);
			if (endOf_UNIX_SystemBusCard_Group)
			{
				endOf_UNIX_PhysicalConnector_Part = false;
				part_UNIX_PhysicalConnector_Component.setScope(CIMName("UNIX_SystemBusCard"));
				part_UNIX_PhysicalConnector_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 2)
		{
			group_UNIX_Rack_Index++;
			endOf_UNIX_Rack_Group = !group_UNIX_Rack_Component.load(group_UNIX_Rack_Index);
			if (endOf_UNIX_Rack_Group)
			{
				endOf_UNIX_PhysicalConnector_Part = false;
				part_UNIX_PhysicalConnector_Component.setScope(CIMName("UNIX_Rack"));
				part_UNIX_PhysicalConnector_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 3)
		{
			group_UNIX_Chassis_Index++;
			endOf_UNIX_Chassis_Group = !group_UNIX_Chassis_Component.load(group_UNIX_Chassis_Index);
			if (endOf_UNIX_Chassis_Group)
			{
				endOf_UNIX_PhysicalConnector_Part = false;
				part_UNIX_PhysicalConnector_Component.setScope(CIMName("UNIX_Chassis"));
				part_UNIX_PhysicalConnector_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 4)
		{
			group_UNIX_PackageLocation_Index++;
			endOf_UNIX_PackageLocation_Group = !group_UNIX_PackageLocation_Component.load(group_UNIX_PackageLocation_Index);
			if (endOf_UNIX_PackageLocation_Group)
			{
				endOf_UNIX_PhysicalConnector_Part = false;
				part_UNIX_PhysicalConnector_Component.setScope(CIMName("UNIX_PackageLocation"));
				part_UNIX_PhysicalConnector_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 5)
		{
			group_UNIX_StorageMediaLocation_Index++;
			endOf_UNIX_StorageMediaLocation_Group = !group_UNIX_StorageMediaLocation_Component.load(group_UNIX_StorageMediaLocation_Index);
			if (endOf_UNIX_StorageMediaLocation_Group)
			{
				endOf_UNIX_PhysicalConnector_Part = false;
				part_UNIX_PhysicalConnector_Component.setScope(CIMName("UNIX_StorageMediaLocation"));
				part_UNIX_PhysicalConnector_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 6)
		{
			group_UNIX_Magazine_Index++;
			endOf_UNIX_Magazine_Group = !group_UNIX_Magazine_Component.load(group_UNIX_Magazine_Index);
			if (endOf_UNIX_Magazine_Group)
			{
				endOf_UNIX_PhysicalConnector_Part = false;
				part_UNIX_PhysicalConnector_Component.setScope(CIMName("UNIX_Magazine"));
				part_UNIX_PhysicalConnector_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
	}
	if (partIndex == 0)
	{
		part_UNIX_PhysicalConnector_Index++;
	endOf_UNIX_PhysicalConnector_Part = !part_UNIX_PhysicalConnector_Component.load(part_UNIX_PhysicalConnector_Index);
	}
	if (partIndex == 0 && endOf_UNIX_PhysicalConnector_Part)
	{
		part_UNIX_PhysicalConnector_Component.finalize();
		partIndex++;
	}

	if (endOf_UNIX_Card_Group &&
		endOf_UNIX_SystemBusCard_Group &&
		endOf_UNIX_Rack_Group &&
		endOf_UNIX_Chassis_Group &&
		endOf_UNIX_PackageLocation_Group &&
		endOf_UNIX_StorageMediaLocation_Group &&
		endOf_UNIX_Magazine_Group &&
		endOf_UNIX_PhysicalConnector_Part)		return false;
	return true;
}

Boolean UNIX_ConnectorOnPackage::finalize()
{
	group_UNIX_Card_Component.finalize();
	group_UNIX_SystemBusCard_Component.finalize();
	group_UNIX_Rack_Component.finalize();
	group_UNIX_Chassis_Component.finalize();
	group_UNIX_PackageLocation_Component.finalize();
	group_UNIX_StorageMediaLocation_Component.finalize();
	group_UNIX_Magazine_Component.finalize();
	part_UNIX_PhysicalConnector_Component.finalize();
	return true;
}

Boolean UNIX_ConnectorOnPackage::find(Array<CIMKeyBinding> &kbArray)
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
