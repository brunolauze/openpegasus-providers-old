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


UNIX_ChassisInRack::UNIX_ChassisInRack(void)
{
}

UNIX_ChassisInRack::~UNIX_ChassisInRack(void)
{
}


Boolean UNIX_ChassisInRack::getGroupComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_COMPONENT, getGroupComponent());
	return true;
}

CIMInstance UNIX_ChassisInRack::getGroupComponent() const
{
	return CIMInstance(CIMName("CIM_Component"));
}

Boolean UNIX_ChassisInRack::getPartComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_COMPONENT, getPartComponent());
	return true;
}

CIMInstance UNIX_ChassisInRack::getPartComponent() const
{
	return CIMInstance(CIMName("CIM_Component"));
}

Boolean UNIX_ChassisInRack::getLocationWithinContainer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCATION_WITHIN_CONTAINER, getLocationWithinContainer());
	return true;
}

String UNIX_ChassisInRack::getLocationWithinContainer() const
{
	return String ("");
}

Boolean UNIX_ChassisInRack::getBottomU(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BOTTOM_U, getBottomU());
	return true;
}

Uint16 UNIX_ChassisInRack::getBottomU() const
{
	return Uint16(0);
}



Boolean UNIX_ChassisInRack::initialize()
{
	groupIndex = -1;
	partIndex = 0;
	group_UNIX_Rack_Index = -1;
	endOf_UNIX_Rack_Group = false;
	group_UNIX_Rack_Component.initialize();
	part_UNIX_Chassis_Index = -1;
	endOf_UNIX_Chassis_Part = false;
	return true;
}

Boolean UNIX_ChassisInRack::load(int &pIndex)
{
	if (pIndex == 0 || (endOf_UNIX_Chassis_Part))
	{
		if (groupIndex == 0)
		{
			group_UNIX_Rack_Index++;
			endOf_UNIX_Rack_Group = !group_UNIX_Rack_Component.load(group_UNIX_Rack_Index);
			if (endOf_UNIX_Rack_Group)
			{
				endOf_UNIX_Chassis_Part = false;
				part_UNIX_Chassis_Component.setScope(CIMName("UNIX_Rack"));
				part_UNIX_Chassis_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
	}
	if (partIndex == 0)
	{
		part_UNIX_Chassis_Index++;
	endOf_UNIX_Chassis_Part = !part_UNIX_Chassis_Component.load(part_UNIX_Chassis_Index);
	}
	if (partIndex == 0 && endOf_UNIX_Chassis_Part)
	{
		part_UNIX_Chassis_Component.finalize();
		partIndex++;
	}

	if (endOf_UNIX_Rack_Group &&
		endOf_UNIX_Chassis_Part)		return false;
	return true;
}

Boolean UNIX_ChassisInRack::finalize()
{
	group_UNIX_Rack_Component.finalize();
	part_UNIX_Chassis_Component.finalize();
	return true;
}

Boolean UNIX_ChassisInRack::find(Array<CIMKeyBinding> &kbArray)
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
