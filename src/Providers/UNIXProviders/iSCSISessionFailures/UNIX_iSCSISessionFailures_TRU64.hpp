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


UNIX_iSCSISessionFailures::UNIX_iSCSISessionFailures(void)
{
}

UNIX_iSCSISessionFailures::~UNIX_iSCSISessionFailures(void)
{
}


Boolean UNIX_iSCSISessionFailures::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_iSCSISessionFailures::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_iSCSISessionFailures::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_iSCSISessionFailures::getCaption() const
{
	return String ("");
}

Boolean UNIX_iSCSISessionFailures::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_iSCSISessionFailures::getDescription() const
{
	return String ("");
}

Boolean UNIX_iSCSISessionFailures::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_iSCSISessionFailures::getElementName() const
{
	return String("iSCSISessionFailures");
}

Boolean UNIX_iSCSISessionFailures::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_iSCSISessionFailures::getStartStatisticTime() const
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

Boolean UNIX_iSCSISessionFailures::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_iSCSISessionFailures::getStatisticTime() const
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

Boolean UNIX_iSCSISessionFailures::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_iSCSISessionFailures::getSampleInterval() const
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

Boolean UNIX_iSCSISessionFailures::getSessionFailures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SESSION_FAILURES, getSessionFailures());
	return true;
}

Uint64 UNIX_iSCSISessionFailures::getSessionFailures() const
{
	return Uint64(0);
}

Boolean UNIX_iSCSISessionFailures::getLastSessionFailureType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_SESSION_FAILURE_TYPE, getLastSessionFailureType());
	return true;
}

Uint16 UNIX_iSCSISessionFailures::getLastSessionFailureType() const
{
	return Uint16(0);
}

Boolean UNIX_iSCSISessionFailures::getOtherLastSessionFailureType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LAST_SESSION_FAILURE_TYPE, getOtherLastSessionFailureType());
	return true;
}

String UNIX_iSCSISessionFailures::getOtherLastSessionFailureType() const
{
	return String ("");
}

Boolean UNIX_iSCSISessionFailures::getLastSessionFailureRemoteNodeName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_SESSION_FAILURE_REMOTE_NODE_NAME, getLastSessionFailureRemoteNodeName());
	return true;
}

String UNIX_iSCSISessionFailures::getLastSessionFailureRemoteNodeName() const
{
	return String ("");
}

Boolean UNIX_iSCSISessionFailures::getSessionDigestFailures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SESSION_DIGEST_FAILURES, getSessionDigestFailures());
	return true;
}

Uint64 UNIX_iSCSISessionFailures::getSessionDigestFailures() const
{
	return Uint64(0);
}

Boolean UNIX_iSCSISessionFailures::getSessionConnectionTimeoutFailures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SESSION_CONNECTION_TIMEOUT_FAILURES, getSessionConnectionTimeoutFailures());
	return true;
}

Uint64 UNIX_iSCSISessionFailures::getSessionConnectionTimeoutFailures() const
{
	return Uint64(0);
}

Boolean UNIX_iSCSISessionFailures::getSessionFormatErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SESSION_FORMAT_ERRORS, getSessionFormatErrors());
	return true;
}

Uint64 UNIX_iSCSISessionFailures::getSessionFormatErrors() const
{
	return Uint64(0);
}



Boolean UNIX_iSCSISessionFailures::initialize()
{
	return false;
}

Boolean UNIX_iSCSISessionFailures::load(int &pIndex)
{
	return false;
}

Boolean UNIX_iSCSISessionFailures::finalize()
{
	return false;
}

Boolean UNIX_iSCSISessionFailures::find(Array<CIMKeyBinding> &kbArray)
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
