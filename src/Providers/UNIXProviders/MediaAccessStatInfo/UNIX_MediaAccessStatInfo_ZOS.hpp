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


UNIX_MediaAccessStatInfo::UNIX_MediaAccessStatInfo(void)
{
}

UNIX_MediaAccessStatInfo::~UNIX_MediaAccessStatInfo(void)
{
}


Boolean UNIX_MediaAccessStatInfo::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_MediaAccessStatInfo::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_MediaAccessStatInfo::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_MediaAccessStatInfo::getCaption() const
{
	return String ("");
}

Boolean UNIX_MediaAccessStatInfo::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_MediaAccessStatInfo::getDescription() const
{
	return String ("");
}

Boolean UNIX_MediaAccessStatInfo::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_MediaAccessStatInfo::getElementName() const
{
	return String("MediaAccessStatInfo");
}

Boolean UNIX_MediaAccessStatInfo::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_MediaAccessStatInfo::getName() const
{
	return String ("");
}

Boolean UNIX_MediaAccessStatInfo::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_MediaAccessStatInfo::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_MediaAccessStatInfo::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_MediaAccessStatInfo::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_MediaAccessStatInfo::getDeviceCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_CREATION_CLASS_NAME, getDeviceCreationClassName());
	return true;
}

String UNIX_MediaAccessStatInfo::getDeviceCreationClassName() const
{
	return String ("");
}

Boolean UNIX_MediaAccessStatInfo::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_MediaAccessStatInfo::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_MediaAccessStatInfo::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_MediaAccessStatInfo::getCreationClassName() const
{
	return String("UNIX_MediaAccessStatInfo");
}

Boolean UNIX_MediaAccessStatInfo::getReadOperations(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_READ_OPERATIONS, getReadOperations());
	return true;
}

Uint64 UNIX_MediaAccessStatInfo::getReadOperations() const
{
	return Uint64(0);
}

Boolean UNIX_MediaAccessStatInfo::getUnrecoverableReadOperations(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNRECOVERABLE_READ_OPERATIONS, getUnrecoverableReadOperations());
	return true;
}

Uint64 UNIX_MediaAccessStatInfo::getUnrecoverableReadOperations() const
{
	return Uint64(0);
}

Boolean UNIX_MediaAccessStatInfo::getWriteOperations(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WRITE_OPERATIONS, getWriteOperations());
	return true;
}

Uint64 UNIX_MediaAccessStatInfo::getWriteOperations() const
{
	return Uint64(0);
}

Boolean UNIX_MediaAccessStatInfo::getUnrecoverableWriteOperations(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNRECOVERABLE_WRITE_OPERATIONS, getUnrecoverableWriteOperations());
	return true;
}

Uint64 UNIX_MediaAccessStatInfo::getUnrecoverableWriteOperations() const
{
	return Uint64(0);
}

Boolean UNIX_MediaAccessStatInfo::getRecoveredReadOperations(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECOVERED_READ_OPERATIONS, getRecoveredReadOperations());
	return true;
}

Uint64 UNIX_MediaAccessStatInfo::getRecoveredReadOperations() const
{
	return Uint64(0);
}

Boolean UNIX_MediaAccessStatInfo::getRecoveredWriteOperations(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECOVERED_WRITE_OPERATIONS, getRecoveredWriteOperations());
	return true;
}

Uint64 UNIX_MediaAccessStatInfo::getRecoveredWriteOperations() const
{
	return Uint64(0);
}

Boolean UNIX_MediaAccessStatInfo::getRecoveredSeekOperations(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECOVERED_SEEK_OPERATIONS, getRecoveredSeekOperations());
	return true;
}

Uint64 UNIX_MediaAccessStatInfo::getRecoveredSeekOperations() const
{
	return Uint64(0);
}

Boolean UNIX_MediaAccessStatInfo::getUnrecoverableSeekOperations(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNRECOVERABLE_SEEK_OPERATIONS, getUnrecoverableSeekOperations());
	return true;
}

Uint64 UNIX_MediaAccessStatInfo::getUnrecoverableSeekOperations() const
{
	return Uint64(0);
}



Boolean UNIX_MediaAccessStatInfo::initialize()
{
	return false;
}

Boolean UNIX_MediaAccessStatInfo::load(int &pIndex)
{
	return false;
}

Boolean UNIX_MediaAccessStatInfo::finalize()
{
	return false;
}

Boolean UNIX_MediaAccessStatInfo::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String deviceCreationClassNameKey;
	String deviceIDKey;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DEVICE_CREATION_CLASS_NAME)) deviceCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DEVICE_ID)) deviceIDKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
