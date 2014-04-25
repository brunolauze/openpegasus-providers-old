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


UNIX_StorageError::UNIX_StorageError(void)
{
}

UNIX_StorageError::~UNIX_StorageError(void)
{
}


Boolean UNIX_StorageError::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_StorageError::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_StorageError::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_StorageError::getCaption() const
{
	return String ("");
}

Boolean UNIX_StorageError::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_StorageError::getDescription() const
{
	return String ("");
}

Boolean UNIX_StorageError::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_StorageError::getElementName() const
{
	return String("StorageError");
}

Boolean UNIX_StorageError::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_StorageError::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_StorageError::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_StorageError::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_StorageError::getDeviceCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_CREATION_CLASS_NAME, getDeviceCreationClassName());
	return true;
}

String UNIX_StorageError::getDeviceCreationClassName() const
{
	return String ("");
}

Boolean UNIX_StorageError::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_StorageError::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_StorageError::getStartingAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTING_ADDRESS, getStartingAddress());
	return true;
}

Uint64 UNIX_StorageError::getStartingAddress() const
{
	return Uint64(0);
}

Boolean UNIX_StorageError::getEndingAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENDING_ADDRESS, getEndingAddress());
	return true;
}

Uint64 UNIX_StorageError::getEndingAddress() const
{
	return Uint64(0);
}



Boolean UNIX_StorageError::initialize()
{
	return false;
}

Boolean UNIX_StorageError::load(int &pIndex)
{
	return false;
}

Boolean UNIX_StorageError::finalize()
{
	return false;
}

Boolean UNIX_StorageError::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String deviceCreationClassNameKey;
	String deviceIDKey;
	String startingAddressKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DEVICE_CREATION_CLASS_NAME)) deviceCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DEVICE_ID)) deviceIDKey = kb.getValue();
		else if (keyName.equal(PROPERTY_STARTING_ADDRESS)) startingAddressKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
