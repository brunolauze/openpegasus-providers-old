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


UNIX_CacheMemory::UNIX_CacheMemory(void)
{
}

UNIX_CacheMemory::~UNIX_CacheMemory(void)
{
}


Boolean UNIX_CacheMemory::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_CacheMemory::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_CacheMemory::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_CacheMemory::getCaption() const
{
	return String ("");
}

Boolean UNIX_CacheMemory::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_CacheMemory::getDescription() const
{
	return String ("");
}

Boolean UNIX_CacheMemory::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_CacheMemory::getElementName() const
{
	return String("CacheMemory");
}

Boolean UNIX_CacheMemory::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_CacheMemory::getInstallDate() const
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

Boolean UNIX_CacheMemory::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_CacheMemory::getName() const
{
	return String ("");
}

Boolean UNIX_CacheMemory::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_CacheMemory::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_CacheMemory::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_CacheMemory::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_CacheMemory::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_CacheMemory::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_CacheMemory::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_CacheMemory::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_CacheMemory::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_CacheMemory::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_CacheMemory::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_CacheMemory::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_CacheMemory::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_CacheMemory::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_CacheMemory::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_CacheMemory::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_CacheMemory::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_CacheMemory::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_CacheMemory::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_CacheMemory::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_CacheMemory::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_CacheMemory::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_CacheMemory::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_CacheMemory::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_CacheMemory::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_CacheMemory::getTimeOfLastStateChange() const
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

Boolean UNIX_CacheMemory::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_CacheMemory::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_CacheMemory::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_CacheMemory::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_CacheMemory::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_CacheMemory::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_CacheMemory::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_CacheMemory::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_CacheMemory::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_CacheMemory::getCreationClassName() const
{
	return String("UNIX_CacheMemory");
}

Boolean UNIX_CacheMemory::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_CacheMemory::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_CacheMemory::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_CacheMemory::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_CacheMemory::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_CacheMemory::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_CacheMemory::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_CacheMemory::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_CacheMemory::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_CacheMemory::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_CacheMemory::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_CacheMemory::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_CacheMemory::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_CacheMemory::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_CacheMemory::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_CacheMemory::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_CacheMemory::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_CacheMemory::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_CacheMemory::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_CacheMemory::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_CacheMemory::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_CacheMemory::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_CacheMemory::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_CacheMemory::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_CacheMemory::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_CacheMemory::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_CacheMemory::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_CacheMemory::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_CacheMemory::getDataOrganization(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_ORGANIZATION, getDataOrganization());
	return true;
}

Uint16 UNIX_CacheMemory::getDataOrganization() const
{
	return Uint16(0);
}

Boolean UNIX_CacheMemory::getPurpose(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PURPOSE, getPurpose());
	return true;
}

String UNIX_CacheMemory::getPurpose() const
{
	return String ("");
}

Boolean UNIX_CacheMemory::getAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS, getAccess());
	return true;
}

Uint16 UNIX_CacheMemory::getAccess() const
{
	return Uint16(0);
}

Boolean UNIX_CacheMemory::getErrorMethodology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_METHODOLOGY, getErrorMethodology());
	return true;
}

String UNIX_CacheMemory::getErrorMethodology() const
{
	return String ("");
}

Boolean UNIX_CacheMemory::getBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLOCK_SIZE, getBlockSize());
	return true;
}

Uint64 UNIX_CacheMemory::getBlockSize() const
{
	return Uint64(0);
}

Boolean UNIX_CacheMemory::getNumberOfBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_BLOCKS, getNumberOfBlocks());
	return true;
}

Uint64 UNIX_CacheMemory::getNumberOfBlocks() const
{
	return Uint64(0);
}

Boolean UNIX_CacheMemory::getConsumableBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONSUMABLE_BLOCKS, getConsumableBlocks());
	return true;
}

Uint64 UNIX_CacheMemory::getConsumableBlocks() const
{
	return Uint64(0);
}

Boolean UNIX_CacheMemory::getIsBasedOnUnderlyingRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_BASED_ON_UNDERLYING_REDUNDANCY, getIsBasedOnUnderlyingRedundancy());
	return true;
}

