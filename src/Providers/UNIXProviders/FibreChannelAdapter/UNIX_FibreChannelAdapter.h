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

#ifndef __UNIX_FIBRECHANNELADAPTER_H
#define __UNIX_FIBRECHANNELADAPTER_H


#include "CIM_NetworkAdapter.h"

#include "UNIX_FibreChannelAdapterDeps.h"


#define PROPERTY_MAX_FRAME_SIZE				"MaxFrameSize"
#define PROPERTY_SUPPORTED_C_OS				"SupportedCOS"
#define PROPERTY_F_C_4_TYPES_SUPPORTED				"FC4TypesSupported"
#define PROPERTY_F_C_4_VENDOR_UNIQUE_TYPES				"FC4VendorUniqueTypes"
#define PROPERTY_CURRENT_F_C_4_TYPES				"CurrentFC4Types"
#define PROPERTY_CURRENT_F_C_4_VENDOR_TYPES				"CurrentFC4VendorTypes"
#define PROPERTY_CAPABILITIES				"Capabilities"
#define PROPERTY_CAPABILITY_DESCRIPTIONS				"CapabilityDescriptions"
#define PROPERTY_RECEIVE_BUFFER_ERRORS				"ReceiveBufferErrors"
#define PROPERTY_RECEIVE_END_ERRORS				"ReceiveEndErrors"
#define PROPERTY_RESOURCE_ALLOCATION_TIMEOUT				"ResourceAllocationTimeout"
#define PROPERTY_ERROR_DETECT_TIMEOUT				"ErrorDetectTimeout"
#define PROPERTY_CLASS_1_SEQUENCES_SENT				"Class1SequencesSent"
#define PROPERTY_CLASS_2_SEQUENCES_SENT				"Class2SequencesSent"
#define PROPERTY_CLASS_3_SEQUENCES_SENT				"Class3SequencesSent"
#define PROPERTY_CLASS_4_SEQUENCES_SENT				"Class4SequencesSent"
#define PROPERTY_CLASS_2_OCTETS_RECEIVED				"Class2OctetsReceived"
#define PROPERTY_CLASS_2_OCTETS_TRANSMITTED				"Class2OctetsTransmitted"
#define PROPERTY_CLASS_2_FRAMES_RECEIVED				"Class2FramesReceived"
#define PROPERTY_CLASS_2_FRAMES_TRANSMITTED				"Class2FramesTransmitted"
#define PROPERTY_CLASS_2_DISCARD_FRAMES				"Class2DiscardFrames"
#define PROPERTY_CLASS_3_OCTETS_RECEIVED				"Class3OctetsReceived"
#define PROPERTY_CLASS_3_OCTETS_TRANSMITTED				"Class3OctetsTransmitted"
#define PROPERTY_CLASS_3_FRAMES_RECEIVED				"Class3FramesReceived"
#define PROPERTY_CLASS_3_FRAMES_TRANSMITTED				"Class3FramesTransmitted"
#define PROPERTY_CLASS_3_DISCARD_FRAMES				"Class3DiscardFrames"
#define PROPERTY_PARITY_ERRORS				"ParityErrors"
#define PROPERTY_FRAME_TIMEOUTS				"FrameTimeouts"
#define PROPERTY_BUFFER_CREDIT_ERRORS				"BufferCreditErrors"
#define PROPERTY_END_CREDIT_ERRORS				"EndCreditErrors"
#define PROPERTY_OUT_OF_ORDER_FRAMES_RECEIVED				"OutOfOrderFramesReceived"


