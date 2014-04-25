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

#ifndef __UNIX_X509CERTIFICATE_H
#define __UNIX_X509CERTIFICATE_H


#include "CIM_X509Infrastructure.h"

#include "UNIX_X509CertificateDeps.h"


#define PROPERTY_SUBJECT				"Subject"
#define PROPERTY_ALT_SUBJECT				"AltSubject"
#define PROPERTY_PUBLIC_KEY				"PublicKey"
#define PROPERTY_PUBLIC_KEY_SIZE				"PublicKeySize"
#define PROPERTY_IS_VALID				"IsValid"
#define PROPERTY_SERIAL_NUMBER				"SerialNumber"
#define PROPERTY_PUBLIC_KEY_ALGORITHM				"PublicKeyAlgorithm"
#define PROPERTY_KEY_USAGE				"KeyUsage"
#define PROPERTY_EXTENDED_KEY_USAGE				"ExtendedKeyUsage"
#define PROPERTY_PATH_LENGTH_CONSTRAINT				"PathLengthConstraint"
#define PROPERTY_ENCODED_CERTIFICATE				"EncodedCertificate"
#define PROPERTY_EXTENSION_ID				"ExtensionID"
#define PROPERTY_EXTENSION_VALUE				"ExtensionValue"
#define PROPERTY_IS_CRITICAL				"IsCritical"
#define PROPERTY_ISSUER_UNIQUE_ID				"IssuerUniqueID"
#define PROPERTY_SUBJECT_UNIQUE_ID				"SubjectUniqueID"
#define PROPERTY_TRUSTED_ROOT_CERTIFICATE				"TrustedRootCertificate"


class UNIX_X509Certificate :
	public CIM_X509Infrastructure
{
public:

	UNIX_X509Certificate();
	~UNIX_X509Certificate();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean finalize();
	virtual Boolean find(Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);

	virtual Boolean getInstanceID(CIMProperty&) const;
	virtual String getInstanceID() const;
	virtual Boolean getCaption(CIMProperty&) const;
	virtual String getCaption() const;
	virtual Boolean getDescription(CIMProperty&) const;
	virtual String getDescription() const;
	virtual Boolean getElementName(CIMProperty&) const;
	virtual String getElementName() const;
	virtual Boolean getIssued(CIMProperty&) const;
	virtual CIMDateTime getIssued() const;
	virtual Boolean getExpires(CIMProperty&) const;
	virtual CIMDateTime getExpires() const;
	virtual Boolean getIssuerName(CIMProperty&) const;
	virtual String getIssuerName() const;
	virtual Boolean getSignature(CIMProperty&) const;
	virtual Array<Uint8> getSignature() const;
	virtual Boolean getSignatureAlgorithm(CIMProperty&) const;
	virtual Uint16 getSignatureAlgorithm() const;
	virtual Boolean getOtherSignatureAlgorithm(CIMProperty&) const;
	virtual String getOtherSignatureAlgorithm() const;
	virtual Boolean getSignatureAlgorithmOID(CIMProperty&) const;
	virtual String getSignatureAlgorithmOID() const;
	virtual Boolean getVersion(CIMProperty&) const;
	virtual Uint16 getVersion() const;
	virtual Boolean getTBSCertificate(CIMProperty&) const;
	virtual Array<String> getTBSCertificate() const;
	virtual Boolean getMD5Fingerprint(CIMProperty&) const;
	virtual Array<String> getMD5Fingerprint() const;
	virtual Boolean getSHA1Fingerprint(CIMProperty&) const;
	virtual Array<String> getSHA1Fingerprint() const;
	virtual Boolean getFingerprintDigestAlgorithms(CIMProperty&) const;
	virtual Array<Uint16> getFingerprintDigestAlgorithms() const;
	virtual Boolean getFingerprints(CIMProperty&) const;
	virtual Array<String> getFingerprints() const;
	virtual Boolean getSubject(CIMProperty&) const;
	virtual String getSubject() const;
	virtual Boolean getAltSubject(CIMProperty&) const;
	virtual String getAltSubject() const;
	virtual Boolean getPublicKey(CIMProperty&) const;
	virtual Array<String> getPublicKey() const;
	virtual Boolean getPublicKeySize(CIMProperty&) const;
	virtual Uint16 getPublicKeySize() const;
	virtual Boolean getIsValid(CIMProperty&) const;
	virtual Boolean getIsValid() const;
	virtual Boolean getSerialNumber(CIMProperty&) const;
	virtual Array<String> getSerialNumber() const;
	virtual Boolean getPublicKeyAlgorithm(CIMProperty&) const;
	virtual Uint16 getPublicKeyAlgorithm() const;
	virtual Boolean getKeyUsage(CIMProperty&) const;
	virtual Array<Uint16> getKeyUsage() const;
	virtual Boolean getExtendedKeyUsage(CIMProperty&) const;
	virtual Array<String> getExtendedKeyUsage() const;
	virtual Boolean getPathLengthConstraint(CIMProperty&) const;
	virtual Uint16 getPathLengthConstraint() const;
	virtual Boolean getEncodedCertificate(CIMProperty&) const;
	virtual Array<String> getEncodedCertificate() const;
	virtual Boolean getExtensionID(CIMProperty&) const;
	virtual Array<String> getExtensionID() const;
	virtual Boolean getExtensionValue(CIMProperty&) const;
	virtual Array<String> getExtensionValue() const;
	virtual Boolean getIsCritical(CIMProperty&) const;
	virtual Array<Boolean> getIsCritical() const;
	virtual Boolean getIssuerUniqueID(CIMProperty&) const;
	virtual String getIssuerUniqueID() const;
	virtual Boolean getSubjectUniqueID(CIMProperty&) const;
	virtual String getSubjectUniqueID() const;
	virtual Boolean getTrustedRootCertificate(CIMProperty&) const;
	virtual Boolean getTrustedRootCertificate() const;

private:
	CIMName currentScope;

#	include "UNIX_X509CertificatePrivate.h"


};

#endif /* UNIX_X509CERTIFICATE */
