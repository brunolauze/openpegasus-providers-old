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


UNIX_DVDDrive::UNIX_DVDDrive(void)
{
}

UNIX_DVDDrive::~UNIX_DVDDrive(void)
{
}


Boolean UNIX_DVDDrive::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DVDDrive::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_DVDDrive::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DVDDrive::getCaption() const
{
	return String ("");
}

Boolean UNIX_DVDDrive::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DVDDrive::getDescription() const
{
	return String ("");
}

Boolean UNIX_DVDDrive::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DVDDrive::getElementName() const
{
	return String("DVDDrive");
}

Boolean UNIX_DVDDrive::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_DVDDrive::getInstallDate() const
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

Boolean UNIX_DVDDrive::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_DVDDrive::getName() const
{
	return String ("");
}

Boolean UNIX_DVDDrive::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_DVDDrive::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DVDDrive::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_DVDDrive::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_DVDDrive::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_DVDDrive::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_DVDDrive::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_DVDDrive::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_DVDDrive::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_DVDDrive::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_DVDDrive::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_DVDDrive::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_DVDDrive::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_DVDDrive::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_DVDDrive::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_DVDDrive::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_DVDDrive::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_DVDDrive::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_DVDDrive::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_DVDDrive::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_DVDDrive::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_DVDDrive::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_DVDDrive::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_DVDDrive::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_DVDDrive::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_DVDDrive::getTimeOfLastStateChange() const
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

Boolean UNIX_DVDDrive::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_DVDDrive::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DVDDrive::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_DVDDrive::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_DVDDrive::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_DVDDrive::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_DVDDrive::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_DVDDrive::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_DVDDrive::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_DVDDrive::getCreationClassName() const
{
	return String("UNIX_DVDDrive");
}

Boolean UNIX_DVDDrive::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_DVDDrive::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_DVDDrive::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_DVDDrive::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_DVDDrive::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_DVDDrive::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DVDDrive::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_DVDDrive::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_DVDDrive::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_DVDDrive::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_DVDDrive::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_DVDDrive::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_DVDDrive::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_DVDDrive::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_DVDDrive::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_DVDDrive::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_DVDDrive::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_DVDDrive::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_DVDDrive::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_DVDDrive::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_DVDDrive::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_DVDDrive::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_DVDDrive::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_DVDDrive::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_DVDDrive::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_DVDDrive::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DVDDrive::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_DVDDrive::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_DVDDrive::getCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITIES, getCapabilities());
	return true;
}

Array<Uint16> UNIX_DVDDrive::getCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DVDDrive::getCapabilityDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITY_DESCRIPTIONS, getCapabilityDescriptions());
	return true;
}

Array<String> UNIX_DVDDrive::getCapabilityDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_DVDDrive::getErrorMethodology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_METHODOLOGY, getErrorMethodology());
	return true;
}

String UNIX_DVDDrive::getErrorMethodology() const
{
	return String ("");
}

Boolean UNIX_DVDDrive::getCompressionMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_METHOD, getCompressionMethod());
	return true;
}

String UNIX_DVDDrive::getCompressionMethod() const
{
	return String ("");
}

Boolean UNIX_DVDDrive::getNumberOfMediaSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_MEDIA_SUPPORTED, getNumberOfMediaSupported());
	return true;
}

Uint32 UNIX_DVDDrive::getNumberOfMediaSupported() const
{
	return Uint32(0);
}

Boolean UNIX_DVDDrive::getMaxMediaSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_MEDIA_SIZE, getMaxMediaSize());
	return true;
}

Uint64 UNIX_DVDDrive::getMaxMediaSize() const
{
	return Uint64(0);
}

Boolean UNIX_DVDDrive::getDefaultBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_BLOCK_SIZE, getDefaultBlockSize());
	return true;
}

Uint64 UNIX_DVDDrive::getDefaultBlockSize() const
{
	return Uint64(0);
}

Boolean UNIX_DVDDrive::getMaxBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_BLOCK_SIZE, getMaxBlockSize());
	return true;
}

Uint64 UNIX_DVDDrive::getMaxBlockSize() const
{
	return Uint64(0);
}

