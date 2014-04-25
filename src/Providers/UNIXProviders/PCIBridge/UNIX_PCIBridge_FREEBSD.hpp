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


UNIX_PCIBridge::UNIX_PCIBridge(void)
{
}

UNIX_PCIBridge::~UNIX_PCIBridge(void)
{
}


Boolean UNIX_PCIBridge::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PCIBridge::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_PCIBridge::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PCIBridge::getCaption() const
{
	return String ("");
}

Boolean UNIX_PCIBridge::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PCIBridge::getDescription() const
{
	return String ("");
}

Boolean UNIX_PCIBridge::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PCIBridge::getElementName() const
{
	return String("PCIBridge");
}

Boolean UNIX_PCIBridge::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_PCIBridge::getInstallDate() const
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

Boolean UNIX_PCIBridge::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PCIBridge::getName() const
{
	return String ("");
}

Boolean UNIX_PCIBridge::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_PCIBridge::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PCIBridge::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_PCIBridge::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PCIBridge::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_PCIBridge::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_PCIBridge::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_PCIBridge::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_PCIBridge::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_PCIBridge::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_PCIBridge::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_PCIBridge::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_PCIBridge::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_PCIBridge::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_PCIBridge::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_PCIBridge::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_PCIBridge::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_PCIBridge::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_PCIBridge::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_PCIBridge::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_PCIBridge::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_PCIBridge::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_PCIBridge::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_PCIBridge::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_PCIBridge::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_PCIBridge::getTimeOfLastStateChange() const
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

Boolean UNIX_PCIBridge::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_PCIBridge::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PCIBridge::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_PCIBridge::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_PCIBridge::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_PCIBridge::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_PCIBridge::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_PCIBridge::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_PCIBridge::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_PCIBridge::getCreationClassName() const
{
	return String("UNIX_PCIBridge");
}

Boolean UNIX_PCIBridge::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_PCIBridge::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_PCIBridge::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_PCIBridge::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_PCIBridge::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_PCIBridge::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PCIBridge::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_PCIBridge::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_PCIBridge::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_PCIBridge::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_PCIBridge::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_PCIBridge::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_PCIBridge::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_PCIBridge::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_PCIBridge::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_PCIBridge::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_PCIBridge::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_PCIBridge::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PCIBridge::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_PCIBridge::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_PCIBridge::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_PCIBridge::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_PCIBridge::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_PCIBridge::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PCIBridge::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_PCIBridge::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PCIBridge::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_PCIBridge::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_PCIBridge::getTimeOfLastReset(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_RESET, getTimeOfLastReset());
	return true;
}

CIMDateTime UNIX_PCIBridge::getTimeOfLastReset() const
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

Boolean UNIX_PCIBridge::getProtocolSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_SUPPORTED, getProtocolSupported());
	return true;
}

Uint16 UNIX_PCIBridge::getProtocolSupported() const
{
	return Uint16(0);
}

Boolean UNIX_PCIBridge::getMaxNumberControlled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_NUMBER_CONTROLLED, getMaxNumberControlled());
	return true;
}

Uint32 UNIX_PCIBridge::getMaxNumberControlled() const
{
	return Uint32(0);
}

Boolean UNIX_PCIBridge::getProtocolDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_DESCRIPTION, getProtocolDescription());
	return true;
}

String UNIX_PCIBridge::getProtocolDescription() const
{
	return String ("");
}

Boolean UNIX_PCIBridge::getCommandRegister(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMAND_REGISTER, getCommandRegister());
	return true;
}

Uint16 UNIX_PCIBridge::getCommandRegister() const
{
	return Uint16(0);
}

Boolean UNIX_PCIBridge::getCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITIES, getCapabilities());
	return true;
}

Array<Uint16> UNIX_PCIBridge::getCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PCIBridge::getCapabilityDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITY_DESCRIPTIONS, getCapabilityDescriptions());
	return true;
}

Array<String> UNIX_PCIBridge::getCapabilityDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PCIBridge::getDeviceSelectTiming(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_SELECT_TIMING, getDeviceSelectTiming());
	return true;
}

Uint16 UNIX_PCIBridge::getDeviceSelectTiming() const
{
	return Uint16(0);
}

Boolean UNIX_PCIBridge::getClassCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_CODE, getClassCode());
	return true;
}

Uint8 UNIX_PCIBridge::getClassCode() const
{
	return Uint8(0);
}

