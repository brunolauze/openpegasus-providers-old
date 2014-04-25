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


UNIX_GatewayPathID::UNIX_GatewayPathID(void)
{
}

UNIX_GatewayPathID::~UNIX_GatewayPathID(void)
{
}


Boolean UNIX_GatewayPathID::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_GatewayPathID::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_GatewayPathID::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_GatewayPathID::getCaption() const
{
	return String ("");
}

Boolean UNIX_GatewayPathID::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_GatewayPathID::getDescription() const
{
	return String ("");
}

Boolean UNIX_GatewayPathID::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_GatewayPathID::getElementName() const
{
	return String("GatewayPathID");
}

Boolean UNIX_GatewayPathID::getCurrentlyAuthenticated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENTLY_AUTHENTICATED, getCurrentlyAuthenticated());
	return true;
}

Boolean UNIX_GatewayPathID::getCurrentlyAuthenticated() const
{
	return Boolean(false);
}

Boolean UNIX_GatewayPathID::getStorageID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STORAGE_ID, getStorageID());
	return true;
}

String UNIX_GatewayPathID::getStorageID() const
{
	return String ("");
}

Boolean UNIX_GatewayPathID::getIDType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ID_TYPE, getIDType());
	return true;
}

Uint16 UNIX_GatewayPathID::getIDType() const
{
	return Uint16(0);
}

Boolean UNIX_GatewayPathID::getOtherIDType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ID_TYPE, getOtherIDType());
	return true;
}

String UNIX_GatewayPathID::getOtherIDType() const
{
	return String ("");
}

Boolean UNIX_GatewayPathID::getGatewayID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GATEWAY_ID, getGatewayID());
	return true;
}

String UNIX_GatewayPathID::getGatewayID() const
{
	return String ("");
}

Boolean UNIX_GatewayPathID::getGatewayIDType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GATEWAY_ID_TYPE, getGatewayIDType());
	return true;
}

Uint16 UNIX_GatewayPathID::getGatewayIDType() const
{
	return Uint16(0);
}

Boolean UNIX_GatewayPathID::getOtherGatewayIDType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_GATEWAY_ID_TYPE, getOtherGatewayIDType());
	return true;
}

String UNIX_GatewayPathID::getOtherGatewayIDType() const
{
	return String ("");
}



Boolean UNIX_GatewayPathID::initialize()
{
	return false;
}

Boolean UNIX_GatewayPathID::load(int &pIndex)
{
	return false;
}

Boolean UNIX_GatewayPathID::finalize()
{
	return false;
}

Boolean UNIX_GatewayPathID::find(Array<CIMKeyBinding> &kbArray)
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
