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


UNIX_CIMXMLCommunicationMechanism::UNIX_CIMXMLCommunicationMechanism(void)
{
}

UNIX_CIMXMLCommunicationMechanism::~UNIX_CIMXMLCommunicationMechanism(void)
{
}


Boolean UNIX_CIMXMLCommunicationMechanism::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_CIMXMLCommunicationMechanism::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_CIMXMLCommunicationMechanism::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_CIMXMLCommunicationMechanism::getCaption() const
{
	return String ("");
}

Boolean UNIX_CIMXMLCommunicationMechanism::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_CIMXMLCommunicationMechanism::getDescription() const
{
	return String ("");
}

Boolean UNIX_CIMXMLCommunicationMechanism::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_CIMXMLCommunicationMechanism::getElementName() const
{
	return String("CIMXMLCommunicationMechanism");
}

Boolean UNIX_CIMXMLCommunicationMechanism::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_CIMXMLCommunicationMechanism::getInstallDate() const
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

Boolean UNIX_CIMXMLCommunicationMechanism::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_CIMXMLCommunicationMechanism::getName() const
{
	return String ("");
}

Boolean UNIX_CIMXMLCommunicationMechanism::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_CIMXMLCommunicationMechanism::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_CIMXMLCommunicationMechanism::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_CIMXMLCommunicationMechanism::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_CIMXMLCommunicationMechanism::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_CIMXMLCommunicationMechanism::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_CIMXMLCommunicationMechanism::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_CIMXMLCommunicationMechanism::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_CIMXMLCommunicationMechanism::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_CIMXMLCommunicationMechanism::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_CIMXMLCommunicationMechanism::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_CIMXMLCommunicationMechanism::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_CIMXMLCommunicationMechanism::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_CIMXMLCommunicationMechanism::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_CIMXMLCommunicationMechanism::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_CIMXMLCommunicationMechanism::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_CIMXMLCommunicationMechanism::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_CIMXMLCommunicationMechanism::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_CIMXMLCommunicationMechanism::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_CIMXMLCommunicationMechanism::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_CIMXMLCommunicationMechanism::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_CIMXMLCommunicationMechanism::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_CIMXMLCommunicationMechanism::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_CIMXMLCommunicationMechanism::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_CIMXMLCommunicationMechanism::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_CIMXMLCommunicationMechanism::getTimeOfLastStateChange() const
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

Boolean UNIX_CIMXMLCommunicationMechanism::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_CIMXMLCommunicationMechanism::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_CIMXMLCommunicationMechanism::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_CIMXMLCommunicationMechanism::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_CIMXMLCommunicationMechanism::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_CIMXMLCommunicationMechanism::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_CIMXMLCommunicationMechanism::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_CIMXMLCommunicationMechanism::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_CIMXMLCommunicationMechanism::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_CIMXMLCommunicationMechanism::getCreationClassName() const
{
	return String("UNIX_CIMXMLCommunicationMechanism");
}

Boolean UNIX_CIMXMLCommunicationMechanism::getCommunicationMechanism(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_MECHANISM, getCommunicationMechanism());
	return true;
}

Uint16 UNIX_CIMXMLCommunicationMechanism::getCommunicationMechanism() const
{
	return Uint16(0);
}

Boolean UNIX_CIMXMLCommunicationMechanism::getOtherCommunicationMechanismDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_COMMUNICATION_MECHANISM_DESCRIPTION, getOtherCommunicationMechanismDescription());
	return true;
}

String UNIX_CIMXMLCommunicationMechanism::getOtherCommunicationMechanismDescription() const
{
	return String ("");
}

Boolean UNIX_CIMXMLCommunicationMechanism::getFunctionalProfilesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FUNCTIONAL_PROFILES_SUPPORTED, getFunctionalProfilesSupported());
	return true;
}

Array<Uint16> UNIX_CIMXMLCommunicationMechanism::getFunctionalProfilesSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_CIMXMLCommunicationMechanism::getFunctionalProfileDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FUNCTIONAL_PROFILE_DESCRIPTIONS, getFunctionalProfileDescriptions());
	return true;
}

Array<String> UNIX_CIMXMLCommunicationMechanism::getFunctionalProfileDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_CIMXMLCommunicationMechanism::getMultipleOperationsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MULTIPLE_OPERATIONS_SUPPORTED, getMultipleOperationsSupported());
	return true;
}

Boolean UNIX_CIMXMLCommunicationMechanism::getMultipleOperationsSupported() const
{
	return Boolean(false);
}

Boolean UNIX_CIMXMLCommunicationMechanism::getAuthenticationMechanismsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTHENTICATION_MECHANISMS_SUPPORTED, getAuthenticationMechanismsSupported());
	return true;
}

Array<Uint16> UNIX_CIMXMLCommunicationMechanism::getAuthenticationMechanismsSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_CIMXMLCommunicationMechanism::getAuthenticationMechanismDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTHENTICATION_MECHANISM_DESCRIPTIONS, getAuthenticationMechanismDescriptions());
	return true;
}

Array<String> UNIX_CIMXMLCommunicationMechanism::getAuthenticationMechanismDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_CIMXMLCommunicationMechanism::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_CIMXMLCommunicationMechanism::getVersion() const
{
	return String ("");
}

Boolean UNIX_CIMXMLCommunicationMechanism::getAdvertiseTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADVERTISE_TYPES, getAdvertiseTypes());
	return true;
}

Array<Uint16> UNIX_CIMXMLCommunicationMechanism::getAdvertiseTypes() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_CIMXMLCommunicationMechanism::getAdvertiseTypeDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADVERTISE_TYPE_DESCRIPTIONS, getAdvertiseTypeDescriptions());
	return true;
}

Array<String> UNIX_CIMXMLCommunicationMechanism::getAdvertiseTypeDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_CIMXMLCommunicationMechanism::getCIMXMLProtocolVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_C_I_M_X_M_L_PROTOCOL_VERSION, getCIMXMLProtocolVersion());
	return true;
}

Uint16 UNIX_CIMXMLCommunicationMechanism::getCIMXMLProtocolVersion() const
{
	return Uint16(0);
}

Boolean UNIX_CIMXMLCommunicationMechanism::getCIMValidated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_C_I_M_VALIDATED, getCIMValidated());
	return true;
}

Boolean UNIX_CIMXMLCommunicationMechanism::getCIMValidated() const
{
	return Boolean(false);
}



Boolean UNIX_CIMXMLCommunicationMechanism::initialize()
{
	return false;
}

Boolean UNIX_CIMXMLCommunicationMechanism::load(int &pIndex)
{
	return false;
}

Boolean UNIX_CIMXMLCommunicationMechanism::finalize()
{
	return false;
}

Boolean UNIX_CIMXMLCommunicationMechanism::find(Array<CIMKeyBinding> &kbArray)
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
