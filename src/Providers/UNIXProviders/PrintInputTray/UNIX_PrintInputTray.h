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

#ifndef __UNIX_PRINTINPUTTRAY_H
#define __UNIX_PRINTINPUTTRAY_H


#include "CIM_PrinterElement.h"

#include "UNIX_PrintInputTrayDeps.h"


#define PROPERTY_IS_DEFAULT				"IsDefault"
#define PROPERTY_LOCALIZED_DESCRIPTION				"LocalizedDescription"
#define PROPERTY_TYPE				"Type"
#define PROPERTY_OTHER_TYPE_DESCRIPTION				"OtherTypeDescription"
#define PROPERTY_CAPACITY_UNIT				"CapacityUnit"
#define PROPERTY_OTHER_CAPACITY_UNIT				"OtherCapacityUnit"
#define PROPERTY_MAX_CAPACITY_BASIS				"MaxCapacityBasis"
#define PROPERTY_MAX_CAPACITY				"MaxCapacity"
#define PROPERTY_CURRENT_LEVEL_BASIS				"CurrentLevelBasis"
#define PROPERTY_CURRENT_LEVEL				"CurrentLevel"
#define PROPERTY_AVAILABILITY_STATUS				"AvailabilityStatus"
#define PROPERTY_OTHER_AVAILABILITY_STATUS				"OtherAvailabilityStatus"
#define PROPERTY_NON_CRITICAL_ALERTS_PRESENT				"NonCriticalAlertsPresent"
#define PROPERTY_CRITICAL_ALERTS_PRESENT				"CriticalAlertsPresent"
#define PROPERTY_MEDIA_SIZE_NAME				"MediaSizeName"
#define PROPERTY_MEDIA_NAME				"MediaName"
#define PROPERTY_MEDIA_WEIGHT_BASIS				"MediaWeightBasis"
#define PROPERTY_MEDIA_WEIGHT				"MediaWeight"
#define PROPERTY_MEDIA_TYPE				"MediaType"
#define PROPERTY_MEDIA_COLOR				"MediaColor"


class UNIX_PrintInputTray :
	public CIM_PrinterElement
{
public:

	UNIX_PrintInputTray();
	~UNIX_PrintInputTray();

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
	virtual Boolean getSNMPRowId(CIMProperty&) const;
	virtual Uint32 getSNMPRowId() const;
	virtual Boolean getIsDefault(CIMProperty&) const;
	virtual Boolean getIsDefault() const;
	virtual Boolean getLocalizedDescription(CIMProperty&) const;
	virtual String getLocalizedDescription() const;
	virtual Boolean getType(CIMProperty&) const;
	virtual Uint32 getType() const;
	virtual Boolean getOtherTypeDescription(CIMProperty&) const;
	virtual String getOtherTypeDescription() const;
	virtual Boolean getCapacityUnit(CIMProperty&) const;
	virtual Uint32 getCapacityUnit() const;
	virtual Boolean getOtherCapacityUnit(CIMProperty&) const;
	virtual String getOtherCapacityUnit() const;
	virtual Boolean getMaxCapacityBasis(CIMProperty&) const;
	virtual Uint16 getMaxCapacityBasis() const;
	virtual Boolean getMaxCapacity(CIMProperty&) const;
	virtual Uint32 getMaxCapacity() const;
	virtual Boolean getCurrentLevelBasis(CIMProperty&) const;
	virtual Uint16 getCurrentLevelBasis() const;
	virtual Boolean getCurrentLevel(CIMProperty&) const;
	virtual Uint32 getCurrentLevel() const;
	virtual Boolean getAvailabilityStatus(CIMProperty&) const;
	virtual Uint32 getAvailabilityStatus() const;
	virtual Boolean getOtherAvailabilityStatus(CIMProperty&) const;
	virtual String getOtherAvailabilityStatus() const;
	virtual Boolean getNonCriticalAlertsPresent(CIMProperty&) const;
	virtual Boolean getNonCriticalAlertsPresent() const;
	virtual Boolean getCriticalAlertsPresent(CIMProperty&) const;
	virtual Boolean getCriticalAlertsPresent() const;
	virtual Boolean getMediaSizeName(CIMProperty&) const;
	virtual String getMediaSizeName() const;
	virtual Boolean getMediaName(CIMProperty&) const;
	virtual String getMediaName() const;
	virtual Boolean getMediaWeightBasis(CIMProperty&) const;
	virtual Uint16 getMediaWeightBasis() const;
	virtual Boolean getMediaWeight(CIMProperty&) const;
	virtual Uint32 getMediaWeight() const;
	virtual Boolean getMediaType(CIMProperty&) const;
	virtual String getMediaType() const;
	virtual Boolean getMediaColor(CIMProperty&) const;
	virtual String getMediaColor() const;

private:
	CIMName currentScope;

#	include "UNIX_PrintInputTrayPrivate.h"


};

#endif /* UNIX_PRINTINPUTTRAY */
