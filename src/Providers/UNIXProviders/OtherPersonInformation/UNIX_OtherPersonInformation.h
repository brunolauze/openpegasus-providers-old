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

#ifndef __UNIX_OTHERPERSONINFORMATION_H
#define __UNIX_OTHERPERSONINFORMATION_H


#include "CIM_ManagedElement.h"

#include "UNIX_OtherPersonInformationDeps.h"


#define PROPERTY_CREATION_CLASS_NAME				"CreationClassName"
#define PROPERTY_NAME				"Name"
#define PROPERTY_OBJECT_CLASS				"ObjectClass"
#define PROPERTY_AUDIO				"Audio"
#define PROPERTY_BUSINESS_CATEGORY				"BusinessCategory"
#define PROPERTY_CAR_LICENSE				"CarLicense"
#define PROPERTY_COMMON_NAME				"CommonName"
#define PROPERTY_COUNTRY_NAME				"CountryName"
#define PROPERTY_DEPARTMENT_NUMBER				"DepartmentNumber"
#define PROPERTY_DESCRIPTIONS				"Descriptions"
#define PROPERTY_DESTINATION_INDICATOR				"DestinationIndicator"
#define PROPERTY_DISPLAY_NAME				"DisplayName"
#define PROPERTY_EMPLOYEE_NUMBER				"EmployeeNumber"
#define PROPERTY_EMPLOYEE_TYPE				"EmployeeType"
#define PROPERTY_FACSIMILE_TELEPHONE_NUMBER				"FacsimileTelephoneNumber"
#define PROPERTY_GENERATION_QUALIFIER				"GenerationQualifier"
#define PROPERTY_GIVEN_NAME				"GivenName"
#define PROPERTY_HOME_FAX				"HomeFax"
#define PROPERTY_HOME_PHONE				"HomePhone"
#define PROPERTY_HOME_POSTAL_ADDRESS				"HomePostalAddress"
#define PROPERTY_INITIALS				"Initials"
#define PROPERTY_INTERNATIONALI_S_D_N_NUMBER				"InternationaliSDNNumber"
#define PROPERTY_J_P_E_G_PHOTO				"JPEGPhoto"
#define PROPERTY_LABELED_U_R_I				"LabeledURI"
#define PROPERTY_LOCALITY_NAME				"LocalityName"
#define PROPERTY_MAIL				"Mail"
#define PROPERTY_MANAGER				"Manager"
#define PROPERTY_MIDDLE_NAME				"MiddleName"
#define PROPERTY_MOBILE				"Mobile"
#define PROPERTY_ORGANIZATION_NAME				"OrganizationName"
#define PROPERTY_ORGANIZATIONAL_STATUS				"OrganizationalStatus"
#define PROPERTY_OTHER_MAILBOX				"OtherMailbox"
#define PROPERTY_O_U				"OU"
#define PROPERTY_PAGER				"Pager"
#define PROPERTY_PERSONAL_TITLE				"PersonalTitle"
#define PROPERTY_PHOTO				"Photo"
#define PROPERTY_PHYSICAL_DELIVERY_OFFICE_NAME				"PhysicalDeliveryOfficeName"
#define PROPERTY_POSTAL_ADDRESS				"PostalAddress"
#define PROPERTY_POSTAL_CODE				"PostalCode"
#define PROPERTY_POST_OFFICE_BOX				"PostOfficeBox"
#define PROPERTY_PREFERRED_DELIVERY_METHOD				"PreferredDeliveryMethod"
#define PROPERTY_PREFERRED_LANGUAGE				"PreferredLanguage"
#define PROPERTY_REGISTERED_ADDRESS				"RegisteredAddress"
#define PROPERTY_ROOM_NUMBER				"RoomNumber"
#define PROPERTY_SECRETARY				"Secretary"
#define PROPERTY_SEE_ALSO				"SeeAlso"
#define PROPERTY_STATE_OR_PROVINCE				"StateOrProvince"
#define PROPERTY_STREET				"Street"
#define PROPERTY_SURNAME				"Surname"
#define PROPERTY_TELEPHONE_NUMBER				"TelephoneNumber"
#define PROPERTY_TELETEX_TERMINAL_IDENTIFIER				"TeletexTerminalIdentifier"
#define PROPERTY_TELEX_NUMBER				"TelexNumber"
#define PROPERTY_THUMBNAIL_LOGO				"ThumbnailLogo"
#define PROPERTY_THUMBNAIL_PHOTO				"ThumbnailPhoto"
#define PROPERTY_TITLE				"Title"
#define PROPERTY_USER_ID				"UserID"
#define PROPERTY_UNIQUE_IDENTIFIER				"UniqueIdentifier"
#define PROPERTY_USER_CERTIFICATE				"UserCertificate"
#define PROPERTY_USER_PASSWORD				"UserPassword"
#define PROPERTY_USER_P_K_CS_1_2				"UserPKCS12"
#define PROPERTY_USER_S_M_I_M_E_CERTIFICATE				"UserSMIMECertificate"
#define PROPERTY_X_1_2_1_ADDRESS				"X121Address"
#define PROPERTY_X_5_0_0_UNIQUE_IDENTIFIER				"X500UniqueIdentifier"


