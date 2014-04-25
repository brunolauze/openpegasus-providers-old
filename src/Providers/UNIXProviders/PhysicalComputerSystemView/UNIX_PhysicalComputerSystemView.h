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

#ifndef __UNIX_PHYSICALCOMPUTERSYSTEMVIEW_H
#define __UNIX_PHYSICALCOMPUTERSYSTEMVIEW_H


#include "CIM_View.h"

#include "UNIX_PhysicalComputerSystemViewDeps.h"


#define PROPERTY_ENABLED_STATE				"EnabledState"
#define PROPERTY_REQUESTED_STATE				"RequestedState"
#define PROPERTY_OPERATIONAL_STATUS				"OperationalStatus"
#define PROPERTY_HEALTH_STATE				"HealthState"
#define PROPERTY_F_R_U_INFO_SUPPORTED				"FRUInfoSupported"
#define PROPERTY_TAG				"Tag"
#define PROPERTY_MANUFACTURER				"Manufacturer"
#define PROPERTY_MODEL				"Model"
#define PROPERTY_S_K_U				"SKU"
#define PROPERTY_SERIAL_NUMBER				"SerialNumber"
#define PROPERTY_VERSION				"Version"
#define PROPERTY_PART_NUMBER				"PartNumber"
#define PROPERTY_POWER_UTILIZATION_MODES_SUPPORTED				"PowerUtilizationModesSupported"
#define PROPERTY_POWER_UTILIZATION_MODE				"PowerUtilizationMode"
#define PROPERTY_POWER_ALLOCATION_LIMIT				"PowerAllocationLimit"
#define PROPERTY_NUMERIC_SENSOR_ELEMENT_NAME				"NumericSensorElementName"
#define PROPERTY_NUMERIC_SENSOR_ENABLED_STATE				"NumericSensorEnabledState"
#define PROPERTY_NUMERIC_SENSOR_HEALTH_STATE				"NumericSensorHealthState"
#define PROPERTY_NUMERIC_SENSOR_CURRENT_STATE				"NumericSensorCurrentState"
#define PROPERTY_NUMERIC_SENSOR_PRIMARY_STATUS				"NumericSensorPrimaryStatus"
#define PROPERTY_NUMERIC_SENSOR_BASE_UNITS				"NumericSensorBaseUnits"
#define PROPERTY_NUMERIC_SENSOR_UNIT_MODIFIER				"NumericSensorUnitModifier"
#define PROPERTY_NUMERIC_SENSOR_RATE_UNITS				"NumericSensorRateUnits"
#define PROPERTY_NUMERIC_SENSOR_CURRENT_READING				"NumericSensorCurrentReading"
#define PROPERTY_NUMERIC_SENSOR_SENSOR_TYPE				"NumericSensorSensorType"
#define PROPERTY_NUMERIC_SENSOR_OTHER_SENSOR_TYPE_DESCRIPTION				"NumericSensorOtherSensorTypeDescription"
#define PROPERTY_NUMERIC_SENSOR_UPPER_THRESHOLD_NON_CRITICAL				"NumericSensorUpperThresholdNonCritical"
#define PROPERTY_NUMERIC_SENSOR_UPPER_THRESHOLD_CRITICAL				"NumericSensorUpperThresholdCritical"
#define PROPERTY_NUMERIC_SENSOR_UPPER_THRESHOLD_FATAL				"NumericSensorUpperThresholdFatal"
#define PROPERTY_LOG_INSTANCE_ID				"LogInstanceID"
#define PROPERTY_LOG_MAX_NUMBER_OF_RECORDS				"LogMaxNumberOfRecords"
#define PROPERTY_LOG_CURRENT_NUMBER_OF_RECORDS				"LogCurrentNumberOfRecords"
#define PROPERTY_LOG_OVER_WRITE_POLICY				"LogOverWritePolicy"
#define PROPERTY_LOG_STATE				"LogState"
#define PROPERTY_STRUCTURED_BOOT_STRING				"StructuredBootString"
#define PROPERTY_PERSISTENT_BOOT_CONFIG_ORDER				"PersistentBootConfigOrder"
#define PROPERTY_ONE_TIME_BOOT_SOURCE				"OneTimeBootSource"
#define PROPERTY_NUMBER_OF_PROCESSORS				"NumberOfProcessors"
#define PROPERTY_NUMBER_OF_PROCESSOR_CORES				"NumberOfProcessorCores"
#define PROPERTY_NUMBER_OF_PROCESSOR_THREADS				"NumberOfProcessorThreads"
#define PROPERTY_PROCESSOR_FAMILY				"ProcessorFamily"
#define PROPERTY_PROCESSOR_MAX_CLOCK_SPEED				"ProcessorMaxClockSpeed"
#define PROPERTY_MEMORY_BLOCK_SIZE				"MemoryBlockSize"
#define PROPERTY_MEMORY_NUMBER_OF_BLOCKS				"MemoryNumberOfBlocks"
#define PROPERTY_MEMORY_CONSUMABLE_BLOCKS				"MemoryConsumableBlocks"
#define PROPERTY_CURRENT_B_I_OS_MAJOR_VERSION				"CurrentBIOSMajorVersion"
#define PROPERTY_CURRENT_B_I_OS_MINOR_VERSION				"CurrentBIOSMinorVersion"
#define PROPERTY_CURRENT_B_I_OS_REVISION_NUMBER				"CurrentBIOSRevisionNumber"
#define PROPERTY_CURRENT_B_I_OS_BUILD_NUMBER				"CurrentBIOSBuildNumber"
#define PROPERTY_CURRENT_MANAGEMENT_FIRMWARE_MAJOR_VERSION				"CurrentManagementFirmwareMajorVersion"
#define PROPERTY_CURRENT_MANAGEMENT_FIRMWARE_MINOR_VERSION				"CurrentManagementFirmwareMinorVersion"
#define PROPERTY_CURRENT_MANAGEMENT_FIRMWARE_REVISION_NUMBER				"CurrentManagementFirmwareRevisionNumber"
#define PROPERTY_CURRENT_MANAGEMENT_FIRMWARE_BUILD_NUMBER				"CurrentManagementFirmwareBuildNumber"
#define PROPERTY_CURRENT_MANAGEMENT_FIRMWARE_ELEMENT_NAME				"CurrentManagementFirmwareElementName"
#define PROPERTY_CURRENT_MANAGEMENT_FIRMWARE_VERSION_STRING				"CurrentManagementFirmwareVersionString"
#define PROPERTY_OS_TYPE				"OSType"
#define PROPERTY_OS_VERSION				"OSVersion"
#define PROPERTY_OS_ENABLED_STATE				"OSEnabledState"
#define PROPERTY_CURRENT_B_I_OS_VERSION_STRING				"CurrentBIOSVersionString"
#define PROPERTY_DEDICATED				"Dedicated"
#define PROPERTY_IDENTIFYING_DESCRIPTIONS				"IdentifyingDescriptions"
#define PROPERTY_OTHER_DEDICATED_DESCRIPTIONS				"OtherDedicatedDescriptions"
#define PROPERTY_OTHER_IDENTIFYING_INFO				"OtherIdentifyingInfo"
#define PROPERTY_PROCESSOR_CURRENT_CLOCK_SPEED				"ProcessorCurrentClockSpeed"
#define PROPERTY_NUMERIC_SENSOR_CONTEXT				"NumericSensorContext"
#define PROPERTY_NUMERIC_SENSOR_LOWER_THRESHOLD_CRITICAL				"NumericSensorLowerThresholdCritical"
#define PROPERTY_NUMERIC_SENSOR_LOWER_THRESHOLD_FATAL				"NumericSensorLowerThresholdFatal"
#define PROPERTY_NUMERIC_SENSOR_LOWER_THRESHOLD_NON_CRITICAL				"NumericSensorLowerThresholdNonCritical"


