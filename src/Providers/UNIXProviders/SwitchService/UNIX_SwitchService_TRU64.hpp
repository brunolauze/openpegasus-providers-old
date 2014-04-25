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


UNIX_SwitchService::UNIX_SwitchService(void)
{
}

UNIX_SwitchService::~UNIX_SwitchService(void)
{
}


Boolean UNIX_SwitchService::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SwitchService::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_SwitchService::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SwitchService::getCaption() const
{
	return String ("");
}

Boolean UNIX_SwitchService::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SwitchService::getDescription() const
{
	return String ("");
}

Boolean UNIX_SwitchService::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SwitchService::getElementName() const
{
	return String("SwitchService");
}

Boolean UNIX_SwitchService::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_SwitchService::getInstallDate() const
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

Boolean UNIX_SwitchService::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_SwitchService::getName() const
{
	return String ("");
}

Boolean UNIX_SwitchService::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_SwitchService::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_SwitchService::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_SwitchService::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_SwitchService::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_SwitchService::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_SwitchService::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_SwitchService::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_SwitchService::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_SwitchService::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_SwitchService::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_SwitchService::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_SwitchService::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_SwitchService::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_SwitchService::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_SwitchService::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_SwitchService::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_SwitchService::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_SwitchService::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_SwitchService::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_SwitchService::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_SwitchService::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_SwitchService::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_SwitchService::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_SwitchService::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_SwitchService::getTimeOfLastStateChange() const
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

Boolean UNIX_SwitchService::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_SwitchService::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_SwitchService::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_SwitchService::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_SwitchService::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_SwitchService::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_SwitchService::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_SwitchService::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_SwitchService::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_SwitchService::getCreationClassName() const
{
	return String("UNIX_SwitchService");
}

Boolean UNIX_SwitchService::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_SwitchService::getPrimaryOwnerName() const
{
	return String ("");
}

Boolean UNIX_SwitchService::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_SwitchService::getPrimaryOwnerContact() const
{
	return String ("");
}

Boolean UNIX_SwitchService::getStartMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_MODE, getStartMode());
	return true;
}

String UNIX_SwitchService::getStartMode() const
{
	return String ("");
}

Boolean UNIX_SwitchService::getStarted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTED, getStarted());
	return true;
}

Boolean UNIX_SwitchService::getStarted() const
{
	return Boolean(false);
}

Boolean UNIX_SwitchService::getKeywords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_KEYWORDS, getKeywords());
	return true;
}

Array<String> UNIX_SwitchService::getKeywords() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_SwitchService::getServiceURL(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_U_R_L, getServiceURL());
	return true;
}

String UNIX_SwitchService::getServiceURL() const
{
	return String ("");
}

Boolean UNIX_SwitchService::getStartupConditions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTUP_CONDITIONS, getStartupConditions());
	return true;
}

Array<String> UNIX_SwitchService::getStartupConditions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_SwitchService::getStartupParameters(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTUP_PARAMETERS, getStartupParameters());
	return true;
}

Array<String> UNIX_SwitchService::getStartupParameters() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_SwitchService::getProtocolType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_TYPE, getProtocolType());
	return true;
}

Uint16 UNIX_SwitchService::getProtocolType() const
{
	return Uint16(0);
}

Boolean UNIX_SwitchService::getOtherProtocolType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PROTOCOL_TYPE, getOtherProtocolType());
	return true;
}

String UNIX_SwitchService::getOtherProtocolType() const
{
	return String ("");
}

Boolean UNIX_SwitchService::getBridgeAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BRIDGE_ADDRESS, getBridgeAddress());
	return true;
}

String UNIX_SwitchService::getBridgeAddress() const
{
	return String ("");
}

Boolean UNIX_SwitchService::getNumPorts(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUM_PORTS, getNumPorts());
	return true;
}

Uint16 UNIX_SwitchService::getNumPorts() const
{
	return Uint16(0);
}

Boolean UNIX_SwitchService::getBridgeType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BRIDGE_TYPE, getBridgeType());
	return true;
}

Uint8 UNIX_SwitchService::getBridgeType() const
{
	return Uint8(0);
}

Boolean UNIX_SwitchService::getBridgeAddressType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BRIDGE_ADDRESS_TYPE, getBridgeAddressType());
	return true;
}

Uint16 UNIX_SwitchService::getBridgeAddressType() const
{
	return Uint16(0);
}



Boolean UNIX_SwitchService::initialize()
{
	return false;
}

Boolean UNIX_SwitchService::load(int &pIndex)
{
	return false;
}

Boolean UNIX_SwitchService::finalize()
{
	return false;
}

Boolean UNIX_SwitchService::find(Array<CIMKeyBinding> &kbArray)
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
