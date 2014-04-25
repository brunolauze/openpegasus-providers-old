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


UNIX_FibrePort::UNIX_FibrePort(void)
{
}

UNIX_FibrePort::~UNIX_FibrePort(void)
{
}


Boolean UNIX_FibrePort::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FibrePort::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_FibrePort::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FibrePort::getCaption() const
{
	return String ("");
}

Boolean UNIX_FibrePort::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FibrePort::getDescription() const
{
	return String ("");
}

Boolean UNIX_FibrePort::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FibrePort::getElementName() const
{
	return String("FibrePort");
}

Boolean UNIX_FibrePort::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_FibrePort::getInstallDate() const
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

Boolean UNIX_FibrePort::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_FibrePort::getName() const
{
	return String ("");
}

Boolean UNIX_FibrePort::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_FibrePort::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_FibrePort::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_FibrePort::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_FibrePort::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_FibrePort::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_FibrePort::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_FibrePort::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_FibrePort::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_FibrePort::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_FibrePort::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_FibrePort::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_FibrePort::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_FibrePort::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_FibrePort::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_FibrePort::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_FibrePort::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_FibrePort::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_FibrePort::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_FibrePort::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_FibrePort::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_FibrePort::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_FibrePort::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_FibrePort::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_FibrePort::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_FibrePort::getTimeOfLastStateChange() const
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

Boolean UNIX_FibrePort::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_FibrePort::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_FibrePort::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_FibrePort::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_FibrePort::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_FibrePort::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_FibrePort::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_FibrePort::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_FibrePort::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_FibrePort::getCreationClassName() const
{
	return String("UNIX_FibrePort");
}

Boolean UNIX_FibrePort::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_FibrePort::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_FibrePort::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_FibrePort::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_FibrePort::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_FibrePort::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_FibrePort::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_FibrePort::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_FibrePort::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_FibrePort::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_FibrePort::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_FibrePort::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_FibrePort::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_FibrePort::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_FibrePort::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_FibrePort::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_FibrePort::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_FibrePort::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_FibrePort::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_FibrePort::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_FibrePort::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_FibrePort::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_FibrePort::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_FibrePort::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_FibrePort::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_FibrePort::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_FibrePort::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_FibrePort::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_FibrePort::getSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPEED, getSpeed());
	return true;
}

Uint64 UNIX_FibrePort::getSpeed() const
{
	return Uint64(0);
}

Boolean UNIX_FibrePort::getMaxSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_SPEED, getMaxSpeed());
	return true;
}

Uint64 UNIX_FibrePort::getMaxSpeed() const
{
	return Uint64(0);
}

Boolean UNIX_FibrePort::getRequestedSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_SPEED, getRequestedSpeed());
	return true;
}

Uint64 UNIX_FibrePort::getRequestedSpeed() const
{
	return Uint64(0);
}

Boolean UNIX_FibrePort::getUsageRestriction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USAGE_RESTRICTION, getUsageRestriction());
	return true;
}

Uint16 UNIX_FibrePort::getUsageRestriction() const
{
	return Uint16(0);
}

Boolean UNIX_FibrePort::getPortType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_TYPE, getPortType());
	return true;
}

Uint16 UNIX_FibrePort::getPortType() const
{
	return Uint16(0);
}

Boolean UNIX_FibrePort::getOtherPortType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PORT_TYPE, getOtherPortType());
	return true;
}

String UNIX_FibrePort::getOtherPortType() const
{
	return String ("");
}

Boolean UNIX_FibrePort::getAddressIdentifier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_IDENTIFIER, getAddressIdentifier());
	return true;
}

Uint32 UNIX_FibrePort::getAddressIdentifier() const
{
	return Uint32(0);
}

Boolean UNIX_FibrePort::getSupportedPortTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_PORT_TYPES, getSupportedPortTypes());
	return true;
}

Array<Uint16> UNIX_FibrePort::getSupportedPortTypes() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_FibrePort::getPortTypeVersions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_TYPE_VERSIONS, getPortTypeVersions());
	return true;
}

Array<String> UNIX_FibrePort::getPortTypeVersions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_FibrePort::getEnabledPortTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_PORT_TYPES, getEnabledPortTypes());
	return true;
}

