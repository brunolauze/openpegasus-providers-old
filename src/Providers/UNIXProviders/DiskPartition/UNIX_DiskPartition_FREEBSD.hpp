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

UNIX_DiskPartition::UNIX_DiskPartition(void)
{
}

UNIX_DiskPartition::~UNIX_DiskPartition(void)
{
}


Boolean UNIX_DiskPartition::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DiskPartition::getInstanceID() const
{
	return String (tree->providerName);
}

Boolean UNIX_DiskPartition::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DiskPartition::getCaption() const
{
	 return String(tree->providerName);
}

Boolean UNIX_DiskPartition::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DiskPartition::getDescription() const
{
	return String (tree->type);
}

Boolean UNIX_DiskPartition::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DiskPartition::getElementName() const
{
	return String("DiskPartition");
}

Boolean UNIX_DiskPartition::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_DiskPartition::getInstallDate() const
{
	return CIMHelper::getOSInstallDate();
}

Boolean UNIX_DiskPartition::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_DiskPartition::getName() const
{
	return String (tree->name);
}

Boolean UNIX_DiskPartition::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_DiskPartition::getOperationalStatus() const
{
	Array<Uint16> as;
	as.append(2); //OK

	return as;

}

Boolean UNIX_DiskPartition::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_DiskPartition::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_DiskPartition::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_DiskPartition::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_DiskPartition::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_DiskPartition::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_DiskPartition::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_DiskPartition::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_DiskPartition::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_DiskPartition::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_DiskPartition::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_DiskPartition::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_DiskPartition::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_DiskPartition::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_DiskPartition::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_DiskPartition::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_DiskPartition::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_DiskPartition::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_DiskPartition::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_DiskPartition::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_DiskPartition::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_DiskPartition::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_DiskPartition::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_DiskPartition::getTimeOfLastStateChange() const
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

Boolean UNIX_DiskPartition::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_DiskPartition::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DiskPartition::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_DiskPartition::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_DiskPartition::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_DiskPartition::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_DiskPartition::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_DiskPartition::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_DiskPartition::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_DiskPartition::getCreationClassName() const
{
	return String("UNIX_DiskPartition");
}

Boolean UNIX_DiskPartition::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_DiskPartition::getDeviceID() const
{
	return String (tree->providerName);
}

Boolean UNIX_DiskPartition::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_DiskPartition::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_DiskPartition::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_DiskPartition::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DiskPartition::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_DiskPartition::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_DiskPartition::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_DiskPartition::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_DiskPartition::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_DiskPartition::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_DiskPartition::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_DiskPartition::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_DiskPartition::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_DiskPartition::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_DiskPartition::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_DiskPartition::getOtherIdentifyingInfo() const
{
	Array<String> as;
	as.append(String("RawType: ")+tree->rawtype);
	as.append(String("Label: ")+tree->label);
	as.append(String("Provider Name: ")+tree->providerName);
	return as;
}

Boolean UNIX_DiskPartition::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_DiskPartition::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_DiskPartition::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_DiskPartition::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_DiskPartition::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_DiskPartition::getIdentifyingDescriptions() const
{
	Array<String> as;


	return as;

}

Boolean UNIX_DiskPartition::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_DiskPartition::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DiskPartition::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_DiskPartition::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_DiskPartition::getDataOrganization(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_ORGANIZATION, getDataOrganization());
	return true;
}

Uint16 UNIX_DiskPartition::getDataOrganization() const
{
	return Uint16(0);
}

Boolean UNIX_DiskPartition::getPurpose(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PURPOSE, getPurpose());
	return true;
}

String UNIX_DiskPartition::getPurpose() const
{
	return String (tree->type);
}

Boolean UNIX_DiskPartition::getAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS, getAccess());
	return true;
}

Uint16 UNIX_DiskPartition::getAccess() const
{
	return Uint16(0);
}

Boolean UNIX_DiskPartition::getErrorMethodology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_METHODOLOGY, getErrorMethodology());
	return true;
}

String UNIX_DiskPartition::getErrorMethodology() const
{
	return String ("");
}

Boolean UNIX_DiskPartition::getBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLOCK_SIZE, getBlockSize());
	return true;
}

Uint64 UNIX_DiskPartition::getBlockSize() const
{
	return Uint64(512);
}

Boolean UNIX_DiskPartition::getNumberOfBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_BLOCKS, getNumberOfBlocks());
	return true;
}

Uint64 UNIX_DiskPartition::getNumberOfBlocks() const
{
	return Uint64(tree->size);
}

Boolean UNIX_DiskPartition::getConsumableBlocks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONSUMABLE_BLOCKS, getConsumableBlocks());
	return true;
}

Uint64 UNIX_DiskPartition::getConsumableBlocks() const
{
	return Uint64(tree->size);
}

Boolean UNIX_DiskPartition::getIsBasedOnUnderlyingRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_BASED_ON_UNDERLYING_REDUNDANCY, getIsBasedOnUnderlyingRedundancy());
	return true;
}

