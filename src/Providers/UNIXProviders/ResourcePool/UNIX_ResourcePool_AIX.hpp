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


UNIX_ResourcePool::UNIX_ResourcePool(void)
{
}

UNIX_ResourcePool::~UNIX_ResourcePool(void)
{
}


Boolean UNIX_ResourcePool::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ResourcePool::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_ResourcePool::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ResourcePool::getCaption() const
{
	return String ("");
}

Boolean UNIX_ResourcePool::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ResourcePool::getDescription() const
{
	return String ("");
}

Boolean UNIX_ResourcePool::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ResourcePool::getElementName() const
{
	return String("ResourcePool");
}

Boolean UNIX_ResourcePool::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_ResourcePool::getInstallDate() const
{
	struct tm* clock;			// create a time structure
	time_t val = time(NULL);
	clock = gmtime(&(val));	// Get the last modified time and put it into the time structure
	return CIMDateTime(
		clock->tm_year + 1900,
		clock->tm_mon + 1,
		clock->tm_mday,
		clock->tm_hour,
		clock->tm_min,
		clock->tm_sec,
		0,0,
		clock->tm_gmtoff);
}

Boolean UNIX_ResourcePool::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_ResourcePool::getName() const
{
	return String ("");
}

Boolean UNIX_ResourcePool::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_ResourcePool::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_ResourcePool::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_ResourcePool::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_ResourcePool::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_ResourcePool::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_ResourcePool::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_ResourcePool::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_ResourcePool::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_ResourcePool::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_ResourcePool::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_ResourcePool::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_ResourcePool::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_ResourcePool::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_ResourcePool::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_ResourcePool::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_ResourcePool::getPoolID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POOL_ID, getPoolID());
	return true;
}

String UNIX_ResourcePool::getPoolID() const
{
	return String ("");
}

Boolean UNIX_ResourcePool::getPrimordial(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMORDIAL, getPrimordial());
	return true;
}

Boolean UNIX_ResourcePool::getPrimordial() const
{
	return Boolean(false);
}

Boolean UNIX_ResourcePool::getCapacity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPACITY, getCapacity());
	return true;
}

Uint64 UNIX_ResourcePool::getCapacity() const
{
	return Uint64(0);
}

Boolean UNIX_ResourcePool::getReserved(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESERVED, getReserved());
	return true;
}

Uint64 UNIX_ResourcePool::getReserved() const
{
	return Uint64(0);
}

Boolean UNIX_ResourcePool::getResourceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESOURCE_TYPE, getResourceType());
	return true;
}

Uint16 UNIX_ResourcePool::getResourceType() const
{
	return Uint16(0);
}

Boolean UNIX_ResourcePool::getOtherResourceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_RESOURCE_TYPE, getOtherResourceType());
	return true;
}

String UNIX_ResourcePool::getOtherResourceType() const
{
	return String ("");
}

Boolean UNIX_ResourcePool::getResourceSubType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESOURCE_SUB_TYPE, getResourceSubType());
	return true;
}

String UNIX_ResourcePool::getResourceSubType() const
{
	return String ("");
}

Boolean UNIX_ResourcePool::getAllocationUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_UNITS, getAllocationUnits());
	return true;
}

String UNIX_ResourcePool::getAllocationUnits() const
{
	return String ("");
}

Boolean UNIX_ResourcePool::getConsumedResourceUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONSUMED_RESOURCE_UNITS, getConsumedResourceUnits());
	return true;
}

String UNIX_ResourcePool::getConsumedResourceUnits() const
{
	return String ("");
}

Boolean UNIX_ResourcePool::getCurrentlyConsumedResource(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENTLY_CONSUMED_RESOURCE, getCurrentlyConsumedResource());
	return true;
}

Uint64 UNIX_ResourcePool::getCurrentlyConsumedResource() const
{
	return Uint64(0);
}

Boolean UNIX_ResourcePool::getMaxConsumableResource(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_CONSUMABLE_RESOURCE, getMaxConsumableResource());
	return true;
}

Uint64 UNIX_ResourcePool::getMaxConsumableResource() const
{
	return Uint64(0);
}



Boolean UNIX_ResourcePool::initialize()
{
	return false;
}

Boolean UNIX_ResourcePool::load(int &pIndex)
{
	return false;
}

Boolean UNIX_ResourcePool::finalize()
{
	return false;
}

Boolean UNIX_ResourcePool::find(Array<CIMKeyBinding> &kbArray)
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
