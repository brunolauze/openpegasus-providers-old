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

#ifndef __UNIX_PERSON_H
#define __UNIX_PERSON_H


#include "CIM_UserContact.h"

#include "UNIX_PersonDeps.h"


#define PROPERTY_BUSINESS_CATEGORY				"BusinessCategory"
#define PROPERTY_COMMON_NAME				"CommonName"
#define PROPERTY_EMPLOYEE_NUMBER				"EmployeeNumber"
#define PROPERTY_EMPLOYEE_TYPE				"EmployeeType"
#define PROPERTY_FACSIMILE_TELEPHONE_NUMBER				"FacsimileTelephoneNumber"
#define PROPERTY_HOME_PHONE				"HomePhone"
#define PROPERTY_HOME_POSTAL_ADDRESS				"HomePostalAddress"
#define PROPERTY_J_P_E_G_PHOTO				"JPEGPhoto"
#define PROPERTY_MANAGER				"Manager"
#define PROPERTY_MOBILE				"Mobile"
#define PROPERTY_O_U				"OU"
#define PROPERTY_PAGER				"Pager"
#define PROPERTY_PREFERRED_LANGUAGE				"PreferredLanguage"
#define PROPERTY_SECRETARY				"Secretary"
#define PROPERTY_TITLE				"Title"


class UNIX_Person :
	public CIM_UserContact
{
public:

	UNIX_Person();
	~UNIX_Person();

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
	virtual Boolean getBusinessCategory(CIMProperty&) const;
	virtual String getBusinessCategory() const;
	virtual Boolean getCommonName(CIMProperty&) const;
	virtual String getCommonName() const;
	virtual Boolean getEmployeeNumber(CIMProperty&) const;
	virtual String getEmployeeNumber() const;
	virtual Boolean getEmployeeType(CIMProperty&) const;
	virtual String getEmployeeType() const;
	virtual Boolean getFacsimileTelephoneNumber(CIMProperty&) const;
	virtual String getFacsimileTelephoneNumber() const;
	virtual Boolean getHomePhone(CIMProperty&) const;
	virtual String getHomePhone() const;
	virtual Boolean getHomePostalAddress(CIMProperty&) const;
	virtual Array<String> getHomePostalAddress() const;
	virtual Boolean getJPEGPhoto(CIMProperty&) const;
	virtual String getJPEGPhoto() const;
	virtual Boolean getManager(CIMProperty&) const;
	virtual String getManager() const;
	virtual Boolean getMobile(CIMProperty&) const;
	virtual String getMobile() const;
	virtual Boolean getOU(CIMProperty&) const;
	virtual String getOU() const;
	virtual Boolean getPager(CIMProperty&) const;
	virtual String getPager() const;
	virtual Boolean getPreferredLanguage(CIMProperty&) const;
	virtual String getPreferredLanguage() const;
	virtual Boolean getSecretary(CIMProperty&) const;
	virtual String getSecretary() const;
	virtual Boolean getTitle(CIMProperty&) const;
	virtual String getTitle() const;

private:
	CIMName currentScope;

#	include "UNIX_PersonPrivate.h"


};

#endif /* UNIX_PERSON */
