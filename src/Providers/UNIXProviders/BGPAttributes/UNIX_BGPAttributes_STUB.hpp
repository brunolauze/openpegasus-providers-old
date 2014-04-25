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


UNIX_BGPAttributes::UNIX_BGPAttributes(void)
{
}

UNIX_BGPAttributes::~UNIX_BGPAttributes(void)
{
}


Boolean UNIX_BGPAttributes::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BGPAttributes::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_BGPAttributes::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BGPAttributes::getCaption() const
{
	return String ("");
}

Boolean UNIX_BGPAttributes::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BGPAttributes::getDescription() const
{
	return String ("");
}

Boolean UNIX_BGPAttributes::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BGPAttributes::getElementName() const
{
	return String("BGPAttributes");
}

Boolean UNIX_BGPAttributes::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_BGPAttributes::getInstallDate() const
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

Boolean UNIX_BGPAttributes::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_BGPAttributes::getName() const
{
	return String ("");
}

Boolean UNIX_BGPAttributes::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_BGPAttributes::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_BGPAttributes::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_BGPAttributes::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_BGPAttributes::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_BGPAttributes::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_BGPAttributes::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_BGPAttributes::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_BGPAttributes::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_BGPAttributes::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_BGPAttributes::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_BGPAttributes::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_BGPAttributes::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_BGPAttributes::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_BGPAttributes::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_BGPAttributes::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_BGPAttributes::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_BGPAttributes::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_BGPAttributes::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_BGPAttributes::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_BGPAttributes::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_BGPAttributes::getVersion() const
{
	return String ("");
}

Boolean UNIX_BGPAttributes::getLocalPreference(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCAL_PREFERENCE, getLocalPreference());
	return true;
}

Uint16 UNIX_BGPAttributes::getLocalPreference() const
{
	return Uint16(0);
}

Boolean UNIX_BGPAttributes::getASPath(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_A_S_PATH, getASPath());
	return true;
}

String UNIX_BGPAttributes::getASPath() const
{
	return String ("");
}

Boolean UNIX_BGPAttributes::getAsSet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AS_SET, getAsSet());
	return true;
}

String UNIX_BGPAttributes::getAsSet() const
{
	return String ("");
}

Boolean UNIX_BGPAttributes::getNextHop(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NEXT_HOP, getNextHop());
	return true;
}

String UNIX_BGPAttributes::getNextHop() const
{
	return String ("");
}

Boolean UNIX_BGPAttributes::getNextHopSelf(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NEXT_HOP_SELF, getNextHopSelf());
	return true;
}

String UNIX_BGPAttributes::getNextHopSelf() const
{
	return String ("");
}

Boolean UNIX_BGPAttributes::getMED(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_M_E_D, getMED());
	return true;
}

Uint32 UNIX_BGPAttributes::getMED() const
{
	return Uint32(0);
}

Boolean UNIX_BGPAttributes::getBGPCommunityValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_B_G_P_COMMUNITY_VALUE, getBGPCommunityValue());
	return true;
}

Uint32 UNIX_BGPAttributes::getBGPCommunityValue() const
{
	return Uint32(0);
}

Boolean UNIX_BGPAttributes::getAtomicAggregate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ATOMIC_AGGREGATE, getAtomicAggregate());
	return true;
}

Boolean UNIX_BGPAttributes::getAtomicAggregate() const
{
	return Boolean(false);
}

Boolean UNIX_BGPAttributes::getAggregator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AGGREGATOR, getAggregator());
	return true;
}

String UNIX_BGPAttributes::getAggregator() const
{
	return String ("");
}

Boolean UNIX_BGPAttributes::getOrigin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ORIGIN, getOrigin());
	return true;
}

Uint16 UNIX_BGPAttributes::getOrigin() const
{
	return Uint16(0);
}

Boolean UNIX_BGPAttributes::getOriginatorID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ORIGINATOR_ID, getOriginatorID());
	return true;
}

String UNIX_BGPAttributes::getOriginatorID() const
{
	return String ("");
}



Boolean UNIX_BGPAttributes::initialize()
{
	return false;
}

Boolean UNIX_BGPAttributes::load(int &pIndex)
{
	return false;
}

Boolean UNIX_BGPAttributes::finalize()
{
	return false;
}

Boolean UNIX_BGPAttributes::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String versionKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_VERSION)) versionKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
