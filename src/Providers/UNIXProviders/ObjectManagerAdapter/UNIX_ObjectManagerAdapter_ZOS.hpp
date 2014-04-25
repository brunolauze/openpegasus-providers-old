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


UNIX_ObjectManagerAdapter::UNIX_ObjectManagerAdapter(void)
{
}

UNIX_ObjectManagerAdapter::~UNIX_ObjectManagerAdapter(void)
{
}


Boolean UNIX_ObjectManagerAdapter::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ObjectManagerAdapter::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_ObjectManagerAdapter::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ObjectManagerAdapter::getCaption() const
{
	return String ("");
}

Boolean UNIX_ObjectManagerAdapter::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ObjectManagerAdapter::getDescription() const
{
	return String ("");
}

Boolean UNIX_ObjectManagerAdapter::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ObjectManagerAdapter::getElementName() const
{
	return String("ObjectManagerAdapter");
}

Boolean UNIX_ObjectManagerAdapter::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_ObjectManagerAdapter::getInstallDate() const
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

Boolean UNIX_ObjectManagerAdapter::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_ObjectManagerAdapter::getName() const
{
	return String ("");
}

Boolean UNIX_ObjectManagerAdapter::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_ObjectManagerAdapter::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_ObjectManagerAdapter::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_ObjectManagerAdapter::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_ObjectManagerAdapter::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_ObjectManagerAdapter::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_ObjectManagerAdapter::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_ObjectManagerAdapter::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_ObjectManagerAdapter::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_ObjectManagerAdapter::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_ObjectManagerAdapter::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_ObjectManagerAdapter::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_ObjectManagerAdapter::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_ObjectManagerAdapter::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_ObjectManagerAdapter::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_ObjectManagerAdapter::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_ObjectManagerAdapter::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_ObjectManagerAdapter::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_ObjectManagerAdapter::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_ObjectManagerAdapter::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_ObjectManagerAdapter::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_ObjectManagerAdapter::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_ObjectManagerAdapter::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_ObjectManagerAdapter::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_ObjectManagerAdapter::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_ObjectManagerAdapter::getTimeOfLastStateChange() const
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

Boolean UNIX_ObjectManagerAdapter::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_ObjectManagerAdapter::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_ObjectManagerAdapter::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_ObjectManagerAdapter::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_ObjectManagerAdapter::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_ObjectManagerAdapter::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_ObjectManagerAdapter::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_ObjectManagerAdapter::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_ObjectManagerAdapter::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_ObjectManagerAdapter::getCreationClassName() const
{
	return String("UNIX_ObjectManagerAdapter");
}

Boolean UNIX_ObjectManagerAdapter::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_ObjectManagerAdapter::getPrimaryOwnerName() const
{
	return String ("");
}

Boolean UNIX_ObjectManagerAdapter::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_ObjectManagerAdapter::getPrimaryOwnerContact() const
{
	return String ("");
}

Boolean UNIX_ObjectManagerAdapter::getStartMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_MODE, getStartMode());
	return true;
}

String UNIX_ObjectManagerAdapter::getStartMode() const
{
	return String ("");
}

Boolean UNIX_ObjectManagerAdapter::getStarted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTED, getStarted());
	return true;
}

Boolean UNIX_ObjectManagerAdapter::getStarted() const
{
	return Boolean(false);
}

Boolean UNIX_ObjectManagerAdapter::getHandle(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HANDLE, getHandle());
	return true;
}

String UNIX_ObjectManagerAdapter::getHandle() const
{
	return String ("");
}

Boolean UNIX_ObjectManagerAdapter::getAdapterType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADAPTER_TYPE, getAdapterType());
	return true;
}

Uint16 UNIX_ObjectManagerAdapter::getAdapterType() const
{
	return Uint16(0);
}

Boolean UNIX_ObjectManagerAdapter::getOtherAdapterTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ADAPTER_TYPE_DESCRIPTION, getOtherAdapterTypeDescription());
	return true;
}

String UNIX_ObjectManagerAdapter::getOtherAdapterTypeDescription() const
{
	return String ("");
}



Boolean UNIX_ObjectManagerAdapter::initialize()
{
	return false;
}

Boolean UNIX_ObjectManagerAdapter::load(int &pIndex)
{
	return false;
}

Boolean UNIX_ObjectManagerAdapter::finalize()
{
	return false;
}

Boolean UNIX_ObjectManagerAdapter::find(Array<CIMKeyBinding> &kbArray)
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
