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


UNIX_DHCPProtocolEndpoint::UNIX_DHCPProtocolEndpoint(void)
{
}

UNIX_DHCPProtocolEndpoint::~UNIX_DHCPProtocolEndpoint(void)
{
}


Boolean UNIX_DHCPProtocolEndpoint::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DHCPProtocolEndpoint::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_DHCPProtocolEndpoint::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DHCPProtocolEndpoint::getCaption() const
{
	return String ("");
}

Boolean UNIX_DHCPProtocolEndpoint::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DHCPProtocolEndpoint::getDescription() const
{
	return String ("");
}

Boolean UNIX_DHCPProtocolEndpoint::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DHCPProtocolEndpoint::getElementName() const
{
	return String("DHCPProtocolEndpoint");
}

Boolean UNIX_DHCPProtocolEndpoint::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_DHCPProtocolEndpoint::getInstallDate() const
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

Boolean UNIX_DHCPProtocolEndpoint::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_DHCPProtocolEndpoint::getName() const
{
	return String ("");
}

Boolean UNIX_DHCPProtocolEndpoint::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_DHCPProtocolEndpoint::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DHCPProtocolEndpoint::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_DHCPProtocolEndpoint::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_DHCPProtocolEndpoint::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_DHCPProtocolEndpoint::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_DHCPProtocolEndpoint::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_DHCPProtocolEndpoint::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_DHCPProtocolEndpoint::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_DHCPProtocolEndpoint::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_DHCPProtocolEndpoint::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_DHCPProtocolEndpoint::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_DHCPProtocolEndpoint::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_DHCPProtocolEndpoint::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_DHCPProtocolEndpoint::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_DHCPProtocolEndpoint::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_DHCPProtocolEndpoint::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_DHCPProtocolEndpoint::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_DHCPProtocolEndpoint::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_DHCPProtocolEndpoint::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_DHCPProtocolEndpoint::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_DHCPProtocolEndpoint::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_DHCPProtocolEndpoint::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_DHCPProtocolEndpoint::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_DHCPProtocolEndpoint::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_DHCPProtocolEndpoint::getTimeOfLastStateChange() const
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

Boolean UNIX_DHCPProtocolEndpoint::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_DHCPProtocolEndpoint::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DHCPProtocolEndpoint::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_DHCPProtocolEndpoint::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_DHCPProtocolEndpoint::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_DHCPProtocolEndpoint::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_DHCPProtocolEndpoint::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_DHCPProtocolEndpoint::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_DHCPProtocolEndpoint::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_DHCPProtocolEndpoint::getCreationClassName() const
{
	return String("UNIX_DHCPProtocolEndpoint");
}

Boolean UNIX_DHCPProtocolEndpoint::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

String UNIX_DHCPProtocolEndpoint::getNameFormat() const
{
	return String ("");
}

Boolean UNIX_DHCPProtocolEndpoint::getProtocolType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_TYPE, getProtocolType());
	return true;
}

Uint16 UNIX_DHCPProtocolEndpoint::getProtocolType() const
{
	return Uint16(0);
}

Boolean UNIX_DHCPProtocolEndpoint::getProtocolIFType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_I_F_TYPE, getProtocolIFType());
	return true;
}

Uint16 UNIX_DHCPProtocolEndpoint::getProtocolIFType() const
{
	return Uint16(0);
}

Boolean UNIX_DHCPProtocolEndpoint::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_DHCPProtocolEndpoint::getOtherTypeDescription() const
{
	return String ("");
}

Boolean UNIX_DHCPProtocolEndpoint::getClientState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLIENT_STATE, getClientState());
	return true;
}

Uint16 UNIX_DHCPProtocolEndpoint::getClientState() const
{
	return Uint16(0);
}

Boolean UNIX_DHCPProtocolEndpoint::getRenewalTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RENEWAL_TIME, getRenewalTime());
	return true;
}

Uint32 UNIX_DHCPProtocolEndpoint::getRenewalTime() const
{
	return Uint32(0);
}

Boolean UNIX_DHCPProtocolEndpoint::getRebindingTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REBINDING_TIME, getRebindingTime());
	return true;
}

Uint32 UNIX_DHCPProtocolEndpoint::getRebindingTime() const
{
	return Uint32(0);
}

Boolean UNIX_DHCPProtocolEndpoint::getLeaseTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LEASE_TIME, getLeaseTime());
	return true;
}

Uint32 UNIX_DHCPProtocolEndpoint::getLeaseTime() const
{
	return Uint32(0);
}

Boolean UNIX_DHCPProtocolEndpoint::getLeaseObtained(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LEASE_OBTAINED, getLeaseObtained());
	return true;
}

CIMDateTime UNIX_DHCPProtocolEndpoint::getLeaseObtained() const
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

Boolean UNIX_DHCPProtocolEndpoint::getLeaseExpires(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LEASE_EXPIRES, getLeaseExpires());
	return true;
}

CIMDateTime UNIX_DHCPProtocolEndpoint::getLeaseExpires() const
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

Boolean UNIX_DHCPProtocolEndpoint::getOptionsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPTIONS_RECEIVED, getOptionsReceived());
	return true;
}

Array<Uint16> UNIX_DHCPProtocolEndpoint::getOptionsReceived() const
{
	Array<Uint16> as;
	

	return as;

}



Boolean UNIX_DHCPProtocolEndpoint::initialize()
{
	return false;
}

Boolean UNIX_DHCPProtocolEndpoint::load(int &pIndex)
{
	return false;
}

Boolean UNIX_DHCPProtocolEndpoint::finalize()
{
	return false;
}

Boolean UNIX_DHCPProtocolEndpoint::find(Array<CIMKeyBinding> &kbArray)
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
