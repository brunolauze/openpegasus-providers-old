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


UNIX_IRQ::UNIX_IRQ(void)
{
}

UNIX_IRQ::~UNIX_IRQ(void)
{
}


Boolean UNIX_IRQ::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_IRQ::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_IRQ::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_IRQ::getCaption() const
{
	return String ("");
}

Boolean UNIX_IRQ::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_IRQ::getDescription() const
{
	return String ("");
}

Boolean UNIX_IRQ::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_IRQ::getElementName() const
{
	return String("IRQ");
}

Boolean UNIX_IRQ::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_IRQ::getInstallDate() const
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

Boolean UNIX_IRQ::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_IRQ::getName() const
{
	return String ("");
}

Boolean UNIX_IRQ::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_IRQ::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_IRQ::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_IRQ::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_IRQ::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_IRQ::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_IRQ::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_IRQ::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_IRQ::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_IRQ::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_IRQ::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_IRQ::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_IRQ::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_IRQ::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_IRQ::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_IRQ::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_IRQ::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_IRQ::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_IRQ::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_IRQ::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_IRQ::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_IRQ::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_IRQ::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_IRQ::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_IRQ::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_IRQ::getTimeOfLastStateChange() const
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

Boolean UNIX_IRQ::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_IRQ::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_IRQ::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_IRQ::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_IRQ::getShareable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SHAREABLE, getShareable());
	return true;
}

Boolean UNIX_IRQ::getShareable() const
{
	return Boolean(false);
}

Boolean UNIX_IRQ::getImplementationInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IMPLEMENTATION_INFO, getImplementationInfo());
	return true;
}

Uint16 UNIX_IRQ::getImplementationInfo() const
{
	return Uint16(0);
}

Boolean UNIX_IRQ::getCSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_CREATION_CLASS_NAME, getCSCreationClassName());
	return true;
}

String UNIX_IRQ::getCSCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_IRQ::getCSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_NAME, getCSName());
	return true;
}

String UNIX_IRQ::getCSName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_IRQ::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_IRQ::getCreationClassName() const
{
	return String("UNIX_IRQ");
}

Boolean UNIX_IRQ::getIRQNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_I_R_Q_NUMBER, getIRQNumber());
	return true;
}

Uint32 UNIX_IRQ::getIRQNumber() const
{
	return Uint32(0);
}

Boolean UNIX_IRQ::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_IRQ::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_IRQ::getTriggerType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRIGGER_TYPE, getTriggerType());
	return true;
}

Uint16 UNIX_IRQ::getTriggerType() const
{
	return Uint16(0);
}

Boolean UNIX_IRQ::getTriggerLevel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRIGGER_LEVEL, getTriggerLevel());
	return true;
}

Uint16 UNIX_IRQ::getTriggerLevel() const
{
	return Uint16(0);
}

Boolean UNIX_IRQ::getHardware(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HARDWARE, getHardware());
	return true;
}

Boolean UNIX_IRQ::getHardware() const
{
	return Boolean(false);
}



Boolean UNIX_IRQ::initialize()
{
	return false;
}

Boolean UNIX_IRQ::load(int &pIndex)
{
	return false;
}

Boolean UNIX_IRQ::finalize()
{
	return false;
}

Boolean UNIX_IRQ::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String cSCreationClassNameKey;
	String cSNameKey;
	String creationClassNameKey;
	String iRQNumberKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_CS_CREATION_CLASS_NAME)) cSCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CS_NAME)) cSNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_I_R_Q_NUMBER)) iRQNumberKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
