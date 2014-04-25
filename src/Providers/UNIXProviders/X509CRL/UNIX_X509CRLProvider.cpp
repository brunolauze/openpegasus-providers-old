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


#include "UNIX_X509CRLProvider.h"

UNIX_X509CRLProvider::UNIX_X509CRLProvider()
{
}

UNIX_X509CRLProvider::~UNIX_X509CRLProvider()
{
}

CIMInstance UNIX_X509CRLProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_X509CRL &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_X509CRL"),
			constructKeyBindings(_p)));

	//CIM_ManagedElement Properties
	if (_p.getInstanceID(p)) inst.addProperty(p);
	if (_p.getCaption(p)) inst.addProperty(p);
	if (_p.getDescription(p)) inst.addProperty(p);
	if (_p.getElementName(p)) inst.addProperty(p);

	//CIM_Credential Properties
	if (_p.getIssued(p)) inst.addProperty(p);
	if (_p.getExpires(p)) inst.addProperty(p);

	//CIM_SignedCredential Properties
	if (_p.getIssuerName(p)) inst.addProperty(p);
	if (_p.getSignature(p)) inst.addProperty(p);
	if (_p.getSignatureAlgorithm(p)) inst.addProperty(p);
	if (_p.getOtherSignatureAlgorithm(p)) inst.addProperty(p);
	if (_p.getSignatureAlgorithmOID(p)) inst.addProperty(p);

	//CIM_X509Infrastructure Properties
	if (_p.getVersion(p)) inst.addProperty(p);
	if (_p.getTBSCertificate(p)) inst.addProperty(p);
	if (_p.getMD5Fingerprint(p)) inst.addProperty(p);
	if (_p.getSHA1Fingerprint(p)) inst.addProperty(p);
	if (_p.getFingerprintDigestAlgorithms(p)) inst.addProperty(p);
	if (_p.getFingerprints(p)) inst.addProperty(p);

	//CIM_X509CRL Properties
	if (_p.getNextUpdate(p)) inst.addProperty(p);
	if (_p.getEncodedCRL(p)) inst.addProperty(p);
	if (_p.getSerialNumbers(p)) inst.addProperty(p);


	return inst;
}

Array<CIMKeyBinding> UNIX_X509CRLProvider::constructKeyBindings(const UNIX_X509CRL& _p)

{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_INSTANCE_ID,
		_p.getInstanceID(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_X509CRLProvider
#define UNIX_PROVIDER_NAME "UNIX_X509CRLProvider"
#define CLASS_IMPLEMENTATION UNIX_X509CRL
#define CLASS_IMPLEMENTATION_NAME "UNIX_X509CRL"
#define BASE_CLASS_NAME "CIM_X509CRL"
#define NUMKEYS_CLASS_IMPLEMENTATION 0


#include "UNIXProviderBase.hpp"

