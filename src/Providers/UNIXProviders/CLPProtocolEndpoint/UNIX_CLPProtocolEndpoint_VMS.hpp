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


UNIX_CLPProtocolEndpoint::UNIX_CLPProtocolEndpoint(void)
{
}

UNIX_CLPProtocolEndpoint::~UNIX_CLPProtocolEndpoint(void)
{
}


Boolean UNIX_CLPProtocolEndpoint::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_CLPProtocolEndpoint::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_CLPProtocolEndpoint::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_CLPProtocolEndpoint::getCaption() const
{
	return String ("");
}

Boolean UNIX_CLPProtocolEndpoint::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_CLPProtocolEndpoint::getDescription() const
{
	return String ("");
}

Boolean UNIX_CLPProtocolEndpoint::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_CLPProtocolEndpoint::getElementName() const
{
	return String("CLPProtocolEndpoint");
}

Boolean UNIX_CLPProtocolEndpoint::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_CLPProtocolEndpoint::getInstallDate() const
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

Boolean UNIX_CLPProtocolEndpoint::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_CLPProtocolEndpoint::getName() const
{
	return String ("");
}

Boolean UNIX_CLPProtocolEndpoint::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_CLPProtocolEndpoint::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_CLPProtocolEndpoint::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_CLPProtocolEndpoint::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_CLPProtocolEndpoint::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_CLPProtocolEndpoint::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_CLPProtocolEndpoint::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_CLPProtocolEndpoint::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_CLPProtocolEndpoint::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_CLPProtocolEndpoint::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_CLPProtocolEndpoint::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_CLPProtocolEndpoint::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_CLPProtocolEndpoint::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_CLPProtocolEndpoint::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_CLPProtocolEndpoint::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_CLPProtocolEndpoint::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_CLPProtocolEndpoint::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_CLPProtocolEndpoint::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_CLPProtocolEndpoint::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_CLPProtocolEndpoint::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_CLPProtocolEndpoint::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_CLPProtocolEndpoint::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_CLPProtocolEndpoint::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_CLPProtocolEndpoint::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_CLPProtocolEndpoint::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_CLPProtocolEndpoint::getTimeOfLastStateChange() const
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

Boolean UNIX_CLPProtocolEndpoint::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_CLPProtocolEndpoint::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_CLPProtocolEndpoint::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_CLPProtocolEndpoint::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_CLPProtocolEndpoint::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_CLPProtocolEndpoint::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_CLPProtocolEndpoint::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_CLPProtocolEndpoint::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_CLPProtocolEndpoint::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_CLPProtocolEndpoint::getCreationClassName() const
{
	return String("UNIX_CLPProtocolEndpoint");
}

Boolean UNIX_CLPProtocolEndpoint::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

String UNIX_CLPProtocolEndpoint::getNameFormat() const
{
	return String ("");
}

Boolean UNIX_CLPProtocolEndpoint::getProtocolType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_TYPE, getProtocolType());
	return true;
}

Uint16 UNIX_CLPProtocolEndpoint::getProtocolType() const
{
	return Uint16(0);
}

Boolean UNIX_CLPProtocolEndpoint::getProtocolIFType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_I_F_TYPE, getProtocolIFType());
	return true;
}

Uint16 UNIX_CLPProtocolEndpoint::getProtocolIFType() const
{
	return Uint16(0);
}

Boolean UNIX_CLPProtocolEndpoint::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_CLPProtocolEndpoint::getOtherTypeDescription() const
{
	return String ("");
}

Boolean UNIX_CLPProtocolEndpoint::getCurrentDefaultTarget(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_DEFAULT_TARGET, getCurrentDefaultTarget());
	return true;
}

String UNIX_CLPProtocolEndpoint::getCurrentDefaultTarget() const
{
	return String ("");
}

Boolean UNIX_CLPProtocolEndpoint::getKeepTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_KEEP_TIME, getKeepTime());
	return true;
}

Uint16 UNIX_CLPProtocolEndpoint::getKeepTime() const
{
	return Uint16(0);
}

Boolean UNIX_CLPProtocolEndpoint::getWaitBehavior(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WAIT_BEHAVIOR, getWaitBehavior());
	return true;
}

Boolean UNIX_CLPProtocolEndpoint::getWaitBehavior() const
{
	return Boolean(false);
}

Boolean UNIX_CLPProtocolEndpoint::getOutputFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUTPUT_FORMAT, getOutputFormat());
	return true;
}

Uint16 UNIX_CLPProtocolEndpoint::getOutputFormat() const
{
	return Uint16(0);
}

Boolean UNIX_CLPProtocolEndpoint::getOutputVerbosity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUTPUT_VERBOSITY, getOutputVerbosity());
	return true;
}

Uint16 UNIX_CLPProtocolEndpoint::getOutputVerbosity() const
{
	return Uint16(0);
}

Boolean UNIX_CLPProtocolEndpoint::getOutputLanguage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUTPUT_LANGUAGE, getOutputLanguage());
	return true;
}

String UNIX_CLPProtocolEndpoint::getOutputLanguage() const
{
	return String ("");
}

Boolean UNIX_CLPProtocolEndpoint::getOutputPosition(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUTPUT_POSITION, getOutputPosition());
	return true;
}

Uint16 UNIX_CLPProtocolEndpoint::getOutputPosition() const
{
	return Uint16(0);
}

Boolean UNIX_CLPProtocolEndpoint::getOutputOrder(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUTPUT_ORDER, getOutputOrder());
	return true;
}

Uint16 UNIX_CLPProtocolEndpoint::getOutputOrder() const
{
	return Uint16(0);
}

Boolean UNIX_CLPProtocolEndpoint::getOutputCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUTPUT_COUNT, getOutputCount());
	return true;
}

Uint32 UNIX_CLPProtocolEndpoint::getOutputCount() const
{
	return Uint32(0);
}

Boolean UNIX_CLPProtocolEndpoint::getDisplayOption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DISPLAY_OPTION, getDisplayOption());
	return true;
}

String UNIX_CLPProtocolEndpoint::getDisplayOption() const
{
	return String ("");
}



Boolean UNIX_CLPProtocolEndpoint::initialize()
{
	return false;
}

Boolean UNIX_CLPProtocolEndpoint::load(int &pIndex)
{
	return false;
}

Boolean UNIX_CLPProtocolEndpoint::finalize()
{
	return false;
}

Boolean UNIX_CLPProtocolEndpoint::find(Array<CIMKeyBinding> &kbArray)
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
