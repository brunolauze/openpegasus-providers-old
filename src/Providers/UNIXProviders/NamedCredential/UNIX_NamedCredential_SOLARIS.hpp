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


UNIX_NamedCredential::UNIX_NamedCredential(void)
{
}

UNIX_NamedCredential::~UNIX_NamedCredential(void)
{
}


Boolean UNIX_NamedCredential::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_NamedCredential::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_NamedCredential::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_NamedCredential::getCaption() const
{
	return String ("");
}

Boolean UNIX_NamedCredential::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_NamedCredential::getDescription() const
{
	return String ("");
}

Boolean UNIX_NamedCredential::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_NamedCredential::getElementName() const
{
	return String("NamedCredential");
}

Boolean UNIX_NamedCredential::getIssued(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ISSUED, getIssued());
	return true;
}

CIMDateTime UNIX_NamedCredential::getIssued() const
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

Boolean UNIX_NamedCredential::getExpires(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXPIRES, getExpires());
	return true;
}

CIMDateTime UNIX_NamedCredential::getExpires() const
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

Boolean UNIX_NamedCredential::getLocalIdentity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCAL_IDENTITY, getLocalIdentity());
	return true;
}

String UNIX_NamedCredential::getLocalIdentity() const
{
	return String ("");
}

Boolean UNIX_NamedCredential::getLocalIdentityType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCAL_IDENTITY_TYPE, getLocalIdentityType());
	return true;
}

Uint16 UNIX_NamedCredential::getLocalIdentityType() const
{
	return Uint16(0);
}

Boolean UNIX_NamedCredential::getPeerIdentity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PEER_IDENTITY, getPeerIdentity());
	return true;
}

String UNIX_NamedCredential::getPeerIdentity() const
{
	return String ("");
}

Boolean UNIX_NamedCredential::getPeerIdentityType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PEER_IDENTITY_TYPE, getPeerIdentityType());
	return true;
}

Uint16 UNIX_NamedCredential::getPeerIdentityType() const
{
	return Uint16(0);
}

Boolean UNIX_NamedCredential::getSharedSecretName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SHARED_SECRET_NAME, getSharedSecretName());
	return true;
}

String UNIX_NamedCredential::getSharedSecretName() const
{
	return String ("");
}



Boolean UNIX_NamedCredential::initialize()
{
	return false;
}

Boolean UNIX_NamedCredential::load(int &pIndex)
{
	return false;
}

Boolean UNIX_NamedCredential::finalize()
{
	return false;
}

Boolean UNIX_NamedCredential::find(Array<CIMKeyBinding> &kbArray)
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
