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


UNIX_CompositeExtent::UNIX_CompositeExtent(void)
{
}

UNIX_CompositeExtent::~UNIX_CompositeExtent(void)
{
}


Boolean UNIX_CompositeExtent::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_CompositeExtent::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_CompositeExtent::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_CompositeExtent::getCaption() const
{
	return String ("");
}

Boolean UNIX_CompositeExtent::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_CompositeExtent::getDescription() const
{
	return String ("");
}

Boolean UNIX_CompositeExtent::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_CompositeExtent::getElementName() const
{
	return String("CompositeExtent");
}

Boolean UNIX_CompositeExtent::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_CompositeExtent::getInstallDate() const
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

Boolean UNIX_CompositeExtent::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_CompositeExtent::getName() const
{
	return String ("");
}

Boolean UNIX_CompositeExtent::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_CompositeExtent::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_CompositeExtent::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_CompositeExtent::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_CompositeExtent::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_CompositeExtent::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_CompositeExtent::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_CompositeExtent::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_CompositeExtent::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_CompositeExtent::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_CompositeExtent::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_CompositeExtent::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_CompositeExtent::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_CompositeExtent::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_CompositeExtent::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_CompositeExtent::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_CompositeExtent::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_CompositeExtent::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_CompositeExtent::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_CompositeExtent::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_CompositeExtent::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_CompositeExtent::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_CompositeExtent::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_CompositeExtent::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_CompositeExtent::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_CompositeExtent::getTimeOfLastStateChange() const
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

Boolean UNIX_CompositeExtent::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_CompositeExtent::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_CompositeExtent::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_CompositeExtent::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_CompositeExtent::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_CompositeExtent::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_CompositeExtent::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_CompositeExtent::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_CompositeExtent::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_CompositeExtent::getCreationClassName() const
{
	return String("UNIX_CompositeExtent");
}

Boolean UNIX_CompositeExtent::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_CompositeExtent::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_CompositeExtent::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_CompositeExtent::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_CompositeExtent::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_CompositeExtent::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_CompositeExtent::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_CompositeExtent::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_CompositeExtent::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_CompositeExtent::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_CompositeExtent::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_CompositeExtent::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_CompositeExtent::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_CompositeExtent::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_CompositeExtent::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_CompositeExtent::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_CompositeExtent::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_CompositeExtent::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_CompositeExtent::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_CompositeExtent::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_CompositeExtent::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_CompositeExtent::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_CompositeExtent::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_CompositeExtent::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_CompositeExtent::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_CompositeExtent::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_CompositeExtent::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_CompositeExtent::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_CompositeExtent::getDataOrganization(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_ORGANIZATION, getDataOrganization());
	return true;
}

Uint16 UNIX_CompositeExtent::getDataOrganization() const
{
	return Uint16(0);
}

Boolean UNIX_CompositeExtent::getPurpose(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PURPOSE, getPurpose());
	return true;
}

String UNIX_CompositeExtent::getPurpose() const
{
	return String ("");
}

Boolean UNIX_CompositeExtent::getAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS, getAccess());
	return true;
}

Uint16 UNIX_CompositeExtent::getAccess() const
{
	return Uint16(0);
}

Boolean UNIX_CompositeExtent::getErrorMethodology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_METHODOLOGY, getErrorMethodology());
	return true;
}

String UNIX_CompositeExtent::getErrorMethodology() const
{
	return String ("");
}

Boolean UNIX_CompositeExtent::getBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLOCK_SIZE, getBlockSize());
	return true;
}

Uint64 UNIX_CompositeExtent::getBlockSize() const
{
	return Uint64(0);
}

Boolean UNIX_CompositeExtent::getNumberOfBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_BLOCKS, getNumberOfBlocks());
	return true;
}

Uint64 UNIX_CompositeExtent::getNumberOfBlocks() const
{
	return Uint64(0);
}

Boolean UNIX_CompositeExtent::getConsumableBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONSUMABLE_BLOCKS, getConsumableBlocks());
	return true;
}

