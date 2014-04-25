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


UNIX_Cluster::UNIX_Cluster(void)
{
}

UNIX_Cluster::~UNIX_Cluster(void)
{
}


Boolean UNIX_Cluster::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_Cluster::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_Cluster::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_Cluster::getCaption() const
{
	return String ("");
}

Boolean UNIX_Cluster::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_Cluster::getDescription() const
{
	return String ("");
}

Boolean UNIX_Cluster::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_Cluster::getElementName() const
{
	return String("Cluster");
}

Boolean UNIX_Cluster::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_Cluster::getInstallDate() const
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

Boolean UNIX_Cluster::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_Cluster::getName() const
{
	return String ("");
}

Boolean UNIX_Cluster::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_Cluster::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Cluster::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_Cluster::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Cluster::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_Cluster::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_Cluster::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_Cluster::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_Cluster::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_Cluster::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_Cluster::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_Cluster::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_Cluster::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_Cluster::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_Cluster::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_Cluster::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_Cluster::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_Cluster::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_Cluster::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_Cluster::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_Cluster::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_Cluster::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_Cluster::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_Cluster::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_Cluster::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_Cluster::getTimeOfLastStateChange() const
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

Boolean UNIX_Cluster::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_Cluster::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Cluster::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_Cluster::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_Cluster::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_Cluster::getCreationClassName() const
{
	return String("UNIX_Cluster");
}

Boolean UNIX_Cluster::getNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_FORMAT, getNameFormat());
	return true;
}

String UNIX_Cluster::getNameFormat() const
{
	return String ("");
}

Boolean UNIX_Cluster::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_Cluster::getPrimaryOwnerName() const
{
	return String ("");
}

Boolean UNIX_Cluster::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_Cluster::getPrimaryOwnerContact() const
{
	return String ("");
}

Boolean UNIX_Cluster::getRoles(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROLES, getRoles());
	return true;
}

Array<String> UNIX_Cluster::getRoles() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Cluster::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_Cluster::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Cluster::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_Cluster::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Cluster::getDedicated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEDICATED, getDedicated());
	return true;
}

Array<Uint16> UNIX_Cluster::getDedicated() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Cluster::getOtherDedicatedDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_DEDICATED_DESCRIPTIONS, getOtherDedicatedDescriptions());
	return true;
}

Array<String> UNIX_Cluster::getOtherDedicatedDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Cluster::getResetCapability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESET_CAPABILITY, getResetCapability());
	return true;
}

Uint16 UNIX_Cluster::getResetCapability() const
{
	return Uint16(0);
}

Boolean UNIX_Cluster::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_Cluster::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Cluster::getInterconnect(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERCONNECT, getInterconnect());
	return true;
}

String UNIX_Cluster::getInterconnect() const
{
	return String ("");
}

Boolean UNIX_Cluster::getInterconnectAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERCONNECT_ADDRESS, getInterconnectAddress());
	return true;
}

String UNIX_Cluster::getInterconnectAddress() const
{
	return String ("");
}

Boolean UNIX_Cluster::getTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TYPES, getTypes());
	return true;
}

Array<Uint16> UNIX_Cluster::getTypes() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Cluster::getMaxNumberOfNodes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_NUMBER_OF_NODES, getMaxNumberOfNodes());
	return true;
}

Uint32 UNIX_Cluster::getMaxNumberOfNodes() const
{
	return Uint32(0);
}

Boolean UNIX_Cluster::getClusterState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLUSTER_STATE, getClusterState());
	return true;
}

Uint16 UNIX_Cluster::getClusterState() const
{
	return Uint16(0);
}



Boolean UNIX_Cluster::initialize()
{
	return false;
}

Boolean UNIX_Cluster::load(int &pIndex)
{
	return false;
}

Boolean UNIX_Cluster::finalize()
{
	return false;
}

Boolean UNIX_Cluster::find(Array<CIMKeyBinding> &kbArray)
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
