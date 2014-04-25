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


UNIX_TapePartition::UNIX_TapePartition(void)
{
}

UNIX_TapePartition::~UNIX_TapePartition(void)
{
}


Boolean UNIX_TapePartition::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_TapePartition::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_TapePartition::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_TapePartition::getCaption() const
{
	return String ("");
}

Boolean UNIX_TapePartition::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_TapePartition::getDescription() const
{
	return String ("");
}

Boolean UNIX_TapePartition::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_TapePartition::getElementName() const
{
	return String("TapePartition");
}

Boolean UNIX_TapePartition::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_TapePartition::getInstallDate() const
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

Boolean UNIX_TapePartition::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_TapePartition::getName() const
{
	return String ("");
}

Boolean UNIX_TapePartition::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_TapePartition::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_TapePartition::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_TapePartition::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_TapePartition::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_TapePartition::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_TapePartition::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_TapePartition::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_TapePartition::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_TapePartition::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_TapePartition::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_TapePartition::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_TapePartition::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_TapePartition::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_TapePartition::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_TapePartition::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_TapePartition::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_TapePartition::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_TapePartition::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_TapePartition::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_TapePartition::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_TapePartition::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_TapePartition::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_TapePartition::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_TapePartition::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_TapePartition::getTimeOfLastStateChange() const
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

Boolean UNIX_TapePartition::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_TapePartition::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_TapePartition::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_TapePartition::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_TapePartition::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_TapePartition::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_TapePartition::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_TapePartition::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_TapePartition::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_TapePartition::getCreationClassName() const
{
	return String("UNIX_TapePartition");
}

Boolean UNIX_TapePartition::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_TapePartition::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_TapePartition::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_TapePartition::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_TapePartition::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_TapePartition::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_TapePartition::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_TapePartition::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_TapePartition::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_TapePartition::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_TapePartition::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_TapePartition::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_TapePartition::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_TapePartition::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_TapePartition::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_TapePartition::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_TapePartition::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_TapePartition::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_TapePartition::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_TapePartition::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_TapePartition::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_TapePartition::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_TapePartition::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_TapePartition::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_TapePartition::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_TapePartition::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_TapePartition::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_TapePartition::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_TapePartition::getDataOrganization(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_ORGANIZATION, getDataOrganization());
	return true;
}

Uint16 UNIX_TapePartition::getDataOrganization() const
{
	return Uint16(0);
}

Boolean UNIX_TapePartition::getPurpose(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PURPOSE, getPurpose());
	return true;
}

String UNIX_TapePartition::getPurpose() const
{
	return String ("");
}

Boolean UNIX_TapePartition::getAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS, getAccess());
	return true;
}

Uint16 UNIX_TapePartition::getAccess() const
{
	return Uint16(0);
}

Boolean UNIX_TapePartition::getErrorMethodology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_METHODOLOGY, getErrorMethodology());
	return true;
}

String UNIX_TapePartition::getErrorMethodology() const
{
	return String ("");
}

Boolean UNIX_TapePartition::getBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLOCK_SIZE, getBlockSize());
	return true;
}

Uint64 UNIX_TapePartition::getBlockSize() const
{
	return Uint64(0);
}

Boolean UNIX_TapePartition::getNumberOfBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_BLOCKS, getNumberOfBlocks());
	return true;
}

Uint64 UNIX_TapePartition::getNumberOfBlocks() const
{
	return Uint64(0);
}

Boolean UNIX_TapePartition::getConsumableBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONSUMABLE_BLOCKS, getConsumableBlocks());
	return true;
}

Uint64 UNIX_TapePartition::getConsumableBlocks() const
{
	return Uint64(0);
}

Boolean UNIX_TapePartition::getIsBasedOnUnderlyingRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_BASED_ON_UNDERLYING_REDUNDANCY, getIsBasedOnUnderlyingRedundancy());
	return true;
}

Boolean UNIX_TapePartition::getIsBasedOnUnderlyingRedundancy() const
{
	return Boolean(false);
}

Boolean UNIX_TapePartition::getSequentialAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEQUENTIAL_ACCESS, getSequentialAccess());
	return true;
}

