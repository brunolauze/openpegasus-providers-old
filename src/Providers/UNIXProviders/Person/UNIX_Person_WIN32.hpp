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


UNIX_Person::UNIX_Person(void)
{
}

UNIX_Person::~UNIX_Person(void)
{
}


Boolean UNIX_Person::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_Person::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_Person::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_Person::getCaption() const
{
	return String ("");
}

Boolean UNIX_Person::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_Person::getDescription() const
{
	return String ("");
}

Boolean UNIX_Person::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_Person::getElementName() const
{
	return String("Person");
}

Boolean UNIX_Person::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_Person::getCreationClassName() const
{
	return String("UNIX_Person");
}

Boolean UNIX_Person::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_Person::getName() const
{
	return String ("");
}

Boolean UNIX_Person::getGivenName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GIVEN_NAME, getGivenName());
	return true;
}

String UNIX_Person::getGivenName() const
{
	return String ("");
}

Boolean UNIX_Person::getSurname(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SURNAME, getSurname());
	return true;
}

String UNIX_Person::getSurname() const
{
	return String ("");
}

Boolean UNIX_Person::getMail(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAIL, getMail());
	return true;
}

String UNIX_Person::getMail() const
{
	return String ("");
}

Boolean UNIX_Person::getUserID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_ID, getUserID());
	return true;
}

String UNIX_Person::getUserID() const
{
	return String ("");
}

Boolean UNIX_Person::getLocalityName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCALITY_NAME, getLocalityName());
	return true;
}

String UNIX_Person::getLocalityName() const
{
	return String ("");
}

Boolean UNIX_Person::getPostalAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSTAL_ADDRESS, getPostalAddress());
	return true;
}

Array<String> UNIX_Person::getPostalAddress() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Person::getStateOrProvince(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATE_OR_PROVINCE, getStateOrProvince());
	return true;
}

String UNIX_Person::getStateOrProvince() const
{
	return String ("");
}

Boolean UNIX_Person::getPostalCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSTAL_CODE, getPostalCode());
	return true;
}

String UNIX_Person::getPostalCode() const
{
	return String ("");
}

Boolean UNIX_Person::getTelephoneNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TELEPHONE_NUMBER, getTelephoneNumber());
	return true;
}

String UNIX_Person::getTelephoneNumber() const
{
	return String ("");
}

Boolean UNIX_Person::getBusinessCategory(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUSINESS_CATEGORY, getBusinessCategory());
	return true;
}

String UNIX_Person::getBusinessCategory() const
{
	return String ("");
}

Boolean UNIX_Person::getCommonName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMON_NAME, getCommonName());
	return true;
}

String UNIX_Person::getCommonName() const
{
	return String ("");
}

Boolean UNIX_Person::getEmployeeNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EMPLOYEE_NUMBER, getEmployeeNumber());
	return true;
}

String UNIX_Person::getEmployeeNumber() const
{
	return String ("");
}

Boolean UNIX_Person::getEmployeeType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EMPLOYEE_TYPE, getEmployeeType());
	return true;
}

String UNIX_Person::getEmployeeType() const
{
	return String ("");
}

Boolean UNIX_Person::getFacsimileTelephoneNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FACSIMILE_TELEPHONE_NUMBER, getFacsimileTelephoneNumber());
	return true;
}

String UNIX_Person::getFacsimileTelephoneNumber() const
{
	return String ("");
}

Boolean UNIX_Person::getHomePhone(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOME_PHONE, getHomePhone());
	return true;
}

String UNIX_Person::getHomePhone() const
{
	return String ("");
}

Boolean UNIX_Person::getHomePostalAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOME_POSTAL_ADDRESS, getHomePostalAddress());
	return true;
}

Array<String> UNIX_Person::getHomePostalAddress() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Person::getJPEGPhoto(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_J_P_E_G_PHOTO, getJPEGPhoto());
	return true;
}

String UNIX_Person::getJPEGPhoto() const
{
	return String ("");
}

Boolean UNIX_Person::getManager(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANAGER, getManager());
	return true;
}

String UNIX_Person::getManager() const
{
	return String ("");
}

Boolean UNIX_Person::getMobile(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MOBILE, getMobile());
	return true;
}

String UNIX_Person::getMobile() const
{
	return String ("");
}

Boolean UNIX_Person::getOU(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_O_U, getOU());
	return true;
}

String UNIX_Person::getOU() const
{
	return String ("");
}

Boolean UNIX_Person::getPager(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PAGER, getPager());
	return true;
}

String UNIX_Person::getPager() const
{
	return String ("");
}

Boolean UNIX_Person::getPreferredLanguage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PREFERRED_LANGUAGE, getPreferredLanguage());
	return true;
}

String UNIX_Person::getPreferredLanguage() const
{
	return String ("");
}

Boolean UNIX_Person::getSecretary(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SECRETARY, getSecretary());
	return true;
}

String UNIX_Person::getSecretary() const
{
	return String ("");
}

Boolean UNIX_Person::getTitle(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TITLE, getTitle());
	return true;
}

String UNIX_Person::getTitle() const
{
	return String ("");
}



Boolean UNIX_Person::initialize()
{
	return false;
}

Boolean UNIX_Person::load(int &pIndex)
{
	return false;
}

Boolean UNIX_Person::finalize()
{
	return false;
}

Boolean UNIX_Person::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
