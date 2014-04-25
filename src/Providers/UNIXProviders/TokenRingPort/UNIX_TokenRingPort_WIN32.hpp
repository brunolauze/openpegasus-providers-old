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


UNIX_TokenRingPort::UNIX_TokenRingPort(void)
{
}

UNIX_TokenRingPort::~UNIX_TokenRingPort(void)
{
}


Boolean UNIX_TokenRingPort::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_TokenRingPort::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_TokenRingPort::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_TokenRingPort::getCaption() const
{
	return String ("");
}

Boolean UNIX_TokenRingPort::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_TokenRingPort::getDescription() const
{
	return String ("");
}

Boolean UNIX_TokenRingPort::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_TokenRingPort::getElementName() const
{
	return String("TokenRingPort");
}

Boolean UNIX_TokenRingPort::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_TokenRingPort::getInstallDate() const
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

Boolean UNIX_TokenRingPort::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_TokenRingPort::getName() const
{
	return String ("");
}

Boolean UNIX_TokenRingPort::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_TokenRingPort::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_TokenRingPort::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_TokenRingPort::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_TokenRingPort::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_TokenRingPort::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_TokenRingPort::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_TokenRingPort::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_TokenRingPort::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_TokenRingPort::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_TokenRingPort::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_TokenRingPort::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_TokenRingPort::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_TokenRingPort::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_TokenRingPort::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_TokenRingPort::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_TokenRingPort::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_TokenRingPort::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_TokenRingPort::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_TokenRingPort::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_TokenRingPort::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_TokenRingPort::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_TokenRingPort::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_TokenRingPort::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_TokenRingPort::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_TokenRingPort::getTimeOfLastStateChange() const
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

Boolean UNIX_TokenRingPort::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_TokenRingPort::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_TokenRingPort::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_TokenRingPort::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_TokenRingPort::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_TokenRingPort::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_TokenRingPort::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_TokenRingPort::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_TokenRingPort::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_TokenRingPort::getCreationClassName() const
{
	return String("UNIX_TokenRingPort");
}

Boolean UNIX_TokenRingPort::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_TokenRingPort::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_TokenRingPort::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_TokenRingPort::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_TokenRingPort::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_TokenRingPort::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_TokenRingPort::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_TokenRingPort::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_TokenRingPort::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_TokenRingPort::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_TokenRingPort::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_TokenRingPort::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_TokenRingPort::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_TokenRingPort::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_TokenRingPort::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_TokenRingPort::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_TokenRingPort::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_TokenRingPort::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_TokenRingPort::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_TokenRingPort::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_TokenRingPort::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_TokenRingPort::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_TokenRingPort::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_TokenRingPort::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_TokenRingPort::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_TokenRingPort::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_TokenRingPort::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_TokenRingPort::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_TokenRingPort::getSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPEED, getSpeed());
	return true;
}

Uint64 UNIX_TokenRingPort::getSpeed() const
{
	return Uint64(0);
}

Boolean UNIX_TokenRingPort::getMaxSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_SPEED, getMaxSpeed());
	return true;
}

Uint64 UNIX_TokenRingPort::getMaxSpeed() const
{
	return Uint64(0);
}

Boolean UNIX_TokenRingPort::getRequestedSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_SPEED, getRequestedSpeed());
	return true;
}

Uint64 UNIX_TokenRingPort::getRequestedSpeed() const
{
	return Uint64(0);
}

Boolean UNIX_TokenRingPort::getUsageRestriction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USAGE_RESTRICTION, getUsageRestriction());
	return true;
}

Uint16 UNIX_TokenRingPort::getUsageRestriction() const
{
	return Uint16(0);
}

Boolean UNIX_TokenRingPort::getPortType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_TYPE, getPortType());
	return true;
}

Uint16 UNIX_TokenRingPort::getPortType() const
{
	return Uint16(0);
}

Boolean UNIX_TokenRingPort::getOtherPortType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PORT_TYPE, getOtherPortType());
	return true;
}

String UNIX_TokenRingPort::getOtherPortType() const
{
	return String ("");
}

Boolean UNIX_TokenRingPort::getOtherNetworkPortType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NETWORK_PORT_TYPE, getOtherNetworkPortType());
	return true;
}

String UNIX_TokenRingPort::getOtherNetworkPortType() const
{
	return String ("");
}

Boolean UNIX_TokenRingPort::getPortNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_NUMBER, getPortNumber());
	return true;
}

