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


UNIX_PrintInputTray::UNIX_PrintInputTray(void)
{
}

UNIX_PrintInputTray::~UNIX_PrintInputTray(void)
{
}


Boolean UNIX_PrintInputTray::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PrintInputTray::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_PrintInputTray::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PrintInputTray::getCaption() const
{
	return String ("");
}

Boolean UNIX_PrintInputTray::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PrintInputTray::getDescription() const
{
	return String ("");
}

Boolean UNIX_PrintInputTray::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PrintInputTray::getElementName() const
{
	return String("PrintInputTray");
}

Boolean UNIX_PrintInputTray::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_PrintInputTray::getInstallDate() const
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

Boolean UNIX_PrintInputTray::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PrintInputTray::getName() const
{
	return String ("");
}

Boolean UNIX_PrintInputTray::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_PrintInputTray::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PrintInputTray::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_PrintInputTray::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PrintInputTray::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_PrintInputTray::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_PrintInputTray::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_PrintInputTray::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_PrintInputTray::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_PrintInputTray::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_PrintInputTray::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_PrintInputTray::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_PrintInputTray::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_PrintInputTray::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_PrintInputTray::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_PrintInputTray::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_PrintInputTray::getSNMPRowId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_N_M_P_ROW_ID, getSNMPRowId());
	return true;
}

Uint32 UNIX_PrintInputTray::getSNMPRowId() const
{
	return Uint32(0);
}

Boolean UNIX_PrintInputTray::getIsDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_DEFAULT, getIsDefault());
	return true;
}

Boolean UNIX_PrintInputTray::getIsDefault() const
{
	return Boolean(false);
}

Boolean UNIX_PrintInputTray::getLocalizedDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCALIZED_DESCRIPTION, getLocalizedDescription());
	return true;
}

String UNIX_PrintInputTray::getLocalizedDescription() const
{
	return String ("");
}

Boolean UNIX_PrintInputTray::getType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TYPE, getType());
	return true;
}

Uint32 UNIX_PrintInputTray::getType() const
{
	return Uint32(0);
}

Boolean UNIX_PrintInputTray::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_PrintInputTray::getOtherTypeDescription() const
{
	return String ("");
}

Boolean UNIX_PrintInputTray::getCapacityUnit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPACITY_UNIT, getCapacityUnit());
	return true;
}

Uint32 UNIX_PrintInputTray::getCapacityUnit() const
{
	return Uint32(0);
}

Boolean UNIX_PrintInputTray::getOtherCapacityUnit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_CAPACITY_UNIT, getOtherCapacityUnit());
	return true;
}

String UNIX_PrintInputTray::getOtherCapacityUnit() const
{
	return String ("");
}

Boolean UNIX_PrintInputTray::getMaxCapacityBasis(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_CAPACITY_BASIS, getMaxCapacityBasis());
	return true;
}

Uint16 UNIX_PrintInputTray::getMaxCapacityBasis() const
{
	return Uint16(0);
}

Boolean UNIX_PrintInputTray::getMaxCapacity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_CAPACITY, getMaxCapacity());
	return true;
}

Uint32 UNIX_PrintInputTray::getMaxCapacity() const
{
	return Uint32(0);
}

Boolean UNIX_PrintInputTray::getCurrentLevelBasis(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_LEVEL_BASIS, getCurrentLevelBasis());
	return true;
}

Uint16 UNIX_PrintInputTray::getCurrentLevelBasis() const
{
	return Uint16(0);
}

Boolean UNIX_PrintInputTray::getCurrentLevel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_LEVEL, getCurrentLevel());
	return true;
}

Uint32 UNIX_PrintInputTray::getCurrentLevel() const
{
	return Uint32(0);
}

Boolean UNIX_PrintInputTray::getAvailabilityStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY_STATUS, getAvailabilityStatus());
	return true;
}

Uint32 UNIX_PrintInputTray::getAvailabilityStatus() const
{
	return Uint32(0);
}

Boolean UNIX_PrintInputTray::getOtherAvailabilityStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_AVAILABILITY_STATUS, getOtherAvailabilityStatus());
	return true;
}

String UNIX_PrintInputTray::getOtherAvailabilityStatus() const
{
	return String ("");
}

Boolean UNIX_PrintInputTray::getNonCriticalAlertsPresent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NON_CRITICAL_ALERTS_PRESENT, getNonCriticalAlertsPresent());
	return true;
}

Boolean UNIX_PrintInputTray::getNonCriticalAlertsPresent() const
{
	return Boolean(false);
}

Boolean UNIX_PrintInputTray::getCriticalAlertsPresent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CRITICAL_ALERTS_PRESENT, getCriticalAlertsPresent());
	return true;
}

Boolean UNIX_PrintInputTray::getCriticalAlertsPresent() const
{
	return Boolean(false);
}

Boolean UNIX_PrintInputTray::getMediaSizeName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA_SIZE_NAME, getMediaSizeName());
	return true;
}

String UNIX_PrintInputTray::getMediaSizeName() const
{
	return String ("");
}

Boolean UNIX_PrintInputTray::getMediaName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA_NAME, getMediaName());
	return true;
}

String UNIX_PrintInputTray::getMediaName() const
{
	return String ("");
}

Boolean UNIX_PrintInputTray::getMediaWeightBasis(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA_WEIGHT_BASIS, getMediaWeightBasis());
	return true;
}

Uint16 UNIX_PrintInputTray::getMediaWeightBasis() const
{
	return Uint16(0);
}

Boolean UNIX_PrintInputTray::getMediaWeight(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA_WEIGHT, getMediaWeight());
	return true;
}

Uint32 UNIX_PrintInputTray::getMediaWeight() const
{
	return Uint32(0);
}

Boolean UNIX_PrintInputTray::getMediaType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA_TYPE, getMediaType());
	return true;
}

String UNIX_PrintInputTray::getMediaType() const
{
	return String ("");
}

Boolean UNIX_PrintInputTray::getMediaColor(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA_COLOR, getMediaColor());
	return true;
}

String UNIX_PrintInputTray::getMediaColor() const
{
	return String ("");
}



Boolean UNIX_PrintInputTray::initialize()
{
	return false;
}

Boolean UNIX_PrintInputTray::load(int &pIndex)
{
	return false;
}

Boolean UNIX_PrintInputTray::finalize()
{
	return false;
}

Boolean UNIX_PrintInputTray::find(Array<CIMKeyBinding> &kbArray)
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
