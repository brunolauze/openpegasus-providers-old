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


UNIX_FibreChannelAdapter::UNIX_FibreChannelAdapter(void)
{
}

UNIX_FibreChannelAdapter::~UNIX_FibreChannelAdapter(void)
{
}


Boolean UNIX_FibreChannelAdapter::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FibreChannelAdapter::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_FibreChannelAdapter::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FibreChannelAdapter::getCaption() const
{
	return String ("");
}

Boolean UNIX_FibreChannelAdapter::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FibreChannelAdapter::getDescription() const
{
	return String ("");
}

Boolean UNIX_FibreChannelAdapter::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FibreChannelAdapter::getElementName() const
{
	return String("FibreChannelAdapter");
}

Boolean UNIX_FibreChannelAdapter::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_FibreChannelAdapter::getInstallDate() const
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

Boolean UNIX_FibreChannelAdapter::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_FibreChannelAdapter::getName() const
{
	return String ("");
}

Boolean UNIX_FibreChannelAdapter::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_FibreChannelAdapter::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_FibreChannelAdapter::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_FibreChannelAdapter::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_FibreChannelAdapter::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_FibreChannelAdapter::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_FibreChannelAdapter::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_FibreChannelAdapter::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_FibreChannelAdapter::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_FibreChannelAdapter::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_FibreChannelAdapter::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_FibreChannelAdapter::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_FibreChannelAdapter::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_FibreChannelAdapter::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_FibreChannelAdapter::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_FibreChannelAdapter::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_FibreChannelAdapter::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_FibreChannelAdapter::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_FibreChannelAdapter::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_FibreChannelAdapter::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_FibreChannelAdapter::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_FibreChannelAdapter::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_FibreChannelAdapter::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_FibreChannelAdapter::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_FibreChannelAdapter::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_FibreChannelAdapter::getTimeOfLastStateChange() const
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

Boolean UNIX_FibreChannelAdapter::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_FibreChannelAdapter::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_FibreChannelAdapter::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_FibreChannelAdapter::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_FibreChannelAdapter::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_FibreChannelAdapter::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_FibreChannelAdapter::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_FibreChannelAdapter::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_FibreChannelAdapter::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_FibreChannelAdapter::getCreationClassName() const
{
	return String("UNIX_FibreChannelAdapter");
}

Boolean UNIX_FibreChannelAdapter::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_FibreChannelAdapter::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_FibreChannelAdapter::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_FibreChannelAdapter::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_FibreChannelAdapter::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_FibreChannelAdapter::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_FibreChannelAdapter::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_FibreChannelAdapter::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_FibreChannelAdapter::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_FibreChannelAdapter::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_FibreChannelAdapter::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_FibreChannelAdapter::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_FibreChannelAdapter::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_FibreChannelAdapter::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_FibreChannelAdapter::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_FibreChannelAdapter::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_FibreChannelAdapter::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_FibreChannelAdapter::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_FibreChannelAdapter::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_FibreChannelAdapter::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_FibreChannelAdapter::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_FibreChannelAdapter::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_FibreChannelAdapter::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_FibreChannelAdapter::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_FibreChannelAdapter::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_FibreChannelAdapter::getPermanentAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERMANENT_ADDRESS, getPermanentAddress());
	return true;
}

String UNIX_FibreChannelAdapter::getPermanentAddress() const
{
	return String ("");
}

Boolean UNIX_FibreChannelAdapter::getNetworkAddresses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NETWORK_ADDRESSES, getNetworkAddresses());
	return true;
}

Array<String> UNIX_FibreChannelAdapter::getNetworkAddresses() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_FibreChannelAdapter::getSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPEED, getSpeed());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getSpeed() const
{
	return Uint64(0);
}

Boolean UNIX_FibreChannelAdapter::getMaxSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_SPEED, getMaxSpeed());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getMaxSpeed() const
{
	return Uint64(0);
}

Boolean UNIX_FibreChannelAdapter::getFullDuplex(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FULL_DUPLEX, getFullDuplex());
	return true;
}

