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


UNIX_ProcessorAllocationSettingData::UNIX_ProcessorAllocationSettingData(void)
{
}

UNIX_ProcessorAllocationSettingData::~UNIX_ProcessorAllocationSettingData(void)
{
}


Boolean UNIX_ProcessorAllocationSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ProcessorAllocationSettingData::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_ProcessorAllocationSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ProcessorAllocationSettingData::getCaption() const
{
	return String ("");
}

Boolean UNIX_ProcessorAllocationSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ProcessorAllocationSettingData::getDescription() const
{
	return String ("");
}

Boolean UNIX_ProcessorAllocationSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ProcessorAllocationSettingData::getElementName() const
{
	return String("ProcessorAllocationSettingData");
}

Boolean UNIX_ProcessorAllocationSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_ProcessorAllocationSettingData::getChangeableType() const
{
	return Uint16(0);
}

Boolean UNIX_ProcessorAllocationSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_ProcessorAllocationSettingData::getConfigurationName() const
{
	return String ("");
}

Boolean UNIX_ProcessorAllocationSettingData::getResourceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESOURCE_TYPE, getResourceType());
	return true;
}

Uint16 UNIX_ProcessorAllocationSettingData::getResourceType() const
{
	return Uint16(0);
}

Boolean UNIX_ProcessorAllocationSettingData::getOtherResourceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_RESOURCE_TYPE, getOtherResourceType());
	return true;
}

String UNIX_ProcessorAllocationSettingData::getOtherResourceType() const
{
	return String ("");
}

Boolean UNIX_ProcessorAllocationSettingData::getResourceSubType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESOURCE_SUB_TYPE, getResourceSubType());
	return true;
}

String UNIX_ProcessorAllocationSettingData::getResourceSubType() const
{
	return String ("");
}

Boolean UNIX_ProcessorAllocationSettingData::getPoolID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POOL_ID, getPoolID());
	return true;
}

String UNIX_ProcessorAllocationSettingData::getPoolID() const
{
	return String ("");
}

Boolean UNIX_ProcessorAllocationSettingData::getConsumerVisibility(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONSUMER_VISIBILITY, getConsumerVisibility());
	return true;
}

Uint16 UNIX_ProcessorAllocationSettingData::getConsumerVisibility() const
{
	return Uint16(0);
}

Boolean UNIX_ProcessorAllocationSettingData::getHostResource(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOST_RESOURCE, getHostResource());
	return true;
}

Array<String> UNIX_ProcessorAllocationSettingData::getHostResource() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_ProcessorAllocationSettingData::getAllocationUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_UNITS, getAllocationUnits());
	return true;
}

String UNIX_ProcessorAllocationSettingData::getAllocationUnits() const
{
	return String ("");
}

Boolean UNIX_ProcessorAllocationSettingData::getVirtualQuantity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIRTUAL_QUANTITY, getVirtualQuantity());
	return true;
}

Uint64 UNIX_ProcessorAllocationSettingData::getVirtualQuantity() const
{
	return Uint64(0);
}

Boolean UNIX_ProcessorAllocationSettingData::getReservation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESERVATION, getReservation());
	return true;
}

Uint64 UNIX_ProcessorAllocationSettingData::getReservation() const
{
	return Uint64(0);
}

Boolean UNIX_ProcessorAllocationSettingData::getLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LIMIT, getLimit());
	return true;
}

Uint64 UNIX_ProcessorAllocationSettingData::getLimit() const
{
	return Uint64(0);
}

Boolean UNIX_ProcessorAllocationSettingData::getWeight(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WEIGHT, getWeight());
	return true;
}

Uint32 UNIX_ProcessorAllocationSettingData::getWeight() const
{
	return Uint32(0);
}

Boolean UNIX_ProcessorAllocationSettingData::getAutomaticAllocation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTOMATIC_ALLOCATION, getAutomaticAllocation());
	return true;
}

Boolean UNIX_ProcessorAllocationSettingData::getAutomaticAllocation() const
{
	return Boolean(false);
}

Boolean UNIX_ProcessorAllocationSettingData::getAutomaticDeallocation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTOMATIC_DEALLOCATION, getAutomaticDeallocation());
	return true;
}

Boolean UNIX_ProcessorAllocationSettingData::getAutomaticDeallocation() const
{
	return Boolean(false);
}

Boolean UNIX_ProcessorAllocationSettingData::getParent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARENT, getParent());
	return true;
}

String UNIX_ProcessorAllocationSettingData::getParent() const
{
	return String ("");
}

Boolean UNIX_ProcessorAllocationSettingData::getConnection(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTION, getConnection());
	return true;
}

Array<String> UNIX_ProcessorAllocationSettingData::getConnection() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_ProcessorAllocationSettingData::getAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS, getAddress());
	return true;
}

String UNIX_ProcessorAllocationSettingData::getAddress() const
{
	return String ("");
}

Boolean UNIX_ProcessorAllocationSettingData::getMappingBehavior(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAPPING_BEHAVIOR, getMappingBehavior());
	return true;
}

Uint16 UNIX_ProcessorAllocationSettingData::getMappingBehavior() const
{
	return Uint16(0);
}

Boolean UNIX_ProcessorAllocationSettingData::getAddressOnParent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_ON_PARENT, getAddressOnParent());
	return true;
}

String UNIX_ProcessorAllocationSettingData::getAddressOnParent() const
{
	return String ("");
}

Boolean UNIX_ProcessorAllocationSettingData::getVirtualQuantityUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIRTUAL_QUANTITY_UNITS, getVirtualQuantityUnits());
	return true;
}

String UNIX_ProcessorAllocationSettingData::getVirtualQuantityUnits() const
{
	return String ("");
}

Boolean UNIX_ProcessorAllocationSettingData::getProcessorArchitecture(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROCESSOR_ARCHITECTURE, getProcessorArchitecture());
	return true;
}

String UNIX_ProcessorAllocationSettingData::getProcessorArchitecture() const
{
	return String ("");
}

Boolean UNIX_ProcessorAllocationSettingData::getInstructionSet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTRUCTION_SET, getInstructionSet());
	return true;
}

String UNIX_ProcessorAllocationSettingData::getInstructionSet() const
{
	return String ("");
}

Boolean UNIX_ProcessorAllocationSettingData::getInstructionSetExtensionName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTRUCTION_SET_EXTENSION_NAME, getInstructionSetExtensionName());
	return true;
}

Array<String> UNIX_ProcessorAllocationSettingData::getInstructionSetExtensionName() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_ProcessorAllocationSettingData::getInstructionSetExtensionStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTRUCTION_SET_EXTENSION_STATUS, getInstructionSetExtensionStatus());
	return true;
}

Array<String> UNIX_ProcessorAllocationSettingData::getInstructionSetExtensionStatus() const
{
	Array<String> as;
	

	return as;

}



Boolean UNIX_ProcessorAllocationSettingData::initialize()
{
	return false;
}

Boolean UNIX_ProcessorAllocationSettingData::load(int &pIndex)
{
	return false;
}

Boolean UNIX_ProcessorAllocationSettingData::finalize()
{
	return false;
}

Boolean UNIX_ProcessorAllocationSettingData::find(Array<CIMKeyBinding> &kbArray)
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
