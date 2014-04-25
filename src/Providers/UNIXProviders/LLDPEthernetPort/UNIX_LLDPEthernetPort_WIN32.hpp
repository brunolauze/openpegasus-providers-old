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


UNIX_LLDPEthernetPort::UNIX_LLDPEthernetPort(void)
{
}

UNIX_LLDPEthernetPort::~UNIX_LLDPEthernetPort(void)
{
}


Boolean UNIX_LLDPEthernetPort::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_LLDPEthernetPort::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_LLDPEthernetPort::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_LLDPEthernetPort::getCaption() const
{
	return String ("");
}

Boolean UNIX_LLDPEthernetPort::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_LLDPEthernetPort::getDescription() const
{
	return String ("");
}

Boolean UNIX_LLDPEthernetPort::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_LLDPEthernetPort::getElementName() const
{
	return String("LLDPEthernetPort");
}

Boolean UNIX_LLDPEthernetPort::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_LLDPEthernetPort::getInstallDate() const
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

Boolean UNIX_LLDPEthernetPort::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_LLDPEthernetPort::getName() const
{
	return String ("");
}

Boolean UNIX_LLDPEthernetPort::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_LLDPEthernetPort::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPort::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_LLDPEthernetPort::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPort::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_LLDPEthernetPort::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_LLDPEthernetPort::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_LLDPEthernetPort::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_LLDPEthernetPort::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_LLDPEthernetPort::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_LLDPEthernetPort::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_LLDPEthernetPort::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_LLDPEthernetPort::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_LLDPEthernetPort::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_LLDPEthernetPort::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_LLDPEthernetPort::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_LLDPEthernetPort::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_LLDPEthernetPort::getTimeOfLastStateChange() const
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

Boolean UNIX_LLDPEthernetPort::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_LLDPEthernetPort::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPort::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_LLDPEthernetPort::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_LLDPEthernetPort::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_LLDPEthernetPort::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_LLDPEthernetPort::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_LLDPEthernetPort::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_LLDPEthernetPort::getCreationClassName() const
{
	return String("UNIX_LLDPEthernetPort");
}

Boolean UNIX_LLDPEthernetPort::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_LLDPEthernetPort::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_LLDPEthernetPort::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_LLDPEthernetPort::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_LLDPEthernetPort::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_LLDPEthernetPort::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPort::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_LLDPEthernetPort::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_LLDPEthernetPort::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_LLDPEthernetPort::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_LLDPEthernetPort::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_LLDPEthernetPort::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_LLDPEthernetPort::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_LLDPEthernetPort::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_LLDPEthernetPort::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_LLDPEthernetPort::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPort::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_LLDPEthernetPort::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_LLDPEthernetPort::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_LLDPEthernetPort::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_LLDPEthernetPort::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_LLDPEthernetPort::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPort::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_LLDPEthernetPort::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPort::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_LLDPEthernetPort::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_LLDPEthernetPort::getSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPEED, getSpeed());
	return true;
}

Uint64 UNIX_LLDPEthernetPort::getSpeed() const
{
	return Uint64(0);
}

Boolean UNIX_LLDPEthernetPort::getMaxSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_SPEED, getMaxSpeed());
	return true;
}

Uint64 UNIX_LLDPEthernetPort::getMaxSpeed() const
{
	return Uint64(0);
}

Boolean UNIX_LLDPEthernetPort::getRequestedSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_SPEED, getRequestedSpeed());
	return true;
}

Uint64 UNIX_LLDPEthernetPort::getRequestedSpeed() const
{
	return Uint64(0);
}

Boolean UNIX_LLDPEthernetPort::getUsageRestriction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USAGE_RESTRICTION, getUsageRestriction());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getUsageRestriction() const
{
	return Uint16(0);
}

Boolean UNIX_LLDPEthernetPort::getPortType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_TYPE, getPortType());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getPortType() const
{
	return Uint16(0);
}

