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


#include "UNIX_StorageMediaLocationProvider.h"

UNIX_StorageMediaLocationProvider::UNIX_StorageMediaLocationProvider()
{
}

UNIX_StorageMediaLocationProvider::~UNIX_StorageMediaLocationProvider()
{
}

CIMInstance UNIX_StorageMediaLocationProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_StorageMediaLocation &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_StorageMediaLocation"),
			constructKeyBindings(_p)));

	//CIM_ManagedElement Properties
	if (_p.getInstanceID(p)) inst.addProperty(p);
	if (_p.getCaption(p)) inst.addProperty(p);
	if (_p.getDescription(p)) inst.addProperty(p);
	if (_p.getElementName(p)) inst.addProperty(p);

	//CIM_ManagedSystemElement Properties
	if (_p.getInstallDate(p)) inst.addProperty(p);
	if (_p.getName(p)) inst.addProperty(p);
	if (_p.getOperationalStatus(p)) inst.addProperty(p);
	if (_p.getStatusDescriptions(p)) inst.addProperty(p);
	if (_p.getStatus(p)) inst.addProperty(p);
	if (_p.getHealthState(p)) inst.addProperty(p);
	if (_p.getCommunicationStatus(p)) inst.addProperty(p);
	if (_p.getDetailedStatus(p)) inst.addProperty(p);
	if (_p.getOperatingStatus(p)) inst.addProperty(p);
	if (_p.getPrimaryStatus(p)) inst.addProperty(p);

	//CIM_PhysicalElement Properties
	if (_p.getTag(p)) inst.addProperty(p);
	if (_p.getCreationClassName(p)) inst.addProperty(p);
	if (_p.getManufacturer(p)) inst.addProperty(p);
	if (_p.getModel(p)) inst.addProperty(p);
	if (_p.getSKU(p)) inst.addProperty(p);
	if (_p.getSerialNumber(p)) inst.addProperty(p);
	if (_p.getVersion(p)) inst.addProperty(p);
	if (_p.getPartNumber(p)) inst.addProperty(p);
	if (_p.getOtherIdentifyingInfo(p)) inst.addProperty(p);
	if (_p.getPoweredOn(p)) inst.addProperty(p);
	if (_p.getManufactureDate(p)) inst.addProperty(p);
	if (_p.getVendorEquipmentType(p)) inst.addProperty(p);
	if (_p.getUserTracking(p)) inst.addProperty(p);
	if (_p.getCanBeFRUed(p)) inst.addProperty(p);

	//CIM_PhysicalPackage Properties
	if (_p.getRemovalConditions(p)) inst.addProperty(p);
	if (_p.getRemovable(p)) inst.addProperty(p);
	if (_p.getReplaceable(p)) inst.addProperty(p);
	if (_p.getHotSwappable(p)) inst.addProperty(p);
	if (_p.getHeight(p)) inst.addProperty(p);
	if (_p.getDepth(p)) inst.addProperty(p);
	if (_p.getWidth(p)) inst.addProperty(p);
	if (_p.getWeight(p)) inst.addProperty(p);
	if (_p.getPackageType(p)) inst.addProperty(p);
	if (_p.getOtherPackageType(p)) inst.addProperty(p);
	if (_p.getVendorCompatibilityStrings(p)) inst.addProperty(p);

	//CIM_PackageLocation Properties
	if (_p.getLocationCoordinates(p)) inst.addProperty(p);

	//CIM_StorageMediaLocation Properties
	if (_p.getLocationType(p)) inst.addProperty(p);
	if (_p.getMediaTypesSupported(p)) inst.addProperty(p);
	if (_p.getMediaSizesSupported(p)) inst.addProperty(p);
	if (_p.getMediaCapacity(p)) inst.addProperty(p);
	if (_p.getTypeDescriptions(p)) inst.addProperty(p);


	return inst;
}

Array<CIMKeyBinding> UNIX_StorageMediaLocationProvider::constructKeyBindings(const UNIX_StorageMediaLocation& _p)

{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_TAG,
		_p.getTag(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_CREATION_CLASS_NAME,
		_p.getCreationClassName(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_StorageMediaLocationProvider
#define UNIX_PROVIDER_NAME "UNIX_StorageMediaLocationProvider"
#define CLASS_IMPLEMENTATION UNIX_StorageMediaLocation
#define CLASS_IMPLEMENTATION_NAME "UNIX_StorageMediaLocation"
#define BASE_CLASS_NAME "CIM_StorageMediaLocation"
#define NUMKEYS_CLASS_IMPLEMENTATION 0


#include "UNIXProviderBase.hpp"