Boolean UNIX_CacheMemory::getIsBasedOnUnderlyingRedundancy() const
{
	return Boolean(false);
}

Boolean UNIX_CacheMemory::getSequentialAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEQUENTIAL_ACCESS, getSequentialAccess());
	return true;
}

Boolean UNIX_CacheMemory::getSequentialAccess() const
{
	return Boolean(false);
}

Boolean UNIX_CacheMemory::getExtentStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_STATUS, getExtentStatus());
	return true;
}

Array<Uint16> UNIX_CacheMemory::getExtentStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_CacheMemory::getNoSinglePointOfFailure(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NO_SINGLE_POINT_OF_FAILURE, getNoSinglePointOfFailure());
	return true;
}

Boolean UNIX_CacheMemory::getNoSinglePointOfFailure() const
{
	return Boolean(false);
}

Boolean UNIX_CacheMemory::getDataRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_REDUNDANCY, getDataRedundancy());
	return true;
}

Uint16 UNIX_CacheMemory::getDataRedundancy() const
{
	return Uint16(0);
}

Boolean UNIX_CacheMemory::getPackageRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_REDUNDANCY, getPackageRedundancy());
	return true;
}

Uint16 UNIX_CacheMemory::getPackageRedundancy() const
{
	return Uint16(0);
}

Boolean UNIX_CacheMemory::getDeltaReservation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_RESERVATION, getDeltaReservation());
	return true;
}

Uint8 UNIX_CacheMemory::getDeltaReservation() const
{
	return Uint8(0);
}

Boolean UNIX_CacheMemory::getPrimordial(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMORDIAL, getPrimordial());
	return true;
}

Boolean UNIX_CacheMemory::getPrimordial() const
{
	return Boolean(false);
}

Boolean UNIX_CacheMemory::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

Uint16 UNIX_CacheMemory::getNameFormat() const
{
	return Uint16(0);
}

Boolean UNIX_CacheMemory::getNameNamespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_NAMESPACE, getNameNamespace());
	return true;
}

Uint16 UNIX_CacheMemory::getNameNamespace() const
{
	return Uint16(0);
}

Boolean UNIX_CacheMemory::getOtherNameNamespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NAME_NAMESPACE, getOtherNameNamespace());
	return true;
}

String UNIX_CacheMemory::getOtherNameNamespace() const
{
	return String ("");
}

Boolean UNIX_CacheMemory::getOtherNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NAME_FORMAT, getOtherNameFormat());
	return true;
}

String UNIX_CacheMemory::getOtherNameFormat() const
{
	return String ("");
}

Boolean UNIX_CacheMemory::getVolatile(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VOLATILE, getVolatile());
	return true;
}

Boolean UNIX_CacheMemory::getVolatile() const
{
	return Boolean(false);
}

Boolean UNIX_CacheMemory::getStartingAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTING_ADDRESS, getStartingAddress());
	return true;
}

Uint64 UNIX_CacheMemory::getStartingAddress() const
{
	return Uint64(0);
}

Boolean UNIX_CacheMemory::getEndingAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENDING_ADDRESS, getEndingAddress());
	return true;
}

Uint64 UNIX_CacheMemory::getEndingAddress() const
{
	return Uint64(0);
}

Boolean UNIX_CacheMemory::getErrorInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_INFO, getErrorInfo());
	return true;
}

Uint16 UNIX_CacheMemory::getErrorInfo() const
{
	return Uint16(0);
}

Boolean UNIX_CacheMemory::getOtherErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ERROR_DESCRIPTION, getOtherErrorDescription());
	return true;
}

String UNIX_CacheMemory::getOtherErrorDescription() const
{
	return String ("");
}

Boolean UNIX_CacheMemory::getCorrectableError(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CORRECTABLE_ERROR, getCorrectableError());
	return true;
}

Boolean UNIX_CacheMemory::getCorrectableError() const
{
	return Boolean(false);
}

Boolean UNIX_CacheMemory::getErrorTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_TIME, getErrorTime());
	return true;
}

