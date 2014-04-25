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


UNIX_EthernetPortAllocationSettingData::UNIX_EthernetPortAllocationSettingData(void)
{
}

UNIX_EthernetPortAllocationSettingData::~UNIX_EthernetPortAllocationSettingData(void)
{
}


Boolean UNIX_EthernetPortAllocationSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_EthernetPortAllocationSettingData::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_EthernetPortAllocationSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_EthernetPortAllocationSettingData::getCaption() const
{
	return String ("");
}

Boolean UNIX_EthernetPortAllocationSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_EthernetPortAllocationSettingData::getDescription() const
{
	return String ("");
}

Boolean UNIX_EthernetPortAllocationSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_EthernetPortAllocationSettingData::getElementName() const
{
	return String("EthernetPortAllocationSettingData");
}

Boolean UNIX_EthernetPortAllocationSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_EthernetPortAllocationSettingData::getChangeableType() const
{
	return Uint16(0);
}

Boolean UNIX_EthernetPortAllocationSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_EthernetPortAllocationSettingData::getConfigurationName() const
{
	return String ("");
}

Boolean UNIX_EthernetPortAllocationSettingData::getResourceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESOURCE_TYPE, getResourceType());
	return true;
}

Uint16 UNIX_EthernetPortAllocationSettingData::getResourceType() const
{
	return Uint16(0);
}

Boolean UNIX_EthernetPortAllocationSettingData::getOtherResourceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_RESOURCE_TYPE, getOtherResourceType());
	return true;
}

String UNIX_EthernetPortAllocationSettingData::getOtherResourceType() const
{
	return String ("");
}

Boolean UNIX_EthernetPortAllocationSettingData::getResourceSubType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESOURCE_SUB_TYPE, getResourceSubType());
	return true;
}

String UNIX_EthernetPortAllocationSettingData::getResourceSubType() const
{
	return String ("");
}

Boolean UNIX_EthernetPortAllocationSettingData::getPoolID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POOL_ID, getPoolID());
	return true;
}

String UNIX_EthernetPortAllocationSettingData::getPoolID() const
{
	return String ("");
}

Boolean UNIX_EthernetPortAllocationSettingData::getConsumerVisibility(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONSUMER_VISIBILITY, getConsumerVisibility());
	return true;
}

Uint16 UNIX_EthernetPortAllocationSettingData::getConsumerVisibility() const
{
	return Uint16(0);
}

Boolean UNIX_EthernetPortAllocationSettingData::getHostResource(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOST_RESOURCE, getHostResource());
	return true;
}

Array<String> UNIX_EthernetPortAllocationSettingData::getHostResource() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_EthernetPortAllocationSettingData::getAllocationUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_UNITS, getAllocationUnits());
	return true;
}

String UNIX_EthernetPortAllocationSettingData::getAllocationUnits() const
{
	return String ("");
}

Boolean UNIX_EthernetPortAllocationSettingData::getVirtualQuantity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIRTUAL_QUANTITY, getVirtualQuantity());
	return true;
}

Uint64 UNIX_EthernetPortAllocationSettingData::getVirtualQuantity() const
{
	return Uint64(0);
}

Boolean UNIX_EthernetPortAllocationSettingData::getReservation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESERVATION, getReservation());
	return true;
}

Uint64 UNIX_EthernetPortAllocationSettingData::getReservation() const
{
	return Uint64(0);
}

Boolean UNIX_EthernetPortAllocationSettingData::getLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LIMIT, getLimit());
	return true;
}

Uint64 UNIX_EthernetPortAllocationSettingData::getLimit() const
{
	return Uint64(0);
}

Boolean UNIX_EthernetPortAllocationSettingData::getWeight(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WEIGHT, getWeight());
	return true;
}

Uint32 UNIX_EthernetPortAllocationSettingData::getWeight() const
{
	return Uint32(0);
}

Boolean UNIX_EthernetPortAllocationSettingData::getAutomaticAllocation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTOMATIC_ALLOCATION, getAutomaticAllocation());
	return true;
}

Boolean UNIX_EthernetPortAllocationSettingData::getAutomaticAllocation() const
{
	return Boolean(false);
}

Boolean UNIX_EthernetPortAllocationSettingData::getAutomaticDeallocation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTOMATIC_DEALLOCATION, getAutomaticDeallocation());
	return true;
}

