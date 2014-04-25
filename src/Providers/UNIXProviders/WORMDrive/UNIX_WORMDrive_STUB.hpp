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


UNIX_WORMDrive::UNIX_WORMDrive(void)
{
}

UNIX_WORMDrive::~UNIX_WORMDrive(void)
{
}


Boolean UNIX_WORMDrive::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_WORMDrive::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_WORMDrive::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_WORMDrive::getCaption() const
{
	return String ("");
}

Boolean UNIX_WORMDrive::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_WORMDrive::getDescription() const
{
	return String ("");
}

Boolean UNIX_WORMDrive::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_WORMDrive::getElementName() const
{
	return String("WORMDrive");
}

Boolean UNIX_WORMDrive::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_WORMDrive::getInstallDate() const
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

Boolean UNIX_WORMDrive::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_WORMDrive::getName() const
{
	return String ("");
}

Boolean UNIX_WORMDrive::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_WORMDrive::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_WORMDrive::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_WORMDrive::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_WORMDrive::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_WORMDrive::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_WORMDrive::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_WORMDrive::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_WORMDrive::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_WORMDrive::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_WORMDrive::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_WORMDrive::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_WORMDrive::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_WORMDrive::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_WORMDrive::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_WORMDrive::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_WORMDrive::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_WORMDrive::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_WORMDrive::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_WORMDrive::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_WORMDrive::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_WORMDrive::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_WORMDrive::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_WORMDrive::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_WORMDrive::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_WORMDrive::getTimeOfLastStateChange() const
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

Boolean UNIX_WORMDrive::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_WORMDrive::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_WORMDrive::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_WORMDrive::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_WORMDrive::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_WORMDrive::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_WORMDrive::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_WORMDrive::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_WORMDrive::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_WORMDrive::getCreationClassName() const
{
	return String("UNIX_WORMDrive");
}

Boolean UNIX_WORMDrive::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_WORMDrive::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_WORMDrive::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_WORMDrive::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_WORMDrive::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_WORMDrive::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_WORMDrive::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_WORMDrive::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_WORMDrive::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_WORMDrive::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_WORMDrive::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_WORMDrive::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_WORMDrive::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_WORMDrive::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_WORMDrive::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_WORMDrive::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_WORMDrive::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_WORMDrive::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_WORMDrive::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_WORMDrive::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_WORMDrive::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_WORMDrive::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_WORMDrive::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_WORMDrive::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_WORMDrive::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_WORMDrive::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_WORMDrive::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_WORMDrive::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_WORMDrive::getCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITIES, getCapabilities());
	return true;
}

Array<Uint16> UNIX_WORMDrive::getCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_WORMDrive::getCapabilityDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITY_DESCRIPTIONS, getCapabilityDescriptions());
	return true;
}

Array<String> UNIX_WORMDrive::getCapabilityDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_WORMDrive::getErrorMethodology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_METHODOLOGY, getErrorMethodology());
	return true;
}

String UNIX_WORMDrive::getErrorMethodology() const
{
	return String ("");
}

Boolean UNIX_WORMDrive::getCompressionMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_METHOD, getCompressionMethod());
	return true;
}

String UNIX_WORMDrive::getCompressionMethod() const
{
	return String ("");
}

Boolean UNIX_WORMDrive::getNumberOfMediaSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_MEDIA_SUPPORTED, getNumberOfMediaSupported());
	return true;
}

Uint32 UNIX_WORMDrive::getNumberOfMediaSupported() const
{
	return Uint32(0);
}

Boolean UNIX_WORMDrive::getMaxMediaSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_MEDIA_SIZE, getMaxMediaSize());
	return true;
}

Uint64 UNIX_WORMDrive::getMaxMediaSize() const
{
	return Uint64(0);
}

Boolean UNIX_WORMDrive::getDefaultBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_BLOCK_SIZE, getDefaultBlockSize());
	return true;
}

Uint64 UNIX_WORMDrive::getDefaultBlockSize() const
{
	return Uint64(0);
}

