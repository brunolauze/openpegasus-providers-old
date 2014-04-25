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


UNIX_StorageLibrary::UNIX_StorageLibrary(void)
{
}

UNIX_StorageLibrary::~UNIX_StorageLibrary(void)
{
}


Boolean UNIX_StorageLibrary::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_StorageLibrary::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_StorageLibrary::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_StorageLibrary::getCaption() const
{
	return String ("");
}

Boolean UNIX_StorageLibrary::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_StorageLibrary::getDescription() const
{
	return String ("");
}

Boolean UNIX_StorageLibrary::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_StorageLibrary::getElementName() const
{
	return String("StorageLibrary");
}

Boolean UNIX_StorageLibrary::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_StorageLibrary::getInstallDate() const
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

Boolean UNIX_StorageLibrary::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_StorageLibrary::getName() const
{
	return String ("");
}

Boolean UNIX_StorageLibrary::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_StorageLibrary::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_StorageLibrary::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_StorageLibrary::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_StorageLibrary::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_StorageLibrary::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_StorageLibrary::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_StorageLibrary::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_StorageLibrary::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_StorageLibrary::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_StorageLibrary::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_StorageLibrary::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_StorageLibrary::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_StorageLibrary::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_StorageLibrary::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_StorageLibrary::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_StorageLibrary::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_StorageLibrary::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_StorageLibrary::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_StorageLibrary::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_StorageLibrary::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_StorageLibrary::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_StorageLibrary::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_StorageLibrary::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_StorageLibrary::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_StorageLibrary::getTimeOfLastStateChange() const
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

Boolean UNIX_StorageLibrary::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_StorageLibrary::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_StorageLibrary::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_StorageLibrary::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_StorageLibrary::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_StorageLibrary::getCreationClassName() const
{
	return String("UNIX_StorageLibrary");
}

Boolean UNIX_StorageLibrary::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

String UNIX_StorageLibrary::getNameFormat() const
{
	return String ("");
}

Boolean UNIX_StorageLibrary::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_StorageLibrary::getPrimaryOwnerName() const
{
	return String ("");
}

Boolean UNIX_StorageLibrary::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_StorageLibrary::getPrimaryOwnerContact() const
{
	return String ("");
}

Boolean UNIX_StorageLibrary::getRoles(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROLES, getRoles());
	return true;
}

Array<String> UNIX_StorageLibrary::getRoles() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_StorageLibrary::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_StorageLibrary::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_StorageLibrary::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_StorageLibrary::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_StorageLibrary::getCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITIES, getCapabilities());
	return true;
}

Array<Uint16> UNIX_StorageLibrary::getCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_StorageLibrary::getOverfilled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OVERFILLED, getOverfilled());
	return true;
}

Boolean UNIX_StorageLibrary::getOverfilled() const
{
	return Boolean(false);
}

Boolean UNIX_StorageLibrary::getAuditNeeded(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUDIT_NEEDED, getAuditNeeded());
	return true;
}

Boolean UNIX_StorageLibrary::getAuditNeeded() const
{
	return Boolean(false);
}

Boolean UNIX_StorageLibrary::getAuditInProgress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUDIT_IN_PROGRESS, getAuditInProgress());
	return true;
}

Boolean UNIX_StorageLibrary::getAuditInProgress() const
{
	return Boolean(false);
}

Boolean UNIX_StorageLibrary::getMaxAuditTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_AUDIT_TIME, getMaxAuditTime());
	return true;
}

Uint64 UNIX_StorageLibrary::getMaxAuditTime() const
{
	return Uint64(0);
}

Boolean UNIX_StorageLibrary::getAutomated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTOMATED, getAutomated());
	return true;
}

Boolean UNIX_StorageLibrary::getAutomated() const
{
	return Boolean(false);
}

Boolean UNIX_StorageLibrary::getRoboticsEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROBOTICS_ENABLED, getRoboticsEnabled());
	return true;
}

Boolean UNIX_StorageLibrary::getRoboticsEnabled() const
{
	return Boolean(false);
}



Boolean UNIX_StorageLibrary::initialize()
{
	return false;
}

Boolean UNIX_StorageLibrary::load(int &pIndex)
{
	return false;
}

Boolean UNIX_StorageLibrary::finalize()
{
	return false;
}

Boolean UNIX_StorageLibrary::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