class UNIX_OtherPersonInformation :
	public CIM_ManagedElement
{
public:

	UNIX_OtherPersonInformation();
	~UNIX_OtherPersonInformation();

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
	virtual Boolean getObjectClass(CIMProperty&) const;
	virtual Array<String> getObjectClass() const;
	virtual Boolean getAudio(CIMProperty&) const;
	virtual Array<String> getAudio() const;
	virtual Boolean getBusinessCategory(CIMProperty&) const;
	virtual Array<String> getBusinessCategory() const;
	virtual Boolean getCarLicense(CIMProperty&) const;
	virtual Array<String> getCarLicense() const;
	virtual Boolean getCommonName(CIMProperty&) const;
	virtual Array<String> getCommonName() const;
	virtual Boolean getCountryName(CIMProperty&) const;
	virtual Array<String> getCountryName() const;
	virtual Boolean getDepartmentNumber(CIMProperty&) const;
	virtual Array<String> getDepartmentNumber() const;
	virtual Boolean getDescriptions(CIMProperty&) const;
	virtual Array<String> getDescriptions() const;
	virtual Boolean getDestinationIndicator(CIMProperty&) const;
	virtual Array<String> getDestinationIndicator() const;
	virtual Boolean getDisplayName(CIMProperty&) const;
	virtual Array<String> getDisplayName() const;
	virtual Boolean getEmployeeNumber(CIMProperty&) const;
	virtual String getEmployeeNumber() const;
	virtual Boolean getEmployeeType(CIMProperty&) const;
	virtual Array<String> getEmployeeType() const;
	virtual Boolean getFacsimileTelephoneNumber(CIMProperty&) const;
	virtual Array<String> getFacsimileTelephoneNumber() const;
	virtual Boolean getGenerationQualifier(CIMProperty&) const;
	virtual Array<String> getGenerationQualifier() const;
	virtual Boolean getGivenName(CIMProperty&) const;
	virtual Array<String> getGivenName() const;
	virtual Boolean getHomeFax(CIMProperty&) const;
	virtual Array<String> getHomeFax() const;
	virtual Boolean getHomePhone(CIMProperty&) const;
	virtual Array<String> getHomePhone() const;
	virtual Boolean getHomePostalAddress(CIMProperty&) const;
	virtual Array<String> getHomePostalAddress() const;
	virtual Boolean getInitials(CIMProperty&) const;
	virtual Array<String> getInitials() const;
	virtual Boolean getInternationaliSDNNumber(CIMProperty&) const;
	virtual Array<String> getInternationaliSDNNumber() const;
	virtual Boolean getJPEGPhoto(CIMProperty&) const;
	virtual Array<String> getJPEGPhoto() const;
	virtual Boolean getLabeledURI(CIMProperty&) const;
	virtual Array<String> getLabeledURI() const;
	virtual Boolean getLocalityName(CIMProperty&) const;
	virtual Array<String> getLocalityName() const;
	virtual Boolean getMail(CIMProperty&) const;
	virtual Array<String> getMail() const;
	virtual Boolean getManager(CIMProperty&) const;
	virtual Array<String> getManager() const;
	virtual Boolean getMiddleName(CIMProperty&) const;
	virtual Array<String> getMiddleName() const;
	virtual Boolean getMobile(CIMProperty&) const;
	virtual Array<String> getMobile() const;
	virtual Boolean getOrganizationName(CIMProperty&) const;
	virtual Array<String> getOrganizationName() const;
	virtual Boolean getOrganizationalStatus(CIMProperty&) const;
	virtual Array<String> getOrganizationalStatus() const;
	virtual Boolean getOtherMailbox(CIMProperty&) const;
	virtual Array<String> getOtherMailbox() const;
	virtual Boolean getOU(CIMProperty&) const;
	virtual Array<String> getOU() const;
	virtual Boolean getPager(CIMProperty&) const;
	virtual Array<String> getPager() const;
	virtual Boolean getPersonalTitle(CIMProperty&) const;
	virtual Array<String> getPersonalTitle() const;
	virtual Boolean getPhoto(CIMProperty&) const;
	virtual Array<String> getPhoto() const;
	virtual Boolean getPhysicalDeliveryOfficeName(CIMProperty&) const;
	virtual Array<String> getPhysicalDeliveryOfficeName() const;
	virtual Boolean getPostalAddress(CIMProperty&) const;
	virtual Array<String> getPostalAddress() const;
	virtual Boolean getPostalCode(CIMProperty&) const;
	virtual Array<String> getPostalCode() const;
	virtual Boolean getPostOfficeBox(CIMProperty&) const;
	virtual Array<String> getPostOfficeBox() const;
	virtual Boolean getPreferredDeliveryMethod(CIMProperty&) const;
	virtual String getPreferredDeliveryMethod() const;
	virtual Boolean getPreferredLanguage(CIMProperty&) const;
	virtual String getPreferredLanguage() const;
	virtual Boolean getRegisteredAddress(CIMProperty&) const;
	virtual Array<String> getRegisteredAddress() const;
	virtual Boolean getRoomNumber(CIMProperty&) const;
	virtual Array<String> getRoomNumber() const;
	virtual Boolean getSecretary(CIMProperty&) const;
	virtual Array<String> getSecretary() const;
	virtual Boolean getSeeAlso(CIMProperty&) const;
	virtual Array<String> getSeeAlso() const;
	virtual Boolean getStateOrProvince(CIMProperty&) const;
	virtual Array<String> getStateOrProvince() const;
	virtual Boolean getStreet(CIMProperty&) const;
	virtual Array<String> getStreet() const;
	virtual Boolean getSurname(CIMProperty&) const;
	virtual Array<String> getSurname() const;
	virtual Boolean getTelephoneNumber(CIMProperty&) const;
	virtual Array<String> getTelephoneNumber() const;
	virtual Boolean getTeletexTerminalIdentifier(CIMProperty&) const;
	virtual Array<String> getTeletexTerminalIdentifier() const;
	virtual Boolean getTelexNumber(CIMProperty&) const;
	virtual Array<String> getTelexNumber() const;
	virtual Boolean getThumbnailLogo(CIMProperty&) const;
	virtual Array<String> getThumbnailLogo() const;
	virtual Boolean getThumbnailPhoto(CIMProperty&) const;
	virtual Array<String> getThumbnailPhoto() const;
	virtual Boolean getTitle(CIMProperty&) const;
	virtual Array<String> getTitle() const;
	virtual Boolean getUserID(CIMProperty&) const;
	virtual Array<String> getUserID() const;
	virtual Boolean getUniqueIdentifier(CIMProperty&) const;
	virtual Array<String> getUniqueIdentifier() const;
	virtual Boolean getUserCertificate(CIMProperty&) const;
	virtual Array<String> getUserCertificate() const;
	virtual Boolean getUserPassword(CIMProperty&) const;
	virtual Array<String> getUserPassword() const;
	virtual Boolean getUserPKCS12(CIMProperty&) const;
	virtual Array<String> getUserPKCS12() const;
	virtual Boolean getUserSMIMECertificate(CIMProperty&) const;
	virtual Array<String> getUserSMIMECertificate() const;
	virtual Boolean getX121Address(CIMProperty&) const;
	virtual Array<String> getX121Address() const;
	virtual Boolean getX500UniqueIdentifier(CIMProperty&) const;
	virtual Array<String> getX500UniqueIdentifier() const;

private:
	CIMName currentScope;

#	include "UNIX_OtherPersonInformationPrivate.h"


};

#endif /* UNIX_OTHERPERSONINFORMATION */
