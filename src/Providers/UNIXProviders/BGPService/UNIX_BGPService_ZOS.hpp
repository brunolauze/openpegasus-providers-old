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


UNIX_BGPService::UNIX_BGPService(void)
{
}

UNIX_BGPService::~UNIX_BGPService(void)
{
}


Boolean UNIX_BGPService::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BGPService::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_BGPService::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BGPService::getCaption() const
{
	return String ("");
}

Boolean UNIX_BGPService::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BGPService::getDescription() const
{
	return String ("");
}

Boolean UNIX_BGPService::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BGPService::getElementName() const
{
	return String("BGPService");
}

Boolean UNIX_BGPService::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_BGPService::getInstallDate() const
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

Boolean UNIX_BGPService::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_BGPService::getName() const
{
	return String ("");
}

Boolean UNIX_BGPService::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_BGPService::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_BGPService::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_BGPService::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_BGPService::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_BGPService::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_BGPService::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_BGPService::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_BGPService::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_BGPService::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_BGPService::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_BGPService::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_BGPService::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_BGPService::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_BGPService::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_BGPService::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_BGPService::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_BGPService::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_BGPService::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_BGPService::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_BGPService::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_BGPService::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_BGPService::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_BGPService::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_BGPService::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_BGPService::getTimeOfLastStateChange() const
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

Boolean UNIX_BGPService::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_BGPService::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_BGPService::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_BGPService::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_BGPService::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_BGPService::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_BGPService::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_BGPService::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_BGPService::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_BGPService::getCreationClassName() const
{
	return String("UNIX_BGPService");
}

Boolean UNIX_BGPService::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_BGPService::getPrimaryOwnerName() const
{
	return String ("");
}

Boolean UNIX_BGPService::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_BGPService::getPrimaryOwnerContact() const
{
	return String ("");
}

Boolean UNIX_BGPService::getStartMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_MODE, getStartMode());
	return true;
}

String UNIX_BGPService::getStartMode() const
{
	return String ("");
}

Boolean UNIX_BGPService::getStarted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTED, getStarted());
	return true;
}

Boolean UNIX_BGPService::getStarted() const
{
	return Boolean(false);
}

Boolean UNIX_BGPService::getKeywords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_KEYWORDS, getKeywords());
	return true;
}

Array<String> UNIX_BGPService::getKeywords() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_BGPService::getServiceURL(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_U_R_L, getServiceURL());
	return true;
}

String UNIX_BGPService::getServiceURL() const
{
	return String ("");
}

Boolean UNIX_BGPService::getStartupConditions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTUP_CONDITIONS, getStartupConditions());
	return true;
}

Array<String> UNIX_BGPService::getStartupConditions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_BGPService::getStartupParameters(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTUP_PARAMETERS, getStartupParameters());
	return true;
}

Array<String> UNIX_BGPService::getStartupParameters() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_BGPService::getRouterID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROUTER_ID, getRouterID());
	return true;
}

String UNIX_BGPService::getRouterID() const
{
	return String ("");
}

Boolean UNIX_BGPService::getAlgorithmType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALGORITHM_TYPE, getAlgorithmType());
	return true;
}

Uint16 UNIX_BGPService::getAlgorithmType() const
{
	return Uint16(0);
}

Boolean UNIX_BGPService::getBGPVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_B_G_P_VERSION, getBGPVersion());
	return true;
}

Uint8 UNIX_BGPService::getBGPVersion() const
{
	return Uint8(0);
}

Boolean UNIX_BGPService::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint16 UNIX_BGPService::getLastErrorCode() const
{
	return Uint16(0);
}

Boolean UNIX_BGPService::getLastMessageErrorSubCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_MESSAGE_ERROR_SUB_CODE, getLastMessageErrorSubCode());
	return true;
}

Uint16 UNIX_BGPService::getLastMessageErrorSubCode() const
{
	return Uint16(0);
}

Boolean UNIX_BGPService::getLastOpenErrorSubCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_OPEN_ERROR_SUB_CODE, getLastOpenErrorSubCode());
	return true;
}

Uint16 UNIX_BGPService::getLastOpenErrorSubCode() const
{
	return Uint16(0);
}

Boolean UNIX_BGPService::getLastUpdateErrorSubCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_UPDATE_ERROR_SUB_CODE, getLastUpdateErrorSubCode());
	return true;
}

Uint16 UNIX_BGPService::getLastUpdateErrorSubCode() const
{
	return Uint16(0);
}



Boolean UNIX_BGPService::initialize()
{
	return false;
}

Boolean UNIX_BGPService::load(int &pIndex)
{
	return false;
}

Boolean UNIX_BGPService::finalize()
{
	return false;
}

Boolean UNIX_BGPService::find(Array<CIMKeyBinding> &kbArray)
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
