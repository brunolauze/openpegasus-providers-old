#ifdef PEGASUS_OS_FREEBSD

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

#include "UNIX_VirtualComputerSystem_FREEBSD.hxx"

UNIX_BhyveComputerSystem::UNIX_BhyveComputerSystem(void)
{
}

UNIX_BhyveComputerSystem::~UNIX_BhyveComputerSystem(void)
{
}


Boolean UNIX_BhyveComputerSystem::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BhyveComputerSystem::getInstanceID() const
{
	return String("");
}

Boolean UNIX_BhyveComputerSystem::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BhyveComputerSystem::getCaption() const
{
	return String("");
}

Boolean UNIX_BhyveComputerSystem::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BhyveComputerSystem::getDescription() const
{
	return String("");
}

Boolean UNIX_BhyveComputerSystem::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BhyveComputerSystem::getElementName() const
{
	return String("BhyveComputerSystem");
}

Boolean UNIX_BhyveComputerSystem::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_BhyveComputerSystem::getInstallDate() const
{
	return CIMHelper::getOSInstallDate();
}

Boolean UNIX_BhyveComputerSystem::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_BhyveComputerSystem::getName() const
{
	return String("");
}

Boolean UNIX_BhyveComputerSystem::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_BhyveComputerSystem::getOperationalStatus() const
{
	Array<Uint16> as;
	as.append(2); //OK

	return as;

}

Boolean UNIX_BhyveComputerSystem::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_BhyveComputerSystem::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_BhyveComputerSystem::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_BhyveComputerSystem::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_BhyveComputerSystem::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_BhyveComputerSystem::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_BhyveComputerSystem::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_BhyveComputerSystem::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_BhyveComputerSystem::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_BhyveComputerSystem::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_BhyveComputerSystem::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_BhyveComputerSystem::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_BhyveComputerSystem::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_BhyveComputerSystem::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_BhyveComputerSystem::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_BhyveComputerSystem::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_BhyveComputerSystem::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_BhyveComputerSystem::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_BhyveComputerSystem::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_BhyveComputerSystem::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_BhyveComputerSystem::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_BhyveComputerSystem::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_BhyveComputerSystem::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_BhyveComputerSystem::getTimeOfLastStateChange() const
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

Boolean UNIX_BhyveComputerSystem::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_BhyveComputerSystem::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_BhyveComputerSystem::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_BhyveComputerSystem::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_BhyveComputerSystem::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_BhyveComputerSystem::getCreationClassName() const
{
	return String("UNIX_BhyveComputerSystem");
}

Boolean UNIX_BhyveComputerSystem::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

String UNIX_BhyveComputerSystem::getNameFormat() const
{
	return String ("");
}

Boolean UNIX_BhyveComputerSystem::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_BhyveComputerSystem::getPrimaryOwnerName() const
{
	return String ("");
}

Boolean UNIX_BhyveComputerSystem::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_BhyveComputerSystem::getPrimaryOwnerContact() const
{
	return String ("");
}

Boolean UNIX_BhyveComputerSystem::getRoles(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROLES, getRoles());
	return true;
}

Array<String> UNIX_BhyveComputerSystem::getRoles() const
{
	Array<String> as;
	// Defines Roles
    // SSH Server -- check sshd_enable
    // WebServer -- check nginx or apache22
    // Database Server -- check mysql or postgresql
    // Network Switch -- check gateway_enable
    // Firewall -- check pf_enable
    // Cim Server -- check cimserver
    // VPN Server -- check openikve2
    // Mail Server - check dovecot2
    // Developement - check git lab
    //  
    // Desktop check ttys8, kde_enable or gdm_enable or just dbus_enable ?

    Array<String> array;

	return as;

}

Boolean UNIX_BhyveComputerSystem::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_BhyveComputerSystem::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_BhyveComputerSystem::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_BhyveComputerSystem::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_BhyveComputerSystem::getDedicated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEDICATED, getDedicated());
	return true;
}

Array<Uint16> UNIX_BhyveComputerSystem::getDedicated() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_BhyveComputerSystem::getOtherDedicatedDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_DEDICATED_DESCRIPTIONS, getOtherDedicatedDescriptions());
	return true;
}

Array<String> UNIX_BhyveComputerSystem::getOtherDedicatedDescriptions() const
{
	Array<String> as;
	

	return as;
}

Boolean UNIX_BhyveComputerSystem::getResetCapability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESET_CAPABILITY, getResetCapability());
	return true;
}

Uint16 UNIX_BhyveComputerSystem::getResetCapability() const
{
	return Uint16(0);
}

Boolean UNIX_BhyveComputerSystem::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_BhyveComputerSystem::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_BhyveComputerSystem::getVirtualSystem(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIRTUAL_SYSTEM, getVirtualSystem());
	return true;
}

String UNIX_BhyveComputerSystem::getVirtualSystem() const
{
	return String ("Bhyve");
}

void UNIX_BhyveComputerSystem::requestStateChange(Uint32 requestedState, CIMDateTime timeoutPeriod)
{

}

void UNIX_BhyveComputerSystem::setPowerState(Uint32 powerState, CIMDateTime time)
{

}

Boolean UNIX_BhyveComputerSystem::initialize()
{
	return true;
}

Boolean UNIX_BhyveComputerSystem::load(int &pIndex)
{

	return false;
}

Boolean UNIX_BhyveComputerSystem::finalize()
{
	return true;
}

Boolean UNIX_BhyveComputerSystem::find(Array<CIMKeyBinding> &kbArray)
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



	/* Execute find with extracted keys */

	return false;
}


#endif
