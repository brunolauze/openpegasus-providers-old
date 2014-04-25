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


UNIX_ObjectManagerCommunicationMechanism::UNIX_ObjectManagerCommunicationMechanism(void)
{
}

UNIX_ObjectManagerCommunicationMechanism::~UNIX_ObjectManagerCommunicationMechanism(void)
{
}


Boolean UNIX_ObjectManagerCommunicationMechanism::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ObjectManagerCommunicationMechanism::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ObjectManagerCommunicationMechanism::getCaption() const
{
	return String ("");
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ObjectManagerCommunicationMechanism::getDescription() const
{
	return String ("");
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ObjectManagerCommunicationMechanism::getElementName() const
{
	return String("ObjectManagerCommunicationMechanism");
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_ObjectManagerCommunicationMechanism::getInstallDate() const
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

Boolean UNIX_ObjectManagerCommunicationMechanism::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_ObjectManagerCommunicationMechanism::getName() const
{
	return String ("");
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_ObjectManagerCommunicationMechanism::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_ObjectManagerCommunicationMechanism::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_ObjectManagerCommunicationMechanism::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_ObjectManagerCommunicationMechanism::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_ObjectManagerCommunicationMechanism::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_ObjectManagerCommunicationMechanism::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_ObjectManagerCommunicationMechanism::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_ObjectManagerCommunicationMechanism::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_ObjectManagerCommunicationMechanism::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_ObjectManagerCommunicationMechanism::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_ObjectManagerCommunicationMechanism::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_ObjectManagerCommunicationMechanism::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_ObjectManagerCommunicationMechanism::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_ObjectManagerCommunicationMechanism::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_ObjectManagerCommunicationMechanism::getTimeOfLastStateChange() const
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

Boolean UNIX_ObjectManagerCommunicationMechanism::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_ObjectManagerCommunicationMechanism::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_ObjectManagerCommunicationMechanism::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_ObjectManagerCommunicationMechanism::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_ObjectManagerCommunicationMechanism::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_ObjectManagerCommunicationMechanism::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_ObjectManagerCommunicationMechanism::getCreationClassName() const
{
	return String("UNIX_ObjectManagerCommunicationMechanism");
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getCommunicationMechanism(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_MECHANISM, getCommunicationMechanism());
	return true;
}

Uint16 UNIX_ObjectManagerCommunicationMechanism::getCommunicationMechanism() const
{
	return Uint16(0);
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getOtherCommunicationMechanismDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_COMMUNICATION_MECHANISM_DESCRIPTION, getOtherCommunicationMechanismDescription());
	return true;
}

String UNIX_ObjectManagerCommunicationMechanism::getOtherCommunicationMechanismDescription() const
{
	return String ("");
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getFunctionalProfilesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FUNCTIONAL_PROFILES_SUPPORTED, getFunctionalProfilesSupported());
	return true;
}

Array<Uint16> UNIX_ObjectManagerCommunicationMechanism::getFunctionalProfilesSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_ObjectManagerCommunicationMechanism::getFunctionalProfileDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FUNCTIONAL_PROFILE_DESCRIPTIONS, getFunctionalProfileDescriptions());
	return true;
}

Array<String> UNIX_ObjectManagerCommunicationMechanism::getFunctionalProfileDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_ObjectManagerCommunicationMechanism::getMultipleOperationsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MULTIPLE_OPERATIONS_SUPPORTED, getMultipleOperationsSupported());
	return true;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getMultipleOperationsSupported() const
{
	return Boolean(false);
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getAuthenticationMechanismsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTHENTICATION_MECHANISMS_SUPPORTED, getAuthenticationMechanismsSupported());
	return true;
}

Array<Uint16> UNIX_ObjectManagerCommunicationMechanism::getAuthenticationMechanismsSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_ObjectManagerCommunicationMechanism::getAuthenticationMechanismDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTHENTICATION_MECHANISM_DESCRIPTIONS, getAuthenticationMechanismDescriptions());
	return true;
}

Array<String> UNIX_ObjectManagerCommunicationMechanism::getAuthenticationMechanismDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_ObjectManagerCommunicationMechanism::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_ObjectManagerCommunicationMechanism::getVersion() const
{
	return String ("");
}

Boolean UNIX_ObjectManagerCommunicationMechanism::getAdvertiseTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADVERTISE_TYPES, getAdvertiseTypes());
	return true;
}

Array<Uint16> UNIX_ObjectManagerCommunicationMechanism::getAdvertiseTypes() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_ObjectManagerCommunicationMechanism::getAdvertiseTypeDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADVERTISE_TYPE_DESCRIPTIONS, getAdvertiseTypeDescriptions());
	return true;
}

Array<String> UNIX_ObjectManagerCommunicationMechanism::getAdvertiseTypeDescriptions() const
{
	Array<String> as;
	

	return as;

}



Boolean UNIX_ObjectManagerCommunicationMechanism::initialize()
{
	return false;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::load(int &pIndex)
{
	return false;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::finalize()
{
	return false;
}

Boolean UNIX_ObjectManagerCommunicationMechanism::find(Array<CIMKeyBinding> &kbArray)
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
