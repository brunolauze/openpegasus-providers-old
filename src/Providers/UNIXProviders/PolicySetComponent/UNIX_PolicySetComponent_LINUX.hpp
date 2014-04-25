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


UNIX_PolicySetComponent::UNIX_PolicySetComponent(void)
{
}

UNIX_PolicySetComponent::~UNIX_PolicySetComponent(void)
{
}


Boolean UNIX_PolicySetComponent::getGroupComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_COMPONENT, getGroupComponent());
	return true;
}

CIMInstance UNIX_PolicySetComponent::getGroupComponent() const
{
	return CIMInstance(CIMName("CIM_Component"));
}

Boolean UNIX_PolicySetComponent::getPartComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_COMPONENT, getPartComponent());
	return true;
}

CIMInstance UNIX_PolicySetComponent::getPartComponent() const
{
	return CIMInstance(CIMName("CIM_Component"));
}

Boolean UNIX_PolicySetComponent::getPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIORITY, getPriority());
	return true;
}

Uint16 UNIX_PolicySetComponent::getPriority() const
{
	return Uint16(0);
}



Boolean UNIX_PolicySetComponent::initialize()
{
	groupIndex = -1;
	partIndex = 0;
	group_UNIX_IPsecRule_Index = -1;
	endOf_UNIX_IPsecRule_Group = false;
	group_UNIX_IPsecRule_Component.initialize();
	group_UNIX_IKERule_Index = -1;
	endOf_UNIX_IKERule_Group = false;
	group_UNIX_IKERule_Component.initialize();
	group_UNIX_AuthenticationRule_Index = -1;
	endOf_UNIX_AuthenticationRule_Group = false;
	group_UNIX_AuthenticationRule_Component.initialize();
	group_UNIX_PolicyGroup_Index = -1;
	endOf_UNIX_PolicyGroup_Group = false;
	group_UNIX_PolicyGroup_Component.initialize();
	part_UNIX_IPsecRule_Index = -1;
	endOf_UNIX_IPsecRule_Part = false;
	part_UNIX_IKERule_Index = -1;
	endOf_UNIX_IKERule_Part = false;
	part_UNIX_AuthenticationRule_Index = -1;
	endOf_UNIX_AuthenticationRule_Part = false;
	part_UNIX_PolicyGroup_Index = -1;
	endOf_UNIX_PolicyGroup_Part = false;
	return true;
}