class UNIX_PhysicalComputerSystemView :
	public CIM_View
{
public:

	UNIX_PhysicalComputerSystemView();
	~UNIX_PhysicalComputerSystemView();

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
	virtual Boolean getEnabledState(CIMProperty&) const;
	virtual Uint16 getEnabledState() const;
	virtual Boolean getRequestedState(CIMProperty&) const;
	virtual Uint16 getRequestedState() const;
	virtual Boolean getOperationalStatus(CIMProperty&) const;
	virtual Array<Uint16> getOperationalStatus() const;
	virtual Boolean getHealthState(CIMProperty&) const;
	virtual Uint16 getHealthState() const;
	virtual Boolean getFRUInfoSupported(CIMProperty&) const;
	virtual Boolean getFRUInfoSupported() const;
	virtual Boolean getTag(CIMProperty&) const;
	virtual String getTag() const;
	virtual Boolean getManufacturer(CIMProperty&) const;
	virtual String getManufacturer() const;
	virtual Boolean getModel(CIMProperty&) const;
	virtual String getModel() const;
	virtual Boolean getSKU(CIMProperty&) const;
	virtual String getSKU() const;
	virtual Boolean getSerialNumber(CIMProperty&) const;
	virtual String getSerialNumber() const;
	virtual Boolean getVersion(CIMProperty&) const;
	virtual String getVersion() const;
	virtual Boolean getPartNumber(CIMProperty&) const;
	virtual String getPartNumber() const;
	virtual Boolean getPowerUtilizationModesSupported(CIMProperty&) const;
	virtual Array<Uint16> getPowerUtilizationModesSupported() const;
	virtual Boolean getPowerUtilizationMode(CIMProperty&) const;
	virtual Uint16 getPowerUtilizationMode() const;
	virtual Boolean getPowerAllocationLimit(CIMProperty&) const;
	virtual Uint64 getPowerAllocationLimit() const;
	virtual Boolean getNumericSensorElementName(CIMProperty&) const;
	virtual Array<String> getNumericSensorElementName() const;
	virtual Boolean getNumericSensorEnabledState(CIMProperty&) const;
	virtual Array<Uint16> getNumericSensorEnabledState() const;
	virtual Boolean getNumericSensorHealthState(CIMProperty&) const;
	virtual Array<Uint16> getNumericSensorHealthState() const;
	virtual Boolean getNumericSensorCurrentState(CIMProperty&) const;
	virtual Array<String> getNumericSensorCurrentState() const;
	virtual Boolean getNumericSensorPrimaryStatus(CIMProperty&) const;
	virtual Array<Uint16> getNumericSensorPrimaryStatus() const;
	virtual Boolean getNumericSensorBaseUnits(CIMProperty&) const;
	virtual Array<Uint16> getNumericSensorBaseUnits() const;
	virtual Boolean getNumericSensorUnitModifier(CIMProperty&) const;
	virtual Array<Sint32> getNumericSensorUnitModifier() const;
	virtual Boolean getNumericSensorRateUnits(CIMProperty&) const;
	virtual Array<Uint16> getNumericSensorRateUnits() const;
	virtual Boolean getNumericSensorCurrentReading(CIMProperty&) const;
	virtual Array<Sint32> getNumericSensorCurrentReading() const;
	virtual Boolean getNumericSensorSensorType(CIMProperty&) const;
	virtual Array<Uint16> getNumericSensorSensorType() const;
	virtual Boolean getNumericSensorOtherSensorTypeDescription(CIMProperty&) const;
	virtual Array<String> getNumericSensorOtherSensorTypeDescription() const;
	virtual Boolean getNumericSensorUpperThresholdNonCritical(CIMProperty&) const;
	virtual Array<Sint32> getNumericSensorUpperThresholdNonCritical() const;
	virtual Boolean getNumericSensorUpperThresholdCritical(CIMProperty&) const;
	virtual Array<Sint32> getNumericSensorUpperThresholdCritical() const;
	virtual Boolean getNumericSensorUpperThresholdFatal(CIMProperty&) const;
	virtual Array<Sint32> getNumericSensorUpperThresholdFatal() const;
	virtual Boolean getLogInstanceID(CIMProperty&) const;
	virtual Array<String> getLogInstanceID() const;
	virtual Boolean getLogMaxNumberOfRecords(CIMProperty&) const;
	virtual Array<Uint64> getLogMaxNumberOfRecords() const;
	virtual Boolean getLogCurrentNumberOfRecords(CIMProperty&) const;
	virtual Array<Uint64> getLogCurrentNumberOfRecords() const;
	virtual Boolean getLogOverWritePolicy(CIMProperty&) const;
	virtual Array<Uint16> getLogOverWritePolicy() const;
	virtual Boolean getLogState(CIMProperty&) const;
	virtual Array<Uint16> getLogState() const;
	virtual Boolean getStructuredBootString(CIMProperty&) const;
	virtual Array<String> getStructuredBootString() const;
	virtual Boolean getPersistentBootConfigOrder(CIMProperty&) const;
	virtual Array<Uint8> getPersistentBootConfigOrder() const;
	virtual Boolean getOneTimeBootSource(CIMProperty&) const;
	virtual Uint8 getOneTimeBootSource() const;
	virtual Boolean getNumberOfProcessors(CIMProperty&) const;
	virtual Uint16 getNumberOfProcessors() const;
	virtual Boolean getNumberOfProcessorCores(CIMProperty&) const;
	virtual Uint16 getNumberOfProcessorCores() const;
	virtual Boolean getNumberOfProcessorThreads(CIMProperty&) const;
	virtual Uint16 getNumberOfProcessorThreads() const;
	virtual Boolean getProcessorFamily(CIMProperty&) const;
	virtual Uint16 getProcessorFamily() const;
	virtual Boolean getProcessorMaxClockSpeed(CIMProperty&) const;
	virtual Uint32 getProcessorMaxClockSpeed() const;
	virtual Boolean getMemoryBlockSize(CIMProperty&) const;
	virtual Uint64 getMemoryBlockSize() const;
	virtual Boolean getMemoryNumberOfBlocks(CIMProperty&) const;
	virtual Uint64 getMemoryNumberOfBlocks() const;
	virtual Boolean getMemoryConsumableBlocks(CIMProperty&) const;
	virtual Uint64 getMemoryConsumableBlocks() const;
	virtual Boolean getCurrentBIOSMajorVersion(CIMProperty&) const;
	virtual Uint16 getCurrentBIOSMajorVersion() const;
	virtual Boolean getCurrentBIOSMinorVersion(CIMProperty&) const;
	virtual Uint16 getCurrentBIOSMinorVersion() const;
	virtual Boolean getCurrentBIOSRevisionNumber(CIMProperty&) const;
	virtual Uint16 getCurrentBIOSRevisionNumber() const;
	virtual Boolean getCurrentBIOSBuildNumber(CIMProperty&) const;
	virtual Uint16 getCurrentBIOSBuildNumber() const;
	virtual Boolean getCurrentManagementFirmwareMajorVersion(CIMProperty&) const;
	virtual Uint16 getCurrentManagementFirmwareMajorVersion() const;
	virtual Boolean getCurrentManagementFirmwareMinorVersion(CIMProperty&) const;
	virtual Uint16 getCurrentManagementFirmwareMinorVersion() const;
	virtual Boolean getCurrentManagementFirmwareRevisionNumber(CIMProperty&) const;
	virtual Uint16 getCurrentManagementFirmwareRevisionNumber() const;
	virtual Boolean getCurrentManagementFirmwareBuildNumber(CIMProperty&) const;
	virtual Uint16 getCurrentManagementFirmwareBuildNumber() const;
	virtual Boolean getCurrentManagementFirmwareElementName(CIMProperty&) const;
	virtual String getCurrentManagementFirmwareElementName() const;
	virtual Boolean getCurrentManagementFirmwareVersionString(CIMProperty&) const;
	virtual String getCurrentManagementFirmwareVersionString() const;
	virtual Boolean getOSType(CIMProperty&) const;
	virtual Uint16 getOSType() const;
	virtual Boolean getOSVersion(CIMProperty&) const;
	virtual String getOSVersion() const;
	virtual Boolean getOSEnabledState(CIMProperty&) const;
	virtual Uint16 getOSEnabledState() const;
	virtual Boolean getCurrentBIOSVersionString(CIMProperty&) const;
	virtual String getCurrentBIOSVersionString() const;
	virtual Boolean getDedicated(CIMProperty&) const;
	virtual Array<Uint16> getDedicated() const;
	virtual Boolean getIdentifyingDescriptions(CIMProperty&) const;
	virtual Array<String> getIdentifyingDescriptions() const;
	virtual Boolean getOtherDedicatedDescriptions(CIMProperty&) const;
	virtual Array<String> getOtherDedicatedDescriptions() const;
	virtual Boolean getOtherIdentifyingInfo(CIMProperty&) const;
	virtual Array<String> getOtherIdentifyingInfo() const;
	virtual Boolean getProcessorCurrentClockSpeed(CIMProperty&) const;
	virtual Uint32 getProcessorCurrentClockSpeed() const;
	virtual Boolean getNumericSensorContext(CIMProperty&) const;
	virtual Array<String> getNumericSensorContext() const;
	virtual Boolean getNumericSensorLowerThresholdCritical(CIMProperty&) const;
	virtual Array<Sint32> getNumericSensorLowerThresholdCritical() const;
	virtual Boolean getNumericSensorLowerThresholdFatal(CIMProperty&) const;
	virtual Array<Sint32> getNumericSensorLowerThresholdFatal() const;
	virtual Boolean getNumericSensorLowerThresholdNonCritical(CIMProperty&) const;
	virtual Array<Sint32> getNumericSensorLowerThresholdNonCritical() const;

private:
	CIMName currentScope;

#	include "UNIX_PhysicalComputerSystemViewPrivate.h"


};

#endif /* UNIX_PHYSICALCOMPUTERSYSTEMVIEW */
