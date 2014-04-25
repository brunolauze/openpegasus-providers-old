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


UNIX_StorageAllocationSettingData::UNIX_StorageAllocationSettingData(void)
{
}

UNIX_StorageAllocationSettingData::~UNIX_StorageAllocationSettingData(void)
{
}


Boolean UNIX_StorageAllocationSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_StorageAllocationSettingData::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_StorageAllocationSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_StorageAllocationSettingData::getCaption() const
{
	return String ("");
}

Boolean UNIX_StorageAllocationSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_StorageAllocationSettingData::getDescription() const
{
	return String ("");
}

Boolean UNIX_StorageAllocationSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_StorageAllocationSettingData::getElementName() const
{
	return String("StorageAllocationSettingData");
}

Boolean UNIX_StorageAllocationSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_StorageAllocationSettingData::getChangeableType() const
{
	return Uint16(0);
}

Boolean UNIX_StorageAllocationSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_StorageAllocationSettingData::getConfigurationName() const
{
	return String ("");
}

Boolean UNIX_StorageAllocationSettingData::getResourceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESOURCE_TYPE, getResourceType());
	return true;
}

Uint16 UNIX_StorageAllocationSettingData::getResourceType() const
{
	return Uint16(0);
}

Boolean UNIX_StorageAllocationSettingData::getOtherResourceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_RESOURCE_TYPE, getOtherResourceType());
	return true;
}

String UNIX_StorageAllocationSettingData::getOtherResourceType() const
{
	return String ("");
}

Boolean UNIX_StorageAllocationSettingData::getResourceSubType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESOURCE_SUB_TYPE, getResourceSubType());
	return true;
}

String UNIX_StorageAllocationSettingData::getResourceSubType() const
{
	return String ("");
}

Boolean UNIX_StorageAllocationSettingData::getPoolID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POOL_ID, getPoolID());
	return true;
}

String UNIX_StorageAllocationSettingData::getPoolID() const
{
	return String ("");
}

Boolean UNIX_StorageAllocationSettingData::getConsumerVisibility(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONSUMER_VISIBILITY, getConsumerVisibility());
	return true;
}

Uint16 UNIX_StorageAllocationSettingData::getConsumerVisibility() const
{
	return Uint16(0);
}

Boolean UNIX_StorageAllocationSettingData::getHostResource(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOST_RESOURCE, getHostResource());
	return true;
}

Array<String> UNIX_StorageAllocationSettingData::getHostResource() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_StorageAllocationSettingData::getAllocationUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_UNITS, getAllocationUnits());
	return true;
}

String UNIX_StorageAllocationSettingData::getAllocationUnits() const
{
	return String ("");
}

Boolean UNIX_StorageAllocationSettingData::getVirtualQuantity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIRTUAL_QUANTITY, getVirtualQuantity());
	return true;
}

Uint64 UNIX_StorageAllocationSettingData::getVirtualQuantity() const
{
	return Uint64(0);
}

Boolean UNIX_StorageAllocationSettingData::getReservation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESERVATION, getReservation());
	return true;
}

Uint64 UNIX_StorageAllocationSettingData::getReservation() const
{
	return Uint64(0);
}

Boolean UNIX_StorageAllocationSettingData::getLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LIMIT, getLimit());
	return true;
}

Uint64 UNIX_StorageAllocationSettingData::getLimit() const
{
	return Uint64(0);
}

Boolean UNIX_StorageAllocationSettingData::getWeight(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WEIGHT, getWeight());
	return true;
}

Uint32 UNIX_StorageAllocationSettingData::getWeight() const
{
	return Uint32(0);
}

Boolean UNIX_StorageAllocationSettingData::getAutomaticAllocation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTOMATIC_ALLOCATION, getAutomaticAllocation());
	return true;
}

Boolean UNIX_StorageAllocationSettingData::getAutomaticAllocation() const
{
	return Boolean(false);
}

Boolean UNIX_StorageAllocationSettingData::getAutomaticDeallocation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTOMATIC_DEALLOCATION, getAutomaticDeallocation());
	return true;
}

Boolean UNIX_StorageAllocationSettingData::getAutomaticDeallocation() const
{
	return Boolean(false);
}

Boolean UNIX_StorageAllocationSettingData::getParent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARENT, getParent());
	return true;
}

