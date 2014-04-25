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


UNIX_StorageHardwareID::UNIX_StorageHardwareID(void)
{
}

UNIX_StorageHardwareID::~UNIX_StorageHardwareID(void)
{
}


Boolean UNIX_StorageHardwareID::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_StorageHardwareID::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_StorageHardwareID::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_StorageHardwareID::getCaption() const
{
	return String ("");
}

Boolean UNIX_StorageHardwareID::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_StorageHardwareID::getDescription() const
{
	return String ("");
}

Boolean UNIX_StorageHardwareID::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_StorageHardwareID::getElementName() const
{
	return String("StorageHardwareID");
}

Boolean UNIX_StorageHardwareID::getCurrentlyAuthenticated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENTLY_AUTHENTICATED, getCurrentlyAuthenticated());
	return true;
}

Boolean UNIX_StorageHardwareID::getCurrentlyAuthenticated() const
{
	return Boolean(false);
}

Boolean UNIX_StorageHardwareID::getStorageID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STORAGE_ID, getStorageID());
	return true;
}

String UNIX_StorageHardwareID::getStorageID() const
{
	return String ("");
}

Boolean UNIX_StorageHardwareID::getIDType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ID_TYPE, getIDType());
	return true;
}

Uint16 UNIX_StorageHardwareID::getIDType() const
{
	return Uint16(0);
}

Boolean UNIX_StorageHardwareID::getOtherIDType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ID_TYPE, getOtherIDType());
	return true;
}

String UNIX_StorageHardwareID::getOtherIDType() const
{
	return String ("");
}



Boolean UNIX_StorageHardwareID::initialize()
{
	return false;
}

Boolean UNIX_StorageHardwareID::load(int &pIndex)
{
	return false;
}

Boolean UNIX_StorageHardwareID::finalize()
{
	return false;
}

Boolean UNIX_StorageHardwareID::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String instanceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_INSTANCE_ID)) instanceIDKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
