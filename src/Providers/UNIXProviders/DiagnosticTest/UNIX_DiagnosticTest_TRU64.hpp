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


UNIX_DiagnosticTest::UNIX_DiagnosticTest(void)
{
}

UNIX_DiagnosticTest::~UNIX_DiagnosticTest(void)
{
}


Boolean UNIX_DiagnosticTest::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DiagnosticTest::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_DiagnosticTest::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DiagnosticTest::getCaption() const
{
	return String ("");
}

Boolean UNIX_DiagnosticTest::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DiagnosticTest::getDescription() const
{
	return String ("");
}

Boolean UNIX_DiagnosticTest::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DiagnosticTest::getElementName() const
{
	return String("DiagnosticTest");
}

Boolean UNIX_DiagnosticTest::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_DiagnosticTest::getInstallDate() const
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

Boolean UNIX_DiagnosticTest::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_DiagnosticTest::getName() const
{
	return String ("");
}

Boolean UNIX_DiagnosticTest::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_DiagnosticTest::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DiagnosticTest::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_DiagnosticTest::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_DiagnosticTest::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_DiagnosticTest::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_DiagnosticTest::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_DiagnosticTest::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_DiagnosticTest::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_DiagnosticTest::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_DiagnosticTest::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_DiagnosticTest::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_DiagnosticTest::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_DiagnosticTest::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_DiagnosticTest::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_DiagnosticTest::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_DiagnosticTest::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_DiagnosticTest::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_DiagnosticTest::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_DiagnosticTest::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_DiagnosticTest::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_DiagnosticTest::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_DiagnosticTest::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_DiagnosticTest::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_DiagnosticTest::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_DiagnosticTest::getTimeOfLastStateChange() const
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

Boolean UNIX_DiagnosticTest::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_DiagnosticTest::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DiagnosticTest::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_DiagnosticTest::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_DiagnosticTest::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_DiagnosticTest::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_DiagnosticTest::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_DiagnosticTest::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_DiagnosticTest::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_DiagnosticTest::getCreationClassName() const
{
	return String("UNIX_DiagnosticTest");
}

Boolean UNIX_DiagnosticTest::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_DiagnosticTest::getPrimaryOwnerName() const
{
	return String ("");
}

Boolean UNIX_DiagnosticTest::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_DiagnosticTest::getPrimaryOwnerContact() const
{
	return String ("");
}

Boolean UNIX_DiagnosticTest::getStartMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_MODE, getStartMode());
	return true;
}

String UNIX_DiagnosticTest::getStartMode() const
{
	return String ("");
}

Boolean UNIX_DiagnosticTest::getStarted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTED, getStarted());
	return true;
}

Boolean UNIX_DiagnosticTest::getStarted() const
{
	return Boolean(false);
}

Boolean UNIX_DiagnosticTest::getCharacteristics(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHARACTERISTICS, getCharacteristics());
	return true;
}

Array<Uint16> UNIX_DiagnosticTest::getCharacteristics() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DiagnosticTest::getOtherCharacteristicDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_CHARACTERISTIC_DESCRIPTION, getOtherCharacteristicDescription());
	return true;
}

String UNIX_DiagnosticTest::getOtherCharacteristicDescription() const
{
	return String ("");
}

Boolean UNIX_DiagnosticTest::getOtherCharacteristicsDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_CHARACTERISTICS_DESCRIPTIONS, getOtherCharacteristicsDescriptions());
	return true;
}

Array<String> UNIX_DiagnosticTest::getOtherCharacteristicsDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_DiagnosticTest::getIsInUse(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_IN_USE, getIsInUse());
	return true;
}

Boolean UNIX_DiagnosticTest::getIsInUse() const
{
	return Boolean(false);
}

Boolean UNIX_DiagnosticTest::getResourcesUsed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESOURCES_USED, getResourcesUsed());
	return true;
}

Array<Uint16> UNIX_DiagnosticTest::getResourcesUsed() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DiagnosticTest::getTestTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TEST_TYPES, getTestTypes());
	return true;
}

Array<Uint16> UNIX_DiagnosticTest::getTestTypes() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DiagnosticTest::getOtherTestTypesDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TEST_TYPES_DESCRIPTIONS, getOtherTestTypesDescriptions());
	return true;
}

Array<String> UNIX_DiagnosticTest::getOtherTestTypesDescriptions() const
{
	Array<String> as;
	

	return as;

}



Boolean UNIX_DiagnosticTest::initialize()
{
	return false;
}

Boolean UNIX_DiagnosticTest::load(int &pIndex)
{
	return false;
}

Boolean UNIX_DiagnosticTest::finalize()
{
	return false;
}

Boolean UNIX_DiagnosticTest::find(Array<CIMKeyBinding> &kbArray)
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
