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


UNIX_ElementInSchedulingService::UNIX_ElementInSchedulingService(void)
{
}

UNIX_ElementInSchedulingService::~UNIX_ElementInSchedulingService(void)
{
}


Boolean UNIX_ElementInSchedulingService::getGroupComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_COMPONENT, getGroupComponent());
	return true;
}

CIMInstance UNIX_ElementInSchedulingService::getGroupComponent() const
{
	return CIMInstance(CIMName("CIM_Component"));
}

Boolean UNIX_ElementInSchedulingService::getPartComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_COMPONENT, getPartComponent());
	return true;
}

CIMInstance UNIX_ElementInSchedulingService::getPartComponent() const
{
	return CIMInstance(CIMName("CIM_Component"));
}



Boolean UNIX_ElementInSchedulingService::initialize()
{
	groupIndex = -1;
	partIndex = 0;
	group_UNIX_PacketSchedulingService_Index = -1;
	endOf_UNIX_PacketSchedulingService_Group = false;
	group_UNIX_PacketSchedulingService_Component.initialize();
	part_UNIX_PrioritySchedulingElement_Index = -1;
	endOf_UNIX_PrioritySchedulingElement_Part = false;
	part_UNIX_BoundedPrioritySchedulingElement_Index = -1;
	endOf_UNIX_BoundedPrioritySchedulingElement_Part = false;
	part_UNIX_AllocationSchedulingElement_Index = -1;
	endOf_UNIX_AllocationSchedulingElement_Part = false;
	part_UNIX_WRRSchedulingElement_Index = -1;
	endOf_UNIX_WRRSchedulingElement_Part = false;
	return true;
}

Boolean UNIX_ElementInSchedulingService::load(int &pIndex)
{
	if (pIndex == 0 || (endOf_UNIX_PrioritySchedulingElement_Part &&
			endOf_UNIX_BoundedPrioritySchedulingElement_Part &&
			endOf_UNIX_AllocationSchedulingElement_Part &&
			endOf_UNIX_WRRSchedulingElement_Part))
	{
		if (groupIndex == 0)
		{
			group_UNIX_PacketSchedulingService_Index++;
			endOf_UNIX_PacketSchedulingService_Group = !group_UNIX_PacketSchedulingService_Component.load(group_UNIX_PacketSchedulingService_Index);
			if (endOf_UNIX_PacketSchedulingService_Group)
			{
				endOf_UNIX_PrioritySchedulingElement_Part = false;
				part_UNIX_PrioritySchedulingElement_Component.setScope(CIMName("UNIX_PacketSchedulingService"));
				part_UNIX_PrioritySchedulingElement_Component.initialize();
				endOf_UNIX_BoundedPrioritySchedulingElement_Part = false;
				part_UNIX_BoundedPrioritySchedulingElement_Component.setScope(CIMName("UNIX_PacketSchedulingService"));
				part_UNIX_BoundedPrioritySchedulingElement_Component.initialize();
				endOf_UNIX_AllocationSchedulingElement_Part = false;
				part_UNIX_AllocationSchedulingElement_Component.setScope(CIMName("UNIX_PacketSchedulingService"));
				part_UNIX_AllocationSchedulingElement_Component.initialize();
				endOf_UNIX_WRRSchedulingElement_Part = false;
				part_UNIX_WRRSchedulingElement_Component.setScope(CIMName("UNIX_PacketSchedulingService"));
				part_UNIX_WRRSchedulingElement_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
	}
	if (partIndex == 0)
	{
		part_UNIX_PrioritySchedulingElement_Index++;
	endOf_UNIX_PrioritySchedulingElement_Part = !part_UNIX_PrioritySchedulingElement_Component.load(part_UNIX_PrioritySchedulingElement_Index);
	}
	if (partIndex == 1)
	{
		part_UNIX_BoundedPrioritySchedulingElement_Index++;
	endOf_UNIX_BoundedPrioritySchedulingElement_Part = !part_UNIX_BoundedPrioritySchedulingElement_Component.load(part_UNIX_BoundedPrioritySchedulingElement_Index);
	}
	if (partIndex == 2)
	{
		part_UNIX_AllocationSchedulingElement_Index++;
	endOf_UNIX_AllocationSchedulingElement_Part = !part_UNIX_AllocationSchedulingElement_Component.load(part_UNIX_AllocationSchedulingElement_Index);
	}
	if (partIndex == 3)
	{
		part_UNIX_WRRSchedulingElement_Index++;
	endOf_UNIX_WRRSchedulingElement_Part = !part_UNIX_WRRSchedulingElement_Component.load(part_UNIX_WRRSchedulingElement_Index);
	}
	if (partIndex == 0 && endOf_UNIX_PrioritySchedulingElement_Part)
	{
		part_UNIX_PrioritySchedulingElement_Component.finalize();
		partIndex++;
	}
	if (partIndex == 1 && endOf_UNIX_BoundedPrioritySchedulingElement_Part)
	{
		part_UNIX_BoundedPrioritySchedulingElement_Component.finalize();
		partIndex++;
	}
	if (partIndex == 2 && endOf_UNIX_AllocationSchedulingElement_Part)
	{
		part_UNIX_AllocationSchedulingElement_Component.finalize();
		partIndex++;
	}
	if (partIndex == 3 && endOf_UNIX_WRRSchedulingElement_Part)
	{
		part_UNIX_WRRSchedulingElement_Component.finalize();
		partIndex++;
	}

	if (endOf_UNIX_PacketSchedulingService_Group &&
		endOf_UNIX_PrioritySchedulingElement_Part &&
		endOf_UNIX_BoundedPrioritySchedulingElement_Part &&
		endOf_UNIX_AllocationSchedulingElement_Part &&
		endOf_UNIX_WRRSchedulingElement_Part)		return false;
	return true;
}

Boolean UNIX_ElementInSchedulingService::finalize()
{
	group_UNIX_PacketSchedulingService_Component.finalize();
	part_UNIX_PrioritySchedulingElement_Component.finalize();
	part_UNIX_BoundedPrioritySchedulingElement_Component.finalize();
	part_UNIX_AllocationSchedulingElement_Component.finalize();
	part_UNIX_WRRSchedulingElement_Component.finalize();
	return true;
}

Boolean UNIX_ElementInSchedulingService::find(Array<CIMKeyBinding> &kbArray)
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
