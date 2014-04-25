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


UNIX_OpaqueManagementData::UNIX_OpaqueManagementData(void)
{
}

UNIX_OpaqueManagementData::~UNIX_OpaqueManagementData(void)
{
}


Boolean UNIX_OpaqueManagementData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_OpaqueManagementData::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_OpaqueManagementData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_OpaqueManagementData::getCaption() const
{
	return String ("");
}

Boolean UNIX_OpaqueManagementData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_OpaqueManagementData::getDescription() const
{
	return String ("");
}

Boolean UNIX_OpaqueManagementData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_OpaqueManagementData::getElementName() const
{
	return String("OpaqueManagementData");
}

Boolean UNIX_OpaqueManagementData::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_OpaqueManagementData::getInstallDate() const
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

Boolean UNIX_OpaqueManagementData::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_OpaqueManagementData::getName() const
{
	return String ("");
}

Boolean UNIX_OpaqueManagementData::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_OpaqueManagementData::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_OpaqueManagementData::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_OpaqueManagementData::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OpaqueManagementData::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_OpaqueManagementData::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_OpaqueManagementData::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_OpaqueManagementData::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_OpaqueManagementData::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_OpaqueManagementData::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_OpaqueManagementData::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_OpaqueManagementData::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_OpaqueManagementData::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_OpaqueManagementData::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_OpaqueManagementData::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_OpaqueManagementData::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_OpaqueManagementData::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_OpaqueManagementData::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_OpaqueManagementData::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_OpaqueManagementData::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_OpaqueManagementData::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_OpaqueManagementData::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_OpaqueManagementData::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_OpaqueManagementData::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_OpaqueManagementData::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_OpaqueManagementData::getTimeOfLastStateChange() const
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

Boolean UNIX_OpaqueManagementData::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_OpaqueManagementData::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_OpaqueManagementData::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_OpaqueManagementData::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_OpaqueManagementData::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_OpaqueManagementData::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_OpaqueManagementData::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_OpaqueManagementData::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_OpaqueManagementData::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_OpaqueManagementData::getCreationClassName() const
{
	return String("UNIX_OpaqueManagementData");
}

Boolean UNIX_OpaqueManagementData::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_OpaqueManagementData::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_OpaqueManagementData::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_OpaqueManagementData::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_OpaqueManagementData::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_OpaqueManagementData::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_OpaqueManagementData::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_OpaqueManagementData::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_OpaqueManagementData::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_OpaqueManagementData::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_OpaqueManagementData::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_OpaqueManagementData::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_OpaqueManagementData::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_OpaqueManagementData::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_OpaqueManagementData::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_OpaqueManagementData::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_OpaqueManagementData::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_OpaqueManagementData::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OpaqueManagementData::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_OpaqueManagementData::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_OpaqueManagementData::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_OpaqueManagementData::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_OpaqueManagementData::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_OpaqueManagementData::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OpaqueManagementData::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_OpaqueManagementData::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_OpaqueManagementData::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_OpaqueManagementData::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_OpaqueManagementData::getDataOrganization(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_ORGANIZATION, getDataOrganization());
	return true;
}

Uint16 UNIX_OpaqueManagementData::getDataOrganization() const
{
	return Uint16(0);
}

Boolean UNIX_OpaqueManagementData::getPurpose(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PURPOSE, getPurpose());
	return true;
}

String UNIX_OpaqueManagementData::getPurpose() const
{
	return String ("");
}

Boolean UNIX_OpaqueManagementData::getAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS, getAccess());
	return true;
}

Uint16 UNIX_OpaqueManagementData::getAccess() const
{
	return Uint16(0);
}

Boolean UNIX_OpaqueManagementData::getErrorMethodology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_METHODOLOGY, getErrorMethodology());
	return true;
}

String UNIX_OpaqueManagementData::getErrorMethodology() const
{
	return String ("");
}

Boolean UNIX_OpaqueManagementData::getBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLOCK_SIZE, getBlockSize());
	return true;
}

Uint64 UNIX_OpaqueManagementData::getBlockSize() const
{
	return Uint64(0);
}

Boolean UNIX_OpaqueManagementData::getNumberOfBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_BLOCKS, getNumberOfBlocks());
	return true;
}

Uint64 UNIX_OpaqueManagementData::getNumberOfBlocks() const
{
	return Uint64(0);
}

Boolean UNIX_OpaqueManagementData::getConsumableBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONSUMABLE_BLOCKS, getConsumableBlocks());
	return true;
}

