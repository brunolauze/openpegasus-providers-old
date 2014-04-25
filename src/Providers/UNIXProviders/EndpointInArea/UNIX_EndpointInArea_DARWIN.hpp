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


UNIX_EndpointInArea::UNIX_EndpointInArea(void)
{
}

UNIX_EndpointInArea::~UNIX_EndpointInArea(void)
{
}


Boolean UNIX_EndpointInArea::getGroupComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_COMPONENT, getGroupComponent());
	return true;
}

CIMInstance UNIX_EndpointInArea::getGroupComponent() const
{
	return CIMInstance(CIMName("CIM_Component"));
}

Boolean UNIX_EndpointInArea::getPartComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_COMPONENT, getPartComponent());
	return true;
}

CIMInstance UNIX_EndpointInArea::getPartComponent() const
{
	return CIMInstance(CIMName("CIM_Component"));
}



Boolean UNIX_EndpointInArea::initialize()
{
	groupIndex = -1;
	partIndex = 0;
	group_UNIX_OSPFArea_Index = -1;
	endOf_UNIX_OSPFArea_Group = false;
	group_UNIX_OSPFArea_Component.initialize();
	part_UNIX_OSPFVirtualInterface_Index = -1;
	endOf_UNIX_OSPFVirtualInterface_Part = false;
	part_UNIX_OSPFProtocolEndpoint_Index = -1;
	endOf_UNIX_OSPFProtocolEndpoint_Part = false;
	return true;
}

Boolean UNIX_EndpointInArea::load(int &pIndex)
{
	if (pIndex == 0 || (endOf_UNIX_OSPFVirtualInterface_Part &&
			endOf_UNIX_OSPFProtocolEndpoint_Part))
	{
		if (groupIndex == 0)
		{
			group_UNIX_OSPFArea_Index++;
			endOf_UNIX_OSPFArea_Group = !group_UNIX_OSPFArea_Component.load(group_UNIX_OSPFArea_Index);
			if (endOf_UNIX_OSPFArea_Group)
			{
				endOf_UNIX_OSPFVirtualInterface_Part = false;
				part_UNIX_OSPFVirtualInterface_Component.setScope(CIMName("UNIX_OSPFArea"));
				part_UNIX_OSPFVirtualInterface_Component.initialize();
				endOf_UNIX_OSPFProtocolEndpoint_Part = false;
				part_UNIX_OSPFProtocolEndpoint_Component.setScope(CIMName("UNIX_OSPFArea"));
				part_UNIX_OSPFProtocolEndpoint_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
	}
	if (partIndex == 0)
	{
		part_UNIX_OSPFVirtualInterface_Index++;
	endOf_UNIX_OSPFVirtualInterface_Part = !part_UNIX_OSPFVirtualInterface_Component.load(part_UNIX_OSPFVirtualInterface_Index);
	}
	if (partIndex == 1)
	{
		part_UNIX_OSPFProtocolEndpoint_Index++;
	endOf_UNIX_OSPFProtocolEndpoint_Part = !part_UNIX_OSPFProtocolEndpoint_Component.load(part_UNIX_OSPFProtocolEndpoint_Index);
	}
	if (partIndex == 0 && endOf_UNIX_OSPFVirtualInterface_Part)
	{
		part_UNIX_OSPFVirtualInterface_Component.finalize();
		partIndex++;
	}
	if (partIndex == 1 && endOf_UNIX_OSPFProtocolEndpoint_Part)
	{
		part_UNIX_OSPFProtocolEndpoint_Component.finalize();
		partIndex++;
	}

	if (endOf_UNIX_OSPFArea_Group &&
		endOf_UNIX_OSPFVirtualInterface_Part &&
		endOf_UNIX_OSPFProtocolEndpoint_Part)		return false;
	return true;
}

Boolean UNIX_EndpointInArea::finalize()
{
	group_UNIX_OSPFArea_Component.finalize();
	part_UNIX_OSPFVirtualInterface_Component.finalize();
	part_UNIX_OSPFProtocolEndpoint_Component.finalize();
	return true;
}

Boolean UNIX_EndpointInArea::find(Array<CIMKeyBinding> &kbArray)
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
