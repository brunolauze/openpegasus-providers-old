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


UNIX_BGPProtocolEndpoint::UNIX_BGPProtocolEndpoint(void)
{
}

UNIX_BGPProtocolEndpoint::~UNIX_BGPProtocolEndpoint(void)
{
}


Boolean UNIX_BGPProtocolEndpoint::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BGPProtocolEndpoint::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_BGPProtocolEndpoint::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BGPProtocolEndpoint::getCaption() const
{
	return String ("");
}

Boolean UNIX_BGPProtocolEndpoint::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BGPProtocolEndpoint::getDescription() const
{
	return String ("");
}

Boolean UNIX_BGPProtocolEndpoint::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BGPProtocolEndpoint::getElementName() const
{
	return String("BGPProtocolEndpoint");
}

Boolean UNIX_BGPProtocolEndpoint::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_BGPProtocolEndpoint::getInstallDate() const
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

Boolean UNIX_BGPProtocolEndpoint::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_BGPProtocolEndpoint::getName() const
{
	return String ("");
}

Boolean UNIX_BGPProtocolEndpoint::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_BGPProtocolEndpoint::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_BGPProtocolEndpoint::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_BGPProtocolEndpoint::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_BGPProtocolEndpoint::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_BGPProtocolEndpoint::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_BGPProtocolEndpoint::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_BGPProtocolEndpoint::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_BGPProtocolEndpoint::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_BGPProtocolEndpoint::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_BGPProtocolEndpoint::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_BGPProtocolEndpoint::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_BGPProtocolEndpoint::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_BGPProtocolEndpoint::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_BGPProtocolEndpoint::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_BGPProtocolEndpoint::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_BGPProtocolEndpoint::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_BGPProtocolEndpoint::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_BGPProtocolEndpoint::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_BGPProtocolEndpoint::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_BGPProtocolEndpoint::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_BGPProtocolEndpoint::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_BGPProtocolEndpoint::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_BGPProtocolEndpoint::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_BGPProtocolEndpoint::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_BGPProtocolEndpoint::getTimeOfLastStateChange() const
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

Boolean UNIX_BGPProtocolEndpoint::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_BGPProtocolEndpoint::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_BGPProtocolEndpoint::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_BGPProtocolEndpoint::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_BGPProtocolEndpoint::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_BGPProtocolEndpoint::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_BGPProtocolEndpoint::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_BGPProtocolEndpoint::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_BGPProtocolEndpoint::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_BGPProtocolEndpoint::getCreationClassName() const
{
	return String("UNIX_BGPProtocolEndpoint");
}

Boolean UNIX_BGPProtocolEndpoint::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

String UNIX_BGPProtocolEndpoint::getNameFormat() const
{
	return String ("");
}

Boolean UNIX_BGPProtocolEndpoint::getProtocolType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_TYPE, getProtocolType());
	return true;
}

Uint16 UNIX_BGPProtocolEndpoint::getProtocolType() const
{
	return Uint16(0);
}

Boolean UNIX_BGPProtocolEndpoint::getProtocolIFType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_I_F_TYPE, getProtocolIFType());
	return true;
}

Uint16 UNIX_BGPProtocolEndpoint::getProtocolIFType() const
{
	return Uint16(0);
}

Boolean UNIX_BGPProtocolEndpoint::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_BGPProtocolEndpoint::getOtherTypeDescription() const
{
	return String ("");
}

Boolean UNIX_BGPProtocolEndpoint::getIsEBGP(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_E_B_G_P, getIsEBGP());
	return true;
}

Boolean UNIX_BGPProtocolEndpoint::getIsEBGP() const
{
	return Boolean(false);
}

Boolean UNIX_BGPProtocolEndpoint::getIsEBGPMultihop(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_E_B_G_P_MULTIHOP, getIsEBGPMultihop());
	return true;
}

Boolean UNIX_BGPProtocolEndpoint::getIsEBGPMultihop() const
{
	return Boolean(false);
}

Boolean UNIX_BGPProtocolEndpoint::getLocalIdentifier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCAL_IDENTIFIER, getLocalIdentifier());
	return true;
}

String UNIX_BGPProtocolEndpoint::getLocalIdentifier() const
{
	return String ("");
}

Boolean UNIX_BGPProtocolEndpoint::getPeerIdentifier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PEER_IDENTIFIER, getPeerIdentifier());
	return true;
}

String UNIX_BGPProtocolEndpoint::getPeerIdentifier() const
{
	return String ("");
}

