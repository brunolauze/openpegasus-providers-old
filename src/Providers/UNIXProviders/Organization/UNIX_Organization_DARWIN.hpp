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


UNIX_Organization::UNIX_Organization(void)
{
}

UNIX_Organization::~UNIX_Organization(void)
{
}


Boolean UNIX_Organization::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_Organization::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_Organization::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_Organization::getCaption() const
{
	return String ("");
}

Boolean UNIX_Organization::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_Organization::getDescription() const
{
	return String ("");
}

Boolean UNIX_Organization::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_Organization::getElementName() const
{
	return String("Organization");
}

Boolean UNIX_Organization::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_Organization::getCreationClassName() const
{
	return String("UNIX_Organization");
}

Boolean UNIX_Organization::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_Organization::getName() const
{
	return String ("");
}

Boolean UNIX_Organization::getBusinessCategory(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUSINESS_CATEGORY, getBusinessCategory());
	return true;
}

String UNIX_Organization::getBusinessCategory() const
{
	return String ("");
}

Boolean UNIX_Organization::getFacsimileTelephoneNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FACSIMILE_TELEPHONE_NUMBER, getFacsimileTelephoneNumber());
	return true;
}

String UNIX_Organization::getFacsimileTelephoneNumber() const
{
	return String ("");
}

Boolean UNIX_Organization::getLocalityName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCALITY_NAME, getLocalityName());
	return true;
}

String UNIX_Organization::getLocalityName() const
{
	return String ("");
}

Boolean UNIX_Organization::getMail(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAIL, getMail());
	return true;
}

String UNIX_Organization::getMail() const
{
	return String ("");
}

Boolean UNIX_Organization::getOrganizationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ORGANIZATION_NAME, getOrganizationName());
	return true;
}

String UNIX_Organization::getOrganizationName() const
{
	return String ("");
}

Boolean UNIX_Organization::getPostalAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSTAL_ADDRESS, getPostalAddress());
	return true;
}

Array<String> UNIX_Organization::getPostalAddress() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Organization::getPostalCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSTAL_CODE, getPostalCode());
	return true;
}

String UNIX_Organization::getPostalCode() const
{
	return String ("");
}

Boolean UNIX_Organization::getStateOrProvince(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATE_OR_PROVINCE, getStateOrProvince());
	return true;
}

String UNIX_Organization::getStateOrProvince() const
{
	return String ("");
}

Boolean UNIX_Organization::getTelephoneNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TELEPHONE_NUMBER, getTelephoneNumber());
	return true;
}

String UNIX_Organization::getTelephoneNumber() const
{
	return String ("");
}



Boolean UNIX_Organization::initialize()
{
	return false;
}

Boolean UNIX_Organization::load(int &pIndex)
{
	return false;
}

Boolean UNIX_Organization::finalize()
{
	return false;
}

Boolean UNIX_Organization::find(Array<CIMKeyBinding> &kbArray)
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