Boolean UNIX_DVDDrive::getMinBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_BLOCK_SIZE, getMinBlockSize());
	return true;
}

Uint64 UNIX_DVDDrive::getMinBlockSize() const
{
	return Uint64(0);
}

Boolean UNIX_DVDDrive::getNeedsCleaning(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NEEDS_CLEANING, getNeedsCleaning());
	return true;
}

Boolean UNIX_DVDDrive::getNeedsCleaning() const
{
	return Boolean(false);
}

Boolean UNIX_DVDDrive::getMediaIsLocked(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA_IS_LOCKED, getMediaIsLocked());
	return true;
}

Boolean UNIX_DVDDrive::getMediaIsLocked() const
{
	return Boolean(false);
}

Boolean UNIX_DVDDrive::getSecurity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SECURITY, getSecurity());
	return true;
}

Uint16 UNIX_DVDDrive::getSecurity() const
{
	return Uint16(0);
}

Boolean UNIX_DVDDrive::getLastCleaned(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_CLEANED, getLastCleaned());
	return true;
}

CIMDateTime UNIX_DVDDrive::getLastCleaned() const
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

Boolean UNIX_DVDDrive::getMaxAccessTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ACCESS_TIME, getMaxAccessTime());
	return true;
}

Uint64 UNIX_DVDDrive::getMaxAccessTime() const
{
	return Uint64(0);
}

Boolean UNIX_DVDDrive::getUncompressedDataRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNCOMPRESSED_DATA_RATE, getUncompressedDataRate());
	return true;
}

Uint32 UNIX_DVDDrive::getUncompressedDataRate() const
{
	return Uint32(0);
}

Boolean UNIX_DVDDrive::getLoadTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOAD_TIME, getLoadTime());
	return true;
}

Uint64 UNIX_DVDDrive::getLoadTime() const
{
	return Uint64(0);
}

Boolean UNIX_DVDDrive::getUnloadTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNLOAD_TIME, getUnloadTime());
	return true;
}

Uint64 UNIX_DVDDrive::getUnloadTime() const
{
	return Uint64(0);
}

Boolean UNIX_DVDDrive::getMountCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MOUNT_COUNT, getMountCount());
	return true;
}

Uint64 UNIX_DVDDrive::getMountCount() const
{
	return Uint64(0);
}

Boolean UNIX_DVDDrive::getTimeOfLastMount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_MOUNT, getTimeOfLastMount());
	return true;
}

CIMDateTime UNIX_DVDDrive::getTimeOfLastMount() const
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

Boolean UNIX_DVDDrive::getTotalMountTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_MOUNT_TIME, getTotalMountTime());
	return true;
}

Uint64 UNIX_DVDDrive::getTotalMountTime() const
{
	return Uint64(0);
}

Boolean UNIX_DVDDrive::getUnitsDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNITS_DESCRIPTION, getUnitsDescription());
	return true;
}

String UNIX_DVDDrive::getUnitsDescription() const
{
	return String ("");
}

Boolean UNIX_DVDDrive::getMaxUnitsBeforeCleaning(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_UNITS_BEFORE_CLEANING, getMaxUnitsBeforeCleaning());
	return true;
}

Uint64 UNIX_DVDDrive::getMaxUnitsBeforeCleaning() const
{
	return Uint64(0);
}

Boolean UNIX_DVDDrive::getUnitsUsed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNITS_USED, getUnitsUsed());
	return true;
}

Uint64 UNIX_DVDDrive::getUnitsUsed() const
{
	return Uint64(0);
}

Boolean UNIX_DVDDrive::getFormatsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FORMATS_SUPPORTED, getFormatsSupported());
	return true;
}

Array<Uint16> UNIX_DVDDrive::getFormatsSupported() const
{
	Array<Uint16> as;
	

	return as;

}



Boolean UNIX_DVDDrive::initialize()
{
	return false;
}

Boolean UNIX_DVDDrive::load(int &pIndex)
{
	return false;
}

Boolean UNIX_DVDDrive::finalize()
{
	return false;
}

Boolean UNIX_DVDDrive::find(Array<CIMKeyBinding> &kbArray)
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
