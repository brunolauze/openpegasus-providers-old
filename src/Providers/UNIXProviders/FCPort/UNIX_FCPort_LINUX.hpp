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


UNIX_FCPort::UNIX_FCPort(void)
{
}

UNIX_FCPort::~UNIX_FCPort(void)
{
}


Boolean UNIX_FCPort::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FCPort::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_FCPort::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FCPort::getCaption() const
{
	return String ("");
}

Boolean UNIX_FCPort::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FCPort::getDescription() const
{
	return String ("");
}

Boolean UNIX_FCPort::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FCPort::getElementName() const
{
	return String("FCPort");
}

Boolean UNIX_FCPort::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_FCPort::getInstallDate() const
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

Boolean UNIX_FCPort::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_FCPort::getName() const
{
	return String ("");
}

Boolean UNIX_FCPort::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_FCPort::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_FCPort::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_FCPort::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_FCPort::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_FCPort::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_FCPort::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_FCPort::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_FCPort::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_FCPort::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_FCPort::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_FCPort::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_FCPort::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_FCPort::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_FCPort::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_FCPort::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_FCPort::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_FCPort::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_FCPort::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_FCPort::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_FCPort::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_FCPort::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_FCPort::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_FCPort::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_FCPort::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_FCPort::getTimeOfLastStateChange() const
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

Boolean UNIX_FCPort::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_FCPort::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_FCPort::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_FCPort::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_FCPort::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_FCPort::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_FCPort::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_FCPort::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_FCPort::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_FCPort::getCreationClassName() const
{
	return String("UNIX_FCPort");
}

Boolean UNIX_FCPort::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_FCPort::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_FCPort::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_FCPort::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_FCPort::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_FCPort::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_FCPort::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_FCPort::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_FCPort::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_FCPort::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_FCPort::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_FCPort::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_FCPort::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_FCPort::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_FCPort::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_FCPort::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_FCPort::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_FCPort::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_FCPort::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_FCPort::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_FCPort::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_FCPort::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_FCPort::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_FCPort::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_FCPort::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_FCPort::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_FCPort::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_FCPort::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_FCPort::getSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPEED, getSpeed());
	return true;
}

Uint64 UNIX_FCPort::getSpeed() const
{
	return Uint64(0);
}

Boolean UNIX_FCPort::getMaxSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_SPEED, getMaxSpeed());
	return true;
}

Uint64 UNIX_FCPort::getMaxSpeed() const
{
	return Uint64(0);
}

Boolean UNIX_FCPort::getRequestedSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_SPEED, getRequestedSpeed());
	return true;
}

Uint64 UNIX_FCPort::getRequestedSpeed() const
{
	return Uint64(0);
}

Boolean UNIX_FCPort::getUsageRestriction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USAGE_RESTRICTION, getUsageRestriction());
	return true;
}

Uint16 UNIX_FCPort::getUsageRestriction() const
{
	return Uint16(0);
}

Boolean UNIX_FCPort::getPortType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_TYPE, getPortType());
	return true;
}

Uint16 UNIX_FCPort::getPortType() const
{
	return Uint16(0);
}

Boolean UNIX_FCPort::getOtherPortType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PORT_TYPE, getOtherPortType());
	return true;
}

String UNIX_FCPort::getOtherPortType() const
{
	return String ("");
}

Boolean UNIX_FCPort::getOtherNetworkPortType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NETWORK_PORT_TYPE, getOtherNetworkPortType());
	return true;
}

String UNIX_FCPort::getOtherNetworkPortType() const
{
	return String ("");
}

Boolean UNIX_FCPort::getPortNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_NUMBER, getPortNumber());
	return true;
}

Uint16 UNIX_FCPort::getPortNumber() const
{
	return Uint16(0);
}

Boolean UNIX_FCPort::getLinkTechnology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LINK_TECHNOLOGY, getLinkTechnology());
	return true;
}

Uint16 UNIX_FCPort::getLinkTechnology() const
{
	return Uint16(0);
}

Boolean UNIX_FCPort::getOtherLinkTechnology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LINK_TECHNOLOGY, getOtherLinkTechnology());
	return true;
}

String UNIX_FCPort::getOtherLinkTechnology() const
{
	return String ("");
}

Boolean UNIX_FCPort::getPermanentAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERMANENT_ADDRESS, getPermanentAddress());
	return true;
}

String UNIX_FCPort::getPermanentAddress() const
{
	return String ("");
}

Boolean UNIX_FCPort::getNetworkAddresses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NETWORK_ADDRESSES, getNetworkAddresses());
	return true;
}

Array<String> UNIX_FCPort::getNetworkAddresses() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_FCPort::getFullDuplex(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FULL_DUPLEX, getFullDuplex());
	return true;
}

Boolean UNIX_FCPort::getFullDuplex() const
{
	return Boolean(false);
}

Boolean UNIX_FCPort::getAutoSense(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTO_SENSE, getAutoSense());
	return true;
}

Boolean UNIX_FCPort::getAutoSense() const
{
	return Boolean(false);
}

Boolean UNIX_FCPort::getSupportedMaximumTransmissionUnit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_MAXIMUM_TRANSMISSION_UNIT, getSupportedMaximumTransmissionUnit());
	return true;
}

Uint64 UNIX_FCPort::getSupportedMaximumTransmissionUnit() const
{
	return Uint64(0);
}

Boolean UNIX_FCPort::getActiveMaximumTransmissionUnit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTIVE_MAXIMUM_TRANSMISSION_UNIT, getActiveMaximumTransmissionUnit());
	return true;
}

Uint64 UNIX_FCPort::getActiveMaximumTransmissionUnit() const
{
	return Uint64(0);
}

Boolean UNIX_FCPort::getSupportedCOS(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_C_OS, getSupportedCOS());
	return true;
}

Array<Uint16> UNIX_FCPort::getSupportedCOS() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_FCPort::getActiveCOS(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTIVE_C_OS, getActiveCOS());
	return true;
}

Array<Uint16> UNIX_FCPort::getActiveCOS() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_FCPort::getSupportedFC4Types(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_F_C_4_TYPES, getSupportedFC4Types());
	return true;
}

Array<Uint16> UNIX_FCPort::getSupportedFC4Types() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_FCPort::getActiveFC4Types(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTIVE_F_C_4_TYPES, getActiveFC4Types());
	return true;
}

Array<Uint16> UNIX_FCPort::getActiveFC4Types() const
{
	Array<Uint16> as;
	

	return as;

}



Boolean UNIX_FCPort::initialize()
{
	return false;
}

Boolean UNIX_FCPort::load(int &pIndex)
{
	return false;
}

Boolean UNIX_FCPort::finalize()
{
	return false;
}

Boolean UNIX_FCPort::find(Array<CIMKeyBinding> &kbArray)
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
