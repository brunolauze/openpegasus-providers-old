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


UNIX_ProtectedSpaceExtent::UNIX_ProtectedSpaceExtent(void)
{
}

UNIX_ProtectedSpaceExtent::~UNIX_ProtectedSpaceExtent(void)
{
}


Boolean UNIX_ProtectedSpaceExtent::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ProtectedSpaceExtent::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_ProtectedSpaceExtent::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ProtectedSpaceExtent::getCaption() const
{
	return String ("");
}

Boolean UNIX_ProtectedSpaceExtent::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ProtectedSpaceExtent::getDescription() const
{
	return String ("");
}

Boolean UNIX_ProtectedSpaceExtent::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ProtectedSpaceExtent::getElementName() const
{
	return String("ProtectedSpaceExtent");
}

Boolean UNIX_ProtectedSpaceExtent::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_ProtectedSpaceExtent::getInstallDate() const
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

Boolean UNIX_ProtectedSpaceExtent::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_ProtectedSpaceExtent::getName() const
{
	return String ("");
}

Boolean UNIX_ProtectedSpaceExtent::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_ProtectedSpaceExtent::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_ProtectedSpaceExtent::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_ProtectedSpaceExtent::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_ProtectedSpaceExtent::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_ProtectedSpaceExtent::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_ProtectedSpaceExtent::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_ProtectedSpaceExtent::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_ProtectedSpaceExtent::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_ProtectedSpaceExtent::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_ProtectedSpaceExtent::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_ProtectedSpaceExtent::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_ProtectedSpaceExtent::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_ProtectedSpaceExtent::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_ProtectedSpaceExtent::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_ProtectedSpaceExtent::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_ProtectedSpaceExtent::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_ProtectedSpaceExtent::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_ProtectedSpaceExtent::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_ProtectedSpaceExtent::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_ProtectedSpaceExtent::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_ProtectedSpaceExtent::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_ProtectedSpaceExtent::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_ProtectedSpaceExtent::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_ProtectedSpaceExtent::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_ProtectedSpaceExtent::getTimeOfLastStateChange() const
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

Boolean UNIX_ProtectedSpaceExtent::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_ProtectedSpaceExtent::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_ProtectedSpaceExtent::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_ProtectedSpaceExtent::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_ProtectedSpaceExtent::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_ProtectedSpaceExtent::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_ProtectedSpaceExtent::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_ProtectedSpaceExtent::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_ProtectedSpaceExtent::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_ProtectedSpaceExtent::getCreationClassName() const
{
	return String("UNIX_ProtectedSpaceExtent");
}

Boolean UNIX_ProtectedSpaceExtent::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_ProtectedSpaceExtent::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_ProtectedSpaceExtent::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_ProtectedSpaceExtent::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_ProtectedSpaceExtent::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_ProtectedSpaceExtent::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_ProtectedSpaceExtent::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_ProtectedSpaceExtent::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_ProtectedSpaceExtent::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_ProtectedSpaceExtent::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_ProtectedSpaceExtent::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_ProtectedSpaceExtent::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_ProtectedSpaceExtent::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_ProtectedSpaceExtent::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_ProtectedSpaceExtent::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_ProtectedSpaceExtent::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_ProtectedSpaceExtent::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_ProtectedSpaceExtent::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_ProtectedSpaceExtent::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_ProtectedSpaceExtent::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_ProtectedSpaceExtent::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_ProtectedSpaceExtent::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_ProtectedSpaceExtent::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_ProtectedSpaceExtent::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_ProtectedSpaceExtent::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_ProtectedSpaceExtent::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_ProtectedSpaceExtent::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_ProtectedSpaceExtent::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_ProtectedSpaceExtent::getDataOrganization(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_ORGANIZATION, getDataOrganization());
	return true;
}

Uint16 UNIX_ProtectedSpaceExtent::getDataOrganization() const
{
	return Uint16(0);
}

Boolean UNIX_ProtectedSpaceExtent::getPurpose(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PURPOSE, getPurpose());
	return true;
}

String UNIX_ProtectedSpaceExtent::getPurpose() const
{
	return String ("");
}

Boolean UNIX_ProtectedSpaceExtent::getAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS, getAccess());
	return true;
}

Uint16 UNIX_ProtectedSpaceExtent::getAccess() const
{
	return Uint16(0);
}

Boolean UNIX_ProtectedSpaceExtent::getErrorMethodology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_METHODOLOGY, getErrorMethodology());
	return true;
}

String UNIX_ProtectedSpaceExtent::getErrorMethodology() const
{
	return String ("");
}

