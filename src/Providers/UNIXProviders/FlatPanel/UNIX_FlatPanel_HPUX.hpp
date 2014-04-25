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


UNIX_FlatPanel::UNIX_FlatPanel(void)
{
}

UNIX_FlatPanel::~UNIX_FlatPanel(void)
{
}


Boolean UNIX_FlatPanel::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FlatPanel::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_FlatPanel::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FlatPanel::getCaption() const
{
	return String ("");
}

Boolean UNIX_FlatPanel::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FlatPanel::getDescription() const
{
	return String ("");
}

Boolean UNIX_FlatPanel::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FlatPanel::getElementName() const
{
	return String("FlatPanel");
}

Boolean UNIX_FlatPanel::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_FlatPanel::getInstallDate() const
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

Boolean UNIX_FlatPanel::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_FlatPanel::getName() const
{
	return String ("");
}

Boolean UNIX_FlatPanel::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_FlatPanel::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_FlatPanel::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_FlatPanel::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_FlatPanel::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_FlatPanel::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_FlatPanel::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_FlatPanel::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_FlatPanel::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_FlatPanel::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_FlatPanel::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_FlatPanel::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_FlatPanel::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_FlatPanel::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_FlatPanel::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_FlatPanel::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_FlatPanel::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_FlatPanel::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_FlatPanel::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_FlatPanel::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_FlatPanel::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_FlatPanel::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_FlatPanel::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_FlatPanel::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_FlatPanel::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_FlatPanel::getTimeOfLastStateChange() const
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

Boolean UNIX_FlatPanel::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_FlatPanel::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_FlatPanel::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_FlatPanel::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_FlatPanel::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_FlatPanel::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_FlatPanel::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_FlatPanel::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_FlatPanel::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_FlatPanel::getCreationClassName() const
{
	return String("UNIX_FlatPanel");
}

Boolean UNIX_FlatPanel::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_FlatPanel::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_FlatPanel::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_FlatPanel::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_FlatPanel::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_FlatPanel::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_FlatPanel::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_FlatPanel::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_FlatPanel::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_FlatPanel::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_FlatPanel::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_FlatPanel::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_FlatPanel::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_FlatPanel::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_FlatPanel::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_FlatPanel::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_FlatPanel::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_FlatPanel::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_FlatPanel::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_FlatPanel::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_FlatPanel::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_FlatPanel::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_FlatPanel::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_FlatPanel::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_FlatPanel::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_FlatPanel::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_FlatPanel::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_FlatPanel::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_FlatPanel::getIsLocked(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_LOCKED, getIsLocked());
	return true;
}

Boolean UNIX_FlatPanel::getIsLocked() const
{
	return Boolean(false);
}

Boolean UNIX_FlatPanel::getHorizontalResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HORIZONTAL_RESOLUTION, getHorizontalResolution());
	return true;
}

Uint32 UNIX_FlatPanel::getHorizontalResolution() const
{
	return Uint32(0);
}

Boolean UNIX_FlatPanel::getVerticalResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERTICAL_RESOLUTION, getVerticalResolution());
	return true;
}

Uint32 UNIX_FlatPanel::getVerticalResolution() const
{
	return Uint32(0);
}

Boolean UNIX_FlatPanel::getScanMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCAN_MODE, getScanMode());
	return true;
}

Uint16 UNIX_FlatPanel::getScanMode() const
{
	return Uint16(0);
}

Boolean UNIX_FlatPanel::getDisplayType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DISPLAY_TYPE, getDisplayType());
	return true;
}

Uint16 UNIX_FlatPanel::getDisplayType() const
{
	return Uint16(0);
}

Boolean UNIX_FlatPanel::getLightSource(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LIGHT_SOURCE, getLightSource());
	return true;
}

Uint16 UNIX_FlatPanel::getLightSource() const
{
	return Uint16(0);
}

Boolean UNIX_FlatPanel::getSupportsColor(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTS_COLOR, getSupportsColor());
	return true;
}

Boolean UNIX_FlatPanel::getSupportsColor() const
{
	return Boolean(false);
}



Boolean UNIX_FlatPanel::initialize()
{
	return false;
}

Boolean UNIX_FlatPanel::load(int &pIndex)
{
	return false;
}

Boolean UNIX_FlatPanel::finalize()
{
	return false;
}

Boolean UNIX_FlatPanel::find(Array<CIMKeyBinding> &kbArray)
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
