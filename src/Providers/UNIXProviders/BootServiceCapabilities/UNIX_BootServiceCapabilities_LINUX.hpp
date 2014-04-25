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


UNIX_BootServiceCapabilities::UNIX_BootServiceCapabilities(void)
{
}

UNIX_BootServiceCapabilities::~UNIX_BootServiceCapabilities(void)
{
}


Boolean UNIX_BootServiceCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BootServiceCapabilities::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_BootServiceCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BootServiceCapabilities::getCaption() const
{
	return String ("");
}

Boolean UNIX_BootServiceCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BootServiceCapabilities::getDescription() const
{
	return String ("");
}

Boolean UNIX_BootServiceCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BootServiceCapabilities::getElementName() const
{
	return String("BootServiceCapabilities");
}

Boolean UNIX_BootServiceCapabilities::getElementNameEditSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_EDIT_SUPPORTED, getElementNameEditSupported());
	return true;
}

Boolean UNIX_BootServiceCapabilities::getElementNameEditSupported() const
{
	return Boolean(false);
}

Boolean UNIX_BootServiceCapabilities::getMaxElementNameLen(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ELEMENT_NAME_LEN, getMaxElementNameLen());
	return true;
}

Uint16 UNIX_BootServiceCapabilities::getMaxElementNameLen() const
{
	return Uint16(0);
}

Boolean UNIX_BootServiceCapabilities::getRequestedStatesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATES_SUPPORTED, getRequestedStatesSupported());
	return true;
}

Array<Uint16> UNIX_BootServiceCapabilities::getRequestedStatesSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_BootServiceCapabilities::getElementNameMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_MASK, getElementNameMask());
	return true;
}

String UNIX_BootServiceCapabilities::getElementNameMask() const
{
	return String ("");
}

Boolean UNIX_BootServiceCapabilities::getBootConfigCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BOOT_CONFIG_CAPABILITIES, getBootConfigCapabilities());
	return true;
}

Array<Uint16> UNIX_BootServiceCapabilities::getBootConfigCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_BootServiceCapabilities::getOtherBootConfigCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_BOOT_CONFIG_CAPABILITIES, getOtherBootConfigCapabilities());
	return true;
}

Array<String> UNIX_BootServiceCapabilities::getOtherBootConfigCapabilities() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_BootServiceCapabilities::getBootStringsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BOOT_STRINGS_SUPPORTED, getBootStringsSupported());
	return true;
}

Array<Uint16> UNIX_BootServiceCapabilities::getBootStringsSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_BootServiceCapabilities::getBootCapabilitiesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BOOT_CAPABILITIES_SUPPORTED, getBootCapabilitiesSupported());
	return true;
}

Array<Uint16> UNIX_BootServiceCapabilities::getBootCapabilitiesSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_BootServiceCapabilities::getOtherBootCapabilitiesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_BOOT_CAPABILITIES_SUPPORTED, getOtherBootCapabilitiesSupported());
	return true;
}

Array<String> UNIX_BootServiceCapabilities::getOtherBootCapabilitiesSupported() const
{
	Array<String> as;
	

	return as;

}



Boolean UNIX_BootServiceCapabilities::initialize()
{
	return false;
}

Boolean UNIX_BootServiceCapabilities::load(int &pIndex)
{
	return false;
}

Boolean UNIX_BootServiceCapabilities::finalize()
{
	return false;
}

Boolean UNIX_BootServiceCapabilities::find(Array<CIMKeyBinding> &kbArray)
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
