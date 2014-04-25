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


UNIX_HeadTailDropper::UNIX_HeadTailDropper(void)
{
}

UNIX_HeadTailDropper::~UNIX_HeadTailDropper(void)
{
}


Boolean UNIX_HeadTailDropper::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_HeadTailDropper::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_HeadTailDropper::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_HeadTailDropper::getCaption() const
{
	return String ("");
}

Boolean UNIX_HeadTailDropper::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_HeadTailDropper::getDescription() const
{
	return String ("");
}

Boolean UNIX_HeadTailDropper::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_HeadTailDropper::getElementName() const
{
	return String("HeadTailDropper");
}

Boolean UNIX_HeadTailDropper::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_HeadTailDropper::getInstallDate() const
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

Boolean UNIX_HeadTailDropper::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_HeadTailDropper::getName() const
{
	return String ("");
}

Boolean UNIX_HeadTailDropper::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_HeadTailDropper::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_HeadTailDropper::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_HeadTailDropper::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_HeadTailDropper::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_HeadTailDropper::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_HeadTailDropper::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_HeadTailDropper::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_HeadTailDropper::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_HeadTailDropper::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_HeadTailDropper::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_HeadTailDropper::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_HeadTailDropper::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_HeadTailDropper::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_HeadTailDropper::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_HeadTailDropper::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_HeadTailDropper::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_HeadTailDropper::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_HeadTailDropper::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_HeadTailDropper::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_HeadTailDropper::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_HeadTailDropper::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_HeadTailDropper::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_HeadTailDropper::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_HeadTailDropper::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_HeadTailDropper::getTimeOfLastStateChange() const
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

Boolean UNIX_HeadTailDropper::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_HeadTailDropper::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_HeadTailDropper::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_HeadTailDropper::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_HeadTailDropper::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_HeadTailDropper::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_HeadTailDropper::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_HeadTailDropper::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_HeadTailDropper::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_HeadTailDropper::getCreationClassName() const
{
	return String("UNIX_HeadTailDropper");
}

Boolean UNIX_HeadTailDropper::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_HeadTailDropper::getPrimaryOwnerName() const
{
	return String ("");
}

Boolean UNIX_HeadTailDropper::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_HeadTailDropper::getPrimaryOwnerContact() const
{
	return String ("");
}

Boolean UNIX_HeadTailDropper::getStartMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_MODE, getStartMode());
	return true;
}

String UNIX_HeadTailDropper::getStartMode() const
{
	return String ("");
}

Boolean UNIX_HeadTailDropper::getStarted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTED, getStarted());
	return true;
}

Boolean UNIX_HeadTailDropper::getStarted() const
{
	return Boolean(false);
}

Boolean UNIX_HeadTailDropper::getEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED, getEnabled());
	return true;
}

Boolean UNIX_HeadTailDropper::getEnabled() const
{
	return Boolean(false);
}

Boolean UNIX_HeadTailDropper::getDropperType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DROPPER_TYPE, getDropperType());
	return true;
}

Uint16 UNIX_HeadTailDropper::getDropperType() const
{
	return Uint16(0);
}

Boolean UNIX_HeadTailDropper::getOtherDropperType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_DROPPER_TYPE, getOtherDropperType());
	return true;
}

String UNIX_HeadTailDropper::getOtherDropperType() const
{
	return String ("");
}

Boolean UNIX_HeadTailDropper::getAlwaysDrop(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALWAYS_DROP, getAlwaysDrop());
	return true;
}

Uint16 UNIX_HeadTailDropper::getAlwaysDrop() const
{
	return Uint16(0);
}

Boolean UNIX_HeadTailDropper::getDropFrom(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DROP_FROM, getDropFrom());
	return true;
}

Uint16 UNIX_HeadTailDropper::getDropFrom() const
{
	return Uint16(0);
}

Boolean UNIX_HeadTailDropper::getDropStartMetric(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DROP_START_METRIC, getDropStartMetric());
	return true;
}

Uint16 UNIX_HeadTailDropper::getDropStartMetric() const
{
	return Uint16(0);
}

Boolean UNIX_HeadTailDropper::getDropMaintainMetric(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DROP_MAINTAIN_METRIC, getDropMaintainMetric());
	return true;
}

Uint16 UNIX_HeadTailDropper::getDropMaintainMetric() const
{
	return Uint16(0);
}

Boolean UNIX_HeadTailDropper::getQueueThreshold(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_QUEUE_THRESHOLD, getQueueThreshold());
	return true;
}

Uint32 UNIX_HeadTailDropper::getQueueThreshold() const
{
	return Uint32(0);
}



Boolean UNIX_HeadTailDropper::initialize()
{
	return false;
}

Boolean UNIX_HeadTailDropper::load(int &pIndex)
{
	return false;
}

Boolean UNIX_HeadTailDropper::finalize()
{
	return false;
}

Boolean UNIX_HeadTailDropper::find(Array<CIMKeyBinding> &kbArray)
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