Boolean UNIX_LLDPEthernetPort::getOtherPortType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PORT_TYPE, getOtherPortType());
	return true;
}

String UNIX_LLDPEthernetPort::getOtherPortType() const
{
	return String ("");
}

Boolean UNIX_LLDPEthernetPort::getOtherNetworkPortType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NETWORK_PORT_TYPE, getOtherNetworkPortType());
	return true;
}

String UNIX_LLDPEthernetPort::getOtherNetworkPortType() const
{
	return String ("");
}

Boolean UNIX_LLDPEthernetPort::getPortNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_NUMBER, getPortNumber());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getPortNumber() const
{
	return Uint16(0);
}

Boolean UNIX_LLDPEthernetPort::getLinkTechnology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LINK_TECHNOLOGY, getLinkTechnology());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getLinkTechnology() const
{
	return Uint16(0);
}

Boolean UNIX_LLDPEthernetPort::getOtherLinkTechnology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LINK_TECHNOLOGY, getOtherLinkTechnology());
	return true;
}

String UNIX_LLDPEthernetPort::getOtherLinkTechnology() const
{
	return String ("");
}

Boolean UNIX_LLDPEthernetPort::getPermanentAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERMANENT_ADDRESS, getPermanentAddress());
	return true;
}

String UNIX_LLDPEthernetPort::getPermanentAddress() const
{
	return String ("");
}

Boolean UNIX_LLDPEthernetPort::getNetworkAddresses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NETWORK_ADDRESSES, getNetworkAddresses());
	return true;
}

Array<String> UNIX_LLDPEthernetPort::getNetworkAddresses() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPort::getFullDuplex(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FULL_DUPLEX, getFullDuplex());
	return true;
}

Boolean UNIX_LLDPEthernetPort::getFullDuplex() const
{
	return Boolean(false);
}

Boolean UNIX_LLDPEthernetPort::getAutoSense(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTO_SENSE, getAutoSense());
	return true;
}

Boolean UNIX_LLDPEthernetPort::getAutoSense() const
{
	return Boolean(false);
}

Boolean UNIX_LLDPEthernetPort::getSupportedMaximumTransmissionUnit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_MAXIMUM_TRANSMISSION_UNIT, getSupportedMaximumTransmissionUnit());
	return true;
}

Uint64 UNIX_LLDPEthernetPort::getSupportedMaximumTransmissionUnit() const
{
	return Uint64(0);
}

Boolean UNIX_LLDPEthernetPort::getActiveMaximumTransmissionUnit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTIVE_MAXIMUM_TRANSMISSION_UNIT, getActiveMaximumTransmissionUnit());
	return true;
}

Uint64 UNIX_LLDPEthernetPort::getActiveMaximumTransmissionUnit() const
{
	return Uint64(0);
}

Boolean UNIX_LLDPEthernetPort::getMaxDataSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_DATA_SIZE, getMaxDataSize());
	return true;
}

Uint32 UNIX_LLDPEthernetPort::getMaxDataSize() const
{
	return Uint32(0);
}

Boolean UNIX_LLDPEthernetPort::getCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITIES, getCapabilities());
	return true;
}

Array<Uint16> UNIX_LLDPEthernetPort::getCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPort::getCapabilityDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITY_DESCRIPTIONS, getCapabilityDescriptions());
	return true;
}

Array<String> UNIX_LLDPEthernetPort::getCapabilityDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPort::getEnabledCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_CAPABILITIES, getEnabledCapabilities());
	return true;
}

Array<Uint16> UNIX_LLDPEthernetPort::getEnabledCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPort::getOtherEnabledCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_CAPABILITIES, getOtherEnabledCapabilities());
	return true;
}

Array<String> UNIX_LLDPEthernetPort::getOtherEnabledCapabilities() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPort::getPVID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_V_ID, getPVID());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getPVID() const
{
	return Uint16(0);
}

