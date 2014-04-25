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


UNIX_IEEE8021xCapabilities::UNIX_IEEE8021xCapabilities(void)
{
}

UNIX_IEEE8021xCapabilities::~UNIX_IEEE8021xCapabilities(void)
{
}


Boolean UNIX_IEEE8021xCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_IEEE8021xCapabilities::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_IEEE8021xCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_IEEE8021xCapabilities::getCaption() const
{
	return String ("");
}

Boolean UNIX_IEEE8021xCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_IEEE8021xCapabilities::getDescription() const
{
	return String ("");
}

Boolean UNIX_IEEE8021xCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_IEEE8021xCapabilities::getElementName() const
{
	return String("IEEE8021xCapabilities");
}

Boolean UNIX_IEEE8021xCapabilities::getSupportedAuthenticationProtocols(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_AUTHENTICATION_PROTOCOLS, getSupportedAuthenticationProtocols());
	return true;
}

Array<Uint16> UNIX_IEEE8021xCapabilities::getSupportedAuthenticationProtocols() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_IEEE8021xCapabilities::getRoamingSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROAMING_SUPPORTED, getRoamingSupported());
	return true;
}

Boolean UNIX_IEEE8021xCapabilities::getRoamingSupported() const
{
	return Boolean(false);
}

Boolean UNIX_IEEE8021xCapabilities::getFastRoamingSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FAST_ROAMING_SUPPORTED, getFastRoamingSupported());
	return true;
}

Boolean UNIX_IEEE8021xCapabilities::getFastRoamingSupported() const
{
	return Boolean(false);
}



Boolean UNIX_IEEE8021xCapabilities::initialize()
{
	return false;
}

Boolean UNIX_IEEE8021xCapabilities::load(int &pIndex)
{
	return false;
}

Boolean UNIX_IEEE8021xCapabilities::finalize()
{
	return false;
}

Boolean UNIX_IEEE8021xCapabilities::find(Array<CIMKeyBinding> &kbArray)
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
