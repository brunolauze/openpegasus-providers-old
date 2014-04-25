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


UNIX_VideoHead::UNIX_VideoHead(void)
{
}

UNIX_VideoHead::~UNIX_VideoHead(void)
{
}


Boolean UNIX_VideoHead::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_VideoHead::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_VideoHead::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_VideoHead::getCaption() const
{
	return String ("");
}

Boolean UNIX_VideoHead::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_VideoHead::getDescription() const
{
	return String ("");
}

Boolean UNIX_VideoHead::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_VideoHead::getElementName() const
{
	return String("VideoHead");
}

Boolean UNIX_VideoHead::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_VideoHead::getInstallDate() const
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

Boolean UNIX_VideoHead::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_VideoHead::getName() const
{
	return String ("");
}

Boolean UNIX_VideoHead::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_VideoHead::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_VideoHead::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_VideoHead::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_VideoHead::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_VideoHead::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_VideoHead::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_VideoHead::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_VideoHead::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_VideoHead::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_VideoHead::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_VideoHead::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_VideoHead::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_VideoHead::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_VideoHead::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_VideoHead::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_VideoHead::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_VideoHead::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_VideoHead::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_VideoHead::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_VideoHead::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_VideoHead::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_VideoHead::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_VideoHead::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_VideoHead::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_VideoHead::getTimeOfLastStateChange() const
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

Boolean UNIX_VideoHead::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_VideoHead::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_VideoHead::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_VideoHead::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_VideoHead::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_VideoHead::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_VideoHead::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_VideoHead::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_VideoHead::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_VideoHead::getCreationClassName() const
{
	return String("UNIX_VideoHead");
}

Boolean UNIX_VideoHead::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_VideoHead::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_VideoHead::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_VideoHead::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_VideoHead::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_VideoHead::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_VideoHead::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_VideoHead::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_VideoHead::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_VideoHead::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_VideoHead::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_VideoHead::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_VideoHead::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_VideoHead::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_VideoHead::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_VideoHead::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_VideoHead::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_VideoHead::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_VideoHead::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_VideoHead::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_VideoHead::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_VideoHead::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_VideoHead::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_VideoHead::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_VideoHead::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_VideoHead::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_VideoHead::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_VideoHead::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_VideoHead::getCurrentBitsPerPixel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_BITS_PER_PIXEL, getCurrentBitsPerPixel());
	return true;
}

Uint32 UNIX_VideoHead::getCurrentBitsPerPixel() const
{
	return Uint32(0);
}

Boolean UNIX_VideoHead::getCurrentHorizontalResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_HORIZONTAL_RESOLUTION, getCurrentHorizontalResolution());
	return true;
}

Uint32 UNIX_VideoHead::getCurrentHorizontalResolution() const
{
	return Uint32(0);
}

Boolean UNIX_VideoHead::getCurrentVerticalResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_VERTICAL_RESOLUTION, getCurrentVerticalResolution());
	return true;
}

Uint32 UNIX_VideoHead::getCurrentVerticalResolution() const
{
	return Uint32(0);
}

Boolean UNIX_VideoHead::getMaxRefreshRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_REFRESH_RATE, getMaxRefreshRate());
	return true;
}

Uint32 UNIX_VideoHead::getMaxRefreshRate() const
{
	return Uint32(0);
}

Boolean UNIX_VideoHead::getMinRefreshRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_REFRESH_RATE, getMinRefreshRate());
	return true;
}

Uint32 UNIX_VideoHead::getMinRefreshRate() const
{
	return Uint32(0);
}

Boolean UNIX_VideoHead::getCurrentRefreshRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_REFRESH_RATE, getCurrentRefreshRate());
	return true;
}

Uint32 UNIX_VideoHead::getCurrentRefreshRate() const
{
	return Uint32(0);
}

Boolean UNIX_VideoHead::getCurrentScanMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_SCAN_MODE, getCurrentScanMode());
	return true;
}

Uint16 UNIX_VideoHead::getCurrentScanMode() const
{
	return Uint16(0);
}

Boolean UNIX_VideoHead::getOtherCurrentScanMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_CURRENT_SCAN_MODE, getOtherCurrentScanMode());
	return true;
}

String UNIX_VideoHead::getOtherCurrentScanMode() const
{
	return String ("");
}

Boolean UNIX_VideoHead::getCurrentNumberOfRows(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_NUMBER_OF_ROWS, getCurrentNumberOfRows());
	return true;
}

Uint32 UNIX_VideoHead::getCurrentNumberOfRows() const
{
	return Uint32(0);
}

Boolean UNIX_VideoHead::getCurrentNumberOfColumns(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_NUMBER_OF_COLUMNS, getCurrentNumberOfColumns());
	return true;
}

Uint32 UNIX_VideoHead::getCurrentNumberOfColumns() const
{
	return Uint32(0);
}

Boolean UNIX_VideoHead::getCurrentNumberOfColors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_NUMBER_OF_COLORS, getCurrentNumberOfColors());
	return true;
}

Uint64 UNIX_VideoHead::getCurrentNumberOfColors() const
{
	return Uint64(0);
}



Boolean UNIX_VideoHead::initialize()
{
	return false;
}

Boolean UNIX_VideoHead::load(int &pIndex)
{
	return false;
}

Boolean UNIX_VideoHead::finalize()
{
	return false;
}

Boolean UNIX_VideoHead::find(Array<CIMKeyBinding> &kbArray)
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
