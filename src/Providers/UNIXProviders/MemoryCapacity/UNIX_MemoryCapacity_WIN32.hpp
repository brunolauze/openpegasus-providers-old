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


UNIX_MemoryCapacity::UNIX_MemoryCapacity(void)
{
}

UNIX_MemoryCapacity::~UNIX_MemoryCapacity(void)
{
}


Boolean UNIX_MemoryCapacity::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_MemoryCapacity::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_MemoryCapacity::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_MemoryCapacity::getCaption() const
{
	return String ("");
}

Boolean UNIX_MemoryCapacity::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_MemoryCapacity::getDescription() const
{
	return String ("");
}

Boolean UNIX_MemoryCapacity::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_MemoryCapacity::getElementName() const
{
	return String("MemoryCapacity");
}

Boolean UNIX_MemoryCapacity::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_MemoryCapacity::getName() const
{
	return String ("");
}

Boolean UNIX_MemoryCapacity::getMemoryType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEMORY_TYPE, getMemoryType());
	return true;
}

Uint16 UNIX_MemoryCapacity::getMemoryType() const
{
	return Uint16(0);
}

Boolean UNIX_MemoryCapacity::getMinimumMemoryCapacity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MINIMUM_MEMORY_CAPACITY, getMinimumMemoryCapacity());
	return true;
}

Uint64 UNIX_MemoryCapacity::getMinimumMemoryCapacity() const
{
	return Uint64(0);
}

Boolean UNIX_MemoryCapacity::getMaximumMemoryCapacity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_MEMORY_CAPACITY, getMaximumMemoryCapacity());
	return true;
}

Uint64 UNIX_MemoryCapacity::getMaximumMemoryCapacity() const
{
	return Uint64(0);
}



Boolean UNIX_MemoryCapacity::initialize()
{
	return false;
}

Boolean UNIX_MemoryCapacity::load(int &pIndex)
{
	return false;
}

Boolean UNIX_MemoryCapacity::finalize()
{
	return false;
}

Boolean UNIX_MemoryCapacity::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String nameKey;
	String memoryTypeKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_MEMORY_TYPE)) memoryTypeKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
