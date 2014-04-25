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


UNIX_ConfigurationCapacity::UNIX_ConfigurationCapacity(void)
{
}

UNIX_ConfigurationCapacity::~UNIX_ConfigurationCapacity(void)
{
}


Boolean UNIX_ConfigurationCapacity::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ConfigurationCapacity::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_ConfigurationCapacity::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ConfigurationCapacity::getCaption() const
{
	return String ("");
}

Boolean UNIX_ConfigurationCapacity::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ConfigurationCapacity::getDescription() const
{
	return String ("");
}

Boolean UNIX_ConfigurationCapacity::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ConfigurationCapacity::getElementName() const
{
	return String("ConfigurationCapacity");
}

Boolean UNIX_ConfigurationCapacity::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_ConfigurationCapacity::getName() const
{
	return String ("");
}

Boolean UNIX_ConfigurationCapacity::getObjectType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OBJECT_TYPE, getObjectType());
	return true;
}

Uint16 UNIX_ConfigurationCapacity::getObjectType() const
{
	return Uint16(0);
}

Boolean UNIX_ConfigurationCapacity::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_ConfigurationCapacity::getOtherTypeDescription() const
{
	return String ("");
}

Boolean UNIX_ConfigurationCapacity::getMinimumCapacity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MINIMUM_CAPACITY, getMinimumCapacity());
	return true;
}

Uint64 UNIX_ConfigurationCapacity::getMinimumCapacity() const
{
	return Uint64(0);
}

Boolean UNIX_ConfigurationCapacity::getMaximumCapacity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_CAPACITY, getMaximumCapacity());
	return true;
}

Uint64 UNIX_ConfigurationCapacity::getMaximumCapacity() const
{
	return Uint64(0);
}

Boolean UNIX_ConfigurationCapacity::getIncrement(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCREMENT, getIncrement());
	return true;
}

Uint32 UNIX_ConfigurationCapacity::getIncrement() const
{
	return Uint32(0);
}

Boolean UNIX_ConfigurationCapacity::getVendorCompatibilityStrings(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_COMPATIBILITY_STRINGS, getVendorCompatibilityStrings());
	return true;
}

Array<String> UNIX_ConfigurationCapacity::getVendorCompatibilityStrings() const
{
	Array<String> as;
	

	return as;

}



Boolean UNIX_ConfigurationCapacity::initialize()
{
	return false;
}

Boolean UNIX_ConfigurationCapacity::load(int &pIndex)
{
	return false;
}

Boolean UNIX_ConfigurationCapacity::finalize()
{
	return false;
}

Boolean UNIX_ConfigurationCapacity::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String nameKey;
	String objectTypeKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_OBJECT_TYPE)) objectTypeKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
