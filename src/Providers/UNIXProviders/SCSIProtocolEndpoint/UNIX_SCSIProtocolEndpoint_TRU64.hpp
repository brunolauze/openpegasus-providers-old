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


UNIX_SCSIProtocolEndpoint::UNIX_SCSIProtocolEndpoint(void)
{
}

UNIX_SCSIProtocolEndpoint::~UNIX_SCSIProtocolEndpoint(void)
{
}


Boolean UNIX_SCSIProtocolEndpoint::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SCSIProtocolEndpoint::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_SCSIProtocolEndpoint::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SCSIProtocolEndpoint::getCaption() const
{
	return String ("");
}

Boolean UNIX_SCSIProtocolEndpoint::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SCSIProtocolEndpoint::getDescription() const
{
	return String ("");
}

Boolean UNIX_SCSIProtocolEndpoint::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SCSIProtocolEndpoint::getElementName() const
{
	return String("SCSIProtocolEndpoint");
}

Boolean UNIX_SCSIProtocolEndpoint::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_SCSIProtocolEndpoint::getInstallDate() const
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

Boolean UNIX_SCSIProtocolEndpoint::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_SCSIProtocolEndpoint::getName() const
{
	return String ("");
}

Boolean UNIX_SCSIProtocolEndpoint::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_SCSIProtocolEndpoint::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_SCSIProtocolEndpoint::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_SCSIProtocolEndpoint::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_SCSIProtocolEndpoint::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_SCSIProtocolEndpoint::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_SCSIProtocolEndpoint::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_SCSIProtocolEndpoint::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_SCSIProtocolEndpoint::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_SCSIProtocolEndpoint::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_SCSIProtocolEndpoint::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_SCSIProtocolEndpoint::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_SCSIProtocolEndpoint::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_SCSIProtocolEndpoint::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_SCSIProtocolEndpoint::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_SCSIProtocolEndpoint::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_SCSIProtocolEndpoint::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_SCSIProtocolEndpoint::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_SCSIProtocolEndpoint::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_SCSIProtocolEndpoint::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_SCSIProtocolEndpoint::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_SCSIProtocolEndpoint::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_SCSIProtocolEndpoint::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_SCSIProtocolEndpoint::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_SCSIProtocolEndpoint::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_SCSIProtocolEndpoint::getTimeOfLastStateChange() const
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

Boolean UNIX_SCSIProtocolEndpoint::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_SCSIProtocolEndpoint::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_SCSIProtocolEndpoint::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_SCSIProtocolEndpoint::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_SCSIProtocolEndpoint::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_SCSIProtocolEndpoint::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_SCSIProtocolEndpoint::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_SCSIProtocolEndpoint::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_SCSIProtocolEndpoint::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_SCSIProtocolEndpoint::getCreationClassName() const
{
	return String("UNIX_SCSIProtocolEndpoint");
}

Boolean UNIX_SCSIProtocolEndpoint::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

String UNIX_SCSIProtocolEndpoint::getNameFormat() const
{
	return String ("");
}

Boolean UNIX_SCSIProtocolEndpoint::getProtocolType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_TYPE, getProtocolType());
	return true;
}

Uint16 UNIX_SCSIProtocolEndpoint::getProtocolType() const
{
	return Uint16(0);
}

Boolean UNIX_SCSIProtocolEndpoint::getProtocolIFType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_I_F_TYPE, getProtocolIFType());
	return true;
}

Uint16 UNIX_SCSIProtocolEndpoint::getProtocolIFType() const
{
	return Uint16(0);
}

Boolean UNIX_SCSIProtocolEndpoint::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_SCSIProtocolEndpoint::getOtherTypeDescription() const
{
	return String ("");
}

Boolean UNIX_SCSIProtocolEndpoint::getConnectionType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTION_TYPE, getConnectionType());
	return true;
}

Uint16 UNIX_SCSIProtocolEndpoint::getConnectionType() const
{
	return Uint16(0);
}

Boolean UNIX_SCSIProtocolEndpoint::getRole(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROLE, getRole());
	return true;
}

Uint16 UNIX_SCSIProtocolEndpoint::getRole() const
{
	return Uint16(0);
}

Boolean UNIX_SCSIProtocolEndpoint::getTargetRelativePortNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TARGET_RELATIVE_PORT_NUMBER, getTargetRelativePortNumber());
	return true;
}

Uint32 UNIX_SCSIProtocolEndpoint::getTargetRelativePortNumber() const
{
	return Uint32(0);
}

Boolean UNIX_SCSIProtocolEndpoint::getOtherConnectionType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_CONNECTION_TYPE, getOtherConnectionType());
	return true;
}

String UNIX_SCSIProtocolEndpoint::getOtherConnectionType() const
{
	return String ("");
}



Boolean UNIX_SCSIProtocolEndpoint::initialize()
{
	return false;
}

Boolean UNIX_SCSIProtocolEndpoint::load(int &pIndex)
{
	return false;
}

Boolean UNIX_SCSIProtocolEndpoint::finalize()
{
	return false;
}

Boolean UNIX_SCSIProtocolEndpoint::find(Array<CIMKeyBinding> &kbArray)
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
