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


UNIX_UserContact::UNIX_UserContact(void)
{
}

UNIX_UserContact::~UNIX_UserContact(void)
{
}


Boolean UNIX_UserContact::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_UserContact::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_UserContact::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_UserContact::getCaption() const
{
	return String ("");
}

Boolean UNIX_UserContact::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_UserContact::getDescription() const
{
	return String ("");
}

Boolean UNIX_UserContact::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_UserContact::getElementName() const
{
	return String("UserContact");
}

Boolean UNIX_UserContact::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_UserContact::getCreationClassName() const
{
	return String("UNIX_UserContact");
}

Boolean UNIX_UserContact::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_UserContact::getName() const
{
	return String ("");
}

Boolean UNIX_UserContact::getGivenName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GIVEN_NAME, getGivenName());
	return true;
}

String UNIX_UserContact::getGivenName() const
{
	return String ("");
}

Boolean UNIX_UserContact::getSurname(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SURNAME, getSurname());
	return true;
}

String UNIX_UserContact::getSurname() const
{
	return String ("");
}

Boolean UNIX_UserContact::getMail(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAIL, getMail());
	return true;
}

String UNIX_UserContact::getMail() const
{
	return String ("");
}

Boolean UNIX_UserContact::getUserID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_ID, getUserID());
	return true;
}

String UNIX_UserContact::getUserID() const
{
	return String ("");
}

Boolean UNIX_UserContact::getLocalityName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCALITY_NAME, getLocalityName());
	return true;
}

String UNIX_UserContact::getLocalityName() const
{
	return String ("");
}

Boolean UNIX_UserContact::getPostalAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSTAL_ADDRESS, getPostalAddress());
	return true;
}

Array<String> UNIX_UserContact::getPostalAddress() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_UserContact::getStateOrProvince(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATE_OR_PROVINCE, getStateOrProvince());
	return true;
}

String UNIX_UserContact::getStateOrProvince() const
{
	return String ("");
}

Boolean UNIX_UserContact::getPostalCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSTAL_CODE, getPostalCode());
	return true;
}

String UNIX_UserContact::getPostalCode() const
{
	return String ("");
}

Boolean UNIX_UserContact::getTelephoneNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TELEPHONE_NUMBER, getTelephoneNumber());
	return true;
}

String UNIX_UserContact::getTelephoneNumber() const
{
	return String ("");
}



Boolean UNIX_UserContact::initialize()
{
	return false;
}

Boolean UNIX_UserContact::load(int &pIndex)
{
	return false;
}

Boolean UNIX_UserContact::finalize()
{
	return false;
}

Boolean UNIX_UserContact::find(Array<CIMKeyBinding> &kbArray)
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
