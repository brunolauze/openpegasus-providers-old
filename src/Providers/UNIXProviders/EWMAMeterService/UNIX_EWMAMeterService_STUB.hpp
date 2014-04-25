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


UNIX_EWMAMeterService::UNIX_EWMAMeterService(void)
{
}

UNIX_EWMAMeterService::~UNIX_EWMAMeterService(void)
{
}


Boolean UNIX_EWMAMeterService::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_EWMAMeterService::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_EWMAMeterService::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_EWMAMeterService::getCaption() const
{
	return String ("");
}

Boolean UNIX_EWMAMeterService::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_EWMAMeterService::getDescription() const
{
	return String ("");
}

Boolean UNIX_EWMAMeterService::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_EWMAMeterService::getElementName() const
{
	return String("EWMAMeterService");
}

Boolean UNIX_EWMAMeterService::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_EWMAMeterService::getInstallDate() const
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

Boolean UNIX_EWMAMeterService::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_EWMAMeterService::getName() const
{
	return String ("");
}

Boolean UNIX_EWMAMeterService::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_EWMAMeterService::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_EWMAMeterService::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_EWMAMeterService::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_EWMAMeterService::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_EWMAMeterService::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_EWMAMeterService::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_EWMAMeterService::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_EWMAMeterService::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_EWMAMeterService::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_EWMAMeterService::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_EWMAMeterService::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_EWMAMeterService::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_EWMAMeterService::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_EWMAMeterService::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_EWMAMeterService::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_EWMAMeterService::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_EWMAMeterService::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_EWMAMeterService::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_EWMAMeterService::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_EWMAMeterService::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_EWMAMeterService::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_EWMAMeterService::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_EWMAMeterService::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_EWMAMeterService::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_EWMAMeterService::getTimeOfLastStateChange() const
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

Boolean UNIX_EWMAMeterService::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_EWMAMeterService::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_EWMAMeterService::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_EWMAMeterService::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_EWMAMeterService::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_EWMAMeterService::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_EWMAMeterService::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_EWMAMeterService::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_EWMAMeterService::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_EWMAMeterService::getCreationClassName() const
{
	return String("UNIX_EWMAMeterService");
}

Boolean UNIX_EWMAMeterService::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_EWMAMeterService::getPrimaryOwnerName() const
{
	return String ("");
}

Boolean UNIX_EWMAMeterService::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_EWMAMeterService::getPrimaryOwnerContact() const
{
	return String ("");
}

Boolean UNIX_EWMAMeterService::getStartMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_MODE, getStartMode());
	return true;
}

String UNIX_EWMAMeterService::getStartMode() const
{
	return String ("");
}

Boolean UNIX_EWMAMeterService::getStarted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTED, getStarted());
	return true;
}

Boolean UNIX_EWMAMeterService::getStarted() const
{
	return Boolean(false);
}

Boolean UNIX_EWMAMeterService::getEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED, getEnabled());
	return true;
}

Boolean UNIX_EWMAMeterService::getEnabled() const
{
	return Boolean(false);
}

Boolean UNIX_EWMAMeterService::getMeterType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_METER_TYPE, getMeterType());
	return true;
}

Uint16 UNIX_EWMAMeterService::getMeterType() const
{
	return Uint16(0);
}

Boolean UNIX_EWMAMeterService::getOtherMeterType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_METER_TYPE, getOtherMeterType());
	return true;
}

String UNIX_EWMAMeterService::getOtherMeterType() const
{
	return String ("");
}

Boolean UNIX_EWMAMeterService::getConformanceLevels(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFORMANCE_LEVELS, getConformanceLevels());
	return true;
}

Uint16 UNIX_EWMAMeterService::getConformanceLevels() const
{
	return Uint16(0);
}

Boolean UNIX_EWMAMeterService::getAverageRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVERAGE_RATE, getAverageRate());
	return true;
}

Uint32 UNIX_EWMAMeterService::getAverageRate() const
{
	return Uint32(0);
}

Boolean UNIX_EWMAMeterService::getDeltaInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_INTERVAL, getDeltaInterval());
	return true;
}

Uint64 UNIX_EWMAMeterService::getDeltaInterval() const
{
	return Uint64(0);
}

Boolean UNIX_EWMAMeterService::getGain(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GAIN, getGain());
	return true;
}

Uint32 UNIX_EWMAMeterService::getGain() const
{
	return Uint32(0);
}



Boolean UNIX_EWMAMeterService::initialize()
{
	return false;
}

Boolean UNIX_EWMAMeterService::load(int &pIndex)
{
	return false;
}

Boolean UNIX_EWMAMeterService::finalize()
{
	return false;
}

Boolean UNIX_EWMAMeterService::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
