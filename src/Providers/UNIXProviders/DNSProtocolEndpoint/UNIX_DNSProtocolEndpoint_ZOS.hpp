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


UNIX_DNSProtocolEndpoint::UNIX_DNSProtocolEndpoint(void)
{
}

UNIX_DNSProtocolEndpoint::~UNIX_DNSProtocolEndpoint(void)
{
}


Boolean UNIX_DNSProtocolEndpoint::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DNSProtocolEndpoint::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_DNSProtocolEndpoint::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DNSProtocolEndpoint::getCaption() const
{
	return String ("");
}

Boolean UNIX_DNSProtocolEndpoint::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DNSProtocolEndpoint::getDescription() const
{
	return String ("");
}

Boolean UNIX_DNSProtocolEndpoint::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DNSProtocolEndpoint::getElementName() const
{
	return String("DNSProtocolEndpoint");
}

Boolean UNIX_DNSProtocolEndpoint::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_DNSProtocolEndpoint::getInstallDate() const
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

Boolean UNIX_DNSProtocolEndpoint::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_DNSProtocolEndpoint::getName() const
{
	return String ("");
}

Boolean UNIX_DNSProtocolEndpoint::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_DNSProtocolEndpoint::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DNSProtocolEndpoint::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_DNSProtocolEndpoint::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_DNSProtocolEndpoint::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_DNSProtocolEndpoint::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_DNSProtocolEndpoint::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_DNSProtocolEndpoint::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_DNSProtocolEndpoint::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_DNSProtocolEndpoint::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_DNSProtocolEndpoint::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_DNSProtocolEndpoint::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_DNSProtocolEndpoint::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_DNSProtocolEndpoint::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_DNSProtocolEndpoint::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_DNSProtocolEndpoint::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_DNSProtocolEndpoint::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_DNSProtocolEndpoint::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_DNSProtocolEndpoint::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_DNSProtocolEndpoint::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_DNSProtocolEndpoint::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_DNSProtocolEndpoint::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_DNSProtocolEndpoint::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_DNSProtocolEndpoint::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_DNSProtocolEndpoint::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_DNSProtocolEndpoint::getTimeOfLastStateChange() const
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

Boolean UNIX_DNSProtocolEndpoint::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_DNSProtocolEndpoint::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DNSProtocolEndpoint::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_DNSProtocolEndpoint::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_DNSProtocolEndpoint::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_DNSProtocolEndpoint::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_DNSProtocolEndpoint::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_DNSProtocolEndpoint::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_DNSProtocolEndpoint::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_DNSProtocolEndpoint::getCreationClassName() const
{
	return String("UNIX_DNSProtocolEndpoint");
}

Boolean UNIX_DNSProtocolEndpoint::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

String UNIX_DNSProtocolEndpoint::getNameFormat() const
{
	return String ("");
}

Boolean UNIX_DNSProtocolEndpoint::getProtocolType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_TYPE, getProtocolType());
	return true;
}

Uint16 UNIX_DNSProtocolEndpoint::getProtocolType() const
{
	return Uint16(0);
}

Boolean UNIX_DNSProtocolEndpoint::getProtocolIFType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_I_F_TYPE, getProtocolIFType());
	return true;
}

Uint16 UNIX_DNSProtocolEndpoint::getProtocolIFType() const
{
	return Uint16(0);
}

Boolean UNIX_DNSProtocolEndpoint::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_DNSProtocolEndpoint::getOtherTypeDescription() const
{
	return String ("");
}

Boolean UNIX_DNSProtocolEndpoint::getHostname(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOSTNAME, getHostname());
	return true;
}

String UNIX_DNSProtocolEndpoint::getHostname() const
{
	return String ("");
}

Boolean UNIX_DNSProtocolEndpoint::getDHCPOptionsToUse(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_D_H_C_P_OPTIONS_TO_USE, getDHCPOptionsToUse());
	return true;
}

Array<Uint16> UNIX_DNSProtocolEndpoint::getDHCPOptionsToUse() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DNSProtocolEndpoint::getAppendParentSuffixes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_APPEND_PARENT_SUFFIXES, getAppendParentSuffixes());
	return true;
}

Boolean UNIX_DNSProtocolEndpoint::getAppendParentSuffixes() const
{
	return Boolean(false);
}

Boolean UNIX_DNSProtocolEndpoint::getAppendPrimarySuffixes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_APPEND_PRIMARY_SUFFIXES, getAppendPrimarySuffixes());
	return true;
}

Boolean UNIX_DNSProtocolEndpoint::getAppendPrimarySuffixes() const
{
	return Boolean(false);
}

Boolean UNIX_DNSProtocolEndpoint::getDNSSuffixesToAppend(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_D_N_S_SUFFIXES_TO_APPEND, getDNSSuffixesToAppend());
	return true;
}

Array<String> UNIX_DNSProtocolEndpoint::getDNSSuffixesToAppend() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_DNSProtocolEndpoint::getDomainName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DOMAIN_NAME, getDomainName());
	return true;
}

String UNIX_DNSProtocolEndpoint::getDomainName() const
{
	return String ("");
}

Boolean UNIX_DNSProtocolEndpoint::getRegisterThisConnectionsAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REGISTER_THIS_CONNECTIONS_ADDRESS, getRegisterThisConnectionsAddress());
	return true;
}

Boolean UNIX_DNSProtocolEndpoint::getRegisterThisConnectionsAddress() const
{
	return Boolean(false);
}

Boolean UNIX_DNSProtocolEndpoint::getUseSuffixWhenRegistering(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USE_SUFFIX_WHEN_REGISTERING, getUseSuffixWhenRegistering());
	return true;
}

Boolean UNIX_DNSProtocolEndpoint::getUseSuffixWhenRegistering() const
{
	return Boolean(false);
}



Boolean UNIX_DNSProtocolEndpoint::initialize()
{
	return false;
}

Boolean UNIX_DNSProtocolEndpoint::load(int &pIndex)
{
	return false;
}

Boolean UNIX_DNSProtocolEndpoint::finalize()
{
	return false;
}

Boolean UNIX_DNSProtocolEndpoint::find(Array<CIMKeyBinding> &kbArray)
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
