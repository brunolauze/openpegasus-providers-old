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

#ifndef __UNIX_CREDENTIALCONTEXT_H
#define __UNIX_CREDENTIALCONTEXT_H


#include "CIM_ClassBase.h"

#include "UNIX_CredentialContextDeps.h"


#define PROPERTY_ELEMENT_IN_CONTEXT				"ElementInContext"
#define PROPERTY_ELEMENT_PROVIDING_CONTEXT				"ElementProvidingContext"
#define PROPERTY_USAGE				"Usage"


class UNIX_CredentialContext :
	public CIM_ClassBase
{
public:

	UNIX_CredentialContext();
	~UNIX_CredentialContext();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean finalize();
	virtual Boolean find(Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);

	virtual Boolean getElementInContext(CIMProperty&) const;
	virtual CIMInstance getElementInContext() const;
	virtual Boolean getElementProvidingContext(CIMProperty&) const;
	virtual CIMInstance getElementProvidingContext() const;
	virtual Boolean getUsage(CIMProperty&) const;
	virtual Uint16 getUsage() const;

private:
	CIMName currentScope;

#	include "UNIX_CredentialContextPrivate.h"


};

#endif /* UNIX_CREDENTIALCONTEXT */
