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


UNIX_PackageInChassis::UNIX_PackageInChassis(void)
{
}

UNIX_PackageInChassis::~UNIX_PackageInChassis(void)
{
}


Boolean UNIX_PackageInChassis::getGroupComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_COMPONENT, getGroupComponent());
	return true;
}

CIMInstance UNIX_PackageInChassis::getGroupComponent() const
{
	return CIMInstance(CIMName("CIM_Component"));
}

Boolean UNIX_PackageInChassis::getPartComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_COMPONENT, getPartComponent());
	return true;
}

CIMInstance UNIX_PackageInChassis::getPartComponent() const
{
	return CIMInstance(CIMName("CIM_Component"));
}

Boolean UNIX_PackageInChassis::getLocationWithinContainer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_WITHIN_CONTAINER, getLocationWithinContainer());
	return true;
}

String UNIX_PackageInChassis::getLocationWithinContainer() const
{
	return String ("");
}



Boolean UNIX_PackageInChassis::initialize()
{
	groupIndex = -1;
	partIndex = 0;
	group_UNIX_Chassis_Index = -1;
	endOf_UNIX_Chassis_Group = false;
	group_UNIX_Chassis_Component.initialize();
	part_UNIX_Card_Index = -1;
	endOf_UNIX_Card_Part = false;
	part_UNIX_SystemBusCard_Index = -1;
	endOf_UNIX_SystemBusCard_Part = false;
	part_UNIX_Rack_Index = -1;
	endOf_UNIX_Rack_Part = false;
	part_UNIX_Chassis_Index = -1;
	endOf_UNIX_Chassis_Part = false;
	part_UNIX_PackageLocation_Index = -1;
	endOf_UNIX_PackageLocation_Part = false;
	part_UNIX_StorageMediaLocation_Index = -1;
	endOf_UNIX_StorageMediaLocation_Part = false;
	part_UNIX_Magazine_Index = -1;
	endOf_UNIX_Magazine_Part = false;
	return true;
}

