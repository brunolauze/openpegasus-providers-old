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

#ifndef __UNIX_ETHERNETADAPTER_H
#define __UNIX_ETHERNETADAPTER_H


#include "CIM_NetworkAdapter.h"
#include <EthernetPort/UNIX_EthernetPort.h>

#define PROPERTY_MAX_DATA_SIZE				"MaxDataSize"
#define PROPERTY_CAPABILITIES				"Capabilities"
#define PROPERTY_CAPABILITY_DESCRIPTIONS				"CapabilityDescriptions"
#define PROPERTY_ENABLED_CAPABILITIES				"EnabledCapabilities"
#define PROPERTY_SYMBOL_ERRORS				"SymbolErrors"
#define PROPERTY_TOTAL_PACKETS_TRANSMITTED				"TotalPacketsTransmitted"
#define PROPERTY_TOTAL_PACKETS_RECEIVED				"TotalPacketsReceived"
#define PROPERTY_ALIGNMENT_ERRORS				"AlignmentErrors"
#define PROPERTY_F_CS_ERRORS				"FCSErrors"
#define PROPERTY_SINGLE_COLLISION_FRAMES				"SingleCollisionFrames"
#define PROPERTY_MULTIPLE_COLLISION_FRAMES				"MultipleCollisionFrames"
#define PROPERTY_S_Q_E_TEST_ERRORS				"SQETestErrors"
#define PROPERTY_DEFERRED_TRANSMISSIONS				"DeferredTransmissions"
#define PROPERTY_LATE_COLLISIONS				"LateCollisions"
#define PROPERTY_EXCESSIVE_COLLISIONS				"ExcessiveCollisions"
#define PROPERTY_INTERNAL_M_A_C_TRANSMIT_ERRORS				"InternalMACTransmitErrors"
#define PROPERTY_INTERNAL_M_A_C_RECEIVE_ERRORS				"InternalMACReceiveErrors"
#define PROPERTY_CARRIER_SENSE_ERRORS				"CarrierSenseErrors"
#define PROPERTY_FRAME_TOO_LONGS				"FrameTooLongs"


class UNIX_EthernetAdapter :
	public CIM_NetworkAdapter
{
public:

	UNIX_EthernetAdapter();
	~UNIX_EthernetAdapter();

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
	virtual Boolean getMaxDataSize(CIMProperty&) const;
	virtual Uint32 getMaxDataSize() const;
	virtual Boolean getCapabilities(CIMProperty&) const;
	virtual Array<Uint16> getCapabilities() const;
	virtual Boolean getCapabilityDescriptions(CIMProperty&) const;
	virtual Array<String> getCapabilityDescriptions() const;
	virtual Boolean getEnabledCapabilities(CIMProperty&) const;
	virtual Array<Uint16> getEnabledCapabilities() const;
	virtual Boolean getSymbolErrors(CIMProperty&) const;
	virtual Uint32 getSymbolErrors() const;
	virtual Boolean getTotalPacketsTransmitted(CIMProperty&) const;
	virtual Uint64 getTotalPacketsTransmitted() const;
	virtual Boolean getTotalPacketsReceived(CIMProperty&) const;
	virtual Uint64 getTotalPacketsReceived() const;
	virtual Boolean getAlignmentErrors(CIMProperty&) const;
	virtual Uint32 getAlignmentErrors() const;
	virtual Boolean getFCSErrors(CIMProperty&) const;
	virtual Uint32 getFCSErrors() const;
	virtual Boolean getSingleCollisionFrames(CIMProperty&) const;
	virtual Uint32 getSingleCollisionFrames() const;
	virtual Boolean getMultipleCollisionFrames(CIMProperty&) const;
	virtual Uint32 getMultipleCollisionFrames() const;
	virtual Boolean getSQETestErrors(CIMProperty&) const;
	virtual Uint32 getSQETestErrors() const;
	virtual Boolean getDeferredTransmissions(CIMProperty&) const;
	virtual Uint32 getDeferredTransmissions() const;
	virtual Boolean getLateCollisions(CIMProperty&) const;
	virtual Uint32 getLateCollisions() const;
	virtual Boolean getExcessiveCollisions(CIMProperty&) const;
	virtual Uint32 getExcessiveCollisions() const;
	virtual Boolean getInternalMACTransmitErrors(CIMProperty&) const;
	virtual Uint32 getInternalMACTransmitErrors() const;
	virtual Boolean getInternalMACReceiveErrors(CIMProperty&) const;
	virtual Uint32 getInternalMACReceiveErrors() const;
	virtual Boolean getCarrierSenseErrors(CIMProperty&) const;
	virtual Uint32 getCarrierSenseErrors() const;
	virtual Boolean getFrameTooLongs(CIMProperty&) const;
	virtual Uint32 getFrameTooLongs() const;

private:
	CIMName currentScope;
	UNIX_EthernetPort underlyingClass;

};

#endif /* UNIX_ETHERNETADAPTER */
