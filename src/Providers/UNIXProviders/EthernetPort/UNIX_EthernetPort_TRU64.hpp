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


UNIX_EthernetPort::UNIX_EthernetPort(void)
{
}

UNIX_EthernetPort::~UNIX_EthernetPort(void)
{
}


Boolean UNIX_EthernetPort::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_EthernetPort::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_EthernetPort::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_EthernetPort::getCaption() const
{
	return String ("");
}

Boolean UNIX_EthernetPort::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_EthernetPort::getDescription() const
{
	return String ("");
}

Boolean UNIX_EthernetPort::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_EthernetPort::getElementName() const
{
	return String("EthernetPort");
}

Boolean UNIX_EthernetPort::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_EthernetPort::getInstallDate() const
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

Boolean UNIX_EthernetPort::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_EthernetPort::getName() const
{
	return String ("");
}

Boolean UNIX_EthernetPort::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_EthernetPort::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_EthernetPort::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_EthernetPort::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_EthernetPort::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_EthernetPort::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_EthernetPort::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_EthernetPort::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_EthernetPort::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_EthernetPort::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_EthernetPort::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_EthernetPort::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_EthernetPort::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_EthernetPort::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_EthernetPort::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_EthernetPort::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_EthernetPort::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_EthernetPort::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_EthernetPort::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_EthernetPort::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_EthernetPort::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_EthernetPort::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_EthernetPort::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_EthernetPort::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_EthernetPort::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_EthernetPort::getTimeOfLastStateChange() const
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

Boolean UNIX_EthernetPort::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_EthernetPort::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_EthernetPort::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_EthernetPort::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_EthernetPort::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_EthernetPort::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_EthernetPort::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_EthernetPort::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_EthernetPort::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_EthernetPort::getCreationClassName() const
{
	return String("UNIX_EthernetPort");
}

Boolean UNIX_EthernetPort::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_EthernetPort::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_EthernetPort::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_EthernetPort::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_EthernetPort::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_EthernetPort::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_EthernetPort::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_EthernetPort::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_EthernetPort::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_EthernetPort::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_EthernetPort::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_EthernetPort::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_EthernetPort::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_EthernetPort::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_EthernetPort::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_EthernetPort::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_EthernetPort::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_EthernetPort::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_EthernetPort::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_EthernetPort::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_EthernetPort::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_EthernetPort::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_EthernetPort::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_EthernetPort::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_EthernetPort::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_EthernetPort::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_EthernetPort::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_EthernetPort::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_EthernetPort::getSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPEED, getSpeed());
	return true;
}

Uint64 UNIX_EthernetPort::getSpeed() const
{
	return Uint64(0);
}

Boolean UNIX_EthernetPort::getMaxSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_SPEED, getMaxSpeed());
	return true;
}

Uint64 UNIX_EthernetPort::getMaxSpeed() const
{
	return Uint64(0);
}

Boolean UNIX_EthernetPort::getRequestedSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_SPEED, getRequestedSpeed());
	return true;
}

Uint64 UNIX_EthernetPort::getRequestedSpeed() const
{
	return Uint64(0);
}

Boolean UNIX_EthernetPort::getUsageRestriction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USAGE_RESTRICTION, getUsageRestriction());
	return true;
}

Uint16 UNIX_EthernetPort::getUsageRestriction() const
{
	return Uint16(0);
}

Boolean UNIX_EthernetPort::getPortType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_TYPE, getPortType());
	return true;
}

Uint16 UNIX_EthernetPort::getPortType() const
{
	return Uint16(0);
}

Boolean UNIX_EthernetPort::getOtherPortType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PORT_TYPE, getOtherPortType());
	return true;
}

String UNIX_EthernetPort::getOtherPortType() const
{
	return String ("");
}

Boolean UNIX_EthernetPort::getOtherNetworkPortType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NETWORK_PORT_TYPE, getOtherNetworkPortType());
	return true;
}

String UNIX_EthernetPort::getOtherNetworkPortType() const
{
	return String ("");
}

Boolean UNIX_EthernetPort::getPortNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_NUMBER, getPortNumber());
	return true;
}

