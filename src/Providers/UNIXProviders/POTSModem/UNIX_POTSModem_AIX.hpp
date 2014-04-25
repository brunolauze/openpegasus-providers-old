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


UNIX_POTSModem::UNIX_POTSModem(void)
{
}

UNIX_POTSModem::~UNIX_POTSModem(void)
{
}


Boolean UNIX_POTSModem::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_POTSModem::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_POTSModem::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_POTSModem::getCaption() const
{
	return String ("");
}

Boolean UNIX_POTSModem::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_POTSModem::getDescription() const
{
	return String ("");
}

Boolean UNIX_POTSModem::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_POTSModem::getElementName() const
{
	return String("POTSModem");
}

Boolean UNIX_POTSModem::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_POTSModem::getInstallDate() const
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

Boolean UNIX_POTSModem::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_POTSModem::getName() const
{
	return String ("");
}

Boolean UNIX_POTSModem::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_POTSModem::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_POTSModem::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_POTSModem::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_POTSModem::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_POTSModem::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_POTSModem::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_POTSModem::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_POTSModem::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_POTSModem::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_POTSModem::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_POTSModem::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_POTSModem::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_POTSModem::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_POTSModem::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_POTSModem::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_POTSModem::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_POTSModem::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_POTSModem::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_POTSModem::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_POTSModem::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_POTSModem::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_POTSModem::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_POTSModem::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_POTSModem::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_POTSModem::getTimeOfLastStateChange() const
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

Boolean UNIX_POTSModem::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_POTSModem::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_POTSModem::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_POTSModem::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_POTSModem::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_POTSModem::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_POTSModem::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_POTSModem::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_POTSModem::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_POTSModem::getCreationClassName() const
{
	return String("UNIX_POTSModem");
}

Boolean UNIX_POTSModem::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_POTSModem::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_POTSModem::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_POTSModem::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_POTSModem::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_POTSModem::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_POTSModem::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_POTSModem::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_POTSModem::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_POTSModem::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_POTSModem::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_POTSModem::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_POTSModem::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_POTSModem::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_POTSModem::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_POTSModem::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_POTSModem::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_POTSModem::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_POTSModem::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_POTSModem::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_POTSModem::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_POTSModem::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_POTSModem::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_POTSModem::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_POTSModem::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_POTSModem::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_POTSModem::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_POTSModem::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_POTSModem::getFallbackEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FALLBACK_ENABLED, getFallbackEnabled());
	return true;
}

Boolean UNIX_POTSModem::getFallbackEnabled() const
{
	return Boolean(false);
}

Boolean UNIX_POTSModem::getCompressionSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_SUPPORTED, getCompressionSupported());
	return true;
}

Array<Uint16> UNIX_POTSModem::getCompressionSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_POTSModem::getOtherCompressionDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_COMPRESSION_DESCRIPTION, getOtherCompressionDescription());
	return true;
}

String UNIX_POTSModem::getOtherCompressionDescription() const
{
	return String ("");
}

Boolean UNIX_POTSModem::getCompressionInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_INFO, getCompressionInfo());
	return true;
}

Uint16 UNIX_POTSModem::getCompressionInfo() const
{
	return Uint16(0);
}

Boolean UNIX_POTSModem::getOtherCompressionInfoDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_COMPRESSION_INFO_DESCRIPTION, getOtherCompressionInfoDescription());
	return true;
}

String UNIX_POTSModem::getOtherCompressionInfoDescription() const
{
	return String ("");
}

Boolean UNIX_POTSModem::getModulationSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MODULATION_SUPPORTED, getModulationSupported());
	return true;
}

Array<Uint16> UNIX_POTSModem::getModulationSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_POTSModem::getOtherModulationDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_MODULATION_DESCRIPTION, getOtherModulationDescription());
	return true;
}

String UNIX_POTSModem::getOtherModulationDescription() const
{
	return String ("");
}

Boolean UNIX_POTSModem::getModulationScheme(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MODULATION_SCHEME, getModulationScheme());
	return true;
}

Uint16 UNIX_POTSModem::getModulationScheme() const
{
	return Uint16(0);
}

