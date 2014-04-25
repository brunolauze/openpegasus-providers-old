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

#ifndef __UNIX_PUBLICKEYCERTIFICATE_H
#define __UNIX_PUBLICKEYCERTIFICATE_H


#include "CIM_SignedCredential.h"

#include "UNIX_PublicKeyCertificateDeps.h"


#define PROPERTY_SYSTEM_CREATION_CLASS_NAME				"SystemCreationClassName"
#define PROPERTY_SYSTEM_NAME				"SystemName"
#define PROPERTY_SERVICE_CREATION_CLASS_NAME				"ServiceCreationClassName"
#define PROPERTY_SERVICE_NAME				"ServiceName"
#define PROPERTY_SUBJECT				"Subject"
#define PROPERTY_ALT_SUBJECT				"AltSubject"
#define PROPERTY_PUBLIC_KEY				"PublicKey"


class UNIX_PublicKeyCertificate :
	public CIM_SignedCredential
{
public:

	UNIX_PublicKeyCertificate();
	~UNIX_PublicKeyCertificate();

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
	virtual Boolean getSystemCreationClassName(CIMProperty&) const;
	virtual String getSystemCreationClassName() const;
	virtual Boolean getSystemName(CIMProperty&) const;
	virtual String getSystemName() const;
	virtual Boolean getServiceCreationClassName(CIMProperty&) const;
	virtual String getServiceCreationClassName() const;
	virtual Boolean getServiceName(CIMProperty&) const;
	virtual String getServiceName() const;
	virtual Boolean getSubject(CIMProperty&) const;
	virtual String getSubject() const;
	virtual Boolean getAltSubject(CIMProperty&) const;
	virtual String getAltSubject() const;
	virtual Boolean getPublicKey(CIMProperty&) const;
	virtual Array<Uint8> getPublicKey() const;

private:
	CIMName currentScope;

#	include "UNIX_PublicKeyCertificatePrivate.h"


};

#endif /* UNIX_PUBLICKEYCERTIFICATE */