Boolean UNIX_EthernetPortAllocationSettingData::getAutomaticDeallocation() const
{
	return Boolean(false);
}

Boolean UNIX_EthernetPortAllocationSettingData::getParent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARENT, getParent());
	return true;
}

String UNIX_EthernetPortAllocationSettingData::getParent() const
{
	return String ("");
}

Boolean UNIX_EthernetPortAllocationSettingData::getConnection(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTION, getConnection());
	return true;
}

Array<String> UNIX_EthernetPortAllocationSettingData::getConnection() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_EthernetPortAllocationSettingData::getAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS, getAddress());
	return true;
}

String UNIX_EthernetPortAllocationSettingData::getAddress() const
{
	return String ("");
}

Boolean UNIX_EthernetPortAllocationSettingData::getMappingBehavior(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAPPING_BEHAVIOR, getMappingBehavior());
	return true;
}

Uint16 UNIX_EthernetPortAllocationSettingData::getMappingBehavior() const
{
	return Uint16(0);
}

Boolean UNIX_EthernetPortAllocationSettingData::getAddressOnParent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_ON_PARENT, getAddressOnParent());
	return true;
}

String UNIX_EthernetPortAllocationSettingData::getAddressOnParent() const
{
	return String ("");
}

Boolean UNIX_EthernetPortAllocationSettingData::getVirtualQuantityUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIRTUAL_QUANTITY_UNITS, getVirtualQuantityUnits());
	return true;
}

String UNIX_EthernetPortAllocationSettingData::getVirtualQuantityUnits() const
{
	return String ("");
}

Boolean UNIX_EthernetPortAllocationSettingData::getDesiredVLANEndpointMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESIRED_V_L_A_N_ENDPOINT_MODE, getDesiredVLANEndpointMode());
	return true;
}

Uint16 UNIX_EthernetPortAllocationSettingData::getDesiredVLANEndpointMode() const
{
	return Uint16(0);
}

Boolean UNIX_EthernetPortAllocationSettingData::getOtherEndpointMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENDPOINT_MODE, getOtherEndpointMode());
	return true;
}

String UNIX_EthernetPortAllocationSettingData::getOtherEndpointMode() const
{
	return String ("");
}

Boolean UNIX_EthernetPortAllocationSettingData::getAllowedPriorities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOWED_PRIORITIES, getAllowedPriorities());
	return true;
}

Array<Uint16> UNIX_EthernetPortAllocationSettingData::getAllowedPriorities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_EthernetPortAllocationSettingData::getAllowedToReceiveMACAddresses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOWED_TO_RECEIVE_M_A_C_ADDRESSES, getAllowedToReceiveMACAddresses());
	return true;
}

Array<String> UNIX_EthernetPortAllocationSettingData::getAllowedToReceiveMACAddresses() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_EthernetPortAllocationSettingData::getAllowedToReceiveVLANs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOWED_TO_RECEIVE_V_L_A_NS, getAllowedToReceiveVLANs());
	return true;
}

Array<Uint16> UNIX_EthernetPortAllocationSettingData::getAllowedToReceiveVLANs() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_EthernetPortAllocationSettingData::getAllowedToTransmitMACAddresses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOWED_TO_TRANSMIT_M_A_C_ADDRESSES, getAllowedToTransmitMACAddresses());
	return true;
}

Array<String> UNIX_EthernetPortAllocationSettingData::getAllowedToTransmitMACAddresses() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_EthernetPortAllocationSettingData::getAllowedToTransmitVLANs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOWED_TO_TRANSMIT_V_L_A_NS, getAllowedToTransmitVLANs());
	return true;
}

Array<Uint16> UNIX_EthernetPortAllocationSettingData::getAllowedToTransmitVLANs() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_EthernetPortAllocationSettingData::getDefaultPortVID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_PORT_V_ID, getDefaultPortVID());
	return true;
}

Uint16 UNIX_EthernetPortAllocationSettingData::getDefaultPortVID() const
{
	return Uint16(0);
}

Boolean UNIX_EthernetPortAllocationSettingData::getDefaultPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_PRIORITY, getDefaultPriority());
	return true;
}

Uint16 UNIX_EthernetPortAllocationSettingData::getDefaultPriority() const
{
	return Uint16(0);
}

