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


UNIX_AggregatePExtent::UNIX_AggregatePExtent(void)
{
}

UNIX_AggregatePExtent::~UNIX_AggregatePExtent(void)
{
}


Boolean UNIX_AggregatePExtent::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_AggregatePExtent::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_AggregatePExtent::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_AggregatePExtent::getCaption() const
{
	return String ("");
}

Boolean UNIX_AggregatePExtent::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_AggregatePExtent::getDescription() const
{
	return String ("");
}

Boolean UNIX_AggregatePExtent::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_AggregatePExtent::getElementName() const
{
	return String("AggregatePExtent");
}

Boolean UNIX_AggregatePExtent::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_AggregatePExtent::getInstallDate() const
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

Boolean UNIX_AggregatePExtent::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_AggregatePExtent::getName() const
{
	return String ("");
}

Boolean UNIX_AggregatePExtent::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_AggregatePExtent::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_AggregatePExtent::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_AggregatePExtent::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_AggregatePExtent::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_AggregatePExtent::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_AggregatePExtent::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_AggregatePExtent::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_AggregatePExtent::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_AggregatePExtent::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_AggregatePExtent::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_AggregatePExtent::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_AggregatePExtent::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_AggregatePExtent::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_AggregatePExtent::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_AggregatePExtent::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_AggregatePExtent::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_AggregatePExtent::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_AggregatePExtent::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_AggregatePExtent::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_AggregatePExtent::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_AggregatePExtent::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_AggregatePExtent::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_AggregatePExtent::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_AggregatePExtent::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_AggregatePExtent::getTimeOfLastStateChange() const
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

Boolean UNIX_AggregatePExtent::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_AggregatePExtent::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_AggregatePExtent::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_AggregatePExtent::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_AggregatePExtent::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_AggregatePExtent::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_AggregatePExtent::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_AggregatePExtent::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_AggregatePExtent::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_AggregatePExtent::getCreationClassName() const
{
	return String("UNIX_AggregatePExtent");
}

Boolean UNIX_AggregatePExtent::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_AggregatePExtent::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_AggregatePExtent::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_AggregatePExtent::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_AggregatePExtent::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_AggregatePExtent::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_AggregatePExtent::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_AggregatePExtent::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_AggregatePExtent::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_AggregatePExtent::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_AggregatePExtent::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_AggregatePExtent::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_AggregatePExtent::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_AggregatePExtent::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_AggregatePExtent::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_AggregatePExtent::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_AggregatePExtent::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_AggregatePExtent::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_AggregatePExtent::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_AggregatePExtent::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_AggregatePExtent::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_AggregatePExtent::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_AggregatePExtent::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_AggregatePExtent::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_AggregatePExtent::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_AggregatePExtent::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_AggregatePExtent::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_AggregatePExtent::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_AggregatePExtent::getDataOrganization(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_ORGANIZATION, getDataOrganization());
	return true;
}

Uint16 UNIX_AggregatePExtent::getDataOrganization() const
{
	return Uint16(0);
}

Boolean UNIX_AggregatePExtent::getPurpose(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PURPOSE, getPurpose());
	return true;
}

String UNIX_AggregatePExtent::getPurpose() const
{
	return String ("");
}

Boolean UNIX_AggregatePExtent::getAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS, getAccess());
	return true;
}

Uint16 UNIX_AggregatePExtent::getAccess() const
{
	return Uint16(0);
}

Boolean UNIX_AggregatePExtent::getErrorMethodology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_METHODOLOGY, getErrorMethodology());
	return true;
}

String UNIX_AggregatePExtent::getErrorMethodology() const
{
	return String ("");
}

Boolean UNIX_AggregatePExtent::getBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLOCK_SIZE, getBlockSize());
	return true;
}

Uint64 UNIX_AggregatePExtent::getBlockSize() const
{
	return Uint64(0);
}

Boolean UNIX_AggregatePExtent::getNumberOfBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_BLOCKS, getNumberOfBlocks());
	return true;
}

