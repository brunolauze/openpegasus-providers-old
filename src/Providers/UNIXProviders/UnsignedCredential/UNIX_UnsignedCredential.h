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

#ifndef __UNIX_UNSIGNEDCREDENTIAL_H
#define __UNIX_UNSIGNEDCREDENTIAL_H


#include "CIM_Credential.h"

#include "UNIX_UnsignedCredentialDeps.h"


#define PROPERTY_PEER_IDENTITY				"PeerIdentity"
#define PROPERTY_PEER_IDENTITY_TYPE				"PeerIdentityType"
#define PROPERTY_PUBLIC_KEY				"PublicKey"
#define PROPERTY_PUBLIC_KEY_ENCODING				"PublicKeyEncoding"
#define PROPERTY_OTHER_PUBLIC_KEY_ENCODING				"OtherPublicKeyEncoding"


class UNIX_UnsignedCredential :
	public CIM_Credential
{
public:

	UNIX_UnsignedCredential();
	~UNIX_UnsignedCredential();

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
	virtual Boolean getPeerIdentity(CIMProperty&) const;
	virtual String getPeerIdentity() const;
	virtual Boolean getPeerIdentityType(CIMProperty&) const;
	virtual Uint16 getPeerIdentityType() const;
	virtual Boolean getPublicKey(CIMProperty&) const;
	virtual Array<String> getPublicKey() const;
	virtual Boolean getPublicKeyEncoding(CIMProperty&) const;
	virtual Uint16 getPublicKeyEncoding() const;
	virtual Boolean getOtherPublicKeyEncoding(CIMProperty&) const;
	virtual String getOtherPublicKeyEncoding() const;

private:
	CIMName currentScope;

#	include "UNIX_UnsignedCredentialPrivate.h"


};

#endif /* UNIX_UNSIGNEDCREDENTIAL */
