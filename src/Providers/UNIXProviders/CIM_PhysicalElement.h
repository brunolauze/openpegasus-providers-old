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

#ifndef __CIM_PHYSICALELEMENT_H
#define __CIM_PHYSICALELEMENT_H


#include "CIM_ManagedSystemElement.h"


#define PROPERTY_TAG				"Tag"
#define PROPERTY_CREATION_CLASS_NAME				"CreationClassName"
#define PROPERTY_MANUFACTURER				"Manufacturer"
#define PROPERTY_MODEL				"Model"
#define PROPERTY_S_K_U				"SKU"
#define PROPERTY_SERIAL_NUMBER				"SerialNumber"
#define PROPERTY_VERSION				"Version"
#define PROPERTY_PART_NUMBER				"PartNumber"
#define PROPERTY_OTHER_IDENTIFYING_INFO				"OtherIdentifyingInfo"
#define PROPERTY_POWERED_ON				"PoweredOn"
#define PROPERTY_MANUFACTURE_DATE				"ManufactureDate"
#define PROPERTY_VENDOR_EQUIPMENT_TYPE				"VendorEquipmentType"
#define PROPERTY_USER_TRACKING				"UserTracking"
#define PROPERTY_CAN_BE_F_R_UED				"CanBeFRUed"


class CIM_PhysicalElement :
	public CIM_ManagedSystemElement
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean finalize()=0;
	virtual Boolean find(Array<CIMKeyBinding>&)=0;
	virtual Boolean validateKey(CIMKeyBinding&) const=0;
	virtual void setScope(CIMName)=0;

	virtual Boolean getTag(CIMProperty&) const=0;
	virtual String getTag() const=0;
	virtual Boolean getDescription(CIMProperty&) const=0;
	virtual String getDescription() const=0;
	virtual Boolean getCreationClassName(CIMProperty&) const=0;
	virtual String getCreationClassName() const=0;
	virtual Boolean getElementName(CIMProperty&) const=0;
	virtual String getElementName() const=0;
	virtual Boolean getManufacturer(CIMProperty&) const=0;
	virtual String getManufacturer() const=0;
	virtual Boolean getModel(CIMProperty&) const=0;
	virtual String getModel() const=0;
	virtual Boolean getSKU(CIMProperty&) const=0;
	virtual String getSKU() const=0;
	virtual Boolean getSerialNumber(CIMProperty&) const=0;
	virtual String getSerialNumber() const=0;
	virtual Boolean getVersion(CIMProperty&) const=0;
	virtual String getVersion() const=0;
	virtual Boolean getPartNumber(CIMProperty&) const=0;
	virtual String getPartNumber() const=0;
	virtual Boolean getOtherIdentifyingInfo(CIMProperty&) const=0;
	virtual String getOtherIdentifyingInfo() const=0;
	virtual Boolean getPoweredOn(CIMProperty&) const=0;
	virtual Boolean getPoweredOn() const=0;
	virtual Boolean getManufactureDate(CIMProperty&) const=0;
	virtual CIMDateTime getManufactureDate() const=0;
	virtual Boolean getVendorEquipmentType(CIMProperty&) const=0;
	virtual String getVendorEquipmentType() const=0;
	virtual Boolean getUserTracking(CIMProperty&) const=0;
	virtual String getUserTracking() const=0;
	virtual Boolean getCanBeFRUed(CIMProperty&) const=0;
	virtual Boolean getCanBeFRUed() const=0;

private:

};

#endif /* CIM_PHYSICALELEMENT */
