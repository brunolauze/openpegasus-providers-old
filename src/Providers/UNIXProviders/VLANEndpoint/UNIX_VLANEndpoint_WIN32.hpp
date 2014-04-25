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


UNIX_VLANEndpoint::UNIX_VLANEndpoint(void)
{
}

UNIX_VLANEndpoint::~UNIX_VLANEndpoint(void)
{
}


Boolean UNIX_VLANEndpoint::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_VLANEndpoint::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_VLANEndpoint::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_VLANEndpoint::getCaption() const
{
	return String ("");
}

Boolean UNIX_VLANEndpoint::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_VLANEndpoint::getDescription() const
{
	return String ("");
}

Boolean UNIX_VLANEndpoint::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_VLANEndpoint::getElementName() const
{
	return String("VLANEndpoint");
}

Boolean UNIX_VLANEndpoint::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_VLANEndpoint::getInstallDate() const
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

Boolean UNIX_VLANEndpoint::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_VLANEndpoint::getName() const
{
	return String ("");
}

Boolean UNIX_VLANEndpoint::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_VLANEndpoint::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_VLANEndpoint::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_VLANEndpoint::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_VLANEndpoint::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_VLANEndpoint::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_VLANEndpoint::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_VLANEndpoint::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_VLANEndpoint::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_VLANEndpoint::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_VLANEndpoint::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_VLANEndpoint::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_VLANEndpoint::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_VLANEndpoint::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_VLANEndpoint::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_VLANEndpoint::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_VLANEndpoint::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_VLANEndpoint::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_VLANEndpoint::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_VLANEndpoint::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_VLANEndpoint::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_VLANEndpoint::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_VLANEndpoint::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_VLANEndpoint::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_VLANEndpoint::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_VLANEndpoint::getTimeOfLastStateChange() const
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

Boolean UNIX_VLANEndpoint::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_VLANEndpoint::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_VLANEndpoint::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_VLANEndpoint::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_VLANEndpoint::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_VLANEndpoint::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_VLANEndpoint::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_VLANEndpoint::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_VLANEndpoint::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_VLANEndpoint::getCreationClassName() const
{
	return String("UNIX_VLANEndpoint");
}

Boolean UNIX_VLANEndpoint::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

String UNIX_VLANEndpoint::getNameFormat() const
{
	return String ("");
}

Boolean UNIX_VLANEndpoint::getProtocolType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_TYPE, getProtocolType());
	return true;
}

Uint16 UNIX_VLANEndpoint::getProtocolType() const
{
	return Uint16(0);
}

Boolean UNIX_VLANEndpoint::getProtocolIFType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_I_F_TYPE, getProtocolIFType());
	return true;
}

Uint16 UNIX_VLANEndpoint::getProtocolIFType() const
{
	return Uint16(0);
}

Boolean UNIX_VLANEndpoint::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_VLANEndpoint::getOtherTypeDescription() const
{
	return String ("");
}

Boolean UNIX_VLANEndpoint::getDesiredEndpointMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESIRED_ENDPOINT_MODE, getDesiredEndpointMode());
	return true;
}

Uint16 UNIX_VLANEndpoint::getDesiredEndpointMode() const
{
	return Uint16(0);
}

Boolean UNIX_VLANEndpoint::getOtherEndpointMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENDPOINT_MODE, getOtherEndpointMode());
	return true;
}

String UNIX_VLANEndpoint::getOtherEndpointMode() const
{
	return String ("");
}

Boolean UNIX_VLANEndpoint::getOperationalEndpointMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_ENDPOINT_MODE, getOperationalEndpointMode());
	return true;
}

Uint16 UNIX_VLANEndpoint::getOperationalEndpointMode() const
{
	return Uint16(0);
}

Boolean UNIX_VLANEndpoint::getDesiredVLANTrunkEncapsulation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESIRED_V_L_A_N_TRUNK_ENCAPSULATION, getDesiredVLANTrunkEncapsulation());
	return true;
}

Uint16 UNIX_VLANEndpoint::getDesiredVLANTrunkEncapsulation() const
{
	return Uint16(0);
}

Boolean UNIX_VLANEndpoint::getOtherTrunkEncapsulation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TRUNK_ENCAPSULATION, getOtherTrunkEncapsulation());
	return true;
}

String UNIX_VLANEndpoint::getOtherTrunkEncapsulation() const
{
	return String ("");
}

Boolean UNIX_VLANEndpoint::getOperationalVLANTrunkEncapsulation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_V_L_A_N_TRUNK_ENCAPSULATION, getOperationalVLANTrunkEncapsulation());
	return true;
}

Uint16 UNIX_VLANEndpoint::getOperationalVLANTrunkEncapsulation() const
{
	return Uint16(0);
}

Boolean UNIX_VLANEndpoint::getGVRPStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_G_V_R_P_STATUS, getGVRPStatus());
	return true;
}

Uint16 UNIX_VLANEndpoint::getGVRPStatus() const
{
	return Uint16(0);
}



Boolean UNIX_VLANEndpoint::initialize()
{
	return false;
}

Boolean UNIX_VLANEndpoint::load(int &pIndex)
{
	return false;
}

Boolean UNIX_VLANEndpoint::finalize()
{
	return false;
}

Boolean UNIX_VLANEndpoint::find(Array<CIMKeyBinding> &kbArray)
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
