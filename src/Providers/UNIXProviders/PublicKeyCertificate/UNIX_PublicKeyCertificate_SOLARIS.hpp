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


UNIX_PublicKeyCertificate::UNIX_PublicKeyCertificate(void)
{
}

UNIX_PublicKeyCertificate::~UNIX_PublicKeyCertificate(void)
{
}


Boolean UNIX_PublicKeyCertificate::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PublicKeyCertificate::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_PublicKeyCertificate::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PublicKeyCertificate::getCaption() const
{
	return String ("");
}

Boolean UNIX_PublicKeyCertificate::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PublicKeyCertificate::getDescription() const
{
	return String ("");
}

Boolean UNIX_PublicKeyCertificate::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PublicKeyCertificate::getElementName() const
{
	return String("PublicKeyCertificate");
}

Boolean UNIX_PublicKeyCertificate::getIssued(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ISSUED, getIssued());
	return true;
}

CIMDateTime UNIX_PublicKeyCertificate::getIssued() const
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

Boolean UNIX_PublicKeyCertificate::getExpires(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXPIRES, getExpires());
	return true;
}

CIMDateTime UNIX_PublicKeyCertificate::getExpires() const
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

Boolean UNIX_PublicKeyCertificate::getIssuerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ISSUER_NAME, getIssuerName());
	return true;
}

String UNIX_PublicKeyCertificate::getIssuerName() const
{
	return String ("");
}

Boolean UNIX_PublicKeyCertificate::getSignature(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIGNATURE, getSignature());
	return true;
}

Array<Uint8> UNIX_PublicKeyCertificate::getSignature() const
{
	Array<Uint8> as;
	

	return as;

}

Boolean UNIX_PublicKeyCertificate::getSignatureAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIGNATURE_ALGORITHM, getSignatureAlgorithm());
	return true;
}

Uint16 UNIX_PublicKeyCertificate::getSignatureAlgorithm() const
{
	return Uint16(0);
}

Boolean UNIX_PublicKeyCertificate::getOtherSignatureAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SIGNATURE_ALGORITHM, getOtherSignatureAlgorithm());
	return true;
}

String UNIX_PublicKeyCertificate::getOtherSignatureAlgorithm() const
{
	return String ("");
}

Boolean UNIX_PublicKeyCertificate::getSignatureAlgorithmOID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIGNATURE_ALGORITHM_O_ID, getSignatureAlgorithmOID());
	return true;
}

String UNIX_PublicKeyCertificate::getSignatureAlgorithmOID() const
{
	return String ("");
}

Boolean UNIX_PublicKeyCertificate::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_PublicKeyCertificate::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_PublicKeyCertificate::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_PublicKeyCertificate::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_PublicKeyCertificate::getServiceCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_CREATION_CLASS_NAME, getServiceCreationClassName());
	return true;
}

String UNIX_PublicKeyCertificate::getServiceCreationClassName() const
{
	return String ("");
}

Boolean UNIX_PublicKeyCertificate::getServiceName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_NAME, getServiceName());
	return true;
}

String UNIX_PublicKeyCertificate::getServiceName() const
{
	return String ("");
}

Boolean UNIX_PublicKeyCertificate::getSubject(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBJECT, getSubject());
	return true;
}

String UNIX_PublicKeyCertificate::getSubject() const
{
	return String ("");
}

Boolean UNIX_PublicKeyCertificate::getAltSubject(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALT_SUBJECT, getAltSubject());
	return true;
}

String UNIX_PublicKeyCertificate::getAltSubject() const
{
	return String ("");
}

Boolean UNIX_PublicKeyCertificate::getPublicKey(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PUBLIC_KEY, getPublicKey());
	return true;
}

Array<Uint8> UNIX_PublicKeyCertificate::getPublicKey() const
{
	Array<Uint8> as;
	

	return as;

}



Boolean UNIX_PublicKeyCertificate::initialize()
{
	return false;
}

Boolean UNIX_PublicKeyCertificate::load(int &pIndex)
{
	return false;
}

Boolean UNIX_PublicKeyCertificate::finalize()
{
	return false;
}

Boolean UNIX_PublicKeyCertificate::find(Array<CIMKeyBinding> &kbArray)
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
