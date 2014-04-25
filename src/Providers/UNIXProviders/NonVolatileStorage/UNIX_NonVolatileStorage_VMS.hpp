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


UNIX_NonVolatileStorage::UNIX_NonVolatileStorage(void)
{
}

UNIX_NonVolatileStorage::~UNIX_NonVolatileStorage(void)
{
}


Boolean UNIX_NonVolatileStorage::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_NonVolatileStorage::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_NonVolatileStorage::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_NonVolatileStorage::getCaption() const
{
	return String ("");
}

Boolean UNIX_NonVolatileStorage::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_NonVolatileStorage::getDescription() const
{
	return String ("");
}

Boolean UNIX_NonVolatileStorage::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_NonVolatileStorage::getElementName() const
{
	return String("NonVolatileStorage");
}

Boolean UNIX_NonVolatileStorage::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_NonVolatileStorage::getInstallDate() const
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

Boolean UNIX_NonVolatileStorage::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_NonVolatileStorage::getName() const
{
	return String ("");
}

Boolean UNIX_NonVolatileStorage::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_NonVolatileStorage::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_NonVolatileStorage::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_NonVolatileStorage::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_NonVolatileStorage::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_NonVolatileStorage::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_NonVolatileStorage::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_NonVolatileStorage::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_NonVolatileStorage::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_NonVolatileStorage::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_NonVolatileStorage::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_NonVolatileStorage::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_NonVolatileStorage::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_NonVolatileStorage::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_NonVolatileStorage::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_NonVolatileStorage::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_NonVolatileStorage::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_NonVolatileStorage::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_NonVolatileStorage::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_NonVolatileStorage::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_NonVolatileStorage::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_NonVolatileStorage::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_NonVolatileStorage::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_NonVolatileStorage::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_NonVolatileStorage::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_NonVolatileStorage::getTimeOfLastStateChange() const
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

Boolean UNIX_NonVolatileStorage::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_NonVolatileStorage::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_NonVolatileStorage::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_NonVolatileStorage::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_NonVolatileStorage::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_NonVolatileStorage::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_NonVolatileStorage::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_NonVolatileStorage::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_NonVolatileStorage::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_NonVolatileStorage::getCreationClassName() const
{
	return String("UNIX_NonVolatileStorage");
}

Boolean UNIX_NonVolatileStorage::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_NonVolatileStorage::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_NonVolatileStorage::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_NonVolatileStorage::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_NonVolatileStorage::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_NonVolatileStorage::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_NonVolatileStorage::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_NonVolatileStorage::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_NonVolatileStorage::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_NonVolatileStorage::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_NonVolatileStorage::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_NonVolatileStorage::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_NonVolatileStorage::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_NonVolatileStorage::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_NonVolatileStorage::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_NonVolatileStorage::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_NonVolatileStorage::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_NonVolatileStorage::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_NonVolatileStorage::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_NonVolatileStorage::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_NonVolatileStorage::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_NonVolatileStorage::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_NonVolatileStorage::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_NonVolatileStorage::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_NonVolatileStorage::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_NonVolatileStorage::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_NonVolatileStorage::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_NonVolatileStorage::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_NonVolatileStorage::getDataOrganization(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_ORGANIZATION, getDataOrganization());
	return true;
}

Uint16 UNIX_NonVolatileStorage::getDataOrganization() const
{
	return Uint16(0);
}

Boolean UNIX_NonVolatileStorage::getPurpose(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PURPOSE, getPurpose());
	return true;
}

String UNIX_NonVolatileStorage::getPurpose() const
{
	return String ("");
}

Boolean UNIX_NonVolatileStorage::getAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS, getAccess());
	return true;
}

Uint16 UNIX_NonVolatileStorage::getAccess() const
{
	return Uint16(0);
}

Boolean UNIX_NonVolatileStorage::getErrorMethodology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_METHODOLOGY, getErrorMethodology());
	return true;
}

String UNIX_NonVolatileStorage::getErrorMethodology() const
{
	return String ("");
}

Boolean UNIX_NonVolatileStorage::getBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLOCK_SIZE, getBlockSize());
	return true;
}

Uint64 UNIX_NonVolatileStorage::getBlockSize() const
{
	return Uint64(0);
}

Boolean UNIX_NonVolatileStorage::getNumberOfBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_BLOCKS, getNumberOfBlocks());
	return true;
}

