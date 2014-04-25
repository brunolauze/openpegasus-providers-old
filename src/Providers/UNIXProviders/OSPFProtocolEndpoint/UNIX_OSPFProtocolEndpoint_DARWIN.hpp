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


UNIX_OSPFProtocolEndpoint::UNIX_OSPFProtocolEndpoint(void)
{
}

UNIX_OSPFProtocolEndpoint::~UNIX_OSPFProtocolEndpoint(void)
{
}


Boolean UNIX_OSPFProtocolEndpoint::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_OSPFProtocolEndpoint::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_OSPFProtocolEndpoint::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_OSPFProtocolEndpoint::getCaption() const
{
	return String ("");
}

Boolean UNIX_OSPFProtocolEndpoint::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_OSPFProtocolEndpoint::getDescription() const
{
	return String ("");
}

Boolean UNIX_OSPFProtocolEndpoint::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_OSPFProtocolEndpoint::getElementName() const
{
	return String("OSPFProtocolEndpoint");
}

Boolean UNIX_OSPFProtocolEndpoint::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_OSPFProtocolEndpoint::getInstallDate() const
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

Boolean UNIX_OSPFProtocolEndpoint::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_OSPFProtocolEndpoint::getName() const
{
	return String ("");
}

Boolean UNIX_OSPFProtocolEndpoint::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_OSPFProtocolEndpoint::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_OSPFProtocolEndpoint::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_OSPFProtocolEndpoint::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OSPFProtocolEndpoint::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_OSPFProtocolEndpoint::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_OSPFProtocolEndpoint::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_OSPFProtocolEndpoint::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_OSPFProtocolEndpoint::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_OSPFProtocolEndpoint::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_OSPFProtocolEndpoint::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_OSPFProtocolEndpoint::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_OSPFProtocolEndpoint::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_OSPFProtocolEndpoint::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_OSPFProtocolEndpoint::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_OSPFProtocolEndpoint::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_OSPFProtocolEndpoint::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_OSPFProtocolEndpoint::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_OSPFProtocolEndpoint::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_OSPFProtocolEndpoint::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_OSPFProtocolEndpoint::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_OSPFProtocolEndpoint::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_OSPFProtocolEndpoint::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_OSPFProtocolEndpoint::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_OSPFProtocolEndpoint::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_OSPFProtocolEndpoint::getTimeOfLastStateChange() const
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

Boolean UNIX_OSPFProtocolEndpoint::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_OSPFProtocolEndpoint::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_OSPFProtocolEndpoint::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_OSPFProtocolEndpoint::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_OSPFProtocolEndpoint::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_OSPFProtocolEndpoint::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_OSPFProtocolEndpoint::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_OSPFProtocolEndpoint::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_OSPFProtocolEndpoint::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_OSPFProtocolEndpoint::getCreationClassName() const
{
	return String("UNIX_OSPFProtocolEndpoint");
}

Boolean UNIX_OSPFProtocolEndpoint::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

String UNIX_OSPFProtocolEndpoint::getNameFormat() const
{
	return String ("");
}

Boolean UNIX_OSPFProtocolEndpoint::getProtocolType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_TYPE, getProtocolType());
	return true;
}

Uint16 UNIX_OSPFProtocolEndpoint::getProtocolType() const
{
	return Uint16(0);
}

Boolean UNIX_OSPFProtocolEndpoint::getProtocolIFType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_I_F_TYPE, getProtocolIFType());
	return true;
}

Uint16 UNIX_OSPFProtocolEndpoint::getProtocolIFType() const
{
	return Uint16(0);
}

Boolean UNIX_OSPFProtocolEndpoint::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_OSPFProtocolEndpoint::getOtherTypeDescription() const
{
	return String ("");
}

Boolean UNIX_OSPFProtocolEndpoint::getTransitDelay(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSIT_DELAY, getTransitDelay());
	return true;
}

Uint16 UNIX_OSPFProtocolEndpoint::getTransitDelay() const
{
	return Uint16(0);
}

Boolean UNIX_OSPFProtocolEndpoint::getRetransmitInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RETRANSMIT_INTERVAL, getRetransmitInterval());
	return true;
}

Uint16 UNIX_OSPFProtocolEndpoint::getRetransmitInterval() const
{
	return Uint16(0);
}

Boolean UNIX_OSPFProtocolEndpoint::getAuthType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTH_TYPE, getAuthType());
	return true;
}

Uint16 UNIX_OSPFProtocolEndpoint::getAuthType() const
{
	return Uint16(0);
}

Boolean UNIX_OSPFProtocolEndpoint::getOtherAuthType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_AUTH_TYPE, getOtherAuthType());
	return true;
}

String UNIX_OSPFProtocolEndpoint::getOtherAuthType() const
{
	return String ("");
}

Boolean UNIX_OSPFProtocolEndpoint::getAuthKey(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTH_KEY, getAuthKey());
	return true;
}

String UNIX_OSPFProtocolEndpoint::getAuthKey() const
{
	return String ("");
}

Boolean UNIX_OSPFProtocolEndpoint::getPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIORITY, getPriority());
	return true;
}

Uint8 UNIX_OSPFProtocolEndpoint::getPriority() const
{
	return Uint8(0);
}

Boolean UNIX_OSPFProtocolEndpoint::getPollInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLL_INTERVAL, getPollInterval());
	return true;
}

Uint16 UNIX_OSPFProtocolEndpoint::getPollInterval() const
{
	return Uint16(0);
}

Boolean UNIX_OSPFProtocolEndpoint::getCost(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COST, getCost());
	return true;
}

Uint16 UNIX_OSPFProtocolEndpoint::getCost() const
{
	return Uint16(0);
}

Boolean UNIX_OSPFProtocolEndpoint::getIfDemand(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IF_DEMAND, getIfDemand());
	return true;
}

Boolean UNIX_OSPFProtocolEndpoint::getIfDemand() const
{
	return Boolean(false);
}



Boolean UNIX_OSPFProtocolEndpoint::initialize()
{
	return false;
}

Boolean UNIX_OSPFProtocolEndpoint::load(int &pIndex)
{
	return false;
}

Boolean UNIX_OSPFProtocolEndpoint::finalize()
{
	return false;
}

Boolean UNIX_OSPFProtocolEndpoint::find(Array<CIMKeyBinding> &kbArray)
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
