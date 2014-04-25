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

#ifndef __UNIX_RESOURCEPOOL_H
#define __UNIX_RESOURCEPOOL_H


#include "CIM_LogicalElement.h"

#include "UNIX_ResourcePoolDeps.h"


#define PROPERTY_POOL_ID				"PoolID"
#define PROPERTY_PRIMORDIAL				"Primordial"
#define PROPERTY_CAPACITY				"Capacity"
#define PROPERTY_RESERVED				"Reserved"
#define PROPERTY_RESOURCE_TYPE				"ResourceType"
#define PROPERTY_OTHER_RESOURCE_TYPE				"OtherResourceType"
#define PROPERTY_RESOURCE_SUB_TYPE				"ResourceSubType"
#define PROPERTY_ALLOCATION_UNITS				"AllocationUnits"
#define PROPERTY_CONSUMED_RESOURCE_UNITS				"ConsumedResourceUnits"
#define PROPERTY_CURRENTLY_CONSUMED_RESOURCE				"CurrentlyConsumedResource"
#define PROPERTY_MAX_CONSUMABLE_RESOURCE				"MaxConsumableResource"


class UNIX_ResourcePool :
	public CIM_LogicalElement
{
public:

	UNIX_ResourcePool();
	~UNIX_ResourcePool();

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
	virtual Boolean getPoolID(CIMProperty&) const;
	virtual String getPoolID() const;
	virtual Boolean getPrimordial(CIMProperty&) const;
	virtual Boolean getPrimordial() const;
	virtual Boolean getCapacity(CIMProperty&) const;
	virtual Uint64 getCapacity() const;
	virtual Boolean getReserved(CIMProperty&) const;
	virtual Uint64 getReserved() const;
	virtual Boolean getResourceType(CIMProperty&) const;
	virtual Uint16 getResourceType() const;
	virtual Boolean getOtherResourceType(CIMProperty&) const;
	virtual String getOtherResourceType() const;
	virtual Boolean getResourceSubType(CIMProperty&) const;
	virtual String getResourceSubType() const;
	virtual Boolean getAllocationUnits(CIMProperty&) const;
	virtual String getAllocationUnits() const;
	virtual Boolean getConsumedResourceUnits(CIMProperty&) const;
	virtual String getConsumedResourceUnits() const;
	virtual Boolean getCurrentlyConsumedResource(CIMProperty&) const;
	virtual Uint64 getCurrentlyConsumedResource() const;
	virtual Boolean getMaxConsumableResource(CIMProperty&) const;
	virtual Uint64 getMaxConsumableResource() const;

private:
	CIMName currentScope;

#	include "UNIX_ResourcePoolPrivate.h"


};

#endif /* UNIX_RESOURCEPOOL */
