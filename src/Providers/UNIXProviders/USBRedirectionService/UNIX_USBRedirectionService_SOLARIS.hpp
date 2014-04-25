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


UNIX_USBRedirectionService::UNIX_USBRedirectionService(void)
{
}

UNIX_USBRedirectionService::~UNIX_USBRedirectionService(void)
{
}


Boolean UNIX_USBRedirectionService::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_USBRedirectionService::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_USBRedirectionService::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_USBRedirectionService::getCaption() const
{
	return String ("");
}

Boolean UNIX_USBRedirectionService::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_USBRedirectionService::getDescription() const
{
	return String ("");
}

Boolean UNIX_USBRedirectionService::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_USBRedirectionService::getElementName() const
{
	return String("USBRedirectionService");
}

Boolean UNIX_USBRedirectionService::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_USBRedirectionService::getInstallDate() const
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

Boolean UNIX_USBRedirectionService::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_USBRedirectionService::getName() const
{
	return String ("");
}

Boolean UNIX_USBRedirectionService::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_USBRedirectionService::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_USBRedirectionService::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_USBRedirectionService::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_USBRedirectionService::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_USBRedirectionService::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_USBRedirectionService::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_USBRedirectionService::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_USBRedirectionService::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_USBRedirectionService::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_USBRedirectionService::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_USBRedirectionService::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_USBRedirectionService::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_USBRedirectionService::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_USBRedirectionService::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_USBRedirectionService::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_USBRedirectionService::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_USBRedirectionService::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_USBRedirectionService::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_USBRedirectionService::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_USBRedirectionService::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_USBRedirectionService::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_USBRedirectionService::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_USBRedirectionService::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_USBRedirectionService::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_USBRedirectionService::getTimeOfLastStateChange() const
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

Boolean UNIX_USBRedirectionService::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_USBRedirectionService::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_USBRedirectionService::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_USBRedirectionService::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_USBRedirectionService::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_USBRedirectionService::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_USBRedirectionService::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_USBRedirectionService::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_USBRedirectionService::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_USBRedirectionService::getCreationClassName() const
{
	return String("UNIX_USBRedirectionService");
}

Boolean UNIX_USBRedirectionService::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_USBRedirectionService::getPrimaryOwnerName() const
{
	return String ("");
}

Boolean UNIX_USBRedirectionService::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_USBRedirectionService::getPrimaryOwnerContact() const
{
	return String ("");
}

Boolean UNIX_USBRedirectionService::getStartMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_MODE, getStartMode());
	return true;
}

String UNIX_USBRedirectionService::getStartMode() const
{
	return String ("");
}

Boolean UNIX_USBRedirectionService::getStarted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTED, getStarted());
	return true;
}

Boolean UNIX_USBRedirectionService::getStarted() const
{
	return Boolean(false);
}

Boolean UNIX_USBRedirectionService::getRedirectionServiceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REDIRECTION_SERVICE_TYPE, getRedirectionServiceType());
	return true;
}

Array<Uint16> UNIX_USBRedirectionService::getRedirectionServiceType() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_USBRedirectionService::getOtherRedirectionServiceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_REDIRECTION_SERVICE_TYPE, getOtherRedirectionServiceType());
	return true;
}

String UNIX_USBRedirectionService::getOtherRedirectionServiceType() const
{
	return String ("");
}

Boolean UNIX_USBRedirectionService::getMaxCurrentEnabledSAPs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_CURRENT_ENABLED_S_A_PS, getMaxCurrentEnabledSAPs());
	return true;
}

Uint16 UNIX_USBRedirectionService::getMaxCurrentEnabledSAPs() const
{
	return Uint16(0);
}

Boolean UNIX_USBRedirectionService::getSharingMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SHARING_MODE, getSharingMode());
	return true;
}

Uint16 UNIX_USBRedirectionService::getSharingMode() const
{
	return Uint16(0);
}



Boolean UNIX_USBRedirectionService::initialize()
{
	return false;
}

Boolean UNIX_USBRedirectionService::load(int &pIndex)
{
	return false;
}

Boolean UNIX_USBRedirectionService::finalize()
{
	return false;
}

Boolean UNIX_USBRedirectionService::find(Array<CIMKeyBinding> &kbArray)
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
