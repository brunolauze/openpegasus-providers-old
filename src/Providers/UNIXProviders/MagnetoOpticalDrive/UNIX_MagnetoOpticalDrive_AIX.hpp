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


UNIX_MagnetoOpticalDrive::UNIX_MagnetoOpticalDrive(void)
{
}

UNIX_MagnetoOpticalDrive::~UNIX_MagnetoOpticalDrive(void)
{
}


Boolean UNIX_MagnetoOpticalDrive::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_MagnetoOpticalDrive::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_MagnetoOpticalDrive::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_MagnetoOpticalDrive::getCaption() const
{
	return String ("");
}

Boolean UNIX_MagnetoOpticalDrive::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_MagnetoOpticalDrive::getDescription() const
{
	return String ("");
}

Boolean UNIX_MagnetoOpticalDrive::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_MagnetoOpticalDrive::getElementName() const
{
	return String("MagnetoOpticalDrive");
}

Boolean UNIX_MagnetoOpticalDrive::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_MagnetoOpticalDrive::getInstallDate() const
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

Boolean UNIX_MagnetoOpticalDrive::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_MagnetoOpticalDrive::getName() const
{
	return String ("");
}

Boolean UNIX_MagnetoOpticalDrive::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_MagnetoOpticalDrive::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_MagnetoOpticalDrive::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_MagnetoOpticalDrive::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_MagnetoOpticalDrive::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_MagnetoOpticalDrive::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_MagnetoOpticalDrive::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_MagnetoOpticalDrive::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_MagnetoOpticalDrive::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_MagnetoOpticalDrive::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_MagnetoOpticalDrive::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_MagnetoOpticalDrive::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_MagnetoOpticalDrive::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_MagnetoOpticalDrive::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_MagnetoOpticalDrive::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_MagnetoOpticalDrive::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_MagnetoOpticalDrive::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_MagnetoOpticalDrive::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_MagnetoOpticalDrive::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_MagnetoOpticalDrive::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_MagnetoOpticalDrive::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_MagnetoOpticalDrive::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_MagnetoOpticalDrive::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_MagnetoOpticalDrive::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_MagnetoOpticalDrive::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_MagnetoOpticalDrive::getTimeOfLastStateChange() const
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

Boolean UNIX_MagnetoOpticalDrive::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_MagnetoOpticalDrive::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_MagnetoOpticalDrive::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_MagnetoOpticalDrive::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_MagnetoOpticalDrive::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_MagnetoOpticalDrive::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_MagnetoOpticalDrive::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_MagnetoOpticalDrive::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_MagnetoOpticalDrive::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_MagnetoOpticalDrive::getCreationClassName() const
{
	return String("UNIX_MagnetoOpticalDrive");
}

Boolean UNIX_MagnetoOpticalDrive::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_MagnetoOpticalDrive::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_MagnetoOpticalDrive::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_MagnetoOpticalDrive::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_MagnetoOpticalDrive::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_MagnetoOpticalDrive::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_MagnetoOpticalDrive::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_MagnetoOpticalDrive::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_MagnetoOpticalDrive::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_MagnetoOpticalDrive::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_MagnetoOpticalDrive::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_MagnetoOpticalDrive::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_MagnetoOpticalDrive::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_MagnetoOpticalDrive::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_MagnetoOpticalDrive::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_MagnetoOpticalDrive::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_MagnetoOpticalDrive::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_MagnetoOpticalDrive::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_MagnetoOpticalDrive::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_MagnetoOpticalDrive::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_MagnetoOpticalDrive::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_MagnetoOpticalDrive::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_MagnetoOpticalDrive::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_MagnetoOpticalDrive::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_MagnetoOpticalDrive::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_MagnetoOpticalDrive::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_MagnetoOpticalDrive::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_MagnetoOpticalDrive::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_MagnetoOpticalDrive::getCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITIES, getCapabilities());
	return true;
}

Array<Uint16> UNIX_MagnetoOpticalDrive::getCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_MagnetoOpticalDrive::getCapabilityDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITY_DESCRIPTIONS, getCapabilityDescriptions());
	return true;
}

Array<String> UNIX_MagnetoOpticalDrive::getCapabilityDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_MagnetoOpticalDrive::getErrorMethodology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_METHODOLOGY, getErrorMethodology());
	return true;
}

String UNIX_MagnetoOpticalDrive::getErrorMethodology() const
{
	return String ("");
}

Boolean UNIX_MagnetoOpticalDrive::getCompressionMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_METHOD, getCompressionMethod());
	return true;
}

String UNIX_MagnetoOpticalDrive::getCompressionMethod() const
{
	return String ("");
}

Boolean UNIX_MagnetoOpticalDrive::getNumberOfMediaSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_MEDIA_SUPPORTED, getNumberOfMediaSupported());
	return true;
}

Uint32 UNIX_MagnetoOpticalDrive::getNumberOfMediaSupported() const
{
	return Uint32(0);
}

Boolean UNIX_MagnetoOpticalDrive::getMaxMediaSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_MEDIA_SIZE, getMaxMediaSize());
	return true;
}

