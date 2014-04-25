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


UNIX_TokenBucketMeterService::UNIX_TokenBucketMeterService(void)
{
}

UNIX_TokenBucketMeterService::~UNIX_TokenBucketMeterService(void)
{
}


Boolean UNIX_TokenBucketMeterService::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_TokenBucketMeterService::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_TokenBucketMeterService::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_TokenBucketMeterService::getCaption() const
{
	return String ("");
}

Boolean UNIX_TokenBucketMeterService::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_TokenBucketMeterService::getDescription() const
{
	return String ("");
}

Boolean UNIX_TokenBucketMeterService::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_TokenBucketMeterService::getElementName() const
{
	return String("TokenBucketMeterService");
}

Boolean UNIX_TokenBucketMeterService::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_TokenBucketMeterService::getInstallDate() const
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

Boolean UNIX_TokenBucketMeterService::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_TokenBucketMeterService::getName() const
{
	return String ("");
}

Boolean UNIX_TokenBucketMeterService::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_TokenBucketMeterService::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_TokenBucketMeterService::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_TokenBucketMeterService::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_TokenBucketMeterService::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_TokenBucketMeterService::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_TokenBucketMeterService::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_TokenBucketMeterService::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_TokenBucketMeterService::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_TokenBucketMeterService::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_TokenBucketMeterService::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_TokenBucketMeterService::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_TokenBucketMeterService::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_TokenBucketMeterService::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_TokenBucketMeterService::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_TokenBucketMeterService::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_TokenBucketMeterService::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_TokenBucketMeterService::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_TokenBucketMeterService::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_TokenBucketMeterService::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_TokenBucketMeterService::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_TokenBucketMeterService::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_TokenBucketMeterService::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_TokenBucketMeterService::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_TokenBucketMeterService::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_TokenBucketMeterService::getTimeOfLastStateChange() const
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

Boolean UNIX_TokenBucketMeterService::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_TokenBucketMeterService::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_TokenBucketMeterService::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_TokenBucketMeterService::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_TokenBucketMeterService::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_TokenBucketMeterService::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_TokenBucketMeterService::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_TokenBucketMeterService::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_TokenBucketMeterService::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_TokenBucketMeterService::getCreationClassName() const
{
	return String("UNIX_TokenBucketMeterService");
}

Boolean UNIX_TokenBucketMeterService::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_TokenBucketMeterService::getPrimaryOwnerName() const
{
	return String ("");
}

Boolean UNIX_TokenBucketMeterService::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_TokenBucketMeterService::getPrimaryOwnerContact() const
{
	return String ("");
}

Boolean UNIX_TokenBucketMeterService::getStartMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_MODE, getStartMode());
	return true;
}

String UNIX_TokenBucketMeterService::getStartMode() const
{
	return String ("");
}

Boolean UNIX_TokenBucketMeterService::getStarted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTED, getStarted());
	return true;
}

Boolean UNIX_TokenBucketMeterService::getStarted() const
{
	return Boolean(false);
}

Boolean UNIX_TokenBucketMeterService::getEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED, getEnabled());
	return true;
}

Boolean UNIX_TokenBucketMeterService::getEnabled() const
{
	return Boolean(false);
}

Boolean UNIX_TokenBucketMeterService::getMeterType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_METER_TYPE, getMeterType());
	return true;
}

Uint16 UNIX_TokenBucketMeterService::getMeterType() const
{
	return Uint16(0);
}

Boolean UNIX_TokenBucketMeterService::getOtherMeterType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_METER_TYPE, getOtherMeterType());
	return true;
}

String UNIX_TokenBucketMeterService::getOtherMeterType() const
{
	return String ("");
}

Boolean UNIX_TokenBucketMeterService::getConformanceLevels(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFORMANCE_LEVELS, getConformanceLevels());
	return true;
}

Uint16 UNIX_TokenBucketMeterService::getConformanceLevels() const
{
	return Uint16(0);
}

Boolean UNIX_TokenBucketMeterService::getAverageRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVERAGE_RATE, getAverageRate());
	return true;
}

Uint32 UNIX_TokenBucketMeterService::getAverageRate() const
{
	return Uint32(0);
}

Boolean UNIX_TokenBucketMeterService::getPeakRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PEAK_RATE, getPeakRate());
	return true;
}

Uint32 UNIX_TokenBucketMeterService::getPeakRate() const
{
	return Uint32(0);
}

Boolean UNIX_TokenBucketMeterService::getBurstSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BURST_SIZE, getBurstSize());
	return true;
}

Uint32 UNIX_TokenBucketMeterService::getBurstSize() const
{
	return Uint32(0);
}

Boolean UNIX_TokenBucketMeterService::getExcessBurstSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXCESS_BURST_SIZE, getExcessBurstSize());
	return true;
}

Uint32 UNIX_TokenBucketMeterService::getExcessBurstSize() const
{
	return Uint32(0);
}



Boolean UNIX_TokenBucketMeterService::initialize()
{
	return false;
}

Boolean UNIX_TokenBucketMeterService::load(int &pIndex)
{
	return false;
}

Boolean UNIX_TokenBucketMeterService::finalize()
{
	return false;
}

Boolean UNIX_TokenBucketMeterService::find(Array<CIMKeyBinding> &kbArray)
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