Boolean UNIX_EthernetPortAllocationSettingData::getGroupID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_ID, getGroupID());
	return true;
}

Uint32 UNIX_EthernetPortAllocationSettingData::getGroupID() const
{
	return Uint32(0);
}

Boolean UNIX_EthernetPortAllocationSettingData::getManagerID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANAGER_ID, getManagerID());
	return true;
}

Uint32 UNIX_EthernetPortAllocationSettingData::getManagerID() const
{
	return Uint32(0);
}

Boolean UNIX_EthernetPortAllocationSettingData::getNetworkPortProfileID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NETWORK_PORT_PROFILE_ID, getNetworkPortProfileID());
	return true;
}

String UNIX_EthernetPortAllocationSettingData::getNetworkPortProfileID() const
{
	return String ("");
}

Boolean UNIX_EthernetPortAllocationSettingData::getNetworkPortProfileIDType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NETWORK_PORT_PROFILE_ID_TYPE, getNetworkPortProfileIDType());
	return true;
}

Uint16 UNIX_EthernetPortAllocationSettingData::getNetworkPortProfileIDType() const
{
	return Uint16(0);
}

Boolean UNIX_EthernetPortAllocationSettingData::getOtherNetworkPortProfileIDTypeInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NETWORK_PORT_PROFILE_ID_TYPE_INFO, getOtherNetworkPortProfileIDTypeInfo());
	return true;
}

String UNIX_EthernetPortAllocationSettingData::getOtherNetworkPortProfileIDTypeInfo() const
{
	return String ("");
}

Boolean UNIX_EthernetPortAllocationSettingData::getPortCorrelationID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_CORRELATION_ID, getPortCorrelationID());
	return true;
}

String UNIX_EthernetPortAllocationSettingData::getPortCorrelationID() const
{
	return String ("");
}

Boolean UNIX_EthernetPortAllocationSettingData::getPortVID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_V_ID, getPortVID());
	return true;
}

Uint16 UNIX_EthernetPortAllocationSettingData::getPortVID() const
{
	return Uint16(0);
}

Boolean UNIX_EthernetPortAllocationSettingData::getPromiscuous(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROMISCUOUS, getPromiscuous());
	return true;
}

Boolean UNIX_EthernetPortAllocationSettingData::getPromiscuous() const
{
	return Boolean(false);
}

Boolean UNIX_EthernetPortAllocationSettingData::getReceiveBandwidthLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECEIVE_BANDWIDTH_LIMIT, getReceiveBandwidthLimit());
	return true;
}

Uint64 UNIX_EthernetPortAllocationSettingData::getReceiveBandwidthLimit() const
{
	return Uint64(0);
}

Boolean UNIX_EthernetPortAllocationSettingData::getReceiveBandwidthReservation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECEIVE_BANDWIDTH_RESERVATION, getReceiveBandwidthReservation());
	return true;
}

Uint64 UNIX_EthernetPortAllocationSettingData::getReceiveBandwidthReservation() const
{
	return Uint64(0);
}

Boolean UNIX_EthernetPortAllocationSettingData::getSourceMACFilteringEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOURCE_M_A_C_FILTERING_ENABLED, getSourceMACFilteringEnabled());
	return true;
}

Boolean UNIX_EthernetPortAllocationSettingData::getSourceMACFilteringEnabled() const
{
	return Boolean(false);
}

Boolean UNIX_EthernetPortAllocationSettingData::getVSITypeID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_V_S_I_TYPE_ID, getVSITypeID());
	return true;
}

Uint32 UNIX_EthernetPortAllocationSettingData::getVSITypeID() const
{
	return Uint32(0);
}

Boolean UNIX_EthernetPortAllocationSettingData::getVSITypeIDVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_V_S_I_TYPE_ID_VERSION, getVSITypeIDVersion());
	return true;
}

Uint8 UNIX_EthernetPortAllocationSettingData::getVSITypeIDVersion() const
{
	return Uint8(0);
}



Boolean UNIX_EthernetPortAllocationSettingData::initialize()
{
	return false;
}

Boolean UNIX_EthernetPortAllocationSettingData::load(int &pIndex)
{
	return false;
}

Boolean UNIX_EthernetPortAllocationSettingData::finalize()
{
	return false;
}

Boolean UNIX_EthernetPortAllocationSettingData::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String instanceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_INSTANCE_ID)) instanceIDKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