class UNIX_FibreChannelAdapter :
	public CIM_NetworkAdapter
{
public:

	UNIX_FibreChannelAdapter();
	~UNIX_FibreChannelAdapter();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean finalize();
	virtual Boolean find(Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);

	virtual Boolean getInstanceID(CIMProperty&) const;
	virtual String getInstanceID() const;
	virtual Boolean getCaption(CIMProperty&) const;
	virtual String getCaption() const;
	virtual Boolean getDescription(CIMProperty&) const;
	virtual String getDescription() const;
	virtual Boolean getElementName(CIMProperty&) const;
	virtual String getElementName() const;
	virtual Boolean getInstallDate(CIMProperty&) const;
	virtual CIMDateTime getInstallDate() const;
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual Boolean getOperationalStatus(CIMProperty&) const;
	virtual Array<Uint16> getOperationalStatus() const;
	virtual Boolean getStatusDescriptions(CIMProperty&) const;
	virtual Array<String> getStatusDescriptions() const;
	virtual Boolean getStatus(CIMProperty&) const;
	virtual String getStatus() const;
	virtual Boolean getHealthState(CIMProperty&) const;
	virtual Uint16 getHealthState() const;
	virtual Boolean getCommunicationStatus(CIMProperty&) const;
	virtual Uint16 getCommunicationStatus() const;
	virtual Boolean getDetailedStatus(CIMProperty&) const;
	virtual Uint16 getDetailedStatus() const;
	virtual Boolean getOperatingStatus(CIMProperty&) const;
	virtual Uint16 getOperatingStatus() const;
	virtual Boolean getPrimaryStatus(CIMProperty&) const;
	virtual Uint16 getPrimaryStatus() const;
	virtual Boolean getEnabledState(CIMProperty&) const;
	virtual Uint16 getEnabledState() const;
	virtual Boolean getOtherEnabledState(CIMProperty&) const;
	virtual String getOtherEnabledState() const;
	virtual Boolean getRequestedState(CIMProperty&) const;
	virtual Uint16 getRequestedState() const;
	virtual Boolean getEnabledDefault(CIMProperty&) const;
	virtual Uint16 getEnabledDefault() const;
	virtual Boolean getTimeOfLastStateChange(CIMProperty&) const;
	virtual CIMDateTime getTimeOfLastStateChange() const;
	virtual Boolean getAvailableRequestedStates(CIMProperty&) const;
	virtual Array<Uint16> getAvailableRequestedStates() const;
	virtual Boolean getTransitioningToState(CIMProperty&) const;
	virtual Uint16 getTransitioningToState() const;
	virtual Boolean getSystemCreationClassName(CIMProperty&) const;
	virtual String getSystemCreationClassName() const;
	virtual Boolean getSystemName(CIMProperty&) const;
	virtual String getSystemName() const;
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual Boolean getDeviceID(CIMProperty&) const;
	virtual String getDeviceID() const;
	virtual Boolean getPowerManagementSupported(CIMProperty&) const;
	virtual Boolean getPowerManagementSupported() const;
	virtual Boolean getPowerManagementCapabilities(CIMProperty&) const;
	virtual Array<Uint16> getPowerManagementCapabilities() const;
	virtual Boolean getAvailability(CIMProperty&) const;
	virtual Uint16 getAvailability() const;
	virtual Boolean getStatusInfo(CIMProperty&) const;
	virtual Uint16 getStatusInfo() const;
	virtual Boolean getLastErrorCode(CIMProperty&) const;
	virtual Uint32 getLastErrorCode() const;
	virtual Boolean getErrorDescription(CIMProperty&) const;
	virtual String getErrorDescription() const;
	virtual Boolean getErrorCleared(CIMProperty&) const;
	virtual Boolean getErrorCleared() const;
	virtual Boolean getOtherIdentifyingInfo(CIMProperty&) const;
	virtual Array<String> getOtherIdentifyingInfo() const;
	virtual Boolean getPowerOnHours(CIMProperty&) const;
	virtual Uint64 getPowerOnHours() const;
	virtual Boolean getTotalPowerOnHours(CIMProperty&) const;
	virtual Uint64 getTotalPowerOnHours() const;
	virtual Boolean getIdentifyingDescriptions(CIMProperty&) const;
	virtual Array<String> getIdentifyingDescriptions() const;
	virtual Boolean getAdditionalAvailability(CIMProperty&) const;
	virtual Array<Uint16> getAdditionalAvailability() const;
	virtual Boolean getMaxQuiesceTime(CIMProperty&) const;
	virtual Uint64 getMaxQuiesceTime() const;
	virtual Boolean getPermanentAddress(CIMProperty&) const;
	virtual String getPermanentAddress() const;
	virtual Boolean getNetworkAddresses(CIMProperty&) const;
	virtual Array<String> getNetworkAddresses() const;
	virtual Boolean getSpeed(CIMProperty&) const;
	virtual Uint64 getSpeed() const;
	virtual Boolean getMaxSpeed(CIMProperty&) const;
	virtual Uint64 getMaxSpeed() const;
	virtual Boolean getFullDuplex(CIMProperty&) const;
	virtual Boolean getFullDuplex() const;
	virtual Boolean getAutoSense(CIMProperty&) const;
	virtual Boolean getAutoSense() const;
	virtual Boolean getOctetsTransmitted(CIMProperty&) const;
	virtual Uint64 getOctetsTransmitted() const;
	virtual Boolean getOctetsReceived(CIMProperty&) const;
	virtual Uint64 getOctetsReceived() const;
	virtual Boolean getMaxFrameSize(CIMProperty&) const;
	virtual Uint64 getMaxFrameSize() const;
	virtual Boolean getSupportedCOS(CIMProperty&) const;
	virtual Array<Uint16> getSupportedCOS() const;
	virtual Boolean getFC4TypesSupported(CIMProperty&) const;
	virtual Array<Uint16> getFC4TypesSupported() const;
	virtual Boolean getFC4VendorUniqueTypes(CIMProperty&) const;
	virtual Array<Uint16> getFC4VendorUniqueTypes() const;
	virtual Boolean getCurrentFC4Types(CIMProperty&) const;
	virtual Array<Uint16> getCurrentFC4Types() const;
	virtual Boolean getCurrentFC4VendorTypes(CIMProperty&) const;
	virtual Array<Uint16> getCurrentFC4VendorTypes() const;
	virtual Boolean getCapabilities(CIMProperty&) const;
	virtual Array<Uint16> getCapabilities() const;
	virtual Boolean getCapabilityDescriptions(CIMProperty&) const;
	virtual Array<String> getCapabilityDescriptions() const;
	virtual Boolean getReceiveBufferErrors(CIMProperty&) const;
	virtual Uint64 getReceiveBufferErrors() const;
	virtual Boolean getReceiveEndErrors(CIMProperty&) const;
	virtual Uint64 getReceiveEndErrors() const;
	virtual Boolean getResourceAllocationTimeout(CIMProperty&) const;
	virtual Uint64 getResourceAllocationTimeout() const;
	virtual Boolean getErrorDetectTimeout(CIMProperty&) const;
	virtual Uint64 getErrorDetectTimeout() const;
	virtual Boolean getClass1SequencesSent(CIMProperty&) const;
	virtual Uint64 getClass1SequencesSent() const;
	virtual Boolean getClass2SequencesSent(CIMProperty&) const;
	virtual Uint64 getClass2SequencesSent() const;
	virtual Boolean getClass3SequencesSent(CIMProperty&) const;
	virtual Uint64 getClass3SequencesSent() const;
	virtual Boolean getClass4SequencesSent(CIMProperty&) const;
	virtual Uint64 getClass4SequencesSent() const;
	virtual Boolean getClass2OctetsReceived(CIMProperty&) const;
	virtual Uint64 getClass2OctetsReceived() const;
	virtual Boolean getClass2OctetsTransmitted(CIMProperty&) const;
	virtual Uint64 getClass2OctetsTransmitted() const;
	virtual Boolean getClass2FramesReceived(CIMProperty&) const;
	virtual Uint64 getClass2FramesReceived() const;
	virtual Boolean getClass2FramesTransmitted(CIMProperty&) const;
	virtual Uint64 getClass2FramesTransmitted() const;
	virtual Boolean getClass2DiscardFrames(CIMProperty&) const;
	virtual Uint64 getClass2DiscardFrames() const;
	virtual Boolean getClass3OctetsReceived(CIMProperty&) const;
	virtual Uint64 getClass3OctetsReceived() const;
	virtual Boolean getClass3OctetsTransmitted(CIMProperty&) const;
	virtual Uint64 getClass3OctetsTransmitted() const;
	virtual Boolean getClass3FramesReceived(CIMProperty&) const;
	virtual Uint64 getClass3FramesReceived() const;
	virtual Boolean getClass3FramesTransmitted(CIMProperty&) const;
	virtual Uint64 getClass3FramesTransmitted() const;
	virtual Boolean getClass3DiscardFrames(CIMProperty&) const;
	virtual Uint64 getClass3DiscardFrames() const;
	virtual Boolean getParityErrors(CIMProperty&) const;
	virtual Uint64 getParityErrors() const;
	virtual Boolean getFrameTimeouts(CIMProperty&) const;
	virtual Uint64 getFrameTimeouts() const;
	virtual Boolean getBufferCreditErrors(CIMProperty&) const;
	virtual Uint64 getBufferCreditErrors() const;
	virtual Boolean getEndCreditErrors(CIMProperty&) const;
	virtual Uint64 getEndCreditErrors() const;
	virtual Boolean getOutOfOrderFramesReceived(CIMProperty&) const;
	virtual Uint64 getOutOfOrderFramesReceived() const;

private:
	CIMName currentScope;

#	include "UNIX_FibreChannelAdapterPrivate.h"


};

#endif /* UNIX_FIBRECHANNELADAPTER */
