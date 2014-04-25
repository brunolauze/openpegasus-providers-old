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

#ifndef __UNIX_PROCESSOR_H
#define __UNIX_PROCESSOR_H


#include "CIM_LogicalDevice.h"

#include "UNIX_ProcessorDeps.h"


#define PROPERTY_ROLE				"Role"
#define PROPERTY_FAMILY				"Family"
#define PROPERTY_OTHER_FAMILY_DESCRIPTION				"OtherFamilyDescription"
#define PROPERTY_UPGRADE_METHOD				"UpgradeMethod"
#define PROPERTY_MAX_CLOCK_SPEED				"MaxClockSpeed"
#define PROPERTY_CURRENT_CLOCK_SPEED				"CurrentClockSpeed"
#define PROPERTY_DATA_WIDTH				"DataWidth"
#define PROPERTY_ADDRESS_WIDTH				"AddressWidth"
#define PROPERTY_LOAD_PERCENTAGE				"LoadPercentage"
#define PROPERTY_STEPPING				"Stepping"
#define PROPERTY_UNIQUE_ID				"UniqueID"
#define PROPERTY_C_P_U_STATUS				"CPUStatus"
#define PROPERTY_EXTERNAL_BUS_CLOCK_SPEED				"ExternalBusClockSpeed"
#define PROPERTY_CHARACTERISTICS				"Characteristics"
#define PROPERTY_ENABLED_PROCESSOR_CHARACTERISTICS				"EnabledProcessorCharacteristics"
#define PROPERTY_NUMBER_OF_ENABLED_CORES				"NumberOfEnabledCores"


class UNIX_Processor :
	public CIM_LogicalDevice
{
public:

	UNIX_Processor();
	~UNIX_Processor();

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
	virtual Boolean getRole(CIMProperty&) const;
	virtual String getRole() const;
	virtual Boolean getFamily(CIMProperty&) const;
	virtual Uint16 getFamily() const;
	virtual Boolean getOtherFamilyDescription(CIMProperty&) const;
	virtual String getOtherFamilyDescription() const;
	virtual Boolean getUpgradeMethod(CIMProperty&) const;
	virtual Uint16 getUpgradeMethod() const;
	virtual Boolean getMaxClockSpeed(CIMProperty&) const;
	virtual Uint32 getMaxClockSpeed() const;
	virtual Boolean getCurrentClockSpeed(CIMProperty&) const;
	virtual Uint32 getCurrentClockSpeed() const;
	virtual Boolean getDataWidth(CIMProperty&) const;
	virtual Uint16 getDataWidth() const;
	virtual Boolean getAddressWidth(CIMProperty&) const;
	virtual Uint16 getAddressWidth() const;
	virtual Boolean getLoadPercentage(CIMProperty&) const;
	virtual Uint16 getLoadPercentage() const;
	virtual Boolean getStepping(CIMProperty&) const;
	virtual String getStepping() const;
	virtual Boolean getUniqueID(CIMProperty&) const;
	virtual String getUniqueID() const;
	virtual Boolean getCPUStatus(CIMProperty&) const;
	virtual Uint16 getCPUStatus() const;
	virtual Boolean getExternalBusClockSpeed(CIMProperty&) const;
	virtual Uint32 getExternalBusClockSpeed() const;
	virtual Boolean getCharacteristics(CIMProperty&) const;
	virtual Array<Uint16> getCharacteristics() const;
	virtual Boolean getEnabledProcessorCharacteristics(CIMProperty&) const;
	virtual Array<Uint16> getEnabledProcessorCharacteristics() const;
	virtual Boolean getNumberOfEnabledCores(CIMProperty&) const;
	virtual Uint16 getNumberOfEnabledCores() const;

private:
	CIMName currentScope;

#	include "UNIX_ProcessorPrivate.h"


};

#endif /* UNIX_PROCESSOR */
