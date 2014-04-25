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


UNIX_WiFiEndpoint::UNIX_WiFiEndpoint(void)
{
}

UNIX_WiFiEndpoint::~UNIX_WiFiEndpoint(void)
{
}


Boolean UNIX_WiFiEndpoint::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_WiFiEndpoint::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_WiFiEndpoint::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_WiFiEndpoint::getCaption() const
{
	return String ("");
}

Boolean UNIX_WiFiEndpoint::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_WiFiEndpoint::getDescription() const
{
	return String ("");
}

Boolean UNIX_WiFiEndpoint::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_WiFiEndpoint::getElementName() const
{
	return String("WiFiEndpoint");
}

Boolean UNIX_WiFiEndpoint::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_WiFiEndpoint::getInstallDate() const
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

Boolean UNIX_WiFiEndpoint::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_WiFiEndpoint::getName() const
{
	return String ("");
}

Boolean UNIX_WiFiEndpoint::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_WiFiEndpoint::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_WiFiEndpoint::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_WiFiEndpoint::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_WiFiEndpoint::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_WiFiEndpoint::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_WiFiEndpoint::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_WiFiEndpoint::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_WiFiEndpoint::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_WiFiEndpoint::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_WiFiEndpoint::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_WiFiEndpoint::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_WiFiEndpoint::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_WiFiEndpoint::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_WiFiEndpoint::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_WiFiEndpoint::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_WiFiEndpoint::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_WiFiEndpoint::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_WiFiEndpoint::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_WiFiEndpoint::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_WiFiEndpoint::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_WiFiEndpoint::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_WiFiEndpoint::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_WiFiEndpoint::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_WiFiEndpoint::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_WiFiEndpoint::getTimeOfLastStateChange() const
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

Boolean UNIX_WiFiEndpoint::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_WiFiEndpoint::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_WiFiEndpoint::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_WiFiEndpoint::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_WiFiEndpoint::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_WiFiEndpoint::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_WiFiEndpoint::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_WiFiEndpoint::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_WiFiEndpoint::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_WiFiEndpoint::getCreationClassName() const
{
	return String("UNIX_WiFiEndpoint");
}

Boolean UNIX_WiFiEndpoint::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

String UNIX_WiFiEndpoint::getNameFormat() const
{
	return String ("");
}

Boolean UNIX_WiFiEndpoint::getProtocolType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_TYPE, getProtocolType());
	return true;
}

Uint16 UNIX_WiFiEndpoint::getProtocolType() const
{
	return Uint16(0);
}

Boolean UNIX_WiFiEndpoint::getProtocolIFType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_I_F_TYPE, getProtocolIFType());
	return true;
}

Uint16 UNIX_WiFiEndpoint::getProtocolIFType() const
{
	return Uint16(0);
}

Boolean UNIX_WiFiEndpoint::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_WiFiEndpoint::getOtherTypeDescription() const
{
	return String ("");
}

Boolean UNIX_WiFiEndpoint::getLANID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_L_A_N_ID, getLANID());
	return true;
}

String UNIX_WiFiEndpoint::getLANID() const
{
	return String ("");
}

Boolean UNIX_WiFiEndpoint::getLANType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_L_A_N_TYPE, getLANType());
	return true;
}

Uint16 UNIX_WiFiEndpoint::getLANType() const
{
	return Uint16(0);
}

Boolean UNIX_WiFiEndpoint::getOtherLANType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_L_A_N_TYPE, getOtherLANType());
	return true;
}

String UNIX_WiFiEndpoint::getOtherLANType() const
{
	return String ("");
}

Boolean UNIX_WiFiEndpoint::getMACAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_M_A_C_ADDRESS, getMACAddress());
	return true;
}

String UNIX_WiFiEndpoint::getMACAddress() const
{
	return String ("");
}

Boolean UNIX_WiFiEndpoint::getAliasAddresses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALIAS_ADDRESSES, getAliasAddresses());
	return true;
}

Array<String> UNIX_WiFiEndpoint::getAliasAddresses() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_WiFiEndpoint::getGroupAddresses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_ADDRESSES, getGroupAddresses());
	return true;
}

Array<String> UNIX_WiFiEndpoint::getGroupAddresses() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_WiFiEndpoint::getMaxDataSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_DATA_SIZE, getMaxDataSize());
	return true;
}

Uint32 UNIX_WiFiEndpoint::getMaxDataSize() const
{
	return Uint32(0);
}

Boolean UNIX_WiFiEndpoint::getEncryptionMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENCRYPTION_METHOD, getEncryptionMethod());
	return true;
}

Uint16 UNIX_WiFiEndpoint::getEncryptionMethod() const
{
	return Uint16(0);
}

Boolean UNIX_WiFiEndpoint::getOtherEncryptionMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENCRYPTION_METHOD, getOtherEncryptionMethod());
	return true;
}

String UNIX_WiFiEndpoint::getOtherEncryptionMethod() const
{
	return String ("");
}

Boolean UNIX_WiFiEndpoint::getAuthenticationMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTHENTICATION_METHOD, getAuthenticationMethod());
	return true;
}

Uint16 UNIX_WiFiEndpoint::getAuthenticationMethod() const
{
	return Uint16(0);
}

Boolean UNIX_WiFiEndpoint::getOtherAuthenticationMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_AUTHENTICATION_METHOD, getOtherAuthenticationMethod());
	return true;
}

String UNIX_WiFiEndpoint::getOtherAuthenticationMethod() const
{
	return String ("");
}

Boolean UNIX_WiFiEndpoint::getIEEE8021xAuthenticationProtocol(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_I_E_E_E_8_0_2_1X_AUTHENTICATION_PROTOCOL, getIEEE8021xAuthenticationProtocol());
	return true;
}

Uint16 UNIX_WiFiEndpoint::getIEEE8021xAuthenticationProtocol() const
{
	return Uint16(0);
}

Boolean UNIX_WiFiEndpoint::getAccessPointAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS_POINT_ADDRESS, getAccessPointAddress());
	return true;
}

String UNIX_WiFiEndpoint::getAccessPointAddress() const
{
	return String ("");
}

Boolean UNIX_WiFiEndpoint::getBSSType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_B_S_S_TYPE, getBSSType());
	return true;
}

Uint16 UNIX_WiFiEndpoint::getBSSType() const
{
	return Uint16(0);
}

Boolean UNIX_WiFiEndpoint::getAssociated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ASSOCIATED, getAssociated());
	return true;
}

Boolean UNIX_WiFiEndpoint::getAssociated() const
{
	return Boolean(false);
}



Boolean UNIX_WiFiEndpoint::initialize()
{
	return false;
}

Boolean UNIX_WiFiEndpoint::load(int &pIndex)
{
	return false;
}

Boolean UNIX_WiFiEndpoint::finalize()
{
	return false;
}

Boolean UNIX_WiFiEndpoint::find(Array<CIMKeyBinding> &kbArray)
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
