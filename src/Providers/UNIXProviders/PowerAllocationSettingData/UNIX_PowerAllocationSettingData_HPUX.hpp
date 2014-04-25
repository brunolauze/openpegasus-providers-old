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


UNIX_PowerAllocationSettingData::UNIX_PowerAllocationSettingData(void)
{
}

UNIX_PowerAllocationSettingData::~UNIX_PowerAllocationSettingData(void)
{
}


Boolean UNIX_PowerAllocationSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PowerAllocationSettingData::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_PowerAllocationSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PowerAllocationSettingData::getCaption() const
{
	return String ("");
}

Boolean UNIX_PowerAllocationSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PowerAllocationSettingData::getDescription() const
{
	return String ("");
}

Boolean UNIX_PowerAllocationSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PowerAllocationSettingData::getElementName() const
{
	return String("PowerAllocationSettingData");
}

Boolean UNIX_PowerAllocationSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_PowerAllocationSettingData::getChangeableType() const
{
	return Uint16(0);
}

Boolean UNIX_PowerAllocationSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_PowerAllocationSettingData::getConfigurationName() const
{
	return String ("");
}

Boolean UNIX_PowerAllocationSettingData::getResourceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESOURCE_TYPE, getResourceType());
	return true;
}

Uint16 UNIX_PowerAllocationSettingData::getResourceType() const
{
	return Uint16(0);
}

Boolean UNIX_PowerAllocationSettingData::getOtherResourceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_RESOURCE_TYPE, getOtherResourceType());
	return true;
}

String UNIX_PowerAllocationSettingData::getOtherResourceType() const
{
	return String ("");
}

Boolean UNIX_PowerAllocationSettingData::getResourceSubType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESOURCE_SUB_TYPE, getResourceSubType());
	return true;
}

String UNIX_PowerAllocationSettingData::getResourceSubType() const
{
	return String ("");
}

Boolean UNIX_PowerAllocationSettingData::getPoolID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POOL_ID, getPoolID());
	return true;
}

String UNIX_PowerAllocationSettingData::getPoolID() const
{
	return String ("");
}

Boolean UNIX_PowerAllocationSettingData::getConsumerVisibility(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONSUMER_VISIBILITY, getConsumerVisibility());
	return true;
}

Uint16 UNIX_PowerAllocationSettingData::getConsumerVisibility() const
{
	return Uint16(0);
}

Boolean UNIX_PowerAllocationSettingData::getHostResource(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOST_RESOURCE, getHostResource());
	return true;
}

Array<String> UNIX_PowerAllocationSettingData::getHostResource() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PowerAllocationSettingData::getAllocationUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_UNITS, getAllocationUnits());
	return true;
}

String UNIX_PowerAllocationSettingData::getAllocationUnits() const
{
	return String ("");
}

Boolean UNIX_PowerAllocationSettingData::getVirtualQuantity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIRTUAL_QUANTITY, getVirtualQuantity());
	return true;
}

Uint64 UNIX_PowerAllocationSettingData::getVirtualQuantity() const
{
	return Uint64(0);
}

Boolean UNIX_PowerAllocationSettingData::getReservation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESERVATION, getReservation());
	return true;
}

Uint64 UNIX_PowerAllocationSettingData::getReservation() const
{
	return Uint64(0);
}

Boolean UNIX_PowerAllocationSettingData::getLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LIMIT, getLimit());
	return true;
}

Uint64 UNIX_PowerAllocationSettingData::getLimit() const
{
	return Uint64(0);
}

Boolean UNIX_PowerAllocationSettingData::getWeight(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WEIGHT, getWeight());
	return true;
}

Uint32 UNIX_PowerAllocationSettingData::getWeight() const
{
	return Uint32(0);
}

Boolean UNIX_PowerAllocationSettingData::getAutomaticAllocation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTOMATIC_ALLOCATION, getAutomaticAllocation());
	return true;
}

Boolean UNIX_PowerAllocationSettingData::getAutomaticAllocation() const
{
	return Boolean(false);
}

Boolean UNIX_PowerAllocationSettingData::getAutomaticDeallocation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTOMATIC_DEALLOCATION, getAutomaticDeallocation());
	return true;
}

Boolean UNIX_PowerAllocationSettingData::getAutomaticDeallocation() const
{
	return Boolean(false);
}

Boolean UNIX_PowerAllocationSettingData::getParent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARENT, getParent());
	return true;
}

String UNIX_PowerAllocationSettingData::getParent() const
{
	return String ("");
}

Boolean UNIX_PowerAllocationSettingData::getConnection(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTION, getConnection());
	return true;
}

Array<String> UNIX_PowerAllocationSettingData::getConnection() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PowerAllocationSettingData::getAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS, getAddress());
	return true;
}

String UNIX_PowerAllocationSettingData::getAddress() const
{
	return String ("");
}

Boolean UNIX_PowerAllocationSettingData::getMappingBehavior(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAPPING_BEHAVIOR, getMappingBehavior());
	return true;
}

Uint16 UNIX_PowerAllocationSettingData::getMappingBehavior() const
{
	return Uint16(0);
}

Boolean UNIX_PowerAllocationSettingData::getAddressOnParent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_ON_PARENT, getAddressOnParent());
	return true;
}

String UNIX_PowerAllocationSettingData::getAddressOnParent() const
{
	return String ("");
}

Boolean UNIX_PowerAllocationSettingData::getVirtualQuantityUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIRTUAL_QUANTITY_UNITS, getVirtualQuantityUnits());
	return true;
}

String UNIX_PowerAllocationSettingData::getVirtualQuantityUnits() const
{
	return String ("");
}

Boolean UNIX_PowerAllocationSettingData::getPowerAllocationSettingPurpose(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ALLOCATION_SETTING_PURPOSE, getPowerAllocationSettingPurpose());
	return true;
}

Uint16 UNIX_PowerAllocationSettingData::getPowerAllocationSettingPurpose() const
{
	return Uint16(0);
}

Boolean UNIX_PowerAllocationSettingData::getOtherSettingPurpose(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SETTING_PURPOSE, getOtherSettingPurpose());
	return true;
}

String UNIX_PowerAllocationSettingData::getOtherSettingPurpose() const
{
	return String ("");
}



Boolean UNIX_PowerAllocationSettingData::initialize()
{
	return false;
}

Boolean UNIX_PowerAllocationSettingData::load(int &pIndex)
{
	return false;
}

Boolean UNIX_PowerAllocationSettingData::finalize()
{
	return false;
}

Boolean UNIX_PowerAllocationSettingData::find(Array<CIMKeyBinding> &kbArray)
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
