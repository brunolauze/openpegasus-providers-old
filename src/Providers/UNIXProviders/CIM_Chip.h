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

#ifndef __CIM_CHIP_H
#define __CIM_CHIP_H


#include "CIM_PhysicalComponent.h"

#define PROPERTY_FORM_FACTOR "FormFactor"

class CIM_Chip :
	public CIM_PhysicalComponent
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean finalize()=0;
	virtual Boolean find(Array<CIMKeyBinding>&)=0;
	virtual Boolean validateKey(CIMKeyBinding&) const=0;
	virtual void setScope(CIMName)=0;

	virtual Boolean getInstanceID(CIMProperty&) const=0;
	virtual String getInstanceID() const=0;
	virtual Boolean getCaption(CIMProperty&) const=0;
	virtual String getCaption() const=0;
	virtual Boolean getDescription(CIMProperty&) const=0;
	virtual String getDescription() const=0;
	virtual Boolean getElementName(CIMProperty&) const=0;
	virtual String getElementName() const=0;
	virtual Boolean getInstallDate(CIMProperty&) const=0;
	virtual CIMDateTime getInstallDate() const=0;
	virtual Boolean getName(CIMProperty&) const=0;
	virtual String getName() const=0;
	virtual Boolean getOperationalStatus(CIMProperty&) const=0;
	virtual Array<Uint16> getOperationalStatus() const=0;
	virtual Boolean getStatusDescriptions(CIMProperty&) const=0;
	virtual Array<String> getStatusDescriptions() const=0;
	virtual Boolean getStatus(CIMProperty&) const=0;
	virtual String getStatus() const=0;
	virtual Boolean getHealthState(CIMProperty&) const=0;
	virtual Uint16 getHealthState() const=0;
	virtual Boolean getCommunicationStatus(CIMProperty&) const=0;
	virtual Uint16 getCommunicationStatus() const=0;
	virtual Boolean getDetailedStatus(CIMProperty&) const=0;
	virtual Uint16 getDetailedStatus() const=0;
	virtual Boolean getOperatingStatus(CIMProperty&) const=0;
	virtual Uint16 getOperatingStatus() const=0;
	virtual Boolean getPrimaryStatus(CIMProperty&) const=0;
	virtual Uint16 getPrimaryStatus() const=0;
	virtual Boolean getTag(CIMProperty&) const=0;
	virtual String getTag() const=0;
	virtual Boolean getCreationClassName(CIMProperty&) const=0;
	virtual String getCreationClassName() const=0;
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
	virtual Boolean getRemovalConditions(CIMProperty&) const=0;
	virtual Uint16 getRemovalConditions() const=0;
	virtual Boolean getRemovable(CIMProperty&) const=0;
	virtual Boolean getRemovable() const=0;
	virtual Boolean getReplaceable(CIMProperty&) const=0;
	virtual Boolean getReplaceable() const=0;
	virtual Boolean getHotSwappable(CIMProperty&) const=0;
	virtual Boolean getHotSwappable() const=0;
	virtual Boolean getFormFactor(CIMProperty&) const=0;
	virtual Uint16 getFormFactor() const=0;

private:

};

#endif /* CIM_Chip */
