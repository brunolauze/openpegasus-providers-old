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


UNIX_AGPVideoController::UNIX_AGPVideoController(void)
{
}

UNIX_AGPVideoController::~UNIX_AGPVideoController(void)
{
}


Boolean UNIX_AGPVideoController::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_AGPVideoController::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_AGPVideoController::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_AGPVideoController::getCaption() const
{
	return String ("");
}

Boolean UNIX_AGPVideoController::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_AGPVideoController::getDescription() const
{
	return String ("");
}

Boolean UNIX_AGPVideoController::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_AGPVideoController::getElementName() const
{
	return String("AGPVideoController");
}

Boolean UNIX_AGPVideoController::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_AGPVideoController::getInstallDate() const
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

Boolean UNIX_AGPVideoController::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_AGPVideoController::getName() const
{
	return String ("");
}

Boolean UNIX_AGPVideoController::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_AGPVideoController::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_AGPVideoController::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_AGPVideoController::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_AGPVideoController::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_AGPVideoController::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_AGPVideoController::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_AGPVideoController::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_AGPVideoController::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_AGPVideoController::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_AGPVideoController::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_AGPVideoController::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_AGPVideoController::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_AGPVideoController::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_AGPVideoController::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_AGPVideoController::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_AGPVideoController::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_AGPVideoController::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_AGPVideoController::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_AGPVideoController::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_AGPVideoController::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_AGPVideoController::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_AGPVideoController::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_AGPVideoController::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_AGPVideoController::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_AGPVideoController::getTimeOfLastStateChange() const
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

Boolean UNIX_AGPVideoController::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_AGPVideoController::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_AGPVideoController::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_AGPVideoController::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_AGPVideoController::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_AGPVideoController::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_AGPVideoController::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_AGPVideoController::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_AGPVideoController::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_AGPVideoController::getCreationClassName() const
{
	return String("UNIX_AGPVideoController");
}

Boolean UNIX_AGPVideoController::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_AGPVideoController::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_AGPVideoController::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_AGPVideoController::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_AGPVideoController::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_AGPVideoController::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_AGPVideoController::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_AGPVideoController::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_AGPVideoController::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_AGPVideoController::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_AGPVideoController::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_AGPVideoController::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_AGPVideoController::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_AGPVideoController::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_AGPVideoController::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_AGPVideoController::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_AGPVideoController::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_AGPVideoController::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_AGPVideoController::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_AGPVideoController::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_AGPVideoController::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_AGPVideoController::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_AGPVideoController::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_AGPVideoController::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_AGPVideoController::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_AGPVideoController::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_AGPVideoController::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_AGPVideoController::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_AGPVideoController::getTimeOfLastReset(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_RESET, getTimeOfLastReset());
	return true;
}

CIMDateTime UNIX_AGPVideoController::getTimeOfLastReset() const
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

Boolean UNIX_AGPVideoController::getProtocolSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_SUPPORTED, getProtocolSupported());
	return true;
}

Uint16 UNIX_AGPVideoController::getProtocolSupported() const
{
	return Uint16(0);
}

Boolean UNIX_AGPVideoController::getMaxNumberControlled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_NUMBER_CONTROLLED, getMaxNumberControlled());
	return true;
}

Uint32 UNIX_AGPVideoController::getMaxNumberControlled() const
{
	return Uint32(0);
}

Boolean UNIX_AGPVideoController::getProtocolDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_DESCRIPTION, getProtocolDescription());
	return true;
}

String UNIX_AGPVideoController::getProtocolDescription() const
{
	return String ("");
}

Boolean UNIX_AGPVideoController::getVideoProcessor(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIDEO_PROCESSOR, getVideoProcessor());
	return true;
}

String UNIX_AGPVideoController::getVideoProcessor() const
{
	return String ("");
}

Boolean UNIX_AGPVideoController::getVideoMemoryType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIDEO_MEMORY_TYPE, getVideoMemoryType());
	return true;
}

Uint16 UNIX_AGPVideoController::getVideoMemoryType() const
{
	return Uint16(0);
}

Boolean UNIX_AGPVideoController::getNumberOfVideoPages(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_VIDEO_PAGES, getNumberOfVideoPages());
	return true;
}

Uint32 UNIX_AGPVideoController::getNumberOfVideoPages() const
{
	return Uint32(0);
}

Boolean UNIX_AGPVideoController::getMaxMemorySupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_MEMORY_SUPPORTED, getMaxMemorySupported());
	return true;
}

Uint32 UNIX_AGPVideoController::getMaxMemorySupported() const
{
	return Uint32(0);
}

Boolean UNIX_AGPVideoController::getAcceleratorCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCELERATOR_CAPABILITIES, getAcceleratorCapabilities());
	return true;
}

Array<Uint16> UNIX_AGPVideoController::getAcceleratorCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_AGPVideoController::getCapabilityDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITY_DESCRIPTIONS, getCapabilityDescriptions());
	return true;
}

Array<String> UNIX_AGPVideoController::getCapabilityDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_AGPVideoController::getCurrentBitsPerPixel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_BITS_PER_PIXEL, getCurrentBitsPerPixel());
	return true;
}

Uint32 UNIX_AGPVideoController::getCurrentBitsPerPixel() const
{
	return Uint32(0);
}

Boolean UNIX_AGPVideoController::getCurrentHorizontalResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_HORIZONTAL_RESOLUTION, getCurrentHorizontalResolution());
	return true;
}

