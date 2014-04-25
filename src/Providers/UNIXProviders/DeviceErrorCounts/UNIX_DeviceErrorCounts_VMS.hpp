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


UNIX_DeviceErrorCounts::UNIX_DeviceErrorCounts(void)
{
}

UNIX_DeviceErrorCounts::~UNIX_DeviceErrorCounts(void)
{
}


Boolean UNIX_DeviceErrorCounts::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DeviceErrorCounts::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_DeviceErrorCounts::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DeviceErrorCounts::getCaption() const
{
	return String ("");
}

Boolean UNIX_DeviceErrorCounts::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DeviceErrorCounts::getDescription() const
{
	return String ("");
}

Boolean UNIX_DeviceErrorCounts::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DeviceErrorCounts::getElementName() const
{
	return String("DeviceErrorCounts");
}

Boolean UNIX_DeviceErrorCounts::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_DeviceErrorCounts::getName() const
{
	return String ("");
}

Boolean UNIX_DeviceErrorCounts::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_DeviceErrorCounts::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_DeviceErrorCounts::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_DeviceErrorCounts::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_DeviceErrorCounts::getDeviceCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_CREATION_CLASS_NAME, getDeviceCreationClassName());
	return true;
}

String UNIX_DeviceErrorCounts::getDeviceCreationClassName() const
{
	return String ("");
}

Boolean UNIX_DeviceErrorCounts::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_DeviceErrorCounts::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_DeviceErrorCounts::getIndeterminateErrorCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INDETERMINATE_ERROR_COUNT, getIndeterminateErrorCount());
	return true;
}

Uint64 UNIX_DeviceErrorCounts::getIndeterminateErrorCount() const
{
	return Uint64(0);
}

Boolean UNIX_DeviceErrorCounts::getCriticalErrorCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CRITICAL_ERROR_COUNT, getCriticalErrorCount());
	return true;
}

Uint64 UNIX_DeviceErrorCounts::getCriticalErrorCount() const
{
	return Uint64(0);
}

Boolean UNIX_DeviceErrorCounts::getMajorErrorCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAJOR_ERROR_COUNT, getMajorErrorCount());
	return true;
}

Uint64 UNIX_DeviceErrorCounts::getMajorErrorCount() const
{
	return Uint64(0);
}

Boolean UNIX_DeviceErrorCounts::getMinorErrorCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MINOR_ERROR_COUNT, getMinorErrorCount());
	return true;
}

Uint64 UNIX_DeviceErrorCounts::getMinorErrorCount() const
{
	return Uint64(0);
}

Boolean UNIX_DeviceErrorCounts::getWarningCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WARNING_COUNT, getWarningCount());
	return true;
}

Uint64 UNIX_DeviceErrorCounts::getWarningCount() const
{
	return Uint64(0);
}



Boolean UNIX_DeviceErrorCounts::initialize()
{
	return false;
}

Boolean UNIX_DeviceErrorCounts::load(int &pIndex)
{
	return false;
}

Boolean UNIX_DeviceErrorCounts::finalize()
{
	return false;
}

Boolean UNIX_DeviceErrorCounts::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String deviceCreationClassNameKey;
	String deviceIDKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DEVICE_CREATION_CLASS_NAME)) deviceCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DEVICE_ID)) deviceIDKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
