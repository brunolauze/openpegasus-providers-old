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


UNIX_SpanningTreeService::UNIX_SpanningTreeService(void)
{
}

UNIX_SpanningTreeService::~UNIX_SpanningTreeService(void)
{
}


Boolean UNIX_SpanningTreeService::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SpanningTreeService::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_SpanningTreeService::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SpanningTreeService::getCaption() const
{
	return String ("");
}

Boolean UNIX_SpanningTreeService::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SpanningTreeService::getDescription() const
{
	return String ("");
}

Boolean UNIX_SpanningTreeService::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SpanningTreeService::getElementName() const
{
	return String("SpanningTreeService");
}

Boolean UNIX_SpanningTreeService::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_SpanningTreeService::getInstallDate() const
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

Boolean UNIX_SpanningTreeService::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_SpanningTreeService::getName() const
{
	return String ("");
}

Boolean UNIX_SpanningTreeService::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_SpanningTreeService::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_SpanningTreeService::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_SpanningTreeService::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_SpanningTreeService::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_SpanningTreeService::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_SpanningTreeService::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_SpanningTreeService::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_SpanningTreeService::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_SpanningTreeService::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_SpanningTreeService::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_SpanningTreeService::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_SpanningTreeService::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_SpanningTreeService::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_SpanningTreeService::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_SpanningTreeService::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_SpanningTreeService::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_SpanningTreeService::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_SpanningTreeService::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_SpanningTreeService::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_SpanningTreeService::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_SpanningTreeService::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_SpanningTreeService::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_SpanningTreeService::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_SpanningTreeService::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_SpanningTreeService::getTimeOfLastStateChange() const
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

Boolean UNIX_SpanningTreeService::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_SpanningTreeService::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_SpanningTreeService::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_SpanningTreeService::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_SpanningTreeService::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_SpanningTreeService::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_SpanningTreeService::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_SpanningTreeService::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_SpanningTreeService::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_SpanningTreeService::getCreationClassName() const
{
	return String("UNIX_SpanningTreeService");
}

Boolean UNIX_SpanningTreeService::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_SpanningTreeService::getPrimaryOwnerName() const
{
	return String ("");
}

Boolean UNIX_SpanningTreeService::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_SpanningTreeService::getPrimaryOwnerContact() const
{
	return String ("");
}

Boolean UNIX_SpanningTreeService::getStartMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_MODE, getStartMode());
	return true;
}

String UNIX_SpanningTreeService::getStartMode() const
{
	return String ("");
}

Boolean UNIX_SpanningTreeService::getStarted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTED, getStarted());
	return true;
}

Boolean UNIX_SpanningTreeService::getStarted() const
{
	return Boolean(false);
}

Boolean UNIX_SpanningTreeService::getKeywords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_KEYWORDS, getKeywords());
	return true;
}

Array<String> UNIX_SpanningTreeService::getKeywords() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_SpanningTreeService::getServiceURL(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_U_R_L, getServiceURL());
	return true;
}

String UNIX_SpanningTreeService::getServiceURL() const
{
	return String ("");
}

Boolean UNIX_SpanningTreeService::getStartupConditions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTUP_CONDITIONS, getStartupConditions());
	return true;
}

Array<String> UNIX_SpanningTreeService::getStartupConditions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_SpanningTreeService::getStartupParameters(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTUP_PARAMETERS, getStartupParameters());
	return true;
}

Array<String> UNIX_SpanningTreeService::getStartupParameters() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_SpanningTreeService::getProtocolType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_TYPE, getProtocolType());
	return true;
}

Uint16 UNIX_SpanningTreeService::getProtocolType() const
{
	return Uint16(0);
}

Boolean UNIX_SpanningTreeService::getOtherProtocolType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PROTOCOL_TYPE, getOtherProtocolType());
	return true;
}

String UNIX_SpanningTreeService::getOtherProtocolType() const
{
	return String ("");
}

Boolean UNIX_SpanningTreeService::getProtocolSpec(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_SPEC, getProtocolSpec());
	return true;
}

Uint16 UNIX_SpanningTreeService::getProtocolSpec() const
{
	return Uint16(0);
}

Boolean UNIX_SpanningTreeService::getPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIORITY, getPriority());
	return true;
}

Uint16 UNIX_SpanningTreeService::getPriority() const
{
	return Uint16(0);
}

Boolean UNIX_SpanningTreeService::getSpanningTreeBridgeAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPANNING_TREE_BRIDGE_ADDRESS, getSpanningTreeBridgeAddress());
	return true;
}

String UNIX_SpanningTreeService::getSpanningTreeBridgeAddress() const
{
	return String ("");
}

Boolean UNIX_SpanningTreeService::getDesignatedRoot(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESIGNATED_ROOT, getDesignatedRoot());
	return true;
}

String UNIX_SpanningTreeService::getDesignatedRoot() const
{
	return String ("");
}

Boolean UNIX_SpanningTreeService::getRootCost(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROOT_COST, getRootCost());
	return true;
}

Uint16 UNIX_SpanningTreeService::getRootCost() const
{
	return Uint16(0);
}

Boolean UNIX_SpanningTreeService::getRootPort(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROOT_PORT, getRootPort());
	return true;
}

Uint16 UNIX_SpanningTreeService::getRootPort() const
{
	return Uint16(0);
}

Boolean UNIX_SpanningTreeService::getMaxAge(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_AGE, getMaxAge());
	return true;
}

Uint32 UNIX_SpanningTreeService::getMaxAge() const
{
	return Uint32(0);
}

Boolean UNIX_SpanningTreeService::getHelloTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HELLO_TIME, getHelloTime());
	return true;
}

Uint32 UNIX_SpanningTreeService::getHelloTime() const
{
	return Uint32(0);
}

Boolean UNIX_SpanningTreeService::getHoldTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOLD_TIME, getHoldTime());
	return true;
}

Uint32 UNIX_SpanningTreeService::getHoldTime() const
{
	return Uint32(0);
}

Boolean UNIX_SpanningTreeService::getForwardDelay(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FORWARD_DELAY, getForwardDelay());
	return true;
}

Uint32 UNIX_SpanningTreeService::getForwardDelay() const
{
	return Uint32(0);
}

Boolean UNIX_SpanningTreeService::getBridgeMaxAge(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BRIDGE_MAX_AGE, getBridgeMaxAge());
	return true;
}

Uint32 UNIX_SpanningTreeService::getBridgeMaxAge() const
{
	return Uint32(0);
}

Boolean UNIX_SpanningTreeService::getBridgeHelloTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BRIDGE_HELLO_TIME, getBridgeHelloTime());
	return true;
}

Uint32 UNIX_SpanningTreeService::getBridgeHelloTime() const
{
	return Uint32(0);
}

Boolean UNIX_SpanningTreeService::getBridgeForwardDelay(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BRIDGE_FORWARD_DELAY, getBridgeForwardDelay());
	return true;
}

Uint32 UNIX_SpanningTreeService::getBridgeForwardDelay() const
{
	return Uint32(0);
}



Boolean UNIX_SpanningTreeService::initialize()
{
	return false;
}

Boolean UNIX_SpanningTreeService::load(int &pIndex)
{
	return false;
}

Boolean UNIX_SpanningTreeService::finalize()
{
	return false;
}

Boolean UNIX_SpanningTreeService::find(Array<CIMKeyBinding> &kbArray)
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