Boolean UNIX_POTSModem::getOtherSchemeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SCHEME_DESCRIPTION, getOtherSchemeDescription());
	return true;
}

String UNIX_POTSModem::getOtherSchemeDescription() const
{
	return String ("");
}

Boolean UNIX_POTSModem::getErrorControlSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CONTROL_SUPPORTED, getErrorControlSupported());
	return true;
}

Array<Uint16> UNIX_POTSModem::getErrorControlSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_POTSModem::getOtherErrorControlDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ERROR_CONTROL_DESCRIPTION, getOtherErrorControlDescription());
	return true;
}

String UNIX_POTSModem::getOtherErrorControlDescription() const
{
	return String ("");
}

Boolean UNIX_POTSModem::getErrorControlInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CONTROL_INFO, getErrorControlInfo());
	return true;
}

Uint16 UNIX_POTSModem::getErrorControlInfo() const
{
	return Uint16(0);
}

Boolean UNIX_POTSModem::getOtherErrorControlInfoDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ERROR_CONTROL_INFO_DESCRIPTION, getOtherErrorControlInfoDescription());
	return true;
}

String UNIX_POTSModem::getOtherErrorControlInfoDescription() const
{
	return String ("");
}

Boolean UNIX_POTSModem::getTimeOfLastReset(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_RESET, getTimeOfLastReset());
	return true;
}

CIMDateTime UNIX_POTSModem::getTimeOfLastReset() const
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

Boolean UNIX_POTSModem::getCallSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CALL_SPEED, getCallSpeed());
	return true;
}

Uint32 UNIX_POTSModem::getCallSpeed() const
{
	return Uint32(0);
}

Boolean UNIX_POTSModem::getCallStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CALL_STATUS, getCallStatus());
	return true;
}

Uint16 UNIX_POTSModem::getCallStatus() const
{
	return Uint16(0);
}

Boolean UNIX_POTSModem::getCharsSent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHARS_SENT, getCharsSent());
	return true;
}

Uint32 UNIX_POTSModem::getCharsSent() const
{
	return Uint32(0);
}

Boolean UNIX_POTSModem::getCharsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHARS_RECEIVED, getCharsReceived());
	return true;
}

Uint32 UNIX_POTSModem::getCharsReceived() const
{
	return Uint32(0);
}

Boolean UNIX_POTSModem::getCharsLost(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHARS_LOST, getCharsLost());
	return true;
}

Uint32 UNIX_POTSModem::getCharsLost() const
{
	return Uint32(0);
}

Boolean UNIX_POTSModem::getBlocksSent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLOCKS_SENT, getBlocksSent());
	return true;
}

Uint32 UNIX_POTSModem::getBlocksSent() const
{
	return Uint32(0);
}

Boolean UNIX_POTSModem::getBlocksResent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLOCKS_RESENT, getBlocksResent());
	return true;
}

Uint32 UNIX_POTSModem::getBlocksResent() const
{
	return Uint32(0);
}

Boolean UNIX_POTSModem::getBlocksReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLOCKS_RECEIVED, getBlocksReceived());
	return true;
}

Uint32 UNIX_POTSModem::getBlocksReceived() const
{
	return Uint32(0);
}

Boolean UNIX_POTSModem::getBlockErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLOCK_ERRORS, getBlockErrors());
	return true;
}

Uint32 UNIX_POTSModem::getBlockErrors() const
{
	return Uint32(0);
}

Boolean UNIX_POTSModem::getCallLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CALL_LENGTH, getCallLength());
	return true;
}

CIMDateTime UNIX_POTSModem::getCallLength() const
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

Boolean UNIX_POTSModem::getNumberDialed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_DIALED, getNumberDialed());
	return true;
}

String UNIX_POTSModem::getNumberDialed() const
{
	return String ("");
}

Boolean UNIX_POTSModem::getCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITIES, getCapabilities());
	return true;
}

Array<Uint16> UNIX_POTSModem::getCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_POTSModem::getCapabilityDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITY_DESCRIPTIONS, getCapabilityDescriptions());
	return true;
}

Array<String> UNIX_POTSModem::getCapabilityDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_POTSModem::getEnabledCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_CAPABILITIES, getEnabledCapabilities());
	return true;
}

