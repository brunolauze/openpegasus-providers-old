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

#ifndef __UNIX_PRIVILEGE_H
#define __UNIX_PRIVILEGE_H


#include "CIM_ManagedElement.h"

#include "UNIX_PrivilegeDeps.h"


#define PROPERTY_PRIVILEGE_GRANTED				"PrivilegeGranted"
#define PROPERTY_ACTIVITIES				"Activities"
#define PROPERTY_ACTIVITY_QUALIFIERS				"ActivityQualifiers"
#define PROPERTY_QUALIFIER_FORMATS				"QualifierFormats"
#define PROPERTY_REPRESENTS_AUTHORIZATION_RIGHTS				"RepresentsAuthorizationRights"


class UNIX_Privilege :
	public CIM_ManagedElement
{
public:

	UNIX_Privilege();
	~UNIX_Privilege();

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
	virtual Boolean getPrivilegeGranted(CIMProperty&) const;
	virtual Boolean getPrivilegeGranted() const;
	virtual Boolean getActivities(CIMProperty&) const;
	virtual Array<Uint16> getActivities() const;
	virtual Boolean getActivityQualifiers(CIMProperty&) const;
	virtual Array<String> getActivityQualifiers() const;
	virtual Boolean getQualifierFormats(CIMProperty&) const;
	virtual Array<Uint16> getQualifierFormats() const;
	virtual Boolean getRepresentsAuthorizationRights(CIMProperty&) const;
	virtual Boolean getRepresentsAuthorizationRights() const;

private:
	CIMName currentScope;

#	include "UNIX_PrivilegePrivate.h"


};

#endif /* UNIX_PRIVILEGE */
