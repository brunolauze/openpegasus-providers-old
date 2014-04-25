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

#ifndef __UNIX_PRINTER_H
#define __UNIX_PRINTER_H


#include "CIM_LogicalDevice.h"

#include "UNIX_PrinterDeps.h"


#define PROPERTY_PRINTER_STATUS				"PrinterStatus"
#define PROPERTY_DETECTED_ERROR_STATE				"DetectedErrorState"
#define PROPERTY_ERROR_INFORMATION				"ErrorInformation"
#define PROPERTY_PAPER_SIZES_SUPPORTED				"PaperSizesSupported"
#define PROPERTY_PAPER_TYPES_AVAILABLE				"PaperTypesAvailable"
#define PROPERTY_DEFAULT_PAPER_TYPE				"DefaultPaperType"
#define PROPERTY_CURRENT_PAPER_TYPE				"CurrentPaperType"
#define PROPERTY_LANGUAGES_SUPPORTED				"LanguagesSupported"
#define PROPERTY_MIME_TYPES_SUPPORTED				"MimeTypesSupported"
#define PROPERTY_CURRENT_LANGUAGE				"CurrentLanguage"
#define PROPERTY_CURRENT_MIME_TYPE				"CurrentMimeType"
#define PROPERTY_DEFAULT_LANGUAGE				"DefaultLanguage"
#define PROPERTY_DEFAULT_MIME_TYPE				"DefaultMimeType"
#define PROPERTY_JOB_COUNT_SINCE_LAST_RESET				"JobCountSinceLastReset"
#define PROPERTY_TIME_OF_LAST_RESET				"TimeOfLastReset"
#define PROPERTY_CAPABILITIES				"Capabilities"
#define PROPERTY_CAPABILITY_DESCRIPTIONS				"CapabilityDescriptions"
#define PROPERTY_DEFAULT_CAPABILITIES				"DefaultCapabilities"
#define PROPERTY_CURRENT_CAPABILITIES				"CurrentCapabilities"
#define PROPERTY_MAX_COPIES				"MaxCopies"
#define PROPERTY_DEFAULT_COPIES				"DefaultCopies"
#define PROPERTY_MAX_NUMBER_UP				"MaxNumberUp"
#define PROPERTY_DEFAULT_NUMBER_UP				"DefaultNumberUp"
#define PROPERTY_HORIZONTAL_RESOLUTION				"HorizontalResolution"
#define PROPERTY_VERTICAL_RESOLUTION				"VerticalResolution"
#define PROPERTY_CHAR_SETS_SUPPORTED				"CharSetsSupported"
#define PROPERTY_CURRENT_CHAR_SET				"CurrentCharSet"
#define PROPERTY_NATURAL_LANGUAGES_SUPPORTED				"NaturalLanguagesSupported"
#define PROPERTY_CURRENT_NATURAL_LANGUAGE				"CurrentNaturalLanguage"
#define PROPERTY_MAX_SIZE_SUPPORTED				"MaxSizeSupported"
#define PROPERTY_AVAILABLE_JOB_SHEETS				"AvailableJobSheets"
#define PROPERTY_MARKING_TECHNOLOGY				"MarkingTechnology"
#define PROPERTY_CONSOLE_NATURAL_LANGUAGE				"ConsoleNaturalLanguage"
#define PROPERTY_CONSOLE_DISPLAY_BUFFER_TEXT				"ConsoleDisplayBufferText"


