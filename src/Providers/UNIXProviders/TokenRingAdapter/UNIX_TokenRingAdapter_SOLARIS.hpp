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


UNIX_TokenRingAdapter::UNIX_TokenRingAdapter(void)
{
}

UNIX_TokenRingAdapter::~UNIX_TokenRingAdapter(void)
{
}


Boolean UNIX_TokenRingAdapter::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_TokenRingAdapter::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_TokenRingAdapter::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_TokenRingAdapter::getCaption() const
{
	return String ("");
}

Boolean UNIX_TokenRingAdapter::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_TokenRingAdapter::getDescription() const
{
	return String ("");
}

Boolean UNIX_TokenRingAdapter::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_TokenRingAdapter::getElementName() const
{
	return String("TokenRingAdapter");
}

Boolean UNIX_TokenRingAdapter::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_TokenRingAdapter::getInstallDate() const
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

Boolean UNIX_TokenRingAdapter::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_TokenRingAdapter::getName() const
{
	return String ("");
}

Boolean UNIX_TokenRingAdapter::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_TokenRingAdapter::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_TokenRingAdapter::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_TokenRingAdapter::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_TokenRingAdapter::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_TokenRingAdapter::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_TokenRingAdapter::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_TokenRingAdapter::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_TokenRingAdapter::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_TokenRingAdapter::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_TokenRingAdapter::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_TokenRingAdapter::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_TokenRingAdapter::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_TokenRingAdapter::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_TokenRingAdapter::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_TokenRingAdapter::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_TokenRingAdapter::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_TokenRingAdapter::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_TokenRingAdapter::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_TokenRingAdapter::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_TokenRingAdapter::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_TokenRingAdapter::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_TokenRingAdapter::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_TokenRingAdapter::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_TokenRingAdapter::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_TokenRingAdapter::getTimeOfLastStateChange() const
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

Boolean UNIX_TokenRingAdapter::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_TokenRingAdapter::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_TokenRingAdapter::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_TokenRingAdapter::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_TokenRingAdapter::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_TokenRingAdapter::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_TokenRingAdapter::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_TokenRingAdapter::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_TokenRingAdapter::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_TokenRingAdapter::getCreationClassName() const
{
	return String("UNIX_TokenRingAdapter");
}

Boolean UNIX_TokenRingAdapter::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_TokenRingAdapter::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_TokenRingAdapter::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_TokenRingAdapter::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_TokenRingAdapter::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_TokenRingAdapter::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_TokenRingAdapter::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_TokenRingAdapter::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_TokenRingAdapter::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_TokenRingAdapter::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_TokenRingAdapter::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_TokenRingAdapter::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_TokenRingAdapter::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_TokenRingAdapter::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_TokenRingAdapter::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_TokenRingAdapter::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_TokenRingAdapter::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_TokenRingAdapter::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_TokenRingAdapter::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_TokenRingAdapter::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_TokenRingAdapter::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_TokenRingAdapter::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_TokenRingAdapter::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_TokenRingAdapter::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_TokenRingAdapter::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_TokenRingAdapter::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_TokenRingAdapter::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_TokenRingAdapter::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_TokenRingAdapter::getPermanentAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERMANENT_ADDRESS, getPermanentAddress());
	return true;
}

String UNIX_TokenRingAdapter::getPermanentAddress() const
{
	return String ("");
}

Boolean UNIX_TokenRingAdapter::getNetworkAddresses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NETWORK_ADDRESSES, getNetworkAddresses());
	return true;
}

Array<String> UNIX_TokenRingAdapter::getNetworkAddresses() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_TokenRingAdapter::getSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPEED, getSpeed());
	return true;
}

Uint64 UNIX_TokenRingAdapter::getSpeed() const
{
	return Uint64(0);
}

Boolean UNIX_TokenRingAdapter::getMaxSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_SPEED, getMaxSpeed());
	return true;
}

Uint64 UNIX_TokenRingAdapter::getMaxSpeed() const
{
	return Uint64(0);
}

Boolean UNIX_TokenRingAdapter::getFullDuplex(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FULL_DUPLEX, getFullDuplex());
	return true;
}

Boolean UNIX_TokenRingAdapter::getFullDuplex() const
{
	return Boolean(false);
}

Boolean UNIX_TokenRingAdapter::getAutoSense(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTO_SENSE, getAutoSense());
	return true;
}

Boolean UNIX_TokenRingAdapter::getAutoSense() const
{
	return Boolean(false);
}

Boolean UNIX_TokenRingAdapter::getOctetsTransmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OCTETS_TRANSMITTED, getOctetsTransmitted());
	return true;
}

Uint64 UNIX_TokenRingAdapter::getOctetsTransmitted() const
{
	return Uint64(0);
}

Boolean UNIX_TokenRingAdapter::getOctetsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OCTETS_RECEIVED, getOctetsReceived());
	return true;
}

Uint64 UNIX_TokenRingAdapter::getOctetsReceived() const
{
	return Uint64(0);
}

Boolean UNIX_TokenRingAdapter::getMaxDataSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_DATA_SIZE, getMaxDataSize());
	return true;
}

Uint32 UNIX_TokenRingAdapter::getMaxDataSize() const
{
	return Uint32(0);
}

Boolean UNIX_TokenRingAdapter::getCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITIES, getCapabilities());
	return true;
}

Array<Uint16> UNIX_TokenRingAdapter::getCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_TokenRingAdapter::getCapabilityDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITY_DESCRIPTIONS, getCapabilityDescriptions());
	return true;
}

Array<String> UNIX_TokenRingAdapter::getCapabilityDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_TokenRingAdapter::getEnabledCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_CAPABILITIES, getEnabledCapabilities());
	return true;
}

