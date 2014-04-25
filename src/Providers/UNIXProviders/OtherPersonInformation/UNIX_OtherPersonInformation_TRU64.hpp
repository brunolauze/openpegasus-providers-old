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


UNIX_OtherPersonInformation::UNIX_OtherPersonInformation(void)
{
}

UNIX_OtherPersonInformation::~UNIX_OtherPersonInformation(void)
{
}


Boolean UNIX_OtherPersonInformation::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_OtherPersonInformation::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_OtherPersonInformation::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_OtherPersonInformation::getCaption() const
{
	return String ("");
}

Boolean UNIX_OtherPersonInformation::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_OtherPersonInformation::getDescription() const
{
	return String ("");
}

Boolean UNIX_OtherPersonInformation::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_OtherPersonInformation::getElementName() const
{
	return String("OtherPersonInformation");
}

Boolean UNIX_OtherPersonInformation::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_OtherPersonInformation::getCreationClassName() const
{
	return String("UNIX_OtherPersonInformation");
}

Boolean UNIX_OtherPersonInformation::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_OtherPersonInformation::getName() const
{
	return String ("");
}

Boolean UNIX_OtherPersonInformation::getObjectClass(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OBJECT_CLASS, getObjectClass());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getObjectClass() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getAudio(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUDIO, getAudio());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getAudio() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getBusinessCategory(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUSINESS_CATEGORY, getBusinessCategory());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getBusinessCategory() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getCarLicense(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAR_LICENSE, getCarLicense());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getCarLicense() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getCommonName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMON_NAME, getCommonName());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getCommonName() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getCountryName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COUNTRY_NAME, getCountryName());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getCountryName() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getDepartmentNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPARTMENT_NUMBER, getDepartmentNumber());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getDepartmentNumber() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTIONS, getDescriptions());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getDestinationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESTINATION_INDICATOR, getDestinationIndicator());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getDestinationIndicator() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getDisplayName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DISPLAY_NAME, getDisplayName());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getDisplayName() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getEmployeeNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EMPLOYEE_NUMBER, getEmployeeNumber());
	return true;
}

String UNIX_OtherPersonInformation::getEmployeeNumber() const
{
	return String ("");
}

Boolean UNIX_OtherPersonInformation::getEmployeeType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EMPLOYEE_TYPE, getEmployeeType());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getEmployeeType() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getFacsimileTelephoneNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FACSIMILE_TELEPHONE_NUMBER, getFacsimileTelephoneNumber());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getFacsimileTelephoneNumber() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getGenerationQualifier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION_QUALIFIER, getGenerationQualifier());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getGenerationQualifier() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getGivenName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GIVEN_NAME, getGivenName());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getGivenName() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getHomeFax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOME_FAX, getHomeFax());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getHomeFax() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getHomePhone(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOME_PHONE, getHomePhone());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getHomePhone() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getHomePostalAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOME_POSTAL_ADDRESS, getHomePostalAddress());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getHomePostalAddress() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getInitials(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INITIALS, getInitials());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getInitials() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getInternationaliSDNNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERNATIONALI_S_D_N_NUMBER, getInternationaliSDNNumber());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getInternationaliSDNNumber() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getJPEGPhoto(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_J_P_E_G_PHOTO, getJPEGPhoto());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getJPEGPhoto() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getLabeledURI(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LABELED_U_R_I, getLabeledURI());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getLabeledURI() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getLocalityName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCALITY_NAME, getLocalityName());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getLocalityName() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getMail(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAIL, getMail());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getMail() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getManager(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANAGER, getManager());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getManager() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getMiddleName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIDDLE_NAME, getMiddleName());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getMiddleName() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getMobile(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MOBILE, getMobile());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getMobile() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getOrganizationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ORGANIZATION_NAME, getOrganizationName());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getOrganizationName() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getOrganizationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ORGANIZATIONAL_STATUS, getOrganizationalStatus());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getOrganizationalStatus() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getOtherMailbox(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_MAILBOX, getOtherMailbox());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getOtherMailbox() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getOU(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_O_U, getOU());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getOU() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getPager(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PAGER, getPager());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getPager() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getPersonalTitle(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERSONAL_TITLE, getPersonalTitle());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getPersonalTitle() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getPhoto(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PHOTO, getPhoto());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getPhoto() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getPhysicalDeliveryOfficeName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PHYSICAL_DELIVERY_OFFICE_NAME, getPhysicalDeliveryOfficeName());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getPhysicalDeliveryOfficeName() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getPostalAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSTAL_ADDRESS, getPostalAddress());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getPostalAddress() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getPostalCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSTAL_CODE, getPostalCode());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getPostalCode() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getPostOfficeBox(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POST_OFFICE_BOX, getPostOfficeBox());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getPostOfficeBox() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getPreferredDeliveryMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PREFERRED_DELIVERY_METHOD, getPreferredDeliveryMethod());
	return true;
}