Uint64 UNIX_MagnetoOpticalDrive::getMaxMediaSize() const
{
	return Uint64(0);
}

Boolean UNIX_MagnetoOpticalDrive::getDefaultBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_BLOCK_SIZE, getDefaultBlockSize());
	return true;
}

Uint64 UNIX_MagnetoOpticalDrive::getDefaultBlockSize() const
{
	return Uint64(0);
}

Boolean UNIX_MagnetoOpticalDrive::getMaxBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_BLOCK_SIZE, getMaxBlockSize());
	return true;
}

Uint64 UNIX_MagnetoOpticalDrive::getMaxBlockSize() const
{
	return Uint64(0);
}

Boolean UNIX_MagnetoOpticalDrive::getMinBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_BLOCK_SIZE, getMinBlockSize());
	return true;
}

Uint64 UNIX_MagnetoOpticalDrive::getMinBlockSize() const
{
	return Uint64(0);
}

Boolean UNIX_MagnetoOpticalDrive::getNeedsCleaning(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NEEDS_CLEANING, getNeedsCleaning());
	return true;
}

Boolean UNIX_MagnetoOpticalDrive::getNeedsCleaning() const
{
	return Boolean(false);
}

Boolean UNIX_MagnetoOpticalDrive::getMediaIsLocked(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA_IS_LOCKED, getMediaIsLocked());
	return true;
}

Boolean UNIX_MagnetoOpticalDrive::getMediaIsLocked() const
{
	return Boolean(false);
}

Boolean UNIX_MagnetoOpticalDrive::getSecurity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SECURITY, getSecurity());
	return true;
}

Uint16 UNIX_MagnetoOpticalDrive::getSecurity() const
{
	return Uint16(0);
}

Boolean UNIX_MagnetoOpticalDrive::getLastCleaned(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_CLEANED, getLastCleaned());
	return true;
}

CIMDateTime UNIX_MagnetoOpticalDrive::getLastCleaned() const
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

Boolean UNIX_MagnetoOpticalDrive::getMaxAccessTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ACCESS_TIME, getMaxAccessTime());
	return true;
}

Uint64 UNIX_MagnetoOpticalDrive::getMaxAccessTime() const
{
	return Uint64(0);
}

Boolean UNIX_MagnetoOpticalDrive::getUncompressedDataRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNCOMPRESSED_DATA_RATE, getUncompressedDataRate());
	return true;
}

Uint32 UNIX_MagnetoOpticalDrive::getUncompressedDataRate() const
{
	return Uint32(0);
}

Boolean UNIX_MagnetoOpticalDrive::getLoadTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOAD_TIME, getLoadTime());
	return true;
}

Uint64 UNIX_MagnetoOpticalDrive::getLoadTime() const
{
	return Uint64(0);
}

Boolean UNIX_MagnetoOpticalDrive::getUnloadTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNLOAD_TIME, getUnloadTime());
	return true;
}

Uint64 UNIX_MagnetoOpticalDrive::getUnloadTime() const
{
	return Uint64(0);
}

Boolean UNIX_MagnetoOpticalDrive::getMountCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MOUNT_COUNT, getMountCount());
	return true;
}

Uint64 UNIX_MagnetoOpticalDrive::getMountCount() const
{
	return Uint64(0);
}

Boolean UNIX_MagnetoOpticalDrive::getTimeOfLastMount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_MOUNT, getTimeOfLastMount());
	return true;
}

CIMDateTime UNIX_MagnetoOpticalDrive::getTimeOfLastMount() const
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

Boolean UNIX_MagnetoOpticalDrive::getTotalMountTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_MOUNT_TIME, getTotalMountTime());
	return true;
}

Uint64 UNIX_MagnetoOpticalDrive::getTotalMountTime() const
{
	return Uint64(0);
}

Boolean UNIX_MagnetoOpticalDrive::getUnitsDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNITS_DESCRIPTION, getUnitsDescription());
	return true;
}

String UNIX_MagnetoOpticalDrive::getUnitsDescription() const
{
	return String ("");
}

Boolean UNIX_MagnetoOpticalDrive::getMaxUnitsBeforeCleaning(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_UNITS_BEFORE_CLEANING, getMaxUnitsBeforeCleaning());
	return true;
}

Uint64 UNIX_MagnetoOpticalDrive::getMaxUnitsBeforeCleaning() const
{
	return Uint64(0);
}

Boolean UNIX_MagnetoOpticalDrive::getUnitsUsed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNITS_USED, getUnitsUsed());
	return true;
}

Uint64 UNIX_MagnetoOpticalDrive::getUnitsUsed() const
{
	return Uint64(0);
}



Boolean UNIX_MagnetoOpticalDrive::initialize()
{
	return false;
}

Boolean UNIX_MagnetoOpticalDrive::load(int &pIndex)
{
	return false;
}

Boolean UNIX_MagnetoOpticalDrive::finalize()
{
	return false;
}

Boolean UNIX_MagnetoOpticalDrive::find(Array<CIMKeyBinding> &kbArray)
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