Array<Uint16> UNIX_TokenRingAdapter::getEnabledCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_TokenRingAdapter::getRingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RING_STATUS, getRingStatus());
	return true;
}

Uint32 UNIX_TokenRingAdapter::getRingStatus() const
{
	return Uint32(0);
}

Boolean UNIX_TokenRingAdapter::getRingState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RING_STATE, getRingState());
	return true;
}

Uint16 UNIX_TokenRingAdapter::getRingState() const
{
	return Uint16(0);
}

Boolean UNIX_TokenRingAdapter::getRingOpenStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RING_OPEN_STATUS, getRingOpenStatus());
	return true;
}

Uint16 UNIX_TokenRingAdapter::getRingOpenStatus() const
{
	return Uint16(0);
}

Boolean UNIX_TokenRingAdapter::getRingSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RING_SPEED, getRingSpeed());
	return true;
}

Uint16 UNIX_TokenRingAdapter::getRingSpeed() const
{
	return Uint16(0);
}

Boolean UNIX_TokenRingAdapter::getBurstErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BURST_ERRORS, getBurstErrors());
	return true;
}

Uint32 UNIX_TokenRingAdapter::getBurstErrors() const
{
	return Uint32(0);
}

Boolean UNIX_TokenRingAdapter::getACErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_A_C_ERRORS, getACErrors());
	return true;
}

Uint32 UNIX_TokenRingAdapter::getACErrors() const
{
	return Uint32(0);
}

Boolean UNIX_TokenRingAdapter::getAbortTransErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ABORT_TRANS_ERRORS, getAbortTransErrors());
	return true;
}

Uint32 UNIX_TokenRingAdapter::getAbortTransErrors() const
{
	return Uint32(0);
}

Boolean UNIX_TokenRingAdapter::getInternalErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERNAL_ERRORS, getInternalErrors());
	return true;
}

Uint32 UNIX_TokenRingAdapter::getInternalErrors() const
{
	return Uint32(0);
}

Boolean UNIX_TokenRingAdapter::getLostFrameErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOST_FRAME_ERRORS, getLostFrameErrors());
	return true;
}

Uint32 UNIX_TokenRingAdapter::getLostFrameErrors() const
{
	return Uint32(0);
}

Boolean UNIX_TokenRingAdapter::getReceiveCongestions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECEIVE_CONGESTIONS, getReceiveCongestions());
	return true;
}

Uint32 UNIX_TokenRingAdapter::getReceiveCongestions() const
{
	return Uint32(0);
}

Boolean UNIX_TokenRingAdapter::getFrameCopiedErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FRAME_COPIED_ERRORS, getFrameCopiedErrors());
	return true;
}

Uint32 UNIX_TokenRingAdapter::getFrameCopiedErrors() const
{
	return Uint32(0);
}

Boolean UNIX_TokenRingAdapter::getTokenErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOKEN_ERRORS, getTokenErrors());
	return true;
}

Uint32 UNIX_TokenRingAdapter::getTokenErrors() const
{
	return Uint32(0);
}

Boolean UNIX_TokenRingAdapter::getSoftErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOFT_ERRORS, getSoftErrors());
	return true;
}

Uint32 UNIX_TokenRingAdapter::getSoftErrors() const
{
	return Uint32(0);
}

Boolean UNIX_TokenRingAdapter::getHardErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HARD_ERRORS, getHardErrors());
	return true;
}

Uint32 UNIX_TokenRingAdapter::getHardErrors() const
{
	return Uint32(0);
}

Boolean UNIX_TokenRingAdapter::getSignalLossCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIGNAL_LOSS_COUNT, getSignalLossCount());
	return true;
}

Uint32 UNIX_TokenRingAdapter::getSignalLossCount() const
{
	return Uint32(0);
}

Boolean UNIX_TokenRingAdapter::getTransmittedBeacons(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSMITTED_BEACONS, getTransmittedBeacons());
	return true;
}

Uint32 UNIX_TokenRingAdapter::getTransmittedBeacons() const
{
	return Uint32(0);
}

Boolean UNIX_TokenRingAdapter::getRecoverys(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECOVERYS, getRecoverys());
	return true;
}

Uint32 UNIX_TokenRingAdapter::getRecoverys() const
{
	return Uint32(0);
}

Boolean UNIX_TokenRingAdapter::getLobeWires(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOBE_WIRES, getLobeWires());
	return true;
}

Uint32 UNIX_TokenRingAdapter::getLobeWires() const
{
	return Uint32(0);
}

Boolean UNIX_TokenRingAdapter::getRemoves(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOVES, getRemoves());
	return true;
}

Uint32 UNIX_TokenRingAdapter::getRemoves() const
{
	return Uint32(0);
}

Boolean UNIX_TokenRingAdapter::getSingles(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SINGLES, getSingles());
	return true;
}

Uint32 UNIX_TokenRingAdapter::getSingles() const
{
	return Uint32(0);
}

Boolean UNIX_TokenRingAdapter::getFrequencyErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FREQUENCY_ERRORS, getFrequencyErrors());
	return true;
}

Uint32 UNIX_TokenRingAdapter::getFrequencyErrors() const
{
	return Uint32(0);
}



Boolean UNIX_TokenRingAdapter::initialize()
{
	return false;
}

Boolean UNIX_TokenRingAdapter::load(int &pIndex)
{
	return false;
}

Boolean UNIX_TokenRingAdapter::finalize()
{
	return false;
}

Boolean UNIX_TokenRingAdapter::find(Array<CIMKeyBinding> &kbArray)
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
