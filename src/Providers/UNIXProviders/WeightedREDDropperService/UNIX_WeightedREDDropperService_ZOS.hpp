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


UNIX_WeightedREDDropperService::UNIX_WeightedREDDropperService(void)
{
}

UNIX_WeightedREDDropperService::~UNIX_WeightedREDDropperService(void)
{
}


Boolean UNIX_WeightedREDDropperService::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_WeightedREDDropperService::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_WeightedREDDropperService::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_WeightedREDDropperService::getCaption() const
{
	return String ("");
}

Boolean UNIX_WeightedREDDropperService::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_WeightedREDDropperService::getDescription() const
{
	return String ("");
}

Boolean UNIX_WeightedREDDropperService::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_WeightedREDDropperService::getElementName() const
{
	return String("WeightedREDDropperService");
}

Boolean UNIX_WeightedREDDropperService::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_WeightedREDDropperService::getInstallDate() const
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

Boolean UNIX_WeightedREDDropperService::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_WeightedREDDropperService::getName() const
{
	return String ("");
}

Boolean UNIX_WeightedREDDropperService::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_WeightedREDDropperService::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_WeightedREDDropperService::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_WeightedREDDropperService::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_WeightedREDDropperService::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_WeightedREDDropperService::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_WeightedREDDropperService::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_WeightedREDDropperService::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_WeightedREDDropperService::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_WeightedREDDropperService::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_WeightedREDDropperService::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_WeightedREDDropperService::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_WeightedREDDropperService::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_WeightedREDDropperService::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_WeightedREDDropperService::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_WeightedREDDropperService::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_WeightedREDDropperService::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_WeightedREDDropperService::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_WeightedREDDropperService::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_WeightedREDDropperService::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_WeightedREDDropperService::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_WeightedREDDropperService::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_WeightedREDDropperService::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_WeightedREDDropperService::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_WeightedREDDropperService::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_WeightedREDDropperService::getTimeOfLastStateChange() const
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

Boolean UNIX_WeightedREDDropperService::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_WeightedREDDropperService::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_WeightedREDDropperService::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_WeightedREDDropperService::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_WeightedREDDropperService::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_WeightedREDDropperService::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_WeightedREDDropperService::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_WeightedREDDropperService::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_WeightedREDDropperService::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_WeightedREDDropperService::getCreationClassName() const
{
	return String("UNIX_WeightedREDDropperService");
}

Boolean UNIX_WeightedREDDropperService::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_WeightedREDDropperService::getPrimaryOwnerName() const
{
	return String ("");
}

Boolean UNIX_WeightedREDDropperService::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_WeightedREDDropperService::getPrimaryOwnerContact() const
{
	return String ("");
}

Boolean UNIX_WeightedREDDropperService::getStartMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_MODE, getStartMode());
	return true;
}

String UNIX_WeightedREDDropperService::getStartMode() const
{
	return String ("");
}

Boolean UNIX_WeightedREDDropperService::getStarted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTED, getStarted());
	return true;
}

Boolean UNIX_WeightedREDDropperService::getStarted() const
{
	return Boolean(false);
}

Boolean UNIX_WeightedREDDropperService::getEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED, getEnabled());
	return true;
}

Boolean UNIX_WeightedREDDropperService::getEnabled() const
{
	return Boolean(false);
}

Boolean UNIX_WeightedREDDropperService::getDropperType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DROPPER_TYPE, getDropperType());
	return true;
}

Uint16 UNIX_WeightedREDDropperService::getDropperType() const
{
	return Uint16(0);
}

Boolean UNIX_WeightedREDDropperService::getOtherDropperType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_DROPPER_TYPE, getOtherDropperType());
	return true;
}

String UNIX_WeightedREDDropperService::getOtherDropperType() const
{
	return String ("");
}

Boolean UNIX_WeightedREDDropperService::getAlwaysDrop(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALWAYS_DROP, getAlwaysDrop());
	return true;
}

Uint16 UNIX_WeightedREDDropperService::getAlwaysDrop() const
{
	return Uint16(0);
}

Boolean UNIX_WeightedREDDropperService::getDropFrom(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DROP_FROM, getDropFrom());
	return true;
}

Uint16 UNIX_WeightedREDDropperService::getDropFrom() const
{
	return Uint16(0);
}

Boolean UNIX_WeightedREDDropperService::getDropStartMetric(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DROP_START_METRIC, getDropStartMetric());
	return true;
}

Uint16 UNIX_WeightedREDDropperService::getDropStartMetric() const
{
	return Uint16(0);
}

Boolean UNIX_WeightedREDDropperService::getDropMaintainMetric(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DROP_MAINTAIN_METRIC, getDropMaintainMetric());
	return true;
}

Uint16 UNIX_WeightedREDDropperService::getDropMaintainMetric() const
{
	return Uint16(0);
}

Boolean UNIX_WeightedREDDropperService::getDropMetric(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DROP_METRIC, getDropMetric());
	return true;
}

Uint16 UNIX_WeightedREDDropperService::getDropMetric() const
{
	return Uint16(0);
}

Boolean UNIX_WeightedREDDropperService::getOtherDropMetric(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_DROP_METRIC, getOtherDropMetric());
	return true;
}

String UNIX_WeightedREDDropperService::getOtherDropMetric() const
{
	return String ("");
}

Boolean UNIX_WeightedREDDropperService::getWeight(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WEIGHT, getWeight());
	return true;
}

Real32 UNIX_WeightedREDDropperService::getWeight() const
{
	return Real32(0);
}



Boolean UNIX_WeightedREDDropperService::initialize()
{
	return false;
}

Boolean UNIX_WeightedREDDropperService::load(int &pIndex)
{
	return false;
}

Boolean UNIX_WeightedREDDropperService::finalize()
{
	return false;
}

Boolean UNIX_WeightedREDDropperService::find(Array<CIMKeyBinding> &kbArray)
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
