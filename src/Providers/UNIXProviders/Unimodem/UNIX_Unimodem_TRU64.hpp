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


UNIX_Unimodem::UNIX_Unimodem(void)
{
}

UNIX_Unimodem::~UNIX_Unimodem(void)
{
}


Boolean UNIX_Unimodem::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_Unimodem::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_Unimodem::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_Unimodem::getCaption() const
{
	return String ("");
}

Boolean UNIX_Unimodem::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_Unimodem::getDescription() const
{
	return String ("");
}

Boolean UNIX_Unimodem::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_Unimodem::getElementName() const
{
	return String("Unimodem");
}

Boolean UNIX_Unimodem::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_Unimodem::getInstallDate() const
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

Boolean UNIX_Unimodem::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_Unimodem::getName() const
{
	return String ("");
}

Boolean UNIX_Unimodem::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_Unimodem::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Unimodem::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_Unimodem::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Unimodem::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_Unimodem::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_Unimodem::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_Unimodem::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_Unimodem::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_Unimodem::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_Unimodem::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_Unimodem::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_Unimodem::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_Unimodem::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_Unimodem::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_Unimodem::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_Unimodem::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_Unimodem::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_Unimodem::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_Unimodem::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_Unimodem::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_Unimodem::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_Unimodem::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_Unimodem::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_Unimodem::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_Unimodem::getTimeOfLastStateChange() const
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

Boolean UNIX_Unimodem::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_Unimodem::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Unimodem::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_Unimodem::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_Unimodem::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_Unimodem::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_Unimodem::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_Unimodem::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_Unimodem::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_Unimodem::getCreationClassName() const
{
	return String("UNIX_Unimodem");
}

Boolean UNIX_Unimodem::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_Unimodem::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_Unimodem::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_Unimodem::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_Unimodem::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_Unimodem::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Unimodem::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_Unimodem::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_Unimodem::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_Unimodem::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_Unimodem::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_Unimodem::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_Unimodem::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_Unimodem::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_Unimodem::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_Unimodem::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_Unimodem::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_Unimodem::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Unimodem::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_Unimodem::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_Unimodem::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_Unimodem::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_Unimodem::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_Unimodem::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Unimodem::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_Unimodem::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Unimodem::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_Unimodem::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_Unimodem::getFallbackEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FALLBACK_ENABLED, getFallbackEnabled());
	return true;
}

Boolean UNIX_Unimodem::getFallbackEnabled() const
{
	return Boolean(false);
}

Boolean UNIX_Unimodem::getCompressionSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_SUPPORTED, getCompressionSupported());
	return true;
}

Array<Uint16> UNIX_Unimodem::getCompressionSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Unimodem::getOtherCompressionDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_COMPRESSION_DESCRIPTION, getOtherCompressionDescription());
	return true;
}

String UNIX_Unimodem::getOtherCompressionDescription() const
{
	return String ("");
}

Boolean UNIX_Unimodem::getCompressionInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_INFO, getCompressionInfo());
	return true;
}

Uint16 UNIX_Unimodem::getCompressionInfo() const
{
	return Uint16(0);
}

Boolean UNIX_Unimodem::getOtherCompressionInfoDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_COMPRESSION_INFO_DESCRIPTION, getOtherCompressionInfoDescription());
	return true;
}

String UNIX_Unimodem::getOtherCompressionInfoDescription() const
{
	return String ("");
}

Boolean UNIX_Unimodem::getModulationSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MODULATION_SUPPORTED, getModulationSupported());
	return true;
}

Array<Uint16> UNIX_Unimodem::getModulationSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Unimodem::getOtherModulationDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_MODULATION_DESCRIPTION, getOtherModulationDescription());
	return true;
}

String UNIX_Unimodem::getOtherModulationDescription() const
{
	return String ("");
}

Boolean UNIX_Unimodem::getModulationScheme(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MODULATION_SCHEME, getModulationScheme());
	return true;
}

Uint16 UNIX_Unimodem::getModulationScheme() const
{
	return Uint16(0);
}

Boolean UNIX_Unimodem::getOtherSchemeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SCHEME_DESCRIPTION, getOtherSchemeDescription());
	return true;
}

String UNIX_Unimodem::getOtherSchemeDescription() const
{
	return String ("");
}

