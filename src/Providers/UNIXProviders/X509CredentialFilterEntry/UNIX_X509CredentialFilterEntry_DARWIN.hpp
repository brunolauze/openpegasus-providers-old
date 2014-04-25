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


UNIX_X509CredentialFilterEntry::UNIX_X509CredentialFilterEntry(void)
{
}

UNIX_X509CredentialFilterEntry::~UNIX_X509CredentialFilterEntry(void)
{
}


Boolean UNIX_X509CredentialFilterEntry::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_X509CredentialFilterEntry::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_X509CredentialFilterEntry::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_X509CredentialFilterEntry::getCaption() const
{
	return String ("");
}

Boolean UNIX_X509CredentialFilterEntry::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_X509CredentialFilterEntry::getDescription() const
{
	return String ("");
}

Boolean UNIX_X509CredentialFilterEntry::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_X509CredentialFilterEntry::getElementName() const
{
	return String("X509CredentialFilterEntry");
}

Boolean UNIX_X509CredentialFilterEntry::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_X509CredentialFilterEntry::getInstallDate() const
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

Boolean UNIX_X509CredentialFilterEntry::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_X509CredentialFilterEntry::getName() const
{
	return String ("");
}

Boolean UNIX_X509CredentialFilterEntry::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_X509CredentialFilterEntry::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_X509CredentialFilterEntry::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_X509CredentialFilterEntry::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_X509CredentialFilterEntry::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_X509CredentialFilterEntry::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_X509CredentialFilterEntry::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_X509CredentialFilterEntry::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_X509CredentialFilterEntry::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_X509CredentialFilterEntry::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_X509CredentialFilterEntry::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_X509CredentialFilterEntry::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_X509CredentialFilterEntry::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_X509CredentialFilterEntry::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_X509CredentialFilterEntry::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_X509CredentialFilterEntry::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_X509CredentialFilterEntry::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_X509CredentialFilterEntry::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_X509CredentialFilterEntry::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_X509CredentialFilterEntry::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_X509CredentialFilterEntry::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_X509CredentialFilterEntry::getCreationClassName() const
{
	return String("UNIX_X509CredentialFilterEntry");
}

Boolean UNIX_X509CredentialFilterEntry::getIsNegated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_NEGATED, getIsNegated());
	return true;
}

Boolean UNIX_X509CredentialFilterEntry::getIsNegated() const
{
	return Boolean(false);
}

Boolean UNIX_X509CredentialFilterEntry::getMatchFieldName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MATCH_FIELD_NAME, getMatchFieldName());
	return true;
}

Uint32 UNIX_X509CredentialFilterEntry::getMatchFieldName() const
{
	return Uint32(0);
}

Boolean UNIX_X509CredentialFilterEntry::getMatchFieldValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MATCH_FIELD_VALUE, getMatchFieldValue());
	return true;
}

String UNIX_X509CredentialFilterEntry::getMatchFieldValue() const
{
	return String ("");
}



Boolean UNIX_X509CredentialFilterEntry::initialize()
{
	return false;
}

Boolean UNIX_X509CredentialFilterEntry::load(int &pIndex)
{
	return false;
}

Boolean UNIX_X509CredentialFilterEntry::finalize()
{
	return false;
}

Boolean UNIX_X509CredentialFilterEntry::find(Array<CIMKeyBinding> &kbArray)
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
