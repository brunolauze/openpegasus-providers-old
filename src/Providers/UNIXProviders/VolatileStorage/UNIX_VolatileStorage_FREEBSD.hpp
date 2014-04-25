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


UNIX_VolatileStorage::UNIX_VolatileStorage(void)
{
}

UNIX_VolatileStorage::~UNIX_VolatileStorage(void)
{
}


Boolean UNIX_VolatileStorage::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_VolatileStorage::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_VolatileStorage::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_VolatileStorage::getCaption() const
{
	return String ("");
}

Boolean UNIX_VolatileStorage::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_VolatileStorage::getDescription() const
{
	return String ("");
}

Boolean UNIX_VolatileStorage::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_VolatileStorage::getElementName() const
{
	return String("VolatileStorage");
}

Boolean UNIX_VolatileStorage::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_VolatileStorage::getInstallDate() const
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

Boolean UNIX_VolatileStorage::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_VolatileStorage::getName() const
{
	return String ("");
}

Boolean UNIX_VolatileStorage::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_VolatileStorage::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_VolatileStorage::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_VolatileStorage::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_VolatileStorage::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_VolatileStorage::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_VolatileStorage::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_VolatileStorage::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_VolatileStorage::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_VolatileStorage::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_VolatileStorage::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_VolatileStorage::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_VolatileStorage::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_VolatileStorage::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_VolatileStorage::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_VolatileStorage::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_VolatileStorage::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_VolatileStorage::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_VolatileStorage::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_VolatileStorage::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_VolatileStorage::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_VolatileStorage::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_VolatileStorage::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_VolatileStorage::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_VolatileStorage::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_VolatileStorage::getTimeOfLastStateChange() const
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

Boolean UNIX_VolatileStorage::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_VolatileStorage::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_VolatileStorage::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_VolatileStorage::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_VolatileStorage::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_VolatileStorage::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_VolatileStorage::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_VolatileStorage::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_VolatileStorage::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_VolatileStorage::getCreationClassName() const
{
	return String("UNIX_VolatileStorage");
}

Boolean UNIX_VolatileStorage::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_VolatileStorage::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_VolatileStorage::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_VolatileStorage::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_VolatileStorage::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_VolatileStorage::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_VolatileStorage::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_VolatileStorage::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_VolatileStorage::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_VolatileStorage::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_VolatileStorage::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_VolatileStorage::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_VolatileStorage::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_VolatileStorage::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_VolatileStorage::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_VolatileStorage::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_VolatileStorage::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_VolatileStorage::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_VolatileStorage::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_VolatileStorage::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_VolatileStorage::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_VolatileStorage::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_VolatileStorage::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_VolatileStorage::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_VolatileStorage::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_VolatileStorage::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_VolatileStorage::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_VolatileStorage::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_VolatileStorage::getDataOrganization(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_ORGANIZATION, getDataOrganization());
	return true;
}

Uint16 UNIX_VolatileStorage::getDataOrganization() const
{
	return Uint16(0);
}

Boolean UNIX_VolatileStorage::getPurpose(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PURPOSE, getPurpose());
	return true;
}

String UNIX_VolatileStorage::getPurpose() const
{
	return String ("");
}

Boolean UNIX_VolatileStorage::getAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS, getAccess());
	return true;
}

Uint16 UNIX_VolatileStorage::getAccess() const
{
	return Uint16(0);
}

Boolean UNIX_VolatileStorage::getErrorMethodology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_METHODOLOGY, getErrorMethodology());
	return true;
}

String UNIX_VolatileStorage::getErrorMethodology() const
{
	return String ("");
}

Boolean UNIX_VolatileStorage::getBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLOCK_SIZE, getBlockSize());
	return true;
}

Uint64 UNIX_VolatileStorage::getBlockSize() const
{
	return Uint64(0);
}

Boolean UNIX_VolatileStorage::getNumberOfBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_BLOCKS, getNumberOfBlocks());
	return true;
}

Uint64 UNIX_VolatileStorage::getNumberOfBlocks() const
{
	return Uint64(0);
}

Boolean UNIX_VolatileStorage::getConsumableBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONSUMABLE_BLOCKS, getConsumableBlocks());
	return true;
}

Uint64 UNIX_VolatileStorage::getConsumableBlocks() const
{
	return Uint64(0);
}

Boolean UNIX_VolatileStorage::getIsBasedOnUnderlyingRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_BASED_ON_UNDERLYING_REDUNDANCY, getIsBasedOnUnderlyingRedundancy());
	return true;
}

Boolean UNIX_VolatileStorage::getIsBasedOnUnderlyingRedundancy() const
{
	return Boolean(false);
}

Boolean UNIX_VolatileStorage::getSequentialAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEQUENTIAL_ACCESS, getSequentialAccess());
	return true;
}

Boolean UNIX_VolatileStorage::getSequentialAccess() const
{
	return Boolean(false);
}

Boolean UNIX_VolatileStorage::getExtentStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_STATUS, getExtentStatus());
	return true;
}

Array<Uint16> UNIX_VolatileStorage::getExtentStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_VolatileStorage::getNoSinglePointOfFailure(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NO_SINGLE_POINT_OF_FAILURE, getNoSinglePointOfFailure());
	return true;
}

Boolean UNIX_VolatileStorage::getNoSinglePointOfFailure() const
{
	return Boolean(false);
}

Boolean UNIX_VolatileStorage::getDataRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_REDUNDANCY, getDataRedundancy());
	return true;
}

Uint16 UNIX_VolatileStorage::getDataRedundancy() const
{
	return Uint16(0);
}

Boolean UNIX_VolatileStorage::getPackageRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_REDUNDANCY, getPackageRedundancy());
	return true;
}

