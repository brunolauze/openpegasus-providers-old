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

#ifndef __UNIX_SYSTEMINNAMESPACE_H
#define __UNIX_SYSTEMINNAMESPACE_H


#include "CIM_ClassBase.h"

#include "UNIX_SystemInNamespaceDeps.h"


#define PROPERTY_MANAGED_NAMESPACE				"ManagedNamespace"
#define PROPERTY_IDENTIFICATION				"Identification"
#define PROPERTY_SCOPE_OF_CONTAINED_DATA				"ScopeOfContainedData"
#define PROPERTY_DESCRIPTION_OF_CONTAINED_DATA				"DescriptionOfContainedData"


class UNIX_SystemInNamespace :
	public CIM_ClassBase
{
public:

	UNIX_SystemInNamespace();
	~UNIX_SystemInNamespace();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean finalize();
	virtual Boolean find(Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);

	virtual Boolean getManagedNamespace(CIMProperty&) const;
	virtual CIMInstance getManagedNamespace() const;
	virtual Boolean getIdentification(CIMProperty&) const;
	virtual CIMInstance getIdentification() const;
	virtual Boolean getScopeOfContainedData(CIMProperty&) const;
	virtual Array<Uint16> getScopeOfContainedData() const;
	virtual Boolean getDescriptionOfContainedData(CIMProperty&) const;
	virtual Array<String> getDescriptionOfContainedData() const;

private:
	CIMName currentScope;

#	include "UNIX_SystemInNamespacePrivate.h"


};

#endif /* UNIX_SYSTEMINNAMESPACE */
