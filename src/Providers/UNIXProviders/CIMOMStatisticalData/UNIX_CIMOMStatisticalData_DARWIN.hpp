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


UNIX_CIMOMStatisticalData::UNIX_CIMOMStatisticalData(void)
{
}

UNIX_CIMOMStatisticalData::~UNIX_CIMOMStatisticalData(void)
{
}


Boolean UNIX_CIMOMStatisticalData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_CIMOMStatisticalData::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_CIMOMStatisticalData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_CIMOMStatisticalData::getCaption() const
{
	return String ("");
}

Boolean UNIX_CIMOMStatisticalData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_CIMOMStatisticalData::getDescription() const
{
	return String ("");
}

Boolean UNIX_CIMOMStatisticalData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_CIMOMStatisticalData::getElementName() const
{
	return String("CIMOMStatisticalData");
}

Boolean UNIX_CIMOMStatisticalData::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_CIMOMStatisticalData::getStartStatisticTime() const
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

Boolean UNIX_CIMOMStatisticalData::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_CIMOMStatisticalData::getStatisticTime() const
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

Boolean UNIX_CIMOMStatisticalData::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_CIMOMStatisticalData::getSampleInterval() const
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

Boolean UNIX_CIMOMStatisticalData::getOperationType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATION_TYPE, getOperationType());
	return true;
}

Uint16 UNIX_CIMOMStatisticalData::getOperationType() const
{
	return Uint16(0);
}

Boolean UNIX_CIMOMStatisticalData::getOtherOperationType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_OPERATION_TYPE, getOtherOperationType());
	return true;
}

String UNIX_CIMOMStatisticalData::getOtherOperationType() const
{
	return String ("");
}

Boolean UNIX_CIMOMStatisticalData::getNumberOfOperations(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_OPERATIONS, getNumberOfOperations());
	return true;
}

Uint64 UNIX_CIMOMStatisticalData::getNumberOfOperations() const
{
	return Uint64(0);
}

Boolean UNIX_CIMOMStatisticalData::getCimomElapsedTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CIMOM_ELAPSED_TIME, getCimomElapsedTime());
	return true;
}

CIMDateTime UNIX_CIMOMStatisticalData::getCimomElapsedTime() const
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

Boolean UNIX_CIMOMStatisticalData::getProviderElapsedTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROVIDER_ELAPSED_TIME, getProviderElapsedTime());
	return true;
}

CIMDateTime UNIX_CIMOMStatisticalData::getProviderElapsedTime() const
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

Boolean UNIX_CIMOMStatisticalData::getRequestSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUEST_SIZE, getRequestSize());
	return true;
}

Uint64 UNIX_CIMOMStatisticalData::getRequestSize() const
{
	return Uint64(0);
}

Boolean UNIX_CIMOMStatisticalData::getResponseSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESPONSE_SIZE, getResponseSize());
	return true;
}

Uint64 UNIX_CIMOMStatisticalData::getResponseSize() const
{
	return Uint64(0);
}



Boolean UNIX_CIMOMStatisticalData::initialize()
{
	return false;
}

Boolean UNIX_CIMOMStatisticalData::load(int &pIndex)
{
	return false;
}

Boolean UNIX_CIMOMStatisticalData::finalize()
{
	return false;
}

Boolean UNIX_CIMOMStatisticalData::find(Array<CIMKeyBinding> &kbArray)
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
