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


UNIX_PCVideoController::UNIX_PCVideoController(void)
{
}

UNIX_PCVideoController::~UNIX_PCVideoController(void)
{
}


Boolean UNIX_PCVideoController::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PCVideoController::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_PCVideoController::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PCVideoController::getCaption() const
{
	return String ("");
}

Boolean UNIX_PCVideoController::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PCVideoController::getDescription() const
{
	return String ("");
}

Boolean UNIX_PCVideoController::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PCVideoController::getElementName() const
{
	return String("PCVideoController");
}

Boolean UNIX_PCVideoController::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_PCVideoController::getInstallDate() const
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

Boolean UNIX_PCVideoController::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PCVideoController::getName() const
{
	return String ("");
}

Boolean UNIX_PCVideoController::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_PCVideoController::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PCVideoController::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_PCVideoController::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PCVideoController::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_PCVideoController::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_PCVideoController::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_PCVideoController::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_PCVideoController::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_PCVideoController::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_PCVideoController::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_PCVideoController::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_PCVideoController::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_PCVideoController::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_PCVideoController::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_PCVideoController::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_PCVideoController::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_PCVideoController::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_PCVideoController::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_PCVideoController::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_PCVideoController::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_PCVideoController::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_PCVideoController::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_PCVideoController::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_PCVideoController::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_PCVideoController::getTimeOfLastStateChange() const
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

Boolean UNIX_PCVideoController::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_PCVideoController::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PCVideoController::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_PCVideoController::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_PCVideoController::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_PCVideoController::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_PCVideoController::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_PCVideoController::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_PCVideoController::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_PCVideoController::getCreationClassName() const
{
	return String("UNIX_PCVideoController");
}

Boolean UNIX_PCVideoController::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_PCVideoController::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_PCVideoController::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_PCVideoController::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_PCVideoController::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_PCVideoController::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PCVideoController::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_PCVideoController::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_PCVideoController::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_PCVideoController::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_PCVideoController::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_PCVideoController::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_PCVideoController::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_PCVideoController::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_PCVideoController::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_PCVideoController::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_PCVideoController::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_PCVideoController::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PCVideoController::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_PCVideoController::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_PCVideoController::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_PCVideoController::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_PCVideoController::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_PCVideoController::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PCVideoController::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_PCVideoController::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PCVideoController::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_PCVideoController::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_PCVideoController::getTimeOfLastReset(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_RESET, getTimeOfLastReset());
	return true;
}

CIMDateTime UNIX_PCVideoController::getTimeOfLastReset() const
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

Boolean UNIX_PCVideoController::getProtocolSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_SUPPORTED, getProtocolSupported());
	return true;
}

Uint16 UNIX_PCVideoController::getProtocolSupported() const
{
	return Uint16(0);
}

Boolean UNIX_PCVideoController::getMaxNumberControlled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_NUMBER_CONTROLLED, getMaxNumberControlled());
	return true;
}

Uint32 UNIX_PCVideoController::getMaxNumberControlled() const
{
	return Uint32(0);
}

Boolean UNIX_PCVideoController::getProtocolDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_DESCRIPTION, getProtocolDescription());
	return true;
}

String UNIX_PCVideoController::getProtocolDescription() const
{
	return String ("");
}

Boolean UNIX_PCVideoController::getVideoProcessor(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIDEO_PROCESSOR, getVideoProcessor());
	return true;
}

String UNIX_PCVideoController::getVideoProcessor() const
{
	return String ("");
}

Boolean UNIX_PCVideoController::getVideoMemoryType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIDEO_MEMORY_TYPE, getVideoMemoryType());
	return true;
}

Uint16 UNIX_PCVideoController::getVideoMemoryType() const
{
	return Uint16(0);
}

Boolean UNIX_PCVideoController::getNumberOfVideoPages(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_VIDEO_PAGES, getNumberOfVideoPages());
	return true;
}

Uint32 UNIX_PCVideoController::getNumberOfVideoPages() const
{
	return Uint32(0);
}

Boolean UNIX_PCVideoController::getMaxMemorySupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_MEMORY_SUPPORTED, getMaxMemorySupported());
	return true;
}

Uint32 UNIX_PCVideoController::getMaxMemorySupported() const
{
	return Uint32(0);
}