Boolean UNIX_PCIBridge::getCacheLineSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CACHE_LINE_SIZE, getCacheLineSize());
	return true;
}

Uint8 UNIX_PCIBridge::getCacheLineSize() const
{
	return Uint8(0);
}

Boolean UNIX_PCIBridge::getLatencyTimer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LATENCY_TIMER, getLatencyTimer());
	return true;
}

Uint8 UNIX_PCIBridge::getLatencyTimer() const
{
	return Uint8(0);
}

Boolean UNIX_PCIBridge::getInterruptPin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERRUPT_PIN, getInterruptPin());
	return true;
}

Uint16 UNIX_PCIBridge::getInterruptPin() const
{
	return Uint16(0);
}

Boolean UNIX_PCIBridge::getExpansionROMBaseAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXPANSION_R_O_M_BASE_ADDRESS, getExpansionROMBaseAddress());
	return true;
}

Uint32 UNIX_PCIBridge::getExpansionROMBaseAddress() const
{
	return Uint32(0);
}

Boolean UNIX_PCIBridge::getSelfTestEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SELF_TEST_ENABLED, getSelfTestEnabled());
	return true;
}

Boolean UNIX_PCIBridge::getSelfTestEnabled() const
{
	return Boolean(false);
}

Boolean UNIX_PCIBridge::getBaseAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BASE_ADDRESS, getBaseAddress());
	return true;
}

Array<Uint32> UNIX_PCIBridge::getBaseAddress() const
{
	Array<Uint32> as;
	

	return as;

}

Boolean UNIX_PCIBridge::getSubsystemID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBSYSTEM_ID, getSubsystemID());
	return true;
}

Uint16 UNIX_PCIBridge::getSubsystemID() const
{
	return Uint16(0);
}

Boolean UNIX_PCIBridge::getSubsystemVendorID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBSYSTEM_VENDOR_ID, getSubsystemVendorID());
	return true;
}

Uint16 UNIX_PCIBridge::getSubsystemVendorID() const
{
	return Uint16(0);
}

Boolean UNIX_PCIBridge::getMinGrantTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_GRANT_TIME, getMinGrantTime());
	return true;
}

Uint8 UNIX_PCIBridge::getMinGrantTime() const
{
	return Uint8(0);
}

Boolean UNIX_PCIBridge::getMaxLatency(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_LATENCY, getMaxLatency());
	return true;
}

Uint8 UNIX_PCIBridge::getMaxLatency() const
{
	return Uint8(0);
}

Boolean UNIX_PCIBridge::getBusNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUS_NUMBER, getBusNumber());
	return true;
}

Uint8 UNIX_PCIBridge::getBusNumber() const
{
	return Uint8(0);
}

Boolean UNIX_PCIBridge::getDeviceNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_NUMBER, getDeviceNumber());
	return true;
}

Uint8 UNIX_PCIBridge::getDeviceNumber() const
{
	return Uint8(0);
}

Boolean UNIX_PCIBridge::getFunctionNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FUNCTION_NUMBER, getFunctionNumber());
	return true;
}

Uint8 UNIX_PCIBridge::getFunctionNumber() const
{
	return Uint8(0);
}

Boolean UNIX_PCIBridge::getPCIDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_C_IDEVICE_ID, getPCIDeviceID());
	return true;
}

Uint16 UNIX_PCIBridge::getPCIDeviceID() const
{
	return Uint16(0);
}

Boolean UNIX_PCIBridge::getVendorID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_ID, getVendorID());
	return true;
}

Uint16 UNIX_PCIBridge::getVendorID() const
{
	return Uint16(0);
}

Boolean UNIX_PCIBridge::getRevisionID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REVISION_ID, getRevisionID());
	return true;
}

Uint8 UNIX_PCIBridge::getRevisionID() const
{
	return Uint8(0);
}

Boolean UNIX_PCIBridge::getBridgeType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BRIDGE_TYPE, getBridgeType());
	return true;
}

Uint16 UNIX_PCIBridge::getBridgeType() const
{
	return Uint16(0);
}

Boolean UNIX_PCIBridge::getSecondaryLatencyTimer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SECONDARY_LATENCY_TIMER, getSecondaryLatencyTimer());
	return true;
}

Uint8 UNIX_PCIBridge::getSecondaryLatencyTimer() const
{
	return Uint8(0);
}

