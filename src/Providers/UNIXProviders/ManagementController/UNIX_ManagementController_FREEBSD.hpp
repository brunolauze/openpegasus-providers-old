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


UNIX_ManagementController::UNIX_ManagementController(void)
{
}

UNIX_ManagementController::~UNIX_ManagementController(void)
{
}


Boolean UNIX_ManagementController::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ManagementController::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_ManagementController::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ManagementController::getCaption() const
{
	return String ("");
}

Boolean UNIX_ManagementController::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ManagementController::getDescription() const
{
	return String ("");
}

Boolean UNIX_ManagementController::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ManagementController::getElementName() const
{
	return String("ManagementController");
}

Boolean UNIX_ManagementController::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_ManagementController::getGeneration() const
{
	return Uint64(0);
}


Boolean UNIX_ManagementController::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_ManagementController::getInstallDate() const
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

Boolean UNIX_ManagementController::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_ManagementController::getName() const
{
	return String ("");
}

Boolean UNIX_ManagementController::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_ManagementController::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_ManagementController::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_ManagementController::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_ManagementController::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_ManagementController::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_ManagementController::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_ManagementController::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_ManagementController::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_ManagementController::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_ManagementController::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_ManagementController::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_ManagementController::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_ManagementController::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_ManagementController::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_ManagementController::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_ManagementController::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_ManagementController::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_ManagementController::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_ManagementController::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_ManagementController::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_ManagementController::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_ManagementController::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_ManagementController::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_ManagementController::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_ManagementController::getTimeOfLastStateChange() const
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

Boolean UNIX_ManagementController::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_ManagementController::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_ManagementController::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_ManagementController::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_ManagementController::getAllocationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_STATE, getAllocationState());
	return true;
}

String UNIX_ManagementController::getAllocationState() const
{
	return String("");
}

Boolean UNIX_ManagementController::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_ManagementController::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_ManagementController::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_ManagementController::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_ManagementController::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_ManagementController::getCreationClassName() const
{
	return String("UNIX_ManagementController");
}

Boolean UNIX_ManagementController::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_ManagementController::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_ManagementController::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_ManagementController::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_ManagementController::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_ManagementController::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_ManagementController::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_ManagementController::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_ManagementController::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_ManagementController::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_ManagementController::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_ManagementController::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_ManagementController::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_ManagementController::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_ManagementController::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_ManagementController::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_ManagementController::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_ManagementController::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_ManagementController::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_ManagementController::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_ManagementController::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_ManagementController::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_ManagementController::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_ManagementController::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_ManagementController::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_ManagementController::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_ManagementController::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_ManagementController::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_ManagementController::getTimeOfLastReset(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_RESET, getTimeOfLastReset());
	return true;
}

CIMDateTime UNIX_ManagementController::getTimeOfLastReset() const
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

Boolean UNIX_ManagementController::getProtocolSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_SUPPORTED, getProtocolSupported());
	return true;
}

Uint16 UNIX_ManagementController::getProtocolSupported() const
{
	return Uint16(0);
}

Boolean UNIX_ManagementController::getMaxNumberControlled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_NUMBER_CONTROLLED, getMaxNumberControlled());
	return true;
}

Uint32 UNIX_ManagementController::getMaxNumberControlled() const
{
	return Uint32(0);
}

Boolean UNIX_ManagementController::getProtocolDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_DESCRIPTION, getProtocolDescription());
	return true;
}

String UNIX_ManagementController::getProtocolDescription() const
{
	return String ("");
}



Boolean UNIX_ManagementController::initialize()
{
	return false;
}

Boolean UNIX_ManagementController::load(int &pIndex)
{
	return false;
}

Boolean UNIX_ManagementController::finalize()
{
	return false;
}

Boolean UNIX_ManagementController::find(Array<CIMKeyBinding> &kbArray)
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
