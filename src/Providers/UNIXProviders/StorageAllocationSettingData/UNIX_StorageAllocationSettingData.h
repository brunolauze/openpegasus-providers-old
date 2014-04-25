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

#ifndef __UNIX_STORAGEALLOCATIONSETTINGDATA_H
#define __UNIX_STORAGEALLOCATIONSETTINGDATA_H


#include "CIM_ResourceAllocationSettingData.h"

#include "UNIX_StorageAllocationSettingDataDeps.h"


#define PROPERTY_VIRTUAL_RESOURCE_BLOCK_SIZE				"VirtualResourceBlockSize"
#define PROPERTY_ACCESS				"Access"
#define PROPERTY_HOST_RESOURCE_BLOCK_SIZE				"HostResourceBlockSize"
#define PROPERTY_HOST_EXTENT_STARTING_ADDRESS				"HostExtentStartingAddress"
#define PROPERTY_HOST_EXTENT_NAME				"HostExtentName"
#define PROPERTY_HOST_EXTENT_NAME_FORMAT				"HostExtentNameFormat"
#define PROPERTY_OTHER_HOST_EXTENT_NAME_FORMAT				"OtherHostExtentNameFormat"
#define PROPERTY_HOST_EXTENT_NAME_NAMESPACE				"HostExtentNameNamespace"
#define PROPERTY_OTHER_HOST_EXTENT_NAME_NAMESPACE				"OtherHostExtentNameNamespace"


class UNIX_StorageAllocationSettingData :
	public CIM_ResourceAllocationSettingData
{
public:

	UNIX_StorageAllocationSettingData();
	~UNIX_StorageAllocationSettingData();

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
	virtual Boolean getVirtualResourceBlockSize(CIMProperty&) const;
	virtual Uint64 getVirtualResourceBlockSize() const;
	virtual Boolean getAccess(CIMProperty&) const;
	virtual Uint16 getAccess() const;
	virtual Boolean getHostResourceBlockSize(CIMProperty&) const;
	virtual Uint64 getHostResourceBlockSize() const;
	virtual Boolean getHostExtentStartingAddress(CIMProperty&) const;
	virtual Uint64 getHostExtentStartingAddress() const;
	virtual Boolean getHostExtentName(CIMProperty&) const;
	virtual String getHostExtentName() const;
	virtual Boolean getHostExtentNameFormat(CIMProperty&) const;
	virtual Uint16 getHostExtentNameFormat() const;
	virtual Boolean getOtherHostExtentNameFormat(CIMProperty&) const;
	virtual String getOtherHostExtentNameFormat() const;
	virtual Boolean getHostExtentNameNamespace(CIMProperty&) const;
	virtual Uint16 getHostExtentNameNamespace() const;
	virtual Boolean getOtherHostExtentNameNamespace(CIMProperty&) const;
	virtual String getOtherHostExtentNameNamespace() const;

private:
	CIMName currentScope;

#	include "UNIX_StorageAllocationSettingDataPrivate.h"


};

#endif /* UNIX_STORAGEALLOCATIONSETTINGDATA */
