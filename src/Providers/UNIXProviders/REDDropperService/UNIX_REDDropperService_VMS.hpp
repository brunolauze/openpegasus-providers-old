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


UNIX_REDDropperService::UNIX_REDDropperService(void)
{
}

UNIX_REDDropperService::~UNIX_REDDropperService(void)
{
}


Boolean UNIX_REDDropperService::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_REDDropperService::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_REDDropperService::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_REDDropperService::getCaption() const
{
	return String ("");
}

Boolean UNIX_REDDropperService::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_REDDropperService::getDescription() const
{
	return String ("");
}

Boolean UNIX_REDDropperService::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_REDDropperService::getElementName() const
{
	return String("REDDropperService");
}

Boolean UNIX_REDDropperService::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_REDDropperService::getInstallDate() const
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

Boolean UNIX_REDDropperService::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_REDDropperService::getName() const
{
	return String ("");
}

Boolean UNIX_REDDropperService::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_REDDropperService::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_REDDropperService::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_REDDropperService::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_REDDropperService::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_REDDropperService::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_REDDropperService::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_REDDropperService::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_REDDropperService::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_REDDropperService::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_REDDropperService::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_REDDropperService::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_REDDropperService::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_REDDropperService::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_REDDropperService::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_REDDropperService::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_REDDropperService::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_REDDropperService::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_REDDropperService::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_REDDropperService::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_REDDropperService::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_REDDropperService::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_REDDropperService::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_REDDropperService::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_REDDropperService::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_REDDropperService::getTimeOfLastStateChange() const
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

Boolean UNIX_REDDropperService::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_REDDropperService::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_REDDropperService::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_REDDropperService::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_REDDropperService::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_REDDropperService::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_REDDropperService::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_REDDropperService::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_REDDropperService::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_REDDropperService::getCreationClassName() const
{
	return String("UNIX_REDDropperService");
}

Boolean UNIX_REDDropperService::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_REDDropperService::getPrimaryOwnerName() const
{
	return String ("");
}

Boolean UNIX_REDDropperService::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_REDDropperService::getPrimaryOwnerContact() const
{
	return String ("");
}

Boolean UNIX_REDDropperService::getStartMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_MODE, getStartMode());
	return true;
}

String UNIX_REDDropperService::getStartMode() const
{
	return String ("");
}

Boolean UNIX_REDDropperService::getStarted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTED, getStarted());
	return true;
}

Boolean UNIX_REDDropperService::getStarted() const
{
	return Boolean(false);
}

Boolean UNIX_REDDropperService::getEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED, getEnabled());
	return true;
}

Boolean UNIX_REDDropperService::getEnabled() const
{
	return Boolean(false);
}

Boolean UNIX_REDDropperService::getDropperType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DROPPER_TYPE, getDropperType());
	return true;
}

Uint16 UNIX_REDDropperService::getDropperType() const
{
	return Uint16(0);
}

Boolean UNIX_REDDropperService::getOtherDropperType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_DROPPER_TYPE, getOtherDropperType());
	return true;
}

String UNIX_REDDropperService::getOtherDropperType() const
{
	return String ("");
}

Boolean UNIX_REDDropperService::getAlwaysDrop(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALWAYS_DROP, getAlwaysDrop());
	return true;
}

Uint16 UNIX_REDDropperService::getAlwaysDrop() const
{
	return Uint16(0);
}

Boolean UNIX_REDDropperService::getDropFrom(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DROP_FROM, getDropFrom());
	return true;
}

Uint16 UNIX_REDDropperService::getDropFrom() const
{
	return Uint16(0);
}

Boolean UNIX_REDDropperService::getDropStartMetric(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DROP_START_METRIC, getDropStartMetric());
	return true;
}

Uint16 UNIX_REDDropperService::getDropStartMetric() const
{
	return Uint16(0);
}

Boolean UNIX_REDDropperService::getDropMaintainMetric(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DROP_MAINTAIN_METRIC, getDropMaintainMetric());
	return true;
}

Uint16 UNIX_REDDropperService::getDropMaintainMetric() const
{
	return Uint16(0);
}

Boolean UNIX_REDDropperService::getMinQueueThreshold(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_QUEUE_THRESHOLD, getMinQueueThreshold());
	return true;
}

Uint32 UNIX_REDDropperService::getMinQueueThreshold() const
{
	return Uint32(0);
}

Boolean UNIX_REDDropperService::getMaxQueueThreshold(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUEUE_THRESHOLD, getMaxQueueThreshold());
	return true;
}

Uint32 UNIX_REDDropperService::getMaxQueueThreshold() const
{
	return Uint32(0);
}

Boolean UNIX_REDDropperService::getStartProbability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_PROBABILITY, getStartProbability());
	return true;
}

Uint32 UNIX_REDDropperService::getStartProbability() const
{
	return Uint32(0);
}

Boolean UNIX_REDDropperService::getStopProbability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STOP_PROBABILITY, getStopProbability());
	return true;
}

Uint32 UNIX_REDDropperService::getStopProbability() const
{
	return Uint32(0);
}

Boolean UNIX_REDDropperService::getThresholdUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_THRESHOLD_UNITS, getThresholdUnits());
	return true;
}

Uint16 UNIX_REDDropperService::getThresholdUnits() const
{
	return Uint16(0);
}



Boolean UNIX_REDDropperService::initialize()
{
	return false;
}

Boolean UNIX_REDDropperService::load(int &pIndex)
{
	return false;
}

Boolean UNIX_REDDropperService::finalize()
{
	return false;
}

Boolean UNIX_REDDropperService::find(Array<CIMKeyBinding> &kbArray)
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
