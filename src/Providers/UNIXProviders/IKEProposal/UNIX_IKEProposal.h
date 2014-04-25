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

#ifndef __UNIX_IKEPROPOSAL_H
#define __UNIX_IKEPROPOSAL_H


#include "CIM_SAProposal.h"

#include "UNIX_IKEProposalDeps.h"


#define PROPERTY_MAX_LIFETIME_SECONDS				"MaxLifetimeSeconds"
#define PROPERTY_MAX_LIFETIME_KILOBYTES				"MaxLifetimeKilobytes"
#define PROPERTY_CIPHER_ALGORITHM				"CipherAlgorithm"
#define PROPERTY_OTHER_CIPHER_ALGORITHM				"OtherCipherAlgorithm"
#define PROPERTY_HASH_ALGORITHM				"HashAlgorithm"
#define PROPERTY_OTHER_HASH_ALGORITHM				"OtherHashAlgorithm"
#define PROPERTY_AUTHENTICATION_METHOD				"AuthenticationMethod"
#define PROPERTY_OTHER_AUTHENTICATION_METHOD				"OtherAuthenticationMethod"
#define PROPERTY_GROUP_ID				"GroupId"
#define PROPERTY_VENDOR_ID				"VendorID"


class UNIX_IKEProposal :
	public CIM_SAProposal
{
public:

	UNIX_IKEProposal();
	~UNIX_IKEProposal();

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
	virtual Boolean getChangeableType(CIMProperty&) const;
	virtual Uint16 getChangeableType() const;
	virtual Boolean getConfigurationName(CIMProperty&) const;
	virtual String getConfigurationName() const;
	virtual Boolean getMaxLifetimeSeconds(CIMProperty&) const;
	virtual Uint64 getMaxLifetimeSeconds() const;
	virtual Boolean getMaxLifetimeKilobytes(CIMProperty&) const;
	virtual Uint64 getMaxLifetimeKilobytes() const;
	virtual Boolean getCipherAlgorithm(CIMProperty&) const;
	virtual Uint16 getCipherAlgorithm() const;
	virtual Boolean getOtherCipherAlgorithm(CIMProperty&) const;
	virtual String getOtherCipherAlgorithm() const;
	virtual Boolean getHashAlgorithm(CIMProperty&) const;
	virtual Uint16 getHashAlgorithm() const;
	virtual Boolean getOtherHashAlgorithm(CIMProperty&) const;
	virtual String getOtherHashAlgorithm() const;
	virtual Boolean getAuthenticationMethod(CIMProperty&) const;
	virtual Uint16 getAuthenticationMethod() const;
	virtual Boolean getOtherAuthenticationMethod(CIMProperty&) const;
	virtual String getOtherAuthenticationMethod() const;
	virtual Boolean getGroupId(CIMProperty&) const;
	virtual Uint16 getGroupId() const;
	virtual Boolean getVendorID(CIMProperty&) const;
	virtual String getVendorID() const;

private:
	CIMName currentScope;

#	include "UNIX_IKEProposalPrivate.h"


};

#endif /* UNIX_IKEPROPOSAL */
