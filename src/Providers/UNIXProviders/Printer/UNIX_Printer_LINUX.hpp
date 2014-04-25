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


UNIX_Printer::UNIX_Printer(void)
{
}

UNIX_Printer::~UNIX_Printer(void)
{
}


Boolean UNIX_Printer::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_Printer::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_Printer::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_Printer::getCaption() const
{
	return String ("");
}

Boolean UNIX_Printer::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_Printer::getDescription() const
{
	return String ("");
}

Boolean UNIX_Printer::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_Printer::getElementName() const
{
	return String("Printer");
}

Boolean UNIX_Printer::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_Printer::getInstallDate() const
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

Boolean UNIX_Printer::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_Printer::getName() const
{
	return String ("");
}

Boolean UNIX_Printer::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_Printer::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Printer::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_Printer::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Printer::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_Printer::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_Printer::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_Printer::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_Printer::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_Printer::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_Printer::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_Printer::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_Printer::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_Printer::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_Printer::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_Printer::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_Printer::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_Printer::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_Printer::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_Printer::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_Printer::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_Printer::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_Printer::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_Printer::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_Printer::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_Printer::getTimeOfLastStateChange() const
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

Boolean UNIX_Printer::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_Printer::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Printer::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_Printer::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_Printer::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_Printer::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_Printer::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_Printer::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_Printer::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_Printer::getCreationClassName() const
{
	return String("UNIX_Printer");
}

Boolean UNIX_Printer::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_Printer::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_Printer::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_Printer::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_Printer::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_Printer::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Printer::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_Printer::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_Printer::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_Printer::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_Printer::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_Printer::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_Printer::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_Printer::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_Printer::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_Printer::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_Printer::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_Printer::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Printer::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_Printer::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_Printer::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_Printer::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_Printer::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_Printer::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Printer::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_Printer::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Printer::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_Printer::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_Printer::getPrinterStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRINTER_STATUS, getPrinterStatus());
	return true;
}

Uint16 UNIX_Printer::getPrinterStatus() const
{
	return Uint16(0);
}

Boolean UNIX_Printer::getDetectedErrorState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETECTED_ERROR_STATE, getDetectedErrorState());
	return true;
}

Uint16 UNIX_Printer::getDetectedErrorState() const
{
	return Uint16(0);
}

Boolean UNIX_Printer::getErrorInformation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_INFORMATION, getErrorInformation());
	return true;
}

Array<String> UNIX_Printer::getErrorInformation() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Printer::getPaperSizesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PAPER_SIZES_SUPPORTED, getPaperSizesSupported());
	return true;
}

Array<Uint16> UNIX_Printer::getPaperSizesSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Printer::getPaperTypesAvailable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PAPER_TYPES_AVAILABLE, getPaperTypesAvailable());
	return true;
}

Array<String> UNIX_Printer::getPaperTypesAvailable() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Printer::getDefaultPaperType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_PAPER_TYPE, getDefaultPaperType());
	return true;
}

String UNIX_Printer::getDefaultPaperType() const
{
	return String ("");
}

Boolean UNIX_Printer::getCurrentPaperType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_PAPER_TYPE, getCurrentPaperType());
	return true;
}

String UNIX_Printer::getCurrentPaperType() const
{
	return String ("");
}

Boolean UNIX_Printer::getLanguagesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LANGUAGES_SUPPORTED, getLanguagesSupported());
	return true;
}

Array<Uint16> UNIX_Printer::getLanguagesSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Printer::getMimeTypesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIME_TYPES_SUPPORTED, getMimeTypesSupported());
	return true;
}

Array<String> UNIX_Printer::getMimeTypesSupported() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Printer::getCurrentLanguage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_LANGUAGE, getCurrentLanguage());
	return true;
}

Uint16 UNIX_Printer::getCurrentLanguage() const
{
	return Uint16(0);
}

Boolean UNIX_Printer::getCurrentMimeType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_MIME_TYPE, getCurrentMimeType());
	return true;
}

String UNIX_Printer::getCurrentMimeType() const
{
	return String ("");
}

Boolean UNIX_Printer::getDefaultLanguage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_LANGUAGE, getDefaultLanguage());
	return true;
}

Uint16 UNIX_Printer::getDefaultLanguage() const
{
	return Uint16(0);
}

Boolean UNIX_Printer::getDefaultMimeType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_MIME_TYPE, getDefaultMimeType());
	return true;
}

String UNIX_Printer::getDefaultMimeType() const
{
	return String ("");
}

Boolean UNIX_Printer::getJobCountSinceLastReset(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_JOB_COUNT_SINCE_LAST_RESET, getJobCountSinceLastReset());
	return true;
}

