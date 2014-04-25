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


#include "UNIX_StorageAllocationSettingDataProvider.h"

UNIX_StorageAllocationSettingDataProvider::UNIX_StorageAllocationSettingDataProvider()
{
}

UNIX_StorageAllocationSettingDataProvider::~UNIX_StorageAllocationSettingDataProvider()
{
}

CIMInstance UNIX_StorageAllocationSettingDataProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_StorageAllocationSettingData &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_StorageAllocationSettingData"),
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

	//CIM_StorageAllocationSettingData Properties
	if (_p.getVirtualResourceBlockSize(p)) inst.addProperty(p);
	if (_p.getAccess(p)) inst.addProperty(p);
	if (_p.getHostResourceBlockSize(p)) inst.addProperty(p);
	if (_p.getHostExtentStartingAddress(p)) inst.addProperty(p);
	if (_p.getHostExtentName(p)) inst.addProperty(p);
	if (_p.getHostExtentNameFormat(p)) inst.addProperty(p);
	if (_p.getOtherHostExtentNameFormat(p)) inst.addProperty(p);
	if (_p.getHostExtentNameNamespace(p)) inst.addProperty(p);
	if (_p.getOtherHostExtentNameNamespace(p)) inst.addProperty(p);


	return inst;
}

Array<CIMKeyBinding> UNIX_StorageAllocationSettingDataProvider::constructKeyBindings(const UNIX_StorageAllocationSettingData& _p)

{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_INSTANCE_ID,
		_p.getInstanceID(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_StorageAllocationSettingDataProvider
#define UNIX_PROVIDER_NAME "UNIX_StorageAllocationSettingDataProvider"
#define CLASS_IMPLEMENTATION UNIX_StorageAllocationSettingData
#define CLASS_IMPLEMENTATION_NAME "UNIX_StorageAllocationSettingData"
#define BASE_CLASS_NAME "CIM_StorageAllocationSettingData"
#define NUMKEYS_CLASS_IMPLEMENTATION 0


#include "UNIXProviderBase.hpp"

