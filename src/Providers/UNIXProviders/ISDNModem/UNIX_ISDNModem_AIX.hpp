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


UNIX_ISDNModem::UNIX_ISDNModem(void)
{
}

UNIX_ISDNModem::~UNIX_ISDNModem(void)
{
}


Boolean UNIX_ISDNModem::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ISDNModem::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_ISDNModem::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ISDNModem::getCaption() const
{
	return String ("");
}

Boolean UNIX_ISDNModem::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ISDNModem::getDescription() const
{
	return String ("");
}

Boolean UNIX_ISDNModem::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ISDNModem::getElementName() const
{
	return String("ISDNModem");
}

Boolean UNIX_ISDNModem::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_ISDNModem::getInstallDate() const
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

Boolean UNIX_ISDNModem::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_ISDNModem::getName() const
{
	return String ("");
}

Boolean UNIX_ISDNModem::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_ISDNModem::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_ISDNModem::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_ISDNModem::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_ISDNModem::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_ISDNModem::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_ISDNModem::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_ISDNModem::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_ISDNModem::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_ISDNModem::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_ISDNModem::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_ISDNModem::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_ISDNModem::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_ISDNModem::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_ISDNModem::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_ISDNModem::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_ISDNModem::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_ISDNModem::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_ISDNModem::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_ISDNModem::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_ISDNModem::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_ISDNModem::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_ISDNModem::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_ISDNModem::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_ISDNModem::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_ISDNModem::getTimeOfLastStateChange() const
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

Boolean UNIX_ISDNModem::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_ISDNModem::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_ISDNModem::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_ISDNModem::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_ISDNModem::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_ISDNModem::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_ISDNModem::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_ISDNModem::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_ISDNModem::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_ISDNModem::getCreationClassName() const
{
	return String("UNIX_ISDNModem");
}

Boolean UNIX_ISDNModem::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_ISDNModem::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_ISDNModem::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_ISDNModem::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_ISDNModem::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_ISDNModem::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_ISDNModem::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_ISDNModem::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_ISDNModem::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_ISDNModem::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_ISDNModem::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_ISDNModem::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_ISDNModem::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_ISDNModem::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_ISDNModem::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_ISDNModem::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_ISDNModem::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_ISDNModem::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_ISDNModem::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_ISDNModem::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_ISDNModem::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_ISDNModem::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_ISDNModem::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_ISDNModem::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_ISDNModem::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_ISDNModem::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_ISDNModem::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_ISDNModem::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_ISDNModem::getFallbackEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FALLBACK_ENABLED, getFallbackEnabled());
	return true;
}

Boolean UNIX_ISDNModem::getFallbackEnabled() const
{
	return Boolean(false);
}

Boolean UNIX_ISDNModem::getCompressionSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_SUPPORTED, getCompressionSupported());
	return true;
}

Array<Uint16> UNIX_ISDNModem::getCompressionSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_ISDNModem::getOtherCompressionDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_COMPRESSION_DESCRIPTION, getOtherCompressionDescription());
	return true;
}

String UNIX_ISDNModem::getOtherCompressionDescription() const
{
	return String ("");
}

Boolean UNIX_ISDNModem::getCompressionInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_INFO, getCompressionInfo());
	return true;
}

Uint16 UNIX_ISDNModem::getCompressionInfo() const
{
	return Uint16(0);
}

Boolean UNIX_ISDNModem::getOtherCompressionInfoDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_COMPRESSION_INFO_DESCRIPTION, getOtherCompressionInfoDescription());
	return true;
}

String UNIX_ISDNModem::getOtherCompressionInfoDescription() const
{
	return String ("");
}

Boolean UNIX_ISDNModem::getModulationSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MODULATION_SUPPORTED, getModulationSupported());
	return true;
}

Array<Uint16> UNIX_ISDNModem::getModulationSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_ISDNModem::getOtherModulationDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_MODULATION_DESCRIPTION, getOtherModulationDescription());
	return true;
}

String UNIX_ISDNModem::getOtherModulationDescription() const
{
	return String ("");
}

Boolean UNIX_ISDNModem::getModulationScheme(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MODULATION_SCHEME, getModulationScheme());
	return true;
}

Uint16 UNIX_ISDNModem::getModulationScheme() const
{
	return Uint16(0);
}

