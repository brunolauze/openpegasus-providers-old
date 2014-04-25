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

#ifndef __UNIX_STORAGESETTING_H
#define __UNIX_STORAGESETTING_H


#include "CIM_SettingData.h"

#include "UNIX_StorageSettingDeps.h"


#define PROPERTY_NO_SINGLE_POINT_OF_FAILURE				"NoSinglePointOfFailure"
#define PROPERTY_DATA_REDUNDANCY_MAX				"DataRedundancyMax"
#define PROPERTY_DATA_REDUNDANCY_MIN				"DataRedundancyMin"
#define PROPERTY_DATA_REDUNDANCY_GOAL				"DataRedundancyGoal"
#define PROPERTY_PACKAGE_REDUNDANCY_MAX				"PackageRedundancyMax"
#define PROPERTY_PACKAGE_REDUNDANCY_MIN				"PackageRedundancyMin"
#define PROPERTY_PACKAGE_REDUNDANCY_GOAL				"PackageRedundancyGoal"
#define PROPERTY_DELTA_RESERVATION_MAX				"DeltaReservationMax"
#define PROPERTY_DELTA_RESERVATION_MIN				"DeltaReservationMin"
#define PROPERTY_DELTA_RESERVATION_GOAL				"DeltaReservationGoal"
#define PROPERTY_EXTENT_STRIPE_LENGTH				"ExtentStripeLength"
#define PROPERTY_EXTENT_STRIPE_LENGTH_MIN				"ExtentStripeLengthMin"
#define PROPERTY_EXTENT_STRIPE_LENGTH_MAX				"ExtentStripeLengthMax"
#define PROPERTY_PARITY_LAYOUT				"ParityLayout"
#define PROPERTY_USER_DATA_STRIPE_DEPTH				"UserDataStripeDepth"
#define PROPERTY_USER_DATA_STRIPE_DEPTH_MIN				"UserDataStripeDepthMin"
#define PROPERTY_USER_DATA_STRIPE_DEPTH_MAX				"UserDataStripeDepthMax"


class UNIX_StorageSetting :
	public CIM_SettingData
{
public:

	UNIX_StorageSetting();
	~UNIX_StorageSetting();

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

private:
	CIMName currentScope;

#	include "UNIX_StorageSettingPrivate.h"


};

#endif /* UNIX_STORAGESETTING */
