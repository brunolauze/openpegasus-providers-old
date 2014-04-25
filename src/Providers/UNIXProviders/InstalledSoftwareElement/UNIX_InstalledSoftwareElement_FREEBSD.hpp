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


UNIX_InstalledSoftwareElement::UNIX_InstalledSoftwareElement(void)
{
}

UNIX_InstalledSoftwareElement::~UNIX_InstalledSoftwareElement(void)
{
}


Boolean UNIX_InstalledSoftwareElement::getSoftware(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOFTWARE, getSoftware());
	return true;
}

CIMInstance UNIX_InstalledSoftwareElement::getSoftware() const
{
	CIMInstance instance = group_UNIX_SoftwareElement_ComponentProvider.constructInstance(
		CIMName("UNIX_AccountSystem"),
		CIMNamespaceName("root/cimv2"),
		group_UNIX_SoftwareElement_Component
	);

	return instance;
}

Boolean UNIX_InstalledSoftwareElement::getSystem(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM, getSystem());
	return true;
}

CIMInstance UNIX_InstalledSoftwareElement::getSystem() const
{
	CIMInstance instance = part_UNIX_ComputerSystem_ComponentProvider.constructInstance(
		CIMName("UNIX_ComputerSystem"),
		CIMNamespaceName("root/cimv2"),
		part_UNIX_ComputerSystem_Component
	);
		
	return instance;
}



Boolean UNIX_InstalledSoftwareElement::initialize()
{
	groupIndex = 0;
	partIndex = 0;
	group_UNIX_SoftwareElement_Index = -1;
	group_UNIX_SoftwareElement_Component.setScope(CIMName("UNIX_ComputerSystem"));
	endOf_UNIX_SoftwareElement_Group = !group_UNIX_SoftwareElement_Component.initialize();
	part_UNIX_ComputerSystem_Index = -1;
	part_UNIX_ComputerSystem_Component.setScope(CIMName("UNIX_SoftwareElement"));
	endOf_UNIX_ComputerSystem_Part = !part_UNIX_ComputerSystem_Component.initialize();
	return true;
}

Boolean UNIX_InstalledSoftwareElement::load(int &pIndex)
{
	if (pIndex == 0 || (endOf_UNIX_ComputerSystem_Part))
	{
		if (groupIndex == 0)
		{
			group_UNIX_SoftwareElement_Index++;
			endOf_UNIX_SoftwareElement_Group = !group_UNIX_SoftwareElement_Component.load(group_UNIX_SoftwareElement_Index);
			if (endOf_UNIX_SoftwareElement_Group)
			{
				return false;
			}
		}
	}

	if (partIndex == 0 && !endOf_UNIX_ComputerSystem_Part)
	{
		part_UNIX_ComputerSystem_Index++;
		endOf_UNIX_ComputerSystem_Part = !part_UNIX_ComputerSystem_Component.load(part_UNIX_ComputerSystem_Index);
	}
	if (partIndex == 0 && endOf_UNIX_ComputerSystem_Part)
	{
		part_UNIX_ComputerSystem_Component.finalize();
		partIndex++;
		pIndex++;
		return load(pIndex);
	}

	if (endOf_UNIX_SoftwareElement_Group &&
		endOf_UNIX_ComputerSystem_Part)		return false;
	return true;
}

Boolean UNIX_InstalledSoftwareElement::finalize()
{
	group_UNIX_SoftwareElement_Component.finalize();
	part_UNIX_ComputerSystem_Component.finalize();
	return true;
}

Boolean UNIX_InstalledSoftwareElement::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String softwareKey;
	String systemKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SOFTWARE)) softwareKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM)) systemKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
