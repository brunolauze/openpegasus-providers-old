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


UNIX_DeviceErrorData::UNIX_DeviceErrorData(void)
{
}

UNIX_DeviceErrorData::~UNIX_DeviceErrorData(void)
{
}


Boolean UNIX_DeviceErrorData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DeviceErrorData::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_DeviceErrorData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DeviceErrorData::getCaption() const
{
	return String ("");
}

Boolean UNIX_DeviceErrorData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DeviceErrorData::getDescription() const
{
	return String ("");
}

Boolean UNIX_DeviceErrorData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DeviceErrorData::getElementName() const
{
	return String("DeviceErrorData");
}

Boolean UNIX_DeviceErrorData::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_DeviceErrorData::getStartStatisticTime() const
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

Boolean UNIX_DeviceErrorData::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_DeviceErrorData::getStatisticTime() const
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

Boolean UNIX_DeviceErrorData::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_DeviceErrorData::getSampleInterval() const
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

Boolean UNIX_DeviceErrorData::getIndeterminateErrorCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INDETERMINATE_ERROR_COUNT, getIndeterminateErrorCount());
	return true;
}

Uint64 UNIX_DeviceErrorData::getIndeterminateErrorCount() const
{
	return Uint64(0);
}

Boolean UNIX_DeviceErrorData::getCriticalErrorCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CRITICAL_ERROR_COUNT, getCriticalErrorCount());
	return true;
}

Uint64 UNIX_DeviceErrorData::getCriticalErrorCount() const
{
	return Uint64(0);
}

Boolean UNIX_DeviceErrorData::getMajorErrorCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAJOR_ERROR_COUNT, getMajorErrorCount());
	return true;
}

Uint64 UNIX_DeviceErrorData::getMajorErrorCount() const
{
	return Uint64(0);
}

Boolean UNIX_DeviceErrorData::getMinorErrorCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MINOR_ERROR_COUNT, getMinorErrorCount());
	return true;
}

Uint64 UNIX_DeviceErrorData::getMinorErrorCount() const
{
	return Uint64(0);
}

Boolean UNIX_DeviceErrorData::getWarningCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WARNING_COUNT, getWarningCount());
	return true;
}

Uint64 UNIX_DeviceErrorData::getWarningCount() const
{
	return Uint64(0);
}

Boolean UNIX_DeviceErrorData::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

String UNIX_DeviceErrorData::getLastErrorCode() const
{
	return String ("");
}

Boolean UNIX_DeviceErrorData::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_DeviceErrorData::getErrorDescription() const
{
	return String ("");
}



Boolean UNIX_DeviceErrorData::initialize()
{
	return false;
}

Boolean UNIX_DeviceErrorData::load(int &pIndex)
{
	return false;
}

Boolean UNIX_DeviceErrorData::finalize()
{
	return false;
}

Boolean UNIX_DeviceErrorData::find(Array<CIMKeyBinding> &kbArray)
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
