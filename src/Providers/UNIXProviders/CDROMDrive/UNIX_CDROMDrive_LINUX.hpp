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


UNIX_CDROMDrive::UNIX_CDROMDrive(void)
{
}

UNIX_CDROMDrive::~UNIX_CDROMDrive(void)
{
}


Boolean UNIX_CDROMDrive::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_CDROMDrive::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_CDROMDrive::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_CDROMDrive::getCaption() const
{
	return String ("");
}

Boolean UNIX_CDROMDrive::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_CDROMDrive::getDescription() const
{
	return String ("");
}

Boolean UNIX_CDROMDrive::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_CDROMDrive::getElementName() const
{
	return String("CDROMDrive");
}

Boolean UNIX_CDROMDrive::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_CDROMDrive::getInstallDate() const
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

Boolean UNIX_CDROMDrive::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_CDROMDrive::getName() const
{
	return String ("");
}

Boolean UNIX_CDROMDrive::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_CDROMDrive::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_CDROMDrive::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_CDROMDrive::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_CDROMDrive::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_CDROMDrive::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_CDROMDrive::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_CDROMDrive::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_CDROMDrive::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_CDROMDrive::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_CDROMDrive::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_CDROMDrive::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_CDROMDrive::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_CDROMDrive::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_CDROMDrive::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_CDROMDrive::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_CDROMDrive::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_CDROMDrive::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_CDROMDrive::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_CDROMDrive::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_CDROMDrive::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_CDROMDrive::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_CDROMDrive::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_CDROMDrive::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_CDROMDrive::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_CDROMDrive::getTimeOfLastStateChange() const
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

Boolean UNIX_CDROMDrive::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_CDROMDrive::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_CDROMDrive::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_CDROMDrive::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_CDROMDrive::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_CDROMDrive::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_CDROMDrive::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_CDROMDrive::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_CDROMDrive::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_CDROMDrive::getCreationClassName() const
{
	return String("UNIX_CDROMDrive");
}

Boolean UNIX_CDROMDrive::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_CDROMDrive::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_CDROMDrive::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_CDROMDrive::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_CDROMDrive::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_CDROMDrive::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_CDROMDrive::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_CDROMDrive::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_CDROMDrive::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_CDROMDrive::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_CDROMDrive::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_CDROMDrive::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_CDROMDrive::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_CDROMDrive::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_CDROMDrive::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_CDROMDrive::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_CDROMDrive::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_CDROMDrive::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_CDROMDrive::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_CDROMDrive::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_CDROMDrive::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_CDROMDrive::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_CDROMDrive::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_CDROMDrive::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_CDROMDrive::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_CDROMDrive::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_CDROMDrive::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_CDROMDrive::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_CDROMDrive::getCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITIES, getCapabilities());
	return true;
}

Array<Uint16> UNIX_CDROMDrive::getCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_CDROMDrive::getCapabilityDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITY_DESCRIPTIONS, getCapabilityDescriptions());
	return true;
}

Array<String> UNIX_CDROMDrive::getCapabilityDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_CDROMDrive::getErrorMethodology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_METHODOLOGY, getErrorMethodology());
	return true;
}

String UNIX_CDROMDrive::getErrorMethodology() const
{
	return String ("");
}

Boolean UNIX_CDROMDrive::getCompressionMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_METHOD, getCompressionMethod());
	return true;
}

String UNIX_CDROMDrive::getCompressionMethod() const
{
	return String ("");
}

Boolean UNIX_CDROMDrive::getNumberOfMediaSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_MEDIA_SUPPORTED, getNumberOfMediaSupported());
	return true;
}

Uint32 UNIX_CDROMDrive::getNumberOfMediaSupported() const
{
	return Uint32(0);
}

Boolean UNIX_CDROMDrive::getMaxMediaSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_MEDIA_SIZE, getMaxMediaSize());
	return true;
}

Uint64 UNIX_CDROMDrive::getMaxMediaSize() const
{
	return Uint64(0);
}

Boolean UNIX_CDROMDrive::getDefaultBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_BLOCK_SIZE, getDefaultBlockSize());
	return true;
}

Uint64 UNIX_CDROMDrive::getDefaultBlockSize() const
{
	return Uint64(0);
}

