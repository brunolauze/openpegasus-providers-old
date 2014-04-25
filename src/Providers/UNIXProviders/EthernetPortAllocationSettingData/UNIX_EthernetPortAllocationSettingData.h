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

#ifndef __UNIX_ETHERNETPORTALLOCATIONSETTINGDATA_H
#define __UNIX_ETHERNETPORTALLOCATIONSETTINGDATA_H


#include "CIM_ResourceAllocationSettingData.h"

#include "UNIX_EthernetPortAllocationSettingDataDeps.h"


#define PROPERTY_DESIRED_V_L_A_N_ENDPOINT_MODE				"DesiredVLANEndpointMode"
#define PROPERTY_OTHER_ENDPOINT_MODE				"OtherEndpointMode"
#define PROPERTY_ALLOWED_PRIORITIES				"AllowedPriorities"
#define PROPERTY_ALLOWED_TO_RECEIVE_M_A_C_ADDRESSES				"AllowedToReceiveMACAddresses"
#define PROPERTY_ALLOWED_TO_RECEIVE_V_L_A_NS				"AllowedToReceiveVLANs"
#define PROPERTY_ALLOWED_TO_TRANSMIT_M_A_C_ADDRESSES				"AllowedToTransmitMACAddresses"
#define PROPERTY_ALLOWED_TO_TRANSMIT_V_L_A_NS				"AllowedToTransmitVLANs"
#define PROPERTY_DEFAULT_PORT_V_ID				"DefaultPortVID"
#define PROPERTY_DEFAULT_PRIORITY				"DefaultPriority"
#define PROPERTY_GROUP_ID				"GroupID"
#define PROPERTY_MANAGER_ID				"ManagerID"
#define PROPERTY_NETWORK_PORT_PROFILE_ID				"NetworkPortProfileID"
#define PROPERTY_NETWORK_PORT_PROFILE_ID_TYPE				"NetworkPortProfileIDType"
#define PROPERTY_OTHER_NETWORK_PORT_PROFILE_ID_TYPE_INFO				"OtherNetworkPortProfileIDTypeInfo"
#define PROPERTY_PORT_CORRELATION_ID				"PortCorrelationID"
#define PROPERTY_PORT_V_ID				"PortVID"
#define PROPERTY_PROMISCUOUS				"Promiscuous"
#define PROPERTY_RECEIVE_BANDWIDTH_LIMIT				"ReceiveBandwidthLimit"
#define PROPERTY_RECEIVE_BANDWIDTH_RESERVATION				"ReceiveBandwidthReservation"
#define PROPERTY_SOURCE_M_A_C_FILTERING_ENABLED				"SourceMACFilteringEnabled"
#define PROPERTY_V_S_I_TYPE_ID				"VSITypeID"
#define PROPERTY_V_S_I_TYPE_ID_VERSION				"VSITypeIDVersion"


