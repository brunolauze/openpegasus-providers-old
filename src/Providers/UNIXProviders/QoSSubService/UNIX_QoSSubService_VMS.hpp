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


UNIX_QoSSubService::UNIX_QoSSubService(void)
{
}

UNIX_QoSSubService::~UNIX_QoSSubService(void)
{
}


Boolean UNIX_QoSSubService::getGroupComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_COMPONENT, getGroupComponent());
	return true;
}

CIMInstance UNIX_QoSSubService::getGroupComponent() const
{
	return CIMInstance(CIMName("CIM_Component"));
}

Boolean UNIX_QoSSubService::getPartComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_COMPONENT, getPartComponent());
	return true;
}

CIMInstance UNIX_QoSSubService::getPartComponent() const
{
	return CIMInstance(CIMName("CIM_Component"));
}



Boolean UNIX_QoSSubService::initialize()
{
	groupIndex = -1;
	partIndex = 0;
	group_UNIX_EFService_Index = -1;
	endOf_UNIX_EFService_Group = false;
	group_UNIX_EFService_Component.initialize();
	group_UNIX_AFService_Index = -1;
	endOf_UNIX_AFService_Group = false;
	group_UNIX_AFService_Component.initialize();
	group_UNIX_FlowService_Index = -1;
	endOf_UNIX_FlowService_Group = false;
	group_UNIX_FlowService_Component.initialize();
	group_UNIX_Hdr8021PService_Index = -1;
	endOf_UNIX_Hdr8021PService_Group = false;
	group_UNIX_Hdr8021PService_Component.initialize();
	group_UNIX_PrecedenceService_Index = -1;
	endOf_UNIX_PrecedenceService_Group = false;
	group_UNIX_PrecedenceService_Component.initialize();
	part_UNIX_EFService_Index = -1;
	endOf_UNIX_EFService_Part = false;
	part_UNIX_AFService_Index = -1;
	endOf_UNIX_AFService_Part = false;
	part_UNIX_FlowService_Index = -1;
	endOf_UNIX_FlowService_Part = false;
	part_UNIX_Hdr8021PService_Index = -1;
	endOf_UNIX_Hdr8021PService_Part = false;
	part_UNIX_PrecedenceService_Index = -1;
	endOf_UNIX_PrecedenceService_Part = false;
	return true;
}