Uint64 UNIX_NonVolatileStorage::getNumberOfBlocks() const
{
	return Uint64(0);
}

Boolean UNIX_NonVolatileStorage::getConsumableBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONSUMABLE_BLOCKS, getConsumableBlocks());
	return true;
}

Uint64 UNIX_NonVolatileStorage::getConsumableBlocks() const
{
	return Uint64(0);
}

Boolean UNIX_NonVolatileStorage::getIsBasedOnUnderlyingRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_BASED_ON_UNDERLYING_REDUNDANCY, getIsBasedOnUnderlyingRedundancy());
	return true;
}

Boolean UNIX_NonVolatileStorage::getIsBasedOnUnderlyingRedundancy() const
{
	return Boolean(false);
}

Boolean UNIX_NonVolatileStorage::getSequentialAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEQUENTIAL_ACCESS, getSequentialAccess());
	return true;
}

Boolean UNIX_NonVolatileStorage::getSequentialAccess() const
{
	return Boolean(false);
}

Boolean UNIX_NonVolatileStorage::getExtentStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_STATUS, getExtentStatus());
	return true;
}

Array<Uint16> UNIX_NonVolatileStorage::getExtentStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_NonVolatileStorage::getNoSinglePointOfFailure(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NO_SINGLE_POINT_OF_FAILURE, getNoSinglePointOfFailure());
	return true;
}

Boolean UNIX_NonVolatileStorage::getNoSinglePointOfFailure() const
{
	return Boolean(false);
}

Boolean UNIX_NonVolatileStorage::getDataRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_REDUNDANCY, getDataRedundancy());
	return true;
}

Uint16 UNIX_NonVolatileStorage::getDataRedundancy() const
{
	return Uint16(0);
}

Boolean UNIX_NonVolatileStorage::getPackageRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_REDUNDANCY, getPackageRedundancy());
	return true;
}

Uint16 UNIX_NonVolatileStorage::getPackageRedundancy() const
{
	return Uint16(0);
}

Boolean UNIX_NonVolatileStorage::getDeltaReservation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_RESERVATION, getDeltaReservation());
	return true;
}

Uint8 UNIX_NonVolatileStorage::getDeltaReservation() const
{
	return Uint8(0);
}

Boolean UNIX_NonVolatileStorage::getPrimordial(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMORDIAL, getPrimordial());
	return true;
}

Boolean UNIX_NonVolatileStorage::getPrimordial() const
{
	return Boolean(false);
}

Boolean UNIX_NonVolatileStorage::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

Uint16 UNIX_NonVolatileStorage::getNameFormat() const
{
	return Uint16(0);
}

Boolean UNIX_NonVolatileStorage::getNameNamespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_NAMESPACE, getNameNamespace());
	return true;
}

Uint16 UNIX_NonVolatileStorage::getNameNamespace() const
{
	return Uint16(0);
}

Boolean UNIX_NonVolatileStorage::getOtherNameNamespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NAME_NAMESPACE, getOtherNameNamespace());
	return true;
}

String UNIX_NonVolatileStorage::getOtherNameNamespace() const
{
	return String ("");
}

Boolean UNIX_NonVolatileStorage::getOtherNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NAME_FORMAT, getOtherNameFormat());
	return true;
}

String UNIX_NonVolatileStorage::getOtherNameFormat() const
{
	return String ("");
}

Boolean UNIX_NonVolatileStorage::getVolatile(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VOLATILE, getVolatile());
	return true;
}

Boolean UNIX_NonVolatileStorage::getVolatile() const
{
	return Boolean(false);
}

Boolean UNIX_NonVolatileStorage::getStartingAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTING_ADDRESS, getStartingAddress());
	return true;
}

Uint64 UNIX_NonVolatileStorage::getStartingAddress() const
{
	return Uint64(0);
}

Boolean UNIX_NonVolatileStorage::getEndingAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENDING_ADDRESS, getEndingAddress());
	return true;
}

Uint64 UNIX_NonVolatileStorage::getEndingAddress() const
{
	return Uint64(0);
}

Boolean UNIX_NonVolatileStorage::getErrorInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_INFO, getErrorInfo());
	return true;
}

Uint16 UNIX_NonVolatileStorage::getErrorInfo() const
{
	return Uint16(0);
}

