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

#ifndef __UNIX_X509CRL_H
#define __UNIX_X509CRL_H


#include "CIM_X509Infrastructure.h"

#include "UNIX_X509CRLDeps.h"


#define PROPERTY_NEXT_UPDATE				"NextUpdate"
#define PROPERTY_ENCODED_C_R_L				"EncodedCRL"
#define PROPERTY_SERIAL_NUMBERS				"SerialNumbers"


class UNIX_X509CRL :
	public CIM_X509Infrastructure
{
public:

	UNIX_X509CRL();
	~UNIX_X509CRL();

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
	virtual Boolean getNextUpdate(CIMProperty&) const;
	virtual CIMDateTime getNextUpdate() const;
	virtual Boolean getEncodedCRL(CIMProperty&) const;
	virtual Array<String> getEncodedCRL() const;
	virtual Boolean getSerialNumbers(CIMProperty&) const;
	virtual Array<String> getSerialNumbers() const;

private:
	CIMName currentScope;

#	include "UNIX_X509CRLPrivate.h"


};

#endif /* UNIX_X509CRL */
