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

#ifndef __CIM_RESOURCEALLOCATIONSETTINGDATA_H
#define __CIM_RESOURCEALLOCATIONSETTINGDATA_H


#include "CIM_SettingData.h"


#define PROPERTY_RESOURCE_TYPE				"ResourceType"
#define PROPERTY_OTHER_RESOURCE_TYPE				"OtherResourceType"
#define PROPERTY_RESOURCE_SUB_TYPE				"ResourceSubType"
#define PROPERTY_POOL_ID				"PoolID"
#define PROPERTY_CONSUMER_VISIBILITY				"ConsumerVisibility"
#define PROPERTY_HOST_RESOURCE				"HostResource"
#define PROPERTY_ALLOCATION_UNITS				"AllocationUnits"
#define PROPERTY_VIRTUAL_QUANTITY				"VirtualQuantity"
#define PROPERTY_RESERVATION				"Reservation"
#define PROPERTY_LIMIT				"Limit"
#define PROPERTY_WEIGHT				"Weight"
#define PROPERTY_AUTOMATIC_ALLOCATION				"AutomaticAllocation"
#define PROPERTY_AUTOMATIC_DEALLOCATION				"AutomaticDeallocation"
#define PROPERTY_PARENT				"Parent"
#define PROPERTY_CONNECTION				"Connection"
#define PROPERTY_ADDRESS				"Address"
#define PROPERTY_MAPPING_BEHAVIOR				"MappingBehavior"
#define PROPERTY_ADDRESS_ON_PARENT				"AddressOnParent"
#define PROPERTY_VIRTUAL_QUANTITY_UNITS				"VirtualQuantityUnits"


class CIM_ResourceAllocationSettingData :
	public CIM_SettingData
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean finalize()=0;
	virtual Boolean find(Array<CIMKeyBinding>&)=0;
	virtual Boolean validateKey(CIMKeyBinding&) const=0;
	virtual void setScope(CIMName)=0;

	virtual Boolean getResourceType(CIMProperty&) const=0;
	virtual Uint16 getResourceType() const=0;
	virtual Boolean getOtherResourceType(CIMProperty&) const=0;
	virtual String getOtherResourceType() const=0;
	virtual Boolean getResourceSubType(CIMProperty&) const=0;
	virtual String getResourceSubType() const=0;
	virtual Boolean getPoolID(CIMProperty&) const=0;
	virtual String getPoolID() const=0;
	virtual Boolean getConsumerVisibility(CIMProperty&) const=0;
	virtual Uint16 getConsumerVisibility() const=0;
	virtual Boolean getHostResource(CIMProperty&) const=0;
	virtual Array<String> getHostResource() const=0;
	virtual Boolean getAllocationUnits(CIMProperty&) const=0;
	virtual String getAllocationUnits() const=0;
	virtual Boolean getVirtualQuantity(CIMProperty&) const=0;
	virtual Uint64 getVirtualQuantity() const=0;
	virtual Boolean getReservation(CIMProperty&) const=0;
	virtual Uint64 getReservation() const=0;
	virtual Boolean getLimit(CIMProperty&) const=0;
	virtual Uint64 getLimit() const=0;
	virtual Boolean getWeight(CIMProperty&) const=0;
	virtual Uint32 getWeight() const=0;
	virtual Boolean getAutomaticAllocation(CIMProperty&) const=0;
	virtual Boolean getAutomaticAllocation() const=0;
	virtual Boolean getAutomaticDeallocation(CIMProperty&) const=0;
	virtual Boolean getAutomaticDeallocation() const=0;
	virtual Boolean getParent(CIMProperty&) const=0;
	virtual String getParent() const=0;
	virtual Boolean getConnection(CIMProperty&) const=0;
	virtual Array<String> getConnection() const=0;
	virtual Boolean getAddress(CIMProperty&) const=0;
	virtual String getAddress() const=0;
	virtual Boolean getMappingBehavior(CIMProperty&) const=0;
	virtual Uint16 getMappingBehavior() const=0;
	virtual Boolean getAddressOnParent(CIMProperty&) const=0;
	virtual String getAddressOnParent() const=0;
	virtual Boolean getVirtualQuantityUnits(CIMProperty&) const=0;
	virtual String getVirtualQuantityUnits() const=0;

private:

};

#endif /* CIM_RESOURCEALLOCATIONSETTINGDATA */
