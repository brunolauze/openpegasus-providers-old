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


UNIX_PrintInterpreter::UNIX_PrintInterpreter(void)
{
}

UNIX_PrintInterpreter::~UNIX_PrintInterpreter(void)
{
}


Boolean UNIX_PrintInterpreter::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PrintInterpreter::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_PrintInterpreter::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PrintInterpreter::getCaption() const
{
	return String ("");
}

Boolean UNIX_PrintInterpreter::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PrintInterpreter::getDescription() const
{
	return String ("");
}

Boolean UNIX_PrintInterpreter::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PrintInterpreter::getElementName() const
{
	return String("PrintInterpreter");
}

Boolean UNIX_PrintInterpreter::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_PrintInterpreter::getInstallDate() const
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

Boolean UNIX_PrintInterpreter::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PrintInterpreter::getName() const
{
	return String ("");
}

Boolean UNIX_PrintInterpreter::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_PrintInterpreter::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PrintInterpreter::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_PrintInterpreter::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PrintInterpreter::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_PrintInterpreter::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_PrintInterpreter::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_PrintInterpreter::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_PrintInterpreter::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_PrintInterpreter::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_PrintInterpreter::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_PrintInterpreter::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_PrintInterpreter::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_PrintInterpreter::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_PrintInterpreter::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_PrintInterpreter::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_PrintInterpreter::getSNMPRowId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_N_M_P_ROW_ID, getSNMPRowId());
	return true;
}

Uint32 UNIX_PrintInterpreter::getSNMPRowId() const
{
	return Uint32(0);
}

Boolean UNIX_PrintInterpreter::getLocalizedDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCALIZED_DESCRIPTION, getLocalizedDescription());
	return true;
}

String UNIX_PrintInterpreter::getLocalizedDescription() const
{
	return String ("");
}

Boolean UNIX_PrintInterpreter::getLangType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LANG_TYPE, getLangType());
	return true;
}

Uint32 UNIX_PrintInterpreter::getLangType() const
{
	return Uint32(0);
}

Boolean UNIX_PrintInterpreter::getOtherLangTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LANG_TYPE_DESCRIPTION, getOtherLangTypeDescription());
	return true;
}

String UNIX_PrintInterpreter::getOtherLangTypeDescription() const
{
	return String ("");
}

Boolean UNIX_PrintInterpreter::getLangLevel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LANG_LEVEL, getLangLevel());
	return true;
}

String UNIX_PrintInterpreter::getLangLevel() const
{
	return String ("");
}

Boolean UNIX_PrintInterpreter::getAddressabilityBasis(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESSABILITY_BASIS, getAddressabilityBasis());
	return true;
}

Uint16 UNIX_PrintInterpreter::getAddressabilityBasis() const
{
	return Uint16(0);
}

Boolean UNIX_PrintInterpreter::getFeedAddressability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FEED_ADDRESSABILITY, getFeedAddressability());
	return true;
}

Uint32 UNIX_PrintInterpreter::getFeedAddressability() const
{
	return Uint32(0);
}

Boolean UNIX_PrintInterpreter::getXFeedAddressability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_X_FEED_ADDRESSABILITY, getXFeedAddressability());
	return true;
}

Uint32 UNIX_PrintInterpreter::getXFeedAddressability() const
{
	return Uint32(0);
}

Boolean UNIX_PrintInterpreter::getDefaultCharSetIn(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_CHAR_SET_IN, getDefaultCharSetIn());
	return true;
}

String UNIX_PrintInterpreter::getDefaultCharSetIn() const
{
	return String ("");
}

Boolean UNIX_PrintInterpreter::getAvailabilityStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY_STATUS, getAvailabilityStatus());
	return true;
}

Uint32 UNIX_PrintInterpreter::getAvailabilityStatus() const
{
	return Uint32(0);
}

Boolean UNIX_PrintInterpreter::getOtherAvailabilityStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_AVAILABILITY_STATUS, getOtherAvailabilityStatus());
	return true;
}

String UNIX_PrintInterpreter::getOtherAvailabilityStatus() const
{
	return String ("");
}

Boolean UNIX_PrintInterpreter::getNonCriticalAlertsPresent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NON_CRITICAL_ALERTS_PRESENT, getNonCriticalAlertsPresent());
	return true;
}

Boolean UNIX_PrintInterpreter::getNonCriticalAlertsPresent() const
{
	return Boolean(false);
}

Boolean UNIX_PrintInterpreter::getCriticalAlertsPresent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CRITICAL_ALERTS_PRESENT, getCriticalAlertsPresent());
	return true;
}

Boolean UNIX_PrintInterpreter::getCriticalAlertsPresent() const
{
	return Boolean(false);
}



Boolean UNIX_PrintInterpreter::initialize()
{
	return false;
}

Boolean UNIX_PrintInterpreter::load(int &pIndex)
{
	return false;
}

Boolean UNIX_PrintInterpreter::finalize()
{
	return false;
}

Boolean UNIX_PrintInterpreter::find(Array<CIMKeyBinding> &kbArray)
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