Boolean UNIX_DiskPartition::getIsBasedOnUnderlyingRedundancy() const
{
	return Boolean(false);
}

Boolean UNIX_DiskPartition::getSequentialAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEQUENTIAL_ACCESS, getSequentialAccess());
	return true;
}

Boolean UNIX_DiskPartition::getSequentialAccess() const
{
	return Boolean(false);
}

Boolean UNIX_DiskPartition::getExtentStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_STATUS, getExtentStatus());
	return true;
}

Array<Uint16> UNIX_DiskPartition::getExtentStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DiskPartition::getNoSinglePointOfFailure(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NO_SINGLE_POINT_OF_FAILURE, getNoSinglePointOfFailure());
	return true;
}

Boolean UNIX_DiskPartition::getNoSinglePointOfFailure() const
{
	return Boolean(false);
}

Boolean UNIX_DiskPartition::getDataRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_REDUNDANCY, getDataRedundancy());
	return true;
}

Uint16 UNIX_DiskPartition::getDataRedundancy() const
{
	return Uint16(0);
}

Boolean UNIX_DiskPartition::getPackageRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_REDUNDANCY, getPackageRedundancy());
	return true;
}

Uint16 UNIX_DiskPartition::getPackageRedundancy() const
{
	return Uint16(0);
}

Boolean UNIX_DiskPartition::getDeltaReservation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_RESERVATION, getDeltaReservation());
	return true;
}

Uint8 UNIX_DiskPartition::getDeltaReservation() const
{
	return Uint8(0);
}

Boolean UNIX_DiskPartition::getPrimordial(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMORDIAL, getPrimordial());
	return true;
}

Boolean UNIX_DiskPartition::getPrimordial() const
{
	return Boolean(false);
}

Boolean UNIX_DiskPartition::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

Uint16 UNIX_DiskPartition::getNameFormat() const
{
	return Uint16(0);
}

Boolean UNIX_DiskPartition::getNameNamespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_NAMESPACE, getNameNamespace());
	return true;
}

Uint16 UNIX_DiskPartition::getNameNamespace() const
{
	return Uint16(0);
}

Boolean UNIX_DiskPartition::getOtherNameNamespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NAME_NAMESPACE, getOtherNameNamespace());
	return true;
}

String UNIX_DiskPartition::getOtherNameNamespace() const
{
	return String ("");
}

Boolean UNIX_DiskPartition::getOtherNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_NAME_FORMAT, getOtherNameFormat());
	return true;
}

String UNIX_DiskPartition::getOtherNameFormat() const
{
	return String ("");
}

Boolean UNIX_DiskPartition::getBootable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BOOTABLE, getBootable());
	return true;
}

Boolean UNIX_DiskPartition::getBootable() const
{
	return Boolean(false);
}

Boolean UNIX_DiskPartition::getAllocatable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATABLE, getAllocatable());
	return true;
}

Boolean UNIX_DiskPartition::getAllocatable() const
{
	return Boolean(false);
}

Boolean UNIX_DiskPartition::getSignature(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIGNATURE, getSignature());
	return true;
}

String UNIX_DiskPartition::getSignature() const
{
	return String ("");
}

Boolean UNIX_DiskPartition::getSignatureAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIGNATURE_ALGORITHM, getSignatureAlgorithm());
	return true;
}

String UNIX_DiskPartition::getSignatureAlgorithm() const
{
	return String ("");
}

Boolean UNIX_DiskPartition::getSignatureState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIGNATURE_STATE, getSignatureState());
	return true;
}

String UNIX_DiskPartition::getSignatureState() const
{
	return String ("");
}

Boolean UNIX_DiskPartition::getExtendable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENDABLE, getExtendable());
	return true;
}

Boolean UNIX_DiskPartition::getExtendable() const
{
	return Boolean(false);
}

Boolean UNIX_DiskPartition::getPrimaryPartition(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_PARTITION, getPrimaryPartition());
	return true;
}

Boolean UNIX_DiskPartition::getPrimaryPartition() const
{
	return Boolean(true);
}

Boolean UNIX_DiskPartition::getPartitionType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARTITION_TYPE, getPartitionType());
	return true;
}

Uint16 UNIX_DiskPartition::getPartitionType() const
{
	return Uint16(1);
}

Boolean UNIX_DiskPartition::getPartitionSubtype(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARTITION_SUBTYPE, getPartitionSubtype());
	return true;
}

Uint16 UNIX_DiskPartition::getPartitionSubtype() const
{
	return Uint16(65535);
}



Boolean UNIX_DiskPartition::initialize()
{
	tree = NULL;
	tree = GeomHelper::getGeomTree(tree);
	return true;
}

Boolean UNIX_DiskPartition::load(int &pIndex)
{
	if (pIndex > 0) tree = tree->next;
	if (tree != NULL)
	{
		return true;
	}
	return false;
}

Boolean UNIX_DiskPartition::finalize()
{
	tree = NULL;
	return true;
}

Boolean UNIX_DiskPartition::find(Array<CIMKeyBinding> &kbArray)
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