Boolean UNIX_TapePartition::getSequentialAccess() const
{
	return Boolean(false);
}

Boolean UNIX_TapePartition::getExtentStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_STATUS, getExtentStatus());
	return true;
}

Array<Uint16> UNIX_TapePartition::getExtentStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_TapePartition::getNoSinglePointOfFailure(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NO_SINGLE_POINT_OF_FAILURE, getNoSinglePointOfFailure());
	return true;
}

Boolean UNIX_TapePartition::getNoSinglePointOfFailure() const
{
	return Boolean(false);
}

Boolean UNIX_TapePartition::getDataRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_REDUNDANCY, getDataRedundancy());
	return true;
}

Uint16 UNIX_TapePartition::getDataRedundancy() const
{
	return Uint16(0);
}

Boolean UNIX_TapePartition::getPackageRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_REDUNDANCY, getPackageRedundancy());
	return true;
}

Uint16 UNIX_TapePartition::getPackageRedundancy() const
{
	return Uint16(0);
}

Boolean UNIX_TapePartition::getDeltaReservation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_RESERVATION, getDeltaReservation());
	return true;
}

Uint8 UNIX_TapePartition::getDeltaReservation() const
{
	return Uint8(0);
}

Boolean UNIX_TapePartition::getPrimordial(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMORDIAL, getPrimordial());
	return true;
}

Boolean UNIX_TapePartition::getPrimordial() const
{
	return Boolean(false);
}

Boolean UNIX_TapePartition::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

Uint16 UNIX_TapePartition::getNameFormat() const
{
	return Uint16(0);
}

Boolean UNIX_TapePartition::getNameNamespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_NAMESPACE, getNameNamespace());
	return true;
}

Uint16 UNIX_TapePartition::getNameNamespace() const
{
	return Uint16(0);
}

Boolean UNIX_TapePartition::getOtherNameNamespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NAME_NAMESPACE, getOtherNameNamespace());
	return true;
}

String UNIX_TapePartition::getOtherNameNamespace() const
{
	return String ("");
}

Boolean UNIX_TapePartition::getOtherNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NAME_FORMAT, getOtherNameFormat());
	return true;
}

String UNIX_TapePartition::getOtherNameFormat() const
{
	return String ("");
}

Boolean UNIX_TapePartition::getBootable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BOOTABLE, getBootable());
	return true;
}

Boolean UNIX_TapePartition::getBootable() const
{
	return Boolean(false);
}

Boolean UNIX_TapePartition::getAllocatable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATABLE, getAllocatable());
	return true;
}

Boolean UNIX_TapePartition::getAllocatable() const
{
	return Boolean(false);
}

Boolean UNIX_TapePartition::getSignature(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIGNATURE, getSignature());
	return true;
}

String UNIX_TapePartition::getSignature() const
{
	return String ("");
}

Boolean UNIX_TapePartition::getSignatureAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIGNATURE_ALGORITHM, getSignatureAlgorithm());
	return true;
}

String UNIX_TapePartition::getSignatureAlgorithm() const
{
	return String ("");
}

Boolean UNIX_TapePartition::getSignatureState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIGNATURE_STATE, getSignatureState());
	return true;
}

String UNIX_TapePartition::getSignatureState() const
{
	return String ("");
}

Boolean UNIX_TapePartition::getExtendable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENDABLE, getExtendable());
	return true;
}

Boolean UNIX_TapePartition::getExtendable() const
{
	return Boolean(false);
}

Boolean UNIX_TapePartition::getUnusedBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNUSED_BLOCKS, getUnusedBlocks());
	return true;
}

Uint64 UNIX_TapePartition::getUnusedBlocks() const
{
	return Uint64(0);
}



Boolean UNIX_TapePartition::initialize()
{
	return false;
}

Boolean UNIX_TapePartition::load(int &pIndex)
{
	return false;
}

Boolean UNIX_TapePartition::finalize()
{
	return false;
}

Boolean UNIX_TapePartition::find(Array<CIMKeyBinding> &kbArray)
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
