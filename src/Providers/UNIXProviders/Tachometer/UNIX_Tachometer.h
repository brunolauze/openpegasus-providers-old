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

#ifndef __UNIX_TACHOMETER_H
#define __UNIX_TACHOMETER_H


#include "CIM_NumericSensor.h"

#include "UNIX_TachometerDeps.h"




class UNIX_Tachometer :
	public CIM_NumericSensor
{
public:

	UNIX_Tachometer();
	~UNIX_Tachometer();

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
	virtual Boolean getSensorType(CIMProperty&) const;
	virtual Uint16 getSensorType() const;
	virtual Boolean getOtherSensorTypeDescription(CIMProperty&) const;
	virtual String getOtherSensorTypeDescription() const;
	virtual Boolean getPossibleStates(CIMProperty&) const;
	virtual Array<String> getPossibleStates() const;
	virtual Boolean getCurrentState(CIMProperty&) const;
	virtual String getCurrentState() const;
	virtual Boolean getPollingInterval(CIMProperty&) const;
	virtual Uint64 getPollingInterval() const;
	virtual Boolean getSensorContext(CIMProperty&) const;
	virtual String getSensorContext() const;
	virtual Boolean getBaseUnits(CIMProperty&) const;
	virtual Uint16 getBaseUnits() const;
	virtual Boolean getUnitModifier(CIMProperty&) const;
	virtual Sint32 getUnitModifier() const;
	virtual Boolean getRateUnits(CIMProperty&) const;
	virtual Uint16 getRateUnits() const;
	virtual Boolean getCurrentReading(CIMProperty&) const;
	virtual Sint32 getCurrentReading() const;
	virtual Boolean getNominalReading(CIMProperty&) const;
	virtual Sint32 getNominalReading() const;
	virtual Boolean getNormalMax(CIMProperty&) const;
	virtual Sint32 getNormalMax() const;
	virtual Boolean getNormalMin(CIMProperty&) const;
	virtual Sint32 getNormalMin() const;
	virtual Boolean getMaxReadable(CIMProperty&) const;
	virtual Sint32 getMaxReadable() const;
	virtual Boolean getMinReadable(CIMProperty&) const;
	virtual Sint32 getMinReadable() const;
	virtual Boolean getResolution(CIMProperty&) const;
	virtual Uint32 getResolution() const;
	virtual Boolean getTolerance(CIMProperty&) const;
	virtual Sint32 getTolerance() const;
	virtual Boolean getAccuracy(CIMProperty&) const;
	virtual Sint32 getAccuracy() const;
	virtual Boolean getIsLinear(CIMProperty&) const;
	virtual Boolean getIsLinear() const;
	virtual Boolean getHysteresis(CIMProperty&) const;
	virtual Uint32 getHysteresis() const;
	virtual Boolean getLowerThresholdNonCritical(CIMProperty&) const;
	virtual Sint32 getLowerThresholdNonCritical() const;
	virtual Boolean getUpperThresholdNonCritical(CIMProperty&) const;
	virtual Sint32 getUpperThresholdNonCritical() const;
	virtual Boolean getLowerThresholdCritical(CIMProperty&) const;
	virtual Sint32 getLowerThresholdCritical() const;
	virtual Boolean getUpperThresholdCritical(CIMProperty&) const;
	virtual Sint32 getUpperThresholdCritical() const;
	virtual Boolean getLowerThresholdFatal(CIMProperty&) const;
	virtual Sint32 getLowerThresholdFatal() const;
	virtual Boolean getUpperThresholdFatal(CIMProperty&) const;
	virtual Sint32 getUpperThresholdFatal() const;
	virtual Boolean getSupportedThresholds(CIMProperty&) const;
	virtual Array<Uint16> getSupportedThresholds() const;
	virtual Boolean getEnabledThresholds(CIMProperty&) const;
	virtual Array<Uint16> getEnabledThresholds() const;
	virtual Boolean getSettableThresholds(CIMProperty&) const;
	virtual Array<Uint16> getSettableThresholds() const;

private:
	CIMName currentScope;

#	include "UNIX_TachometerPrivate.h"


};

#endif /* UNIX_TACHOMETER */