Boolean UNIX_PolicySetComponent::load(int &pIndex)
{
	if (pIndex == 0 || (endOf_UNIX_IPsecRule_Part &&
			endOf_UNIX_IKERule_Part &&
			endOf_UNIX_AuthenticationRule_Part &&
			endOf_UNIX_PolicyGroup_Part))
	{
		if (groupIndex == 0)
		{
			group_UNIX_IPsecRule_Index++;
			endOf_UNIX_IPsecRule_Group = !group_UNIX_IPsecRule_Component.load(group_UNIX_IPsecRule_Index);
			if (endOf_UNIX_IPsecRule_Group)
			{
				endOf_UNIX_IPsecRule_Part = false;
				part_UNIX_IPsecRule_Component.setScope(CIMName("UNIX_IPsecRule"));
				part_UNIX_IPsecRule_Component.initialize();
				endOf_UNIX_IKERule_Part = false;
				part_UNIX_IKERule_Component.setScope(CIMName("UNIX_IPsecRule"));
				part_UNIX_IKERule_Component.initialize();
				endOf_UNIX_AuthenticationRule_Part = false;
				part_UNIX_AuthenticationRule_Component.setScope(CIMName("UNIX_IPsecRule"));
				part_UNIX_AuthenticationRule_Component.initialize();
				endOf_UNIX_PolicyGroup_Part = false;
				part_UNIX_PolicyGroup_Component.setScope(CIMName("UNIX_IPsecRule"));
				part_UNIX_PolicyGroup_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 1)
		{
			group_UNIX_IKERule_Index++;
			endOf_UNIX_IKERule_Group = !group_UNIX_IKERule_Component.load(group_UNIX_IKERule_Index);
			if (endOf_UNIX_IKERule_Group)
			{
				endOf_UNIX_IPsecRule_Part = false;
				part_UNIX_IPsecRule_Component.setScope(CIMName("UNIX_IKERule"));
				part_UNIX_IPsecRule_Component.initialize();
				endOf_UNIX_IKERule_Part = false;
				part_UNIX_IKERule_Component.setScope(CIMName("UNIX_IKERule"));
				part_UNIX_IKERule_Component.initialize();
				endOf_UNIX_AuthenticationRule_Part = false;
				part_UNIX_AuthenticationRule_Component.setScope(CIMName("UNIX_IKERule"));
				part_UNIX_AuthenticationRule_Component.initialize();
				endOf_UNIX_PolicyGroup_Part = false;
				part_UNIX_PolicyGroup_Component.setScope(CIMName("UNIX_IKERule"));
				part_UNIX_PolicyGroup_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 2)
		{
			group_UNIX_AuthenticationRule_Index++;
			endOf_UNIX_AuthenticationRule_Group = !group_UNIX_AuthenticationRule_Component.load(group_UNIX_AuthenticationRule_Index);
			if (endOf_UNIX_AuthenticationRule_Group)
			{
				endOf_UNIX_IPsecRule_Part = false;
				part_UNIX_IPsecRule_Component.setScope(CIMName("UNIX_AuthenticationRule"));
				part_UNIX_IPsecRule_Component.initialize();
				endOf_UNIX_IKERule_Part = false;
				part_UNIX_IKERule_Component.setScope(CIMName("UNIX_AuthenticationRule"));
				part_UNIX_IKERule_Component.initialize();
				endOf_UNIX_AuthenticationRule_Part = false;
				part_UNIX_AuthenticationRule_Component.setScope(CIMName("UNIX_AuthenticationRule"));
				part_UNIX_AuthenticationRule_Component.initialize();
				endOf_UNIX_PolicyGroup_Part = false;
				part_UNIX_PolicyGroup_Component.setScope(CIMName("UNIX_AuthenticationRule"));
				part_UNIX_PolicyGroup_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 3)
		{
			group_UNIX_PolicyGroup_Index++;
			endOf_UNIX_PolicyGroup_Group = !group_UNIX_PolicyGroup_Component.load(group_UNIX_PolicyGroup_Index);
			if (endOf_UNIX_PolicyGroup_Group)
			{
				endOf_UNIX_IPsecRule_Part = false;
				part_UNIX_IPsecRule_Component.setScope(CIMName("UNIX_PolicyGroup"));
				part_UNIX_IPsecRule_Component.initialize();
				endOf_UNIX_IKERule_Part = false;
				part_UNIX_IKERule_Component.setScope(CIMName("UNIX_PolicyGroup"));
				part_UNIX_IKERule_Component.initialize();
				endOf_UNIX_AuthenticationRule_Part = false;
				part_UNIX_AuthenticationRule_Component.setScope(CIMName("UNIX_PolicyGroup"));
				part_UNIX_AuthenticationRule_Component.initialize();
				endOf_UNIX_PolicyGroup_Part = false;
				part_UNIX_PolicyGroup_Component.setScope(CIMName("UNIX_PolicyGroup"));
				part_UNIX_PolicyGroup_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
	}
	if (partIndex == 0)
	{
		part_UNIX_IPsecRule_Index++;
	endOf_UNIX_IPsecRule_Part = !part_UNIX_IPsecRule_Component.load(part_UNIX_IPsecRule_Index);
	}
	if (partIndex == 1)
	{
		part_UNIX_IKERule_Index++;
	endOf_UNIX_IKERule_Part = !part_UNIX_IKERule_Component.load(part_UNIX_IKERule_Index);
	}
	if (partIndex == 2)
	{
		part_UNIX_AuthenticationRule_Index++;
	endOf_UNIX_AuthenticationRule_Part = !part_UNIX_AuthenticationRule_Component.load(part_UNIX_AuthenticationRule_Index);
	}
	if (partIndex == 3)
	{
		part_UNIX_PolicyGroup_Index++;
	endOf_UNIX_PolicyGroup_Part = !part_UNIX_PolicyGroup_Component.load(part_UNIX_PolicyGroup_Index);
	}
	if (partIndex == 0 && endOf_UNIX_IPsecRule_Part)
	{
		part_UNIX_IPsecRule_Component.finalize();
		partIndex++;
	}
	if (partIndex == 1 && endOf_UNIX_IKERule_Part)
	{
		part_UNIX_IKERule_Component.finalize();
		partIndex++;
	}
	if (partIndex == 2 && endOf_UNIX_AuthenticationRule_Part)
	{
		part_UNIX_AuthenticationRule_Component.finalize();
		partIndex++;
	}
	if (partIndex == 3 && endOf_UNIX_PolicyGroup_Part)
	{
		part_UNIX_PolicyGroup_Component.finalize();
		partIndex++;
	}

	if (endOf_UNIX_IPsecRule_Group &&
		endOf_UNIX_IKERule_Group &&
		endOf_UNIX_AuthenticationRule_Group &&
		endOf_UNIX_PolicyGroup_Group &&
		endOf_UNIX_IPsecRule_Part &&
		endOf_UNIX_IKERule_Part &&
		endOf_UNIX_AuthenticationRule_Part &&
		endOf_UNIX_PolicyGroup_Part)		return false;
	return true;
}

Boolean UNIX_PolicySetComponent::finalize()
{
	group_UNIX_IPsecRule_Component.finalize();
	group_UNIX_IKERule_Component.finalize();
	group_UNIX_AuthenticationRule_Component.finalize();
	group_UNIX_PolicyGroup_Component.finalize();
	part_UNIX_IPsecRule_Component.finalize();
	part_UNIX_IKERule_Component.finalize();
	part_UNIX_AuthenticationRule_Component.finalize();
	part_UNIX_PolicyGroup_Component.finalize();
	return true;
}

Boolean UNIX_PolicySetComponent::find(Array<CIMKeyBinding> &kbArray)
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
