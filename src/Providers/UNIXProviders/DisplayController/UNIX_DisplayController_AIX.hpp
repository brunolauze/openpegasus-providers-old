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


UNIX_DisplayController::UNIX_DisplayController(void)
{
}

UNIX_DisplayController::~UNIX_DisplayController(void)
{
}


Boolean UNIX_DisplayController::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DisplayController::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_DisplayController::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DisplayController::getCaption() const
{
	return String ("");
}

Boolean UNIX_DisplayController::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DisplayController::getDescription() const
{
	return String ("");
}

Boolean UNIX_DisplayController::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DisplayController::getElementName() const
{
	return String("DisplayController");
}

Boolean UNIX_DisplayController::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_DisplayController::getInstallDate() const
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

Boolean UNIX_DisplayController::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_DisplayController::getName() const
{
	return String ("");
}

Boolean UNIX_DisplayController::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_DisplayController::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DisplayController::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_DisplayController::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_DisplayController::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_DisplayController::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_DisplayController::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_DisplayController::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_DisplayController::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_DisplayController::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_DisplayController::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_DisplayController::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_DisplayController::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_DisplayController::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_DisplayController::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_DisplayController::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_DisplayController::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_DisplayController::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_DisplayController::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_DisplayController::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_DisplayController::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_DisplayController::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_DisplayController::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_DisplayController::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_DisplayController::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_DisplayController::getTimeOfLastStateChange() const
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

Boolean UNIX_DisplayController::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_DisplayController::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DisplayController::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_DisplayController::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_DisplayController::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_DisplayController::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_DisplayController::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_DisplayController::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_DisplayController::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_DisplayController::getCreationClassName() const
{
	return String("UNIX_DisplayController");
}

Boolean UNIX_DisplayController::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_DisplayController::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_DisplayController::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_DisplayController::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_DisplayController::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_DisplayController::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DisplayController::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_DisplayController::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_DisplayController::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_DisplayController::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_DisplayController::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_DisplayController::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_DisplayController::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_DisplayController::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_DisplayController::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_DisplayController::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_DisplayController::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_DisplayController::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_DisplayController::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_DisplayController::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_DisplayController::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_DisplayController::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_DisplayController::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_DisplayController::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_DisplayController::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_DisplayController::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DisplayController::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_DisplayController::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_DisplayController::getTimeOfLastReset(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_RESET, getTimeOfLastReset());
	return true;
}

CIMDateTime UNIX_DisplayController::getTimeOfLastReset() const
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

Boolean UNIX_DisplayController::getProtocolSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_SUPPORTED, getProtocolSupported());
	return true;
}

Uint16 UNIX_DisplayController::getProtocolSupported() const
{
	return Uint16(0);
}

Boolean UNIX_DisplayController::getMaxNumberControlled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_NUMBER_CONTROLLED, getMaxNumberControlled());
	return true;
}

Uint32 UNIX_DisplayController::getMaxNumberControlled() const
{
	return Uint32(0);
}

Boolean UNIX_DisplayController::getProtocolDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_DESCRIPTION, getProtocolDescription());
	return true;
}

String UNIX_DisplayController::getProtocolDescription() const
{
	return String ("");
}

Boolean UNIX_DisplayController::getVideoProcessor(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIDEO_PROCESSOR, getVideoProcessor());
	return true;
}

String UNIX_DisplayController::getVideoProcessor() const
{
	return String ("");
}

Boolean UNIX_DisplayController::getVideoMemoryType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIDEO_MEMORY_TYPE, getVideoMemoryType());
	return true;
}

Uint16 UNIX_DisplayController::getVideoMemoryType() const
{
	return Uint16(0);
}

Boolean UNIX_DisplayController::getOtherVideoMemoryType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_VIDEO_MEMORY_TYPE, getOtherVideoMemoryType());
	return true;
}

String UNIX_DisplayController::getOtherVideoMemoryType() const
{
	return String ("");
}

Boolean UNIX_DisplayController::getNumberOfVideoPages(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_VIDEO_PAGES, getNumberOfVideoPages());
	return true;
}

Uint32 UNIX_DisplayController::getNumberOfVideoPages() const
{
	return Uint32(0);
}

Boolean UNIX_DisplayController::getMaxMemorySupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_MEMORY_SUPPORTED, getMaxMemorySupported());
	return true;
}

Uint32 UNIX_DisplayController::getMaxMemorySupported() const
{
	return Uint32(0);
}

Boolean UNIX_DisplayController::getAcceleratorCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCELERATOR_CAPABILITIES, getAcceleratorCapabilities());
	return true;
}

Array<Uint16> UNIX_DisplayController::getAcceleratorCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DisplayController::getCapabilityDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITY_DESCRIPTIONS, getCapabilityDescriptions());
	return true;
}

Array<String> UNIX_DisplayController::getCapabilityDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_DisplayController::getOtherVideoArchitecture(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_VIDEO_ARCHITECTURE, getOtherVideoArchitecture());
	return true;
}

String UNIX_DisplayController::getOtherVideoArchitecture() const
{
	return String ("");
}

Boolean UNIX_DisplayController::getVideoArchitecture(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIDEO_ARCHITECTURE, getVideoArchitecture());
	return true;
}

Uint16 UNIX_DisplayController::getVideoArchitecture() const
{
	return Uint16(0);
}



Boolean UNIX_DisplayController::initialize()
{
	return false;
}

Boolean UNIX_DisplayController::load(int &pIndex)
{
	return false;
}

Boolean UNIX_DisplayController::finalize()
{
	return false;
}

Boolean UNIX_DisplayController::find(Array<CIMKeyBinding> &kbArray)
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
