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


#include "UNIX_PhysicalComputerSystemViewProvider.h"

UNIX_PhysicalComputerSystemViewProvider::UNIX_PhysicalComputerSystemViewProvider()
{
}

UNIX_PhysicalComputerSystemViewProvider::~UNIX_PhysicalComputerSystemViewProvider()
{
}

CIMInstance UNIX_PhysicalComputerSystemViewProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_PhysicalComputerSystemView &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_PhysicalComputerSystemView"),
			constructKeyBindings(_p)));

	//CIM_ManagedElement Properties
	if (_p.getInstanceID(p)) inst.addProperty(p);
	if (_p.getCaption(p)) inst.addProperty(p);
	if (_p.getDescription(p)) inst.addProperty(p);
	if (_p.getElementName(p)) inst.addProperty(p);

	//CIM_View Properties

	//CIM_PhysicalComputerSystemView Properties
	if (_p.getEnabledState(p)) inst.addProperty(p);
	if (_p.getRequestedState(p)) inst.addProperty(p);
	if (_p.getOperationalStatus(p)) inst.addProperty(p);
	if (_p.getHealthState(p)) inst.addProperty(p);
	if (_p.getFRUInfoSupported(p)) inst.addProperty(p);
	if (_p.getTag(p)) inst.addProperty(p);
	if (_p.getManufacturer(p)) inst.addProperty(p);
	if (_p.getModel(p)) inst.addProperty(p);
	if (_p.getSKU(p)) inst.addProperty(p);
	if (_p.getSerialNumber(p)) inst.addProperty(p);
	if (_p.getVersion(p)) inst.addProperty(p);
	if (_p.getPartNumber(p)) inst.addProperty(p);
	if (_p.getPowerUtilizationModesSupported(p)) inst.addProperty(p);
	if (_p.getPowerUtilizationMode(p)) inst.addProperty(p);
	if (_p.getPowerAllocationLimit(p)) inst.addProperty(p);
	if (_p.getNumericSensorElementName(p)) inst.addProperty(p);
	if (_p.getNumericSensorEnabledState(p)) inst.addProperty(p);
	if (_p.getNumericSensorHealthState(p)) inst.addProperty(p);
	if (_p.getNumericSensorCurrentState(p)) inst.addProperty(p);
	if (_p.getNumericSensorPrimaryStatus(p)) inst.addProperty(p);
	if (_p.getNumericSensorBaseUnits(p)) inst.addProperty(p);
	if (_p.getNumericSensorUnitModifier(p)) inst.addProperty(p);
	if (_p.getNumericSensorRateUnits(p)) inst.addProperty(p);
	if (_p.getNumericSensorCurrentReading(p)) inst.addProperty(p);
	if (_p.getNumericSensorSensorType(p)) inst.addProperty(p);
	if (_p.getNumericSensorOtherSensorTypeDescription(p)) inst.addProperty(p);
	if (_p.getNumericSensorUpperThresholdNonCritical(p)) inst.addProperty(p);
	if (_p.getNumericSensorUpperThresholdCritical(p)) inst.addProperty(p);
	if (_p.getNumericSensorUpperThresholdFatal(p)) inst.addProperty(p);
	if (_p.getLogInstanceID(p)) inst.addProperty(p);
	if (_p.getLogMaxNumberOfRecords(p)) inst.addProperty(p);
	if (_p.getLogCurrentNumberOfRecords(p)) inst.addProperty(p);
	if (_p.getLogOverWritePolicy(p)) inst.addProperty(p);
	if (_p.getLogState(p)) inst.addProperty(p);
	if (_p.getStructuredBootString(p)) inst.addProperty(p);
	if (_p.getPersistentBootConfigOrder(p)) inst.addProperty(p);
	if (_p.getOneTimeBootSource(p)) inst.addProperty(p);
	if (_p.getNumberOfProcessors(p)) inst.addProperty(p);
	if (_p.getNumberOfProcessorCores(p)) inst.addProperty(p);
	if (_p.getNumberOfProcessorThreads(p)) inst.addProperty(p);
	if (_p.getProcessorFamily(p)) inst.addProperty(p);
	if (_p.getProcessorMaxClockSpeed(p)) inst.addProperty(p);
	if (_p.getMemoryBlockSize(p)) inst.addProperty(p);
	if (_p.getMemoryNumberOfBlocks(p)) inst.addProperty(p);
	if (_p.getMemoryConsumableBlocks(p)) inst.addProperty(p);
	if (_p.getCurrentBIOSMajorVersion(p)) inst.addProperty(p);
	if (_p.getCurrentBIOSMinorVersion(p)) inst.addProperty(p);
	if (_p.getCurrentBIOSRevisionNumber(p)) inst.addProperty(p);
	if (_p.getCurrentBIOSBuildNumber(p)) inst.addProperty(p);
	if (_p.getCurrentManagementFirmwareMajorVersion(p)) inst.addProperty(p);
	if (_p.getCurrentManagementFirmwareMinorVersion(p)) inst.addProperty(p);
	if (_p.getCurrentManagementFirmwareRevisionNumber(p)) inst.addProperty(p);
	if (_p.getCurrentManagementFirmwareBuildNumber(p)) inst.addProperty(p);
	if (_p.getCurrentManagementFirmwareElementName(p)) inst.addProperty(p);
	if (_p.getCurrentManagementFirmwareVersionString(p)) inst.addProperty(p);
	if (_p.getOSType(p)) inst.addProperty(p);
	if (_p.getOSVersion(p)) inst.addProperty(p);
	if (_p.getOSEnabledState(p)) inst.addProperty(p);
	if (_p.getCurrentBIOSVersionString(p)) inst.addProperty(p);
	if (_p.getDedicated(p)) inst.addProperty(p);
	if (_p.getIdentifyingDescriptions(p)) inst.addProperty(p);
	if (_p.getOtherDedicatedDescriptions(p)) inst.addProperty(p);
	if (_p.getOtherIdentifyingInfo(p)) inst.addProperty(p);
	if (_p.getProcessorCurrentClockSpeed(p)) inst.addProperty(p);
	if (_p.getNumericSensorContext(p)) inst.addProperty(p);
	if (_p.getNumericSensorLowerThresholdCritical(p)) inst.addProperty(p);
	if (_p.getNumericSensorLowerThresholdFatal(p)) inst.addProperty(p);
	if (_p.getNumericSensorLowerThresholdNonCritical(p)) inst.addProperty(p);


	return inst;
}

Array<CIMKeyBinding> UNIX_PhysicalComputerSystemViewProvider::constructKeyBindings(const UNIX_PhysicalComputerSystemView& _p)

{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_INSTANCE_ID,
		_p.getInstanceID(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_PhysicalComputerSystemViewProvider
#define UNIX_PROVIDER_NAME "UNIX_PhysicalComputerSystemViewProvider"
#define CLASS_IMPLEMENTATION UNIX_PhysicalComputerSystemView
#define CLASS_IMPLEMENTATION_NAME "UNIX_PhysicalComputerSystemView"
#define BASE_CLASS_NAME "CIM_PhysicalComputerSystemView"
#define NUMKEYS_CLASS_IMPLEMENTATION 1


#include "UNIXProviderBase.hpp"

