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


UNIX_LabelReaderStatInfo::UNIX_LabelReaderStatInfo(void)
{
}

UNIX_LabelReaderStatInfo::~UNIX_LabelReaderStatInfo(void)
{
}


Boolean UNIX_LabelReaderStatInfo::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_LabelReaderStatInfo::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_LabelReaderStatInfo::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_LabelReaderStatInfo::getCaption() const
{
	return String ("");
}

Boolean UNIX_LabelReaderStatInfo::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_LabelReaderStatInfo::getDescription() const
{
	return String ("");
}

Boolean UNIX_LabelReaderStatInfo::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_LabelReaderStatInfo::getElementName() const
{
	return String("LabelReaderStatInfo");
}

Boolean UNIX_LabelReaderStatInfo::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_LabelReaderStatInfo::getName() const
{
	return String ("");
}

Boolean UNIX_LabelReaderStatInfo::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_LabelReaderStatInfo::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_LabelReaderStatInfo::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_LabelReaderStatInfo::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_LabelReaderStatInfo::getDeviceCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_CREATION_CLASS_NAME, getDeviceCreationClassName());
	return true;
}

String UNIX_LabelReaderStatInfo::getDeviceCreationClassName() const
{
	return String ("");
}

Boolean UNIX_LabelReaderStatInfo::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_LabelReaderStatInfo::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_LabelReaderStatInfo::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_LabelReaderStatInfo::getCreationClassName() const
{
	return String("UNIX_LabelReaderStatInfo");
}

Boolean UNIX_LabelReaderStatInfo::getScanSuccesses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCAN_SUCCESSES, getScanSuccesses());
	return true;
}

Uint64 UNIX_LabelReaderStatInfo::getScanSuccesses() const
{
	return Uint64(0);
}

Boolean UNIX_LabelReaderStatInfo::getScanFailures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCAN_FAILURES, getScanFailures());
	return true;
}

Uint64 UNIX_LabelReaderStatInfo::getScanFailures() const
{
	return Uint64(0);
}

Boolean UNIX_LabelReaderStatInfo::getScanRetries(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCAN_RETRIES, getScanRetries());
	return true;
}

Uint64 UNIX_LabelReaderStatInfo::getScanRetries() const
{
	return Uint64(0);
}



Boolean UNIX_LabelReaderStatInfo::initialize()
{
	return false;
}

Boolean UNIX_LabelReaderStatInfo::load(int &pIndex)
{
	return false;
}

Boolean UNIX_LabelReaderStatInfo::finalize()
{
	return false;
}

Boolean UNIX_LabelReaderStatInfo::find(Array<CIMKeyBinding> &kbArray)
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
