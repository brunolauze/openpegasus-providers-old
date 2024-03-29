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

#ifndef __UNIX_NONVOLATILESTORAGE_H
#define __UNIX_NONVOLATILESTORAGE_H


#include "CIM_Memory.h"

#include "UNIX_NonVolatileStorageDeps.h"


#define PROPERTY_IS_WRITEABLE				"IsWriteable"
#define PROPERTY_APPLICATION_WRITEABLE				"ApplicationWriteable"
#define PROPERTY_START_ADDRESS_FOR_APPLICATION_WRITE				"StartAddressForApplicationWrite"
#define PROPERTY_APPLICATION_WRITEABLE_SIZE				"ApplicationWriteableSize"


class UNIX_NonVolatileStorage :
	public CIM_Memory
{
public:

	UNIX_NonVolatileStorage();
	~UNIX_NonVolatileStorage();

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
	virtual Boolean getDataOrganization(CIMProperty&) const;
	virtual Uint16 getDataOrganization() const;
	virtual Boolean getPurpose(CIMProperty&) const;
	virtual String getPurpose() const;
	virtual Boolean getAccess(CIMProperty&) const;
	virtual Uint16 getAccess() const;
	virtual Boolean getErrorMethodology(CIMProperty&) const;
	virtual String getErrorMethodology() const;
	virtual Boolean getBlockSize(CIMProperty&) const;
	virtual Uint64 getBlockSize() const;
	virtual Boolean getNumberOfBlocks(CIMProperty&) const;
	virtual Uint64 getNumberOfBlocks() const;
	virtual Boolean getConsumableBlocks(CIMProperty&) const;
	virtual Uint64 getConsumableBlocks() const;
	virtual Boolean getIsBasedOnUnderlyingRedundancy(CIMProperty&) const;
	virtual Boolean getIsBasedOnUnderlyingRedundancy() const;
	virtual Boolean getSequentialAccess(CIMProperty&) const;
	virtual Boolean getSequentialAccess() const;
	virtual Boolean getExtentStatus(CIMProperty&) const;
	virtual Array<Uint16> getExtentStatus() const;
	virtual Boolean getNoSinglePointOfFailure(CIMProperty&) const;
	virtual Boolean getNoSinglePointOfFailure() const;
	virtual Boolean getDataRedundancy(CIMProperty&) const;
	virtual Uint16 getDataRedundancy() const;
	virtual Boolean getPackageRedundancy(CIMProperty&) const;
	virtual Uint16 getPackageRedundancy() const;
	virtual Boolean getDeltaReservation(CIMProperty&) const;
	virtual Uint8 getDeltaReservation() const;
	virtual Boolean getPrimordial(CIMProperty&) const;
	virtual Boolean getPrimordial() const;
	virtual Boolean getNameFormat(CIMProperty&) const;
	virtual Uint16 getNameFormat() const;
	virtual Boolean getNameNamespace(CIMProperty&) const;
	virtual Uint16 getNameNamespace() const;
	virtual Boolean getOtherNameNamespace(CIMProperty&) const;
	virtual String getOtherNameNamespace() const;
	virtual Boolean getOtherNameFormat(CIMProperty&) const;
	virtual String getOtherNameFormat() const;
	virtual Boolean getVolatile(CIMProperty&) const;
	virtual Boolean getVolatile() const;
	virtual Boolean getStartingAddress(CIMProperty&) const;
	virtual Uint64 getStartingAddress() const;
	virtual Boolean getEndingAddress(CIMProperty&) const;
	virtual Uint64 getEndingAddress() const;
	virtual Boolean getErrorInfo(CIMProperty&) const;
	virtual Uint16 getErrorInfo() const;
	virtual Boolean getOtherErrorDescription(CIMProperty&) const;
	virtual String getOtherErrorDescription() const;
	virtual Boolean getCorrectableError(CIMProperty&) const;
	virtual Boolean getCorrectableError() const;
	virtual Boolean getErrorTime(CIMProperty&) const;
	virtual CIMDateTime getErrorTime() const;
	virtual Boolean getErrorAccess(CIMProperty&) const;
	virtual Uint16 getErrorAccess() const;
	virtual Boolean getErrorTransferSize(CIMProperty&) const;
	virtual Uint32 getErrorTransferSize() const;
	virtual Boolean getErrorData(CIMProperty&) const;
	virtual Array<Uint8> getErrorData() const;
	virtual Boolean getErrorDataOrder(CIMProperty&) const;
	virtual Uint16 getErrorDataOrder() const;
	virtual Boolean getErrorAddress(CIMProperty&) const;
	virtual Uint64 getErrorAddress() const;
	virtual Boolean getSystemLevelAddress(CIMProperty&) const;
	virtual Boolean getSystemLevelAddress() const;
	virtual Boolean getErrorResolution(CIMProperty&) const;
	virtual Uint64 getErrorResolution() const;
	virtual Boolean getAdditionalErrorData(CIMProperty&) const;
	virtual Array<Uint8> getAdditionalErrorData() const;
	virtual Boolean getIsWriteable(CIMProperty&) const;
	virtual Boolean getIsWriteable() const;
	virtual Boolean getApplicationWriteable(CIMProperty&) const;
	virtual Boolean getApplicationWriteable() const;
	virtual Boolean getStartAddressForApplicationWrite(CIMProperty&) const;
	virtual Uint64 getStartAddressForApplicationWrite() const;
	virtual Boolean getApplicationWriteableSize(CIMProperty&) const;
	virtual Uint64 getApplicationWriteableSize() const;

private:
	CIMName currentScope;

#	include "UNIX_NonVolatileStoragePrivate.h"


};

#endif /* UNIX_NONVOLATILESTORAGE */