class UNIX_Printer :
	public CIM_LogicalDevice
{
public:

	UNIX_Printer();
	~UNIX_Printer();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean finalize();
	virtual Boolean find(Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);

	virtual Boolean getInstanceID(CIMProperty&) const;
	virtual String getInstanceID() const;
	virtual Boolean getCaption(CIMProperty&) const;
	virtual String getCaption() const;
	virtual Boolean getDescription(CIMProperty&) const;
	virtual String getDescription() const;
	virtual Boolean getElementName(CIMProperty&) const;
	virtual String getElementName() const;
	virtual Boolean getInstallDate(CIMProperty&) const;
	virtual CIMDateTime getInstallDate() const;
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual Boolean getOperationalStatus(CIMProperty&) const;
	virtual Array<Uint16> getOperationalStatus() const;
	virtual Boolean getStatusDescriptions(CIMProperty&) const;
	virtual Array<String> getStatusDescriptions() const;
	virtual Boolean getStatus(CIMProperty&) const;
	virtual String getStatus() const;
	virtual Boolean getHealthState(CIMProperty&) const;
	virtual Uint16 getHealthState() const;
	virtual Boolean getCommunicationStatus(CIMProperty&) const;
	virtual Uint16 getCommunicationStatus() const;
	virtual Boolean getDetailedStatus(CIMProperty&) const;
	virtual Uint16 getDetailedStatus() const;
	virtual Boolean getOperatingStatus(CIMProperty&) const;
	virtual Uint16 getOperatingStatus() const;
	virtual Boolean getPrimaryStatus(CIMProperty&) const;
	virtual Uint16 getPrimaryStatus() const;
	virtual Boolean getEnabledState(CIMProperty&) const;
	virtual Uint16 getEnabledState() const;
	virtual Boolean getOtherEnabledState(CIMProperty&) const;
	virtual String getOtherEnabledState() const;
	virtual Boolean getRequestedState(CIMProperty&) const;
	virtual Uint16 getRequestedState() const;
	virtual Boolean getEnabledDefault(CIMProperty&) const;
	virtual Uint16 getEnabledDefault() const;
	virtual Boolean getTimeOfLastStateChange(CIMProperty&) const;
	virtual CIMDateTime getTimeOfLastStateChange() const;
	virtual Boolean getAvailableRequestedStates(CIMProperty&) const;
	virtual Array<Uint16> getAvailableRequestedStates() const;
	virtual Boolean getTransitioningToState(CIMProperty&) const;
	virtual Uint16 getTransitioningToState() const;
	virtual Boolean getSystemCreationClassName(CIMProperty&) const;
	virtual String getSystemCreationClassName() const;
	virtual Boolean getSystemName(CIMProperty&) const;
	virtual String getSystemName() const;
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual Boolean getDeviceID(CIMProperty&) const;
	virtual String getDeviceID() const;
	virtual Boolean getPowerManagementSupported(CIMProperty&) const;
	virtual Boolean getPowerManagementSupported() const;
	virtual Boolean getPowerManagementCapabilities(CIMProperty&) const;
	virtual Array<Uint16> getPowerManagementCapabilities() const;
	virtual Boolean getAvailability(CIMProperty&) const;
	virtual Uint16 getAvailability() const;
	virtual Boolean getStatusInfo(CIMProperty&) const;
	virtual Uint16 getStatusInfo() const;
	virtual Boolean getLastErrorCode(CIMProperty&) const;
	virtual Uint32 getLastErrorCode() const;
	virtual Boolean getErrorDescription(CIMProperty&) const;
	virtual String getErrorDescription() const;
	virtual Boolean getErrorCleared(CIMProperty&) const;
	virtual Boolean getErrorCleared() const;
	virtual Boolean getOtherIdentifyingInfo(CIMProperty&) const;
	virtual Array<String> getOtherIdentifyingInfo() const;
	virtual Boolean getPowerOnHours(CIMProperty&) const;
	virtual Uint64 getPowerOnHours() const;
	virtual Boolean getTotalPowerOnHours(CIMProperty&) const;
	virtual Uint64 getTotalPowerOnHours() const;
	virtual Boolean getIdentifyingDescriptions(CIMProperty&) const;
	virtual Array<String> getIdentifyingDescriptions() const;
	virtual Boolean getAdditionalAvailability(CIMProperty&) const;
	virtual Array<Uint16> getAdditionalAvailability() const;
	virtual Boolean getMaxQuiesceTime(CIMProperty&) const;
	virtual Uint64 getMaxQuiesceTime() const;
	virtual Boolean getPrinterStatus(CIMProperty&) const;
	virtual Uint16 getPrinterStatus() const;
	virtual Boolean getDetectedErrorState(CIMProperty&) const;
	virtual Uint16 getDetectedErrorState() const;
	virtual Boolean getErrorInformation(CIMProperty&) const;
	virtual Array<String> getErrorInformation() const;
	virtual Boolean getPaperSizesSupported(CIMProperty&) const;
	virtual Array<Uint16> getPaperSizesSupported() const;
	virtual Boolean getPaperTypesAvailable(CIMProperty&) const;
	virtual Array<String> getPaperTypesAvailable() const;
	virtual Boolean getDefaultPaperType(CIMProperty&) const;
	virtual String getDefaultPaperType() const;
	virtual Boolean getCurrentPaperType(CIMProperty&) const;
	virtual String getCurrentPaperType() const;
	virtual Boolean getLanguagesSupported(CIMProperty&) const;
	virtual Array<Uint16> getLanguagesSupported() const;
	virtual Boolean getMimeTypesSupported(CIMProperty&) const;
	virtual Array<String> getMimeTypesSupported() const;
	virtual Boolean getCurrentLanguage(CIMProperty&) const;
	virtual Uint16 getCurrentLanguage() const;
	virtual Boolean getCurrentMimeType(CIMProperty&) const;
	virtual String getCurrentMimeType() const;
	virtual Boolean getDefaultLanguage(CIMProperty&) const;
	virtual Uint16 getDefaultLanguage() const;
	virtual Boolean getDefaultMimeType(CIMProperty&) const;
	virtual String getDefaultMimeType() const;
	virtual Boolean getJobCountSinceLastReset(CIMProperty&) const;
	virtual Uint32 getJobCountSinceLastReset() const;
	virtual Boolean getTimeOfLastReset(CIMProperty&) const;
	virtual CIMDateTime getTimeOfLastReset() const;
	virtual Boolean getCapabilities(CIMProperty&) const;
	virtual Array<Uint16> getCapabilities() const;
	virtual Boolean getCapabilityDescriptions(CIMProperty&) const;
	virtual Array<String> getCapabilityDescriptions() const;
	virtual Boolean getDefaultCapabilities(CIMProperty&) const;
	virtual Array<Uint16> getDefaultCapabilities() const;
	virtual Boolean getCurrentCapabilities(CIMProperty&) const;
	virtual Array<Uint16> getCurrentCapabilities() const;
	virtual Boolean getMaxCopies(CIMProperty&) const;
	virtual Uint32 getMaxCopies() const;
	virtual Boolean getDefaultCopies(CIMProperty&) const;
	virtual Uint32 getDefaultCopies() const;
	virtual Boolean getMaxNumberUp(CIMProperty&) const;
	virtual Uint32 getMaxNumberUp() const;
	virtual Boolean getDefaultNumberUp(CIMProperty&) const;
	virtual Uint32 getDefaultNumberUp() const;
	virtual Boolean getHorizontalResolution(CIMProperty&) const;
	virtual Uint32 getHorizontalResolution() const;
	virtual Boolean getVerticalResolution(CIMProperty&) const;
	virtual Uint32 getVerticalResolution() const;
	virtual Boolean getCharSetsSupported(CIMProperty&) const;
	virtual Array<String> getCharSetsSupported() const;
	virtual Boolean getCurrentCharSet(CIMProperty&) const;
	virtual String getCurrentCharSet() const;
	virtual Boolean getNaturalLanguagesSupported(CIMProperty&) const;
	virtual Array<String> getNaturalLanguagesSupported() const;
	virtual Boolean getCurrentNaturalLanguage(CIMProperty&) const;
	virtual String getCurrentNaturalLanguage() const;
	virtual Boolean getMaxSizeSupported(CIMProperty&) const;
	virtual Uint32 getMaxSizeSupported() const;
	virtual Boolean getAvailableJobSheets(CIMProperty&) const;
	virtual Array<String> getAvailableJobSheets() const;
	virtual Boolean getMarkingTechnology(CIMProperty&) const;
	virtual Uint16 getMarkingTechnology() const;
	virtual Boolean getConsoleNaturalLanguage(CIMProperty&) const;
	virtual String getConsoleNaturalLanguage() const;
	virtual Boolean getConsoleDisplayBufferText(CIMProperty&) const;
	virtual Array<String> getConsoleDisplayBufferText() const;

private:
	CIMName currentScope;

#	include "UNIX_PrinterPrivate.h"


};

#endif /* UNIX_PRINTER */
