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


UNIX_BootSourceSetting::UNIX_BootSourceSetting(void)
{
}

UNIX_BootSourceSetting::~UNIX_BootSourceSetting(void)
{
}


Boolean UNIX_BootSourceSetting::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BootSourceSetting::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_BootSourceSetting::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BootSourceSetting::getCaption() const
{
	return String ("");
}

Boolean UNIX_BootSourceSetting::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BootSourceSetting::getDescription() const
{
	return String ("");
}

Boolean UNIX_BootSourceSetting::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BootSourceSetting::getElementName() const
{
	return String("BootSourceSetting");
}

Boolean UNIX_BootSourceSetting::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_BootSourceSetting::getChangeableType() const
{
	return Uint16(0);
}

Boolean UNIX_BootSourceSetting::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_BootSourceSetting::getConfigurationName() const
{
	return String ("");
}

Boolean UNIX_BootSourceSetting::getBootString(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BOOT_STRING, getBootString());
	return true;
}

String UNIX_BootSourceSetting::getBootString() const
{
	return String ("");
}

Boolean UNIX_BootSourceSetting::getBIOSBootString(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_B_I_OS_BOOT_STRING, getBIOSBootString());
	return true;
}

String UNIX_BootSourceSetting::getBIOSBootString() const
{
	return String ("");
}

Boolean UNIX_BootSourceSetting::getStructuredBootString(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STRUCTURED_BOOT_STRING, getStructuredBootString());
	return true;
}

String UNIX_BootSourceSetting::getStructuredBootString() const
{
	return String ("");
}

Boolean UNIX_BootSourceSetting::getFailThroughSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FAIL_THROUGH_SUPPORTED, getFailThroughSupported());
	return true;
}

Uint16 UNIX_BootSourceSetting::getFailThroughSupported() const
{
	return Uint16(0);
}



Boolean UNIX_BootSourceSetting::initialize()
{
	return false;
}

Boolean UNIX_BootSourceSetting::load(int &pIndex)
{
	return false;
}

Boolean UNIX_BootSourceSetting::finalize()
{
	return false;
}

Boolean UNIX_BootSourceSetting::find(Array<CIMKeyBinding> &kbArray)
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
