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


UNIX_Account::UNIX_Account(void)
{
}

UNIX_Account::~UNIX_Account(void)
{
}


Boolean UNIX_Account::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_Account::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_Account::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_Account::getCaption() const
{
	return String ("");
}

Boolean UNIX_Account::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_Account::getDescription() const
{
	return String ("");
}

Boolean UNIX_Account::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_Account::getElementName() const
{
	return String("Account");
}

Boolean UNIX_Account::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_Account::getInstallDate() const
{
	struct tm* clock;			// create a time structure
	time_t val = time(NULL);
	clock = gmtime(&(val));	// Get the last modified time and put it into the time structure
	return CIMDateTime(
		clock->tm_year + 1900,
		clock->tm_mon + 1,
		clock->tm_mday,
		clock->tm_hour,
		clock->tm_min,
		clock->tm_sec,
		0,0,
		clock->tm_gmtoff);
}

Boolean UNIX_Account::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_Account::getName() const
{
	return String ("");
}

Boolean UNIX_Account::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_Account::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Account::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_Account::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Account::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_Account::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_Account::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_Account::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_Account::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_Account::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_Account::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_Account::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_Account::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_Account::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_Account::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_Account::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_Account::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_Account::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_Account::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_Account::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_Account::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_Account::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_Account::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_Account::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_Account::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_Account::getTimeOfLastStateChange() const
{
	struct tm* clock;			// create a time structure
	time_t val = time(NULL);
	clock = gmtime(&(val));	// Get the last modified time and put it into the time structure
	return CIMDateTime(
		clock->tm_year + 1900,
		clock->tm_mon + 1,
		clock->tm_mday,
		clock->tm_hour,
		clock->tm_min,
		clock->tm_sec,
		0,0,
		clock->tm_gmtoff);
}

Boolean UNIX_Account::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_Account::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Account::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_Account::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_Account::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_Account::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_Account::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_Account::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_Account::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_Account::getCreationClassName() const
{
	return String("UNIX_Account");
}

Boolean UNIX_Account::getUserID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_ID, getUserID());
	return true;
}

String UNIX_Account::getUserID() const
{
	return String ("");
}

Boolean UNIX_Account::getObjectClass(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OBJECT_CLASS, getObjectClass());
	return true;
}

Array<String> UNIX_Account::getObjectClass() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Account::getDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTIONS, getDescriptions());
	return true;
}

Array<String> UNIX_Account::getDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Account::getHost(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOST, getHost());
	return true;
}

Array<String> UNIX_Account::getHost() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Account::getLocalityName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCALITY_NAME, getLocalityName());
	return true;
}

Array<String> UNIX_Account::getLocalityName() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Account::getOrganizationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ORGANIZATION_NAME, getOrganizationName());
	return true;
}

Array<String> UNIX_Account::getOrganizationName() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Account::getOU(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_O_U, getOU());
	return true;
}

Array<String> UNIX_Account::getOU() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Account::getSeeAlso(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEE_ALSO, getSeeAlso());
	return true;
}

Array<String> UNIX_Account::getSeeAlso() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Account::getUserCertificate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_CERTIFICATE, getUserCertificate());
	return true;
}

Array<String> UNIX_Account::getUserCertificate() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Account::getUserPassword(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_PASSWORD, getUserPassword());
	return true;
}

Array<String> UNIX_Account::getUserPassword() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Account::getUserPasswordEncryptionAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_PASSWORD_ENCRYPTION_ALGORITHM, getUserPasswordEncryptionAlgorithm());
	return true;
}

Uint16 UNIX_Account::getUserPasswordEncryptionAlgorithm() const
{
	return Uint16(0);
}

Boolean UNIX_Account::getOtherUserPasswordEncryptionAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_USER_PASSWORD_ENCRYPTION_ALGORITHM, getOtherUserPasswordEncryptionAlgorithm());
	return true;
}

String UNIX_Account::getOtherUserPasswordEncryptionAlgorithm() const
{
	return String ("");
}

Boolean UNIX_Account::getComplexPasswordRulesEnforced(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPLEX_PASSWORD_RULES_ENFORCED, getComplexPasswordRulesEnforced());
	return true;
}

Array<Uint16> UNIX_Account::getComplexPasswordRulesEnforced() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Account::getInactivityTimeout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INACTIVITY_TIMEOUT, getInactivityTimeout());
	return true;
}

CIMDateTime UNIX_Account::getInactivityTimeout() const
{
	struct tm* clock;			// create a time structure
	time_t val = time(NULL);
	clock = gmtime(&(val));	// Get the last modified time and put it into the time structure
	return CIMDateTime(
		clock->tm_year + 1900,
		clock->tm_mon + 1,
		clock->tm_mday,
		clock->tm_hour,
		clock->tm_min,
		clock->tm_sec,
		0,0,
		clock->tm_gmtoff);
}

Boolean UNIX_Account::getLastLogin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_LOGIN, getLastLogin());
	return true;
}

CIMDateTime UNIX_Account::getLastLogin() const
{
	struct tm* clock;			// create a time structure
	time_t val = time(NULL);
	clock = gmtime(&(val));	// Get the last modified time and put it into the time structure
	return CIMDateTime(
		clock->tm_year + 1900,
		clock->tm_mon + 1,
		clock->tm_mday,
		clock->tm_hour,
		clock->tm_min,
		clock->tm_sec,
		0,0,
		clock->tm_gmtoff);
}

Boolean UNIX_Account::getMaximumSuccessiveLoginFailures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_SUCCESSIVE_LOGIN_FAILURES, getMaximumSuccessiveLoginFailures());
	return true;
}

Uint16 UNIX_Account::getMaximumSuccessiveLoginFailures() const
{
	return Uint16(0);
}

Boolean UNIX_Account::getPasswordExpiration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PASSWORD_EXPIRATION, getPasswordExpiration());
	return true;
}

CIMDateTime UNIX_Account::getPasswordExpiration() const
{
	struct tm* clock;			// create a time structure
	time_t val = time(NULL);
	clock = gmtime(&(val));	// Get the last modified time and put it into the time structure
	return CIMDateTime(
		clock->tm_year + 1900,
		clock->tm_mon + 1,
		clock->tm_mday,
		clock->tm_hour,
		clock->tm_min,
		clock->tm_sec,
		0,0,
		clock->tm_gmtoff);
}

Boolean UNIX_Account::getPasswordHistoryDepth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PASSWORD_HISTORY_DEPTH, getPasswordHistoryDepth());
	return true;
}

Uint16 UNIX_Account::getPasswordHistoryDepth() const
{
	return Uint16(0);
}

Boolean UNIX_Account::getUserPasswordEncoding(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_PASSWORD_ENCODING, getUserPasswordEncoding());
	return true;
}

Uint32 UNIX_Account::getUserPasswordEncoding() const
{
	return Uint32(0);
}



Boolean UNIX_Account::initialize()
{
	return false;
}

Boolean UNIX_Account::load(int &pIndex)
{
	return false;
}

Boolean UNIX_Account::finalize()
{
	return false;
}

Boolean UNIX_Account::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
