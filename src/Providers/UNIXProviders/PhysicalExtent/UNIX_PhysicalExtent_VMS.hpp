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


UNIX_PhysicalExtent::UNIX_PhysicalExtent(void)
{
}

UNIX_PhysicalExtent::~UNIX_PhysicalExtent(void)
{
}


Boolean UNIX_PhysicalExtent::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PhysicalExtent::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_PhysicalExtent::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PhysicalExtent::getCaption() const
{
	return String ("");
}

Boolean UNIX_PhysicalExtent::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PhysicalExtent::getDescription() const
{
	return String ("");
}

Boolean UNIX_PhysicalExtent::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PhysicalExtent::getElementName() const
{
	return String("PhysicalExtent");
}

Boolean UNIX_PhysicalExtent::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_PhysicalExtent::getInstallDate() const
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

Boolean UNIX_PhysicalExtent::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PhysicalExtent::getName() const
{
	return String ("");
}

Boolean UNIX_PhysicalExtent::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_PhysicalExtent::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PhysicalExtent::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_PhysicalExtent::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PhysicalExtent::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_PhysicalExtent::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_PhysicalExtent::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_PhysicalExtent::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_PhysicalExtent::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_PhysicalExtent::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalExtent::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_PhysicalExtent::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalExtent::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_PhysicalExtent::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_PhysicalExtent::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_PhysicalExtent::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_PhysicalExtent::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_PhysicalExtent::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_PhysicalExtent::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_PhysicalExtent::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_PhysicalExtent::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_PhysicalExtent::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalExtent::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_PhysicalExtent::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalExtent::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_PhysicalExtent::getTimeOfLastStateChange() const
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

Boolean UNIX_PhysicalExtent::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_PhysicalExtent::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PhysicalExtent::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_PhysicalExtent::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalExtent::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_PhysicalExtent::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_PhysicalExtent::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_PhysicalExtent::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_PhysicalExtent::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_PhysicalExtent::getCreationClassName() const
{
	return String("UNIX_PhysicalExtent");
}

Boolean UNIX_PhysicalExtent::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_PhysicalExtent::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_PhysicalExtent::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_PhysicalExtent::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_PhysicalExtent::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_PhysicalExtent::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PhysicalExtent::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_PhysicalExtent::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalExtent::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_PhysicalExtent::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalExtent::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_PhysicalExtent::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_PhysicalExtent::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_PhysicalExtent::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_PhysicalExtent::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_PhysicalExtent::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_PhysicalExtent::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_PhysicalExtent::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PhysicalExtent::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_PhysicalExtent::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_PhysicalExtent::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_PhysicalExtent::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_PhysicalExtent::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_PhysicalExtent::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PhysicalExtent::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_PhysicalExtent::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PhysicalExtent::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_PhysicalExtent::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_PhysicalExtent::getDataOrganization(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_ORGANIZATION, getDataOrganization());
	return true;
}

Uint16 UNIX_PhysicalExtent::getDataOrganization() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalExtent::getPurpose(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PURPOSE, getPurpose());
	return true;
}

String UNIX_PhysicalExtent::getPurpose() const
{
	return String ("");
}

Boolean UNIX_PhysicalExtent::getAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS, getAccess());
	return true;
}

Uint16 UNIX_PhysicalExtent::getAccess() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalExtent::getErrorMethodology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_METHODOLOGY, getErrorMethodology());
	return true;
}

String UNIX_PhysicalExtent::getErrorMethodology() const
{
	return String ("");
}

Boolean UNIX_PhysicalExtent::getBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLOCK_SIZE, getBlockSize());
	return true;
}

Uint64 UNIX_PhysicalExtent::getBlockSize() const
{
	return Uint64(0);
}

Boolean UNIX_PhysicalExtent::getNumberOfBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_BLOCKS, getNumberOfBlocks());
	return true;
}

Uint64 UNIX_PhysicalExtent::getNumberOfBlocks() const
{
	return Uint64(0);
}

Boolean UNIX_PhysicalExtent::getConsumableBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONSUMABLE_BLOCKS, getConsumableBlocks());
	return true;
}

