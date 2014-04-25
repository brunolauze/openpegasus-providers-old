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


UNIX_PhysicalComputerSystemView::UNIX_PhysicalComputerSystemView(void)
{
}

UNIX_PhysicalComputerSystemView::~UNIX_PhysicalComputerSystemView(void)
{
}


Boolean UNIX_PhysicalComputerSystemView::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PhysicalComputerSystemView::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_PhysicalComputerSystemView::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PhysicalComputerSystemView::getCaption() const
{
	return String ("");
}

Boolean UNIX_PhysicalComputerSystemView::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PhysicalComputerSystemView::getDescription() const
{
	return String ("");
}

Boolean UNIX_PhysicalComputerSystemView::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PhysicalComputerSystemView::getElementName() const
{
	return String("PhysicalComputerSystemView");
}

Boolean UNIX_PhysicalComputerSystemView::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_PhysicalComputerSystemView::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_PhysicalComputerSystemView::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_PhysicalComputerSystemView::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalComputerSystemView::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_PhysicalComputerSystemView::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PhysicalComputerSystemView::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_PhysicalComputerSystemView::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_PhysicalComputerSystemView::getFRUInfoSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_F_R_U_INFO_SUPPORTED, getFRUInfoSupported());
	return true;
}

Boolean UNIX_PhysicalComputerSystemView::getFRUInfoSupported() const
{
	return Boolean(false);
}

Boolean UNIX_PhysicalComputerSystemView::getTag(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TAG, getTag());
	return true;
}

String UNIX_PhysicalComputerSystemView::getTag() const
{
	return String ("");
}

Boolean UNIX_PhysicalComputerSystemView::getManufacturer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURER, getManufacturer());
	return true;
}

String UNIX_PhysicalComputerSystemView::getManufacturer() const
{
	return String ("");
}

Boolean UNIX_PhysicalComputerSystemView::getModel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MODEL, getModel());
	return true;
}

String UNIX_PhysicalComputerSystemView::getModel() const
{
	return String ("");
}

Boolean UNIX_PhysicalComputerSystemView::getSKU(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_K_U, getSKU());
	return true;
}

String UNIX_PhysicalComputerSystemView::getSKU() const
{
	return String ("");
}

Boolean UNIX_PhysicalComputerSystemView::getSerialNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERIAL_NUMBER, getSerialNumber());
	return true;
}

String UNIX_PhysicalComputerSystemView::getSerialNumber() const
{
	return String ("");
}

Boolean UNIX_PhysicalComputerSystemView::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_PhysicalComputerSystemView::getVersion() const
{
	return String ("");
}

Boolean UNIX_PhysicalComputerSystemView::getPartNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_NUMBER, getPartNumber());
	return true;
}

String UNIX_PhysicalComputerSystemView::getPartNumber() const
{
	return String ("");
}

Boolean UNIX_PhysicalComputerSystemView::getPowerUtilizationModesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_UTILIZATION_MODES_SUPPORTED, getPowerUtilizationModesSupported());
	return true;
}

Array<Uint16> UNIX_PhysicalComputerSystemView::getPowerUtilizationModesSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PhysicalComputerSystemView::getPowerUtilizationMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_UTILIZATION_MODE, getPowerUtilizationMode());
	return true;
}

Uint16 UNIX_PhysicalComputerSystemView::getPowerUtilizationMode() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalComputerSystemView::getPowerAllocationLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ALLOCATION_LIMIT, getPowerAllocationLimit());
	return true;
}

Uint64 UNIX_PhysicalComputerSystemView::getPowerAllocationLimit() const
{
	return Uint64(0);
}

Boolean UNIX_PhysicalComputerSystemView::getNumericSensorElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMERIC_SENSOR_ELEMENT_NAME, getNumericSensorElementName());
	return true;
}

Array<String> UNIX_PhysicalComputerSystemView::getNumericSensorElementName() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PhysicalComputerSystemView::getNumericSensorEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMERIC_SENSOR_ENABLED_STATE, getNumericSensorEnabledState());
	return true;
}

Array<Uint16> UNIX_PhysicalComputerSystemView::getNumericSensorEnabledState() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PhysicalComputerSystemView::getNumericSensorHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMERIC_SENSOR_HEALTH_STATE, getNumericSensorHealthState());
	return true;
}

Array<Uint16> UNIX_PhysicalComputerSystemView::getNumericSensorHealthState() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PhysicalComputerSystemView::getNumericSensorCurrentState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMERIC_SENSOR_CURRENT_STATE, getNumericSensorCurrentState());
	return true;
}

Array<String> UNIX_PhysicalComputerSystemView::getNumericSensorCurrentState() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PhysicalComputerSystemView::getNumericSensorPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMERIC_SENSOR_PRIMARY_STATUS, getNumericSensorPrimaryStatus());
	return true;
}