Boolean UNIX_ProtectedSpaceExtent::getBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLOCK_SIZE, getBlockSize());
	return true;
}

Uint64 UNIX_ProtectedSpaceExtent::getBlockSize() const
{
	return Uint64(0);
}

Boolean UNIX_ProtectedSpaceExtent::getNumberOfBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_BLOCKS, getNumberOfBlocks());
	return true;
}

Uint64 UNIX_ProtectedSpaceExtent::getNumberOfBlocks() const
{
	return Uint64(0);
}

Boolean UNIX_ProtectedSpaceExtent::getConsumableBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONSUMABLE_BLOCKS, getConsumableBlocks());
	return true;
}

Uint64 UNIX_ProtectedSpaceExtent::getConsumableBlocks() const
{
	return Uint64(0);
}

Boolean UNIX_ProtectedSpaceExtent::getIsBasedOnUnderlyingRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_BASED_ON_UNDERLYING_REDUNDANCY, getIsBasedOnUnderlyingRedundancy());
	return true;
}

Boolean UNIX_ProtectedSpaceExtent::getIsBasedOnUnderlyingRedundancy() const
{
	return Boolean(false);
}

Boolean UNIX_ProtectedSpaceExtent::getSequentialAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEQUENTIAL_ACCESS, getSequentialAccess());
	return true;
}

Boolean UNIX_ProtectedSpaceExtent::getSequentialAccess() const
{
	return Boolean(false);
}

Boolean UNIX_ProtectedSpaceExtent::getExtentStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_STATUS, getExtentStatus());
	return true;
}

Array<Uint16> UNIX_ProtectedSpaceExtent::getExtentStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_ProtectedSpaceExtent::getNoSinglePointOfFailure(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NO_SINGLE_POINT_OF_FAILURE, getNoSinglePointOfFailure());
	return true;
}

Boolean UNIX_ProtectedSpaceExtent::getNoSinglePointOfFailure() const
{
	return Boolean(false);
}

Boolean UNIX_ProtectedSpaceExtent::getDataRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_REDUNDANCY, getDataRedundancy());
	return true;
}

Uint16 UNIX_ProtectedSpaceExtent::getDataRedundancy() const
{
	return Uint16(0);
}

Boolean UNIX_ProtectedSpaceExtent::getPackageRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_REDUNDANCY, getPackageRedundancy());
	return true;
}

Uint16 UNIX_ProtectedSpaceExtent::getPackageRedundancy() const
{
	return Uint16(0);
}

Boolean UNIX_ProtectedSpaceExtent::getDeltaReservation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_RESERVATION, getDeltaReservation());
	return true;
}

Uint8 UNIX_ProtectedSpaceExtent::getDeltaReservation() const
{
	return Uint8(0);
}

Boolean UNIX_ProtectedSpaceExtent::getPrimordial(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMORDIAL, getPrimordial());
	return true;
}

Boolean UNIX_ProtectedSpaceExtent::getPrimordial() const
{
	return Boolean(false);
}

Boolean UNIX_ProtectedSpaceExtent::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

Uint16 UNIX_ProtectedSpaceExtent::getNameFormat() const
{
	return Uint16(0);
}

Boolean UNIX_ProtectedSpaceExtent::getNameNamespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_NAMESPACE, getNameNamespace());
	return true;
}

Uint16 UNIX_ProtectedSpaceExtent::getNameNamespace() const
{
	return Uint16(0);
}

Boolean UNIX_ProtectedSpaceExtent::getOtherNameNamespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NAME_NAMESPACE, getOtherNameNamespace());
	return true;
}

String UNIX_ProtectedSpaceExtent::getOtherNameNamespace() const
{
	return String ("");
}

Boolean UNIX_ProtectedSpaceExtent::getOtherNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NAME_FORMAT, getOtherNameFormat());
	return true;
}

String UNIX_ProtectedSpaceExtent::getOtherNameFormat() const
{
	return String ("");
}

Boolean UNIX_ProtectedSpaceExtent::getUserDataStripeDepth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_DATA_STRIPE_DEPTH, getUserDataStripeDepth());
	return true;
}

Uint64 UNIX_ProtectedSpaceExtent::getUserDataStripeDepth() const
{
	return Uint64(0);
}



Boolean UNIX_ProtectedSpaceExtent::initialize()
{
	return false;
}

Boolean UNIX_ProtectedSpaceExtent::load(int &pIndex)
{
	return false;
}

Boolean UNIX_ProtectedSpaceExtent::finalize()
{
	return false;
}

Boolean UNIX_ProtectedSpaceExtent::find(Array<CIMKeyBinding> &kbArray)
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
