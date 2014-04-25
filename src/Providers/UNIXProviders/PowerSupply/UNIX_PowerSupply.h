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

#ifndef __UNIX_POWERSUPPLY_H
#define __UNIX_POWERSUPPLY_H


#include "CIM_LogicalDevice.h"

#include "UNIX_PowerSupplyDeps.h"


#define PROPERTY_IS_SWITCHING_SUPPLY				"IsSwitchingSupply"
#define PROPERTY_RANGE_1_INPUT_VOLTAGE_LOW				"Range1InputVoltageLow"
#define PROPERTY_RANGE_1_INPUT_VOLTAGE_HIGH				"Range1InputVoltageHigh"
#define PROPERTY_RANGE_1_INPUT_FREQUENCY_LOW				"Range1InputFrequencyLow"
#define PROPERTY_RANGE_1_INPUT_FREQUENCY_HIGH				"Range1InputFrequencyHigh"
#define PROPERTY_RANGE_2_INPUT_VOLTAGE_LOW				"Range2InputVoltageLow"
#define PROPERTY_RANGE_2_INPUT_VOLTAGE_HIGH				"Range2InputVoltageHigh"
#define PROPERTY_RANGE_2_INPUT_FREQUENCY_LOW				"Range2InputFrequencyLow"
#define PROPERTY_RANGE_2_INPUT_FREQUENCY_HIGH				"Range2InputFrequencyHigh"
#define PROPERTY_ACTIVE_INPUT_VOLTAGE				"ActiveInputVoltage"
#define PROPERTY_TYPE_OF_RANGE_SWITCHING				"TypeOfRangeSwitching"
#define PROPERTY_TOTAL_OUTPUT_POWER				"TotalOutputPower"


class UNIX_PowerSupply :
	public CIM_LogicalDevice
{
public:

	UNIX_PowerSupply();
	~UNIX_PowerSupply();

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
	virtual Boolean getIsSwitchingSupply(CIMProperty&) const;
	virtual Boolean getIsSwitchingSupply() const;
	virtual Boolean getRange1InputVoltageLow(CIMProperty&) const;
	virtual Uint32 getRange1InputVoltageLow() const;
	virtual Boolean getRange1InputVoltageHigh(CIMProperty&) const;
	virtual Uint32 getRange1InputVoltageHigh() const;
	virtual Boolean getRange1InputFrequencyLow(CIMProperty&) const;
	virtual Uint32 getRange1InputFrequencyLow() const;
	virtual Boolean getRange1InputFrequencyHigh(CIMProperty&) const;
	virtual Uint32 getRange1InputFrequencyHigh() const;
	virtual Boolean getRange2InputVoltageLow(CIMProperty&) const;
	virtual Uint32 getRange2InputVoltageLow() const;
	virtual Boolean getRange2InputVoltageHigh(CIMProperty&) const;
	virtual Uint32 getRange2InputVoltageHigh() const;
	virtual Boolean getRange2InputFrequencyLow(CIMProperty&) const;
	virtual Uint32 getRange2InputFrequencyLow() const;
	virtual Boolean getRange2InputFrequencyHigh(CIMProperty&) const;
	virtual Uint32 getRange2InputFrequencyHigh() const;
	virtual Boolean getActiveInputVoltage(CIMProperty&) const;
	virtual Uint16 getActiveInputVoltage() const;
	virtual Boolean getTypeOfRangeSwitching(CIMProperty&) const;
	virtual Uint16 getTypeOfRangeSwitching() const;
	virtual Boolean getTotalOutputPower(CIMProperty&) const;
	virtual Uint32 getTotalOutputPower() const;

private:
	CIMName currentScope;

#	include "UNIX_PowerSupplyPrivate.h"


};

#endif /* UNIX_POWERSUPPLY */