Boolean UNIX_WORMDrive::getMaxBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_BLOCK_SIZE, getMaxBlockSize());
	return true;
}

Uint64 UNIX_WORMDrive::getMaxBlockSize() const
{
	return Uint64(0);
}

Boolean UNIX_WORMDrive::getMinBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_BLOCK_SIZE, getMinBlockSize());
	return true;
}

Uint64 UNIX_WORMDrive::getMinBlockSize() const
{
	return Uint64(0);
}

Boolean UNIX_WORMDrive::getNeedsCleaning(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NEEDS_CLEANING, getNeedsCleaning());
	return true;
}

Boolean UNIX_WORMDrive::getNeedsCleaning() const
{
	return Boolean(false);
}

Boolean UNIX_WORMDrive::getMediaIsLocked(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA_IS_LOCKED, getMediaIsLocked());
	return true;
}

Boolean UNIX_WORMDrive::getMediaIsLocked() const
{
	return Boolean(false);
}

Boolean UNIX_WORMDrive::getSecurity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SECURITY, getSecurity());
	return true;
}

Uint16 UNIX_WORMDrive::getSecurity() const
{
	return Uint16(0);
}

Boolean UNIX_WORMDrive::getLastCleaned(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_CLEANED, getLastCleaned());
	return true;
}

CIMDateTime UNIX_WORMDrive::getLastCleaned() const
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

Boolean UNIX_WORMDrive::getMaxAccessTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ACCESS_TIME, getMaxAccessTime());
	return true;
}

Uint64 UNIX_WORMDrive::getMaxAccessTime() const
{
	return Uint64(0);
}

Boolean UNIX_WORMDrive::getUncompressedDataRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNCOMPRESSED_DATA_RATE, getUncompressedDataRate());
	return true;
}

Uint32 UNIX_WORMDrive::getUncompressedDataRate() const
{
	return Uint32(0);
}

Boolean UNIX_WORMDrive::getLoadTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOAD_TIME, getLoadTime());
	return true;
}

Uint64 UNIX_WORMDrive::getLoadTime() const
{
	return Uint64(0);
}

Boolean UNIX_WORMDrive::getUnloadTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNLOAD_TIME, getUnloadTime());
	return true;
}

Uint64 UNIX_WORMDrive::getUnloadTime() const
{
	return Uint64(0);
}

Boolean UNIX_WORMDrive::getMountCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MOUNT_COUNT, getMountCount());
	return true;
}

Uint64 UNIX_WORMDrive::getMountCount() const
{
	return Uint64(0);
}

Boolean UNIX_WORMDrive::getTimeOfLastMount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_MOUNT, getTimeOfLastMount());
	return true;
}

CIMDateTime UNIX_WORMDrive::getTimeOfLastMount() const
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

Boolean UNIX_WORMDrive::getTotalMountTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_MOUNT_TIME, getTotalMountTime());
	return true;
}

Uint64 UNIX_WORMDrive::getTotalMountTime() const
{
	return Uint64(0);
}

Boolean UNIX_WORMDrive::getUnitsDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNITS_DESCRIPTION, getUnitsDescription());
	return true;
}

String UNIX_WORMDrive::getUnitsDescription() const
{
	return String ("");
}

Boolean UNIX_WORMDrive::getMaxUnitsBeforeCleaning(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_UNITS_BEFORE_CLEANING, getMaxUnitsBeforeCleaning());
	return true;
}

Uint64 UNIX_WORMDrive::getMaxUnitsBeforeCleaning() const
{
	return Uint64(0);
}

Boolean UNIX_WORMDrive::getUnitsUsed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNITS_USED, getUnitsUsed());
	return true;
}

Uint64 UNIX_WORMDrive::getUnitsUsed() const
{
	return Uint64(0);
}



Boolean UNIX_WORMDrive::initialize()
{
	return false;
}

Boolean UNIX_WORMDrive::load(int &pIndex)
{
	return false;
}

Boolean UNIX_WORMDrive::finalize()
{
	return false;
}

Boolean UNIX_WORMDrive::find(Array<CIMKeyBinding> &kbArray)
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
