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


UNIX_iSCSICapabilities::UNIX_iSCSICapabilities(void)
{
}

UNIX_iSCSICapabilities::~UNIX_iSCSICapabilities(void)
{
}


Boolean UNIX_iSCSICapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_iSCSICapabilities::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_iSCSICapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_iSCSICapabilities::getCaption() const
{
	return String ("");
}

Boolean UNIX_iSCSICapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_iSCSICapabilities::getDescription() const
{
	return String ("");
}

Boolean UNIX_iSCSICapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_iSCSICapabilities::getElementName() const
{
	return String("iSCSICapabilities");
}

Boolean UNIX_iSCSICapabilities::getMinimumSpecificationVersionSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MINIMUM_SPECIFICATION_VERSION_SUPPORTED, getMinimumSpecificationVersionSupported());
	return true;
}

Uint8 UNIX_iSCSICapabilities::getMinimumSpecificationVersionSupported() const
{
	return Uint8(0);
}

Boolean UNIX_iSCSICapabilities::getMaximumSpecificationVersionSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_SPECIFICATION_VERSION_SUPPORTED, getMaximumSpecificationVersionSupported());
	return true;
}

Uint8 UNIX_iSCSICapabilities::getMaximumSpecificationVersionSupported() const
{
	return Uint8(0);
}

Boolean UNIX_iSCSICapabilities::getAuthenticationMethodsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTHENTICATION_METHODS_SUPPORTED, getAuthenticationMethodsSupported());
	return true;
}

Array<Uint16> UNIX_iSCSICapabilities::getAuthenticationMethodsSupported() const
{
	Array<Uint16> as;
	

	return as;

}



Boolean UNIX_iSCSICapabilities::initialize()
{
	return false;
}

Boolean UNIX_iSCSICapabilities::load(int &pIndex)
{
	return false;
}

Boolean UNIX_iSCSICapabilities::finalize()
{
	return false;
}

Boolean UNIX_iSCSICapabilities::find(Array<CIMKeyBinding> &kbArray)
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
