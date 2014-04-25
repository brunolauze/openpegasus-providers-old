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


UNIX_NamedSharedIKESecret::UNIX_NamedSharedIKESecret(void)
{
}

UNIX_NamedSharedIKESecret::~UNIX_NamedSharedIKESecret(void)
{
}


Boolean UNIX_NamedSharedIKESecret::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_NamedSharedIKESecret::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_NamedSharedIKESecret::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_NamedSharedIKESecret::getCaption() const
{
	return String ("");
}

Boolean UNIX_NamedSharedIKESecret::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_NamedSharedIKESecret::getDescription() const
{
	return String ("");
}

Boolean UNIX_NamedSharedIKESecret::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_NamedSharedIKESecret::getElementName() const
{
	return String("NamedSharedIKESecret");
}

Boolean UNIX_NamedSharedIKESecret::getIssued(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ISSUED, getIssued());
	return true;
}

CIMDateTime UNIX_NamedSharedIKESecret::getIssued() const
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

Boolean UNIX_NamedSharedIKESecret::getExpires(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXPIRES, getExpires());
	return true;
}

CIMDateTime UNIX_NamedSharedIKESecret::getExpires() const
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

Boolean UNIX_NamedSharedIKESecret::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_NamedSharedIKESecret::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_NamedSharedIKESecret::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_NamedSharedIKESecret::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_NamedSharedIKESecret::getServiceCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_CREATION_CLASS_NAME, getServiceCreationClassName());
	return true;
}

String UNIX_NamedSharedIKESecret::getServiceCreationClassName() const
{
	return String ("");
}

Boolean UNIX_NamedSharedIKESecret::getServiceName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_NAME, getServiceName());
	return true;
}

String UNIX_NamedSharedIKESecret::getServiceName() const
{
	return String ("");
}

Boolean UNIX_NamedSharedIKESecret::getLocalIdentity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCAL_IDENTITY, getLocalIdentity());
	return true;
}

String UNIX_NamedSharedIKESecret::getLocalIdentity() const
{
	return String ("");
}

Boolean UNIX_NamedSharedIKESecret::getLocalIdentityType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCAL_IDENTITY_TYPE, getLocalIdentityType());
	return true;
}

Uint16 UNIX_NamedSharedIKESecret::getLocalIdentityType() const
{
	return Uint16(0);
}

Boolean UNIX_NamedSharedIKESecret::getPeerIdentity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PEER_IDENTITY, getPeerIdentity());
	return true;
}

String UNIX_NamedSharedIKESecret::getPeerIdentity() const
{
	return String ("");
}

Boolean UNIX_NamedSharedIKESecret::getPeerIdentityType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PEER_IDENTITY_TYPE, getPeerIdentityType());
	return true;
}

Uint16 UNIX_NamedSharedIKESecret::getPeerIdentityType() const
{
	return Uint16(0);
}

Boolean UNIX_NamedSharedIKESecret::getSharedSecretName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SHARED_SECRET_NAME, getSharedSecretName());
	return true;
}

String UNIX_NamedSharedIKESecret::getSharedSecretName() const
{
	return String ("");
}



Boolean UNIX_NamedSharedIKESecret::initialize()
{
	return false;
}

Boolean UNIX_NamedSharedIKESecret::load(int &pIndex)
{
	return false;
}

Boolean UNIX_NamedSharedIKESecret::finalize()
{
	return false;
}

Boolean UNIX_NamedSharedIKESecret::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String serviceCreationClassNameKey;
	String serviceNameKey;
	String localIdentityKey;
	String localIdentityTypeKey;
	String peerIdentityKey;
	String peerIdentityTypeKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SERVICE_CREATION_CLASS_NAME)) serviceCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SERVICE_NAME)) serviceNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_LOCAL_IDENTITY)) localIdentityKey = kb.getValue();
		else if (keyName.equal(PROPERTY_LOCAL_IDENTITY_TYPE)) localIdentityTypeKey = kb.getValue();
		else if (keyName.equal(PROPERTY_PEER_IDENTITY)) peerIdentityKey = kb.getValue();
		else if (keyName.equal(PROPERTY_PEER_IDENTITY_TYPE)) peerIdentityTypeKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
