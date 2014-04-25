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


UNIX_VirtualComputerSystem::UNIX_VirtualComputerSystem(void)
{

}

UNIX_VirtualComputerSystem::~UNIX_VirtualComputerSystem(void)
{
}


Boolean UNIX_VirtualComputerSystem::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_VirtualComputerSystem::getInstanceID() const
{
	return currentSystem->getInstanceID();
}

Boolean UNIX_VirtualComputerSystem::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_VirtualComputerSystem::getCaption() const
{
	return currentSystem->getCaption();
}

Boolean UNIX_VirtualComputerSystem::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_VirtualComputerSystem::getDescription() const
{
	return currentSystem->getDescription();
}

Boolean UNIX_VirtualComputerSystem::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_VirtualComputerSystem::getElementName() const
{
	return String("VirtualComputerSystem");
}

Boolean UNIX_VirtualComputerSystem::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_VirtualComputerSystem::getInstallDate() const
{
	return currentSystem->getInstallDate();
}

Boolean UNIX_VirtualComputerSystem::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_VirtualComputerSystem::getName() const
{
	return currentSystem->getName();
}

Boolean UNIX_VirtualComputerSystem::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_VirtualComputerSystem::getOperationalStatus() const
{
	return currentSystem->getOperationalStatus();
}

Boolean UNIX_VirtualComputerSystem::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_VirtualComputerSystem::getStatusDescriptions() const
{
	return currentSystem->getStatusDescriptions();
}

Boolean UNIX_VirtualComputerSystem::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_VirtualComputerSystem::getStatus() const
{
	return currentSystem->getStatus();
}

Boolean UNIX_VirtualComputerSystem::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_VirtualComputerSystem::getHealthState() const
{
	return currentSystem->getHealthState();
}

Boolean UNIX_VirtualComputerSystem::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_VirtualComputerSystem::getCommunicationStatus() const
{
	return currentSystem->getCommunicationStatus();
}

Boolean UNIX_VirtualComputerSystem::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_VirtualComputerSystem::getDetailedStatus() const
{
	return currentSystem->getDetailedStatus();
}

Boolean UNIX_VirtualComputerSystem::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_VirtualComputerSystem::getOperatingStatus() const
{
	return currentSystem->getOperatingStatus();
}

Boolean UNIX_VirtualComputerSystem::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_VirtualComputerSystem::getPrimaryStatus() const
{
	return currentSystem->getPrimaryStatus();
}

Boolean UNIX_VirtualComputerSystem::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_VirtualComputerSystem::getEnabledState() const
{
	return currentSystem->getEnabledState();
}

Boolean UNIX_VirtualComputerSystem::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_VirtualComputerSystem::getOtherEnabledState() const
{
	return currentSystem->getOtherEnabledState();
}

Boolean UNIX_VirtualComputerSystem::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_VirtualComputerSystem::getRequestedState() const
{
	return currentSystem->getRequestedState();
}

Boolean UNIX_VirtualComputerSystem::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_VirtualComputerSystem::getEnabledDefault() const
{
	return currentSystem->getEnabledDefault();
}

Boolean UNIX_VirtualComputerSystem::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_VirtualComputerSystem::getTimeOfLastStateChange() const
{
	return currentSystem->getTimeOfLastStateChange();
}

Boolean UNIX_VirtualComputerSystem::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_VirtualComputerSystem::getAvailableRequestedStates() const
{
	return currentSystem->getAvailableRequestedStates();

}

Boolean UNIX_VirtualComputerSystem::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_VirtualComputerSystem::getTransitioningToState() const
{
	return currentSystem->getTransitioningToState();
}

Boolean UNIX_VirtualComputerSystem::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_VirtualComputerSystem::getCreationClassName() const
{
	return currentSystem->getCreationClassName();
}

Boolean UNIX_VirtualComputerSystem::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

String UNIX_VirtualComputerSystem::getNameFormat() const
{
	return currentSystem->getNameFormat();
}

Boolean UNIX_VirtualComputerSystem::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_VirtualComputerSystem::getPrimaryOwnerName() const
{
	return currentSystem->getPrimaryOwnerName();
}