Uint64 UNIX_OpaqueManagementData::getConsumableBlocks() const
{
	return Uint64(0);
}

Boolean UNIX_OpaqueManagementData::getIsBasedOnUnderlyingRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_BASED_ON_UNDERLYING_REDUNDANCY, getIsBasedOnUnderlyingRedundancy());
	return true;
}

Boolean UNIX_OpaqueManagementData::getIsBasedOnUnderlyingRedundancy() const
{
	return Boolean(false);
}

Boolean UNIX_OpaqueManagementData::getSequentialAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEQUENTIAL_ACCESS, getSequentialAccess());
	return true;
}

Boolean UNIX_OpaqueManagementData::getSequentialAccess() const
{
	return Boolean(false);
}

Boolean UNIX_OpaqueManagementData::getExtentStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_STATUS, getExtentStatus());
	return true;
}

Array<Uint16> UNIX_OpaqueManagementData::getExtentStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_OpaqueManagementData::getNoSinglePointOfFailure(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NO_SINGLE_POINT_OF_FAILURE, getNoSinglePointOfFailure());
	return true;
}

Boolean UNIX_OpaqueManagementData::getNoSinglePointOfFailure() const
{
	return Boolean(false);
}

Boolean UNIX_OpaqueManagementData::getDataRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_REDUNDANCY, getDataRedundancy());
	return true;
}

Uint16 UNIX_OpaqueManagementData::getDataRedundancy() const
{
	return Uint16(0);
}

Boolean UNIX_OpaqueManagementData::getPackageRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_REDUNDANCY, getPackageRedundancy());
	return true;
}

Uint16 UNIX_OpaqueManagementData::getPackageRedundancy() const
{
	return Uint16(0);
}

Boolean UNIX_OpaqueManagementData::getDeltaReservation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_RESERVATION, getDeltaReservation());
	return true;
}

Uint8 UNIX_OpaqueManagementData::getDeltaReservation() const
{
	return Uint8(0);
}

Boolean UNIX_OpaqueManagementData::getPrimordial(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMORDIAL, getPrimordial());
	return true;
}

Boolean UNIX_OpaqueManagementData::getPrimordial() const
{
	return Boolean(false);
}

Boolean UNIX_OpaqueManagementData::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

Uint16 UNIX_OpaqueManagementData::getNameFormat() const
{
	return Uint16(0);
}

Boolean UNIX_OpaqueManagementData::getNameNamespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_NAMESPACE, getNameNamespace());
	return true;
}

Uint16 UNIX_OpaqueManagementData::getNameNamespace() const
{
	return Uint16(0);
}

Boolean UNIX_OpaqueManagementData::getOtherNameNamespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NAME_NAMESPACE, getOtherNameNamespace());
	return true;
}

String UNIX_OpaqueManagementData::getOtherNameNamespace() const
{
	return String ("");
}

Boolean UNIX_OpaqueManagementData::getOtherNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NAME_FORMAT, getOtherNameFormat());
	return true;
}

String UNIX_OpaqueManagementData::getOtherNameFormat() const
{
	return String ("");
}

Boolean UNIX_OpaqueManagementData::getMaxSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_SIZE, getMaxSize());
	return true;
}

Uint64 UNIX_OpaqueManagementData::getMaxSize() const
{
	return Uint64(0);
}

Boolean UNIX_OpaqueManagementData::getLastAccessed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ACCESSED, getLastAccessed());
	return true;
}

CIMDateTime UNIX_OpaqueManagementData::getLastAccessed() const
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

Boolean UNIX_OpaqueManagementData::getWriteLimited(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WRITE_LIMITED, getWriteLimited());
	return true;
}

Uint16 UNIX_OpaqueManagementData::getWriteLimited() const
{
	return Uint16(0);
}

Boolean UNIX_OpaqueManagementData::getDataFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_FORMAT, getDataFormat());
	return true;
}

String UNIX_OpaqueManagementData::getDataFormat() const
{
	return String ("");
}

Boolean UNIX_OpaqueManagementData::getDataSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_SIZE, getDataSize());
	return true;
}

Uint64 UNIX_OpaqueManagementData::getDataSize() const
{
	return Uint64(0);
}



Boolean UNIX_OpaqueManagementData::initialize()
{
	return false;
}

Boolean UNIX_OpaqueManagementData::load(int &pIndex)
{
	return false;
}

Boolean UNIX_OpaqueManagementData::finalize()
{
	return false;
}

Boolean UNIX_OpaqueManagementData::find(Array<CIMKeyBinding> &kbArray)
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