Boolean UNIX_CDROMDrive::getMaxBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_BLOCK_SIZE, getMaxBlockSize());
	return true;
}

Uint64 UNIX_CDROMDrive::getMaxBlockSize() const
{
	return Uint64(0);
}

Boolean UNIX_CDROMDrive::getMinBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_BLOCK_SIZE, getMinBlockSize());
	return true;
}

Uint64 UNIX_CDROMDrive::getMinBlockSize() const
{
	return Uint64(0);
}

Boolean UNIX_CDROMDrive::getNeedsCleaning(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NEEDS_CLEANING, getNeedsCleaning());
	return true;
}

Boolean UNIX_CDROMDrive::getNeedsCleaning() const
{
	return Boolean(false);
}

Boolean UNIX_CDROMDrive::getMediaIsLocked(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA_IS_LOCKED, getMediaIsLocked());
	return true;
}

Boolean UNIX_CDROMDrive::getMediaIsLocked() const
{
	return Boolean(false);
}

Boolean UNIX_CDROMDrive::getSecurity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SECURITY, getSecurity());
	return true;
}

Uint16 UNIX_CDROMDrive::getSecurity() const
{
	return Uint16(0);
}

Boolean UNIX_CDROMDrive::getLastCleaned(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_CLEANED, getLastCleaned());
	return true;
}

CIMDateTime UNIX_CDROMDrive::getLastCleaned() const
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

Boolean UNIX_CDROMDrive::getMaxAccessTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ACCESS_TIME, getMaxAccessTime());
	return true;
}

Uint64 UNIX_CDROMDrive::getMaxAccessTime() const
{
	return Uint64(0);
}

Boolean UNIX_CDROMDrive::getUncompressedDataRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNCOMPRESSED_DATA_RATE, getUncompressedDataRate());
	return true;
}

Uint32 UNIX_CDROMDrive::getUncompressedDataRate() const
{
	return Uint32(0);
}

Boolean UNIX_CDROMDrive::getLoadTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOAD_TIME, getLoadTime());
	return true;
}

Uint64 UNIX_CDROMDrive::getLoadTime() const
{
	return Uint64(0);
}

Boolean UNIX_CDROMDrive::getUnloadTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNLOAD_TIME, getUnloadTime());
	return true;
}

Uint64 UNIX_CDROMDrive::getUnloadTime() const
{
	return Uint64(0);
}

Boolean UNIX_CDROMDrive::getMountCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MOUNT_COUNT, getMountCount());
	return true;
}

Uint64 UNIX_CDROMDrive::getMountCount() const
{
	return Uint64(0);
}

Boolean UNIX_CDROMDrive::getTimeOfLastMount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_MOUNT, getTimeOfLastMount());
	return true;
}

CIMDateTime UNIX_CDROMDrive::getTimeOfLastMount() const
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

Boolean UNIX_CDROMDrive::getTotalMountTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_MOUNT_TIME, getTotalMountTime());
	return true;
}

Uint64 UNIX_CDROMDrive::getTotalMountTime() const
{
	return Uint64(0);
}

Boolean UNIX_CDROMDrive::getUnitsDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNITS_DESCRIPTION, getUnitsDescription());
	return true;
}

String UNIX_CDROMDrive::getUnitsDescription() const
{
	return String ("");
}

Boolean UNIX_CDROMDrive::getMaxUnitsBeforeCleaning(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_UNITS_BEFORE_CLEANING, getMaxUnitsBeforeCleaning());
	return true;
}

Uint64 UNIX_CDROMDrive::getMaxUnitsBeforeCleaning() const
{
	return Uint64(0);
}

Boolean UNIX_CDROMDrive::getUnitsUsed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNITS_USED, getUnitsUsed());
	return true;
}

Uint64 UNIX_CDROMDrive::getUnitsUsed() const
{
	return Uint64(0);
}



Boolean UNIX_CDROMDrive::initialize()
{
	return false;
}

Boolean UNIX_CDROMDrive::load(int &pIndex)
{
	return false;
}

Boolean UNIX_CDROMDrive::finalize()
{
	return false;
}

Boolean UNIX_CDROMDrive::find(Array<CIMKeyBinding> &kbArray)
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
