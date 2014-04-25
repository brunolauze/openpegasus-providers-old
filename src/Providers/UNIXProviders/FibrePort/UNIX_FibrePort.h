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

#ifndef __UNIX_FIBREPORT_H
#define __UNIX_FIBREPORT_H


#include "CIM_LogicalPort.h"

#include "UNIX_FibrePortDeps.h"


#define PROPERTY_ADDRESS_IDENTIFIER				"AddressIdentifier"
#define PROPERTY_SUPPORTED_PORT_TYPES				"SupportedPortTypes"
#define PROPERTY_PORT_TYPE_VERSIONS				"PortTypeVersions"
#define PROPERTY_ENABLED_PORT_TYPES				"EnabledPortTypes"
#define PROPERTY_ENABLED_VERSIONS				"EnabledVersions"
#define PROPERTY_CURRENT_PORT_TYPE				"CurrentPortType"
#define PROPERTY_CURRENT_VERSION				"CurrentVersion"
#define PROPERTY_ALIAS_ADDRESSES				"AliasAddresses"
#define PROPERTY_LOSS_OF_SIGNAL_COUNTER				"LossOfSignalCounter"
#define PROPERTY_LOSS_OF_SYNC_COUNTER				"LossOfSyncCounter"
#define PROPERTY_C_R_C_ERRORS				"CRCErrors"
#define PROPERTY_INVALID_TRANSMISSION_WORDS				"InvalidTransmissionWords"
#define PROPERTY_FRAMES_TOO_SHORT				"FramesTooShort"
#define PROPERTY_FRAMES_TOO_LONG				"FramesTooLong"
#define PROPERTY_ELASTICITY_BUFFER_UNDERRUNS				"ElasticityBufferUnderruns"
#define PROPERTY_ELASTICITY_BUFFER_OVERRUNS				"ElasticityBufferOverruns"
#define PROPERTY_RECEIVER_TRANSMITTER_TIMEOUT				"ReceiverTransmitterTimeout"
#define PROPERTY_BYPASSED_STATE				"BypassedState"
#define PROPERTY_CONNECTED_MEDIA				"ConnectedMedia"


class UNIX_FibrePort :
	public CIM_LogicalPort
{
public:

	UNIX_FibrePort();
	~UNIX_FibrePort();

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
	virtual Boolean getSpeed(CIMProperty&) const;
	virtual Uint64 getSpeed() const;
	virtual Boolean getMaxSpeed(CIMProperty&) const;
	virtual Uint64 getMaxSpeed() const;
	virtual Boolean getRequestedSpeed(CIMProperty&) const;
	virtual Uint64 getRequestedSpeed() const;
	virtual Boolean getUsageRestriction(CIMProperty&) const;
	virtual Uint16 getUsageRestriction() const;
	virtual Boolean getPortType(CIMProperty&) const;
	virtual Uint16 getPortType() const;
	virtual Boolean getOtherPortType(CIMProperty&) const;
	virtual String getOtherPortType() const;
	virtual Boolean getAddressIdentifier(CIMProperty&) const;
	virtual Uint32 getAddressIdentifier() const;
	virtual Boolean getSupportedPortTypes(CIMProperty&) const;
	virtual Array<Uint16> getSupportedPortTypes() const;
	virtual Boolean getPortTypeVersions(CIMProperty&) const;
	virtual Array<String> getPortTypeVersions() const;
	virtual Boolean getEnabledPortTypes(CIMProperty&) const;
	virtual Array<Uint16> getEnabledPortTypes() const;
	virtual Boolean getEnabledVersions(CIMProperty&) const;
	virtual Array<String> getEnabledVersions() const;
	virtual Boolean getCurrentPortType(CIMProperty&) const;
	virtual Uint16 getCurrentPortType() const;
	virtual Boolean getCurrentVersion(CIMProperty&) const;
	virtual String getCurrentVersion() const;
	virtual Boolean getAliasAddresses(CIMProperty&) const;
	virtual Array<Uint32> getAliasAddresses() const;
	virtual Boolean getLossOfSignalCounter(CIMProperty&) const;
	virtual Uint64 getLossOfSignalCounter() const;
	virtual Boolean getLossOfSyncCounter(CIMProperty&) const;
	virtual Uint64 getLossOfSyncCounter() const;
	virtual Boolean getCRCErrors(CIMProperty&) const;
	virtual Uint64 getCRCErrors() const;
	virtual Boolean getInvalidTransmissionWords(CIMProperty&) const;
	virtual Uint64 getInvalidTransmissionWords() const;
	virtual Boolean getFramesTooShort(CIMProperty&) const;
	virtual Uint64 getFramesTooShort() const;
	virtual Boolean getFramesTooLong(CIMProperty&) const;
	virtual Uint64 getFramesTooLong() const;
	virtual Boolean getElasticityBufferUnderruns(CIMProperty&) const;
	virtual Uint64 getElasticityBufferUnderruns() const;
	virtual Boolean getElasticityBufferOverruns(CIMProperty&) const;
	virtual Uint64 getElasticityBufferOverruns() const;
	virtual Boolean getReceiverTransmitterTimeout(CIMProperty&) const;
	virtual Uint64 getReceiverTransmitterTimeout() const;
	virtual Boolean getBypassedState(CIMProperty&) const;
	virtual Uint16 getBypassedState() const;
	virtual Boolean getConnectedMedia(CIMProperty&) const;
	virtual Uint16 getConnectedMedia() const;

private:
	CIMName currentScope;

#	include "UNIX_FibrePortPrivate.h"


};

#endif /* UNIX_FIBREPORT */
