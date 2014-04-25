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


UNIX_SSHProtocolEndpoint::UNIX_SSHProtocolEndpoint(void)
{
}

UNIX_SSHProtocolEndpoint::~UNIX_SSHProtocolEndpoint(void)
{
}


Boolean UNIX_SSHProtocolEndpoint::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SSHProtocolEndpoint::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_SSHProtocolEndpoint::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SSHProtocolEndpoint::getCaption() const
{
	return String ("");
}

Boolean UNIX_SSHProtocolEndpoint::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SSHProtocolEndpoint::getDescription() const
{
	return String ("");
}

Boolean UNIX_SSHProtocolEndpoint::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SSHProtocolEndpoint::getElementName() const
{
	return String("SSHProtocolEndpoint");
}

Boolean UNIX_SSHProtocolEndpoint::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_SSHProtocolEndpoint::getInstallDate() const
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

Boolean UNIX_SSHProtocolEndpoint::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_SSHProtocolEndpoint::getName() const
{
	return String ("");
}

Boolean UNIX_SSHProtocolEndpoint::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_SSHProtocolEndpoint::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_SSHProtocolEndpoint::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_SSHProtocolEndpoint::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_SSHProtocolEndpoint::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_SSHProtocolEndpoint::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_SSHProtocolEndpoint::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_SSHProtocolEndpoint::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_SSHProtocolEndpoint::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_SSHProtocolEndpoint::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_SSHProtocolEndpoint::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_SSHProtocolEndpoint::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_SSHProtocolEndpoint::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_SSHProtocolEndpoint::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_SSHProtocolEndpoint::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_SSHProtocolEndpoint::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_SSHProtocolEndpoint::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_SSHProtocolEndpoint::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_SSHProtocolEndpoint::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_SSHProtocolEndpoint::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_SSHProtocolEndpoint::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_SSHProtocolEndpoint::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_SSHProtocolEndpoint::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_SSHProtocolEndpoint::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_SSHProtocolEndpoint::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_SSHProtocolEndpoint::getTimeOfLastStateChange() const
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

Boolean UNIX_SSHProtocolEndpoint::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_SSHProtocolEndpoint::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_SSHProtocolEndpoint::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_SSHProtocolEndpoint::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_SSHProtocolEndpoint::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_SSHProtocolEndpoint::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_SSHProtocolEndpoint::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_SSHProtocolEndpoint::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_SSHProtocolEndpoint::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_SSHProtocolEndpoint::getCreationClassName() const
{
	return String("UNIX_SSHProtocolEndpoint");
}

Boolean UNIX_SSHProtocolEndpoint::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

String UNIX_SSHProtocolEndpoint::getNameFormat() const
{
	return String ("");
}

Boolean UNIX_SSHProtocolEndpoint::getProtocolType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_TYPE, getProtocolType());
	return true;
}

Uint16 UNIX_SSHProtocolEndpoint::getProtocolType() const
{
	return Uint16(0);
}

Boolean UNIX_SSHProtocolEndpoint::getProtocolIFType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_I_F_TYPE, getProtocolIFType());
	return true;
}

Uint16 UNIX_SSHProtocolEndpoint::getProtocolIFType() const
{
	return Uint16(0);
}

Boolean UNIX_SSHProtocolEndpoint::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_SSHProtocolEndpoint::getOtherTypeDescription() const
{
	return String ("");
}

Boolean UNIX_SSHProtocolEndpoint::getEnabledSSHVersions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_S_S_H_VERSIONS, getEnabledSSHVersions());
	return true;
}

Array<Uint16> UNIX_SSHProtocolEndpoint::getEnabledSSHVersions() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_SSHProtocolEndpoint::getOtherEnabledSSHVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_S_S_H_VERSION, getOtherEnabledSSHVersion());
	return true;
}

String UNIX_SSHProtocolEndpoint::getOtherEnabledSSHVersion() const
{
	return String ("");
}

Boolean UNIX_SSHProtocolEndpoint::getSSHVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_S_H_VERSION, getSSHVersion());
	return true;
}

Uint16 UNIX_SSHProtocolEndpoint::getSSHVersion() const
{
	return Uint16(0);
}

Boolean UNIX_SSHProtocolEndpoint::getOtherSSHVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_S_S_H_VERSION, getOtherSSHVersion());
	return true;
}

String UNIX_SSHProtocolEndpoint::getOtherSSHVersion() const
{
	return String ("");
}

Boolean UNIX_SSHProtocolEndpoint::getEnabledEncryptionAlgorithms(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_ENCRYPTION_ALGORITHMS, getEnabledEncryptionAlgorithms());
	return true;
}

Array<Uint16> UNIX_SSHProtocolEndpoint::getEnabledEncryptionAlgorithms() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_SSHProtocolEndpoint::getOtherEnabledEncryptionAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_ENCRYPTION_ALGORITHM, getOtherEnabledEncryptionAlgorithm());
	return true;
}

Array<String> UNIX_SSHProtocolEndpoint::getOtherEnabledEncryptionAlgorithm() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_SSHProtocolEndpoint::getEncryptionAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENCRYPTION_ALGORITHM, getEncryptionAlgorithm());
	return true;
}

Uint16 UNIX_SSHProtocolEndpoint::getEncryptionAlgorithm() const
{
	return Uint16(0);
}

Boolean UNIX_SSHProtocolEndpoint::getOtherEncryptionAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENCRYPTION_ALGORITHM, getOtherEncryptionAlgorithm());
	return true;
}

Array<String> UNIX_SSHProtocolEndpoint::getOtherEncryptionAlgorithm() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_SSHProtocolEndpoint::getIdleTimeout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDLE_TIMEOUT, getIdleTimeout());
	return true;
}

Uint32 UNIX_SSHProtocolEndpoint::getIdleTimeout() const
{
	return Uint32(0);
}

Boolean UNIX_SSHProtocolEndpoint::getKeepAlive(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_KEEP_ALIVE, getKeepAlive());
	return true;
}

Boolean UNIX_SSHProtocolEndpoint::getKeepAlive() const
{
	return Boolean(false);
}

Boolean UNIX_SSHProtocolEndpoint::getForwardX11(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FORWARD_X_1_1, getForwardX11());
	return true;
}

Boolean UNIX_SSHProtocolEndpoint::getForwardX11() const
{
	return Boolean(false);
}

Boolean UNIX_SSHProtocolEndpoint::getCompression(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION, getCompression());
	return true;
}

Boolean UNIX_SSHProtocolEndpoint::getCompression() const
{
	return Boolean(false);
}



Boolean UNIX_SSHProtocolEndpoint::initialize()
{
	return false;
}

Boolean UNIX_SSHProtocolEndpoint::load(int &pIndex)
{
	return false;
}

Boolean UNIX_SSHProtocolEndpoint::finalize()
{
	return false;
}

Boolean UNIX_SSHProtocolEndpoint::find(Array<CIMKeyBinding> &kbArray)
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