Array<Uint16> UNIX_PhysicalComputerSystemView::getNumericSensorPrimaryStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PhysicalComputerSystemView::getNumericSensorBaseUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMERIC_SENSOR_BASE_UNITS, getNumericSensorBaseUnits());
	return true;
}

Array<Uint16> UNIX_PhysicalComputerSystemView::getNumericSensorBaseUnits() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PhysicalComputerSystemView::getNumericSensorUnitModifier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMERIC_SENSOR_UNIT_MODIFIER, getNumericSensorUnitModifier());
	return true;
}

Array<Sint32> UNIX_PhysicalComputerSystemView::getNumericSensorUnitModifier() const
{
	Array<Sint32> as;
	

	return as;

}

Boolean UNIX_PhysicalComputerSystemView::getNumericSensorRateUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMERIC_SENSOR_RATE_UNITS, getNumericSensorRateUnits());
	return true;
}

Array<Uint16> UNIX_PhysicalComputerSystemView::getNumericSensorRateUnits() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PhysicalComputerSystemView::getNumericSensorCurrentReading(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMERIC_SENSOR_CURRENT_READING, getNumericSensorCurrentReading());
	return true;
}

Array<Sint32> UNIX_PhysicalComputerSystemView::getNumericSensorCurrentReading() const
{
	Array<Sint32> as;
	

	return as;

}

Boolean UNIX_PhysicalComputerSystemView::getNumericSensorSensorType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMERIC_SENSOR_SENSOR_TYPE, getNumericSensorSensorType());
	return true;
}

Array<Uint16> UNIX_PhysicalComputerSystemView::getNumericSensorSensorType() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PhysicalComputerSystemView::getNumericSensorOtherSensorTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMERIC_SENSOR_OTHER_SENSOR_TYPE_DESCRIPTION, getNumericSensorOtherSensorTypeDescription());
	return true;
}

Array<String> UNIX_PhysicalComputerSystemView::getNumericSensorOtherSensorTypeDescription() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PhysicalComputerSystemView::getNumericSensorUpperThresholdNonCritical(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMERIC_SENSOR_UPPER_THRESHOLD_NON_CRITICAL, getNumericSensorUpperThresholdNonCritical());
	return true;
}

Array<Sint32> UNIX_PhysicalComputerSystemView::getNumericSensorUpperThresholdNonCritical() const
{
	Array<Sint32> as;
	

	return as;

}

Boolean UNIX_PhysicalComputerSystemView::getNumericSensorUpperThresholdCritical(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMERIC_SENSOR_UPPER_THRESHOLD_CRITICAL, getNumericSensorUpperThresholdCritical());
	return true;
}

Array<Sint32> UNIX_PhysicalComputerSystemView::getNumericSensorUpperThresholdCritical() const
{
	Array<Sint32> as;
	

	return as;

}

Boolean UNIX_PhysicalComputerSystemView::getNumericSensorUpperThresholdFatal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMERIC_SENSOR_UPPER_THRESHOLD_FATAL, getNumericSensorUpperThresholdFatal());
	return true;
}

Array<Sint32> UNIX_PhysicalComputerSystemView::getNumericSensorUpperThresholdFatal() const
{
	Array<Sint32> as;
	

	return as;

}

Boolean UNIX_PhysicalComputerSystemView::getLogInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_INSTANCE_ID, getLogInstanceID());
	return true;
}

Array<String> UNIX_PhysicalComputerSystemView::getLogInstanceID() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PhysicalComputerSystemView::getLogMaxNumberOfRecords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_MAX_NUMBER_OF_RECORDS, getLogMaxNumberOfRecords());
	return true;
}

Array<Uint64> UNIX_PhysicalComputerSystemView::getLogMaxNumberOfRecords() const
{
	Array<Uint64> as;
	

	return as;

}

Boolean UNIX_PhysicalComputerSystemView::getLogCurrentNumberOfRecords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_CURRENT_NUMBER_OF_RECORDS, getLogCurrentNumberOfRecords());
	return true;
}

Array<Uint64> UNIX_PhysicalComputerSystemView::getLogCurrentNumberOfRecords() const
{
	Array<Uint64> as;
	

	return as;

}

Boolean UNIX_PhysicalComputerSystemView::getLogOverWritePolicy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_OVER_WRITE_POLICY, getLogOverWritePolicy());
	return true;
}

Array<Uint16> UNIX_PhysicalComputerSystemView::getLogOverWritePolicy() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PhysicalComputerSystemView::getLogState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_STATE, getLogState());
	return true;
}

Array<Uint16> UNIX_PhysicalComputerSystemView::getLogState() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PhysicalComputerSystemView::getStructuredBootString(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STRUCTURED_BOOT_STRING, getStructuredBootString());
	return true;
}

