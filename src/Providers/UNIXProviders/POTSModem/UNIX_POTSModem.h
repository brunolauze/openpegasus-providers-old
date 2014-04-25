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

#ifndef __UNIX_POTSMODEM_H
#define __UNIX_POTSMODEM_H


#include "CIM_CallBasedModem.h"

#include "UNIX_POTSModemDeps.h"


#define PROPERTY_CAPABILITIES				"Capabilities"
#define PROPERTY_CAPABILITY_DESCRIPTIONS				"CapabilityDescriptions"
#define PROPERTY_ENABLED_CAPABILITIES				"EnabledCapabilities"
#define PROPERTY_MAX_BAUD_RATE_TO_SERIAL_PORT				"MaxBaudRateToSerialPort"
#define PROPERTY_MAX_BAUD_RATE_TO_PHONE				"MaxBaudRateToPhone"
#define PROPERTY_SUPPORTS_SYNCHRONOUS_CONNECT				"SupportsSynchronousConnect"
#define PROPERTY_DIAL_TYPE				"DialType"
#define PROPERTY_INACTIVITY_TIMEOUT				"InactivityTimeout"
#define PROPERTY_SPEAKER_VOLUME_INFO				"SpeakerVolumeInfo"
#define PROPERTY_COUNTRIES_SUPPORTED				"CountriesSupported"
#define PROPERTY_COUNTRY_SELECTED				"CountrySelected"
#define PROPERTY_RINGS_BEFORE_ANSWER				"RingsBeforeAnswer"
#define PROPERTY_MAX_NUMBER_OF_PASSWORDS				"MaxNumberOfPasswords"
#define PROPERTY_CURRENT_PASSWORDS				"CurrentPasswords"
#define PROPERTY_SUPPORTS_CALLBACK				"SupportsCallback"
#define PROPERTY_ANSWER_MODE				"AnswerMode"
#define PROPERTY_EQUALIZATION				"Equalization"
#define PROPERTY_BLACK_LISTED_NUMBERS				"BlackListedNumbers"