Array<Uint16> UNIX_POTSModem::getEnabledCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_POTSModem::getMaxBaudRateToSerialPort(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_BAUD_RATE_TO_SERIAL_PORT, getMaxBaudRateToSerialPort());
	return true;
}

Uint32 UNIX_POTSModem::getMaxBaudRateToSerialPort() const
{
	return Uint32(0);
}

Boolean UNIX_POTSModem::getMaxBaudRateToPhone(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_BAUD_RATE_TO_PHONE, getMaxBaudRateToPhone());
	return true;
}

Uint32 UNIX_POTSModem::getMaxBaudRateToPhone() const
{
	return Uint32(0);
}

Boolean UNIX_POTSModem::getSupportsSynchronousConnect(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTS_SYNCHRONOUS_CONNECT, getSupportsSynchronousConnect());
	return true;
}

Boolean UNIX_POTSModem::getSupportsSynchronousConnect() const
{
	return Boolean(false);
}

Boolean UNIX_POTSModem::getDialType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DIAL_TYPE, getDialType());
	return true;
}

Uint16 UNIX_POTSModem::getDialType() const
{
	return Uint16(0);
}

Boolean UNIX_POTSModem::getInactivityTimeout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INACTIVITY_TIMEOUT, getInactivityTimeout());
	return true;
}

Uint32 UNIX_POTSModem::getInactivityTimeout() const
{
	return Uint32(0);
}

Boolean UNIX_POTSModem::getSpeakerVolumeInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPEAKER_VOLUME_INFO, getSpeakerVolumeInfo());
	return true;
}

Uint16 UNIX_POTSModem::getSpeakerVolumeInfo() const
{
	return Uint16(0);
}

Boolean UNIX_POTSModem::getCountriesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COUNTRIES_SUPPORTED, getCountriesSupported());
	return true;
}

Array<String> UNIX_POTSModem::getCountriesSupported() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_POTSModem::getCountrySelected(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COUNTRY_SELECTED, getCountrySelected());
	return true;
}

String UNIX_POTSModem::getCountrySelected() const
{
	return String ("");
}

Boolean UNIX_POTSModem::getRingsBeforeAnswer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RINGS_BEFORE_ANSWER, getRingsBeforeAnswer());
	return true;
}

Uint8 UNIX_POTSModem::getRingsBeforeAnswer() const
{
	return Uint8(0);
}

Boolean UNIX_POTSModem::getMaxNumberOfPasswords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_NUMBER_OF_PASSWORDS, getMaxNumberOfPasswords());
	return true;
}

Uint16 UNIX_POTSModem::getMaxNumberOfPasswords() const
{
	return Uint16(0);
}

Boolean UNIX_POTSModem::getCurrentPasswords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_PASSWORDS, getCurrentPasswords());
	return true;
}

Array<String> UNIX_POTSModem::getCurrentPasswords() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_POTSModem::getSupportsCallback(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTS_CALLBACK, getSupportsCallback());
	return true;
}

Boolean UNIX_POTSModem::getSupportsCallback() const
{
	return Boolean(false);
}

Boolean UNIX_POTSModem::getAnswerMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANSWER_MODE, getAnswerMode());
	return true;
}

Uint16 UNIX_POTSModem::getAnswerMode() const
{
	return Uint16(0);
}

Boolean UNIX_POTSModem::getEqualization(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EQUALIZATION, getEqualization());
	return true;
}

Uint16 UNIX_POTSModem::getEqualization() const
{
	return Uint16(0);
}

Boolean UNIX_POTSModem::getBlackListedNumbers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLACK_LISTED_NUMBERS, getBlackListedNumbers());
	return true;
}

Array<String> UNIX_POTSModem::getBlackListedNumbers() const
{
	Array<String> as;
	

	return as;

}



Boolean UNIX_POTSModem::initialize()
{
	return false;
}

Boolean UNIX_POTSModem::load(int &pIndex)
{
	return false;
}

Boolean UNIX_POTSModem::finalize()
{
	return false;
}

Boolean UNIX_POTSModem::find(Array<CIMKeyBinding> &kbArray)
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