String UNIX_StorageAllocationSettingData::getParent() const
{
	return String ("");
}

Boolean UNIX_StorageAllocationSettingData::getConnection(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTION, getConnection());
	return true;
}

Array<String> UNIX_StorageAllocationSettingData::getConnection() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_StorageAllocationSettingData::getAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS, getAddress());
	return true;
}

String UNIX_StorageAllocationSettingData::getAddress() const
{
	return String ("");
}

Boolean UNIX_StorageAllocationSettingData::getMappingBehavior(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAPPING_BEHAVIOR, getMappingBehavior());
	return true;
}

Uint16 UNIX_StorageAllocationSettingData::getMappingBehavior() const
{
	return Uint16(0);
}

Boolean UNIX_StorageAllocationSettingData::getAddressOnParent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_ON_PARENT, getAddressOnParent());
	return true;
}

String UNIX_StorageAllocationSettingData::getAddressOnParent() const
{
	return String ("");
}

Boolean UNIX_StorageAllocationSettingData::getVirtualQuantityUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIRTUAL_QUANTITY_UNITS, getVirtualQuantityUnits());
	return true;
}

String UNIX_StorageAllocationSettingData::getVirtualQuantityUnits() const
{
	return String ("");
}

Boolean UNIX_StorageAllocationSettingData::getVirtualResourceBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIRTUAL_RESOURCE_BLOCK_SIZE, getVirtualResourceBlockSize());
	return true;
}

Uint64 UNIX_StorageAllocationSettingData::getVirtualResourceBlockSize() const
{
	return Uint64(0);
}

Boolean UNIX_StorageAllocationSettingData::getAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS, getAccess());
	return true;
}

Uint16 UNIX_StorageAllocationSettingData::getAccess() const
{
	return Uint16(0);
}

Boolean UNIX_StorageAllocationSettingData::getHostResourceBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOST_RESOURCE_BLOCK_SIZE, getHostResourceBlockSize());
	return true;
}

Uint64 UNIX_StorageAllocationSettingData::getHostResourceBlockSize() const
{
	return Uint64(0);
}

Boolean UNIX_StorageAllocationSettingData::getHostExtentStartingAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOST_EXTENT_STARTING_ADDRESS, getHostExtentStartingAddress());
	return true;
}

Uint64 UNIX_StorageAllocationSettingData::getHostExtentStartingAddress() const
{
	return Uint64(0);
}

Boolean UNIX_StorageAllocationSettingData::getHostExtentName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOST_EXTENT_NAME, getHostExtentName());
	return true;
}

String UNIX_StorageAllocationSettingData::getHostExtentName() const
{
	return String ("");
}

Boolean UNIX_StorageAllocationSettingData::getHostExtentNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOST_EXTENT_NAME_FORMAT, getHostExtentNameFormat());
	return true;
}

Uint16 UNIX_StorageAllocationSettingData::getHostExtentNameFormat() const
{
	return Uint16(0);
}

Boolean UNIX_StorageAllocationSettingData::getOtherHostExtentNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_HOST_EXTENT_NAME_FORMAT, getOtherHostExtentNameFormat());
	return true;
}

String UNIX_StorageAllocationSettingData::getOtherHostExtentNameFormat() const
{
	return String ("");
}

Boolean UNIX_StorageAllocationSettingData::getHostExtentNameNamespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOST_EXTENT_NAME_NAMESPACE, getHostExtentNameNamespace());
	return true;
}

Uint16 UNIX_StorageAllocationSettingData::getHostExtentNameNamespace() const
{
	return Uint16(0);
}

Boolean UNIX_StorageAllocationSettingData::getOtherHostExtentNameNamespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_HOST_EXTENT_NAME_NAMESPACE, getOtherHostExtentNameNamespace());
	return true;
}

String UNIX_StorageAllocationSettingData::getOtherHostExtentNameNamespace() const
{
	return String ("");
}



Boolean UNIX_StorageAllocationSettingData::initialize()
{
	return false;
}

Boolean UNIX_StorageAllocationSettingData::load(int &pIndex)
{
	return false;
}

Boolean UNIX_StorageAllocationSettingData::finalize()
{
	return false;
}

Boolean UNIX_StorageAllocationSettingData::find(Array<CIMKeyBinding> &kbArray)
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
