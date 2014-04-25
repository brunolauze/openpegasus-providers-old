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


UNIX_RemotePort::UNIX_RemotePort(void)
{
}

UNIX_RemotePort::~UNIX_RemotePort(void)
{
}


Boolean UNIX_RemotePort::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_RemotePort::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_RemotePort::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_RemotePort::getCaption() const
{
	return String ("");
}

Boolean UNIX_RemotePort::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_RemotePort::getDescription() const
{
	return String ("");
}

Boolean UNIX_RemotePort::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_RemotePort::getElementName() const
{
	return String("RemotePort");
}

Boolean UNIX_RemotePort::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_RemotePort::getInstallDate() const
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

Boolean UNIX_RemotePort::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_RemotePort::getName() const
{
	return String ("");
}

Boolean UNIX_RemotePort::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_RemotePort::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_RemotePort::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_RemotePort::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_RemotePort::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_RemotePort::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_RemotePort::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_RemotePort::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_RemotePort::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_RemotePort::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_RemotePort::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_RemotePort::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_RemotePort::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_RemotePort::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_RemotePort::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_RemotePort::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_RemotePort::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_RemotePort::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_RemotePort::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_RemotePort::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_RemotePort::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_RemotePort::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_RemotePort::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_RemotePort::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_RemotePort::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_RemotePort::getTimeOfLastStateChange() const
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

Boolean UNIX_RemotePort::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_RemotePort::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_RemotePort::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_RemotePort::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_RemotePort::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_RemotePort::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_RemotePort::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_RemotePort::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_RemotePort::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_RemotePort::getCreationClassName() const
{
	return String("UNIX_RemotePort");
}

Boolean UNIX_RemotePort::getAccessInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS_INFO, getAccessInfo());
	return true;
}

String UNIX_RemotePort::getAccessInfo() const
{
	return String ("");
}

Boolean UNIX_RemotePort::getInfoFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INFO_FORMAT, getInfoFormat());
	return true;
}

Uint16 UNIX_RemotePort::getInfoFormat() const
{
	return Uint16(0);
}

Boolean UNIX_RemotePort::getOtherInfoFormatDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_INFO_FORMAT_DESCRIPTION, getOtherInfoFormatDescription());
	return true;
}

String UNIX_RemotePort::getOtherInfoFormatDescription() const
{
	return String ("");
}

Boolean UNIX_RemotePort::getAccessContext(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS_CONTEXT, getAccessContext());
	return true;
}

Uint16 UNIX_RemotePort::getAccessContext() const
{
	return Uint16(0);
}

Boolean UNIX_RemotePort::getOtherAccessContext(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ACCESS_CONTEXT, getOtherAccessContext());
	return true;
}

String UNIX_RemotePort::getOtherAccessContext() const
{
	return String ("");
}

Boolean UNIX_RemotePort::getPortInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_INFO, getPortInfo());
	return true;
}

String UNIX_RemotePort::getPortInfo() const
{
	return String ("");
}

Boolean UNIX_RemotePort::getPortProtocol(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_PROTOCOL, getPortProtocol());
	return true;
}

Uint16 UNIX_RemotePort::getPortProtocol() const
{
	return Uint16(0);
}

Boolean UNIX_RemotePort::getOtherProtocolDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PROTOCOL_DESCRIPTION, getOtherProtocolDescription());
	return true;
}

String UNIX_RemotePort::getOtherProtocolDescription() const
{
	return String ("");
}



Boolean UNIX_RemotePort::initialize()
{
	return false;
}

Boolean UNIX_RemotePort::load(int &pIndex)
{
	return false;
}

Boolean UNIX_RemotePort::finalize()
{
	return false;
}

Boolean UNIX_RemotePort::find(Array<CIMKeyBinding> &kbArray)
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