Boolean UNIX_FibreChannelAdapter::getFullDuplex() const
{
	return Boolean(false);
}

Boolean UNIX_FibreChannelAdapter::getAutoSense(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTO_SENSE, getAutoSense());
	return true;
}

Boolean UNIX_FibreChannelAdapter::getAutoSense() const
{
	return Boolean(false);
}

Boolean UNIX_FibreChannelAdapter::getOctetsTransmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OCTETS_TRANSMITTED, getOctetsTransmitted());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getOctetsTransmitted() const
{
	return Uint64(0);
}

Boolean UNIX_FibreChannelAdapter::getOctetsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OCTETS_RECEIVED, getOctetsReceived());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getOctetsReceived() const
{
	return Uint64(0);
}

Boolean UNIX_FibreChannelAdapter::getMaxFrameSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_FRAME_SIZE, getMaxFrameSize());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getMaxFrameSize() const
{
	return Uint64(0);
}

Boolean UNIX_FibreChannelAdapter::getSupportedCOS(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_C_OS, getSupportedCOS());
	return true;
}

Array<Uint16> UNIX_FibreChannelAdapter::getSupportedCOS() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_FibreChannelAdapter::getFC4TypesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_F_C_4_TYPES_SUPPORTED, getFC4TypesSupported());
	return true;
}

Array<Uint16> UNIX_FibreChannelAdapter::getFC4TypesSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_FibreChannelAdapter::getFC4VendorUniqueTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_F_C_4_VENDOR_UNIQUE_TYPES, getFC4VendorUniqueTypes());
	return true;
}

Array<Uint16> UNIX_FibreChannelAdapter::getFC4VendorUniqueTypes() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_FibreChannelAdapter::getCurrentFC4Types(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_F_C_4_TYPES, getCurrentFC4Types());
	return true;
}

Array<Uint16> UNIX_FibreChannelAdapter::getCurrentFC4Types() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_FibreChannelAdapter::getCurrentFC4VendorTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_F_C_4_VENDOR_TYPES, getCurrentFC4VendorTypes());
	return true;
}

Array<Uint16> UNIX_FibreChannelAdapter::getCurrentFC4VendorTypes() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_FibreChannelAdapter::getCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITIES, getCapabilities());
	return true;
}

Array<Uint16> UNIX_FibreChannelAdapter::getCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_FibreChannelAdapter::getCapabilityDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITY_DESCRIPTIONS, getCapabilityDescriptions());
	return true;
}

Array<String> UNIX_FibreChannelAdapter::getCapabilityDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_FibreChannelAdapter::getReceiveBufferErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECEIVE_BUFFER_ERRORS, getReceiveBufferErrors());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getReceiveBufferErrors() const
{
	return Uint64(0);
}

Boolean UNIX_FibreChannelAdapter::getReceiveEndErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECEIVE_END_ERRORS, getReceiveEndErrors());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getReceiveEndErrors() const
{
	return Uint64(0);
}

Boolean UNIX_FibreChannelAdapter::getResourceAllocationTimeout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESOURCE_ALLOCATION_TIMEOUT, getResourceAllocationTimeout());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getResourceAllocationTimeout() const
{
	return Uint64(0);
}

Boolean UNIX_FibreChannelAdapter::getErrorDetectTimeout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DETECT_TIMEOUT, getErrorDetectTimeout());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getErrorDetectTimeout() const
{
	return Uint64(0);
}

Boolean UNIX_FibreChannelAdapter::getClass1SequencesSent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_1_SEQUENCES_SENT, getClass1SequencesSent());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getClass1SequencesSent() const
{
	return Uint64(0);
}

Boolean UNIX_FibreChannelAdapter::getClass2SequencesSent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_2_SEQUENCES_SENT, getClass2SequencesSent());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getClass2SequencesSent() const
{
	return Uint64(0);
}

Boolean UNIX_FibreChannelAdapter::getClass3SequencesSent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_3_SEQUENCES_SENT, getClass3SequencesSent());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getClass3SequencesSent() const
{
	return Uint64(0);
}