Uint16 UNIX_EthernetPort::getPortNumber() const
{
	return Uint16(0);
}

Boolean UNIX_EthernetPort::getLinkTechnology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LINK_TECHNOLOGY, getLinkTechnology());
	return true;
}

Uint16 UNIX_EthernetPort::getLinkTechnology() const
{
	return Uint16(0);
}

Boolean UNIX_EthernetPort::getOtherLinkTechnology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LINK_TECHNOLOGY, getOtherLinkTechnology());
	return true;
}

String UNIX_EthernetPort::getOtherLinkTechnology() const
{
	return String ("");
}

Boolean UNIX_EthernetPort::getPermanentAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERMANENT_ADDRESS, getPermanentAddress());
	return true;
}

String UNIX_EthernetPort::getPermanentAddress() const
{
	return String ("");
}

Boolean UNIX_EthernetPort::getNetworkAddresses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NETWORK_ADDRESSES, getNetworkAddresses());
	return true;
}

Array<String> UNIX_EthernetPort::getNetworkAddresses() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_EthernetPort::getFullDuplex(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FULL_DUPLEX, getFullDuplex());
	return true;
}

Boolean UNIX_EthernetPort::getFullDuplex() const
{
	return Boolean(false);
}

Boolean UNIX_EthernetPort::getAutoSense(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTO_SENSE, getAutoSense());
	return true;
}

Boolean UNIX_EthernetPort::getAutoSense() const
{
	return Boolean(false);
}

Boolean UNIX_EthernetPort::getSupportedMaximumTransmissionUnit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_MAXIMUM_TRANSMISSION_UNIT, getSupportedMaximumTransmissionUnit());
	return true;
}

Uint64 UNIX_EthernetPort::getSupportedMaximumTransmissionUnit() const
{
	return Uint64(0);
}

Boolean UNIX_EthernetPort::getActiveMaximumTransmissionUnit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTIVE_MAXIMUM_TRANSMISSION_UNIT, getActiveMaximumTransmissionUnit());
	return true;
}

Uint64 UNIX_EthernetPort::getActiveMaximumTransmissionUnit() const
{
	return Uint64(0);
}

Boolean UNIX_EthernetPort::getMaxDataSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_DATA_SIZE, getMaxDataSize());
	return true;
}

Uint32 UNIX_EthernetPort::getMaxDataSize() const
{
	return Uint32(0);
}

Boolean UNIX_EthernetPort::getCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITIES, getCapabilities());
	return true;
}

Array<Uint16> UNIX_EthernetPort::getCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_EthernetPort::getCapabilityDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITY_DESCRIPTIONS, getCapabilityDescriptions());
	return true;
}

Array<String> UNIX_EthernetPort::getCapabilityDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_EthernetPort::getEnabledCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_CAPABILITIES, getEnabledCapabilities());
	return true;
}

Array<Uint16> UNIX_EthernetPort::getEnabledCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_EthernetPort::getOtherEnabledCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_CAPABILITIES, getOtherEnabledCapabilities());
	return true;
}

Array<String> UNIX_EthernetPort::getOtherEnabledCapabilities() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_EthernetPort::getPVID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_V_ID, getPVID());
	return true;
}

Uint16 UNIX_EthernetPort::getPVID() const
{
	return Uint16(0);
}

Boolean UNIX_EthernetPort::getPoEPowerEntityType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PO_E_POWER_ENTITY_TYPE, getPoEPowerEntityType());
	return true;
}

Uint16 UNIX_EthernetPort::getPoEPowerEntityType() const
{
	return Uint16(0);
}

Boolean UNIX_EthernetPort::getPortDiscriminator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_DISCRIMINATOR, getPortDiscriminator());
	return true;
}

Array<String> UNIX_EthernetPort::getPortDiscriminator() const
{
	Array<String> as;
	

	return as;

}



Boolean UNIX_EthernetPort::initialize()
{
	return false;
}

Boolean UNIX_EthernetPort::load(int &pIndex)
{
	return false;
}

Boolean UNIX_EthernetPort::finalize()
{
	return false;
}

Boolean UNIX_EthernetPort::find(Array<CIMKeyBinding> &kbArray)
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
