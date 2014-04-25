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


UNIX_DatabaseFile::UNIX_DatabaseFile(void)
{
}

UNIX_DatabaseFile::~UNIX_DatabaseFile(void)
{
}


Boolean UNIX_DatabaseFile::getGroupComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_COMPONENT, getGroupComponent());
	return true;
}

CIMInstance UNIX_DatabaseFile::getGroupComponent() const
{
	return CIMInstance(CIMName("CIM_Component"));
}

Boolean UNIX_DatabaseFile::getPartComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_COMPONENT, getPartComponent());
	return true;
}

CIMInstance UNIX_DatabaseFile::getPartComponent() const
{
	return CIMInstance(CIMName("CIM_Component"));
}



Boolean UNIX_DatabaseFile::initialize()
{
	groupIndex = -1;
	partIndex = 0;
	group_UNIX_CommonDatabase_Index = -1;
	endOf_UNIX_CommonDatabase_Group = false;
	group_UNIX_CommonDatabase_Component.initialize();
	part_UNIX_DataFile_Index = -1;
	endOf_UNIX_DataFile_Part = false;
	part_UNIX_FIFOPipeFile_Index = -1;
	endOf_UNIX_FIFOPipeFile_Part = false;
	part_UNIX_DeviceFile_Index = -1;
	endOf_UNIX_DeviceFile_Part = false;
	part_UNIX_DeviceFile_Index = -1;
	endOf_UNIX_DeviceFile_Part = false;
	part_UNIX_Directory_Index = -1;
	endOf_UNIX_Directory_Part = false;
	part_UNIX_UnixDirectory_Index = -1;
	endOf_UNIX_UnixDirectory_Part = false;
	part_UNIX_SymbolicLink_Index = -1;
	endOf_UNIX_SymbolicLink_Part = false;
	return true;
}