Boolean UNIX_LLDPEthernetPort::getPoEPowerEntityType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PO_E_POWER_ENTITY_TYPE, getPoEPowerEntityType());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getPoEPowerEntityType() const
{
	return Uint16(0);
}

Boolean UNIX_LLDPEthernetPort::getPortDiscriminator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_DISCRIMINATOR, getPortDiscriminator());
	return true;
}

Array<String> UNIX_LLDPEthernetPort::getPortDiscriminator() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPort::getConfigPortVlanTxEnable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIG_PORT_VLAN_TX_ENABLE, getConfigPortVlanTxEnable());
	return true;
}

Boolean UNIX_LLDPEthernetPort::getConfigPortVlanTxEnable() const
{
	return Boolean(false);
}

Boolean UNIX_LLDPEthernetPort::getConfigManVidTxEnable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIG_MAN_VID_TX_ENABLE, getConfigManVidTxEnable());
	return true;
}

Boolean UNIX_LLDPEthernetPort::getConfigManVidTxEnable() const
{
	return Boolean(false);
}

Boolean UNIX_LLDPEthernetPort::getMessageTxInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MESSAGE_TX_INTERVAL, getMessageTxInterval());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getMessageTxInterval() const
{
	return Uint16(0);
}

Boolean UNIX_LLDPEthernetPort::getMessageTxHoldMultiplier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MESSAGE_TX_HOLD_MULTIPLIER, getMessageTxHoldMultiplier());
	return true;
}

Uint8 UNIX_LLDPEthernetPort::getMessageTxHoldMultiplier() const
{
	return Uint8(0);
}

Boolean UNIX_LLDPEthernetPort::getReinitDelay(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REINIT_DELAY, getReinitDelay());
	return true;
}

Uint8 UNIX_LLDPEthernetPort::getReinitDelay() const
{
	return Uint8(0);
}

Boolean UNIX_LLDPEthernetPort::getNotificationInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NOTIFICATION_INTERVAL, getNotificationInterval());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getNotificationInterval() const
{
	return Uint16(0);
}

Boolean UNIX_LLDPEthernetPort::getTxCreditMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TX_CREDIT_MAX, getTxCreditMax());
	return true;
}

Uint8 UNIX_LLDPEthernetPort::getTxCreditMax() const
{
	return Uint8(0);
}

Boolean UNIX_LLDPEthernetPort::getMessageFastTx(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MESSAGE_FAST_TX, getMessageFastTx());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getMessageFastTx() const
{
	return Uint16(0);
}

Boolean UNIX_LLDPEthernetPort::getTxFastInit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TX_FAST_INIT, getTxFastInit());
	return true;
}

Uint8 UNIX_LLDPEthernetPort::getTxFastInit() const
{
	return Uint8(0);
}

Boolean UNIX_LLDPEthernetPort::getDestMacAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEST_MAC_ADDRESS, getDestMacAddress());
	return true;
}

Array<String> UNIX_LLDPEthernetPort::getDestMacAddress() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPort::getPortConfigAdminStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_CONFIG_ADMIN_STATUS, getPortConfigAdminStatus());
	return true;
}

Array<Uint8> UNIX_LLDPEthernetPort::getPortConfigAdminStatus() const
{
	Array<Uint8> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPort::getPortConfigNotificationEnable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_CONFIG_NOTIFICATION_ENABLE, getPortConfigNotificationEnable());
	return true;
}

Array<Boolean> UNIX_LLDPEthernetPort::getPortConfigNotificationEnable() const
{
	Array<Boolean> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPort::getPortConfigPortDescriptionTLVTxEnable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_CONFIG_PORT_DESCRIPTION_T_L_V_TX_ENABLE, getPortConfigPortDescriptionTLVTxEnable());
	return true;
}

Array<Boolean> UNIX_LLDPEthernetPort::getPortConfigPortDescriptionTLVTxEnable() const
{
	Array<Boolean> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPort::getPortConfigSystemNameTLVTxEnable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_CONFIG_SYSTEM_NAME_T_L_V_TX_ENABLE, getPortConfigSystemNameTLVTxEnable());
	return true;
}

