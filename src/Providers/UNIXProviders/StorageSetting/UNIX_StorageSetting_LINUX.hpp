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


UNIX_StorageSetting::UNIX_StorageSetting(void)
{
}

UNIX_StorageSetting::~UNIX_StorageSetting(void)
{
}


Boolean UNIX_StorageSetting::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_StorageSetting::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_StorageSetting::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_StorageSetting::getCaption() const
{
	return String ("");
}

Boolean UNIX_StorageSetting::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_StorageSetting::getDescription() const
{
	return String ("");
}

Boolean UNIX_StorageSetting::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_StorageSetting::getElementName() const
{
	return String("StorageSetting");
}

Boolean UNIX_StorageSetting::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_StorageSetting::getChangeableType() const
{
	return Uint16(0);
}

Boolean UNIX_StorageSetting::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_StorageSetting::getConfigurationName() const
{
	return String ("");
}

Boolean UNIX_StorageSetting::getNoSinglePointOfFailure(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NO_SINGLE_POINT_OF_FAILURE, getNoSinglePointOfFailure());
	return true;
}

Boolean UNIX_StorageSetting::getNoSinglePointOfFailure() const
{
	return Boolean(false);
}

Boolean UNIX_StorageSetting::getDataRedundancyMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_REDUNDANCY_MAX, getDataRedundancyMax());
	return true;
}

Uint16 UNIX_StorageSetting::getDataRedundancyMax() const
{
	return Uint16(0);
}

Boolean UNIX_StorageSetting::getDataRedundancyMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_REDUNDANCY_MIN, getDataRedundancyMin());
	return true;
}

Uint16 UNIX_StorageSetting::getDataRedundancyMin() const
{
	return Uint16(0);
}

Boolean UNIX_StorageSetting::getDataRedundancyGoal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_REDUNDANCY_GOAL, getDataRedundancyGoal());
	return true;
}

Uint16 UNIX_StorageSetting::getDataRedundancyGoal() const
{
	return Uint16(0);
}

Boolean UNIX_StorageSetting::getPackageRedundancyMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_REDUNDANCY_MAX, getPackageRedundancyMax());
	return true;
}

Uint16 UNIX_StorageSetting::getPackageRedundancyMax() const
{
	return Uint16(0);
}

Boolean UNIX_StorageSetting::getPackageRedundancyMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_REDUNDANCY_MIN, getPackageRedundancyMin());
	return true;
}

Uint16 UNIX_StorageSetting::getPackageRedundancyMin() const
{
	return Uint16(0);
}

Boolean UNIX_StorageSetting::getPackageRedundancyGoal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_REDUNDANCY_GOAL, getPackageRedundancyGoal());
	return true;
}

Uint16 UNIX_StorageSetting::getPackageRedundancyGoal() const
{
	return Uint16(0);
}

Boolean UNIX_StorageSetting::getDeltaReservationMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_RESERVATION_MAX, getDeltaReservationMax());
	return true;
}

Uint8 UNIX_StorageSetting::getDeltaReservationMax() const
{
	return Uint8(0);
}

Boolean UNIX_StorageSetting::getDeltaReservationMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_RESERVATION_MIN, getDeltaReservationMin());
	return true;
}

Uint8 UNIX_StorageSetting::getDeltaReservationMin() const
{
	return Uint8(0);
}

Boolean UNIX_StorageSetting::getDeltaReservationGoal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_RESERVATION_GOAL, getDeltaReservationGoal());
	return true;
}

Uint8 UNIX_StorageSetting::getDeltaReservationGoal() const
{
	return Uint8(0);
}

Boolean UNIX_StorageSetting::getExtentStripeLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_STRIPE_LENGTH, getExtentStripeLength());
	return true;
}

Uint16 UNIX_StorageSetting::getExtentStripeLength() const
{
	return Uint16(0);
}

Boolean UNIX_StorageSetting::getExtentStripeLengthMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_STRIPE_LENGTH_MIN, getExtentStripeLengthMin());
	return true;
}

Uint16 UNIX_StorageSetting::getExtentStripeLengthMin() const
{
	return Uint16(0);
}

Boolean UNIX_StorageSetting::getExtentStripeLengthMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_STRIPE_LENGTH_MAX, getExtentStripeLengthMax());
	return true;
}

Uint16 UNIX_StorageSetting::getExtentStripeLengthMax() const
{
	return Uint16(0);
}

Boolean UNIX_StorageSetting::getParityLayout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARITY_LAYOUT, getParityLayout());
	return true;
}

Uint16 UNIX_StorageSetting::getParityLayout() const
{
	return Uint16(0);
}

Boolean UNIX_StorageSetting::getUserDataStripeDepth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_DATA_STRIPE_DEPTH, getUserDataStripeDepth());
	return true;
}

Uint64 UNIX_StorageSetting::getUserDataStripeDepth() const
{
	return Uint64(0);
}

Boolean UNIX_StorageSetting::getUserDataStripeDepthMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_DATA_STRIPE_DEPTH_MIN, getUserDataStripeDepthMin());
	return true;
}

Uint64 UNIX_StorageSetting::getUserDataStripeDepthMin() const
{
	return Uint64(0);
}

Boolean UNIX_StorageSetting::getUserDataStripeDepthMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_DATA_STRIPE_DEPTH_MAX, getUserDataStripeDepthMax());
	return true;
}

Uint64 UNIX_StorageSetting::getUserDataStripeDepthMax() const
{
	return Uint64(0);
}



Boolean UNIX_StorageSetting::initialize()
{
	return false;
}

Boolean UNIX_StorageSetting::load(int &pIndex)
{
	return false;
}

Boolean UNIX_StorageSetting::finalize()
{
	return false;
}

Boolean UNIX_StorageSetting::find(Array<CIMKeyBinding> &kbArray)
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
