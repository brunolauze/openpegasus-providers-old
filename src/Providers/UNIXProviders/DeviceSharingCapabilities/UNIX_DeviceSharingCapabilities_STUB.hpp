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


UNIX_DeviceSharingCapabilities::UNIX_DeviceSharingCapabilities(void)
{
}

UNIX_DeviceSharingCapabilities::~UNIX_DeviceSharingCapabilities(void)
{
}


Boolean UNIX_DeviceSharingCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DeviceSharingCapabilities::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_DeviceSharingCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DeviceSharingCapabilities::getCaption() const
{
	return String ("");
}

Boolean UNIX_DeviceSharingCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DeviceSharingCapabilities::getDescription() const
{
	return String ("");
}

Boolean UNIX_DeviceSharingCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DeviceSharingCapabilities::getElementName() const
{
	return String("DeviceSharingCapabilities");
}

Boolean UNIX_DeviceSharingCapabilities::getSupportedAccessModes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_ACCESS_MODES, getSupportedAccessModes());
	return true;
}

Array<Uint16> UNIX_DeviceSharingCapabilities::getSupportedAccessModes() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DeviceSharingCapabilities::getOtherSupportedAccessModes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPORTED_ACCESS_MODES, getOtherSupportedAccessModes());
	return true;
}

Array<String> UNIX_DeviceSharingCapabilities::getOtherSupportedAccessModes() const
{
	Array<String> as;
	

	return as;

}



Boolean UNIX_DeviceSharingCapabilities::initialize()
{
	return false;
}

Boolean UNIX_DeviceSharingCapabilities::load(int &pIndex)
{
	return false;
}

Boolean UNIX_DeviceSharingCapabilities::finalize()
{
	return false;
}

Boolean UNIX_DeviceSharingCapabilities::find(Array<CIMKeyBinding> &kbArray)
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