class UNIX_POTSModem :
	public CIM_CallBasedModem
{
public:

	UNIX_POTSModem();
	~UNIX_POTSModem();

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
	virtual Boolean getFallbackEnabled(CIMProperty&) const;
	virtual Boolean getFallbackEnabled() const;
	virtual Boolean getCompressionSupported(CIMProperty&) const;
	virtual Array<Uint16> getCompressionSupported() const;
	virtual Boolean getOtherCompressionDescription(CIMProperty&) const;
	virtual String getOtherCompressionDescription() const;
	virtual Boolean getCompressionInfo(CIMProperty&) const;
	virtual Uint16 getCompressionInfo() const;
	virtual Boolean getOtherCompressionInfoDescription(CIMProperty&) const;
	virtual String getOtherCompressionInfoDescription() const;
	virtual Boolean getModulationSupported(CIMProperty&) const;
	virtual Array<Uint16> getModulationSupported() const;
	virtual Boolean getOtherModulationDescription(CIMProperty&) const;
	virtual String getOtherModulationDescription() const;
	virtual Boolean getModulationScheme(CIMProperty&) const;
	virtual Uint16 getModulationScheme() const;
	virtual Boolean getOtherSchemeDescription(CIMProperty&) const;
	virtual String getOtherSchemeDescription() const;
	virtual Boolean getErrorControlSupported(CIMProperty&) const;
	virtual Array<Uint16> getErrorControlSupported() const;
	virtual Boolean getOtherErrorControlDescription(CIMProperty&) const;
	virtual String getOtherErrorControlDescription() const;
	virtual Boolean getErrorControlInfo(CIMProperty&) const;
	virtual Uint16 getErrorControlInfo() const;
	virtual Boolean getOtherErrorControlInfoDescription(CIMProperty&) const;
	virtual String getOtherErrorControlInfoDescription() const;
	virtual Boolean getTimeOfLastReset(CIMProperty&) const;
	virtual CIMDateTime getTimeOfLastReset() const;
	virtual Boolean getCallSpeed(CIMProperty&) const;
	virtual Uint32 getCallSpeed() const;
	virtual Boolean getCallStatus(CIMProperty&) const;
	virtual Uint16 getCallStatus() const;
	virtual Boolean getCharsSent(CIMProperty&) const;
	virtual Uint32 getCharsSent() const;
	virtual Boolean getCharsReceived(CIMProperty&) const;
	virtual Uint32 getCharsReceived() const;
	virtual Boolean getCharsLost(CIMProperty&) const;
	virtual Uint32 getCharsLost() const;
	virtual Boolean getBlocksSent(CIMProperty&) const;
	virtual Uint32 getBlocksSent() const;
	virtual Boolean getBlocksResent(CIMProperty&) const;
	virtual Uint32 getBlocksResent() const;
	virtual Boolean getBlocksReceived(CIMProperty&) const;
	virtual Uint32 getBlocksReceived() const;
	virtual Boolean getBlockErrors(CIMProperty&) const;
	virtual Uint32 getBlockErrors() const;
	virtual Boolean getCallLength(CIMProperty&) const;
	virtual CIMDateTime getCallLength() const;
	virtual Boolean getNumberDialed(CIMProperty&) const;
	virtual String getNumberDialed() const;
	virtual Boolean getCapabilities(CIMProperty&) const;
	virtual Array<Uint16> getCapabilities() const;
	virtual Boolean getCapabilityDescriptions(CIMProperty&) const;
	virtual Array<String> getCapabilityDescriptions() const;
	virtual Boolean getEnabledCapabilities(CIMProperty&) const;
	virtual Array<Uint16> getEnabledCapabilities() const;
	virtual Boolean getMaxBaudRateToSerialPort(CIMProperty&) const;
	virtual Uint32 getMaxBaudRateToSerialPort() const;
	virtual Boolean getMaxBaudRateToPhone(CIMProperty&) const;
	virtual Uint32 getMaxBaudRateToPhone() const;
	virtual Boolean getSupportsSynchronousConnect(CIMProperty&) const;
	virtual Boolean getSupportsSynchronousConnect() const;
	virtual Boolean getDialType(CIMProperty&) const;
	virtual Uint16 getDialType() const;
	virtual Boolean getInactivityTimeout(CIMProperty&) const;
	virtual Uint32 getInactivityTimeout() const;
	virtual Boolean getSpeakerVolumeInfo(CIMProperty&) const;
	virtual Uint16 getSpeakerVolumeInfo() const;
	virtual Boolean getCountriesSupported(CIMProperty&) const;
	virtual Array<String> getCountriesSupported() const;
	virtual Boolean getCountrySelected(CIMProperty&) const;
	virtual String getCountrySelected() const;
	virtual Boolean getRingsBeforeAnswer(CIMProperty&) const;
	virtual Uint8 getRingsBeforeAnswer() const;
	virtual Boolean getMaxNumberOfPasswords(CIMProperty&) const;
	virtual Uint16 getMaxNumberOfPasswords() const;
	virtual Boolean getCurrentPasswords(CIMProperty&) const;
	virtual Array<String> getCurrentPasswords() const;
	virtual Boolean getSupportsCallback(CIMProperty&) const;
	virtual Boolean getSupportsCallback() const;
	virtual Boolean getAnswerMode(CIMProperty&) const;
	virtual Uint16 getAnswerMode() const;
	virtual Boolean getEqualization(CIMProperty&) const;
	virtual Uint16 getEqualization() const;
	virtual Boolean getBlackListedNumbers(CIMProperty&) const;
	virtual Array<String> getBlackListedNumbers() const;

private:
	CIMName currentScope;

#	include "UNIX_POTSModemPrivate.h"


};

#endif /* UNIX_POTSMODEM */
