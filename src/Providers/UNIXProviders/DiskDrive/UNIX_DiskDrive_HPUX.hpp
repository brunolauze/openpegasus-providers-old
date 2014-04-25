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


UNIX_DiskDrive::UNIX_DiskDrive(void)
{
}

UNIX_DiskDrive::~UNIX_DiskDrive(void)
{
}


Boolean UNIX_DiskDrive::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DiskDrive::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_DiskDrive::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DiskDrive::getCaption() const
{
	return String ("");
}

Boolean UNIX_DiskDrive::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DiskDrive::getDescription() const
{
	return String ("");
}

Boolean UNIX_DiskDrive::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DiskDrive::getElementName() const
{
	return String("DiskDrive");
}

Boolean UNIX_DiskDrive::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_DiskDrive::getInstallDate() const
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

Boolean UNIX_DiskDrive::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_DiskDrive::getName() const
{
	return String ("");
}

Boolean UNIX_DiskDrive::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_DiskDrive::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DiskDrive::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_DiskDrive::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_DiskDrive::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_DiskDrive::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_DiskDrive::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_DiskDrive::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_DiskDrive::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_DiskDrive::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_DiskDrive::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_DiskDrive::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_DiskDrive::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_DiskDrive::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_DiskDrive::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_DiskDrive::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_DiskDrive::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_DiskDrive::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_DiskDrive::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_DiskDrive::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_DiskDrive::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_DiskDrive::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_DiskDrive::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_DiskDrive::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_DiskDrive::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_DiskDrive::getTimeOfLastStateChange() const
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

Boolean UNIX_DiskDrive::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_DiskDrive::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DiskDrive::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_DiskDrive::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_DiskDrive::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_DiskDrive::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_DiskDrive::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_DiskDrive::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_DiskDrive::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_DiskDrive::getCreationClassName() const
{
	return String("UNIX_DiskDrive");
}

Boolean UNIX_DiskDrive::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_DiskDrive::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_DiskDrive::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_DiskDrive::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_DiskDrive::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_DiskDrive::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DiskDrive::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_DiskDrive::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_DiskDrive::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_DiskDrive::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_DiskDrive::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_DiskDrive::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_DiskDrive::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_DiskDrive::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_DiskDrive::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_DiskDrive::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_DiskDrive::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_DiskDrive::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_DiskDrive::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_DiskDrive::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_DiskDrive::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_DiskDrive::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_DiskDrive::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_DiskDrive::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_DiskDrive::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_DiskDrive::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DiskDrive::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_DiskDrive::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_DiskDrive::getCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITIES, getCapabilities());
	return true;
}

Array<Uint16> UNIX_DiskDrive::getCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DiskDrive::getCapabilityDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITY_DESCRIPTIONS, getCapabilityDescriptions());
	return true;
}

Array<String> UNIX_DiskDrive::getCapabilityDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_DiskDrive::getErrorMethodology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_METHODOLOGY, getErrorMethodology());
	return true;
}

String UNIX_DiskDrive::getErrorMethodology() const
{
	return String ("");
}

Boolean UNIX_DiskDrive::getCompressionMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_METHOD, getCompressionMethod());
	return true;
}

String UNIX_DiskDrive::getCompressionMethod() const
{
	return String ("");
}

Boolean UNIX_DiskDrive::getNumberOfMediaSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_MEDIA_SUPPORTED, getNumberOfMediaSupported());
	return true;
}

Uint32 UNIX_DiskDrive::getNumberOfMediaSupported() const
{
	return Uint32(0);
}

Boolean UNIX_DiskDrive::getMaxMediaSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_MEDIA_SIZE, getMaxMediaSize());
	return true;
}

Uint64 UNIX_DiskDrive::getMaxMediaSize() const
{
	return Uint64(0);
}

Boolean UNIX_DiskDrive::getDefaultBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_BLOCK_SIZE, getDefaultBlockSize());
	return true;
}

Uint64 UNIX_DiskDrive::getDefaultBlockSize() const
{
	return Uint64(0);
}

