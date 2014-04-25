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


UNIX_IPProtocolEndpoint::UNIX_IPProtocolEndpoint(void)
{
}

UNIX_IPProtocolEndpoint::~UNIX_IPProtocolEndpoint(void)
{
}


Boolean UNIX_IPProtocolEndpoint::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_IPProtocolEndpoint::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_IPProtocolEndpoint::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_IPProtocolEndpoint::getCaption() const
{
	return String ("");
}

Boolean UNIX_IPProtocolEndpoint::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_IPProtocolEndpoint::getDescription() const
{
	return String ("");
}

Boolean UNIX_IPProtocolEndpoint::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_IPProtocolEndpoint::getElementName() const
{
	return String("IPProtocolEndpoint");
}

Boolean UNIX_IPProtocolEndpoint::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_IPProtocolEndpoint::getInstallDate() const
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

Boolean UNIX_IPProtocolEndpoint::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_IPProtocolEndpoint::getName() const
{
	return String ("");
}

Boolean UNIX_IPProtocolEndpoint::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_IPProtocolEndpoint::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_IPProtocolEndpoint::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_IPProtocolEndpoint::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_IPProtocolEndpoint::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_IPProtocolEndpoint::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_IPProtocolEndpoint::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_IPProtocolEndpoint::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_IPProtocolEndpoint::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_IPProtocolEndpoint::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_IPProtocolEndpoint::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_IPProtocolEndpoint::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_IPProtocolEndpoint::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_IPProtocolEndpoint::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_IPProtocolEndpoint::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_IPProtocolEndpoint::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_IPProtocolEndpoint::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_IPProtocolEndpoint::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_IPProtocolEndpoint::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_IPProtocolEndpoint::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_IPProtocolEndpoint::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_IPProtocolEndpoint::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_IPProtocolEndpoint::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_IPProtocolEndpoint::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_IPProtocolEndpoint::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_IPProtocolEndpoint::getTimeOfLastStateChange() const
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

Boolean UNIX_IPProtocolEndpoint::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_IPProtocolEndpoint::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_IPProtocolEndpoint::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_IPProtocolEndpoint::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_IPProtocolEndpoint::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_IPProtocolEndpoint::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_IPProtocolEndpoint::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_IPProtocolEndpoint::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_IPProtocolEndpoint::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_IPProtocolEndpoint::getCreationClassName() const
{
	return String("UNIX_IPProtocolEndpoint");
}

Boolean UNIX_IPProtocolEndpoint::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

String UNIX_IPProtocolEndpoint::getNameFormat() const
{
	return String ("");
}

Boolean UNIX_IPProtocolEndpoint::getProtocolType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_TYPE, getProtocolType());
	return true;
}

Uint16 UNIX_IPProtocolEndpoint::getProtocolType() const
{
	return Uint16(0);
}

Boolean UNIX_IPProtocolEndpoint::getProtocolIFType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_I_F_TYPE, getProtocolIFType());
	return true;
}

Uint16 UNIX_IPProtocolEndpoint::getProtocolIFType() const
{
	return Uint16(0);
}

Boolean UNIX_IPProtocolEndpoint::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_IPProtocolEndpoint::getOtherTypeDescription() const
{
	return String ("");
}

Boolean UNIX_IPProtocolEndpoint::getIPv4Address(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_I_PV_4_ADDRESS, getIPv4Address());
	return true;
}

String UNIX_IPProtocolEndpoint::getIPv4Address() const
{
	return String ("");
}

Boolean UNIX_IPProtocolEndpoint::getIPv6Address(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_I_PV_6_ADDRESS, getIPv6Address());
	return true;
}

String UNIX_IPProtocolEndpoint::getIPv6Address() const
{
	return String ("");
}

Boolean UNIX_IPProtocolEndpoint::getAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS, getAddress());
	return true;
}

String UNIX_IPProtocolEndpoint::getAddress() const
{
	return String ("");
}

Boolean UNIX_IPProtocolEndpoint::getSubnetMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBNET_MASK, getSubnetMask());
	return true;
}

String UNIX_IPProtocolEndpoint::getSubnetMask() const
{
	return String ("");
}

Boolean UNIX_IPProtocolEndpoint::getPrefixLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PREFIX_LENGTH, getPrefixLength());
	return true;
}

Uint8 UNIX_IPProtocolEndpoint::getPrefixLength() const
{
	return Uint8(0);
}

Boolean UNIX_IPProtocolEndpoint::getAddressType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_TYPE, getAddressType());
	return true;
}

Uint16 UNIX_IPProtocolEndpoint::getAddressType() const
{
	return Uint16(0);
}

Boolean UNIX_IPProtocolEndpoint::getIPVersionSupport(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_I_P_VERSION_SUPPORT, getIPVersionSupport());
	return true;
}

Uint16 UNIX_IPProtocolEndpoint::getIPVersionSupport() const
{
	return Uint16(0);
}

Boolean UNIX_IPProtocolEndpoint::getAddressOrigin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_ORIGIN, getAddressOrigin());
	return true;
}

Uint16 UNIX_IPProtocolEndpoint::getAddressOrigin() const
{
	return Uint16(0);
}

Boolean UNIX_IPProtocolEndpoint::getIPv6AddressType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_I_PV_6_ADDRESS_TYPE, getIPv6AddressType());
	return true;
}

Uint16 UNIX_IPProtocolEndpoint::getIPv6AddressType() const
{
	return Uint16(0);
}

Boolean UNIX_IPProtocolEndpoint::getIPv6SubnetPrefixLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_I_PV_6_SUBNET_PREFIX_LENGTH, getIPv6SubnetPrefixLength());
	return true;
}

Uint16 UNIX_IPProtocolEndpoint::getIPv6SubnetPrefixLength() const
{
	return Uint16(0);
}



Boolean UNIX_IPProtocolEndpoint::initialize()
{
	return false;
}

Boolean UNIX_IPProtocolEndpoint::load(int &pIndex)
{
	return false;
}

Boolean UNIX_IPProtocolEndpoint::finalize()
{
	return false;
}

Boolean UNIX_IPProtocolEndpoint::find(Array<CIMKeyBinding> &kbArray)
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
