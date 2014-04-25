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


UNIX_TextRedirectionService::UNIX_TextRedirectionService(void)
{
}

UNIX_TextRedirectionService::~UNIX_TextRedirectionService(void)
{
}


Boolean UNIX_TextRedirectionService::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_TextRedirectionService::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_TextRedirectionService::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_TextRedirectionService::getCaption() const
{
	return String ("");
}

Boolean UNIX_TextRedirectionService::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_TextRedirectionService::getDescription() const
{
	return String ("");
}

Boolean UNIX_TextRedirectionService::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_TextRedirectionService::getElementName() const
{
	return String("TextRedirectionService");
}

Boolean UNIX_TextRedirectionService::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_TextRedirectionService::getInstallDate() const
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

Boolean UNIX_TextRedirectionService::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_TextRedirectionService::getName() const
{
	return String ("");
}

Boolean UNIX_TextRedirectionService::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_TextRedirectionService::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_TextRedirectionService::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_TextRedirectionService::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_TextRedirectionService::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_TextRedirectionService::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_TextRedirectionService::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_TextRedirectionService::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_TextRedirectionService::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_TextRedirectionService::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_TextRedirectionService::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_TextRedirectionService::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_TextRedirectionService::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_TextRedirectionService::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_TextRedirectionService::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_TextRedirectionService::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_TextRedirectionService::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_TextRedirectionService::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_TextRedirectionService::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_TextRedirectionService::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_TextRedirectionService::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_TextRedirectionService::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_TextRedirectionService::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_TextRedirectionService::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_TextRedirectionService::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_TextRedirectionService::getTimeOfLastStateChange() const
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

Boolean UNIX_TextRedirectionService::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_TextRedirectionService::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_TextRedirectionService::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_TextRedirectionService::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_TextRedirectionService::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_TextRedirectionService::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_TextRedirectionService::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_TextRedirectionService::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_TextRedirectionService::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_TextRedirectionService::getCreationClassName() const
{
	return String("UNIX_TextRedirectionService");
}

Boolean UNIX_TextRedirectionService::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_TextRedirectionService::getPrimaryOwnerName() const
{
	return String ("");
}

Boolean UNIX_TextRedirectionService::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_TextRedirectionService::getPrimaryOwnerContact() const
{
	return String ("");
}

Boolean UNIX_TextRedirectionService::getStartMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_MODE, getStartMode());
	return true;
}

String UNIX_TextRedirectionService::getStartMode() const
{
	return String ("");
}

Boolean UNIX_TextRedirectionService::getStarted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTED, getStarted());
	return true;
}

Boolean UNIX_TextRedirectionService::getStarted() const
{
	return Boolean(false);
}

Boolean UNIX_TextRedirectionService::getRedirectionServiceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REDIRECTION_SERVICE_TYPE, getRedirectionServiceType());
	return true;
}

Array<Uint16> UNIX_TextRedirectionService::getRedirectionServiceType() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_TextRedirectionService::getOtherRedirectionServiceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_REDIRECTION_SERVICE_TYPE, getOtherRedirectionServiceType());
	return true;
}

String UNIX_TextRedirectionService::getOtherRedirectionServiceType() const
{
	return String ("");
}

Boolean UNIX_TextRedirectionService::getMaxCurrentEnabledSAPs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_CURRENT_ENABLED_S_A_PS, getMaxCurrentEnabledSAPs());
	return true;
}

Uint16 UNIX_TextRedirectionService::getMaxCurrentEnabledSAPs() const
{
	return Uint16(0);
}

Boolean UNIX_TextRedirectionService::getSharingMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SHARING_MODE, getSharingMode());
	return true;
}

Uint16 UNIX_TextRedirectionService::getSharingMode() const
{
	return Uint16(0);
}



Boolean UNIX_TextRedirectionService::initialize()
{
	return false;
}

Boolean UNIX_TextRedirectionService::load(int &pIndex)
{
	return false;
}

Boolean UNIX_TextRedirectionService::finalize()
{
	return false;
}

Boolean UNIX_TextRedirectionService::find(Array<CIMKeyBinding> &kbArray)
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