Boolean UNIX_Unimodem::getErrorControlSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CONTROL_SUPPORTED, getErrorControlSupported());
	return true;
}

Array<Uint16> UNIX_Unimodem::getErrorControlSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Unimodem::getOtherErrorControlDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ERROR_CONTROL_DESCRIPTION, getOtherErrorControlDescription());
	return true;
}

String UNIX_Unimodem::getOtherErrorControlDescription() const
{
	return String ("");
}

Boolean UNIX_Unimodem::getErrorControlInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CONTROL_INFO, getErrorControlInfo());
	return true;
}

Uint16 UNIX_Unimodem::getErrorControlInfo() const
{
	return Uint16(0);
}

Boolean UNIX_Unimodem::getOtherErrorControlInfoDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ERROR_CONTROL_INFO_DESCRIPTION, getOtherErrorControlInfoDescription());
	return true;
}

String UNIX_Unimodem::getOtherErrorControlInfoDescription() const
{
	return String ("");
}

Boolean UNIX_Unimodem::getTimeOfLastReset(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_RESET, getTimeOfLastReset());
	return true;
}

CIMDateTime UNIX_Unimodem::getTimeOfLastReset() const
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

Boolean UNIX_Unimodem::getCallSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CALL_SPEED, getCallSpeed());
	return true;
}

Uint32 UNIX_Unimodem::getCallSpeed() const
{
	return Uint32(0);
}

Boolean UNIX_Unimodem::getCallStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CALL_STATUS, getCallStatus());
	return true;
}

Uint16 UNIX_Unimodem::getCallStatus() const
{
	return Uint16(0);
}

Boolean UNIX_Unimodem::getCharsSent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHARS_SENT, getCharsSent());
	return true;
}

Uint32 UNIX_Unimodem::getCharsSent() const
{
	return Uint32(0);
}

Boolean UNIX_Unimodem::getCharsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHARS_RECEIVED, getCharsReceived());
	return true;
}

Uint32 UNIX_Unimodem::getCharsReceived() const
{
	return Uint32(0);
}

Boolean UNIX_Unimodem::getCharsLost(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHARS_LOST, getCharsLost());
	return true;
}

Uint32 UNIX_Unimodem::getCharsLost() const
{
	return Uint32(0);
}

Boolean UNIX_Unimodem::getBlocksSent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLOCKS_SENT, getBlocksSent());
	return true;
}

Uint32 UNIX_Unimodem::getBlocksSent() const
{
	return Uint32(0);
}

Boolean UNIX_Unimodem::getBlocksResent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLOCKS_RESENT, getBlocksResent());
	return true;
}

Uint32 UNIX_Unimodem::getBlocksResent() const
{
	return Uint32(0);
}

Boolean UNIX_Unimodem::getBlocksReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLOCKS_RECEIVED, getBlocksReceived());
	return true;
}

Uint32 UNIX_Unimodem::getBlocksReceived() const
{
	return Uint32(0);
}

Boolean UNIX_Unimodem::getBlockErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLOCK_ERRORS, getBlockErrors());
	return true;
}

Uint32 UNIX_Unimodem::getBlockErrors() const
{
	return Uint32(0);
}

Boolean UNIX_Unimodem::getCallLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CALL_LENGTH, getCallLength());
	return true;
}

CIMDateTime UNIX_Unimodem::getCallLength() const
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

Boolean UNIX_Unimodem::getNumberDialed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_DIALED, getNumberDialed());
	return true;
}

String UNIX_Unimodem::getNumberDialed() const
{
	return String ("");
}

Boolean UNIX_Unimodem::getCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITIES, getCapabilities());
	return true;
}

Array<Uint16> UNIX_Unimodem::getCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Unimodem::getCapabilityDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITY_DESCRIPTIONS, getCapabilityDescriptions());
	return true;
}

Array<String> UNIX_Unimodem::getCapabilityDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Unimodem::getEnabledCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_CAPABILITIES, getEnabledCapabilities());
	return true;
}

Array<Uint16> UNIX_Unimodem::getEnabledCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Unimodem::getMaxBaudRateToSerialPort(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_BAUD_RATE_TO_SERIAL_PORT, getMaxBaudRateToSerialPort());
	return true;
}