Boolean UNIX_DatabaseFile::load(int &pIndex)
{
	if (pIndex == 0 || (endOf_UNIX_DataFile_Part &&
			endOf_UNIX_FIFOPipeFile_Part &&
			endOf_UNIX_DeviceFile_Part &&
			endOf_UNIX_DeviceFile_Part &&
			endOf_UNIX_Directory_Part &&
			endOf_UNIX_UnixDirectory_Part &&
			endOf_UNIX_SymbolicLink_Part))
	{
		if (groupIndex == 0)
		{
			group_UNIX_CommonDatabase_Index++;
			endOf_UNIX_CommonDatabase_Group = !group_UNIX_CommonDatabase_Component.load(group_UNIX_CommonDatabase_Index);
			if (endOf_UNIX_CommonDatabase_Group)
			{
				endOf_UNIX_DataFile_Part = false;
				part_UNIX_DataFile_Component.setScope(CIMName("UNIX_CommonDatabase"));
				part_UNIX_DataFile_Component.initialize();
				endOf_UNIX_FIFOPipeFile_Part = false;
				part_UNIX_FIFOPipeFile_Component.setScope(CIMName("UNIX_CommonDatabase"));
				part_UNIX_FIFOPipeFile_Component.initialize();
				endOf_UNIX_DeviceFile_Part = false;
				part_UNIX_DeviceFile_Component.setScope(CIMName("UNIX_CommonDatabase"));
				part_UNIX_DeviceFile_Component.initialize();
				endOf_UNIX_DeviceFile_Part = false;
				part_UNIX_DeviceFile_Component.setScope(CIMName("UNIX_CommonDatabase"));
				part_UNIX_DeviceFile_Component.initialize();
				endOf_UNIX_Directory_Part = false;
				part_UNIX_Directory_Component.setScope(CIMName("UNIX_CommonDatabase"));
				part_UNIX_Directory_Component.initialize();
				endOf_UNIX_UnixDirectory_Part = false;
				part_UNIX_UnixDirectory_Component.setScope(CIMName("UNIX_CommonDatabase"));
				part_UNIX_UnixDirectory_Component.initialize();
				endOf_UNIX_SymbolicLink_Part = false;
				part_UNIX_SymbolicLink_Component.setScope(CIMName("UNIX_CommonDatabase"));
				part_UNIX_SymbolicLink_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
	}
	if (partIndex == 0)
	{
		part_UNIX_DataFile_Index++;
	endOf_UNIX_DataFile_Part = !part_UNIX_DataFile_Component.load(part_UNIX_DataFile_Index);
	}
	if (partIndex == 1)
	{
		part_UNIX_FIFOPipeFile_Index++;
	endOf_UNIX_FIFOPipeFile_Part = !part_UNIX_FIFOPipeFile_Component.load(part_UNIX_FIFOPipeFile_Index);
	}
	if (partIndex == 2)
	{
		part_UNIX_DeviceFile_Index++;
	endOf_UNIX_DeviceFile_Part = !part_UNIX_DeviceFile_Component.load(part_UNIX_DeviceFile_Index);
	}
	if (partIndex == 3)
	{
		part_UNIX_DeviceFile_Index++;
	endOf_UNIX_DeviceFile_Part = !part_UNIX_DeviceFile_Component.load(part_UNIX_DeviceFile_Index);
	}
	if (partIndex == 4)
	{
		part_UNIX_Directory_Index++;
	endOf_UNIX_Directory_Part = !part_UNIX_Directory_Component.load(part_UNIX_Directory_Index);
	}
	if (partIndex == 5)
	{
		part_UNIX_UnixDirectory_Index++;
	endOf_UNIX_UnixDirectory_Part = !part_UNIX_UnixDirectory_Component.load(part_UNIX_UnixDirectory_Index);
	}
	if (partIndex == 6)
	{
		part_UNIX_SymbolicLink_Index++;
	endOf_UNIX_SymbolicLink_Part = !part_UNIX_SymbolicLink_Component.load(part_UNIX_SymbolicLink_Index);
	}
	if (partIndex == 0 && endOf_UNIX_DataFile_Part)
	{
		part_UNIX_DataFile_Component.finalize();
		partIndex++;
	}
	if (partIndex == 1 && endOf_UNIX_FIFOPipeFile_Part)
	{
		part_UNIX_FIFOPipeFile_Component.finalize();
		partIndex++;
	}
	if (partIndex == 2 && endOf_UNIX_DeviceFile_Part)
	{
		part_UNIX_DeviceFile_Component.finalize();
		partIndex++;
	}
	if (partIndex == 3 && endOf_UNIX_DeviceFile_Part)
	{
		part_UNIX_DeviceFile_Component.finalize();
		partIndex++;
	}
	if (partIndex == 4 && endOf_UNIX_Directory_Part)
	{
		part_UNIX_Directory_Component.finalize();
		partIndex++;
	}
	if (partIndex == 5 && endOf_UNIX_UnixDirectory_Part)
	{
		part_UNIX_UnixDirectory_Component.finalize();
		partIndex++;
	}
	if (partIndex == 6 && endOf_UNIX_SymbolicLink_Part)
	{
		part_UNIX_SymbolicLink_Component.finalize();
		partIndex++;
	}

	if (endOf_UNIX_CommonDatabase_Group &&
		endOf_UNIX_DataFile_Part &&
		endOf_UNIX_FIFOPipeFile_Part &&
		endOf_UNIX_DeviceFile_Part &&
		endOf_UNIX_DeviceFile_Part &&
		endOf_UNIX_Directory_Part &&
		endOf_UNIX_UnixDirectory_Part &&
		endOf_UNIX_SymbolicLink_Part)		return false;
	return true;
}

Boolean UNIX_DatabaseFile::finalize()
{
	group_UNIX_CommonDatabase_Component.finalize();
	part_UNIX_DataFile_Component.finalize();
	part_UNIX_FIFOPipeFile_Component.finalize();
	part_UNIX_DeviceFile_Component.finalize();
	part_UNIX_DeviceFile_Component.finalize();
	part_UNIX_Directory_Component.finalize();
	part_UNIX_UnixDirectory_Component.finalize();
	part_UNIX_SymbolicLink_Component.finalize();
	return true;
}

Boolean UNIX_DatabaseFile::find(Array<CIMKeyBinding> &kbArray)
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