Boolean UNIX_PCVideoController::getAcceleratorCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCELERATOR_CAPABILITIES, getAcceleratorCapabilities());
	return true;
}

Array<Uint16> UNIX_PCVideoController::getAcceleratorCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PCVideoController::getCapabilityDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITY_DESCRIPTIONS, getCapabilityDescriptions());
	return true;
}

Array<String> UNIX_PCVideoController::getCapabilityDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PCVideoController::getCurrentBitsPerPixel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_BITS_PER_PIXEL, getCurrentBitsPerPixel());
	return true;
}

Uint32 UNIX_PCVideoController::getCurrentBitsPerPixel() const
{
	return Uint32(0);
}

Boolean UNIX_PCVideoController::getCurrentHorizontalResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_HORIZONTAL_RESOLUTION, getCurrentHorizontalResolution());
	return true;
}

Uint32 UNIX_PCVideoController::getCurrentHorizontalResolution() const
{
	return Uint32(0);
}

Boolean UNIX_PCVideoController::getCurrentVerticalResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_VERTICAL_RESOLUTION, getCurrentVerticalResolution());
	return true;
}

Uint32 UNIX_PCVideoController::getCurrentVerticalResolution() const
{
	return Uint32(0);
}

Boolean UNIX_PCVideoController::getMaxRefreshRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_REFRESH_RATE, getMaxRefreshRate());
	return true;
}

Uint32 UNIX_PCVideoController::getMaxRefreshRate() const
{
	return Uint32(0);
}

Boolean UNIX_PCVideoController::getMinRefreshRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_REFRESH_RATE, getMinRefreshRate());
	return true;
}

Uint32 UNIX_PCVideoController::getMinRefreshRate() const
{
	return Uint32(0);
}

Boolean UNIX_PCVideoController::getCurrentRefreshRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_REFRESH_RATE, getCurrentRefreshRate());
	return true;
}

Uint32 UNIX_PCVideoController::getCurrentRefreshRate() const
{
	return Uint32(0);
}

Boolean UNIX_PCVideoController::getCurrentScanMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_SCAN_MODE, getCurrentScanMode());
	return true;
}

Uint16 UNIX_PCVideoController::getCurrentScanMode() const
{
	return Uint16(0);
}

Boolean UNIX_PCVideoController::getCurrentNumberOfRows(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_NUMBER_OF_ROWS, getCurrentNumberOfRows());
	return true;
}

Uint32 UNIX_PCVideoController::getCurrentNumberOfRows() const
{
	return Uint32(0);
}

Boolean UNIX_PCVideoController::getCurrentNumberOfColumns(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_NUMBER_OF_COLUMNS, getCurrentNumberOfColumns());
	return true;
}

Uint32 UNIX_PCVideoController::getCurrentNumberOfColumns() const
{
	return Uint32(0);
}

Boolean UNIX_PCVideoController::getCurrentNumberOfColors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_NUMBER_OF_COLORS, getCurrentNumberOfColors());
	return true;
}

Uint64 UNIX_PCVideoController::getCurrentNumberOfColors() const
{
	return Uint64(0);
}

Boolean UNIX_PCVideoController::getVideoArchitecture(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIDEO_ARCHITECTURE, getVideoArchitecture());
	return true;
}

Uint16 UNIX_PCVideoController::getVideoArchitecture() const
{
	return Uint16(0);
}

Boolean UNIX_PCVideoController::getVideoMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIDEO_MODE, getVideoMode());
	return true;
}

Uint16 UNIX_PCVideoController::getVideoMode() const
{
	return Uint16(0);
}

Boolean UNIX_PCVideoController::getNumberOfColorPlanes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_COLOR_PLANES, getNumberOfColorPlanes());
	return true;
}

Uint16 UNIX_PCVideoController::getNumberOfColorPlanes() const
{
	return Uint16(0);
}



Boolean UNIX_PCVideoController::initialize()
{
	return false;
}

Boolean UNIX_PCVideoController::load(int &pIndex)
{
	return false;
}

Boolean UNIX_PCVideoController::finalize()
{
	return false;
}

Boolean UNIX_PCVideoController::find(Array<CIMKeyBinding> &kbArray)
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