Boolean UNIX_NonVolatileStorage::getOtherErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ERROR_DESCRIPTION, getOtherErrorDescription());
	return true;
}

String UNIX_NonVolatileStorage::getOtherErrorDescription() const
{
	return String ("");
}

Boolean UNIX_NonVolatileStorage::getCorrectableError(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CORRECTABLE_ERROR, getCorrectableError());
	return true;
}

Boolean UNIX_NonVolatileStorage::getCorrectableError() const
{
	return Boolean(false);
}

Boolean UNIX_NonVolatileStorage::getErrorTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_TIME, getErrorTime());
	return true;
}

CIMDateTime UNIX_NonVolatileStorage::getErrorTime() const
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

Boolean UNIX_NonVolatileStorage::getErrorAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_ACCESS, getErrorAccess());
	return true;
}

Uint16 UNIX_NonVolatileStorage::getErrorAccess() const
{
	return Uint16(0);
}

Boolean UNIX_NonVolatileStorage::getErrorTransferSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_TRANSFER_SIZE, getErrorTransferSize());
	return true;
}

Uint32 UNIX_NonVolatileStorage::getErrorTransferSize() const
{
	return Uint32(0);
}

Boolean UNIX_NonVolatileStorage::getErrorData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DATA, getErrorData());
	return true;
}

Array<Uint8> UNIX_NonVolatileStorage::getErrorData() const
{
	Array<Uint8> as;
	

	return as;

}

Boolean UNIX_NonVolatileStorage::getErrorDataOrder(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DATA_ORDER, getErrorDataOrder());
	return true;
}

Uint16 UNIX_NonVolatileStorage::getErrorDataOrder() const
{
	return Uint16(0);
}

Boolean UNIX_NonVolatileStorage::getErrorAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_ADDRESS, getErrorAddress());
	return true;
}

Uint64 UNIX_NonVolatileStorage::getErrorAddress() const
{
	return Uint64(0);
}

Boolean UNIX_NonVolatileStorage::getSystemLevelAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_LEVEL_ADDRESS, getSystemLevelAddress());
	return true;
}

Boolean UNIX_NonVolatileStorage::getSystemLevelAddress() const
{
	return Boolean(false);
}

Boolean UNIX_NonVolatileStorage::getErrorResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_RESOLUTION, getErrorResolution());
	return true;
}

Uint64 UNIX_NonVolatileStorage::getErrorResolution() const
{
	return Uint64(0);
}

Boolean UNIX_NonVolatileStorage::getAdditionalErrorData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_ERROR_DATA, getAdditionalErrorData());
	return true;
}

Array<Uint8> UNIX_NonVolatileStorage::getAdditionalErrorData() const
{
	Array<Uint8> as;
	

	return as;

}

Boolean UNIX_NonVolatileStorage::getIsWriteable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_WRITEABLE, getIsWriteable());
	return true;
}

Boolean UNIX_NonVolatileStorage::getIsWriteable() const
{
	return Boolean(false);
}

Boolean UNIX_NonVolatileStorage::getApplicationWriteable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_APPLICATION_WRITEABLE, getApplicationWriteable());
	return true;
}

Boolean UNIX_NonVolatileStorage::getApplicationWriteable() const
{
	return Boolean(false);
}

Boolean UNIX_NonVolatileStorage::getStartAddressForApplicationWrite(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_ADDRESS_FOR_APPLICATION_WRITE, getStartAddressForApplicationWrite());
	return true;
}

Uint64 UNIX_NonVolatileStorage::getStartAddressForApplicationWrite() const
{
	return Uint64(0);
}

Boolean UNIX_NonVolatileStorage::getApplicationWriteableSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_APPLICATION_WRITEABLE_SIZE, getApplicationWriteableSize());
	return true;
}

Uint64 UNIX_NonVolatileStorage::getApplicationWriteableSize() const
{
	return Uint64(0);
}



Boolean UNIX_NonVolatileStorage::initialize()
{
	return false;
}

Boolean UNIX_NonVolatileStorage::load(int &pIndex)
{
	return false;
}

Boolean UNIX_NonVolatileStorage::finalize()
{
	return false;
}

Boolean UNIX_NonVolatileStorage::find(Array<CIMKeyBinding> &kbArray)
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