Uint32 UNIX_Unimodem::getMaxBaudRateToSerialPort() const
{
	return Uint32(0);
}

Boolean UNIX_Unimodem::getMaxBaudRateToPhone(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_BAUD_RATE_TO_PHONE, getMaxBaudRateToPhone());
	return true;
}

Uint32 UNIX_Unimodem::getMaxBaudRateToPhone() const
{
	return Uint32(0);
}

Boolean UNIX_Unimodem::getSupportsSynchronousConnect(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTS_SYNCHRONOUS_CONNECT, getSupportsSynchronousConnect());
	return true;
}

Boolean UNIX_Unimodem::getSupportsSynchronousConnect() const
{
	return Boolean(false);
}

Boolean UNIX_Unimodem::getDialType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DIAL_TYPE, getDialType());
	return true;
}

Uint16 UNIX_Unimodem::getDialType() const
{
	return Uint16(0);
}

Boolean UNIX_Unimodem::getInactivityTimeout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INACTIVITY_TIMEOUT, getInactivityTimeout());
	return true;
}

Uint32 UNIX_Unimodem::getInactivityTimeout() const
{
	return Uint32(0);
}

Boolean UNIX_Unimodem::getSpeakerVolumeInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPEAKER_VOLUME_INFO, getSpeakerVolumeInfo());
	return true;
}

Uint16 UNIX_Unimodem::getSpeakerVolumeInfo() const
{
	return Uint16(0);
}

Boolean UNIX_Unimodem::getCountriesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COUNTRIES_SUPPORTED, getCountriesSupported());
	return true;
}

Array<String> UNIX_Unimodem::getCountriesSupported() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Unimodem::getCountrySelected(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COUNTRY_SELECTED, getCountrySelected());
	return true;
}

String UNIX_Unimodem::getCountrySelected() const
{
	return String ("");
}

Boolean UNIX_Unimodem::getRingsBeforeAnswer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RINGS_BEFORE_ANSWER, getRingsBeforeAnswer());
	return true;
}

Uint8 UNIX_Unimodem::getRingsBeforeAnswer() const
{
	return Uint8(0);
}

Boolean UNIX_Unimodem::getMaxNumberOfPasswords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_NUMBER_OF_PASSWORDS, getMaxNumberOfPasswords());
	return true;
}

Uint16 UNIX_Unimodem::getMaxNumberOfPasswords() const
{
	return Uint16(0);
}

Boolean UNIX_Unimodem::getCurrentPasswords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_PASSWORDS, getCurrentPasswords());
	return true;
}

Array<String> UNIX_Unimodem::getCurrentPasswords() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Unimodem::getSupportsCallback(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTS_CALLBACK, getSupportsCallback());
	return true;
}

Boolean UNIX_Unimodem::getSupportsCallback() const
{
	return Boolean(false);
}

Boolean UNIX_Unimodem::getAnswerMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANSWER_MODE, getAnswerMode());
	return true;
}

Uint16 UNIX_Unimodem::getAnswerMode() const
{
	return Uint16(0);
}

Boolean UNIX_Unimodem::getEqualization(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EQUALIZATION, getEqualization());
	return true;
}

Uint16 UNIX_Unimodem::getEqualization() const
{
	return Uint16(0);
}

Boolean UNIX_Unimodem::getBlackListedNumbers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLACK_LISTED_NUMBERS, getBlackListedNumbers());
	return true;
}

Array<String> UNIX_Unimodem::getBlackListedNumbers() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Unimodem::getCallSetupResultCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CALL_SETUP_RESULT_CODE, getCallSetupResultCode());
	return true;
}

Uint16 UNIX_Unimodem::getCallSetupResultCode() const
{
	return Uint16(0);
}

Boolean UNIX_Unimodem::getMultiMediaMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MULTI_MEDIA_MODE, getMultiMediaMode());
	return true;
}

Uint16 UNIX_Unimodem::getMultiMediaMode() const
{
	return Uint16(0);
}

Boolean UNIX_Unimodem::getDTEDCEInterfaceMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_D_T_E_D_C_E_INTERFACE_MODE, getDTEDCEInterfaceMode());
	return true;
}

Uint16 UNIX_Unimodem::getDTEDCEInterfaceMode() const
{
	return Uint16(0);
}