Uint16 UNIX_TokenRingPort::getPortNumber() const
{
	return Uint16(0);
}

Boolean UNIX_TokenRingPort::getLinkTechnology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LINK_TECHNOLOGY, getLinkTechnology());
	return true;
}

Uint16 UNIX_TokenRingPort::getLinkTechnology() const
{
	return Uint16(0);
}

Boolean UNIX_TokenRingPort::getOtherLinkTechnology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LINK_TECHNOLOGY, getOtherLinkTechnology());
	return true;
}

String UNIX_TokenRingPort::getOtherLinkTechnology() const
{
	return String ("");
}

Boolean UNIX_TokenRingPort::getPermanentAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERMANENT_ADDRESS, getPermanentAddress());
	return true;
}

String UNIX_TokenRingPort::getPermanentAddress() const
{
	return String ("");
}

Boolean UNIX_TokenRingPort::getNetworkAddresses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NETWORK_ADDRESSES, getNetworkAddresses());
	return true;
}

Array<String> UNIX_TokenRingPort::getNetworkAddresses() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_TokenRingPort::getFullDuplex(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FULL_DUPLEX, getFullDuplex());
	return true;
}

Boolean UNIX_TokenRingPort::getFullDuplex() const
{
	return Boolean(false);
}

Boolean UNIX_TokenRingPort::getAutoSense(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTO_SENSE, getAutoSense());
	return true;
}

Boolean UNIX_TokenRingPort::getAutoSense() const
{
	return Boolean(false);
}

Boolean UNIX_TokenRingPort::getSupportedMaximumTransmissionUnit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_MAXIMUM_TRANSMISSION_UNIT, getSupportedMaximumTransmissionUnit());
	return true;
}

Uint64 UNIX_TokenRingPort::getSupportedMaximumTransmissionUnit() const
{
	return Uint64(0);
}

Boolean UNIX_TokenRingPort::getActiveMaximumTransmissionUnit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTIVE_MAXIMUM_TRANSMISSION_UNIT, getActiveMaximumTransmissionUnit());
	return true;
}

Uint64 UNIX_TokenRingPort::getActiveMaximumTransmissionUnit() const
{
	return Uint64(0);
}

Boolean UNIX_TokenRingPort::getMaxDataSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_DATA_SIZE, getMaxDataSize());
	return true;
}

Uint32 UNIX_TokenRingPort::getMaxDataSize() const
{
	return Uint32(0);
}

Boolean UNIX_TokenRingPort::getCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITIES, getCapabilities());
	return true;
}

Array<Uint16> UNIX_TokenRingPort::getCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_TokenRingPort::getCapabilityDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITY_DESCRIPTIONS, getCapabilityDescriptions());
	return true;
}

Array<String> UNIX_TokenRingPort::getCapabilityDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_TokenRingPort::getEnabledCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_CAPABILITIES, getEnabledCapabilities());
	return true;
}

Array<Uint16> UNIX_TokenRingPort::getEnabledCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_TokenRingPort::getOtherEnabledCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_CAPABILITIES, getOtherEnabledCapabilities());
	return true;
}

Array<String> UNIX_TokenRingPort::getOtherEnabledCapabilities() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_TokenRingPort::getRingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RING_STATUS, getRingStatus());
	return true;
}

Uint32 UNIX_TokenRingPort::getRingStatus() const
{
	return Uint32(0);
}

Boolean UNIX_TokenRingPort::getRingState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RING_STATE, getRingState());
	return true;
}

Uint16 UNIX_TokenRingPort::getRingState() const
{
	return Uint16(0);
}

Boolean UNIX_TokenRingPort::getRingOpenStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RING_OPEN_STATUS, getRingOpenStatus());
	return true;
}

Uint16 UNIX_TokenRingPort::getRingOpenStatus() const
{
	return Uint16(0);
}

Boolean UNIX_TokenRingPort::getRingSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RING_SPEED, getRingSpeed());
	return true;
}

Uint16 UNIX_TokenRingPort::getRingSpeed() const
{
	return Uint16(0);
}



Boolean UNIX_TokenRingPort::initialize()
{
	return false;
}

Boolean UNIX_TokenRingPort::load(int &pIndex)
{
	return false;
}

Boolean UNIX_TokenRingPort::finalize()
{
	return false;
}

Boolean UNIX_TokenRingPort::find(Array<CIMKeyBinding> &kbArray)
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
