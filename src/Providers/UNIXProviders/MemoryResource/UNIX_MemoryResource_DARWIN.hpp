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


UNIX_MemoryResource::UNIX_MemoryResource(void)
{
}

UNIX_MemoryResource::~UNIX_MemoryResource(void)
{
}


Boolean UNIX_MemoryResource::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_MemoryResource::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_MemoryResource::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_MemoryResource::getCaption() const
{
	return String ("");
}

Boolean UNIX_MemoryResource::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_MemoryResource::getDescription() const
{
	return String ("");
}

Boolean UNIX_MemoryResource::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_MemoryResource::getElementName() const
{
	return String("MemoryResource");
}

Boolean UNIX_MemoryResource::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_MemoryResource::getInstallDate() const
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

Boolean UNIX_MemoryResource::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_MemoryResource::getName() const
{
	return String ("");
}

Boolean UNIX_MemoryResource::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_MemoryResource::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_MemoryResource::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_MemoryResource::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_MemoryResource::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_MemoryResource::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_MemoryResource::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_MemoryResource::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_MemoryResource::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_MemoryResource::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_MemoryResource::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_MemoryResource::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_MemoryResource::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_MemoryResource::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_MemoryResource::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_MemoryResource::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_MemoryResource::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_MemoryResource::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_MemoryResource::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_MemoryResource::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_MemoryResource::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_MemoryResource::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_MemoryResource::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_MemoryResource::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_MemoryResource::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_MemoryResource::getTimeOfLastStateChange() const
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

Boolean UNIX_MemoryResource::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_MemoryResource::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_MemoryResource::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_MemoryResource::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_MemoryResource::getShareable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SHAREABLE, getShareable());
	return true;
}

Boolean UNIX_MemoryResource::getShareable() const
{
	return Boolean(false);
}

Boolean UNIX_MemoryResource::getImplementationInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IMPLEMENTATION_INFO, getImplementationInfo());
	return true;
}

Uint16 UNIX_MemoryResource::getImplementationInfo() const
{
	return Uint16(0);
}

Boolean UNIX_MemoryResource::getCSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_CREATION_CLASS_NAME, getCSCreationClassName());
	return true;
}

String UNIX_MemoryResource::getCSCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_MemoryResource::getCSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_NAME, getCSName());
	return true;
}

String UNIX_MemoryResource::getCSName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_MemoryResource::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_MemoryResource::getCreationClassName() const
{
	return String("UNIX_MemoryResource");
}

Boolean UNIX_MemoryResource::getStartingAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTING_ADDRESS, getStartingAddress());
	return true;
}

Uint64 UNIX_MemoryResource::getStartingAddress() const
{
	return Uint64(0);
}

Boolean UNIX_MemoryResource::getEndingAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENDING_ADDRESS, getEndingAddress());
	return true;
}

Uint64 UNIX_MemoryResource::getEndingAddress() const
{
	return Uint64(0);
}

Boolean UNIX_MemoryResource::getMappedResource(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAPPED_RESOURCE, getMappedResource());
	return true;
}

Uint16 UNIX_MemoryResource::getMappedResource() const
{
	return Uint16(0);
}



Boolean UNIX_MemoryResource::initialize()
{
	return false;
}

Boolean UNIX_MemoryResource::load(int &pIndex)
{
	return false;
}

Boolean UNIX_MemoryResource::finalize()
{
	return false;
}

Boolean UNIX_MemoryResource::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String cSCreationClassNameKey;
	String cSNameKey;
	String creationClassNameKey;
	String startingAddressKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_CS_CREATION_CLASS_NAME)) cSCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CS_NAME)) cSNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_STARTING_ADDRESS)) startingAddressKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
