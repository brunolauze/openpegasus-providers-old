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


UNIX_StorageSettingWithHints::UNIX_StorageSettingWithHints(void)
{
}

UNIX_StorageSettingWithHints::~UNIX_StorageSettingWithHints(void)
{
}


Boolean UNIX_StorageSettingWithHints::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_StorageSettingWithHints::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_StorageSettingWithHints::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_StorageSettingWithHints::getCaption() const
{
	return String ("");
}

Boolean UNIX_StorageSettingWithHints::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_StorageSettingWithHints::getDescription() const
{
	return String ("");
}

Boolean UNIX_StorageSettingWithHints::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_StorageSettingWithHints::getElementName() const
{
	return String("StorageSettingWithHints");
}

Boolean UNIX_StorageSettingWithHints::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getChangeableType() const
{
	return Uint16(0);
}

Boolean UNIX_StorageSettingWithHints::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_StorageSettingWithHints::getConfigurationName() const
{
	return String ("");
}

Boolean UNIX_StorageSettingWithHints::getNoSinglePointOfFailure(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NO_SINGLE_POINT_OF_FAILURE, getNoSinglePointOfFailure());
	return true;
}

Boolean UNIX_StorageSettingWithHints::getNoSinglePointOfFailure() const
{
	return Boolean(false);
}

Boolean UNIX_StorageSettingWithHints::getDataRedundancyMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_REDUNDANCY_MAX, getDataRedundancyMax());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getDataRedundancyMax() const
{
	return Uint16(0);
}

Boolean UNIX_StorageSettingWithHints::getDataRedundancyMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_REDUNDANCY_MIN, getDataRedundancyMin());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getDataRedundancyMin() const
{
	return Uint16(0);
}

Boolean UNIX_StorageSettingWithHints::getDataRedundancyGoal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_REDUNDANCY_GOAL, getDataRedundancyGoal());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getDataRedundancyGoal() const
{
	return Uint16(0);
}

Boolean UNIX_StorageSettingWithHints::getPackageRedundancyMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_REDUNDANCY_MAX, getPackageRedundancyMax());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getPackageRedundancyMax() const
{
	return Uint16(0);
}

Boolean UNIX_StorageSettingWithHints::getPackageRedundancyMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_REDUNDANCY_MIN, getPackageRedundancyMin());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getPackageRedundancyMin() const
{
	return Uint16(0);
}

Boolean UNIX_StorageSettingWithHints::getPackageRedundancyGoal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_REDUNDANCY_GOAL, getPackageRedundancyGoal());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getPackageRedundancyGoal() const
{
	return Uint16(0);
}

Boolean UNIX_StorageSettingWithHints::getDeltaReservationMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_RESERVATION_MAX, getDeltaReservationMax());
	return true;
}

Uint8 UNIX_StorageSettingWithHints::getDeltaReservationMax() const
{
	return Uint8(0);
}

Boolean UNIX_StorageSettingWithHints::getDeltaReservationMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_RESERVATION_MIN, getDeltaReservationMin());
	return true;
}

Uint8 UNIX_StorageSettingWithHints::getDeltaReservationMin() const
{
	return Uint8(0);
}

Boolean UNIX_StorageSettingWithHints::getDeltaReservationGoal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_RESERVATION_GOAL, getDeltaReservationGoal());
	return true;
}

Uint8 UNIX_StorageSettingWithHints::getDeltaReservationGoal() const
{
	return Uint8(0);
}

Boolean UNIX_StorageSettingWithHints::getExtentStripeLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_STRIPE_LENGTH, getExtentStripeLength());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getExtentStripeLength() const
{
	return Uint16(0);
}

Boolean UNIX_StorageSettingWithHints::getExtentStripeLengthMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_STRIPE_LENGTH_MIN, getExtentStripeLengthMin());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getExtentStripeLengthMin() const
{
	return Uint16(0);
}

Boolean UNIX_StorageSettingWithHints::getExtentStripeLengthMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_STRIPE_LENGTH_MAX, getExtentStripeLengthMax());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getExtentStripeLengthMax() const
{
	return Uint16(0);
}

Boolean UNIX_StorageSettingWithHints::getParityLayout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARITY_LAYOUT, getParityLayout());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getParityLayout() const
{
	return Uint16(0);
}

Boolean UNIX_StorageSettingWithHints::getUserDataStripeDepth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_DATA_STRIPE_DEPTH, getUserDataStripeDepth());
	return true;
}

Uint64 UNIX_StorageSettingWithHints::getUserDataStripeDepth() const
{
	return Uint64(0);
}

Boolean UNIX_StorageSettingWithHints::getUserDataStripeDepthMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_DATA_STRIPE_DEPTH_MIN, getUserDataStripeDepthMin());
	return true;
}

Uint64 UNIX_StorageSettingWithHints::getUserDataStripeDepthMin() const
{
	return Uint64(0);
}

Boolean UNIX_StorageSettingWithHints::getUserDataStripeDepthMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_DATA_STRIPE_DEPTH_MAX, getUserDataStripeDepthMax());
	return true;
}

Uint64 UNIX_StorageSettingWithHints::getUserDataStripeDepthMax() const
{
	return Uint64(0);
}

Boolean UNIX_StorageSettingWithHints::getDataAvailabilityHint(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_AVAILABILITY_HINT, getDataAvailabilityHint());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getDataAvailabilityHint() const
{
	return Uint16(0);
}

Boolean UNIX_StorageSettingWithHints::getAccessRandomnessHint(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS_RANDOMNESS_HINT, getAccessRandomnessHint());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getAccessRandomnessHint() const
{
	return Uint16(0);
}

Boolean UNIX_StorageSettingWithHints::getAccessDirectionHint(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS_DIRECTION_HINT, getAccessDirectionHint());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getAccessDirectionHint() const
{
	return Uint16(0);
}

Boolean UNIX_StorageSettingWithHints::getAccessSizeHint(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS_SIZE_HINT, getAccessSizeHint());
	return true;
}

Array<Uint16> UNIX_StorageSettingWithHints::getAccessSizeHint() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_StorageSettingWithHints::getAccessLatencyHint(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS_LATENCY_HINT, getAccessLatencyHint());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getAccessLatencyHint() const
{
	return Uint16(0);
}

Boolean UNIX_StorageSettingWithHints::getAccessBandwidthWeight(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS_BANDWIDTH_WEIGHT, getAccessBandwidthWeight());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getAccessBandwidthWeight() const
{
	return Uint16(0);
}

Boolean UNIX_StorageSettingWithHints::getStorageCostHint(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STORAGE_COST_HINT, getStorageCostHint());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getStorageCostHint() const
{
	return Uint16(0);
}

Boolean UNIX_StorageSettingWithHints::getStorageEfficiencyHint(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STORAGE_EFFICIENCY_HINT, getStorageEfficiencyHint());
	return true;
}

Uint16 UNIX_StorageSettingWithHints::getStorageEfficiencyHint() const
{
	return Uint16(0);
}



Boolean UNIX_StorageSettingWithHints::initialize()
{
	return false;
}

Boolean UNIX_StorageSettingWithHints::load(int &pIndex)
{
	return false;
}

Boolean UNIX_StorageSettingWithHints::finalize()
{
	return false;
}

Boolean UNIX_StorageSettingWithHints::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String instanceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_INSTANCE_ID)) instanceIDKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
