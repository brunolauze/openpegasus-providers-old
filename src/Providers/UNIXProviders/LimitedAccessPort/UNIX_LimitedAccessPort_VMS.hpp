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


UNIX_LimitedAccessPort::UNIX_LimitedAccessPort(void)
{
}

UNIX_LimitedAccessPort::~UNIX_LimitedAccessPort(void)
{
}


Boolean UNIX_LimitedAccessPort::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_LimitedAccessPort::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_LimitedAccessPort::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_LimitedAccessPort::getCaption() const
{
	return String ("");
}

Boolean UNIX_LimitedAccessPort::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_LimitedAccessPort::getDescription() const
{
	return String ("");
}

Boolean UNIX_LimitedAccessPort::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_LimitedAccessPort::getElementName() const
{
	return String("LimitedAccessPort");
}

Boolean UNIX_LimitedAccessPort::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_LimitedAccessPort::getInstallDate() const
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

Boolean UNIX_LimitedAccessPort::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_LimitedAccessPort::getName() const
{
	return String ("");
}

Boolean UNIX_LimitedAccessPort::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_LimitedAccessPort::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_LimitedAccessPort::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_LimitedAccessPort::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_LimitedAccessPort::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_LimitedAccessPort::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_LimitedAccessPort::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_LimitedAccessPort::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_LimitedAccessPort::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_LimitedAccessPort::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_LimitedAccessPort::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_LimitedAccessPort::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_LimitedAccessPort::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_LimitedAccessPort::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_LimitedAccessPort::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_LimitedAccessPort::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_LimitedAccessPort::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_LimitedAccessPort::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_LimitedAccessPort::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_LimitedAccessPort::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_LimitedAccessPort::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_LimitedAccessPort::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_LimitedAccessPort::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_LimitedAccessPort::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_LimitedAccessPort::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_LimitedAccessPort::getTimeOfLastStateChange() const
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

Boolean UNIX_LimitedAccessPort::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_LimitedAccessPort::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_LimitedAccessPort::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_LimitedAccessPort::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_LimitedAccessPort::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_LimitedAccessPort::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_LimitedAccessPort::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_LimitedAccessPort::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_LimitedAccessPort::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_LimitedAccessPort::getCreationClassName() const
{
	return String("UNIX_LimitedAccessPort");
}

Boolean UNIX_LimitedAccessPort::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_LimitedAccessPort::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_LimitedAccessPort::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_LimitedAccessPort::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_LimitedAccessPort::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_LimitedAccessPort::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_LimitedAccessPort::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_LimitedAccessPort::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_LimitedAccessPort::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_LimitedAccessPort::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_LimitedAccessPort::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_LimitedAccessPort::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_LimitedAccessPort::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_LimitedAccessPort::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_LimitedAccessPort::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_LimitedAccessPort::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_LimitedAccessPort::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_LimitedAccessPort::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_LimitedAccessPort::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_LimitedAccessPort::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_LimitedAccessPort::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_LimitedAccessPort::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_LimitedAccessPort::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_LimitedAccessPort::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_LimitedAccessPort::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_LimitedAccessPort::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_LimitedAccessPort::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_LimitedAccessPort::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_LimitedAccessPort::getLocked(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCKED, getLocked());
	return true;
}

Boolean UNIX_LimitedAccessPort::getLocked() const
{
	return Boolean(false);
}

Boolean UNIX_LimitedAccessPort::getExtended(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENDED, getExtended());
	return true;
}

Boolean UNIX_LimitedAccessPort::getExtended() const
{
	return Boolean(false);
}

Boolean UNIX_LimitedAccessPort::getExtendTimeout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTEND_TIMEOUT, getExtendTimeout());
	return true;
}

Uint32 UNIX_LimitedAccessPort::getExtendTimeout() const
{
	return Uint32(0);
}

Boolean UNIX_LimitedAccessPort::getLastExtended(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_EXTENDED, getLastExtended());
	return true;
}

CIMDateTime UNIX_LimitedAccessPort::getLastExtended() const
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

Boolean UNIX_LimitedAccessPort::getImportCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IMPORT_COUNT, getImportCount());
	return true;
}

Uint64 UNIX_LimitedAccessPort::getImportCount() const
{
	return Uint64(0);
}

Boolean UNIX_LimitedAccessPort::getExportCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXPORT_COUNT, getExportCount());
	return true;
}

Uint64 UNIX_LimitedAccessPort::getExportCount() const
{
	return Uint64(0);
}

Boolean UNIX_LimitedAccessPort::getDirection(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DIRECTION, getDirection());
	return true;
}

Uint16 UNIX_LimitedAccessPort::getDirection() const
{
	return Uint16(0);
}



Boolean UNIX_LimitedAccessPort::initialize()
{
	return false;
}

Boolean UNIX_LimitedAccessPort::load(int &pIndex)
{
	return false;
}

Boolean UNIX_LimitedAccessPort::finalize()
{
	return false;
}

Boolean UNIX_LimitedAccessPort::find(Array<CIMKeyBinding> &kbArray)
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
