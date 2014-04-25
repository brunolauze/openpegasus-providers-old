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


UNIX_Processor::UNIX_Processor(void)
{
}

UNIX_Processor::~UNIX_Processor(void)
{
}


Boolean UNIX_Processor::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_Processor::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_Processor::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_Processor::getCaption() const
{
	return String ("");
}

Boolean UNIX_Processor::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_Processor::getDescription() const
{
	return String ("");
}

Boolean UNIX_Processor::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_Processor::getElementName() const
{
	return String("Processor");
}

Boolean UNIX_Processor::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_Processor::getInstallDate() const
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

Boolean UNIX_Processor::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_Processor::getName() const
{
	return String ("");
}

Boolean UNIX_Processor::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_Processor::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Processor::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_Processor::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Processor::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_Processor::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_Processor::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_Processor::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_Processor::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_Processor::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_Processor::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_Processor::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_Processor::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_Processor::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_Processor::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_Processor::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_Processor::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_Processor::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_Processor::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_Processor::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_Processor::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_Processor::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_Processor::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_Processor::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_Processor::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_Processor::getTimeOfLastStateChange() const
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

Boolean UNIX_Processor::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_Processor::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Processor::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_Processor::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_Processor::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_Processor::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_Processor::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_Processor::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_Processor::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_Processor::getCreationClassName() const
{
	return String("UNIX_Processor");
}

Boolean UNIX_Processor::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_Processor::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_Processor::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_Processor::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_Processor::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_Processor::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Processor::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_Processor::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_Processor::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_Processor::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_Processor::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_Processor::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_Processor::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_Processor::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_Processor::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_Processor::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_Processor::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_Processor::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Processor::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_Processor::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_Processor::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_Processor::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_Processor::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_Processor::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Processor::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_Processor::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Processor::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_Processor::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_Processor::getRole(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROLE, getRole());
	return true;
}

String UNIX_Processor::getRole() const
{
	return String ("");
}

Boolean UNIX_Processor::getFamily(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FAMILY, getFamily());
	return true;
}

Uint16 UNIX_Processor::getFamily() const
{
	return Uint16(0);
}

Boolean UNIX_Processor::getOtherFamilyDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_FAMILY_DESCRIPTION, getOtherFamilyDescription());
	return true;
}

String UNIX_Processor::getOtherFamilyDescription() const
{
	return String ("");
}

Boolean UNIX_Processor::getUpgradeMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UPGRADE_METHOD, getUpgradeMethod());
	return true;
}

Uint16 UNIX_Processor::getUpgradeMethod() const
{
	return Uint16(0);
}

Boolean UNIX_Processor::getMaxClockSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_CLOCK_SPEED, getMaxClockSpeed());
	return true;
}

Uint32 UNIX_Processor::getMaxClockSpeed() const
{
	return Uint32(0);
}

Boolean UNIX_Processor::getCurrentClockSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_CLOCK_SPEED, getCurrentClockSpeed());
	return true;
}

Uint32 UNIX_Processor::getCurrentClockSpeed() const
{
	return Uint32(0);
}

Boolean UNIX_Processor::getDataWidth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_WIDTH, getDataWidth());
	return true;
}

Uint16 UNIX_Processor::getDataWidth() const
{
	return Uint16(0);
}

Boolean UNIX_Processor::getAddressWidth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_WIDTH, getAddressWidth());
	return true;
}

Uint16 UNIX_Processor::getAddressWidth() const
{
	return Uint16(0);
}

Boolean UNIX_Processor::getLoadPercentage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOAD_PERCENTAGE, getLoadPercentage());
	return true;
}

Uint16 UNIX_Processor::getLoadPercentage() const
{
	return Uint16(0);
}

Boolean UNIX_Processor::getStepping(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STEPPING, getStepping());
	return true;
}

String UNIX_Processor::getStepping() const
{
	return String ("");
}

Boolean UNIX_Processor::getUniqueID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNIQUE_ID, getUniqueID());
	return true;
}

String UNIX_Processor::getUniqueID() const
{
	return String ("");
}

Boolean UNIX_Processor::getCPUStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_C_P_U_STATUS, getCPUStatus());
	return true;
}

Uint16 UNIX_Processor::getCPUStatus() const
{
	return Uint16(0);
}

Boolean UNIX_Processor::getExternalBusClockSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTERNAL_BUS_CLOCK_SPEED, getExternalBusClockSpeed());
	return true;
}

Uint32 UNIX_Processor::getExternalBusClockSpeed() const
{
	return Uint32(0);
}

Boolean UNIX_Processor::getCharacteristics(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHARACTERISTICS, getCharacteristics());
	return true;
}

Array<Uint16> UNIX_Processor::getCharacteristics() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Processor::getEnabledProcessorCharacteristics(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_PROCESSOR_CHARACTERISTICS, getEnabledProcessorCharacteristics());
	return true;
}

Array<Uint16> UNIX_Processor::getEnabledProcessorCharacteristics() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Processor::getNumberOfEnabledCores(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_ENABLED_CORES, getNumberOfEnabledCores());
	return true;
}

Uint16 UNIX_Processor::getNumberOfEnabledCores() const
{
	return Uint16(0);
}



Boolean UNIX_Processor::initialize()
{
	return false;
}

Boolean UNIX_Processor::load(int &pIndex)
{
	return false;
}

Boolean UNIX_Processor::finalize()
{
	return false;
}

Boolean UNIX_Processor::find(Array<CIMKeyBinding> &kbArray)
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
