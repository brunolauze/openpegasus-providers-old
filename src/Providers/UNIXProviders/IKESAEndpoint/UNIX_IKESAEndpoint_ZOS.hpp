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


UNIX_IKESAEndpoint::UNIX_IKESAEndpoint(void)
{
}

UNIX_IKESAEndpoint::~UNIX_IKESAEndpoint(void)
{
}


Boolean UNIX_IKESAEndpoint::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_IKESAEndpoint::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_IKESAEndpoint::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_IKESAEndpoint::getCaption() const
{
	return String ("");
}

Boolean UNIX_IKESAEndpoint::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_IKESAEndpoint::getDescription() const
{
	return String ("");
}

Boolean UNIX_IKESAEndpoint::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_IKESAEndpoint::getElementName() const
{
	return String("IKESAEndpoint");
}

Boolean UNIX_IKESAEndpoint::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_IKESAEndpoint::getInstallDate() const
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

Boolean UNIX_IKESAEndpoint::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_IKESAEndpoint::getName() const
{
	return String ("");
}

Boolean UNIX_IKESAEndpoint::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_IKESAEndpoint::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_IKESAEndpoint::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_IKESAEndpoint::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_IKESAEndpoint::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_IKESAEndpoint::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_IKESAEndpoint::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_IKESAEndpoint::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_IKESAEndpoint::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_IKESAEndpoint::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_IKESAEndpoint::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_IKESAEndpoint::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_IKESAEndpoint::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_IKESAEndpoint::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_IKESAEndpoint::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_IKESAEndpoint::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_IKESAEndpoint::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_IKESAEndpoint::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_IKESAEndpoint::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_IKESAEndpoint::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_IKESAEndpoint::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_IKESAEndpoint::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_IKESAEndpoint::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_IKESAEndpoint::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_IKESAEndpoint::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_IKESAEndpoint::getTimeOfLastStateChange() const
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

Boolean UNIX_IKESAEndpoint::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_IKESAEndpoint::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_IKESAEndpoint::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_IKESAEndpoint::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_IKESAEndpoint::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_IKESAEndpoint::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_IKESAEndpoint::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_IKESAEndpoint::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_IKESAEndpoint::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_IKESAEndpoint::getCreationClassName() const
{
	return String("UNIX_IKESAEndpoint");
}

Boolean UNIX_IKESAEndpoint::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

String UNIX_IKESAEndpoint::getNameFormat() const
{
	return String ("");
}

Boolean UNIX_IKESAEndpoint::getProtocolType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_TYPE, getProtocolType());
	return true;
}

Uint16 UNIX_IKESAEndpoint::getProtocolType() const
{
	return Uint16(0);
}

Boolean UNIX_IKESAEndpoint::getProtocolIFType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_I_F_TYPE, getProtocolIFType());
	return true;
}

Uint16 UNIX_IKESAEndpoint::getProtocolIFType() const
{
	return Uint16(0);
}

Boolean UNIX_IKESAEndpoint::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_IKESAEndpoint::getOtherTypeDescription() const
{
	return String ("");
}

Boolean UNIX_IKESAEndpoint::getLifetimeSeconds(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LIFETIME_SECONDS, getLifetimeSeconds());
	return true;
}

Uint64 UNIX_IKESAEndpoint::getLifetimeSeconds() const
{
	return Uint64(0);
}

Boolean UNIX_IKESAEndpoint::getRefreshThresholdSecondsPercentage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REFRESH_THRESHOLD_SECONDS_PERCENTAGE, getRefreshThresholdSecondsPercentage());
	return true;
}

Uint8 UNIX_IKESAEndpoint::getRefreshThresholdSecondsPercentage() const
{
	return Uint8(0);
}

Boolean UNIX_IKESAEndpoint::getIdleDurationSeconds(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDLE_DURATION_SECONDS, getIdleDurationSeconds());
	return true;
}

