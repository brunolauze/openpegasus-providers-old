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


UNIX_OSPFVirtualInterface::UNIX_OSPFVirtualInterface(void)
{
}

UNIX_OSPFVirtualInterface::~UNIX_OSPFVirtualInterface(void)
{
}


Boolean UNIX_OSPFVirtualInterface::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_OSPFVirtualInterface::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_OSPFVirtualInterface::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_OSPFVirtualInterface::getCaption() const
{
	return String ("");
}

Boolean UNIX_OSPFVirtualInterface::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_OSPFVirtualInterface::getDescription() const
{
	return String ("");
}

Boolean UNIX_OSPFVirtualInterface::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_OSPFVirtualInterface::getElementName() const
{
	return String("OSPFVirtualInterface");
}

Boolean UNIX_OSPFVirtualInterface::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_OSPFVirtualInterface::getInstallDate() const
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

Boolean UNIX_OSPFVirtualInterface::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_OSPFVirtualInterface::getName() const
{
	return String ("");
}

Boolean UNIX_OSPFVirtualInterface::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_OSPFVirtualInterface::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_OSPFVirtualInterface::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_OSPFVirtualInterface::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OSPFVirtualInterface::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_OSPFVirtualInterface::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_OSPFVirtualInterface::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_OSPFVirtualInterface::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_OSPFVirtualInterface::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_OSPFVirtualInterface::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_OSPFVirtualInterface::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_OSPFVirtualInterface::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_OSPFVirtualInterface::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_OSPFVirtualInterface::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_OSPFVirtualInterface::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_OSPFVirtualInterface::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_OSPFVirtualInterface::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_OSPFVirtualInterface::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_OSPFVirtualInterface::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_OSPFVirtualInterface::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_OSPFVirtualInterface::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_OSPFVirtualInterface::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_OSPFVirtualInterface::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_OSPFVirtualInterface::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_OSPFVirtualInterface::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_OSPFVirtualInterface::getTimeOfLastStateChange() const
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

Boolean UNIX_OSPFVirtualInterface::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_OSPFVirtualInterface::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_OSPFVirtualInterface::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_OSPFVirtualInterface::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_OSPFVirtualInterface::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_OSPFVirtualInterface::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_OSPFVirtualInterface::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_OSPFVirtualInterface::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_OSPFVirtualInterface::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_OSPFVirtualInterface::getCreationClassName() const
{
	return String("UNIX_OSPFVirtualInterface");
}

Boolean UNIX_OSPFVirtualInterface::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

String UNIX_OSPFVirtualInterface::getNameFormat() const
{
	return String ("");
}

Boolean UNIX_OSPFVirtualInterface::getProtocolType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_TYPE, getProtocolType());
	return true;
}

Uint16 UNIX_OSPFVirtualInterface::getProtocolType() const
{
	return Uint16(0);
}

Boolean UNIX_OSPFVirtualInterface::getProtocolIFType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_I_F_TYPE, getProtocolIFType());
	return true;
}

Uint16 UNIX_OSPFVirtualInterface::getProtocolIFType() const
{
	return Uint16(0);
}

Boolean UNIX_OSPFVirtualInterface::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_OSPFVirtualInterface::getOtherTypeDescription() const
{
	return String ("");
}

Boolean UNIX_OSPFVirtualInterface::getTransitDelay(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSIT_DELAY, getTransitDelay());
	return true;
}

Uint16 UNIX_OSPFVirtualInterface::getTransitDelay() const
{
	return Uint16(0);
}

Boolean UNIX_OSPFVirtualInterface::getRetransmitInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RETRANSMIT_INTERVAL, getRetransmitInterval());
	return true;
}

Uint16 UNIX_OSPFVirtualInterface::getRetransmitInterval() const
{
	return Uint16(0);
}

Boolean UNIX_OSPFVirtualInterface::getAuthType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTH_TYPE, getAuthType());
	return true;
}

Uint16 UNIX_OSPFVirtualInterface::getAuthType() const
{
	return Uint16(0);
}

Boolean UNIX_OSPFVirtualInterface::getOtherAuthType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_AUTH_TYPE, getOtherAuthType());
	return true;
}

String UNIX_OSPFVirtualInterface::getOtherAuthType() const
{
	return String ("");
}

Boolean UNIX_OSPFVirtualInterface::getAuthKey(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTH_KEY, getAuthKey());
	return true;
}

String UNIX_OSPFVirtualInterface::getAuthKey() const
{
	return String ("");
}



Boolean UNIX_OSPFVirtualInterface::initialize()
{
	return false;
}

Boolean UNIX_OSPFVirtualInterface::load(int &pIndex)
{
	return false;
}

Boolean UNIX_OSPFVirtualInterface::finalize()
{
	return false;
}

Boolean UNIX_OSPFVirtualInterface::find(Array<CIMKeyBinding> &kbArray)
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