CIMDateTime UNIX_CacheMemory::getErrorTime() const
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

Boolean UNIX_CacheMemory::getErrorAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_ACCESS, getErrorAccess());
	return true;
}

Uint16 UNIX_CacheMemory::getErrorAccess() const
{
	return Uint16(0);
}

Boolean UNIX_CacheMemory::getErrorTransferSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_TRANSFER_SIZE, getErrorTransferSize());
	return true;
}

Uint32 UNIX_CacheMemory::getErrorTransferSize() const
{
	return Uint32(0);
}

Boolean UNIX_CacheMemory::getErrorData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DATA, getErrorData());
	return true;
}

Array<Uint8> UNIX_CacheMemory::getErrorData() const
{
	Array<Uint8> as;
	

	return as;

}

Boolean UNIX_CacheMemory::getErrorDataOrder(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DATA_ORDER, getErrorDataOrder());
	return true;
}

Uint16 UNIX_CacheMemory::getErrorDataOrder() const
{
	return Uint16(0);
}

Boolean UNIX_CacheMemory::getErrorAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_ADDRESS, getErrorAddress());
	return true;
}

Uint64 UNIX_CacheMemory::getErrorAddress() const
{
	return Uint64(0);
}

Boolean UNIX_CacheMemory::getSystemLevelAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_LEVEL_ADDRESS, getSystemLevelAddress());
	return true;
}

Boolean UNIX_CacheMemory::getSystemLevelAddress() const
{
	return Boolean(false);
}

Boolean UNIX_CacheMemory::getErrorResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_RESOLUTION, getErrorResolution());
	return true;
}

Uint64 UNIX_CacheMemory::getErrorResolution() const
{
	return Uint64(0);
}

Boolean UNIX_CacheMemory::getAdditionalErrorData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_ERROR_DATA, getAdditionalErrorData());
	return true;
}

Array<Uint8> UNIX_CacheMemory::getAdditionalErrorData() const
{
	Array<Uint8> as;
	

	return as;

}

Boolean UNIX_CacheMemory::getLevel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LEVEL, getLevel());
	return true;
}

Uint16 UNIX_CacheMemory::getLevel() const
{
	return Uint16(0);
}

Boolean UNIX_CacheMemory::getWritePolicy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WRITE_POLICY, getWritePolicy());
	return true;
}

Uint16 UNIX_CacheMemory::getWritePolicy() const
{
	return Uint16(0);
}

Boolean UNIX_CacheMemory::getCacheType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CACHE_TYPE, getCacheType());
	return true;
}

Uint16 UNIX_CacheMemory::getCacheType() const
{
	return Uint16(0);
}

Boolean UNIX_CacheMemory::getLineSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LINE_SIZE, getLineSize());
	return true;
}

Uint32 UNIX_CacheMemory::getLineSize() const
{
	return Uint32(0);
}

Boolean UNIX_CacheMemory::getReplacementPolicy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPLACEMENT_POLICY, getReplacementPolicy());
	return true;
}

Uint16 UNIX_CacheMemory::getReplacementPolicy() const
{
	return Uint16(0);
}

Boolean UNIX_CacheMemory::getReadPolicy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_READ_POLICY, getReadPolicy());
	return true;
}

Uint16 UNIX_CacheMemory::getReadPolicy() const
{
	return Uint16(0);
}

Boolean UNIX_CacheMemory::getFlushTimer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FLUSH_TIMER, getFlushTimer());
	return true;
}

Uint32 UNIX_CacheMemory::getFlushTimer() const
{
	return Uint32(0);
}

Boolean UNIX_CacheMemory::getAssociativity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ASSOCIATIVITY, getAssociativity());
	return true;
}

Uint16 UNIX_CacheMemory::getAssociativity() const
{
	return Uint16(0);
}



Boolean UNIX_CacheMemory::initialize()
{
	return false;
}

Boolean UNIX_CacheMemory::load(int &pIndex)
{
	return false;
}

Boolean UNIX_CacheMemory::finalize()
{
	return false;
}

Boolean UNIX_CacheMemory::find(Array<CIMKeyBinding> &kbArray)
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