Array<String> UNIX_PhysicalComputerSystemView::getStructuredBootString() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PhysicalComputerSystemView::getPersistentBootConfigOrder(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERSISTENT_BOOT_CONFIG_ORDER, getPersistentBootConfigOrder());
	return true;
}

Array<Uint8> UNIX_PhysicalComputerSystemView::getPersistentBootConfigOrder() const
{
	Array<Uint8> as;
	

	return as;

}

Boolean UNIX_PhysicalComputerSystemView::getOneTimeBootSource(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ONE_TIME_BOOT_SOURCE, getOneTimeBootSource());
	return true;
}

Uint8 UNIX_PhysicalComputerSystemView::getOneTimeBootSource() const
{
	return Uint8(0);
}

Boolean UNIX_PhysicalComputerSystemView::getNumberOfProcessors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_PROCESSORS, getNumberOfProcessors());
	return true;
}

Uint16 UNIX_PhysicalComputerSystemView::getNumberOfProcessors() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalComputerSystemView::getNumberOfProcessorCores(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_PROCESSOR_CORES, getNumberOfProcessorCores());
	return true;
}

Uint16 UNIX_PhysicalComputerSystemView::getNumberOfProcessorCores() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalComputerSystemView::getNumberOfProcessorThreads(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_PROCESSOR_THREADS, getNumberOfProcessorThreads());
	return true;
}

Uint16 UNIX_PhysicalComputerSystemView::getNumberOfProcessorThreads() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalComputerSystemView::getProcessorFamily(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROCESSOR_FAMILY, getProcessorFamily());
	return true;
}

Uint16 UNIX_PhysicalComputerSystemView::getProcessorFamily() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalComputerSystemView::getProcessorMaxClockSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROCESSOR_MAX_CLOCK_SPEED, getProcessorMaxClockSpeed());
	return true;
}

Uint32 UNIX_PhysicalComputerSystemView::getProcessorMaxClockSpeed() const
{
	return Uint32(0);
}

Boolean UNIX_PhysicalComputerSystemView::getMemoryBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEMORY_BLOCK_SIZE, getMemoryBlockSize());
	return true;
}

Uint64 UNIX_PhysicalComputerSystemView::getMemoryBlockSize() const
{
	return Uint64(0);
}

Boolean UNIX_PhysicalComputerSystemView::getMemoryNumberOfBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEMORY_NUMBER_OF_BLOCKS, getMemoryNumberOfBlocks());
	return true;
}

Uint64 UNIX_PhysicalComputerSystemView::getMemoryNumberOfBlocks() const
{
	return Uint64(0);
}

Boolean UNIX_PhysicalComputerSystemView::getMemoryConsumableBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEMORY_CONSUMABLE_BLOCKS, getMemoryConsumableBlocks());
	return true;
}

Uint64 UNIX_PhysicalComputerSystemView::getMemoryConsumableBlocks() const
{
	return Uint64(0);
}

Boolean UNIX_PhysicalComputerSystemView::getCurrentBIOSMajorVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_B_I_OS_MAJOR_VERSION, getCurrentBIOSMajorVersion());
	return true;
}

Uint16 UNIX_PhysicalComputerSystemView::getCurrentBIOSMajorVersion() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalComputerSystemView::getCurrentBIOSMinorVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_B_I_OS_MINOR_VERSION, getCurrentBIOSMinorVersion());
	return true;
}

Uint16 UNIX_PhysicalComputerSystemView::getCurrentBIOSMinorVersion() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalComputerSystemView::getCurrentBIOSRevisionNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_B_I_OS_REVISION_NUMBER, getCurrentBIOSRevisionNumber());
	return true;
}

Uint16 UNIX_PhysicalComputerSystemView::getCurrentBIOSRevisionNumber() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalComputerSystemView::getCurrentBIOSBuildNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_B_I_OS_BUILD_NUMBER, getCurrentBIOSBuildNumber());
	return true;
}

Uint16 UNIX_PhysicalComputerSystemView::getCurrentBIOSBuildNumber() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalComputerSystemView::getCurrentManagementFirmwareMajorVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_MANAGEMENT_FIRMWARE_MAJOR_VERSION, getCurrentManagementFirmwareMajorVersion());
	return true;
}

Uint16 UNIX_PhysicalComputerSystemView::getCurrentManagementFirmwareMajorVersion() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalComputerSystemView::getCurrentManagementFirmwareMinorVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_MANAGEMENT_FIRMWARE_MINOR_VERSION, getCurrentManagementFirmwareMinorVersion());
	return true;
}

Uint16 UNIX_PhysicalComputerSystemView::getCurrentManagementFirmwareMinorVersion() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalComputerSystemView::getCurrentManagementFirmwareRevisionNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_MANAGEMENT_FIRMWARE_REVISION_NUMBER, getCurrentManagementFirmwareRevisionNumber());
	return true;
}