String UNIX_OtherPersonInformation::getPreferredDeliveryMethod() const
{
	return String ("");
}

Boolean UNIX_OtherPersonInformation::getPreferredLanguage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PREFERRED_LANGUAGE, getPreferredLanguage());
	return true;
}

String UNIX_OtherPersonInformation::getPreferredLanguage() const
{
	return String ("");
}

Boolean UNIX_OtherPersonInformation::getRegisteredAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REGISTERED_ADDRESS, getRegisteredAddress());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getRegisteredAddress() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getRoomNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROOM_NUMBER, getRoomNumber());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getRoomNumber() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getSecretary(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SECRETARY, getSecretary());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getSecretary() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getSeeAlso(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEE_ALSO, getSeeAlso());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getSeeAlso() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getStateOrProvince(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATE_OR_PROVINCE, getStateOrProvince());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getStateOrProvince() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getStreet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STREET, getStreet());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getStreet() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getSurname(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SURNAME, getSurname());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getSurname() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getTelephoneNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TELEPHONE_NUMBER, getTelephoneNumber());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getTelephoneNumber() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getTeletexTerminalIdentifier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TELETEX_TERMINAL_IDENTIFIER, getTeletexTerminalIdentifier());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getTeletexTerminalIdentifier() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getTelexNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TELEX_NUMBER, getTelexNumber());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getTelexNumber() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getThumbnailLogo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_THUMBNAIL_LOGO, getThumbnailLogo());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getThumbnailLogo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getThumbnailPhoto(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_THUMBNAIL_PHOTO, getThumbnailPhoto());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getThumbnailPhoto() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getTitle(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TITLE, getTitle());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getTitle() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getUserID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_ID, getUserID());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getUserID() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getUniqueIdentifier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNIQUE_IDENTIFIER, getUniqueIdentifier());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getUniqueIdentifier() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getUserCertificate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_CERTIFICATE, getUserCertificate());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getUserCertificate() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getUserPassword(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_PASSWORD, getUserPassword());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getUserPassword() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getUserPKCS12(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_P_K_CS_1_2, getUserPKCS12());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getUserPKCS12() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getUserSMIMECertificate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_S_M_I_M_E_CERTIFICATE, getUserSMIMECertificate());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getUserSMIMECertificate() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getX121Address(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_X_1_2_1_ADDRESS, getX121Address());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getX121Address() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherPersonInformation::getX500UniqueIdentifier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_X_5_0_0_UNIQUE_IDENTIFIER, getX500UniqueIdentifier());
	return true;
}

Array<String> UNIX_OtherPersonInformation::getX500UniqueIdentifier() const
{
	Array<String> as;
	

	return as;

}



Boolean UNIX_OtherPersonInformation::initialize()
{
	return false;
}

Boolean UNIX_OtherPersonInformation::load(int &pIndex)
{
	return false;
}

Boolean UNIX_OtherPersonInformation::finalize()
{
	return false;
}

Boolean UNIX_OtherPersonInformation::find(Array<CIMKeyBinding> &kbArray)
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