Array<Uint16> UNIX_FibrePort::getEnabledPortTypes() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_FibrePort::getEnabledVersions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_VERSIONS, getEnabledVersions());
	return true;
}

Array<String> UNIX_FibrePort::getEnabledVersions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_FibrePort::getCurrentPortType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_PORT_TYPE, getCurrentPortType());
	return true;
}

Uint16 UNIX_FibrePort::getCurrentPortType() const
{
	return Uint16(0);
}

Boolean UNIX_FibrePort::getCurrentVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_VERSION, getCurrentVersion());
	return true;
}

String UNIX_FibrePort::getCurrentVersion() const
{
	return String ("");
}

Boolean UNIX_FibrePort::getAliasAddresses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALIAS_ADDRESSES, getAliasAddresses());
	return true;
}

Array<Uint32> UNIX_FibrePort::getAliasAddresses() const
{
	Array<Uint32> as;
	

	return as;

}

Boolean UNIX_FibrePort::getLossOfSignalCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOSS_OF_SIGNAL_COUNTER, getLossOfSignalCounter());
	return true;
}

Uint64 UNIX_FibrePort::getLossOfSignalCounter() const
{
	return Uint64(0);
}

Boolean UNIX_FibrePort::getLossOfSyncCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOSS_OF_SYNC_COUNTER, getLossOfSyncCounter());
	return true;
}

Uint64 UNIX_FibrePort::getLossOfSyncCounter() const
{
	return Uint64(0);
}

Boolean UNIX_FibrePort::getCRCErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_C_R_C_ERRORS, getCRCErrors());
	return true;
}

Uint64 UNIX_FibrePort::getCRCErrors() const
{
	return Uint64(0);
}

Boolean UNIX_FibrePort::getInvalidTransmissionWords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INVALID_TRANSMISSION_WORDS, getInvalidTransmissionWords());
	return true;
}

Uint64 UNIX_FibrePort::getInvalidTransmissionWords() const
{
	return Uint64(0);
}

Boolean UNIX_FibrePort::getFramesTooShort(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FRAMES_TOO_SHORT, getFramesTooShort());
	return true;
}

Uint64 UNIX_FibrePort::getFramesTooShort() const
{
	return Uint64(0);
}

Boolean UNIX_FibrePort::getFramesTooLong(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FRAMES_TOO_LONG, getFramesTooLong());
	return true;
}

Uint64 UNIX_FibrePort::getFramesTooLong() const
{
	return Uint64(0);
}

Boolean UNIX_FibrePort::getElasticityBufferUnderruns(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELASTICITY_BUFFER_UNDERRUNS, getElasticityBufferUnderruns());
	return true;
}

Uint64 UNIX_FibrePort::getElasticityBufferUnderruns() const
{
	return Uint64(0);
}

Boolean UNIX_FibrePort::getElasticityBufferOverruns(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELASTICITY_BUFFER_OVERRUNS, getElasticityBufferOverruns());
	return true;
}

Uint64 UNIX_FibrePort::getElasticityBufferOverruns() const
{
	return Uint64(0);
}

Boolean UNIX_FibrePort::getReceiverTransmitterTimeout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECEIVER_TRANSMITTER_TIMEOUT, getReceiverTransmitterTimeout());
	return true;
}

Uint64 UNIX_FibrePort::getReceiverTransmitterTimeout() const
{
	return Uint64(0);
}

Boolean UNIX_FibrePort::getBypassedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BYPASSED_STATE, getBypassedState());
	return true;
}

Uint16 UNIX_FibrePort::getBypassedState() const
{
	return Uint16(0);
}

Boolean UNIX_FibrePort::getConnectedMedia(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTED_MEDIA, getConnectedMedia());
	return true;
}

Uint16 UNIX_FibrePort::getConnectedMedia() const
{
	return Uint16(0);
}



Boolean UNIX_FibrePort::initialize()
{
	return false;
}

Boolean UNIX_FibrePort::load(int &pIndex)
{
	return false;
}

Boolean UNIX_FibrePort::finalize()
{
	return false;
}

Boolean UNIX_FibrePort::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String creationClassNameKey;
	String deviceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DEVICE_ID)) deviceIDKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