Boolean UNIX_BGPProtocolEndpoint::getState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATE, getState());
	return true;
}

Uint16 UNIX_BGPProtocolEndpoint::getState() const
{
	return Uint16(0);
}

Boolean UNIX_BGPProtocolEndpoint::getAdminStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADMIN_STATUS, getAdminStatus());
	return true;
}

Uint16 UNIX_BGPProtocolEndpoint::getAdminStatus() const
{
	return Uint16(0);
}

Boolean UNIX_BGPProtocolEndpoint::getNegotiatedVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NEGOTIATED_VERSION, getNegotiatedVersion());
	return true;
}

String UNIX_BGPProtocolEndpoint::getNegotiatedVersion() const
{
	return String ("");
}

Boolean UNIX_BGPProtocolEndpoint::getLocalAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCAL_ADDRESS, getLocalAddress());
	return true;
}

String UNIX_BGPProtocolEndpoint::getLocalAddress() const
{
	return String ("");
}

Boolean UNIX_BGPProtocolEndpoint::getLocalPort(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCAL_PORT, getLocalPort());
	return true;
}

Uint16 UNIX_BGPProtocolEndpoint::getLocalPort() const
{
	return Uint16(0);
}

Boolean UNIX_BGPProtocolEndpoint::getRemoteAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOTE_ADDRESS, getRemoteAddress());
	return true;
}

String UNIX_BGPProtocolEndpoint::getRemoteAddress() const
{
	return String ("");
}

Boolean UNIX_BGPProtocolEndpoint::getRemotePort(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOTE_PORT, getRemotePort());
	return true;
}

Uint16 UNIX_BGPProtocolEndpoint::getRemotePort() const
{
	return Uint16(0);
}

Boolean UNIX_BGPProtocolEndpoint::getRemoteAS(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOTE_A_S, getRemoteAS());
	return true;
}

Uint16 UNIX_BGPProtocolEndpoint::getRemoteAS() const
{
	return Uint16(0);
}

Boolean UNIX_BGPProtocolEndpoint::getConnectRetryInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECT_RETRY_INTERVAL, getConnectRetryInterval());
	return true;
}

Uint32 UNIX_BGPProtocolEndpoint::getConnectRetryInterval() const
{
	return Uint32(0);
}

Boolean UNIX_BGPProtocolEndpoint::getHoldTimeConfigured(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOLD_TIME_CONFIGURED, getHoldTimeConfigured());
	return true;
}

Uint16 UNIX_BGPProtocolEndpoint::getHoldTimeConfigured() const
{
	return Uint16(0);
}

Boolean UNIX_BGPProtocolEndpoint::getKeepAliveConfigured(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_KEEP_ALIVE_CONFIGURED, getKeepAliveConfigured());
	return true;
}

Uint16 UNIX_BGPProtocolEndpoint::getKeepAliveConfigured() const
{
	return Uint16(0);
}

Boolean UNIX_BGPProtocolEndpoint::getMinASOriginationInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_A_S_ORIGINATION_INTERVAL, getMinASOriginationInterval());
	return true;
}

Uint16 UNIX_BGPProtocolEndpoint::getMinASOriginationInterval() const
{
	return Uint16(0);
}

Boolean UNIX_BGPProtocolEndpoint::getMinRouteAdvertisementInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_ROUTE_ADVERTISEMENT_INTERVAL, getMinRouteAdvertisementInterval());
	return true;
}

Uint16 UNIX_BGPProtocolEndpoint::getMinRouteAdvertisementInterval() const
{
	return Uint16(0);
}

Boolean UNIX_BGPProtocolEndpoint::getHoldTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOLD_TIME, getHoldTime());
	return true;
}

Uint16 UNIX_BGPProtocolEndpoint::getHoldTime() const
{
	return Uint16(0);
}

Boolean UNIX_BGPProtocolEndpoint::getKeepAlive(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_KEEP_ALIVE, getKeepAlive());
	return true;
}

Uint16 UNIX_BGPProtocolEndpoint::getKeepAlive() const
{
	return Uint16(0);
}



Boolean UNIX_BGPProtocolEndpoint::initialize()
{
	return false;
}

Boolean UNIX_BGPProtocolEndpoint::load(int &pIndex)
{
	return false;
}

Boolean UNIX_BGPProtocolEndpoint::finalize()
{
	return false;
}

Boolean UNIX_BGPProtocolEndpoint::find(Array<CIMKeyBinding> &kbArray)
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
