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


UNIX_UnsignedPublicKey::UNIX_UnsignedPublicKey(void)
{
}

UNIX_UnsignedPublicKey::~UNIX_UnsignedPublicKey(void)
{
}


Boolean UNIX_UnsignedPublicKey::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_UnsignedPublicKey::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_UnsignedPublicKey::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_UnsignedPublicKey::getCaption() const
{
	return String ("");
}

Boolean UNIX_UnsignedPublicKey::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_UnsignedPublicKey::getDescription() const
{
	return String ("");
}

Boolean UNIX_UnsignedPublicKey::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_UnsignedPublicKey::getElementName() const
{
	return String("UnsignedPublicKey");
}

Boolean UNIX_UnsignedPublicKey::getIssued(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ISSUED, getIssued());
	return true;
}

CIMDateTime UNIX_UnsignedPublicKey::getIssued() const
{
	struct tm* clock;			// create a time structure
	time_t val = time(NULL);
	clock = gmtime(&(val));	// Get the last modified time and put it into the time structure
	return CIMDateTime(
		clock->tm_year + 1900,
		clock->tm_mon + 1,
		clock->tm_mday,
		clock->tm_hour,
		clock->tm_min,
		clock->tm_sec,
		0,0,
		clock->tm_gmtoff);
}

Boolean UNIX_UnsignedPublicKey::getExpires(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXPIRES, getExpires());
	return true;
}

CIMDateTime UNIX_UnsignedPublicKey::getExpires() const
{
	struct tm* clock;			// create a time structure
	time_t val = time(NULL);
	clock = gmtime(&(val));	// Get the last modified time and put it into the time structure
	return CIMDateTime(
		clock->tm_year + 1900,
		clock->tm_mon + 1,
		clock->tm_mday,
		clock->tm_hour,
		clock->tm_min,
		clock->tm_sec,
		0,0,
		clock->tm_gmtoff);
}

Boolean UNIX_UnsignedPublicKey::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_UnsignedPublicKey::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_UnsignedPublicKey::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_UnsignedPublicKey::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_UnsignedPublicKey::getServiceCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_CREATION_CLASS_NAME, getServiceCreationClassName());
	return true;
}

String UNIX_UnsignedPublicKey::getServiceCreationClassName() const
{
	return String ("");
}

Boolean UNIX_UnsignedPublicKey::getServiceName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_NAME, getServiceName());
	return true;
}

String UNIX_UnsignedPublicKey::getServiceName() const
{
	return String ("");
}

Boolean UNIX_UnsignedPublicKey::getPeerIdentity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PEER_IDENTITY, getPeerIdentity());
	return true;
}

String UNIX_UnsignedPublicKey::getPeerIdentity() const
{
	return String ("");
}

Boolean UNIX_UnsignedPublicKey::getPeerIdentityType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PEER_IDENTITY_TYPE, getPeerIdentityType());
	return true;
}

Uint16 UNIX_UnsignedPublicKey::getPeerIdentityType() const
{
	return Uint16(0);
}

Boolean UNIX_UnsignedPublicKey::getPublicKey(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PUBLIC_KEY, getPublicKey());
	return true;
}

Array<Uint8> UNIX_UnsignedPublicKey::getPublicKey() const
{
	Array<Uint8> as;
	

	return as;

}



Boolean UNIX_UnsignedPublicKey::initialize()
{
	return false;
}

Boolean UNIX_UnsignedPublicKey::load(int &pIndex)
{
	return false;
}

Boolean UNIX_UnsignedPublicKey::finalize()
{
	return false;
}

Boolean UNIX_UnsignedPublicKey::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String serviceCreationClassNameKey;
	String serviceNameKey;
	String peerIdentityKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SERVICE_CREATION_CLASS_NAME)) serviceCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SERVICE_NAME)) serviceNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_PEER_IDENTITY)) peerIdentityKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
