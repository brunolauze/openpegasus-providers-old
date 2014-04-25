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


UNIX_PrintMarker::UNIX_PrintMarker(void)
{
}

UNIX_PrintMarker::~UNIX_PrintMarker(void)
{
}


Boolean UNIX_PrintMarker::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PrintMarker::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_PrintMarker::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PrintMarker::getCaption() const
{
	return String ("");
}

Boolean UNIX_PrintMarker::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PrintMarker::getDescription() const
{
	return String ("");
}

Boolean UNIX_PrintMarker::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PrintMarker::getElementName() const
{
	return String("PrintMarker");
}

Boolean UNIX_PrintMarker::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_PrintMarker::getInstallDate() const
{
	struct tm* clock;			// create a time structure
	time_t val = time(NULL);
	clock = gmtime(&(val));	// Get the last modified time and put it into the time structure
	return CIMDateTime(
		clock->tm_year + 1900,
		clock->tm_mon + 1,
		clock->tm_mday,
		clock->tm_hour,
		clock->tm_min,
		clock->tm_sec,
		0,0,
		clock->tm_gmtoff);
}

Boolean UNIX_PrintMarker::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PrintMarker::getName() const
{
	return String ("");
}

Boolean UNIX_PrintMarker::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_PrintMarker::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PrintMarker::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_PrintMarker::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PrintMarker::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_PrintMarker::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_PrintMarker::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_PrintMarker::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_PrintMarker::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_PrintMarker::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_PrintMarker::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_PrintMarker::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_PrintMarker::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_PrintMarker::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_PrintMarker::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_PrintMarker::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_PrintMarker::getSNMPRowId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_N_M_P_ROW_ID, getSNMPRowId());
	return true;
}

Uint32 UNIX_PrintMarker::getSNMPRowId() const
{
	return Uint32(0);
}

Boolean UNIX_PrintMarker::getIsDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_DEFAULT, getIsDefault());
	return true;
}

Boolean UNIX_PrintMarker::getIsDefault() const
{
	return Boolean(false);
}

Boolean UNIX_PrintMarker::getMarkTech(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MARK_TECH, getMarkTech());
	return true;
}

Uint32 UNIX_PrintMarker::getMarkTech() const
{
	return Uint32(0);
}

Boolean UNIX_PrintMarker::getOtherMarkTechDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_MARK_TECH_DESCRIPTION, getOtherMarkTechDescription());
	return true;
}

String UNIX_PrintMarker::getOtherMarkTechDescription() const
{
	return String ("");
}

Boolean UNIX_PrintMarker::getCounterUnit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COUNTER_UNIT, getCounterUnit());
	return true;
}

Uint32 UNIX_PrintMarker::getCounterUnit() const
{
	return Uint32(0);
}

Boolean UNIX_PrintMarker::getOtherCounterUnit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_COUNTER_UNIT, getOtherCounterUnit());
	return true;
}

String UNIX_PrintMarker::getOtherCounterUnit() const
{
	return String ("");
}

Boolean UNIX_PrintMarker::getLifeCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LIFE_COUNT, getLifeCount());
	return true;
}

Uint32 UNIX_PrintMarker::getLifeCount() const
{
	return Uint32(0);
}

Boolean UNIX_PrintMarker::getPowerOnCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_COUNT, getPowerOnCount());
	return true;
}

Uint32 UNIX_PrintMarker::getPowerOnCount() const
{
	return Uint32(0);
}

Boolean UNIX_PrintMarker::getProcessColorants(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROCESS_COLORANTS, getProcessColorants());
	return true;
}

Uint32 UNIX_PrintMarker::getProcessColorants() const
{
	return Uint32(0);
}

Boolean UNIX_PrintMarker::getSpotColorants(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPOT_COLORANTS, getSpotColorants());
	return true;
}

Uint32 UNIX_PrintMarker::getSpotColorants() const
{
	return Uint32(0);
}

Boolean UNIX_PrintMarker::getAvailabilityStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY_STATUS, getAvailabilityStatus());
	return true;
}

Uint32 UNIX_PrintMarker::getAvailabilityStatus() const
{
	return Uint32(0);
}

Boolean UNIX_PrintMarker::getOtherAvailabilityStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_AVAILABILITY_STATUS, getOtherAvailabilityStatus());
	return true;
}

String UNIX_PrintMarker::getOtherAvailabilityStatus() const
{
	return String ("");
}

Boolean UNIX_PrintMarker::getNonCriticalAlertsPresent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NON_CRITICAL_ALERTS_PRESENT, getNonCriticalAlertsPresent());
	return true;
}

Boolean UNIX_PrintMarker::getNonCriticalAlertsPresent() const
{
	return Boolean(false);
}

Boolean UNIX_PrintMarker::getCriticalAlertsPresent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CRITICAL_ALERTS_PRESENT, getCriticalAlertsPresent());
	return true;
}

Boolean UNIX_PrintMarker::getCriticalAlertsPresent() const
{
	return Boolean(false);
}

Boolean UNIX_PrintMarker::getAddressabilityBasis(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESSABILITY_BASIS, getAddressabilityBasis());
	return true;
}

Uint16 UNIX_PrintMarker::getAddressabilityBasis() const
{
	return Uint16(0);
}

Boolean UNIX_PrintMarker::getFeedAddressability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FEED_ADDRESSABILITY, getFeedAddressability());
	return true;
}

Uint32 UNIX_PrintMarker::getFeedAddressability() const
{
	return Uint32(0);
}

Boolean UNIX_PrintMarker::getXFeedAddressability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_X_FEED_ADDRESSABILITY, getXFeedAddressability());
	return true;
}

Uint32 UNIX_PrintMarker::getXFeedAddressability() const
{
	return Uint32(0);
}



Boolean UNIX_PrintMarker::initialize()
{
	return false;
}

Boolean UNIX_PrintMarker::load(int &pIndex)
{
	return false;
}

Boolean UNIX_PrintMarker::finalize()
{
	return false;
}

Boolean UNIX_PrintMarker::find(Array<CIMKeyBinding> &kbArray)
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
