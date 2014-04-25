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


#include "UNIX_EthernetPortAllocationSettingDataProvider.h"

UNIX_EthernetPortAllocationSettingDataProvider::UNIX_EthernetPortAllocationSettingDataProvider()
{
}

UNIX_EthernetPortAllocationSettingDataProvider::~UNIX_EthernetPortAllocationSettingDataProvider()
{
}

CIMInstance UNIX_EthernetPortAllocationSettingDataProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_EthernetPortAllocationSettingData &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_EthernetPortAllocationSettingData"),
			constructKeyBindings(_p)));

	//CIM_ManagedElement Properties
	if (_p.getInstanceID(p)) inst.addProperty(p);
	if (_p.getCaption(p)) inst.addProperty(p);
	if (_p.getDescription(p)) inst.addProperty(p);
	if (_p.getElementName(p)) inst.addProperty(p);

	//CIM_SettingData Properties
	if (_p.getChangeableType(p)) inst.addProperty(p);
	if (_p.getConfigurationName(p)) inst.addProperty(p);

	//CIM_ResourceAllocationSettingData Properties
	if (_p.getResourceType(p)) inst.addProperty(p);
	if (_p.getOtherResourceType(p)) inst.addProperty(p);
	if (_p.getResourceSubType(p)) inst.addProperty(p);
	if (_p.getPoolID(p)) inst.addProperty(p);
	if (_p.getConsumerVisibility(p)) inst.addProperty(p);
	if (_p.getHostResource(p)) inst.addProperty(p);
	if (_p.getAllocationUnits(p)) inst.addProperty(p);
	if (_p.getVirtualQuantity(p)) inst.addProperty(p);
	if (_p.getReservation(p)) inst.addProperty(p);
	if (_p.getLimit(p)) inst.addProperty(p);
	if (_p.getWeight(p)) inst.addProperty(p);
	if (_p.getAutomaticAllocation(p)) inst.addProperty(p);
	if (_p.getAutomaticDeallocation(p)) inst.addProperty(p);
	if (_p.getParent(p)) inst.addProperty(p);
	if (_p.getConnection(p)) inst.addProperty(p);
	if (_p.getAddress(p)) inst.addProperty(p);
	if (_p.getMappingBehavior(p)) inst.addProperty(p);
	if (_p.getAddressOnParent(p)) inst.addProperty(p);
	if (_p.getVirtualQuantityUnits(p)) inst.addProperty(p);

	//CIM_EthernetPortAllocationSettingData Properties
	if (_p.getDesiredVLANEndpointMode(p)) inst.addProperty(p);
	if (_p.getOtherEndpointMode(p)) inst.addProperty(p);
	if (_p.getAllowedPriorities(p)) inst.addProperty(p);
	if (_p.getAllowedToReceiveMACAddresses(p)) inst.addProperty(p);
	if (_p.getAllowedToReceiveVLANs(p)) inst.addProperty(p);
	if (_p.getAllowedToTransmitMACAddresses(p)) inst.addProperty(p);
	if (_p.getAllowedToTransmitVLANs(p)) inst.addProperty(p);
	if (_p.getDefaultPortVID(p)) inst.addProperty(p);
	if (_p.getDefaultPriority(p)) inst.addProperty(p);
	if (_p.getGroupID(p)) inst.addProperty(p);
	if (_p.getManagerID(p)) inst.addProperty(p);
	if (_p.getNetworkPortProfileID(p)) inst.addProperty(p);
	if (_p.getNetworkPortProfileIDType(p)) inst.addProperty(p);
	if (_p.getOtherNetworkPortProfileIDTypeInfo(p)) inst.addProperty(p);
	if (_p.getPortCorrelationID(p)) inst.addProperty(p);
	if (_p.getPortVID(p)) inst.addProperty(p);
	if (_p.getPromiscuous(p)) inst.addProperty(p);
	if (_p.getReceiveBandwidthLimit(p)) inst.addProperty(p);
	if (_p.getReceiveBandwidthReservation(p)) inst.addProperty(p);
	if (_p.getSourceMACFilteringEnabled(p)) inst.addProperty(p);
	if (_p.getVSITypeID(p)) inst.addProperty(p);
	if (_p.getVSITypeIDVersion(p)) inst.addProperty(p);


	return inst;
}

Array<CIMKeyBinding> UNIX_EthernetPortAllocationSettingDataProvider::constructKeyBindings(const UNIX_EthernetPortAllocationSettingData& _p)

{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_INSTANCE_ID,
		_p.getInstanceID(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_EthernetPortAllocationSettingDataProvider
#define UNIX_PROVIDER_NAME "UNIX_EthernetPortAllocationSettingDataProvider"
#define CLASS_IMPLEMENTATION UNIX_EthernetPortAllocationSettingData
#define CLASS_IMPLEMENTATION_NAME "UNIX_EthernetPortAllocationSettingData"
#define BASE_CLASS_NAME "CIM_EthernetPortAllocationSettingData"
#define NUMKEYS_CLASS_IMPLEMENTATION 0


#include "UNIXProviderBase.hpp"

