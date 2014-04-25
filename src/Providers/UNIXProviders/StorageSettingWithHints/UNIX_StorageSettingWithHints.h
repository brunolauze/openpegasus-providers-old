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

#ifndef __UNIX_STORAGESETTINGWITHHINTS_H
#define __UNIX_STORAGESETTINGWITHHINTS_H


#include "CIM_StorageSetting.h"

#include "UNIX_StorageSettingWithHintsDeps.h"


#define PROPERTY_DATA_AVAILABILITY_HINT				"DataAvailabilityHint"
#define PROPERTY_ACCESS_RANDOMNESS_HINT				"AccessRandomnessHint"
#define PROPERTY_ACCESS_DIRECTION_HINT				"AccessDirectionHint"
#define PROPERTY_ACCESS_SIZE_HINT				"AccessSizeHint"
#define PROPERTY_ACCESS_LATENCY_HINT				"AccessLatencyHint"
#define PROPERTY_ACCESS_BANDWIDTH_WEIGHT				"AccessBandwidthWeight"
#define PROPERTY_STORAGE_COST_HINT				"StorageCostHint"
#define PROPERTY_STORAGE_EFFICIENCY_HINT				"StorageEfficiencyHint"


class UNIX_StorageSettingWithHints :
	public CIM_StorageSetting
{
public:

	UNIX_StorageSettingWithHints();
	~UNIX_StorageSettingWithHints();

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
	virtual Boolean getChangeableType(CIMProperty&) const;
	virtual Uint16 getChangeableType() const;
	virtual Boolean getConfigurationName(CIMProperty&) const;
	virtual String getConfigurationName() const;
	virtual Boolean getNoSinglePointOfFailure(CIMProperty&) const;
	virtual Boolean getNoSinglePointOfFailure() const;
	virtual Boolean getDataRedundancyMax(CIMProperty&) const;
	virtual Uint16 getDataRedundancyMax() const;
	virtual Boolean getDataRedundancyMin(CIMProperty&) const;
	virtual Uint16 getDataRedundancyMin() const;
	virtual Boolean getDataRedundancyGoal(CIMProperty&) const;
	virtual Uint16 getDataRedundancyGoal() const;
	virtual Boolean getPackageRedundancyMax(CIMProperty&) const;
	virtual Uint16 getPackageRedundancyMax() const;
	virtual Boolean getPackageRedundancyMin(CIMProperty&) const;
	virtual Uint16 getPackageRedundancyMin() const;
	virtual Boolean getPackageRedundancyGoal(CIMProperty&) const;
	virtual Uint16 getPackageRedundancyGoal() const;
	virtual Boolean getDeltaReservationMax(CIMProperty&) const;
	virtual Uint8 getDeltaReservationMax() const;
	virtual Boolean getDeltaReservationMin(CIMProperty&) const;
	virtual Uint8 getDeltaReservationMin() const;
	virtual Boolean getDeltaReservationGoal(CIMProperty&) const;
	virtual Uint8 getDeltaReservationGoal() const;
	virtual Boolean getExtentStripeLength(CIMProperty&) const;
	virtual Uint16 getExtentStripeLength() const;
	virtual Boolean getExtentStripeLengthMin(CIMProperty&) const;
	virtual Uint16 getExtentStripeLengthMin() const;
	virtual Boolean getExtentStripeLengthMax(CIMProperty&) const;
	virtual Uint16 getExtentStripeLengthMax() const;
	virtual Boolean getParityLayout(CIMProperty&) const;
	virtual Uint16 getParityLayout() const;
	virtual Boolean getUserDataStripeDepth(CIMProperty&) const;
	virtual Uint64 getUserDataStripeDepth() const;
	virtual Boolean getUserDataStripeDepthMin(CIMProperty&) const;
	virtual Uint64 getUserDataStripeDepthMin() const;
	virtual Boolean getUserDataStripeDepthMax(CIMProperty&) const;
	virtual Uint64 getUserDataStripeDepthMax() const;
	virtual Boolean getDataAvailabilityHint(CIMProperty&) const;
	virtual Uint16 getDataAvailabilityHint() const;
	virtual Boolean getAccessRandomnessHint(CIMProperty&) const;
	virtual Uint16 getAccessRandomnessHint() const;
	virtual Boolean getAccessDirectionHint(CIMProperty&) const;
	virtual Uint16 getAccessDirectionHint() const;
	virtual Boolean getAccessSizeHint(CIMProperty&) const;
	virtual Array<Uint16> getAccessSizeHint() const;
	virtual Boolean getAccessLatencyHint(CIMProperty&) const;
	virtual Uint16 getAccessLatencyHint() const;
	virtual Boolean getAccessBandwidthWeight(CIMProperty&) const;
	virtual Uint16 getAccessBandwidthWeight() const;
	virtual Boolean getStorageCostHint(CIMProperty&) const;
	virtual Uint16 getStorageCostHint() const;
	virtual Boolean getStorageEfficiencyHint(CIMProperty&) const;
	virtual Uint16 getStorageEfficiencyHint() const;

private:
	CIMName currentScope;

#	include "UNIX_StorageSettingWithHintsPrivate.h"


};

#endif /* UNIX_STORAGESETTINGWITHHINTS */