Uint64 UNIX_AggregatePExtent::getNumberOfBlocks() const
{
	return Uint64(0);
}

Boolean UNIX_AggregatePExtent::getConsumableBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONSUMABLE_BLOCKS, getConsumableBlocks());
	return true;
}

Uint64 UNIX_AggregatePExtent::getConsumableBlocks() const
{
	return Uint64(0);
}

Boolean UNIX_AggregatePExtent::getIsBasedOnUnderlyingRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_BASED_ON_UNDERLYING_REDUNDANCY, getIsBasedOnUnderlyingRedundancy());
	return true;
}

Boolean UNIX_AggregatePExtent::getIsBasedOnUnderlyingRedundancy() const
{
	return Boolean(false);
}

Boolean UNIX_AggregatePExtent::getSequentialAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEQUENTIAL_ACCESS, getSequentialAccess());
	return true;
}

Boolean UNIX_AggregatePExtent::getSequentialAccess() const
{
	return Boolean(false);
}

Boolean UNIX_AggregatePExtent::getExtentStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_STATUS, getExtentStatus());
	return true;
}

Array<Uint16> UNIX_AggregatePExtent::getExtentStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_AggregatePExtent::getNoSinglePointOfFailure(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NO_SINGLE_POINT_OF_FAILURE, getNoSinglePointOfFailure());
	return true;
}

Boolean UNIX_AggregatePExtent::getNoSinglePointOfFailure() const
{
	return Boolean(false);
}

Boolean UNIX_AggregatePExtent::getDataRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_REDUNDANCY, getDataRedundancy());
	return true;
}

Uint16 UNIX_AggregatePExtent::getDataRedundancy() const
{
	return Uint16(0);
}

Boolean UNIX_AggregatePExtent::getPackageRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_REDUNDANCY, getPackageRedundancy());
	return true;
}

Uint16 UNIX_AggregatePExtent::getPackageRedundancy() const
{
	return Uint16(0);
}

Boolean UNIX_AggregatePExtent::getDeltaReservation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_RESERVATION, getDeltaReservation());
	return true;
}

Uint8 UNIX_AggregatePExtent::getDeltaReservation() const
{
	return Uint8(0);
}

Boolean UNIX_AggregatePExtent::getPrimordial(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMORDIAL, getPrimordial());
	return true;
}

Boolean UNIX_AggregatePExtent::getPrimordial() const
{
	return Boolean(false);
}

Boolean UNIX_AggregatePExtent::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

Uint16 UNIX_AggregatePExtent::getNameFormat() const
{
	return Uint16(0);
}

Boolean UNIX_AggregatePExtent::getNameNamespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_NAMESPACE, getNameNamespace());
	return true;
}

Uint16 UNIX_AggregatePExtent::getNameNamespace() const
{
	return Uint16(0);
}

Boolean UNIX_AggregatePExtent::getOtherNameNamespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NAME_NAMESPACE, getOtherNameNamespace());
	return true;
}

String UNIX_AggregatePExtent::getOtherNameNamespace() const
{
	return String ("");
}

Boolean UNIX_AggregatePExtent::getOtherNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NAME_FORMAT, getOtherNameFormat());
	return true;
}

String UNIX_AggregatePExtent::getOtherNameFormat() const
{
	return String ("");
}

Boolean UNIX_AggregatePExtent::getBlocksOfCheckData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLOCKS_OF_CHECK_DATA, getBlocksOfCheckData());
	return true;
}

Uint64 UNIX_AggregatePExtent::getBlocksOfCheckData() const
{
	return Uint64(0);
}



Boolean UNIX_AggregatePExtent::initialize()
{
	return false;
}

Boolean UNIX_AggregatePExtent::load(int &pIndex)
{
	return false;
}

Boolean UNIX_AggregatePExtent::finalize()
{
	return false;
}

Boolean UNIX_AggregatePExtent::find(Array<CIMKeyBinding> &kbArray)
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
