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

#ifndef __CIM_STORAGEEXTENT_H
#define __CIM_STORAGEEXTENT_H


#include "CIM_LogicalDevice.h"


#define PROPERTY_DATA_ORGANIZATION				"DataOrganization"
#define PROPERTY_PURPOSE				"Purpose"
#define PROPERTY_ACCESS				"Access"
#define PROPERTY_ERROR_METHODOLOGY				"ErrorMethodology"
#define PROPERTY_BLOCK_SIZE				"BlockSize"
#define PROPERTY_NUMBER_OF_BLOCKS				"NumberOfBlocks"
#define PROPERTY_CONSUMABLE_BLOCKS				"ConsumableBlocks"
#define PROPERTY_IS_BASED_ON_UNDERLYING_REDUNDANCY				"IsBasedOnUnderlyingRedundancy"
#define PROPERTY_SEQUENTIAL_ACCESS				"SequentialAccess"
#define PROPERTY_EXTENT_STATUS				"ExtentStatus"
#define PROPERTY_NO_SINGLE_POINT_OF_FAILURE				"NoSinglePointOfFailure"
#define PROPERTY_DATA_REDUNDANCY				"DataRedundancy"
#define PROPERTY_PACKAGE_REDUNDANCY				"PackageRedundancy"
#define PROPERTY_DELTA_RESERVATION				"DeltaReservation"
#define PROPERTY_PRIMORDIAL				"Primordial"
#define PROPERTY_NAME_FORMAT				"NameFormat"
#define PROPERTY_NAME_NAMESPACE				"NameNamespace"
#define PROPERTY_OTHER_NAME_NAMESPACE				"OtherNameNamespace"
#define PROPERTY_OTHER_NAME_FORMAT				"OtherNameFormat"


class CIM_StorageExtent :
	public CIM_LogicalDevice
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean finalize()=0;
	virtual Boolean find(Array<CIMKeyBinding>&)=0;
	virtual Boolean validateKey(CIMKeyBinding&) const=0;
	virtual void setScope(CIMName)=0;

	virtual Boolean getDataOrganization(CIMProperty&) const=0;
	virtual Uint16 getDataOrganization() const=0;
	virtual Boolean getPurpose(CIMProperty&) const=0;
	virtual String getPurpose() const=0;
	virtual Boolean getAccess(CIMProperty&) const=0;
	virtual Uint16 getAccess() const=0;
	virtual Boolean getErrorMethodology(CIMProperty&) const=0;
	virtual String getErrorMethodology() const=0;
	virtual Boolean getBlockSize(CIMProperty&) const=0;
	virtual Uint64 getBlockSize() const=0;
	virtual Boolean getNumberOfBlocks(CIMProperty&) const=0;
	virtual Uint64 getNumberOfBlocks() const=0;
	virtual Boolean getConsumableBlocks(CIMProperty&) const=0;
	virtual Uint64 getConsumableBlocks() const=0;
	virtual Boolean getIsBasedOnUnderlyingRedundancy(CIMProperty&) const=0;
	virtual Boolean getIsBasedOnUnderlyingRedundancy() const=0;
	virtual Boolean getSequentialAccess(CIMProperty&) const=0;
	virtual Boolean getSequentialAccess() const=0;
	virtual Boolean getExtentStatus(CIMProperty&) const=0;
	virtual Array<Uint16> getExtentStatus() const=0;
	virtual Boolean getNoSinglePointOfFailure(CIMProperty&) const=0;
	virtual Boolean getNoSinglePointOfFailure() const=0;
	virtual Boolean getDataRedundancy(CIMProperty&) const=0;
	virtual Uint16 getDataRedundancy() const=0;
	virtual Boolean getPackageRedundancy(CIMProperty&) const=0;
	virtual Uint16 getPackageRedundancy() const=0;
	virtual Boolean getDeltaReservation(CIMProperty&) const=0;
	virtual Uint8 getDeltaReservation() const=0;
	virtual Boolean getPrimordial(CIMProperty&) const=0;
	virtual Boolean getPrimordial() const=0;
	virtual Boolean getName(CIMProperty&) const=0;
	virtual String getName() const=0;
	virtual Boolean getNameFormat(CIMProperty&) const=0;
	virtual Uint16 getNameFormat() const=0;
	virtual Boolean getNameNamespace(CIMProperty&) const=0;
	virtual Uint16 getNameNamespace() const=0;
	virtual Boolean getOtherNameNamespace(CIMProperty&) const=0;
	virtual String getOtherNameNamespace() const=0;
	virtual Boolean getOtherNameFormat(CIMProperty&) const=0;
	virtual String getOtherNameFormat() const=0;

private:

};

#endif /* CIM_STORAGEEXTENT */
