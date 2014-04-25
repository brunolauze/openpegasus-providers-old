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


UNIX_FCPortCapabilities::UNIX_FCPortCapabilities(void)
{
}

UNIX_FCPortCapabilities::~UNIX_FCPortCapabilities(void)
{
}


Boolean UNIX_FCPortCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FCPortCapabilities::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_FCPortCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FCPortCapabilities::getCaption() const
{
	return String ("");
}

Boolean UNIX_FCPortCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FCPortCapabilities::getDescription() const
{
	return String ("");
}

Boolean UNIX_FCPortCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FCPortCapabilities::getElementName() const
{
	return String("FCPortCapabilities");
}

Boolean UNIX_FCPortCapabilities::getElementNameEditSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_EDIT_SUPPORTED, getElementNameEditSupported());
	return true;
}

Boolean UNIX_FCPortCapabilities::getElementNameEditSupported() const
{
	return Boolean(false);
}

Boolean UNIX_FCPortCapabilities::getMaxElementNameLen(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ELEMENT_NAME_LEN, getMaxElementNameLen());
	return true;
}

Uint16 UNIX_FCPortCapabilities::getMaxElementNameLen() const
{
	return Uint16(0);
}

Boolean UNIX_FCPortCapabilities::getRequestedStatesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATES_SUPPORTED, getRequestedStatesSupported());
	return true;
}

Array<Uint16> UNIX_FCPortCapabilities::getRequestedStatesSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_FCPortCapabilities::getElementNameMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_MASK, getElementNameMask());
	return true;
}

String UNIX_FCPortCapabilities::getElementNameMask() const
{
	return String ("");
}

Boolean UNIX_FCPortCapabilities::getRequestedSpeedsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_SPEEDS_SUPPORTED, getRequestedSpeedsSupported());
	return true;
}

Array<Uint64> UNIX_FCPortCapabilities::getRequestedSpeedsSupported() const
{
	Array<Uint64> as;
	

	return as;

}

Boolean UNIX_FCPortCapabilities::getAutoSenseSpeedConfigurable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTO_SENSE_SPEED_CONFIGURABLE, getAutoSenseSpeedConfigurable());
	return true;
}

Boolean UNIX_FCPortCapabilities::getAutoSenseSpeedConfigurable() const
{
	return Boolean(false);
}

Boolean UNIX_FCPortCapabilities::getRequestedTypesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_TYPES_SUPPORTED, getRequestedTypesSupported());
	return true;
}

Array<Uint16> UNIX_FCPortCapabilities::getRequestedTypesSupported() const
{
	Array<Uint16> as;
	

	return as;

}



Boolean UNIX_FCPortCapabilities::initialize()
{
	return false;
}

Boolean UNIX_FCPortCapabilities::load(int &pIndex)
{
	return false;
}

Boolean UNIX_FCPortCapabilities::finalize()
{
	return false;
}

Boolean UNIX_FCPortCapabilities::find(Array<CIMKeyBinding> &kbArray)
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