Boolean UNIX_Unimodem::getTransmitCarrierNegotiation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSMIT_CARRIER_NEGOTIATION, getTransmitCarrierNegotiation());
	return true;
}

Uint16 UNIX_Unimodem::getTransmitCarrierNegotiation() const
{
	return Uint16(0);
}

Boolean UNIX_Unimodem::getReceiveCarrierNegotiation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECEIVE_CARRIER_NEGOTIATION, getReceiveCarrierNegotiation());
	return true;
}

Uint16 UNIX_Unimodem::getReceiveCarrierNegotiation() const
{
	return Uint16(0);
}

Boolean UNIX_Unimodem::getInitialTransmitCarrierDataRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INITIAL_TRANSMIT_CARRIER_DATA_RATE, getInitialTransmitCarrierDataRate());
	return true;
}

Uint32 UNIX_Unimodem::getInitialTransmitCarrierDataRate() const
{
	return Uint32(0);
}

Boolean UNIX_Unimodem::getInitialReceiveCarrierDataRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INITIAL_RECEIVE_CARRIER_DATA_RATE, getInitialReceiveCarrierDataRate());
	return true;
}

Uint32 UNIX_Unimodem::getInitialReceiveCarrierDataRate() const
{
	return Uint32(0);
}

Boolean UNIX_Unimodem::getCarrierRetrainsRequested(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CARRIER_RETRAINS_REQUESTED, getCarrierRetrainsRequested());
	return true;
}

Uint8 UNIX_Unimodem::getCarrierRetrainsRequested() const
{
	return Uint8(0);
}

Boolean UNIX_Unimodem::getCarrierRetrainsGranted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CARRIER_RETRAINS_GRANTED, getCarrierRetrainsGranted());
	return true;
}

Uint8 UNIX_Unimodem::getCarrierRetrainsGranted() const
{
	return Uint8(0);
}

Boolean UNIX_Unimodem::getFinalTransmitCarrierDataRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FINAL_TRANSMIT_CARRIER_DATA_RATE, getFinalTransmitCarrierDataRate());
	return true;
}

Uint32 UNIX_Unimodem::getFinalTransmitCarrierDataRate() const
{
	return Uint32(0);
}

Boolean UNIX_Unimodem::getFinalReceiveCarrierDataRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FINAL_RECEIVE_CARRIER_DATA_RATE, getFinalReceiveCarrierDataRate());
	return true;
}

Uint32 UNIX_Unimodem::getFinalReceiveCarrierDataRate() const
{
	return Uint32(0);
}

Boolean UNIX_Unimodem::getTerminationCause(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TERMINATION_CAUSE, getTerminationCause());
	return true;
}

Uint16 UNIX_Unimodem::getTerminationCause() const
{
	return Uint16(0);
}

Boolean UNIX_Unimodem::getUnimodemRevision(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNIMODEM_REVISION, getUnimodemRevision());
	return true;
}

String UNIX_Unimodem::getUnimodemRevision() const
{
	return String ("");
}

Boolean UNIX_Unimodem::getEstimatedNoiseLevel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ESTIMATED_NOISE_LEVEL, getEstimatedNoiseLevel());
	return true;
}

Uint32 UNIX_Unimodem::getEstimatedNoiseLevel() const
{
	return Uint32(0);
}

Boolean UNIX_Unimodem::getNormalizedMeanSquaredError(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NORMALIZED_MEAN_SQUARED_ERROR, getNormalizedMeanSquaredError());
	return true;
}

Uint32 UNIX_Unimodem::getNormalizedMeanSquaredError() const
{
	return Uint32(0);
}

Boolean UNIX_Unimodem::getTemporaryCarrierLossEventCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TEMPORARY_CARRIER_LOSS_EVENT_COUNT, getTemporaryCarrierLossEventCount());
	return true;
}

Uint8 UNIX_Unimodem::getTemporaryCarrierLossEventCount() const
{
	return Uint8(0);
}

Boolean UNIX_Unimodem::getCarrierRenegotiationEventCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CARRIER_RENEGOTIATION_EVENT_COUNT, getCarrierRenegotiationEventCount());
	return true;
}

Uint8 UNIX_Unimodem::getCarrierRenegotiationEventCount() const
{
	return Uint8(0);
}

