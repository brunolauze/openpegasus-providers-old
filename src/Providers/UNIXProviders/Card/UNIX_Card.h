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

#ifndef __UNIX_CARD_H
#define __UNIX_CARD_H


#include "CIM_PhysicalPackage.h"

#include "UNIX_CardDeps.h"


#define PROPERTY_HOSTING_BOARD				"HostingBoard"
#define PROPERTY_SLOT_LAYOUT				"SlotLayout"
#define PROPERTY_REQUIRES_DAUGHTER_BOARD				"RequiresDaughterBoard"
#define PROPERTY_SPECIAL_REQUIREMENTS				"SpecialRequirements"
#define PROPERTY_REQUIREMENTS_DESCRIPTION				"RequirementsDescription"
#define PROPERTY_OPERATING_VOLTAGES				"OperatingVoltages"


class UNIX_Card :
	public CIM_PhysicalPackage
{
public:

	UNIX_Card();
	~UNIX_Card();

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
	virtual Boolean getHostingBoard(CIMProperty&) const;
	virtual Boolean getHostingBoard() const;
	virtual Boolean getSlotLayout(CIMProperty&) const;
	virtual String getSlotLayout() const;
	virtual Boolean getRequiresDaughterBoard(CIMProperty&) const;
	virtual Boolean getRequiresDaughterBoard() const;
	virtual Boolean getSpecialRequirements(CIMProperty&) const;
	virtual Boolean getSpecialRequirements() const;
	virtual Boolean getRequirementsDescription(CIMProperty&) const;
	virtual String getRequirementsDescription() const;
	virtual Boolean getOperatingVoltages(CIMProperty&) const;
	virtual Array<Sint16> getOperatingVoltages() const;

private:
	CIMName currentScope;

#	include "UNIX_CardPrivate.h"


};

#endif /* UNIX_CARD */