Array<Boolean> UNIX_LLDPEthernetPort::getPortConfigSystemNameTLVTxEnable() const
{
	Array<Boolean> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPort::getPortConfigSystemDescriptionTLVTxEnable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_CONFIG_SYSTEM_DESCRIPTION_T_L_V_TX_ENABLE, getPortConfigSystemDescriptionTLVTxEnable());
	return true;
}

Array<Boolean> UNIX_LLDPEthernetPort::getPortConfigSystemDescriptionTLVTxEnable() const
{
	Array<Boolean> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPort::getPortConfigSystemCapabilitiesTLVTxEnable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_CONFIG_SYSTEM_CAPABILITIES_T_L_V_TX_ENABLE, getPortConfigSystemCapabilitiesTLVTxEnable());
	return true;
}

Array<Boolean> UNIX_LLDPEthernetPort::getPortConfigSystemCapabilitiesTLVTxEnable() const
{
	Array<Boolean> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPort::getManAddrConfigDestAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAN_ADDR_CONFIG_DEST_ADDRESS, getManAddrConfigDestAddress());
	return true;
}

Array<String> UNIX_LLDPEthernetPort::getManAddrConfigDestAddress() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPort::getManAddrConfigLocManAddrSubtype(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAN_ADDR_CONFIG_LOC_MAN_ADDR_SUBTYPE, getManAddrConfigLocManAddrSubtype());
	return true;
}

Array<Uint16> UNIX_LLDPEthernetPort::getManAddrConfigLocManAddrSubtype() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPort::getManAddrConfigLocManAddr(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAN_ADDR_CONFIG_LOC_MAN_ADDR, getManAddrConfigLocManAddr());
	return true;
}

Array<String> UNIX_LLDPEthernetPort::getManAddrConfigLocManAddr() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPort::getManAddrConfigTxEnable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAN_ADDR_CONFIG_TX_ENABLE, getManAddrConfigTxEnable());
	return true;
}

Array<Boolean> UNIX_LLDPEthernetPort::getManAddrConfigTxEnable() const
{
	Array<Boolean> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPort::getLocChassisIdSubtype(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_CHASSIS_ID_SUBTYPE, getLocChassisIdSubtype());
	return true;
}

Uint8 UNIX_LLDPEthernetPort::getLocChassisIdSubtype() const
{
	return Uint8(0);
}

Boolean UNIX_LLDPEthernetPort::getLocChassisId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_CHASSIS_ID, getLocChassisId());
	return true;
}

String UNIX_LLDPEthernetPort::getLocChassisId() const
{
	return String ("");
}

Boolean UNIX_LLDPEthernetPort::getLocSysName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_SYS_NAME, getLocSysName());
	return true;
}

String UNIX_LLDPEthernetPort::getLocSysName() const
{
	return String ("");
}

Boolean UNIX_LLDPEthernetPort::getLocSysDesc(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_SYS_DESC, getLocSysDesc());
	return true;
}

String UNIX_LLDPEthernetPort::getLocSysDesc() const
{
	return String ("");
}

Boolean UNIX_LLDPEthernetPort::getLocSysCapSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_SYS_CAP_SUPPORTED, getLocSysCapSupported());
	return true;
}

Array<Uint8> UNIX_LLDPEthernetPort::getLocSysCapSupported() const
{
	Array<Uint8> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPort::getLocSysCapEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_SYS_CAP_ENABLED, getLocSysCapEnabled());
	return true;
}

Array<Boolean> UNIX_LLDPEthernetPort::getLocSysCapEnabled() const
{
	Array<Boolean> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPort::getLocPortIdSubtype(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_PORT_ID_SUBTYPE, getLocPortIdSubtype());
	return true;
}

Uint8 UNIX_LLDPEthernetPort::getLocPortIdSubtype() const
{
	return Uint8(0);
}

