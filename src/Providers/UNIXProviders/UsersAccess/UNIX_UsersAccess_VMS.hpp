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


UNIX_UsersAccess::UNIX_UsersAccess(void)
{
}

UNIX_UsersAccess::~UNIX_UsersAccess(void)
{
}


Boolean UNIX_UsersAccess::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_UsersAccess::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_UsersAccess::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_UsersAccess::getCaption() const
{
	return String ("");
}

Boolean UNIX_UsersAccess::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_UsersAccess::getDescription() const
{
	return String ("");
}

Boolean UNIX_UsersAccess::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_UsersAccess::getElementName() const
{
	return String("UsersAccess");
}

Boolean UNIX_UsersAccess::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_UsersAccess::getCreationClassName() const
{
	return String("UNIX_UsersAccess");
}

Boolean UNIX_UsersAccess::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_UsersAccess::getName() const
{
	return String ("");
}

Boolean UNIX_UsersAccess::getElementID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_ID, getElementID());
	return true;
}

String UNIX_UsersAccess::getElementID() const
{
	return String ("");
}

Boolean UNIX_UsersAccess::getBiometric(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BIOMETRIC, getBiometric());
	return true;
}

Array<Uint16> UNIX_UsersAccess::getBiometric() const
{
	Array<Uint16> as;
	

	return as;

}



Boolean UNIX_UsersAccess::initialize()
{
	return false;
}

Boolean UNIX_UsersAccess::load(int &pIndex)
{
	return false;
}

Boolean UNIX_UsersAccess::finalize()
{
	return false;
}

Boolean UNIX_UsersAccess::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String creationClassNameKey;
	String nameKey;
	String elementIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_ELEMENT_ID)) elementIDKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