Uint32 UNIX_AGPVideoController::getCurrentHorizontalResolution() const
{
	return Uint32(0);
}

Boolean UNIX_AGPVideoController::getCurrentVerticalResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_VERTICAL_RESOLUTION, getCurrentVerticalResolution());
	return true;
}

Uint32 UNIX_AGPVideoController::getCurrentVerticalResolution() const
{
	return Uint32(0);
}

Boolean UNIX_AGPVideoController::getMaxRefreshRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_REFRESH_RATE, getMaxRefreshRate());
	return true;
}

Uint32 UNIX_AGPVideoController::getMaxRefreshRate() const
{
	return Uint32(0);
}

Boolean UNIX_AGPVideoController::getMinRefreshRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_REFRESH_RATE, getMinRefreshRate());
	return true;
}

Uint32 UNIX_AGPVideoController::getMinRefreshRate() const
{
	return Uint32(0);
}

Boolean UNIX_AGPVideoController::getCurrentRefreshRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_REFRESH_RATE, getCurrentRefreshRate());
	return true;
}

Uint32 UNIX_AGPVideoController::getCurrentRefreshRate() const
{
	return Uint32(0);
}

Boolean UNIX_AGPVideoController::getCurrentScanMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_SCAN_MODE, getCurrentScanMode());
	return true;
}

Uint16 UNIX_AGPVideoController::getCurrentScanMode() const
{
	return Uint16(0);
}

Boolean UNIX_AGPVideoController::getCurrentNumberOfRows(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_NUMBER_OF_ROWS, getCurrentNumberOfRows());
	return true;
}

Uint32 UNIX_AGPVideoController::getCurrentNumberOfRows() const
{
	return Uint32(0);
}

Boolean UNIX_AGPVideoController::getCurrentNumberOfColumns(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_NUMBER_OF_COLUMNS, getCurrentNumberOfColumns());
	return true;
}

Uint32 UNIX_AGPVideoController::getCurrentNumberOfColumns() const
{
	return Uint32(0);
}

Boolean UNIX_AGPVideoController::getCurrentNumberOfColors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_NUMBER_OF_COLORS, getCurrentNumberOfColors());
	return true;
}

Uint64 UNIX_AGPVideoController::getCurrentNumberOfColors() const
{
	return Uint64(0);
}

Boolean UNIX_AGPVideoController::getCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITIES, getCapabilities());
	return true;
}

Array<Uint16> UNIX_AGPVideoController::getCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_AGPVideoController::getNonlocalVideoMemorySize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NONLOCAL_VIDEO_MEMORY_SIZE, getNonlocalVideoMemorySize());
	return true;
}

Uint32 UNIX_AGPVideoController::getNonlocalVideoMemorySize() const
{
	return Uint32(0);
}

Boolean UNIX_AGPVideoController::getLocalBusWidth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCAL_BUS_WIDTH, getLocalBusWidth());
	return true;
}

Uint32 UNIX_AGPVideoController::getLocalBusWidth() const
{
	return Uint32(0);
}

Boolean UNIX_AGPVideoController::getUsageModel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USAGE_MODEL, getUsageModel());
	return true;
}

Uint16 UNIX_AGPVideoController::getUsageModel() const
{
	return Uint16(0);
}

Boolean UNIX_AGPVideoController::getDataTransferRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_TRANSFER_RATE, getDataTransferRate());
	return true;
}

Uint16 UNIX_AGPVideoController::getDataTransferRate() const
{
	return Uint16(0);
}

Boolean UNIX_AGPVideoController::getAddressingMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESSING_MODE, getAddressingMode());
	return true;
}

Uint16 UNIX_AGPVideoController::getAddressingMode() const
{
	return Uint16(0);
}

Boolean UNIX_AGPVideoController::getMaximumAGPCommandQueuePath(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_A_G_P_COMMAND_QUEUE_PATH, getMaximumAGPCommandQueuePath());
	return true;
}

Uint32 UNIX_AGPVideoController::getMaximumAGPCommandQueuePath() const
{
	return Uint32(0);
}

Boolean UNIX_AGPVideoController::getMaxNumberOfPipelinedAGPTransactions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_NUMBER_OF_PIPELINED_A_G_P_TRANSACTIONS, getMaxNumberOfPipelinedAGPTransactions());
	return true;
}

Uint32 UNIX_AGPVideoController::getMaxNumberOfPipelinedAGPTransactions() const
{
	return Uint32(0);
}

Boolean UNIX_AGPVideoController::getGraphicsApertureSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GRAPHICS_APERTURE_SIZE, getGraphicsApertureSize());
	return true;
}

Uint32 UNIX_AGPVideoController::getGraphicsApertureSize() const
{
	return Uint32(0);
}

Boolean UNIX_AGPVideoController::getAGPSpecificationVersionConformance(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_A_G_P_SPECIFICATION_VERSION_CONFORMANCE, getAGPSpecificationVersionConformance());
	return true;
}

String UNIX_AGPVideoController::getAGPSpecificationVersionConformance() const
{
	return String ("");
}



Boolean UNIX_AGPVideoController::initialize()
{
	return false;
}

Boolean UNIX_AGPVideoController::load(int &pIndex)
{
	return false;
}

Boolean UNIX_AGPVideoController::finalize()
{
	return false;
}

Boolean UNIX_AGPVideoController::find(Array<CIMKeyBinding> &kbArray)
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
