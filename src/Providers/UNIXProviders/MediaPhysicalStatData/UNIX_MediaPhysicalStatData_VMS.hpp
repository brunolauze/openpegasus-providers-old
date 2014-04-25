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


UNIX_MediaPhysicalStatData::UNIX_MediaPhysicalStatData(void)
{
}

UNIX_MediaPhysicalStatData::~UNIX_MediaPhysicalStatData(void)
{
}


Boolean UNIX_MediaPhysicalStatData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_MediaPhysicalStatData::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_MediaPhysicalStatData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_MediaPhysicalStatData::getCaption() const
{
	return String ("");
}

Boolean UNIX_MediaPhysicalStatData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_MediaPhysicalStatData::getDescription() const
{
	return String ("");
}

Boolean UNIX_MediaPhysicalStatData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_MediaPhysicalStatData::getElementName() const
{
	return String("MediaPhysicalStatData");
}

Boolean UNIX_MediaPhysicalStatData::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_MediaPhysicalStatData::getStartStatisticTime() const
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

Boolean UNIX_MediaPhysicalStatData::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_MediaPhysicalStatData::getStatisticTime() const
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

Boolean UNIX_MediaPhysicalStatData::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_MediaPhysicalStatData::getSampleInterval() const
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

Boolean UNIX_MediaPhysicalStatData::getScanSuccesses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCAN_SUCCESSES, getScanSuccesses());
	return true;
}

Uint64 UNIX_MediaPhysicalStatData::getScanSuccesses() const
{
	return Uint64(0);
}

Boolean UNIX_MediaPhysicalStatData::getScanFailures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCAN_FAILURES, getScanFailures());
	return true;
}

Uint64 UNIX_MediaPhysicalStatData::getScanFailures() const
{
	return Uint64(0);
}

Boolean UNIX_MediaPhysicalStatData::getScanRetries(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCAN_RETRIES, getScanRetries());
	return true;
}

Uint64 UNIX_MediaPhysicalStatData::getScanRetries() const
{
	return Uint64(0);
}

Boolean UNIX_MediaPhysicalStatData::getPickSuccesses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PICK_SUCCESSES, getPickSuccesses());
	return true;
}

Uint64 UNIX_MediaPhysicalStatData::getPickSuccesses() const
{
	return Uint64(0);
}

Boolean UNIX_MediaPhysicalStatData::getPickFailures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PICK_FAILURES, getPickFailures());
	return true;
}

Uint64 UNIX_MediaPhysicalStatData::getPickFailures() const
{
	return Uint64(0);
}

Boolean UNIX_MediaPhysicalStatData::getPickRetries(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PICK_RETRIES, getPickRetries());
	return true;
}

Uint64 UNIX_MediaPhysicalStatData::getPickRetries() const
{
	return Uint64(0);
}

Boolean UNIX_MediaPhysicalStatData::getPutSuccesses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PUT_SUCCESSES, getPutSuccesses());
	return true;
}

Uint64 UNIX_MediaPhysicalStatData::getPutSuccesses() const
{
	return Uint64(0);
}

Boolean UNIX_MediaPhysicalStatData::getPutFailures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PUT_FAILURES, getPutFailures());
	return true;
}

Uint64 UNIX_MediaPhysicalStatData::getPutFailures() const
{
	return Uint64(0);
}

Boolean UNIX_MediaPhysicalStatData::getPutRetries(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PUT_RETRIES, getPutRetries());
	return true;
}

Uint64 UNIX_MediaPhysicalStatData::getPutRetries() const
{
	return Uint64(0);
}



Boolean UNIX_MediaPhysicalStatData::initialize()
{
	return false;
}

Boolean UNIX_MediaPhysicalStatData::load(int &pIndex)
{
	return false;
}

Boolean UNIX_MediaPhysicalStatData::finalize()
{
	return false;
}

Boolean UNIX_MediaPhysicalStatData::find(Array<CIMKeyBinding> &kbArray)
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