Boolean UNIX_PackageInChassis::load(int &pIndex)
{
	if (pIndex == 0 || (endOf_UNIX_Card_Part &&
			endOf_UNIX_SystemBusCard_Part &&
			endOf_UNIX_Rack_Part &&
			endOf_UNIX_Chassis_Part &&
			endOf_UNIX_PackageLocation_Part &&
			endOf_UNIX_StorageMediaLocation_Part &&
			endOf_UNIX_Magazine_Part))
	{
		if (groupIndex == 0)
		{
			group_UNIX_Chassis_Index++;
			endOf_UNIX_Chassis_Group = !group_UNIX_Chassis_Component.load(group_UNIX_Chassis_Index);
			if (endOf_UNIX_Chassis_Group)
			{
				endOf_UNIX_Card_Part = false;
				part_UNIX_Card_Component.setScope(CIMName("UNIX_Chassis"));
				part_UNIX_Card_Component.initialize();
				endOf_UNIX_SystemBusCard_Part = false;
				part_UNIX_SystemBusCard_Component.setScope(CIMName("UNIX_Chassis"));
				part_UNIX_SystemBusCard_Component.initialize();
				endOf_UNIX_Rack_Part = false;
				part_UNIX_Rack_Component.setScope(CIMName("UNIX_Chassis"));
				part_UNIX_Rack_Component.initialize();
				endOf_UNIX_Chassis_Part = false;
				part_UNIX_Chassis_Component.setScope(CIMName("UNIX_Chassis"));
				part_UNIX_Chassis_Component.initialize();
				endOf_UNIX_PackageLocation_Part = false;
				part_UNIX_PackageLocation_Component.setScope(CIMName("UNIX_Chassis"));
				part_UNIX_PackageLocation_Component.initialize();
				endOf_UNIX_StorageMediaLocation_Part = false;
				part_UNIX_StorageMediaLocation_Component.setScope(CIMName("UNIX_Chassis"));
				part_UNIX_StorageMediaLocation_Component.initialize();
				endOf_UNIX_Magazine_Part = false;
				part_UNIX_Magazine_Component.setScope(CIMName("UNIX_Chassis"));
				part_UNIX_Magazine_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
	}
	if (partIndex == 0)
	{
		part_UNIX_Card_Index++;
	endOf_UNIX_Card_Part = !part_UNIX_Card_Component.load(part_UNIX_Card_Index);
	}
	if (partIndex == 1)
	{
		part_UNIX_SystemBusCard_Index++;
	endOf_UNIX_SystemBusCard_Part = !part_UNIX_SystemBusCard_Component.load(part_UNIX_SystemBusCard_Index);
	}
	if (partIndex == 2)
	{
		part_UNIX_Rack_Index++;
	endOf_UNIX_Rack_Part = !part_UNIX_Rack_Component.load(part_UNIX_Rack_Index);
	}
	if (partIndex == 3)
	{
		part_UNIX_Chassis_Index++;
	endOf_UNIX_Chassis_Part = !part_UNIX_Chassis_Component.load(part_UNIX_Chassis_Index);
	}
	if (partIndex == 4)
	{
		part_UNIX_PackageLocation_Index++;
	endOf_UNIX_PackageLocation_Part = !part_UNIX_PackageLocation_Component.load(part_UNIX_PackageLocation_Index);
	}
	if (partIndex == 5)
	{
		part_UNIX_StorageMediaLocation_Index++;
	endOf_UNIX_StorageMediaLocation_Part = !part_UNIX_StorageMediaLocation_Component.load(part_UNIX_StorageMediaLocation_Index);
	}
	if (partIndex == 6)
	{
		part_UNIX_Magazine_Index++;
	endOf_UNIX_Magazine_Part = !part_UNIX_Magazine_Component.load(part_UNIX_Magazine_Index);
	}
	if (partIndex == 0 && endOf_UNIX_Card_Part)
	{
		part_UNIX_Card_Component.finalize();
		partIndex++;
	}
	if (partIndex == 1 && endOf_UNIX_SystemBusCard_Part)
	{
		part_UNIX_SystemBusCard_Component.finalize();
		partIndex++;
	}
	if (partIndex == 2 && endOf_UNIX_Rack_Part)
	{
		part_UNIX_Rack_Component.finalize();
		partIndex++;
	}
	if (partIndex == 3 && endOf_UNIX_Chassis_Part)
	{
		part_UNIX_Chassis_Component.finalize();
		partIndex++;
	}
	if (partIndex == 4 && endOf_UNIX_PackageLocation_Part)
	{
		part_UNIX_PackageLocation_Component.finalize();
		partIndex++;
	}
	if (partIndex == 5 && endOf_UNIX_StorageMediaLocation_Part)
	{
		part_UNIX_StorageMediaLocation_Component.finalize();
		partIndex++;
	}
	if (partIndex == 6 && endOf_UNIX_Magazine_Part)
	{
		part_UNIX_Magazine_Component.finalize();
		partIndex++;
	}

	if (endOf_UNIX_Chassis_Group &&
		endOf_UNIX_Card_Part &&
		endOf_UNIX_SystemBusCard_Part &&
		endOf_UNIX_Rack_Part &&
		endOf_UNIX_Chassis_Part &&
		endOf_UNIX_PackageLocation_Part &&
		endOf_UNIX_StorageMediaLocation_Part &&
		endOf_UNIX_Magazine_Part)		return false;
	return true;
}

Boolean UNIX_PackageInChassis::finalize()
{
	group_UNIX_Chassis_Component.finalize();
	part_UNIX_Card_Component.finalize();
	part_UNIX_SystemBusCard_Component.finalize();
	part_UNIX_Rack_Component.finalize();
	part_UNIX_Chassis_Component.finalize();
	part_UNIX_PackageLocation_Component.finalize();
	part_UNIX_StorageMediaLocation_Component.finalize();
	part_UNIX_Magazine_Component.finalize();
	return true;
}

Boolean UNIX_PackageInChassis::find(Array<CIMKeyBinding> &kbArray)
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
