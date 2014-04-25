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


UNIX_X509CRL::UNIX_X509CRL(void)
{
}

UNIX_X509CRL::~UNIX_X509CRL(void)
{
}


Boolean UNIX_X509CRL::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_X509CRL::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_X509CRL::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_X509CRL::getCaption() const
{
	return String ("");
}

Boolean UNIX_X509CRL::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_X509CRL::getDescription() const
{
	return String ("");
}

Boolean UNIX_X509CRL::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_X509CRL::getElementName() const
{
	return String("X509CRL");
}

Boolean UNIX_X509CRL::getIssued(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ISSUED, getIssued());
	return true;
}

CIMDateTime UNIX_X509CRL::getIssued() const
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

Boolean UNIX_X509CRL::getExpires(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXPIRES, getExpires());
	return true;
}

CIMDateTime UNIX_X509CRL::getExpires() const
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

Boolean UNIX_X509CRL::getIssuerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ISSUER_NAME, getIssuerName());
	return true;
}

String UNIX_X509CRL::getIssuerName() const
{
	return String ("");
}

Boolean UNIX_X509CRL::getSignature(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIGNATURE, getSignature());
	return true;
}

Array<Uint8> UNIX_X509CRL::getSignature() const
{
	Array<Uint8> as;
	

	return as;

}

Boolean UNIX_X509CRL::getSignatureAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIGNATURE_ALGORITHM, getSignatureAlgorithm());
	return true;
}

Uint16 UNIX_X509CRL::getSignatureAlgorithm() const
{
	return Uint16(0);
}

Boolean UNIX_X509CRL::getOtherSignatureAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SIGNATURE_ALGORITHM, getOtherSignatureAlgorithm());
	return true;
}

String UNIX_X509CRL::getOtherSignatureAlgorithm() const
{
	return String ("");
}

Boolean UNIX_X509CRL::getSignatureAlgorithmOID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIGNATURE_ALGORITHM_O_ID, getSignatureAlgorithmOID());
	return true;
}

String UNIX_X509CRL::getSignatureAlgorithmOID() const
{
	return String ("");
}

Boolean UNIX_X509CRL::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

Uint16 UNIX_X509CRL::getVersion() const
{
	return Uint16(0);
}

Boolean UNIX_X509CRL::getTBSCertificate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_T_B_S_CERTIFICATE, getTBSCertificate());
	return true;
}

Array<String> UNIX_X509CRL::getTBSCertificate() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_X509CRL::getMD5Fingerprint(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_M_D_5_FINGERPRINT, getMD5Fingerprint());
	return true;
}

Array<String> UNIX_X509CRL::getMD5Fingerprint() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_X509CRL::getSHA1Fingerprint(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_H_A_1_FINGERPRINT, getSHA1Fingerprint());
	return true;
}

Array<String> UNIX_X509CRL::getSHA1Fingerprint() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_X509CRL::getFingerprintDigestAlgorithms(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FINGERPRINT_DIGEST_ALGORITHMS, getFingerprintDigestAlgorithms());
	return true;
}

Array<Uint16> UNIX_X509CRL::getFingerprintDigestAlgorithms() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_X509CRL::getFingerprints(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FINGERPRINTS, getFingerprints());
	return true;
}

Array<String> UNIX_X509CRL::getFingerprints() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_X509CRL::getNextUpdate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NEXT_UPDATE, getNextUpdate());
	return true;
}

CIMDateTime UNIX_X509CRL::getNextUpdate() const
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

Boolean UNIX_X509CRL::getEncodedCRL(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENCODED_C_R_L, getEncodedCRL());
	return true;
}

Array<String> UNIX_X509CRL::getEncodedCRL() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_X509CRL::getSerialNumbers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERIAL_NUMBERS, getSerialNumbers());
	return true;
}

Array<String> UNIX_X509CRL::getSerialNumbers() const
{
	Array<String> as;
	

	return as;

}



Boolean UNIX_X509CRL::initialize()
{
	return false;
}

Boolean UNIX_X509CRL::load(int &pIndex)
{
	return false;
}

Boolean UNIX_X509CRL::finalize()
{
	return false;
}

Boolean UNIX_X509CRL::find(Array<CIMKeyBinding> &kbArray)
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