Boolean UNIX_ISDNModem::getOtherSchemeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SCHEME_DESCRIPTION, getOtherSchemeDescription());
	return true;
}

String UNIX_ISDNModem::getOtherSchemeDescription() const
{
	return String ("");
}

Boolean UNIX_ISDNModem::getErrorControlSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CONTROL_SUPPORTED, getErrorControlSupported());
	return true;
}

Array<Uint16> UNIX_ISDNModem::getErrorControlSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_ISDNModem::getOtherErrorControlDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ERROR_CONTROL_DESCRIPTION, getOtherErrorControlDescription());
	return true;
}

String UNIX_ISDNModem::getOtherErrorControlDescription() const
{
	return String ("");
}

Boolean UNIX_ISDNModem::getErrorControlInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CONTROL_INFO, getErrorControlInfo());
	return true;
}

Uint16 UNIX_ISDNModem::getErrorControlInfo() const
{
	return Uint16(0);
}

Boolean UNIX_ISDNModem::getOtherErrorControlInfoDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ERROR_CONTROL_INFO_DESCRIPTION, getOtherErrorControlInfoDescription());
	return true;
}

String UNIX_ISDNModem::getOtherErrorControlInfoDescription() const
{
	return String ("");
}

Boolean UNIX_ISDNModem::getTimeOfLastReset(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_RESET, getTimeOfLastReset());
	return true;
}

CIMDateTime UNIX_ISDNModem::getTimeOfLastReset() const
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

Boolean UNIX_ISDNModem::getCallSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CALL_SPEED, getCallSpeed());
	return true;
}

Uint32 UNIX_ISDNModem::getCallSpeed() const
{
	return Uint32(0);
}

Boolean UNIX_ISDNModem::getCallStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CALL_STATUS, getCallStatus());
	return true;
}

Uint16 UNIX_ISDNModem::getCallStatus() const
{
	return Uint16(0);
}

Boolean UNIX_ISDNModem::getCharsSent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHARS_SENT, getCharsSent());
	return true;
}

Uint32 UNIX_ISDNModem::getCharsSent() const
{
	return Uint32(0);
}

Boolean UNIX_ISDNModem::getCharsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHARS_RECEIVED, getCharsReceived());
	return true;
}

Uint32 UNIX_ISDNModem::getCharsReceived() const
{
	return Uint32(0);
}

Boolean UNIX_ISDNModem::getCharsLost(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHARS_LOST, getCharsLost());
	return true;
}

Uint32 UNIX_ISDNModem::getCharsLost() const
{
	return Uint32(0);
}

Boolean UNIX_ISDNModem::getBlocksSent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLOCKS_SENT, getBlocksSent());
	return true;
}

Uint32 UNIX_ISDNModem::getBlocksSent() const
{
	return Uint32(0);
}

Boolean UNIX_ISDNModem::getBlocksResent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLOCKS_RESENT, getBlocksResent());
	return true;
}

Uint32 UNIX_ISDNModem::getBlocksResent() const
{
	return Uint32(0);
}

Boolean UNIX_ISDNModem::getBlocksReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLOCKS_RECEIVED, getBlocksReceived());
	return true;
}

Uint32 UNIX_ISDNModem::getBlocksReceived() const
{
	return Uint32(0);
}

Boolean UNIX_ISDNModem::getBlockErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLOCK_ERRORS, getBlockErrors());
	return true;
}

Uint32 UNIX_ISDNModem::getBlockErrors() const
{
	return Uint32(0);
}

Boolean UNIX_ISDNModem::getCallLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CALL_LENGTH, getCallLength());
	return true;
}

CIMDateTime UNIX_ISDNModem::getCallLength() const
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

Boolean UNIX_ISDNModem::getNumberDialed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_DIALED, getNumberDialed());
	return true;
}

String UNIX_ISDNModem::getNumberDialed() const
{
	return String ("");
}



Boolean UNIX_ISDNModem::initialize()
{
	return false;
}

Boolean UNIX_ISDNModem::load(int &pIndex)
{
	return false;
}

Boolean UNIX_ISDNModem::finalize()
{
	return false;
}

Boolean UNIX_ISDNModem::find(Array<CIMKeyBinding> &kbArray)
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
