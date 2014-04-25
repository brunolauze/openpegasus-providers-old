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


UNIX_PickerStatInfo::UNIX_PickerStatInfo(void)
{
}

UNIX_PickerStatInfo::~UNIX_PickerStatInfo(void)
{
}


Boolean UNIX_PickerStatInfo::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PickerStatInfo::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_PickerStatInfo::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PickerStatInfo::getCaption() const
{
	return String ("");
}

Boolean UNIX_PickerStatInfo::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PickerStatInfo::getDescription() const
{
	return String ("");
}

Boolean UNIX_PickerStatInfo::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PickerStatInfo::getElementName() const
{
	return String("PickerStatInfo");
}

Boolean UNIX_PickerStatInfo::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PickerStatInfo::getName() const
{
	return String ("");
}

Boolean UNIX_PickerStatInfo::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_PickerStatInfo::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_PickerStatInfo::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_PickerStatInfo::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_PickerStatInfo::getDeviceCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_CREATION_CLASS_NAME, getDeviceCreationClassName());
	return true;
}

String UNIX_PickerStatInfo::getDeviceCreationClassName() const
{
	return String ("");
}

Boolean UNIX_PickerStatInfo::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_PickerStatInfo::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_PickerStatInfo::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_PickerStatInfo::getCreationClassName() const
{
	return String("UNIX_PickerStatInfo");
}

Boolean UNIX_PickerStatInfo::getPickSuccesses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PICK_SUCCESSES, getPickSuccesses());
	return true;
}

Uint64 UNIX_PickerStatInfo::getPickSuccesses() const
{
	return Uint64(0);
}

Boolean UNIX_PickerStatInfo::getPickFailures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PICK_FAILURES, getPickFailures());
	return true;
}

Uint64 UNIX_PickerStatInfo::getPickFailures() const
{
	return Uint64(0);
}

Boolean UNIX_PickerStatInfo::getPickRetries(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PICK_RETRIES, getPickRetries());
	return true;
}

Uint64 UNIX_PickerStatInfo::getPickRetries() const
{
	return Uint64(0);
}

Boolean UNIX_PickerStatInfo::getPutSuccesses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PUT_SUCCESSES, getPutSuccesses());
	return true;
}

Uint64 UNIX_PickerStatInfo::getPutSuccesses() const
{
	return Uint64(0);
}

Boolean UNIX_PickerStatInfo::getPutFailures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PUT_FAILURES, getPutFailures());
	return true;
}

Uint64 UNIX_PickerStatInfo::getPutFailures() const
{
	return Uint64(0);
}

Boolean UNIX_PickerStatInfo::getPutRetries(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PUT_RETRIES, getPutRetries());
	return true;
}

Uint64 UNIX_PickerStatInfo::getPutRetries() const
{
	return Uint64(0);
}



Boolean UNIX_PickerStatInfo::initialize()
{
	return false;
}

Boolean UNIX_PickerStatInfo::load(int &pIndex)
{
	return false;
}

Boolean UNIX_PickerStatInfo::finalize()
{
	return false;
}

Boolean UNIX_PickerStatInfo::find(Array<CIMKeyBinding> &kbArray)
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
