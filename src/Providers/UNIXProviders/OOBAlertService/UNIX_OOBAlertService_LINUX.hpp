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


UNIX_OOBAlertService::UNIX_OOBAlertService(void)
{
}

UNIX_OOBAlertService::~UNIX_OOBAlertService(void)
{
}


Boolean UNIX_OOBAlertService::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_OOBAlertService::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_OOBAlertService::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_OOBAlertService::getCaption() const
{
	return String ("");
}

Boolean UNIX_OOBAlertService::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_OOBAlertService::getDescription() const
{
	return String ("");
}

Boolean UNIX_OOBAlertService::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_OOBAlertService::getElementName() const
{
	return String("OOBAlertService");
}

Boolean UNIX_OOBAlertService::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_OOBAlertService::getInstallDate() const
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

Boolean UNIX_OOBAlertService::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_OOBAlertService::getName() const
{
	return String ("");
}

Boolean UNIX_OOBAlertService::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_OOBAlertService::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_OOBAlertService::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_OOBAlertService::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OOBAlertService::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_OOBAlertService::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_OOBAlertService::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_OOBAlertService::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_OOBAlertService::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_OOBAlertService::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_OOBAlertService::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_OOBAlertService::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_OOBAlertService::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_OOBAlertService::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_OOBAlertService::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_OOBAlertService::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_OOBAlertService::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_OOBAlertService::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_OOBAlertService::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_OOBAlertService::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_OOBAlertService::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_OOBAlertService::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_OOBAlertService::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_OOBAlertService::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_OOBAlertService::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_OOBAlertService::getTimeOfLastStateChange() const
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

Boolean UNIX_OOBAlertService::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_OOBAlertService::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_OOBAlertService::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_OOBAlertService::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_OOBAlertService::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_OOBAlertService::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_OOBAlertService::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_OOBAlertService::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_OOBAlertService::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_OOBAlertService::getCreationClassName() const
{
	return String("UNIX_OOBAlertService");
}

Boolean UNIX_OOBAlertService::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_OOBAlertService::getPrimaryOwnerName() const
{
	return String ("");
}

Boolean UNIX_OOBAlertService::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_OOBAlertService::getPrimaryOwnerContact() const
{
	return String ("");
}

Boolean UNIX_OOBAlertService::getStartMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_MODE, getStartMode());
	return true;
}

String UNIX_OOBAlertService::getStartMode() const
{
	return String ("");
}

Boolean UNIX_OOBAlertService::getStarted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTED, getStarted());
	return true;
}

Boolean UNIX_OOBAlertService::getStarted() const
{
	return Boolean(false);
}

Boolean UNIX_OOBAlertService::getDestinationType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESTINATION_TYPE, getDestinationType());
	return true;
}

Uint16 UNIX_OOBAlertService::getDestinationType() const
{
	return Uint16(0);
}

Boolean UNIX_OOBAlertService::getOtherDestinationTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_DESTINATION_TYPE_DESCRIPTION, getOtherDestinationTypeDescription());
	return true;
}

String UNIX_OOBAlertService::getOtherDestinationTypeDescription() const
{
	return String ("");
}

Boolean UNIX_OOBAlertService::getDestinationAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESTINATION_ADDRESS, getDestinationAddress());
	return true;
}

String UNIX_OOBAlertService::getDestinationAddress() const
{
	return String ("");
}

Boolean UNIX_OOBAlertService::getMessageFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MESSAGE_FORMAT, getMessageFormat());
	return true;
}

Uint16 UNIX_OOBAlertService::getMessageFormat() const
{
	return Uint16(0);
}

Boolean UNIX_OOBAlertService::getOtherMessageFormatDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_MESSAGE_FORMAT_DESCRIPTION, getOtherMessageFormatDescription());
	return true;
}

String UNIX_OOBAlertService::getOtherMessageFormatDescription() const
{
	return String ("");
}

Boolean UNIX_OOBAlertService::getOnlySendsFixedMessage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ONLY_SENDS_FIXED_MESSAGE, getOnlySendsFixedMessage());
	return true;
}

Boolean UNIX_OOBAlertService::getOnlySendsFixedMessage() const
{
	return Boolean(false);
}

Boolean UNIX_OOBAlertService::getFixedPartOfMessage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FIXED_PART_OF_MESSAGE, getFixedPartOfMessage());
	return true;
}

String UNIX_OOBAlertService::getFixedPartOfMessage() const
{
	return String ("");
}

Boolean UNIX_OOBAlertService::getDestinationIsAckCapable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESTINATION_IS_ACK_CAPABLE, getDestinationIsAckCapable());
	return true;
}

Boolean UNIX_OOBAlertService::getDestinationIsAckCapable() const
{
	return Boolean(false);
}

Boolean UNIX_OOBAlertService::getRetryCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RETRY_COUNT, getRetryCount());
	return true;
}

Uint16 UNIX_OOBAlertService::getRetryCount() const
{
	return Uint16(0);
}

Boolean UNIX_OOBAlertService::getRetryInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RETRY_INTERVAL, getRetryInterval());
	return true;
}

Uint16 UNIX_OOBAlertService::getRetryInterval() const
{
	return Uint16(0);
}

Boolean UNIX_OOBAlertService::getPresenceHeartbeatCapable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRESENCE_HEARTBEAT_CAPABLE, getPresenceHeartbeatCapable());
	return true;
}

Boolean UNIX_OOBAlertService::getPresenceHeartbeatCapable() const
{
	return Boolean(false);
}

Boolean UNIX_OOBAlertService::getEnablePresenceHeartbeats(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLE_PRESENCE_HEARTBEATS, getEnablePresenceHeartbeats());
	return true;
}

Boolean UNIX_OOBAlertService::getEnablePresenceHeartbeats() const
{
	return Boolean(false);
}



Boolean UNIX_OOBAlertService::initialize()
{
	return false;
}

Boolean UNIX_OOBAlertService::load(int &pIndex)
{
	return false;
}

Boolean UNIX_OOBAlertService::finalize()
{
	return false;
}

Boolean UNIX_OOBAlertService::find(Array<CIMKeyBinding> &kbArray)
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
