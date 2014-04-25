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


UNIX_iSCSILoginStatistics::UNIX_iSCSILoginStatistics(void)
{
}

UNIX_iSCSILoginStatistics::~UNIX_iSCSILoginStatistics(void)
{
}


Boolean UNIX_iSCSILoginStatistics::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_iSCSILoginStatistics::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_iSCSILoginStatistics::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_iSCSILoginStatistics::getCaption() const
{
	return String ("");
}

Boolean UNIX_iSCSILoginStatistics::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_iSCSILoginStatistics::getDescription() const
{
	return String ("");
}

Boolean UNIX_iSCSILoginStatistics::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_iSCSILoginStatistics::getElementName() const
{
	return String("iSCSILoginStatistics");
}

Boolean UNIX_iSCSILoginStatistics::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_iSCSILoginStatistics::getStartStatisticTime() const
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

Boolean UNIX_iSCSILoginStatistics::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_iSCSILoginStatistics::getStatisticTime() const
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

Boolean UNIX_iSCSILoginStatistics::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_iSCSILoginStatistics::getSampleInterval() const
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

Boolean UNIX_iSCSILoginStatistics::getLoginFailures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOGIN_FAILURES, getLoginFailures());
	return true;
}

Uint64 UNIX_iSCSILoginStatistics::getLoginFailures() const
{
	return Uint64(0);
}

Boolean UNIX_iSCSILoginStatistics::getLastLoginFailureTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_LOGIN_FAILURE_TIME, getLastLoginFailureTime());
	return true;
}

CIMDateTime UNIX_iSCSILoginStatistics::getLastLoginFailureTime() const
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

Boolean UNIX_iSCSILoginStatistics::getLastLoginFailureType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_LOGIN_FAILURE_TYPE, getLastLoginFailureType());
	return true;
}

Uint16 UNIX_iSCSILoginStatistics::getLastLoginFailureType() const
{
	return Uint16(0);
}

Boolean UNIX_iSCSILoginStatistics::getOtherLastLoginFailureType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LAST_LOGIN_FAILURE_TYPE, getOtherLastLoginFailureType());
	return true;
}

String UNIX_iSCSILoginStatistics::getOtherLastLoginFailureType() const
{
	return String ("");
}

Boolean UNIX_iSCSILoginStatistics::getLastLoginFailureRemoteNodeName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_LOGIN_FAILURE_REMOTE_NODE_NAME, getLastLoginFailureRemoteNodeName());
	return true;
}

String UNIX_iSCSILoginStatistics::getLastLoginFailureRemoteNodeName() const
{
	return String ("");
}

Boolean UNIX_iSCSILoginStatistics::getLastLoginFailureRemoteAddressType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_LOGIN_FAILURE_REMOTE_ADDRESS_TYPE, getLastLoginFailureRemoteAddressType());
	return true;
}

Uint16 UNIX_iSCSILoginStatistics::getLastLoginFailureRemoteAddressType() const
{
	return Uint16(0);
}

Boolean UNIX_iSCSILoginStatistics::getLastLoginFailureRemoteAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_LOGIN_FAILURE_REMOTE_ADDRESS, getLastLoginFailureRemoteAddress());
	return true;
}

Uint32 UNIX_iSCSILoginStatistics::getLastLoginFailureRemoteAddress() const
{
	return Uint32(0);
}

Boolean UNIX_iSCSILoginStatistics::getSuccessfulLogins(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUCCESSFUL_LOGINS, getSuccessfulLogins());
	return true;
}

Uint64 UNIX_iSCSILoginStatistics::getSuccessfulLogins() const
{
	return Uint64(0);
}

Boolean UNIX_iSCSILoginStatistics::getNegotiationLoginFailures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NEGOTIATION_LOGIN_FAILURES, getNegotiationLoginFailures());
	return true;
}

Uint64 UNIX_iSCSILoginStatistics::getNegotiationLoginFailures() const
{
	return Uint64(0);
}

Boolean UNIX_iSCSILoginStatistics::getAuthenticationLoginFailures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTHENTICATION_LOGIN_FAILURES, getAuthenticationLoginFailures());
	return true;
}

Uint64 UNIX_iSCSILoginStatistics::getAuthenticationLoginFailures() const
{
	return Uint64(0);
}

Boolean UNIX_iSCSILoginStatistics::getAuthorizationLoginFailures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTHORIZATION_LOGIN_FAILURES, getAuthorizationLoginFailures());
	return true;
}

Uint64 UNIX_iSCSILoginStatistics::getAuthorizationLoginFailures() const
{
	return Uint64(0);
}

Boolean UNIX_iSCSILoginStatistics::getLoginRedirects(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOGIN_REDIRECTS, getLoginRedirects());
	return true;
}

Uint64 UNIX_iSCSILoginStatistics::getLoginRedirects() const
{
	return Uint64(0);
}

Boolean UNIX_iSCSILoginStatistics::getOtherLoginFailures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOGIN_FAILURES, getOtherLoginFailures());
	return true;
}

Uint64 UNIX_iSCSILoginStatistics::getOtherLoginFailures() const
{
	return Uint64(0);
}

Boolean UNIX_iSCSILoginStatistics::getNormalLogouts(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NORMAL_LOGOUTS, getNormalLogouts());
	return true;
}

Uint64 UNIX_iSCSILoginStatistics::getNormalLogouts() const
{
	return Uint64(0);
}

Boolean UNIX_iSCSILoginStatistics::getOtherLogouts(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOGOUTS, getOtherLogouts());
	return true;
}

Uint64 UNIX_iSCSILoginStatistics::getOtherLogouts() const
{
	return Uint64(0);
}



Boolean UNIX_iSCSILoginStatistics::initialize()
{
	return false;
}

Boolean UNIX_iSCSILoginStatistics::load(int &pIndex)
{
	return false;
}

Boolean UNIX_iSCSILoginStatistics::finalize()
{
	return false;
}

Boolean UNIX_iSCSILoginStatistics::find(Array<CIMKeyBinding> &kbArray)
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