Boolean UNIX_DiskDrive::getMaxBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_BLOCK_SIZE, getMaxBlockSize());
	return true;
}

Uint64 UNIX_DiskDrive::getMaxBlockSize() const
{
	return Uint64(0);
}

Boolean UNIX_DiskDrive::getMinBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_BLOCK_SIZE, getMinBlockSize());
	return true;
}

Uint64 UNIX_DiskDrive::getMinBlockSize() const
{
	return Uint64(0);
}

Boolean UNIX_DiskDrive::getNeedsCleaning(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NEEDS_CLEANING, getNeedsCleaning());
	return true;
}

Boolean UNIX_DiskDrive::getNeedsCleaning() const
{
	return Boolean(false);
}

Boolean UNIX_DiskDrive::getMediaIsLocked(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA_IS_LOCKED, getMediaIsLocked());
	return true;
}

Boolean UNIX_DiskDrive::getMediaIsLocked() const
{
	return Boolean(false);
}

Boolean UNIX_DiskDrive::getSecurity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SECURITY, getSecurity());
	return true;
}

Uint16 UNIX_DiskDrive::getSecurity() const
{
	return Uint16(0);
}

Boolean UNIX_DiskDrive::getLastCleaned(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_CLEANED, getLastCleaned());
	return true;
}

CIMDateTime UNIX_DiskDrive::getLastCleaned() const
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

Boolean UNIX_DiskDrive::getMaxAccessTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ACCESS_TIME, getMaxAccessTime());
	return true;
}

Uint64 UNIX_DiskDrive::getMaxAccessTime() const
{
	return Uint64(0);
}

Boolean UNIX_DiskDrive::getUncompressedDataRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNCOMPRESSED_DATA_RATE, getUncompressedDataRate());
	return true;
}

Uint32 UNIX_DiskDrive::getUncompressedDataRate() const
{
	return Uint32(0);
}

Boolean UNIX_DiskDrive::getLoadTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOAD_TIME, getLoadTime());
	return true;
}

Uint64 UNIX_DiskDrive::getLoadTime() const
{
	return Uint64(0);
}

Boolean UNIX_DiskDrive::getUnloadTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNLOAD_TIME, getUnloadTime());
	return true;
}

Uint64 UNIX_DiskDrive::getUnloadTime() const
{
	return Uint64(0);
}

Boolean UNIX_DiskDrive::getMountCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MOUNT_COUNT, getMountCount());
	return true;
}

Uint64 UNIX_DiskDrive::getMountCount() const
{
	return Uint64(0);
}

Boolean UNIX_DiskDrive::getTimeOfLastMount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_MOUNT, getTimeOfLastMount());
	return true;
}

CIMDateTime UNIX_DiskDrive::getTimeOfLastMount() const
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

Boolean UNIX_DiskDrive::getTotalMountTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_MOUNT_TIME, getTotalMountTime());
	return true;
}

Uint64 UNIX_DiskDrive::getTotalMountTime() const
{
	return Uint64(0);
}

Boolean UNIX_DiskDrive::getUnitsDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNITS_DESCRIPTION, getUnitsDescription());
	return true;
}

String UNIX_DiskDrive::getUnitsDescription() const
{
	return String ("");
}

Boolean UNIX_DiskDrive::getMaxUnitsBeforeCleaning(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_UNITS_BEFORE_CLEANING, getMaxUnitsBeforeCleaning());
	return true;
}

Uint64 UNIX_DiskDrive::getMaxUnitsBeforeCleaning() const
{
	return Uint64(0);
}

Boolean UNIX_DiskDrive::getUnitsUsed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNITS_USED, getUnitsUsed());
	return true;
}

Uint64 UNIX_DiskDrive::getUnitsUsed() const
{
	return Uint64(0);
}



Boolean UNIX_DiskDrive::initialize()
{
	return false;
}

Boolean UNIX_DiskDrive::load(int &pIndex)
{
	return false;
}

Boolean UNIX_DiskDrive::finalize()
{
	return false;
}

Boolean UNIX_DiskDrive::find(Array<CIMKeyBinding> &kbArray)
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
