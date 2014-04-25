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

#ifndef __UNIX_CHASSIS_H
#define __UNIX_CHASSIS_H


#include "CIM_PhysicalFrame.h"

#include "UNIX_ChassisDeps.h"


#define PROPERTY_NUMBER_OF_POWER_CORDS				"NumberOfPowerCords"
#define PROPERTY_CURRENT_REQUIRED_OR_PRODUCED				"CurrentRequiredOrProduced"
#define PROPERTY_HEAT_GENERATION				"HeatGeneration"
#define PROPERTY_CHASSIS_TYPES				"ChassisTypes"
#define PROPERTY_TYPE_DESCRIPTIONS				"TypeDescriptions"
#define PROPERTY_CHASSIS_PACKAGE_TYPE				"ChassisPackageType"
#define PROPERTY_CHASSIS_TYPE_DESCRIPTION				"ChassisTypeDescription"
#define PROPERTY_MULTIPLE_SYSTEM_SUPPORT				"MultipleSystemSupport"
#define PROPERTY_RACK_MOUNTABLE				"RackMountable"


class UNIX_Chassis :
	public CIM_PhysicalFrame
{
public:

	UNIX_Chassis();
	~UNIX_Chassis();

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
	virtual Boolean getTag(CIMProperty&) const;
	virtual String getTag() const;
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual Boolean getManufacturer(CIMProperty&) const;
	virtual String getManufacturer() const;
	virtual Boolean getModel(CIMProperty&) const;
	virtual String getModel() const;
	virtual Boolean getSKU(CIMProperty&) const;
	virtual String getSKU() const;
	virtual Boolean getSerialNumber(CIMProperty&) const;
	virtual String getSerialNumber() const;
	virtual Boolean getVersion(CIMProperty&) const;
	virtual String getVersion() const;
	virtual Boolean getPartNumber(CIMProperty&) const;
	virtual String getPartNumber() const;
	virtual Boolean getOtherIdentifyingInfo(CIMProperty&) const;
	virtual String getOtherIdentifyingInfo() const;
	virtual Boolean getPoweredOn(CIMProperty&) const;
	virtual Boolean getPoweredOn() const;
	virtual Boolean getManufactureDate(CIMProperty&) const;
	virtual CIMDateTime getManufactureDate() const;
	virtual Boolean getVendorEquipmentType(CIMProperty&) const;
	virtual String getVendorEquipmentType() const;
	virtual Boolean getUserTracking(CIMProperty&) const;
	virtual String getUserTracking() const;
	virtual Boolean getCanBeFRUed(CIMProperty&) const;
	virtual Boolean getCanBeFRUed() const;
	virtual Boolean getRemovalConditions(CIMProperty&) const;
	virtual Uint16 getRemovalConditions() const;
	virtual Boolean getRemovable(CIMProperty&) const;
	virtual Boolean getRemovable() const;
	virtual Boolean getReplaceable(CIMProperty&) const;
	virtual Boolean getReplaceable() const;
	virtual Boolean getHotSwappable(CIMProperty&) const;
	virtual Boolean getHotSwappable() const;
	virtual Boolean getHeight(CIMProperty&) const;
	virtual Real32 getHeight() const;
	virtual Boolean getDepth(CIMProperty&) const;
	virtual Real32 getDepth() const;
	virtual Boolean getWidth(CIMProperty&) const;
	virtual Real32 getWidth() const;
	virtual Boolean getWeight(CIMProperty&) const;
	virtual Real32 getWeight() const;
	virtual Boolean getPackageType(CIMProperty&) const;
	virtual Uint16 getPackageType() const;
	virtual Boolean getOtherPackageType(CIMProperty&) const;
	virtual String getOtherPackageType() const;
	virtual Boolean getVendorCompatibilityStrings(CIMProperty&) const;
	virtual Array<String> getVendorCompatibilityStrings() const;
	virtual Boolean getCableManagementStrategy(CIMProperty&) const;
	virtual String getCableManagementStrategy() const;
	virtual Boolean getServicePhilosophy(CIMProperty&) const;
	virtual Array<Uint16> getServicePhilosophy() const;
	virtual Boolean getServiceDescriptions(CIMProperty&) const;
	virtual Array<String> getServiceDescriptions() const;
	virtual Boolean getLockPresent(CIMProperty&) const;
	virtual Boolean getLockPresent() const;
	virtual Boolean getAudibleAlarm(CIMProperty&) const;
	virtual Boolean getAudibleAlarm() const;
	virtual Boolean getVisibleAlarm(CIMProperty&) const;
	virtual Boolean getVisibleAlarm() const;
	virtual Boolean getSecurityBreach(CIMProperty&) const;
	virtual Uint16 getSecurityBreach() const;
	virtual Boolean getBreachDescription(CIMProperty&) const;
	virtual String getBreachDescription() const;
	virtual Boolean getIsLocked(CIMProperty&) const;
	virtual Boolean getIsLocked() const;
	virtual Boolean getNumberOfPowerCords(CIMProperty&) const;
	virtual Uint16 getNumberOfPowerCords() const;
	virtual Boolean getCurrentRequiredOrProduced(CIMProperty&) const;
	virtual Sint16 getCurrentRequiredOrProduced() const;
	virtual Boolean getHeatGeneration(CIMProperty&) const;
	virtual Uint16 getHeatGeneration() const;
	virtual Boolean getChassisTypes(CIMProperty&) const;
	virtual Array<Uint16> getChassisTypes() const;
	virtual Boolean getTypeDescriptions(CIMProperty&) const;
	virtual Array<String> getTypeDescriptions() const;
	virtual Boolean getChassisPackageType(CIMProperty&) const;
	virtual Uint16 getChassisPackageType() const;
	virtual Boolean getChassisTypeDescription(CIMProperty&) const;
	virtual String getChassisTypeDescription() const;
	virtual Boolean getMultipleSystemSupport(CIMProperty&) const;
	virtual Uint16 getMultipleSystemSupport() const;
	virtual Boolean getRackMountable(CIMProperty&) const;
	virtual Uint16 getRackMountable() const;

private:
	CIMName currentScope;

#	include "UNIX_ChassisPrivate.h"


};

#endif /* UNIX_CHASSIS */
