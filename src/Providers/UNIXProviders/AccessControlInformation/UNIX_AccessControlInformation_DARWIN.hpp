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


UNIX_AccessControlInformation::UNIX_AccessControlInformation(void)
{
}

UNIX_AccessControlInformation::~UNIX_AccessControlInformation(void)
{
}


Boolean UNIX_AccessControlInformation::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_AccessControlInformation::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_AccessControlInformation::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_AccessControlInformation::getCaption() const
{
	return String ("");
}

Boolean UNIX_AccessControlInformation::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_AccessControlInformation::getDescription() const
{
	return String ("");
}

Boolean UNIX_AccessControlInformation::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_AccessControlInformation::getElementName() const
{
	return String("AccessControlInformation");
}

Boolean UNIX_AccessControlInformation::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_AccessControlInformation::getInstallDate() const
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

Boolean UNIX_AccessControlInformation::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_AccessControlInformation::getName() const
{
	return String ("");
}

Boolean UNIX_AccessControlInformation::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_AccessControlInformation::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_AccessControlInformation::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_AccessControlInformation::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_AccessControlInformation::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_AccessControlInformation::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_AccessControlInformation::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_AccessControlInformation::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_AccessControlInformation::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_AccessControlInformation::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_AccessControlInformation::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_AccessControlInformation::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_AccessControlInformation::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_AccessControlInformation::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_AccessControlInformation::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_AccessControlInformation::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_AccessControlInformation::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_AccessControlInformation::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_AccessControlInformation::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_AccessControlInformation::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_AccessControlInformation::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_AccessControlInformation::getCreationClassName() const
{
	return String("UNIX_AccessControlInformation");
}

Boolean UNIX_AccessControlInformation::getSecurityClassification(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SECURITY_CLASSIFICATION, getSecurityClassification());
	return true;
}

String UNIX_AccessControlInformation::getSecurityClassification() const
{
	return String ("");
}

Boolean UNIX_AccessControlInformation::getAccessType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS_TYPE, getAccessType());
	return true;
}

Array<String> UNIX_AccessControlInformation::getAccessType() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_AccessControlInformation::getAccessQualifier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS_QUALIFIER, getAccessQualifier());
	return true;
}

Array<String> UNIX_AccessControlInformation::getAccessQualifier() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_AccessControlInformation::getPermission(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERMISSION, getPermission());
	return true;
}

Array<String> UNIX_AccessControlInformation::getPermission() const
{
	Array<String> as;
	

	return as;

}



Boolean UNIX_AccessControlInformation::initialize()
{
	return false;
}

Boolean UNIX_AccessControlInformation::load(int &pIndex)
{
	return false;
}

Boolean UNIX_AccessControlInformation::finalize()
{
	return false;
}

Boolean UNIX_AccessControlInformation::find(Array<CIMKeyBinding> &kbArray)
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
