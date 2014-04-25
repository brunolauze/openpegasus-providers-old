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

#ifndef __UNIX_PRINTMARKER_H
#define __UNIX_PRINTMARKER_H


#include "CIM_PrinterElement.h"

#include "UNIX_PrintMarkerDeps.h"


#define PROPERTY_IS_DEFAULT				"IsDefault"
#define PROPERTY_MARK_TECH				"MarkTech"
#define PROPERTY_OTHER_MARK_TECH_DESCRIPTION				"OtherMarkTechDescription"
#define PROPERTY_COUNTER_UNIT				"CounterUnit"
#define PROPERTY_OTHER_COUNTER_UNIT				"OtherCounterUnit"
#define PROPERTY_LIFE_COUNT				"LifeCount"
#define PROPERTY_POWER_ON_COUNT				"PowerOnCount"
#define PROPERTY_PROCESS_COLORANTS				"ProcessColorants"
#define PROPERTY_SPOT_COLORANTS				"SpotColorants"
#define PROPERTY_AVAILABILITY_STATUS				"AvailabilityStatus"
#define PROPERTY_OTHER_AVAILABILITY_STATUS				"OtherAvailabilityStatus"
#define PROPERTY_NON_CRITICAL_ALERTS_PRESENT				"NonCriticalAlertsPresent"
#define PROPERTY_CRITICAL_ALERTS_PRESENT				"CriticalAlertsPresent"
#define PROPERTY_ADDRESSABILITY_BASIS				"AddressabilityBasis"
#define PROPERTY_FEED_ADDRESSABILITY				"FeedAddressability"
#define PROPERTY_X_FEED_ADDRESSABILITY				"XFeedAddressability"


class UNIX_PrintMarker :
	public CIM_PrinterElement
{
public:

	UNIX_PrintMarker();
	~UNIX_PrintMarker();

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
	virtual Boolean getMarkTech(CIMProperty&) const;
	virtual Uint32 getMarkTech() const;
	virtual Boolean getOtherMarkTechDescription(CIMProperty&) const;
	virtual String getOtherMarkTechDescription() const;
	virtual Boolean getCounterUnit(CIMProperty&) const;
	virtual Uint32 getCounterUnit() const;
	virtual Boolean getOtherCounterUnit(CIMProperty&) const;
	virtual String getOtherCounterUnit() const;
	virtual Boolean getLifeCount(CIMProperty&) const;
	virtual Uint32 getLifeCount() const;
	virtual Boolean getPowerOnCount(CIMProperty&) const;
	virtual Uint32 getPowerOnCount() const;
	virtual Boolean getProcessColorants(CIMProperty&) const;
	virtual Uint32 getProcessColorants() const;
	virtual Boolean getSpotColorants(CIMProperty&) const;
	virtual Uint32 getSpotColorants() const;
	virtual Boolean getAvailabilityStatus(CIMProperty&) const;
	virtual Uint32 getAvailabilityStatus() const;
	virtual Boolean getOtherAvailabilityStatus(CIMProperty&) const;
	virtual String getOtherAvailabilityStatus() const;
	virtual Boolean getNonCriticalAlertsPresent(CIMProperty&) const;
	virtual Boolean getNonCriticalAlertsPresent() const;
	virtual Boolean getCriticalAlertsPresent(CIMProperty&) const;
	virtual Boolean getCriticalAlertsPresent() const;
	virtual Boolean getAddressabilityBasis(CIMProperty&) const;
	virtual Uint16 getAddressabilityBasis() const;
	virtual Boolean getFeedAddressability(CIMProperty&) const;
	virtual Uint32 getFeedAddressability() const;
	virtual Boolean getXFeedAddressability(CIMProperty&) const;
	virtual Uint32 getXFeedAddressability() const;

private:
	CIMName currentScope;

#	include "UNIX_PrintMarkerPrivate.h"


};

#endif /* UNIX_PRINTMARKER */
