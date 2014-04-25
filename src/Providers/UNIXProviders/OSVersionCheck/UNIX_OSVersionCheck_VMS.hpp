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


UNIX_OSVersionCheck::UNIX_OSVersionCheck(void)
{
}

UNIX_OSVersionCheck::~UNIX_OSVersionCheck(void)
{
}


Boolean UNIX_OSVersionCheck::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_OSVersionCheck::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_OSVersionCheck::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_OSVersionCheck::getCaption() const
{
	return String ("");
}

Boolean UNIX_OSVersionCheck::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_OSVersionCheck::getDescription() const
{
	return String ("");
}

Boolean UNIX_OSVersionCheck::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_OSVersionCheck::getElementName() const
{
	return String("OSVersionCheck");
}

Boolean UNIX_OSVersionCheck::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_OSVersionCheck::getName() const
{
	return String ("");
}

Boolean UNIX_OSVersionCheck::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_OSVersionCheck::getVersion() const
{
	return String ("");
}

Boolean UNIX_OSVersionCheck::getSoftwareElementState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOFTWARE_ELEMENT_STATE, getSoftwareElementState());
	return true;
}

Uint16 UNIX_OSVersionCheck::getSoftwareElementState() const
{
	return Uint16(0);
}

Boolean UNIX_OSVersionCheck::getSoftwareElementID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOFTWARE_ELEMENT_ID, getSoftwareElementID());
	return true;
}

String UNIX_OSVersionCheck::getSoftwareElementID() const
{
	return String ("");
}

Boolean UNIX_OSVersionCheck::getTargetOperatingSystem(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TARGET_OPERATING_SYSTEM, getTargetOperatingSystem());
	return true;
}

Uint16 UNIX_OSVersionCheck::getTargetOperatingSystem() const
{
	return Uint16(0);
}

Boolean UNIX_OSVersionCheck::getCheckID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHECK_ID, getCheckID());
	return true;
}

String UNIX_OSVersionCheck::getCheckID() const
{
	return String ("");
}

Boolean UNIX_OSVersionCheck::getCheckMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHECK_MODE, getCheckMode());
	return true;
}

Boolean UNIX_OSVersionCheck::getCheckMode() const
{
	return Boolean(false);
}

Boolean UNIX_OSVersionCheck::getMinimumVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MINIMUM_VERSION, getMinimumVersion());
	return true;
}

String UNIX_OSVersionCheck::getMinimumVersion() const
{
	return String ("");
}

Boolean UNIX_OSVersionCheck::getMaximumVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_VERSION, getMaximumVersion());
	return true;
}

String UNIX_OSVersionCheck::getMaximumVersion() const
{
	return String ("");
}



Boolean UNIX_OSVersionCheck::initialize()
{
	return false;
}

Boolean UNIX_OSVersionCheck::load(int &pIndex)
{
	return false;
}

Boolean UNIX_OSVersionCheck::finalize()
{
	return false;
}

Boolean UNIX_OSVersionCheck::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String nameKey;
	String versionKey;
	String softwareElementStateKey;
	String softwareElementIDKey;
	String targetOperatingSystemKey;
	String checkIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_VERSION)) versionKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SOFTWARE_ELEMENT_STATE)) softwareElementStateKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SOFTWARE_ELEMENT_ID)) softwareElementIDKey = kb.getValue();
		else if (keyName.equal(PROPERTY_TARGET_OPERATING_SYSTEM)) targetOperatingSystemKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CHECK_ID)) checkIDKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
