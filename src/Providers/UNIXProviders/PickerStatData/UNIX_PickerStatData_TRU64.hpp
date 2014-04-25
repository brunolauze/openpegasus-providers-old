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


UNIX_PickerStatData::UNIX_PickerStatData(void)
{
}

UNIX_PickerStatData::~UNIX_PickerStatData(void)
{
}


Boolean UNIX_PickerStatData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PickerStatData::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_PickerStatData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PickerStatData::getCaption() const
{
	return String ("");
}

Boolean UNIX_PickerStatData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PickerStatData::getDescription() const
{
	return String ("");
}

Boolean UNIX_PickerStatData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PickerStatData::getElementName() const
{
	return String("PickerStatData");
}

Boolean UNIX_PickerStatData::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_PickerStatData::getStartStatisticTime() const
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

Boolean UNIX_PickerStatData::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_PickerStatData::getStatisticTime() const
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

Boolean UNIX_PickerStatData::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_PickerStatData::getSampleInterval() const
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

Boolean UNIX_PickerStatData::getPickSuccesses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PICK_SUCCESSES, getPickSuccesses());
	return true;
}

Uint64 UNIX_PickerStatData::getPickSuccesses() const
{
	return Uint64(0);
}

Boolean UNIX_PickerStatData::getPickFailures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PICK_FAILURES, getPickFailures());
	return true;
}

Uint64 UNIX_PickerStatData::getPickFailures() const
{
	return Uint64(0);
}

Boolean UNIX_PickerStatData::getPickRetries(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PICK_RETRIES, getPickRetries());
	return true;
}

Uint64 UNIX_PickerStatData::getPickRetries() const
{
	return Uint64(0);
}

Boolean UNIX_PickerStatData::getPutSuccesses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PUT_SUCCESSES, getPutSuccesses());
	return true;
}

Uint64 UNIX_PickerStatData::getPutSuccesses() const
{
	return Uint64(0);
}

Boolean UNIX_PickerStatData::getPutFailures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PUT_FAILURES, getPutFailures());
	return true;
}

Uint64 UNIX_PickerStatData::getPutFailures() const
{
	return Uint64(0);
}

Boolean UNIX_PickerStatData::getPutRetries(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PUT_RETRIES, getPutRetries());
	return true;
}

Uint64 UNIX_PickerStatData::getPutRetries() const
{
	return Uint64(0);
}



Boolean UNIX_PickerStatData::initialize()
{
	return false;
}

Boolean UNIX_PickerStatData::load(int &pIndex)
{
	return false;
}

Boolean UNIX_PickerStatData::finalize()
{
	return false;
}

Boolean UNIX_PickerStatData::find(Array<CIMKeyBinding> &kbArray)
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