Boolean UNIX_LLDPEthernetPort::getLocPortID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_PORT_ID, getLocPortID());
	return true;
}

String UNIX_LLDPEthernetPort::getLocPortID() const
{
	return String ("");
}

Boolean UNIX_LLDPEthernetPort::getLocPortDesc(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_PORT_DESC, getLocPortDesc());
	return true;
}

String UNIX_LLDPEthernetPort::getLocPortDesc() const
{
	return String ("");
}

Boolean UNIX_LLDPEthernetPort::getLocTxSystemValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_TX_SYSTEM_VALUE, getLocTxSystemValue());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getLocTxSystemValue() const
{
	return Uint16(0);
}

Boolean UNIX_LLDPEthernetPort::getRemTxSystemValueEcho(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_TX_SYSTEM_VALUE_ECHO, getRemTxSystemValueEcho());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getRemTxSystemValueEcho() const
{
	return Uint16(0);
}

Boolean UNIX_LLDPEthernetPort::getLocRxSystemValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_RX_SYSTEM_VALUE, getLocRxSystemValue());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getLocRxSystemValue() const
{
	return Uint16(0);
}

Boolean UNIX_LLDPEthernetPort::getRemRxSystemValueEcho(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_RX_SYSTEM_VALUE_ECHO, getRemRxSystemValueEcho());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getRemRxSystemValueEcho() const
{
	return Uint16(0);
}

Boolean UNIX_LLDPEthernetPort::getLocFbSystemValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_FB_SYSTEM_VALUE, getLocFbSystemValue());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getLocFbSystemValue() const
{
	return Uint16(0);
}

Boolean UNIX_LLDPEthernetPort::getRemTxSystemValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_TX_SYSTEM_VALUE, getRemTxSystemValue());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getRemTxSystemValue() const
{
	return Uint16(0);
}

Boolean UNIX_LLDPEthernetPort::getLocTxSystemValueEcho(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_TX_SYSTEM_VALUE_ECHO, getLocTxSystemValueEcho());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getLocTxSystemValueEcho() const
{
	return Uint16(0);
}

Boolean UNIX_LLDPEthernetPort::getRemRxSystemValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_RX_SYSTEM_VALUE, getRemRxSystemValue());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getRemRxSystemValue() const
{
	return Uint16(0);
}

Boolean UNIX_LLDPEthernetPort::getLocRxSystemValueEcho(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_RX_SYSTEM_VALUE_ECHO, getLocRxSystemValueEcho());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getLocRxSystemValueEcho() const
{
	return Uint16(0);
}

Boolean UNIX_LLDPEthernetPort::getLocResolvedTxSystemValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_RESOLVED_TX_SYSTEM_VALUE, getLocResolvedTxSystemValue());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getLocResolvedTxSystemValue() const
{
	return Uint16(0);
}

Boolean UNIX_LLDPEthernetPort::getLocResolvedRxSystemValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_RESOLVED_RX_SYSTEM_VALUE, getLocResolvedRxSystemValue());
	return true;
}

Uint16 UNIX_LLDPEthernetPort::getLocResolvedRxSystemValue() const
{
	return Uint16(0);
}

Boolean UNIX_LLDPEthernetPort::getMaximumFrameSizeTLVEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_FRAME_SIZE_T_L_V_ENABLED, getMaximumFrameSizeTLVEnabled());
	return true;
}

Boolean UNIX_LLDPEthernetPort::getMaximumFrameSizeTLVEnabled() const
{
	return Boolean(false);
}

Boolean UNIX_LLDPEthernetPort::getLocManAddrSubType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_MAN_ADDR_SUB_TYPE, getLocManAddrSubType());
	return true;
}

Array<Uint16> UNIX_LLDPEthernetPort::getLocManAddrSubType() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPort::getLocManAddr(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_MAN_ADDR, getLocManAddr());
	return true;
}

