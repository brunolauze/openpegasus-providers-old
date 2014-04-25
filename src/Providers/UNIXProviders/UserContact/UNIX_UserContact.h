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

#ifndef __UNIX_USERCONTACT_H
#define __UNIX_USERCONTACT_H


#include "CIM_UserEntity.h"

#include "UNIX_UserContactDeps.h"


#define PROPERTY_CREATION_CLASS_NAME				"CreationClassName"
#define PROPERTY_NAME				"Name"
#define PROPERTY_GIVEN_NAME				"GivenName"
#define PROPERTY_SURNAME				"Surname"
#define PROPERTY_MAIL				"Mail"
#define PROPERTY_USER_ID				"UserID"
#define PROPERTY_LOCALITY_NAME				"LocalityName"
#define PROPERTY_POSTAL_ADDRESS				"PostalAddress"
#define PROPERTY_STATE_OR_PROVINCE				"StateOrProvince"
#define PROPERTY_POSTAL_CODE				"PostalCode"
#define PROPERTY_TELEPHONE_NUMBER				"TelephoneNumber"


class UNIX_UserContact :
	public CIM_UserEntity
{
public:

	UNIX_UserContact();
	~UNIX_UserContact();

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
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual Boolean getGivenName(CIMProperty&) const;
	virtual String getGivenName() const;
	virtual Boolean getSurname(CIMProperty&) const;
	virtual String getSurname() const;
	virtual Boolean getMail(CIMProperty&) const;
	virtual String getMail() const;
	virtual Boolean getUserID(CIMProperty&) const;
	virtual String getUserID() const;
	virtual Boolean getLocalityName(CIMProperty&) const;
	virtual String getLocalityName() const;
	virtual Boolean getPostalAddress(CIMProperty&) const;
	virtual Array<String> getPostalAddress() const;
	virtual Boolean getStateOrProvince(CIMProperty&) const;
	virtual String getStateOrProvince() const;
	virtual Boolean getPostalCode(CIMProperty&) const;
	virtual String getPostalCode() const;
	virtual Boolean getTelephoneNumber(CIMProperty&) const;
	virtual String getTelephoneNumber() const;

private:
	CIMName currentScope;

#	include "UNIX_UserContactPrivate.h"


};

#endif /* UNIX_USERCONTACT */