class UNIX_EthernetPortAllocationSettingData :
	public CIM_ResourceAllocationSettingData
{
public:

	UNIX_EthernetPortAllocationSettingData();
	~UNIX_EthernetPortAllocationSettingData();

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
	virtual Boolean getChangeableType(CIMProperty&) const;
	virtual Uint16 getChangeableType() const;
	virtual Boolean getConfigurationName(CIMProperty&) const;
	virtual String getConfigurationName() const;
	virtual Boolean getResourceType(CIMProperty&) const;
	virtual Uint16 getResourceType() const;
	virtual Boolean getOtherResourceType(CIMProperty&) const;
	virtual String getOtherResourceType() const;
	virtual Boolean getResourceSubType(CIMProperty&) const;
	virtual String getResourceSubType() const;
	virtual Boolean getPoolID(CIMProperty&) const;
	virtual String getPoolID() const;
	virtual Boolean getConsumerVisibility(CIMProperty&) const;
	virtual Uint16 getConsumerVisibility() const;
	virtual Boolean getHostResource(CIMProperty&) const;
	virtual Array<String> getHostResource() const;
	virtual Boolean getAllocationUnits(CIMProperty&) const;
	virtual String getAllocationUnits() const;
	virtual Boolean getVirtualQuantity(CIMProperty&) const;
	virtual Uint64 getVirtualQuantity() const;
	virtual Boolean getReservation(CIMProperty&) const;
	virtual Uint64 getReservation() const;
	virtual Boolean getLimit(CIMProperty&) const;
	virtual Uint64 getLimit() const;
	virtual Boolean getWeight(CIMProperty&) const;
	virtual Uint32 getWeight() const;
	virtual Boolean getAutomaticAllocation(CIMProperty&) const;
	virtual Boolean getAutomaticAllocation() const;
	virtual Boolean getAutomaticDeallocation(CIMProperty&) const;
	virtual Boolean getAutomaticDeallocation() const;
	virtual Boolean getParent(CIMProperty&) const;
	virtual String getParent() const;
	virtual Boolean getConnection(CIMProperty&) const;
	virtual Array<String> getConnection() const;
	virtual Boolean getAddress(CIMProperty&) const;
	virtual String getAddress() const;
	virtual Boolean getMappingBehavior(CIMProperty&) const;
	virtual Uint16 getMappingBehavior() const;
	virtual Boolean getAddressOnParent(CIMProperty&) const;
	virtual String getAddressOnParent() const;
	virtual Boolean getVirtualQuantityUnits(CIMProperty&) const;
	virtual String getVirtualQuantityUnits() const;
	virtual Boolean getDesiredVLANEndpointMode(CIMProperty&) const;
	virtual Uint16 getDesiredVLANEndpointMode() const;
	virtual Boolean getOtherEndpointMode(CIMProperty&) const;
	virtual String getOtherEndpointMode() const;
	virtual Boolean getAllowedPriorities(CIMProperty&) const;
	virtual Array<Uint16> getAllowedPriorities() const;
	virtual Boolean getAllowedToReceiveMACAddresses(CIMProperty&) const;
	virtual Array<String> getAllowedToReceiveMACAddresses() const;
	virtual Boolean getAllowedToReceiveVLANs(CIMProperty&) const;
	virtual Array<Uint16> getAllowedToReceiveVLANs() const;
	virtual Boolean getAllowedToTransmitMACAddresses(CIMProperty&) const;
	virtual Array<String> getAllowedToTransmitMACAddresses() const;
	virtual Boolean getAllowedToTransmitVLANs(CIMProperty&) const;
	virtual Array<Uint16> getAllowedToTransmitVLANs() const;
	virtual Boolean getDefaultPortVID(CIMProperty&) const;
	virtual Uint16 getDefaultPortVID() const;
	virtual Boolean getDefaultPriority(CIMProperty&) const;
	virtual Uint16 getDefaultPriority() const;
	virtual Boolean getGroupID(CIMProperty&) const;
	virtual Uint32 getGroupID() const;
	virtual Boolean getManagerID(CIMProperty&) const;
	virtual Uint32 getManagerID() const;
	virtual Boolean getNetworkPortProfileID(CIMProperty&) const;
	virtual String getNetworkPortProfileID() const;
	virtual Boolean getNetworkPortProfileIDType(CIMProperty&) const;
	virtual Uint16 getNetworkPortProfileIDType() const;
	virtual Boolean getOtherNetworkPortProfileIDTypeInfo(CIMProperty&) const;
	virtual String getOtherNetworkPortProfileIDTypeInfo() const;
	virtual Boolean getPortCorrelationID(CIMProperty&) const;
	virtual String getPortCorrelationID() const;
	virtual Boolean getPortVID(CIMProperty&) const;
	virtual Uint16 getPortVID() const;
	virtual Boolean getPromiscuous(CIMProperty&) const;
	virtual Boolean getPromiscuous() const;
	virtual Boolean getReceiveBandwidthLimit(CIMProperty&) const;
	virtual Uint64 getReceiveBandwidthLimit() const;
	virtual Boolean getReceiveBandwidthReservation(CIMProperty&) const;
	virtual Uint64 getReceiveBandwidthReservation() const;
	virtual Boolean getSourceMACFilteringEnabled(CIMProperty&) const;
	virtual Boolean getSourceMACFilteringEnabled() const;
	virtual Boolean getVSITypeID(CIMProperty&) const;
	virtual Uint32 getVSITypeID() const;
	virtual Boolean getVSITypeIDVersion(CIMProperty&) const;
	virtual Uint8 getVSITypeIDVersion() const;

private:
	CIMName currentScope;

#	include "UNIX_EthernetPortAllocationSettingDataPrivate.h"


};

#endif /* UNIX_ETHERNETPORTALLOCATIONSETTINGDATA */