Boolean UNIX_VirtualComputerSystem::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_VirtualComputerSystem::getPrimaryOwnerContact() const
{
	return currentSystem->getPrimaryOwnerContact();
}

Boolean UNIX_VirtualComputerSystem::getRoles(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROLES, getRoles());
	return true;
}

Array<String> UNIX_VirtualComputerSystem::getRoles() const
{
	return currentSystem->getRoles();
}

Boolean UNIX_VirtualComputerSystem::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_VirtualComputerSystem::getOtherIdentifyingInfo() const
{
	return currentSystem->getOtherIdentifyingInfo();
}

Boolean UNIX_VirtualComputerSystem::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_VirtualComputerSystem::getIdentifyingDescriptions() const
{
	return currentSystem->getIdentifyingDescriptions();
}

Boolean UNIX_VirtualComputerSystem::getDedicated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEDICATED, getDedicated());
	return true;
}

Array<Uint16> UNIX_VirtualComputerSystem::getDedicated() const
{
	return currentSystem->getDedicated();
}

Boolean UNIX_VirtualComputerSystem::getOtherDedicatedDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_DEDICATED_DESCRIPTIONS, getOtherDedicatedDescriptions());
	return true;
}

Array<String> UNIX_VirtualComputerSystem::getOtherDedicatedDescriptions() const
{
	return currentSystem->getOtherDedicatedDescriptions();
}

Boolean UNIX_VirtualComputerSystem::getResetCapability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESET_CAPABILITY, getResetCapability());
	return true;
}

Uint16 UNIX_VirtualComputerSystem::getResetCapability() const
{
	return currentSystem->getResetCapability();
}

Boolean UNIX_VirtualComputerSystem::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_VirtualComputerSystem::getPowerManagementCapabilities() const
{
	return currentSystem->getPowerManagementCapabilities();
}

Boolean UNIX_VirtualComputerSystem::getVirtualSystem(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIRTUAL_SYSTEM, getVirtualSystem());
	return true;
}

String UNIX_VirtualComputerSystem::getVirtualSystem() const
{
	return currentSystem->getVirtualSystem();
}

void UNIX_VirtualComputerSystem::requestStateChange(Uint32 requestedState, CIMDateTime timeoutPeriod)
{
	currentSystem->requestStateChange(requestedState, timeoutPeriod);
}

void UNIX_VirtualComputerSystem::setPowerState(Uint32 powerState, CIMDateTime time)
{
	currentSystem->setPowerState(powerState, time);
}

Boolean UNIX_VirtualComputerSystem::initialize()
{
	_jailSystem = new UNIX_JailComputerSystem();
	_bhyveSystem = new UNIX_BhyveComputerSystem();
	return _jailSystem->initialize() && _bhyveSystem->initialize();
}

Boolean UNIX_VirtualComputerSystem::load(int &pIndex)
{
	if (contextClassName.isNull() || contextClassName.equal(String("CIM_VirtualComputerSystem")) ||
		contextClassName.equal(String("UNIX_VirtualComputerSystem")) ||
		contextClassName.equal(String("UNIX_JailComputerSystem")))
	{
		if (_jailSystem->load(pIndex))
		{
			currentSystem = _jailSystem;
			return true;
		}
	}
	if (contextClassName.isNull() || contextClassName.equal(String("CIM_VirtualComputerSystem")) ||
		contextClassName.equal(String("UNIX_VirtualComputerSystem")) ||
		contextClassName.equal(String("UNIX_BhyveComputerSystem")))
	{
		if (_bhyveSystem->load(pIndex))
		{
			currentSystem = _bhyveSystem;
			return true;
		}
	}

	return false;
}

Boolean UNIX_VirtualComputerSystem::finalize()
{
	contextClassName = CIMName();
	return _jailSystem->finalize();
}

Boolean UNIX_VirtualComputerSystem::find(Array<CIMKeyBinding> &kbArray)
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

	setContext(creationClassNameKey);

	/* Execute find with extracted keys */
	for(int i = 0; load(i); i++)
	{
		if (String::equalNoCase(nameKey, getName()))
		{
			return true;
		}
	}


	return false;
}

void UNIX_VirtualComputerSystem::setContext(const CIMName &name)
{
	contextClassName = name;
}
