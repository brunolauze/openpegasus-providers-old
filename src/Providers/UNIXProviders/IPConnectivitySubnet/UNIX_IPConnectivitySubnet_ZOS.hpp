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


UNIX_IPConnectivitySubnet::UNIX_IPConnectivitySubnet(void)
{
}

UNIX_IPConnectivitySubnet::~UNIX_IPConnectivitySubnet(void)
{
}


Boolean UNIX_IPConnectivitySubnet::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_IPConnectivitySubnet::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_IPConnectivitySubnet::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_IPConnectivitySubnet::getCaption() const
{
	return String ("");
}

Boolean UNIX_IPConnectivitySubnet::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_IPConnectivitySubnet::getDescription() const
{
	return String ("");
}

Boolean UNIX_IPConnectivitySubnet::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_IPConnectivitySubnet::getElementName() const
{
	return String("IPConnectivitySubnet");
}

Boolean UNIX_IPConnectivitySubnet::getConnectivityStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTIVITY_STATUS, getConnectivityStatus());
	return true;
}

Uint16 UNIX_IPConnectivitySubnet::getConnectivityStatus() const
{
	return Uint16(0);
}

Boolean UNIX_IPConnectivitySubnet::getSubnetNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBNET_NUMBER, getSubnetNumber());
	return true;
}

String UNIX_IPConnectivitySubnet::getSubnetNumber() const
{
	return String ("");
}

Boolean UNIX_IPConnectivitySubnet::getSubnetMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBNET_MASK, getSubnetMask());
	return true;
}

String UNIX_IPConnectivitySubnet::getSubnetMask() const
{
	return String ("");
}

Boolean UNIX_IPConnectivitySubnet::getPrefixLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PREFIX_LENGTH, getPrefixLength());
	return true;
}

Uint8 UNIX_IPConnectivitySubnet::getPrefixLength() const
{
	return Uint8(0);
}

Boolean UNIX_IPConnectivitySubnet::getAddressType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_TYPE, getAddressType());
	return true;
}

Uint16 UNIX_IPConnectivitySubnet::getAddressType() const
{
	return Uint16(0);
}



Boolean UNIX_IPConnectivitySubnet::initialize()
{
	return false;
}

Boolean UNIX_IPConnectivitySubnet::load(int &pIndex)
{
	return false;
}

Boolean UNIX_IPConnectivitySubnet::finalize()
{
	return false;
}

Boolean UNIX_IPConnectivitySubnet::find(Array<CIMKeyBinding> &kbArray)
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