Boolean UNIX_PCIBridge::getSubordinateBusNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBORDINATE_BUS_NUMBER, getSubordinateBusNumber());
	return true;
}

Uint8 UNIX_PCIBridge::getSubordinateBusNumber() const
{
	return Uint8(0);
}

Boolean UNIX_PCIBridge::getSecondayBusNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SECONDAY_BUS_NUMBER, getSecondayBusNumber());
	return true;
}

Uint8 UNIX_PCIBridge::getSecondayBusNumber() const
{
	return Uint8(0);
}

Boolean UNIX_PCIBridge::getPrimaryBusNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_BUS_NUMBER, getPrimaryBusNumber());
	return true;
}

Uint8 UNIX_PCIBridge::getPrimaryBusNumber() const
{
	return Uint8(0);
}

Boolean UNIX_PCIBridge::getSecondaryStatusRegister(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SECONDARY_STATUS_REGISTER, getSecondaryStatusRegister());
	return true;
}

Uint16 UNIX_PCIBridge::getSecondaryStatusRegister() const
{
	return Uint16(0);
}

Boolean UNIX_PCIBridge::getSecondaryBusDeviceSelectTiming(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SECONDARY_BUS_DEVICE_SELECT_TIMING, getSecondaryBusDeviceSelectTiming());
	return true;
}

Uint16 UNIX_PCIBridge::getSecondaryBusDeviceSelectTiming() const
{
	return Uint16(0);
}

Boolean UNIX_PCIBridge::getIOLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_I_O_LIMIT, getIOLimit());
	return true;
}

Uint8 UNIX_PCIBridge::getIOLimit() const
{
	return Uint8(0);
}

Boolean UNIX_PCIBridge::getIOBase(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_I_O_BASE, getIOBase());
	return true;
}

Uint8 UNIX_PCIBridge::getIOBase() const
{
	return Uint8(0);
}

Boolean UNIX_PCIBridge::getMemoryLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEMORY_LIMIT, getMemoryLimit());
	return true;
}

Uint16 UNIX_PCIBridge::getMemoryLimit() const
{
	return Uint16(0);
}

Boolean UNIX_PCIBridge::getMemoryBase(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEMORY_BASE, getMemoryBase());
	return true;
}

Uint16 UNIX_PCIBridge::getMemoryBase() const
{
	return Uint16(0);
}

Boolean UNIX_PCIBridge::getPrefetchMemoryLimit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PREFETCH_MEMORY_LIMIT, getPrefetchMemoryLimit());
	return true;
}

Uint16 UNIX_PCIBridge::getPrefetchMemoryLimit() const
{
	return Uint16(0);
}

Boolean UNIX_PCIBridge::getPrefetchMemoryBase(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PREFETCH_MEMORY_BASE, getPrefetchMemoryBase());
	return true;
}

Uint16 UNIX_PCIBridge::getPrefetchMemoryBase() const
{
	return Uint16(0);
}

Boolean UNIX_PCIBridge::getPrefetchLimitUpper32(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PREFETCH_LIMIT_UPPER_3_2, getPrefetchLimitUpper32());
	return true;
}

Uint32 UNIX_PCIBridge::getPrefetchLimitUpper32() const
{
	return Uint32(0);
}

Boolean UNIX_PCIBridge::getPrefetchBaseUpper32(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PREFETCH_BASE_UPPER_3_2, getPrefetchBaseUpper32());
	return true;
}

Uint32 UNIX_PCIBridge::getPrefetchBaseUpper32() const
{
	return Uint32(0);
}

Boolean UNIX_PCIBridge::getIOLimitUpper16(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_I_O_LIMIT_UPPER_1_6, getIOLimitUpper16());
	return true;
}

Uint16 UNIX_PCIBridge::getIOLimitUpper16() const
{
	return Uint16(0);
}

Boolean UNIX_PCIBridge::getIOBaseUpper16(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_I_O_BASE_UPPER_1_6, getIOBaseUpper16());
	return true;
}

Uint16 UNIX_PCIBridge::getIOBaseUpper16() const
{
	return Uint16(0);
}



Boolean UNIX_PCIBridge::initialize()
{
	return false;
}

Boolean UNIX_PCIBridge::load(int &pIndex)
{
	return false;
}

Boolean UNIX_PCIBridge::finalize()
{
	return false;
}

Boolean UNIX_PCIBridge::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String creationClassNameKey;
	String deviceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DEVICE_ID)) deviceIDKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