Uint64 UNIX_PhysicalExtent::getConsumableBlocks() const
{
	return Uint64(0);
}

Boolean UNIX_PhysicalExtent::getIsBasedOnUnderlyingRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_BASED_ON_UNDERLYING_REDUNDANCY, getIsBasedOnUnderlyingRedundancy());
	return true;
}

Boolean UNIX_PhysicalExtent::getIsBasedOnUnderlyingRedundancy() const
{
	return Boolean(false);
}

Boolean UNIX_PhysicalExtent::getSequentialAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEQUENTIAL_ACCESS, getSequentialAccess());
	return true;
}

Boolean UNIX_PhysicalExtent::getSequentialAccess() const
{
	return Boolean(false);
}

Boolean UNIX_PhysicalExtent::getExtentStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_STATUS, getExtentStatus());
	return true;
}

Array<Uint16> UNIX_PhysicalExtent::getExtentStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PhysicalExtent::getNoSinglePointOfFailure(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NO_SINGLE_POINT_OF_FAILURE, getNoSinglePointOfFailure());
	return true;
}

Boolean UNIX_PhysicalExtent::getNoSinglePointOfFailure() const
{
	return Boolean(false);
}

Boolean UNIX_PhysicalExtent::getDataRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_REDUNDANCY, getDataRedundancy());
	return true;
}

Uint16 UNIX_PhysicalExtent::getDataRedundancy() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalExtent::getPackageRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_REDUNDANCY, getPackageRedundancy());
	return true;
}

Uint16 UNIX_PhysicalExtent::getPackageRedundancy() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalExtent::getDeltaReservation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_RESERVATION, getDeltaReservation());
	return true;
}

Uint8 UNIX_PhysicalExtent::getDeltaReservation() const
{
	return Uint8(0);
}

Boolean UNIX_PhysicalExtent::getPrimordial(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMORDIAL, getPrimordial());
	return true;
}

Boolean UNIX_PhysicalExtent::getPrimordial() const
{
	return Boolean(false);
}

Boolean UNIX_PhysicalExtent::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

Uint16 UNIX_PhysicalExtent::getNameFormat() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalExtent::getNameNamespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_NAMESPACE, getNameNamespace());
	return true;
}

Uint16 UNIX_PhysicalExtent::getNameNamespace() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalExtent::getOtherNameNamespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NAME_NAMESPACE, getOtherNameNamespace());
	return true;
}

String UNIX_PhysicalExtent::getOtherNameNamespace() const
{
	return String ("");
}

Boolean UNIX_PhysicalExtent::getOtherNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NAME_FORMAT, getOtherNameFormat());
	return true;
}

String UNIX_PhysicalExtent::getOtherNameFormat() const
{
	return String ("");
}

Boolean UNIX_PhysicalExtent::getUnitsBeforeCheckDataInterleave(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNITS_BEFORE_CHECK_DATA_INTERLEAVE, getUnitsBeforeCheckDataInterleave());
	return true;
}

Uint64 UNIX_PhysicalExtent::getUnitsBeforeCheckDataInterleave() const
{
	return Uint64(0);
}

Boolean UNIX_PhysicalExtent::getUnitsOfCheckData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNITS_OF_CHECK_DATA, getUnitsOfCheckData());
	return true;
}

Uint64 UNIX_PhysicalExtent::getUnitsOfCheckData() const
{
	return Uint64(0);
}

Boolean UNIX_PhysicalExtent::getUnitsOfUserData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNITS_OF_USER_DATA, getUnitsOfUserData());
	return true;
}

Uint64 UNIX_PhysicalExtent::getUnitsOfUserData() const
{
	return Uint64(0);
}



Boolean UNIX_PhysicalExtent::initialize()
{
	return false;
}

Boolean UNIX_PhysicalExtent::load(int &pIndex)
{
	return false;
}

Boolean UNIX_PhysicalExtent::finalize()
{
	return false;
}

Boolean UNIX_PhysicalExtent::find(Array<CIMKeyBinding> &kbArray)
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
