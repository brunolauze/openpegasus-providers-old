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


UNIX_AccountSettingData::UNIX_AccountSettingData(void)
{
}

UNIX_AccountSettingData::~UNIX_AccountSettingData(void)
{
}


Boolean UNIX_AccountSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_AccountSettingData::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_AccountSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_AccountSettingData::getCaption() const
{
	return String ("");
}

Boolean UNIX_AccountSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_AccountSettingData::getDescription() const
{
	return String ("");
}

Boolean UNIX_AccountSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_AccountSettingData::getElementName() const
{
	return String("AccountSettingData");
}

Boolean UNIX_AccountSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_AccountSettingData::getChangeableType() const
{
	return Uint16(0);
}

Boolean UNIX_AccountSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_AccountSettingData::getConfigurationName() const
{
	return String ("");
}

Boolean UNIX_AccountSettingData::getComplexPasswordRulesEnforced(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPLEX_PASSWORD_RULES_ENFORCED, getComplexPasswordRulesEnforced());
	return true;
}

Array<Uint16> UNIX_AccountSettingData::getComplexPasswordRulesEnforced() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_AccountSettingData::getInactivityTimeout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INACTIVITY_TIMEOUT, getInactivityTimeout());
	return true;
}

CIMDateTime UNIX_AccountSettingData::getInactivityTimeout() const
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

Boolean UNIX_AccountSettingData::getMaximumPasswordExpiration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_PASSWORD_EXPIRATION, getMaximumPasswordExpiration());
	return true;
}

CIMDateTime UNIX_AccountSettingData::getMaximumPasswordExpiration() const
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

Boolean UNIX_AccountSettingData::getMaximumSuccessiveLoginFailures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_SUCCESSIVE_LOGIN_FAILURES, getMaximumSuccessiveLoginFailures());
	return true;
}

Uint16 UNIX_AccountSettingData::getMaximumSuccessiveLoginFailures() const
{
	return Uint16(0);
}

Boolean UNIX_AccountSettingData::getPasswordHistoryDepth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PASSWORD_HISTORY_DEPTH, getPasswordHistoryDepth());
	return true;
}

Uint16 UNIX_AccountSettingData::getPasswordHistoryDepth() const
{
	return Uint16(0);
}



Boolean UNIX_AccountSettingData::initialize()
{
	return false;
}

Boolean UNIX_AccountSettingData::load(int &pIndex)
{
	return false;
}

Boolean UNIX_AccountSettingData::finalize()
{
	return false;
}

Boolean UNIX_AccountSettingData::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String instanceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_INSTANCE_ID)) instanceIDKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
