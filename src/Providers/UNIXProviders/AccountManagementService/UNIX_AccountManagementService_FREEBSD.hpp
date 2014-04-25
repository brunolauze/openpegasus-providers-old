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


UNIX_AccountManagementService::UNIX_AccountManagementService(void)
{
	currentService = NULL;
}

UNIX_AccountManagementService::~UNIX_AccountManagementService(void)
{
	currentService = NULL;
}


Boolean UNIX_AccountManagementService::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_AccountManagementService::getInstanceID() const
{
	return currentService->getInstanceID();
}

Boolean UNIX_AccountManagementService::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_AccountManagementService::getCaption() const
{
	return currentService->getCaption();
}

Boolean UNIX_AccountManagementService::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_AccountManagementService::getDescription() const
{
	return currentService->getDescription();
}

Boolean UNIX_AccountManagementService::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_AccountManagementService::getElementName() const
{
	return String("AccountManagementService");
}

Boolean UNIX_AccountManagementService::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_AccountManagementService::getInstallDate() const
{
	return currentService->getInstallDate();
}

Boolean UNIX_AccountManagementService::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_AccountManagementService::getName() const
{
	return currentService->getName();
}

Boolean UNIX_AccountManagementService::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_AccountManagementService::getOperationalStatus() const
{
	return currentService->getOperationalStatus();
}

Boolean UNIX_AccountManagementService::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_AccountManagementService::getStatusDescriptions() const
{
	return currentService->getStatusDescriptions();
}

Boolean UNIX_AccountManagementService::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_AccountManagementService::getStatus() const
{
	return currentService->getStatus();
}

Boolean UNIX_AccountManagementService::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_AccountManagementService::getHealthState() const
{
	return currentService->getHealthState();
}

Boolean UNIX_AccountManagementService::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_AccountManagementService::getCommunicationStatus() const
{
	return currentService->getCommunicationStatus();
}

Boolean UNIX_AccountManagementService::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_AccountManagementService::getDetailedStatus() const
{
	return currentService->getDetailedStatus();
}

Boolean UNIX_AccountManagementService::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_AccountManagementService::getOperatingStatus() const
{
	return currentService->getOperatingStatus();
}

Boolean UNIX_AccountManagementService::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_AccountManagementService::getPrimaryStatus() const
{
	return currentService->getPrimaryStatus();
}

Boolean UNIX_AccountManagementService::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_AccountManagementService::getEnabledState() const
{
	return currentService->getEnabledState();
}

Boolean UNIX_AccountManagementService::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_AccountManagementService::getOtherEnabledState() const
{
	return currentService->getOtherEnabledState();
}

Boolean UNIX_AccountManagementService::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_AccountManagementService::getRequestedState() const
{
	return currentService->getRequestedState();
}

Boolean UNIX_AccountManagementService::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_AccountManagementService::getEnabledDefault() const
{
	return currentService->getEnabledDefault();
}

Boolean UNIX_AccountManagementService::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_AccountManagementService::getTimeOfLastStateChange() const
{
	return currentService->getTimeOfLastStateChange();
}

Boolean UNIX_AccountManagementService::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_AccountManagementService::getAvailableRequestedStates() const
{
	return currentService->getAvailableRequestedStates();
}

Boolean UNIX_AccountManagementService::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_AccountManagementService::getTransitioningToState() const
{
	return currentService->getTransitioningToState();
}

Boolean UNIX_AccountManagementService::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_AccountManagementService::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_AccountManagementService::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_AccountManagementService::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_AccountManagementService::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_AccountManagementService::getCreationClassName() const
{
	return String("UNIX_AccountManagementService");
}

Boolean UNIX_AccountManagementService::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_AccountManagementService::getPrimaryOwnerName() const
{
	return currentService->getPrimaryOwnerName();
}

Boolean UNIX_AccountManagementService::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_AccountManagementService::getPrimaryOwnerContact() const
{
	return currentService->getPrimaryOwnerContact();
}

Boolean UNIX_AccountManagementService::getStartMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_MODE, getStartMode());
	return true;
}

String UNIX_AccountManagementService::getStartMode() const
{
	return currentService->getStartMode();
}

Boolean UNIX_AccountManagementService::getStarted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTED, getStarted());
	return true;
}

Boolean UNIX_AccountManagementService::getStarted() const
{
	return currentService->getStarted();
}



Boolean UNIX_AccountManagementService::initialize()
{
	currentService = NULL;
	return true;
}

Boolean UNIX_AccountManagementService::load(int &pIndex)
{
	if (pIndex == 0)
	{
		if (currentService != NULL) currentService->finalize();
		currentService = new OpenPAMService();
		return currentService->initialize();
	}
	else if (pIndex == 1)
	{
		if (currentService != NULL) currentService->finalize();
		currentService = new OpenLdapService();
		return currentService->initialize();
	}
	else if (pIndex == 2)
	{
		if (currentService != NULL) currentService->finalize();
		/* Check SAMBA */
		currentService = new SambaService();
		return currentService->initialize();
	}
	return false;
}

Boolean UNIX_AccountManagementService::finalize()
{
	if (currentService != NULL) currentService->finalize();
	return true;
}

Boolean UNIX_AccountManagementService::find(Array<CIMKeyBinding> &kbArray)
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

	/* Execute find with extracted keys */
	if (String::equalNoCase(creationClassNameKey, getCreationClassName()))
	{
		int pIndex;
		if (String::equal(nameKey, String("OpenPAM")))
		{
			pIndex = 0;
			return load(pIndex);
		}
		else if (String::equal(nameKey, String("OpenLDAP")))
		{
			pIndex = 1;
			return load(pIndex);
		}
		else if (String::equal(nameKey, String("Samba")))
		{
			pIndex = 2;
			return load(pIndex);
		}
	}


	return false;
}

Boolean UNIX_AccountManagementService::createAccount(
						CIMObjectPath accountTemplate,
						Array<CIMInstance> &accountIdentities,
						CIMInstance &account,
						CIMInstance computerSystem) const
{
	return currentService->createAccount(accountTemplate, 
				accountIdentities, 
				account, 
				computerSystem);
}
