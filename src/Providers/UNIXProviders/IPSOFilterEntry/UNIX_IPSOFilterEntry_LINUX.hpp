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


UNIX_IPSOFilterEntry::UNIX_IPSOFilterEntry(void)
{
}

UNIX_IPSOFilterEntry::~UNIX_IPSOFilterEntry(void)
{
}


Boolean UNIX_IPSOFilterEntry::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_IPSOFilterEntry::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_IPSOFilterEntry::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_IPSOFilterEntry::getCaption() const
{
	return String ("");
}

Boolean UNIX_IPSOFilterEntry::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_IPSOFilterEntry::getDescription() const
{
	return String ("");
}

Boolean UNIX_IPSOFilterEntry::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_IPSOFilterEntry::getElementName() const
{
	return String("IPSOFilterEntry");
}

Boolean UNIX_IPSOFilterEntry::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_IPSOFilterEntry::getInstallDate() const
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

Boolean UNIX_IPSOFilterEntry::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_IPSOFilterEntry::getName() const
{
	return String ("");
}

Boolean UNIX_IPSOFilterEntry::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_IPSOFilterEntry::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_IPSOFilterEntry::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_IPSOFilterEntry::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_IPSOFilterEntry::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_IPSOFilterEntry::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_IPSOFilterEntry::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_IPSOFilterEntry::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_IPSOFilterEntry::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_IPSOFilterEntry::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_IPSOFilterEntry::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_IPSOFilterEntry::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_IPSOFilterEntry::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_IPSOFilterEntry::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_IPSOFilterEntry::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_IPSOFilterEntry::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_IPSOFilterEntry::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_IPSOFilterEntry::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_IPSOFilterEntry::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_IPSOFilterEntry::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_IPSOFilterEntry::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_IPSOFilterEntry::getCreationClassName() const
{
	return String("UNIX_IPSOFilterEntry");
}

Boolean UNIX_IPSOFilterEntry::getIsNegated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_NEGATED, getIsNegated());
	return true;
}

Boolean UNIX_IPSOFilterEntry::getIsNegated() const
{
	return Boolean(false);
}

Boolean UNIX_IPSOFilterEntry::getMatchConditionType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MATCH_CONDITION_TYPE, getMatchConditionType());
	return true;
}

Uint16 UNIX_IPSOFilterEntry::getMatchConditionType() const
{
	return Uint16(0);
}

Boolean UNIX_IPSOFilterEntry::getClassificationLevel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASSIFICATION_LEVEL, getClassificationLevel());
	return true;
}

Uint16 UNIX_IPSOFilterEntry::getClassificationLevel() const
{
	return Uint16(0);
}

Boolean UNIX_IPSOFilterEntry::getOtherClassificationLevel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_CLASSIFICATION_LEVEL, getOtherClassificationLevel());
	return true;
}

String UNIX_IPSOFilterEntry::getOtherClassificationLevel() const
{
	return String ("");
}

Boolean UNIX_IPSOFilterEntry::getProtectionAuthorities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTECTION_AUTHORITIES, getProtectionAuthorities());
	return true;
}

Array<Uint16> UNIX_IPSOFilterEntry::getProtectionAuthorities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_IPSOFilterEntry::getOtherProtectionAuthorities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PROTECTION_AUTHORITIES, getOtherProtectionAuthorities());
	return true;
}

Array<String> UNIX_IPSOFilterEntry::getOtherProtectionAuthorities() const
{
	Array<String> as;
	

	return as;

}



Boolean UNIX_IPSOFilterEntry::initialize()
{
	return false;
}

Boolean UNIX_IPSOFilterEntry::load(int &pIndex)
{
	return false;
}

Boolean UNIX_IPSOFilterEntry::finalize()
{
	return false;
}

Boolean UNIX_IPSOFilterEntry::find(Array<CIMKeyBinding> &kbArray)
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
