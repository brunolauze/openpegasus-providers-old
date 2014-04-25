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


UNIX_BGPPathAttributes::UNIX_BGPPathAttributes(void)
{
}

UNIX_BGPPathAttributes::~UNIX_BGPPathAttributes(void)
{
}


Boolean UNIX_BGPPathAttributes::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BGPPathAttributes::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_BGPPathAttributes::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BGPPathAttributes::getCaption() const
{
	return String ("");
}

Boolean UNIX_BGPPathAttributes::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BGPPathAttributes::getDescription() const
{
	return String ("");
}

Boolean UNIX_BGPPathAttributes::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BGPPathAttributes::getElementName() const
{
	return String("BGPPathAttributes");
}

Boolean UNIX_BGPPathAttributes::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_BGPPathAttributes::getInstallDate() const
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

Boolean UNIX_BGPPathAttributes::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_BGPPathAttributes::getName() const
{
	return String ("");
}

Boolean UNIX_BGPPathAttributes::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_BGPPathAttributes::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_BGPPathAttributes::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_BGPPathAttributes::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_BGPPathAttributes::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_BGPPathAttributes::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_BGPPathAttributes::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_BGPPathAttributes::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_BGPPathAttributes::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_BGPPathAttributes::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_BGPPathAttributes::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_BGPPathAttributes::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_BGPPathAttributes::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_BGPPathAttributes::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_BGPPathAttributes::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_BGPPathAttributes::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_BGPPathAttributes::getASNumbers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_A_S_NUMBERS, getASNumbers());
	return true;
}

String UNIX_BGPPathAttributes::getASNumbers() const
{
	return String ("");
}

Boolean UNIX_BGPPathAttributes::getPathAttrNextHop(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PATH_ATTR_NEXT_HOP, getPathAttrNextHop());
	return true;
}

String UNIX_BGPPathAttributes::getPathAttrNextHop() const
{
	return String ("");
}

Boolean UNIX_BGPPathAttributes::getPathAttrASPathSegment(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PATH_ATTR_A_S_PATH_SEGMENT, getPathAttrASPathSegment());
	return true;
}

Array<Uint8> UNIX_BGPPathAttributes::getPathAttrASPathSegment() const
{
	Array<Uint8> as;
	

	return as;

}

Boolean UNIX_BGPPathAttributes::getPathAttrOrigin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PATH_ATTR_ORIGIN, getPathAttrOrigin());
	return true;
}

Uint16 UNIX_BGPPathAttributes::getPathAttrOrigin() const
{
	return Uint16(0);
}

Boolean UNIX_BGPPathAttributes::getPathAttrMultiExitDisc(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PATH_ATTR_MULTI_EXIT_DISC, getPathAttrMultiExitDisc());
	return true;
}

Sint32 UNIX_BGPPathAttributes::getPathAttrMultiExitDisc() const
{
	return Sint32(0);
}

Boolean UNIX_BGPPathAttributes::getPathAttrLocalPref(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PATH_ATTR_LOCAL_PREF, getPathAttrLocalPref());
	return true;
}

Sint32 UNIX_BGPPathAttributes::getPathAttrLocalPref() const
{
	return Sint32(0);
}

Boolean UNIX_BGPPathAttributes::getPathAttrAtomicAggregate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PATH_ATTR_ATOMIC_AGGREGATE, getPathAttrAtomicAggregate());
	return true;
}

Uint32 UNIX_BGPPathAttributes::getPathAttrAtomicAggregate() const
{
	return Uint32(0);
}

Boolean UNIX_BGPPathAttributes::getPathAttrAggregatorAS(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PATH_ATTR_AGGREGATOR_A_S, getPathAttrAggregatorAS());
	return true;
}

Uint16 UNIX_BGPPathAttributes::getPathAttrAggregatorAS() const
{
	return Uint16(0);
}

Boolean UNIX_BGPPathAttributes::getPathAttrAggregatorAddr(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PATH_ATTR_AGGREGATOR_ADDR, getPathAttrAggregatorAddr());
	return true;
}

String UNIX_BGPPathAttributes::getPathAttrAggregatorAddr() const
{
	return String ("");
}

Boolean UNIX_BGPPathAttributes::getPathAttrCalcLocalPref(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PATH_ATTR_CALC_LOCAL_PREF, getPathAttrCalcLocalPref());
	return true;
}

Sint16 UNIX_BGPPathAttributes::getPathAttrCalcLocalPref() const
{
	return Sint16(0);
}

Boolean UNIX_BGPPathAttributes::getPathAttrBest(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PATH_ATTR_BEST, getPathAttrBest());
	return true;
}

Uint16 UNIX_BGPPathAttributes::getPathAttrBest() const
{
	return Uint16(0);
}

Boolean UNIX_BGPPathAttributes::getPathAttrUnknown(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PATH_ATTR_UNKNOWN, getPathAttrUnknown());
	return true;
}

Array<String> UNIX_BGPPathAttributes::getPathAttrUnknown() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_BGPPathAttributes::getPathAttrUnknownNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PATH_ATTR_UNKNOWN_NUMBER, getPathAttrUnknownNumber());
	return true;
}

Uint16 UNIX_BGPPathAttributes::getPathAttrUnknownNumber() const
{
	return Uint16(0);
}



Boolean UNIX_BGPPathAttributes::initialize()
{
	return false;
}

Boolean UNIX_BGPPathAttributes::load(int &pIndex)
{
	return false;
}

Boolean UNIX_BGPPathAttributes::finalize()
{
	return false;
}

Boolean UNIX_BGPPathAttributes::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String aSNumbersKey;
	String pathAttrNextHopKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_A_S_NUMBERS)) aSNumbersKey = kb.getValue();
		else if (keyName.equal(PROPERTY_PATH_ATTR_NEXT_HOP)) pathAttrNextHopKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