Uint16 UNIX_PhysicalComputerSystemView::getCurrentManagementFirmwareRevisionNumber() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalComputerSystemView::getCurrentManagementFirmwareBuildNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_MANAGEMENT_FIRMWARE_BUILD_NUMBER, getCurrentManagementFirmwareBuildNumber());
	return true;
}

Uint16 UNIX_PhysicalComputerSystemView::getCurrentManagementFirmwareBuildNumber() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalComputerSystemView::getCurrentManagementFirmwareElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_MANAGEMENT_FIRMWARE_ELEMENT_NAME, getCurrentManagementFirmwareElementName());
	return true;
}

String UNIX_PhysicalComputerSystemView::getCurrentManagementFirmwareElementName() const
{
	return String ("");
}

Boolean UNIX_PhysicalComputerSystemView::getCurrentManagementFirmwareVersionString(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_MANAGEMENT_FIRMWARE_VERSION_STRING, getCurrentManagementFirmwareVersionString());
	return true;
}

String UNIX_PhysicalComputerSystemView::getCurrentManagementFirmwareVersionString() const
{
	return String ("");
}

Boolean UNIX_PhysicalComputerSystemView::getOSType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OS_TYPE, getOSType());
	return true;
}

Uint16 UNIX_PhysicalComputerSystemView::getOSType() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalComputerSystemView::getOSVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OS_VERSION, getOSVersion());
	return true;
}

String UNIX_PhysicalComputerSystemView::getOSVersion() const
{
	return String ("");
}

Boolean UNIX_PhysicalComputerSystemView::getOSEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OS_ENABLED_STATE, getOSEnabledState());
	return true;
}

Uint16 UNIX_PhysicalComputerSystemView::getOSEnabledState() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalComputerSystemView::getCurrentBIOSVersionString(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_B_I_OS_VERSION_STRING, getCurrentBIOSVersionString());
	return true;
}

String UNIX_PhysicalComputerSystemView::getCurrentBIOSVersionString() const
{
	return String ("");
}

Boolean UNIX_PhysicalComputerSystemView::getDedicated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEDICATED, getDedicated());
	return true;
}

Array<Uint16> UNIX_PhysicalComputerSystemView::getDedicated() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PhysicalComputerSystemView::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_PhysicalComputerSystemView::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PhysicalComputerSystemView::getOtherDedicatedDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_DEDICATED_DESCRIPTIONS, getOtherDedicatedDescriptions());
	return true;
}

Array<String> UNIX_PhysicalComputerSystemView::getOtherDedicatedDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PhysicalComputerSystemView::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_PhysicalComputerSystemView::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PhysicalComputerSystemView::getProcessorCurrentClockSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROCESSOR_CURRENT_CLOCK_SPEED, getProcessorCurrentClockSpeed());
	return true;
}

Uint32 UNIX_PhysicalComputerSystemView::getProcessorCurrentClockSpeed() const
{
	return Uint32(0);
}

Boolean UNIX_PhysicalComputerSystemView::getNumericSensorContext(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMERIC_SENSOR_CONTEXT, getNumericSensorContext());
	return true;
}

Array<String> UNIX_PhysicalComputerSystemView::getNumericSensorContext() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PhysicalComputerSystemView::getNumericSensorLowerThresholdCritical(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMERIC_SENSOR_LOWER_THRESHOLD_CRITICAL, getNumericSensorLowerThresholdCritical());
	return true;
}

Array<Sint32> UNIX_PhysicalComputerSystemView::getNumericSensorLowerThresholdCritical() const
{
	Array<Sint32> as;
	

	return as;

}

Boolean UNIX_PhysicalComputerSystemView::getNumericSensorLowerThresholdFatal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMERIC_SENSOR_LOWER_THRESHOLD_FATAL, getNumericSensorLowerThresholdFatal());
	return true;
}

Array<Sint32> UNIX_PhysicalComputerSystemView::getNumericSensorLowerThresholdFatal() const
{
	Array<Sint32> as;
	

	return as;

}

Boolean UNIX_PhysicalComputerSystemView::getNumericSensorLowerThresholdNonCritical(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMERIC_SENSOR_LOWER_THRESHOLD_NON_CRITICAL, getNumericSensorLowerThresholdNonCritical());
	return true;
}

Array<Sint32> UNIX_PhysicalComputerSystemView::getNumericSensorLowerThresholdNonCritical() const
{
	Array<Sint32> as;
	

	return as;

}



Boolean UNIX_PhysicalComputerSystemView::initialize()
{
	return false;
}

Boolean UNIX_PhysicalComputerSystemView::load(int &pIndex)
{
	return false;
}

Boolean UNIX_PhysicalComputerSystemView::finalize()
{
	return false;
}

Boolean UNIX_PhysicalComputerSystemView::find(Array<CIMKeyBinding> &kbArray)
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
