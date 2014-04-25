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

#ifndef __UNIX_TAPEDRIVE_H
#define __UNIX_TAPEDRIVE_H


#include "CIM_MediaAccessDevice.h"

#include "UNIX_TapeDriveDeps.h"


#define PROPERTY_E_O_T_WARNING_ZONE_SIZE				"EOTWarningZoneSize"
#define PROPERTY_MAX_PARTITION_COUNT				"MaxPartitionCount"
#define PROPERTY_PADDING				"Padding"
#define PROPERTY_MAX_REWIND_TIME				"MaxRewindTime"


class UNIX_TapeDrive :
	public CIM_MediaAccessDevice
{
public:

	UNIX_TapeDrive();
	~UNIX_TapeDrive();

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
	virtual Boolean getCapabilities(CIMProperty&) const;
	virtual Array<Uint16> getCapabilities() const;
	virtual Boolean getCapabilityDescriptions(CIMProperty&) const;
	virtual Array<String> getCapabilityDescriptions() const;
	virtual Boolean getErrorMethodology(CIMProperty&) const;
	virtual String getErrorMethodology() const;
	virtual Boolean getCompressionMethod(CIMProperty&) const;
	virtual String getCompressionMethod() const;
	virtual Boolean getNumberOfMediaSupported(CIMProperty&) const;
	virtual Uint32 getNumberOfMediaSupported() const;
	virtual Boolean getMaxMediaSize(CIMProperty&) const;
	virtual Uint64 getMaxMediaSize() const;
	virtual Boolean getDefaultBlockSize(CIMProperty&) const;
	virtual Uint64 getDefaultBlockSize() const;
	virtual Boolean getMaxBlockSize(CIMProperty&) const;
	virtual Uint64 getMaxBlockSize() const;
	virtual Boolean getMinBlockSize(CIMProperty&) const;
	virtual Uint64 getMinBlockSize() const;
	virtual Boolean getNeedsCleaning(CIMProperty&) const;
	virtual Boolean getNeedsCleaning() const;
	virtual Boolean getMediaIsLocked(CIMProperty&) const;
	virtual Boolean getMediaIsLocked() const;
	virtual Boolean getSecurity(CIMProperty&) const;
	virtual Uint16 getSecurity() const;
	virtual Boolean getLastCleaned(CIMProperty&) const;
	virtual CIMDateTime getLastCleaned() const;
	virtual Boolean getMaxAccessTime(CIMProperty&) const;
	virtual Uint64 getMaxAccessTime() const;
	virtual Boolean getUncompressedDataRate(CIMProperty&) const;
	virtual Uint32 getUncompressedDataRate() const;
	virtual Boolean getLoadTime(CIMProperty&) const;
	virtual Uint64 getLoadTime() const;
	virtual Boolean getUnloadTime(CIMProperty&) const;
	virtual Uint64 getUnloadTime() const;
	virtual Boolean getMountCount(CIMProperty&) const;
	virtual Uint64 getMountCount() const;
	virtual Boolean getTimeOfLastMount(CIMProperty&) const;
	virtual CIMDateTime getTimeOfLastMount() const;
	virtual Boolean getTotalMountTime(CIMProperty&) const;
	virtual Uint64 getTotalMountTime() const;
	virtual Boolean getUnitsDescription(CIMProperty&) const;
	virtual String getUnitsDescription() const;
	virtual Boolean getMaxUnitsBeforeCleaning(CIMProperty&) const;
	virtual Uint64 getMaxUnitsBeforeCleaning() const;
	virtual Boolean getUnitsUsed(CIMProperty&) const;
	virtual Uint64 getUnitsUsed() const;
	virtual Boolean getEOTWarningZoneSize(CIMProperty&) const;
	virtual Uint32 getEOTWarningZoneSize() const;
	virtual Boolean getMaxPartitionCount(CIMProperty&) const;
	virtual Uint32 getMaxPartitionCount() const;
	virtual Boolean getPadding(CIMProperty&) const;
	virtual Uint32 getPadding() const;
	virtual Boolean getMaxRewindTime(CIMProperty&) const;
	virtual Uint64 getMaxRewindTime() const;

private:
	CIMName currentScope;

#	include "UNIX_TapeDrivePrivate.h"


};

#endif /* UNIX_TAPEDRIVE */