Boolean UNIX_Unimodem::getErrorControlFrameSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CONTROL_FRAME_SIZE, getErrorControlFrameSize());
	return true;
}

Uint16 UNIX_Unimodem::getErrorControlFrameSize() const
{
	return Uint16(0);
}

Boolean UNIX_Unimodem::getErrorControlLinkTimeouts(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CONTROL_LINK_TIMEOUTS, getErrorControlLinkTimeouts());
	return true;
}

Uint8 UNIX_Unimodem::getErrorControlLinkTimeouts() const
{
	return Uint8(0);
}

Boolean UNIX_Unimodem::getErrorControlLinkNAKs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CONTROL_LINK_N_A_KS, getErrorControlLinkNAKs());
	return true;
}

Uint8 UNIX_Unimodem::getErrorControlLinkNAKs() const
{
	return Uint8(0);
}

Boolean UNIX_Unimodem::getTransmitFlowControl(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSMIT_FLOW_CONTROL, getTransmitFlowControl());
	return true;
}

Uint16 UNIX_Unimodem::getTransmitFlowControl() const
{
	return Uint16(0);
}

Boolean UNIX_Unimodem::getReceiveFlowControl(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECEIVE_FLOW_CONTROL, getReceiveFlowControl());
	return true;
}

Uint16 UNIX_Unimodem::getReceiveFlowControl() const
{
	return Uint16(0);
}

Boolean UNIX_Unimodem::getTransmitCharsSentFromDTE(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSMIT_CHARS_SENT_FROM_D_T_E, getTransmitCharsSentFromDTE());
	return true;
}

Uint64 UNIX_Unimodem::getTransmitCharsSentFromDTE() const
{
	return Uint64(0);
}

Boolean UNIX_Unimodem::getReceiveCharsSentToDTE(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECEIVE_CHARS_SENT_TO_D_T_E, getReceiveCharsSentToDTE());
	return true;
}

Uint64 UNIX_Unimodem::getReceiveCharsSentToDTE() const
{
	return Uint64(0);
}

Boolean UNIX_Unimodem::getTransmitCharsLost(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSMIT_CHARS_LOST, getTransmitCharsLost());
	return true;
}

Uint64 UNIX_Unimodem::getTransmitCharsLost() const
{
	return Uint64(0);
}

Boolean UNIX_Unimodem::getReceiveCharsLost(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECEIVE_CHARS_LOST, getReceiveCharsLost());
	return true;
}

Uint64 UNIX_Unimodem::getReceiveCharsLost() const
{
	return Uint64(0);
}

Boolean UNIX_Unimodem::getTransmitIFrameCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSMIT_I_FRAME_COUNT, getTransmitIFrameCount());
	return true;
}

Uint64 UNIX_Unimodem::getTransmitIFrameCount() const
{
	return Uint64(0);
}

Boolean UNIX_Unimodem::getReceiveIFrameCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECEIVE_I_FRAME_COUNT, getReceiveIFrameCount());
	return true;
}

Uint64 UNIX_Unimodem::getReceiveIFrameCount() const
{
	return Uint64(0);
}

Boolean UNIX_Unimodem::getTransmitIFrameErrorCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSMIT_I_FRAME_ERROR_COUNT, getTransmitIFrameErrorCount());
	return true;
}

Uint64 UNIX_Unimodem::getTransmitIFrameErrorCount() const
{
	return Uint64(0);
}

Boolean UNIX_Unimodem::getReceivedIFrameErrorCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECEIVED_I_FRAME_ERROR_COUNT, getReceivedIFrameErrorCount());
	return true;
}

Uint64 UNIX_Unimodem::getReceivedIFrameErrorCount() const
{
	return Uint64(0);
}

Boolean UNIX_Unimodem::getCallWaitingEventCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CALL_WAITING_EVENT_COUNT, getCallWaitingEventCount());
	return true;
}

Uint8 UNIX_Unimodem::getCallWaitingEventCount() const
{
	return Uint8(0);
}



Boolean UNIX_Unimodem::initialize()
{
	return false;
}

Boolean UNIX_Unimodem::load(int &pIndex)
{
	return false;
}

Boolean UNIX_Unimodem::finalize()
{
	return false;
}

Boolean UNIX_Unimodem::find(Array<CIMKeyBinding> &kbArray)
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