Uint16 UNIX_VolatileStorage::getPackageRedundancy() const
{
	return Uint16(0);
}

Boolean UNIX_VolatileStorage::getDeltaReservation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_RESERVATION, getDeltaReservation());
	return true;
}

Uint8 UNIX_VolatileStorage::getDeltaReservation() const
{
	return Uint8(0);
}

Boolean UNIX_VolatileStorage::getPrimordial(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMORDIAL, getPrimordial());
	return true;
}

Boolean UNIX_VolatileStorage::getPrimordial() const
{
	return Boolean(false);
}

Boolean UNIX_VolatileStorage::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

Uint16 UNIX_VolatileStorage::getNameFormat() const
{
	return Uint16(0);
}

Boolean UNIX_VolatileStorage::getNameNamespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_NAMESPACE, getNameNamespace());
	return true;
}

Uint16 UNIX_VolatileStorage::getNameNamespace() const
{
	return Uint16(0);
}

Boolean UNIX_VolatileStorage::getOtherNameNamespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NAME_NAMESPACE, getOtherNameNamespace());
	return true;
}

String UNIX_VolatileStorage::getOtherNameNamespace() const
{
	return String ("");
}

Boolean UNIX_VolatileStorage::getOtherNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NAME_FORMAT, getOtherNameFormat());
	return true;
}

String UNIX_VolatileStorage::getOtherNameFormat() const
{
	return String ("");
}

Boolean UNIX_VolatileStorage::getVolatile(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VOLATILE, getVolatile());
	return true;
}

Boolean UNIX_VolatileStorage::getVolatile() const
{
	return Boolean(false);
}

Boolean UNIX_VolatileStorage::getStartingAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTING_ADDRESS, getStartingAddress());
	return true;
}

Uint64 UNIX_VolatileStorage::getStartingAddress() const
{
	return Uint64(0);
}

Boolean UNIX_VolatileStorage::getEndingAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENDING_ADDRESS, getEndingAddress());
	return true;
}

Uint64 UNIX_VolatileStorage::getEndingAddress() const
{
	return Uint64(0);
}

Boolean UNIX_VolatileStorage::getErrorInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_INFO, getErrorInfo());
	return true;
}

Uint16 UNIX_VolatileStorage::getErrorInfo() const
{
	return Uint16(0);
}

Boolean UNIX_VolatileStorage::getOtherErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ERROR_DESCRIPTION, getOtherErrorDescription());
	return true;
}

String UNIX_VolatileStorage::getOtherErrorDescription() const
{
	return String ("");
}

Boolean UNIX_VolatileStorage::getCorrectableError(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CORRECTABLE_ERROR, getCorrectableError());
	return true;
}

Boolean UNIX_VolatileStorage::getCorrectableError() const
{
	return Boolean(false);
}

Boolean UNIX_VolatileStorage::getErrorTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_TIME, getErrorTime());
	return true;
}

CIMDateTime UNIX_VolatileStorage::getErrorTime() const
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

Boolean UNIX_VolatileStorage::getErrorAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_ACCESS, getErrorAccess());
	return true;
}

Uint16 UNIX_VolatileStorage::getErrorAccess() const
{
	return Uint16(0);
}

Boolean UNIX_VolatileStorage::getErrorTransferSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_TRANSFER_SIZE, getErrorTransferSize());
	return true;
}

Uint32 UNIX_VolatileStorage::getErrorTransferSize() const
{
	return Uint32(0);
}

Boolean UNIX_VolatileStorage::getErrorData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DATA, getErrorData());
	return true;
}

Array<Uint8> UNIX_VolatileStorage::getErrorData() const
{
	Array<Uint8> as;
	

	return as;

}

Boolean UNIX_VolatileStorage::getErrorDataOrder(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DATA_ORDER, getErrorDataOrder());
	return true;
}

Uint16 UNIX_VolatileStorage::getErrorDataOrder() const
{
	return Uint16(0);
}

Boolean UNIX_VolatileStorage::getErrorAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_ADDRESS, getErrorAddress());
	return true;
}

Uint64 UNIX_VolatileStorage::getErrorAddress() const
{
	return Uint64(0);
}

Boolean UNIX_VolatileStorage::getSystemLevelAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_LEVEL_ADDRESS, getSystemLevelAddress());
	return true;
}

Boolean UNIX_VolatileStorage::getSystemLevelAddress() const
{
	return Boolean(false);
}

Boolean UNIX_VolatileStorage::getErrorResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_RESOLUTION, getErrorResolution());
	return true;
}

Uint64 UNIX_VolatileStorage::getErrorResolution() const
{
	return Uint64(0);
}

Boolean UNIX_VolatileStorage::getAdditionalErrorData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_ERROR_DATA, getAdditionalErrorData());
	return true;
}

Array<Uint8> UNIX_VolatileStorage::getAdditionalErrorData() const
{
	Array<Uint8> as;
	

	return as;

}

Boolean UNIX_VolatileStorage::getCacheable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CACHEABLE, getCacheable());
	return true;
}

Boolean UNIX_VolatileStorage::getCacheable() const
{
	return Boolean(false);
}

Boolean UNIX_VolatileStorage::getCacheType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CACHE_TYPE, getCacheType());
	return true;
}

Uint16 UNIX_VolatileStorage::getCacheType() const
{
	return Uint16(0);
}



Boolean UNIX_VolatileStorage::initialize()
{
	return false;
}

Boolean UNIX_VolatileStorage::load(int &pIndex)
{
	return false;
}

Boolean UNIX_VolatileStorage::finalize()
{
	return false;
}

Boolean UNIX_VolatileStorage::find(Array<CIMKeyBinding> &kbArray)
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