Boolean UNIX_QoSSubService::load(int &pIndex)
{
	if (pIndex == 0 || (endOf_UNIX_EFService_Part &&
			endOf_UNIX_AFService_Part &&
			endOf_UNIX_FlowService_Part &&
			endOf_UNIX_Hdr8021PService_Part &&
			endOf_UNIX_PrecedenceService_Part))
	{
		if (groupIndex == 0)
		{
			group_UNIX_EFService_Index++;
			endOf_UNIX_EFService_Group = !group_UNIX_EFService_Component.load(group_UNIX_EFService_Index);
			if (endOf_UNIX_EFService_Group)
			{
				endOf_UNIX_EFService_Part = false;
				part_UNIX_EFService_Component.setScope(CIMName("UNIX_EFService"));
				part_UNIX_EFService_Component.initialize();
				endOf_UNIX_AFService_Part = false;
				part_UNIX_AFService_Component.setScope(CIMName("UNIX_EFService"));
				part_UNIX_AFService_Component.initialize();
				endOf_UNIX_FlowService_Part = false;
				part_UNIX_FlowService_Component.setScope(CIMName("UNIX_EFService"));
				part_UNIX_FlowService_Component.initialize();
				endOf_UNIX_Hdr8021PService_Part = false;
				part_UNIX_Hdr8021PService_Component.setScope(CIMName("UNIX_EFService"));
				part_UNIX_Hdr8021PService_Component.initialize();
				endOf_UNIX_PrecedenceService_Part = false;
				part_UNIX_PrecedenceService_Component.setScope(CIMName("UNIX_EFService"));
				part_UNIX_PrecedenceService_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 1)
		{
			group_UNIX_AFService_Index++;
			endOf_UNIX_AFService_Group = !group_UNIX_AFService_Component.load(group_UNIX_AFService_Index);
			if (endOf_UNIX_AFService_Group)
			{
				endOf_UNIX_EFService_Part = false;
				part_UNIX_EFService_Component.setScope(CIMName("UNIX_AFService"));
				part_UNIX_EFService_Component.initialize();
				endOf_UNIX_AFService_Part = false;
				part_UNIX_AFService_Component.setScope(CIMName("UNIX_AFService"));
				part_UNIX_AFService_Component.initialize();
				endOf_UNIX_FlowService_Part = false;
				part_UNIX_FlowService_Component.setScope(CIMName("UNIX_AFService"));
				part_UNIX_FlowService_Component.initialize();
				endOf_UNIX_Hdr8021PService_Part = false;
				part_UNIX_Hdr8021PService_Component.setScope(CIMName("UNIX_AFService"));
				part_UNIX_Hdr8021PService_Component.initialize();
				endOf_UNIX_PrecedenceService_Part = false;
				part_UNIX_PrecedenceService_Component.setScope(CIMName("UNIX_AFService"));
				part_UNIX_PrecedenceService_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 2)
		{
			group_UNIX_FlowService_Index++;
			endOf_UNIX_FlowService_Group = !group_UNIX_FlowService_Component.load(group_UNIX_FlowService_Index);
			if (endOf_UNIX_FlowService_Group)
			{
				endOf_UNIX_EFService_Part = false;
				part_UNIX_EFService_Component.setScope(CIMName("UNIX_FlowService"));
				part_UNIX_EFService_Component.initialize();
				endOf_UNIX_AFService_Part = false;
				part_UNIX_AFService_Component.setScope(CIMName("UNIX_FlowService"));
				part_UNIX_AFService_Component.initialize();
				endOf_UNIX_FlowService_Part = false;
				part_UNIX_FlowService_Component.setScope(CIMName("UNIX_FlowService"));
				part_UNIX_FlowService_Component.initialize();
				endOf_UNIX_Hdr8021PService_Part = false;
				part_UNIX_Hdr8021PService_Component.setScope(CIMName("UNIX_FlowService"));
				part_UNIX_Hdr8021PService_Component.initialize();
				endOf_UNIX_PrecedenceService_Part = false;
				part_UNIX_PrecedenceService_Component.setScope(CIMName("UNIX_FlowService"));
				part_UNIX_PrecedenceService_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 3)
		{
			group_UNIX_Hdr8021PService_Index++;
			endOf_UNIX_Hdr8021PService_Group = !group_UNIX_Hdr8021PService_Component.load(group_UNIX_Hdr8021PService_Index);
			if (endOf_UNIX_Hdr8021PService_Group)
			{
				endOf_UNIX_EFService_Part = false;
				part_UNIX_EFService_Component.setScope(CIMName("UNIX_Hdr8021PService"));
				part_UNIX_EFService_Component.initialize();
				endOf_UNIX_AFService_Part = false;
				part_UNIX_AFService_Component.setScope(CIMName("UNIX_Hdr8021PService"));
				part_UNIX_AFService_Component.initialize();
				endOf_UNIX_FlowService_Part = false;
				part_UNIX_FlowService_Component.setScope(CIMName("UNIX_Hdr8021PService"));
				part_UNIX_FlowService_Component.initialize();
				endOf_UNIX_Hdr8021PService_Part = false;
				part_UNIX_Hdr8021PService_Component.setScope(CIMName("UNIX_Hdr8021PService"));
				part_UNIX_Hdr8021PService_Component.initialize();
				endOf_UNIX_PrecedenceService_Part = false;
				part_UNIX_PrecedenceService_Component.setScope(CIMName("UNIX_Hdr8021PService"));
				part_UNIX_PrecedenceService_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 4)
		{
			group_UNIX_PrecedenceService_Index++;
			endOf_UNIX_PrecedenceService_Group = !group_UNIX_PrecedenceService_Component.load(group_UNIX_PrecedenceService_Index);
			if (endOf_UNIX_PrecedenceService_Group)
			{
				endOf_UNIX_EFService_Part = false;
				part_UNIX_EFService_Component.setScope(CIMName("UNIX_PrecedenceService"));
				part_UNIX_EFService_Component.initialize();
				endOf_UNIX_AFService_Part = false;
				part_UNIX_AFService_Component.setScope(CIMName("UNIX_PrecedenceService"));
				part_UNIX_AFService_Component.initialize();
				endOf_UNIX_FlowService_Part = false;
				part_UNIX_FlowService_Component.setScope(CIMName("UNIX_PrecedenceService"));
				part_UNIX_FlowService_Component.initialize();
				endOf_UNIX_Hdr8021PService_Part = false;
				part_UNIX_Hdr8021PService_Component.setScope(CIMName("UNIX_PrecedenceService"));
				part_UNIX_Hdr8021PService_Component.initialize();
				endOf_UNIX_PrecedenceService_Part = false;
				part_UNIX_PrecedenceService_Component.setScope(CIMName("UNIX_PrecedenceService"));
				part_UNIX_PrecedenceService_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
	}
	if (partIndex == 0)
	{
		part_UNIX_EFService_Index++;
	endOf_UNIX_EFService_Part = !part_UNIX_EFService_Component.load(part_UNIX_EFService_Index);
	}
	if (partIndex == 1)
	{
		part_UNIX_AFService_Index++;
	endOf_UNIX_AFService_Part = !part_UNIX_AFService_Component.load(part_UNIX_AFService_Index);
	}
	if (partIndex == 2)
	{
		part_UNIX_FlowService_Index++;
	endOf_UNIX_FlowService_Part = !part_UNIX_FlowService_Component.load(part_UNIX_FlowService_Index);
	}
	if (partIndex == 3)
	{
		part_UNIX_Hdr8021PService_Index++;
	endOf_UNIX_Hdr8021PService_Part = !part_UNIX_Hdr8021PService_Component.load(part_UNIX_Hdr8021PService_Index);
	}
	if (partIndex == 4)
	{
		part_UNIX_PrecedenceService_Index++;
	endOf_UNIX_PrecedenceService_Part = !part_UNIX_PrecedenceService_Component.load(part_UNIX_PrecedenceService_Index);
	}
	if (partIndex == 0 && endOf_UNIX_EFService_Part)
	{
		part_UNIX_EFService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 1 && endOf_UNIX_AFService_Part)
	{
		part_UNIX_AFService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 2 && endOf_UNIX_FlowService_Part)
	{
		part_UNIX_FlowService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 3 && endOf_UNIX_Hdr8021PService_Part)
	{
		part_UNIX_Hdr8021PService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 4 && endOf_UNIX_PrecedenceService_Part)
	{
		part_UNIX_PrecedenceService_Component.finalize();
		partIndex++;
	}

	if (endOf_UNIX_EFService_Group &&
		endOf_UNIX_AFService_Group &&
		endOf_UNIX_FlowService_Group &&
		endOf_UNIX_Hdr8021PService_Group &&
		endOf_UNIX_PrecedenceService_Group &&
		endOf_UNIX_EFService_Part &&
		endOf_UNIX_AFService_Part &&
		endOf_UNIX_FlowService_Part &&
		endOf_UNIX_Hdr8021PService_Part &&
		endOf_UNIX_PrecedenceService_Part)		return false;
	return true;
}

Boolean UNIX_QoSSubService::finalize()
{
	group_UNIX_EFService_Component.finalize();
	group_UNIX_AFService_Component.finalize();
	group_UNIX_FlowService_Component.finalize();
	group_UNIX_Hdr8021PService_Component.finalize();
	group_UNIX_PrecedenceService_Component.finalize();
	part_UNIX_EFService_Component.finalize();
	part_UNIX_AFService_Component.finalize();
	part_UNIX_FlowService_Component.finalize();
	part_UNIX_Hdr8021PService_Component.finalize();
	part_UNIX_PrecedenceService_Component.finalize();
	return true;
}

Boolean UNIX_QoSSubService::find(Array<CIMKeyBinding> &kbArray)
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