Uint64 UNIX_CompositeExtent::getConsumableBlocks() const
{
	return Uint64(0);
}

Boolean UNIX_CompositeExtent::getIsBasedOnUnderlyingRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_BASED_ON_UNDERLYING_REDUNDANCY, getIsBasedOnUnderlyingRedundancy());
	return true;
}

Boolean UNIX_CompositeExtent::getIsBasedOnUnderlyingRedundancy() const
{
	return Boolean(false);
}

Boolean UNIX_CompositeExtent::getSequentialAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEQUENTIAL_ACCESS, getSequentialAccess());
	return true;
}

Boolean UNIX_CompositeExtent::getSequentialAccess() const
{
	return Boolean(false);
}

Boolean UNIX_CompositeExtent::getExtentStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_STATUS, getExtentStatus());
	return true;
}

Array<Uint16> UNIX_CompositeExtent::getExtentStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_CompositeExtent::getNoSinglePointOfFailure(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NO_SINGLE_POINT_OF_FAILURE, getNoSinglePointOfFailure());
	return true;
}

Boolean UNIX_CompositeExtent::getNoSinglePointOfFailure() const
{
	return Boolean(false);
}

Boolean UNIX_CompositeExtent::getDataRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_REDUNDANCY, getDataRedundancy());
	return true;
}

Uint16 UNIX_CompositeExtent::getDataRedundancy() const
{
	return Uint16(0);
}

Boolean UNIX_CompositeExtent::getPackageRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_REDUNDANCY, getPackageRedundancy());
	return true;
}

Uint16 UNIX_CompositeExtent::getPackageRedundancy() const
{
	return Uint16(0);
}

Boolean UNIX_CompositeExtent::getDeltaReservation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_RESERVATION, getDeltaReservation());
	return true;
}

Uint8 UNIX_CompositeExtent::getDeltaReservation() const
{
	return Uint8(0);
}

Boolean UNIX_CompositeExtent::getPrimordial(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMORDIAL, getPrimordial());
	return true;
}

Boolean UNIX_CompositeExtent::getPrimordial() const
{
	return Boolean(false);
}

Boolean UNIX_CompositeExtent::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

Uint16 UNIX_CompositeExtent::getNameFormat() const
{
	return Uint16(0);
}

Boolean UNIX_CompositeExtent::getNameNamespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_NAMESPACE, getNameNamespace());
	return true;
}

Uint16 UNIX_CompositeExtent::getNameNamespace() const
{
	return Uint16(0);
}

Boolean UNIX_CompositeExtent::getOtherNameNamespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NAME_NAMESPACE, getOtherNameNamespace());
	return true;
}

String UNIX_CompositeExtent::getOtherNameNamespace() const
{
	return String ("");
}

Boolean UNIX_CompositeExtent::getOtherNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NAME_FORMAT, getOtherNameFormat());
	return true;
}

String UNIX_CompositeExtent::getOtherNameFormat() const
{
	return String ("");
}

Boolean UNIX_CompositeExtent::getExtentStripeLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_STRIPE_LENGTH, getExtentStripeLength());
	return true;
}

Uint64 UNIX_CompositeExtent::getExtentStripeLength() const
{
	return Uint64(0);
}

Boolean UNIX_CompositeExtent::getExtentInterleaveDepth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_INTERLEAVE_DEPTH, getExtentInterleaveDepth());
	return true;
}

Uint64 UNIX_CompositeExtent::getExtentInterleaveDepth() const
{
	return Uint64(0);
}

Boolean UNIX_CompositeExtent::getIsConcatenated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_CONCATENATED, getIsConcatenated());
	return true;
}

Boolean UNIX_CompositeExtent::getIsConcatenated() const
{
	return Boolean(false);
}



Boolean UNIX_CompositeExtent::initialize()
{
	return false;
}

Boolean UNIX_CompositeExtent::load(int &pIndex)
{
	return false;
}

Boolean UNIX_CompositeExtent::finalize()
{
	return false;
}

Boolean UNIX_CompositeExtent::find(Array<CIMKeyBinding> &kbArray)
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