Boolean UNIX_FibreChannelAdapter::getClass4SequencesSent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_4_SEQUENCES_SENT, getClass4SequencesSent());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getClass4SequencesSent() const
{
	return Uint64(0);
}

Boolean UNIX_FibreChannelAdapter::getClass2OctetsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_2_OCTETS_RECEIVED, getClass2OctetsReceived());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getClass2OctetsReceived() const
{
	return Uint64(0);
}

Boolean UNIX_FibreChannelAdapter::getClass2OctetsTransmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_2_OCTETS_TRANSMITTED, getClass2OctetsTransmitted());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getClass2OctetsTransmitted() const
{
	return Uint64(0);
}

Boolean UNIX_FibreChannelAdapter::getClass2FramesReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_2_FRAMES_RECEIVED, getClass2FramesReceived());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getClass2FramesReceived() const
{
	return Uint64(0);
}

Boolean UNIX_FibreChannelAdapter::getClass2FramesTransmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_2_FRAMES_TRANSMITTED, getClass2FramesTransmitted());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getClass2FramesTransmitted() const
{
	return Uint64(0);
}

Boolean UNIX_FibreChannelAdapter::getClass2DiscardFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_2_DISCARD_FRAMES, getClass2DiscardFrames());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getClass2DiscardFrames() const
{
	return Uint64(0);
}

Boolean UNIX_FibreChannelAdapter::getClass3OctetsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_3_OCTETS_RECEIVED, getClass3OctetsReceived());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getClass3OctetsReceived() const
{
	return Uint64(0);
}

Boolean UNIX_FibreChannelAdapter::getClass3OctetsTransmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_3_OCTETS_TRANSMITTED, getClass3OctetsTransmitted());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getClass3OctetsTransmitted() const
{
	return Uint64(0);
}

Boolean UNIX_FibreChannelAdapter::getClass3FramesReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_3_FRAMES_RECEIVED, getClass3FramesReceived());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getClass3FramesReceived() const
{
	return Uint64(0);
}

Boolean UNIX_FibreChannelAdapter::getClass3FramesTransmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_3_FRAMES_TRANSMITTED, getClass3FramesTransmitted());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getClass3FramesTransmitted() const
{
	return Uint64(0);
}

Boolean UNIX_FibreChannelAdapter::getClass3DiscardFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_3_DISCARD_FRAMES, getClass3DiscardFrames());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getClass3DiscardFrames() const
{
	return Uint64(0);
}

Boolean UNIX_FibreChannelAdapter::getParityErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARITY_ERRORS, getParityErrors());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getParityErrors() const
{
	return Uint64(0);
}

Boolean UNIX_FibreChannelAdapter::getFrameTimeouts(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FRAME_TIMEOUTS, getFrameTimeouts());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getFrameTimeouts() const
{
	return Uint64(0);
}

Boolean UNIX_FibreChannelAdapter::getBufferCreditErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUFFER_CREDIT_ERRORS, getBufferCreditErrors());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getBufferCreditErrors() const
{
	return Uint64(0);
}

Boolean UNIX_FibreChannelAdapter::getEndCreditErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_END_CREDIT_ERRORS, getEndCreditErrors());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getEndCreditErrors() const
{
	return Uint64(0);
}

Boolean UNIX_FibreChannelAdapter::getOutOfOrderFramesReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUT_OF_ORDER_FRAMES_RECEIVED, getOutOfOrderFramesReceived());
	return true;
}

Uint64 UNIX_FibreChannelAdapter::getOutOfOrderFramesReceived() const
{
	return Uint64(0);
}



Boolean UNIX_FibreChannelAdapter::initialize()
{
	return false;
}

Boolean UNIX_FibreChannelAdapter::load(int &pIndex)
{
	return false;
}

Boolean UNIX_FibreChannelAdapter::finalize()
{
	return false;
}

Boolean UNIX_FibreChannelAdapter::find(Array<CIMKeyBinding> &kbArray)
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