Uint32 UNIX_Printer::getJobCountSinceLastReset() const
{
	return Uint32(0);
}

Boolean UNIX_Printer::getTimeOfLastReset(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_RESET, getTimeOfLastReset());
	return true;
}

CIMDateTime UNIX_Printer::getTimeOfLastReset() const
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

Boolean UNIX_Printer::getCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITIES, getCapabilities());
	return true;
}

Array<Uint16> UNIX_Printer::getCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Printer::getCapabilityDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITY_DESCRIPTIONS, getCapabilityDescriptions());
	return true;
}

Array<String> UNIX_Printer::getCapabilityDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Printer::getDefaultCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_CAPABILITIES, getDefaultCapabilities());
	return true;
}

Array<Uint16> UNIX_Printer::getDefaultCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Printer::getCurrentCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_CAPABILITIES, getCurrentCapabilities());
	return true;
}

Array<Uint16> UNIX_Printer::getCurrentCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Printer::getMaxCopies(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_COPIES, getMaxCopies());
	return true;
}

Uint32 UNIX_Printer::getMaxCopies() const
{
	return Uint32(0);
}

Boolean UNIX_Printer::getDefaultCopies(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_COPIES, getDefaultCopies());
	return true;
}

Uint32 UNIX_Printer::getDefaultCopies() const
{
	return Uint32(0);
}

Boolean UNIX_Printer::getMaxNumberUp(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_NUMBER_UP, getMaxNumberUp());
	return true;
}

Uint32 UNIX_Printer::getMaxNumberUp() const
{
	return Uint32(0);
}

Boolean UNIX_Printer::getDefaultNumberUp(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_NUMBER_UP, getDefaultNumberUp());
	return true;
}

Uint32 UNIX_Printer::getDefaultNumberUp() const
{
	return Uint32(0);
}

Boolean UNIX_Printer::getHorizontalResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HORIZONTAL_RESOLUTION, getHorizontalResolution());
	return true;
}

Uint32 UNIX_Printer::getHorizontalResolution() const
{
	return Uint32(0);
}

Boolean UNIX_Printer::getVerticalResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERTICAL_RESOLUTION, getVerticalResolution());
	return true;
}

Uint32 UNIX_Printer::getVerticalResolution() const
{
	return Uint32(0);
}

Boolean UNIX_Printer::getCharSetsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHAR_SETS_SUPPORTED, getCharSetsSupported());
	return true;
}

Array<String> UNIX_Printer::getCharSetsSupported() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Printer::getCurrentCharSet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_CHAR_SET, getCurrentCharSet());
	return true;
}

String UNIX_Printer::getCurrentCharSet() const
{
	return String ("");
}

Boolean UNIX_Printer::getNaturalLanguagesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NATURAL_LANGUAGES_SUPPORTED, getNaturalLanguagesSupported());
	return true;
}

Array<String> UNIX_Printer::getNaturalLanguagesSupported() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Printer::getCurrentNaturalLanguage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_NATURAL_LANGUAGE, getCurrentNaturalLanguage());
	return true;
}

String UNIX_Printer::getCurrentNaturalLanguage() const
{
	return String ("");
}

Boolean UNIX_Printer::getMaxSizeSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_SIZE_SUPPORTED, getMaxSizeSupported());
	return true;
}

Uint32 UNIX_Printer::getMaxSizeSupported() const
{
	return Uint32(0);
}

Boolean UNIX_Printer::getAvailableJobSheets(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_JOB_SHEETS, getAvailableJobSheets());
	return true;
}

Array<String> UNIX_Printer::getAvailableJobSheets() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Printer::getMarkingTechnology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MARKING_TECHNOLOGY, getMarkingTechnology());
	return true;
}

Uint16 UNIX_Printer::getMarkingTechnology() const
{
	return Uint16(0);
}

Boolean UNIX_Printer::getConsoleNaturalLanguage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONSOLE_NATURAL_LANGUAGE, getConsoleNaturalLanguage());
	return true;
}

String UNIX_Printer::getConsoleNaturalLanguage() const
{
	return String ("");
}

Boolean UNIX_Printer::getConsoleDisplayBufferText(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONSOLE_DISPLAY_BUFFER_TEXT, getConsoleDisplayBufferText());
	return true;
}

Array<String> UNIX_Printer::getConsoleDisplayBufferText() const
{
	Array<String> as;
	

	return as;

}



Boolean UNIX_Printer::initialize()
{
	return false;
}

Boolean UNIX_Printer::load(int &pIndex)
{
	return false;
}

Boolean UNIX_Printer::finalize()
{
	return false;
}

Boolean UNIX_Printer::find(Array<CIMKeyBinding> &kbArray)
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