Array<String> UNIX_LLDPEthernetPort::getLocManAddr() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPort::getLocManAddrIfSubtype(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_MAN_ADDR_IF_SUBTYPE, getLocManAddrIfSubtype());
	return true;
}

Array<Uint16> UNIX_LLDPEthernetPort::getLocManAddrIfSubtype() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPort::getLocManAddrIfId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOC_MAN_ADDR_IF_ID, getLocManAddrIfId());
	return true;
}

Array<Uint32> UNIX_LLDPEthernetPort::getLocManAddrIfId() const
{
	Array<Uint32> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPort::getRemLocalDestMacAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_LOCAL_DEST_MAC_ADDRESS, getRemLocalDestMacAddress());
	return true;
}

Array<String> UNIX_LLDPEthernetPort::getRemLocalDestMacAddress() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPort::getRemManAddrSubType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_MAN_ADDR_SUB_TYPE, getRemManAddrSubType());
	return true;
}

Array<Uint16> UNIX_LLDPEthernetPort::getRemManAddrSubType() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPort::getRemManAddr(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_MAN_ADDR, getRemManAddr());
	return true;
}

Array<String> UNIX_LLDPEthernetPort::getRemManAddr() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPort::getRemManAddrIfSubtype(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_MAN_ADDR_IF_SUBTYPE, getRemManAddrIfSubtype());
	return true;
}

Array<Uint16> UNIX_LLDPEthernetPort::getRemManAddrIfSubtype() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPort::getRemManAddrIfId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_MAN_ADDR_IF_ID, getRemManAddrIfId());
	return true;
}

Array<Uint32> UNIX_LLDPEthernetPort::getRemManAddrIfId() const
{
	Array<Uint32> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPort::getRemChassisIdSubtype(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_CHASSIS_ID_SUBTYPE, getRemChassisIdSubtype());
	return true;
}

Array<Uint8> UNIX_LLDPEthernetPort::getRemChassisIdSubtype() const
{
	Array<Uint8> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPort::getRemChassisId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_CHASSIS_ID, getRemChassisId());
	return true;
}

Array<String> UNIX_LLDPEthernetPort::getRemChassisId() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPort::getRemSysName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_SYS_NAME, getRemSysName());
	return true;
}

Array<String> UNIX_LLDPEthernetPort::getRemSysName() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPort::getRemSysDesc(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_SYS_DESC, getRemSysDesc());
	return true;
}

Array<String> UNIX_LLDPEthernetPort::getRemSysDesc() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPort::getRemSysCapSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_SYS_CAP_SUPPORTED, getRemSysCapSupported());
	return true;
}

Array<Uint8> UNIX_LLDPEthernetPort::getRemSysCapSupported() const
{
	Array<Uint8> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPort::getRemSysCapEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_SYS_CAP_ENABLED, getRemSysCapEnabled());
	return true;
}

Array<Boolean> UNIX_LLDPEthernetPort::getRemSysCapEnabled() const
{
	Array<Boolean> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPort::getRemPortIdSubtype(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_PORT_ID_SUBTYPE, getRemPortIdSubtype());
	return true;
}

Array<Uint8> UNIX_LLDPEthernetPort::getRemPortIdSubtype() const
{
	Array<Uint8> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPort::getRemPortID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_PORT_ID, getRemPortID());
	return true;
}

Array<String> UNIX_LLDPEthernetPort::getRemPortID() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPort::getRemPortDesc(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REM_PORT_DESC, getRemPortDesc());
	return true;
}

Array<String> UNIX_LLDPEthernetPort::getRemPortDesc() const
{
	Array<String> as;
	

	return as;

}



Boolean UNIX_LLDPEthernetPort::initialize()
{
	return false;
}

Boolean UNIX_LLDPEthernetPort::load(int &pIndex)
{
	return false;
}

Boolean UNIX_LLDPEthernetPort::finalize()
{
	return false;
}

Boolean UNIX_LLDPEthernetPort::find(Array<CIMKeyBinding> &kbArray)
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