Uint64 UNIX_IKESAEndpoint::getIdleDurationSeconds() const
{
	return Uint64(0);
}

Boolean UNIX_IKESAEndpoint::getLifetimeKilobytes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LIFETIME_KILOBYTES, getLifetimeKilobytes());
	return true;
}

Uint64 UNIX_IKESAEndpoint::getLifetimeKilobytes() const
{
	return Uint64(0);
}

Boolean UNIX_IKESAEndpoint::getRefreshThresholdKbytesPercentage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REFRESH_THRESHOLD_KBYTES_PERCENTAGE, getRefreshThresholdKbytesPercentage());
	return true;
}

Uint8 UNIX_IKESAEndpoint::getRefreshThresholdKbytesPercentage() const
{
	return Uint8(0);
}

Boolean UNIX_IKESAEndpoint::getPacketLoggingActive(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKET_LOGGING_ACTIVE, getPacketLoggingActive());
	return true;
}

Boolean UNIX_IKESAEndpoint::getPacketLoggingActive() const
{
	return Boolean(false);
}

Boolean UNIX_IKESAEndpoint::getInitiatorCookie(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INITIATOR_COOKIE, getInitiatorCookie());
	return true;
}

Uint64 UNIX_IKESAEndpoint::getInitiatorCookie() const
{
	return Uint64(0);
}

Boolean UNIX_IKESAEndpoint::getResponderCookie(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESPONDER_COOKIE, getResponderCookie());
	return true;
}

Uint64 UNIX_IKESAEndpoint::getResponderCookie() const
{
	return Uint64(0);
}

Boolean UNIX_IKESAEndpoint::getCipherAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CIPHER_ALGORITHM, getCipherAlgorithm());
	return true;
}

Uint16 UNIX_IKESAEndpoint::getCipherAlgorithm() const
{
	return Uint16(0);
}

Boolean UNIX_IKESAEndpoint::getOtherCipherAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_CIPHER_ALGORITHM, getOtherCipherAlgorithm());
	return true;
}

String UNIX_IKESAEndpoint::getOtherCipherAlgorithm() const
{
	return String ("");
}

Boolean UNIX_IKESAEndpoint::getHashAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HASH_ALGORITHM, getHashAlgorithm());
	return true;
}

Uint16 UNIX_IKESAEndpoint::getHashAlgorithm() const
{
	return Uint16(0);
}

Boolean UNIX_IKESAEndpoint::getOtherHashAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_HASH_ALGORITHM, getOtherHashAlgorithm());
	return true;
}

String UNIX_IKESAEndpoint::getOtherHashAlgorithm() const
{
	return String ("");
}

Boolean UNIX_IKESAEndpoint::getAuthenticationMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTHENTICATION_METHOD, getAuthenticationMethod());
	return true;
}

Uint16 UNIX_IKESAEndpoint::getAuthenticationMethod() const
{
	return Uint16(0);
}

Boolean UNIX_IKESAEndpoint::getOtherAuthenticationMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_AUTHENTICATION_METHOD, getOtherAuthenticationMethod());
	return true;
}

String UNIX_IKESAEndpoint::getOtherAuthenticationMethod() const
{
	return String ("");
}

Boolean UNIX_IKESAEndpoint::getGroupId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_ID, getGroupId());
	return true;
}

Uint16 UNIX_IKESAEndpoint::getGroupId() const
{
	return Uint16(0);
}

Boolean UNIX_IKESAEndpoint::getVendorID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_ID, getVendorID());
	return true;
}

String UNIX_IKESAEndpoint::getVendorID() const
{
	return String ("");
}



Boolean UNIX_IKESAEndpoint::initialize()
{
	return false;
}

Boolean UNIX_IKESAEndpoint::load(int &pIndex)
{
	return false;
}

Boolean UNIX_IKESAEndpoint::finalize()
{
	return false;
}

Boolean UNIX_IKESAEndpoint::find(Array<CIMKeyBinding> &kbArray)
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
