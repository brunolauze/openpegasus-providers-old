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


UNIX_FilterEntry::UNIX_FilterEntry(void)
{
}

UNIX_FilterEntry::~UNIX_FilterEntry(void)
{
}


Boolean UNIX_FilterEntry::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FilterEntry::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_FilterEntry::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FilterEntry::getCaption() const
{
	return String ("");
}

Boolean UNIX_FilterEntry::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FilterEntry::getDescription() const
{
	return String ("");
}

Boolean UNIX_FilterEntry::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FilterEntry::getElementName() const
{
	return String("FilterEntry");
}

Boolean UNIX_FilterEntry::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_FilterEntry::getInstallDate() const
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

Boolean UNIX_FilterEntry::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_FilterEntry::getName() const
{
	return String ("");
}

Boolean UNIX_FilterEntry::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_FilterEntry::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_FilterEntry::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_FilterEntry::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_FilterEntry::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_FilterEntry::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_FilterEntry::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_FilterEntry::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_FilterEntry::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_FilterEntry::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_FilterEntry::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_FilterEntry::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_FilterEntry::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_FilterEntry::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_FilterEntry::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_FilterEntry::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_FilterEntry::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_FilterEntry::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_FilterEntry::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_FilterEntry::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_FilterEntry::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_FilterEntry::getCreationClassName() const
{
	return String("UNIX_FilterEntry");
}

Boolean UNIX_FilterEntry::getIsNegated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_NEGATED, getIsNegated());
	return true;
}

Boolean UNIX_FilterEntry::getIsNegated() const
{
	return Boolean(false);
}

Boolean UNIX_FilterEntry::getTrafficType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRAFFIC_TYPE, getTrafficType());
	return true;
}

Uint16 UNIX_FilterEntry::getTrafficType() const
{
	return Uint16(0);
}

Boolean UNIX_FilterEntry::getOtherTrafficType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TRAFFIC_TYPE, getOtherTrafficType());
	return true;
}

String UNIX_FilterEntry::getOtherTrafficType() const
{
	return String ("");
}

Boolean UNIX_FilterEntry::getMatchConditionType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MATCH_CONDITION_TYPE, getMatchConditionType());
	return true;
}

Uint16 UNIX_FilterEntry::getMatchConditionType() const
{
	return Uint16(0);
}

Boolean UNIX_FilterEntry::getOtherMatchConditionType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_MATCH_CONDITION_TYPE, getOtherMatchConditionType());
	return true;
}

String UNIX_FilterEntry::getOtherMatchConditionType() const
{
	return String ("");
}

Boolean UNIX_FilterEntry::getMatchConditionValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MATCH_CONDITION_VALUE, getMatchConditionValue());
	return true;
}

String UNIX_FilterEntry::getMatchConditionValue() const
{
	return String ("");
}

Boolean UNIX_FilterEntry::getAction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTION, getAction());
	return true;
}

Uint16 UNIX_FilterEntry::getAction() const
{
	return Uint16(0);
}

Boolean UNIX_FilterEntry::getDefaultFilter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_FILTER, getDefaultFilter());
	return true;
}

Boolean UNIX_FilterEntry::getDefaultFilter() const
{
	return Boolean(false);
}

Boolean UNIX_FilterEntry::getTrafficClass(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRAFFIC_CLASS, getTrafficClass());
	return true;
}

String UNIX_FilterEntry::getTrafficClass() const
{
	return String ("");
}



Boolean UNIX_FilterEntry::initialize()
{
	return false;
}

Boolean UNIX_FilterEntry::load(int &pIndex)
{
	return false;
}

Boolean UNIX_FilterEntry::finalize()
{
	return false;
}

Boolean UNIX_FilterEntry::find(Array<CIMKeyBinding> &kbArray)
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
