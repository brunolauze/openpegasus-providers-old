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


UNIX_X509Certificate::UNIX_X509Certificate(void)
{
}

UNIX_X509Certificate::~UNIX_X509Certificate(void)
{
}


Boolean UNIX_X509Certificate::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_X509Certificate::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_X509Certificate::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_X509Certificate::getCaption() const
{
	return String ("");
}

Boolean UNIX_X509Certificate::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_X509Certificate::getDescription() const
{
	return String ("");
}

Boolean UNIX_X509Certificate::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_X509Certificate::getElementName() const
{
	return String("X509Certificate");
}

Boolean UNIX_X509Certificate::getIssued(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ISSUED, getIssued());
	return true;
}

CIMDateTime UNIX_X509Certificate::getIssued() const
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

Boolean UNIX_X509Certificate::getExpires(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXPIRES, getExpires());
	return true;
}

CIMDateTime UNIX_X509Certificate::getExpires() const
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

Boolean UNIX_X509Certificate::getIssuerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ISSUER_NAME, getIssuerName());
	return true;
}

String UNIX_X509Certificate::getIssuerName() const
{
	return String ("");
}

Boolean UNIX_X509Certificate::getSignature(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIGNATURE, getSignature());
	return true;
}

Array<Uint8> UNIX_X509Certificate::getSignature() const
{
	Array<Uint8> as;
	

	return as;

}

Boolean UNIX_X509Certificate::getSignatureAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIGNATURE_ALGORITHM, getSignatureAlgorithm());
	return true;
}

Uint16 UNIX_X509Certificate::getSignatureAlgorithm() const
{
	return Uint16(0);
}

Boolean UNIX_X509Certificate::getOtherSignatureAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SIGNATURE_ALGORITHM, getOtherSignatureAlgorithm());
	return true;
}

String UNIX_X509Certificate::getOtherSignatureAlgorithm() const
{
	return String ("");
}

Boolean UNIX_X509Certificate::getSignatureAlgorithmOID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIGNATURE_ALGORITHM_O_ID, getSignatureAlgorithmOID());
	return true;
}

String UNIX_X509Certificate::getSignatureAlgorithmOID() const
{
	return String ("");
}

Boolean UNIX_X509Certificate::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

Uint16 UNIX_X509Certificate::getVersion() const
{
	return Uint16(0);
}

Boolean UNIX_X509Certificate::getTBSCertificate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_T_B_S_CERTIFICATE, getTBSCertificate());
	return true;
}

Array<String> UNIX_X509Certificate::getTBSCertificate() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_X509Certificate::getMD5Fingerprint(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_M_D_5_FINGERPRINT, getMD5Fingerprint());
	return true;
}

Array<String> UNIX_X509Certificate::getMD5Fingerprint() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_X509Certificate::getSHA1Fingerprint(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_H_A_1_FINGERPRINT, getSHA1Fingerprint());
	return true;
}

Array<String> UNIX_X509Certificate::getSHA1Fingerprint() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_X509Certificate::getFingerprintDigestAlgorithms(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FINGERPRINT_DIGEST_ALGORITHMS, getFingerprintDigestAlgorithms());
	return true;
}

Array<Uint16> UNIX_X509Certificate::getFingerprintDigestAlgorithms() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_X509Certificate::getFingerprints(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FINGERPRINTS, getFingerprints());
	return true;
}

Array<String> UNIX_X509Certificate::getFingerprints() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_X509Certificate::getSubject(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBJECT, getSubject());
	return true;
}

String UNIX_X509Certificate::getSubject() const
{
	return String ("");
}

Boolean UNIX_X509Certificate::getAltSubject(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALT_SUBJECT, getAltSubject());
	return true;
}

String UNIX_X509Certificate::getAltSubject() const
{
	return String ("");
}

Boolean UNIX_X509Certificate::getPublicKey(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PUBLIC_KEY, getPublicKey());
	return true;
}

Array<String> UNIX_X509Certificate::getPublicKey() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_X509Certificate::getPublicKeySize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PUBLIC_KEY_SIZE, getPublicKeySize());
	return true;
}

Uint16 UNIX_X509Certificate::getPublicKeySize() const
{
	return Uint16(0);
}

Boolean UNIX_X509Certificate::getIsValid(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_VALID, getIsValid());
	return true;
}

Boolean UNIX_X509Certificate::getIsValid() const
{
	return Boolean(false);
}

Boolean UNIX_X509Certificate::getSerialNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERIAL_NUMBER, getSerialNumber());
	return true;
}

Array<String> UNIX_X509Certificate::getSerialNumber() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_X509Certificate::getPublicKeyAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PUBLIC_KEY_ALGORITHM, getPublicKeyAlgorithm());
	return true;
}

Uint16 UNIX_X509Certificate::getPublicKeyAlgorithm() const
{
	return Uint16(0);
}

Boolean UNIX_X509Certificate::getKeyUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_KEY_USAGE, getKeyUsage());
	return true;
}

Array<Uint16> UNIX_X509Certificate::getKeyUsage() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_X509Certificate::getExtendedKeyUsage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENDED_KEY_USAGE, getExtendedKeyUsage());
	return true;
}

Array<String> UNIX_X509Certificate::getExtendedKeyUsage() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_X509Certificate::getPathLengthConstraint(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PATH_LENGTH_CONSTRAINT, getPathLengthConstraint());
	return true;
}

Uint16 UNIX_X509Certificate::getPathLengthConstraint() const
{
	return Uint16(0);
}

Boolean UNIX_X509Certificate::getEncodedCertificate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENCODED_CERTIFICATE, getEncodedCertificate());
	return true;
}

Array<String> UNIX_X509Certificate::getEncodedCertificate() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_X509Certificate::getExtensionID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENSION_ID, getExtensionID());
	return true;
}

Array<String> UNIX_X509Certificate::getExtensionID() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_X509Certificate::getExtensionValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENSION_VALUE, getExtensionValue());
	return true;
}

Array<String> UNIX_X509Certificate::getExtensionValue() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_X509Certificate::getIsCritical(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_CRITICAL, getIsCritical());
	return true;
}

Array<Boolean> UNIX_X509Certificate::getIsCritical() const
{
	Array<Boolean> as;
	

	return as;

}

Boolean UNIX_X509Certificate::getIssuerUniqueID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ISSUER_UNIQUE_ID, getIssuerUniqueID());
	return true;
}

String UNIX_X509Certificate::getIssuerUniqueID() const
{
	return String ("");
}

Boolean UNIX_X509Certificate::getSubjectUniqueID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBJECT_UNIQUE_ID, getSubjectUniqueID());
	return true;
}

String UNIX_X509Certificate::getSubjectUniqueID() const
{
	return String ("");
}

Boolean UNIX_X509Certificate::getTrustedRootCertificate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRUSTED_ROOT_CERTIFICATE, getTrustedRootCertificate());
	return true;
}

Boolean UNIX_X509Certificate::getTrustedRootCertificate() const
{
	return Boolean(false);
}



Boolean UNIX_X509Certificate::initialize()
{
	return false;
}

Boolean UNIX_X509Certificate::load(int &pIndex)
{
	return false;
}

Boolean UNIX_X509Certificate::finalize()
{
	return false;
}

Boolean UNIX_X509Certificate::find(Array<CIMKeyBinding> &kbArray)
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
