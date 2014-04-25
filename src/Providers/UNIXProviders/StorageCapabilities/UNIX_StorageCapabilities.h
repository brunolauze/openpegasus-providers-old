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

#ifndef __UNIX_STORAGECAPABILITIES_H
#define __UNIX_STORAGECAPABILITIES_H


#include "CIM_Capabilities.h"

#include "UNIX_StorageCapabilitiesDeps.h"


#define PROPERTY_ELEMENT_TYPE				"ElementType"
#define PROPERTY_NO_SINGLE_POINT_OF_FAILURE				"NoSinglePointOfFailure"
#define PROPERTY_NO_SINGLE_POINT_OF_FAILURE_DEFAULT				"NoSinglePointOfFailureDefault"
#define PROPERTY_DATA_REDUNDANCY_MAX				"DataRedundancyMax"
#define PROPERTY_DATA_REDUNDANCY_MIN				"DataRedundancyMin"
#define PROPERTY_DATA_REDUNDANCY_DEFAULT				"DataRedundancyDefault"
#define PROPERTY_PACKAGE_REDUNDANCY_MAX				"PackageRedundancyMax"
#define PROPERTY_PACKAGE_REDUNDANCY_MIN				"PackageRedundancyMin"
#define PROPERTY_PACKAGE_REDUNDANCY_DEFAULT				"PackageRedundancyDefault"
#define PROPERTY_DELTA_RESERVATION_MAX				"DeltaReservationMax"
#define PROPERTY_DELTA_RESERVATION_MIN				"DeltaReservationMin"
#define PROPERTY_DELTA_RESERVATION_DEFAULT				"DeltaReservationDefault"
#define PROPERTY_EXTENT_STRIPE_LENGTH_DEFAULT				"ExtentStripeLengthDefault"
#define PROPERTY_PARITY_LAYOUT_DEFAULT				"ParityLayoutDefault"
#define PROPERTY_USER_DATA_STRIPE_DEPTH_DEFAULT				"UserDataStripeDepthDefault"


class UNIX_StorageCapabilities :
	public CIM_Capabilities
{
public:

	UNIX_StorageCapabilities();
	~UNIX_StorageCapabilities();

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
	virtual Boolean getElementType(CIMProperty&) const;
	virtual Uint16 getElementType() const;
	virtual Boolean getNoSinglePointOfFailure(CIMProperty&) const;
	virtual Boolean getNoSinglePointOfFailure() const;
	virtual Boolean getNoSinglePointOfFailureDefault(CIMProperty&) const;
	virtual Boolean getNoSinglePointOfFailureDefault() const;
	virtual Boolean getDataRedundancyMax(CIMProperty&) const;
	virtual Uint16 getDataRedundancyMax() const;
	virtual Boolean getDataRedundancyMin(CIMProperty&) const;
	virtual Uint16 getDataRedundancyMin() const;
	virtual Boolean getDataRedundancyDefault(CIMProperty&) const;
	virtual Uint16 getDataRedundancyDefault() const;
	virtual Boolean getPackageRedundancyMax(CIMProperty&) const;
	virtual Uint16 getPackageRedundancyMax() const;
	virtual Boolean getPackageRedundancyMin(CIMProperty&) const;
	virtual Uint16 getPackageRedundancyMin() const;
	virtual Boolean getPackageRedundancyDefault(CIMProperty&) const;
	virtual Uint16 getPackageRedundancyDefault() const;
	virtual Boolean getDeltaReservationMax(CIMProperty&) const;
	virtual Uint16 getDeltaReservationMax() const;
	virtual Boolean getDeltaReservationMin(CIMProperty&) const;
	virtual Uint16 getDeltaReservationMin() const;
	virtual Boolean getDeltaReservationDefault(CIMProperty&) const;
	virtual Uint16 getDeltaReservationDefault() const;
	virtual Boolean getExtentStripeLengthDefault(CIMProperty&) const;
	virtual Uint16 getExtentStripeLengthDefault() const;
	virtual Boolean getParityLayoutDefault(CIMProperty&) const;
	virtual Uint16 getParityLayoutDefault() const;
	virtual Boolean getUserDataStripeDepthDefault(CIMProperty&) const;
	virtual Uint64 getUserDataStripeDepthDefault() const;

private:
	CIMName currentScope;

#	include "UNIX_StorageCapabilitiesPrivate.h"


};

#endif /* UNIX_STORAGECAPABILITIES */
