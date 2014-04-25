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

#ifndef __UNIX_ACCOUNT_H
#define __UNIX_ACCOUNT_H


#include "CIM_EnabledLogicalElement.h"

#include "UNIX_AccountDeps.h"


#define PROPERTY_SYSTEM_CREATION_CLASS_NAME				"SystemCreationClassName"
#define PROPERTY_SYSTEM_NAME				"SystemName"
#define PROPERTY_CREATION_CLASS_NAME				"CreationClassName"
#define PROPERTY_USER_ID				"UserID"
#define PROPERTY_OBJECT_CLASS				"ObjectClass"
#define PROPERTY_DESCRIPTIONS				"Descriptions"
#define PROPERTY_HOST				"Host"
#define PROPERTY_LOCALITY_NAME				"LocalityName"
#define PROPERTY_ORGANIZATION_NAME				"OrganizationName"
#define PROPERTY_O_U				"OU"
#define PROPERTY_SEE_ALSO				"SeeAlso"
#define PROPERTY_USER_CERTIFICATE				"UserCertificate"
#define PROPERTY_USER_PASSWORD				"UserPassword"
#define PROPERTY_USER_PASSWORD_ENCRYPTION_ALGORITHM				"UserPasswordEncryptionAlgorithm"
#define PROPERTY_OTHER_USER_PASSWORD_ENCRYPTION_ALGORITHM				"OtherUserPasswordEncryptionAlgorithm"
#define PROPERTY_COMPLEX_PASSWORD_RULES_ENFORCED				"ComplexPasswordRulesEnforced"
#define PROPERTY_INACTIVITY_TIMEOUT				"InactivityTimeout"
#define PROPERTY_LAST_LOGIN				"LastLogin"
#define PROPERTY_MAXIMUM_SUCCESSIVE_LOGIN_FAILURES				"MaximumSuccessiveLoginFailures"
#define PROPERTY_PASSWORD_EXPIRATION				"PasswordExpiration"
#define PROPERTY_PASSWORD_HISTORY_DEPTH				"PasswordHistoryDepth"
#define PROPERTY_USER_PASSWORD_ENCODING				"UserPasswordEncoding"


class UNIX_Account :
	public CIM_EnabledLogicalElement
{
public:

	UNIX_Account();
	~UNIX_Account();

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
	virtual Boolean getInstallDate(CIMProperty&) const;
	virtual CIMDateTime getInstallDate() const;
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual Boolean getOperationalStatus(CIMProperty&) const;
	virtual Array<Uint16> getOperationalStatus() const;
	virtual Boolean getStatusDescriptions(CIMProperty&) const;
	virtual Array<String> getStatusDescriptions() const;
	virtual Boolean getStatus(CIMProperty&) const;
	virtual String getStatus() const;
	virtual Boolean getHealthState(CIMProperty&) const;
	virtual Uint16 getHealthState() const;
	virtual Boolean getCommunicationStatus(CIMProperty&) const;
	virtual Uint16 getCommunicationStatus() const;
	virtual Boolean getDetailedStatus(CIMProperty&) const;
	virtual Uint16 getDetailedStatus() const;
	virtual Boolean getOperatingStatus(CIMProperty&) const;
	virtual Uint16 getOperatingStatus() const;
	virtual Boolean getPrimaryStatus(CIMProperty&) const;
	virtual Uint16 getPrimaryStatus() const;
	virtual Boolean getEnabledState(CIMProperty&) const;
	virtual Uint16 getEnabledState() const;
	virtual Boolean getOtherEnabledState(CIMProperty&) const;
	virtual String getOtherEnabledState() const;
	virtual Boolean getRequestedState(CIMProperty&) const;
	virtual Uint16 getRequestedState() const;
	virtual Boolean getEnabledDefault(CIMProperty&) const;
	virtual Uint16 getEnabledDefault() const;
	virtual Boolean getTimeOfLastStateChange(CIMProperty&) const;
	virtual CIMDateTime getTimeOfLastStateChange() const;
	virtual Boolean getAvailableRequestedStates(CIMProperty&) const;
	virtual Array<Uint16> getAvailableRequestedStates() const;
	virtual Boolean getTransitioningToState(CIMProperty&) const;
	virtual Uint16 getTransitioningToState() const;
	virtual Boolean getSystemCreationClassName(CIMProperty&) const;
	virtual String getSystemCreationClassName() const;
	virtual Boolean getSystemName(CIMProperty&) const;
	virtual String getSystemName() const;
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual Boolean getUserID(CIMProperty&) const;
	virtual String getUserID() const;
	virtual Boolean getObjectClass(CIMProperty&) const;
	virtual Array<String> getObjectClass() const;
	virtual Boolean getDescriptions(CIMProperty&) const;
	virtual Array<String> getDescriptions() const;
	virtual Boolean getHost(CIMProperty&) const;
	virtual Array<String> getHost() const;
	virtual Boolean getLocalityName(CIMProperty&) const;
	virtual Array<String> getLocalityName() const;
	virtual Boolean getOrganizationName(CIMProperty&) const;
	virtual Array<String> getOrganizationName() const;
	virtual Boolean getOU(CIMProperty&) const;
	virtual Array<String> getOU() const;
	virtual Boolean getSeeAlso(CIMProperty&) const;
	virtual Array<String> getSeeAlso() const;
	virtual Boolean getUserCertificate(CIMProperty&) const;
	virtual Array<String> getUserCertificate() const;
	virtual Boolean getUserPassword(CIMProperty&) const;
	virtual Array<String> getUserPassword() const;
	virtual Boolean getUserPasswordEncryptionAlgorithm(CIMProperty&) const;
	virtual Uint16 getUserPasswordEncryptionAlgorithm() const;
	virtual Boolean getOtherUserPasswordEncryptionAlgorithm(CIMProperty&) const;
	virtual String getOtherUserPasswordEncryptionAlgorithm() const;
	virtual Boolean getComplexPasswordRulesEnforced(CIMProperty&) const;
	virtual Array<Uint16> getComplexPasswordRulesEnforced() const;
	virtual Boolean getInactivityTimeout(CIMProperty&) const;
	virtual CIMDateTime getInactivityTimeout() const;
	virtual Boolean getLastLogin(CIMProperty&) const;
	virtual CIMDateTime getLastLogin() const;
	virtual Boolean getMaximumSuccessiveLoginFailures(CIMProperty&) const;
	virtual Uint16 getMaximumSuccessiveLoginFailures() const;
	virtual Boolean getPasswordExpiration(CIMProperty&) const;
	virtual CIMDateTime getPasswordExpiration() const;
	virtual Boolean getPasswordHistoryDepth(CIMProperty&) const;
	virtual Uint16 getPasswordHistoryDepth() const;
	virtual Boolean getUserPasswordEncoding(CIMProperty&) const;
	virtual Uint32 getUserPasswordEncoding() const;


	virtual Boolean getByUserID(String userID);
	virtual Boolean getByName(String name);
private:
	CIMName currentScope;

#	include "UNIX_AccountPrivate.h"


};

#endif /* UNIX_ACCOUNT */
