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


UNIX_BlockStorageStatisticalData::UNIX_BlockStorageStatisticalData(void)
{
}

UNIX_BlockStorageStatisticalData::~UNIX_BlockStorageStatisticalData(void)
{
}


Boolean UNIX_BlockStorageStatisticalData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BlockStorageStatisticalData::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_BlockStorageStatisticalData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BlockStorageStatisticalData::getCaption() const
{
	return String ("");
}

Boolean UNIX_BlockStorageStatisticalData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BlockStorageStatisticalData::getDescription() const
{
	return String ("");
}

Boolean UNIX_BlockStorageStatisticalData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BlockStorageStatisticalData::getElementName() const
{
	return String("BlockStorageStatisticalData");
}

Boolean UNIX_BlockStorageStatisticalData::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_BlockStorageStatisticalData::getStartStatisticTime() const
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

Boolean UNIX_BlockStorageStatisticalData::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_BlockStorageStatisticalData::getStatisticTime() const
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

Boolean UNIX_BlockStorageStatisticalData::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_BlockStorageStatisticalData::getSampleInterval() const
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

Boolean UNIX_BlockStorageStatisticalData::getElementType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_TYPE, getElementType());
	return true;
}

Uint16 UNIX_BlockStorageStatisticalData::getElementType() const
{
	return Uint16(0);
}

Boolean UNIX_BlockStorageStatisticalData::getTotalIOs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_I_OS, getTotalIOs());
	return true;
}

Uint64 UNIX_BlockStorageStatisticalData::getTotalIOs() const
{
	return Uint64(0);
}

Boolean UNIX_BlockStorageStatisticalData::getKBytesTransferred(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_K_BYTES_TRANSFERRED, getKBytesTransferred());
	return true;
}

Uint64 UNIX_BlockStorageStatisticalData::getKBytesTransferred() const
{
	return Uint64(0);
}

Boolean UNIX_BlockStorageStatisticalData::getKBytesWritten(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_K_BYTES_WRITTEN, getKBytesWritten());
	return true;
}

Uint64 UNIX_BlockStorageStatisticalData::getKBytesWritten() const
{
	return Uint64(0);
}

Boolean UNIX_BlockStorageStatisticalData::getIOTimeCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_I_O_TIME_COUNTER, getIOTimeCounter());
	return true;
}

Uint64 UNIX_BlockStorageStatisticalData::getIOTimeCounter() const
{
	return Uint64(0);
}

Boolean UNIX_BlockStorageStatisticalData::getReadIOs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_READ_I_OS, getReadIOs());
	return true;
}

Uint64 UNIX_BlockStorageStatisticalData::getReadIOs() const
{
	return Uint64(0);
}

Boolean UNIX_BlockStorageStatisticalData::getReadHitIOs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_READ_HIT_I_OS, getReadHitIOs());
	return true;
}

Uint64 UNIX_BlockStorageStatisticalData::getReadHitIOs() const
{
	return Uint64(0);
}

Boolean UNIX_BlockStorageStatisticalData::getReadIOTimeCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_READ_I_O_TIME_COUNTER, getReadIOTimeCounter());
	return true;
}

Uint64 UNIX_BlockStorageStatisticalData::getReadIOTimeCounter() const
{
	return Uint64(0);
}

Boolean UNIX_BlockStorageStatisticalData::getReadHitIOTimeCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_READ_HIT_I_O_TIME_COUNTER, getReadHitIOTimeCounter());
	return true;
}

Uint64 UNIX_BlockStorageStatisticalData::getReadHitIOTimeCounter() const
{
	return Uint64(0);
}

Boolean UNIX_BlockStorageStatisticalData::getKBytesRead(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_K_BYTES_READ, getKBytesRead());
	return true;
}

Uint64 UNIX_BlockStorageStatisticalData::getKBytesRead() const
{
	return Uint64(0);
}

Boolean UNIX_BlockStorageStatisticalData::getWriteIOs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WRITE_I_OS, getWriteIOs());
	return true;
}

Uint64 UNIX_BlockStorageStatisticalData::getWriteIOs() const
{
	return Uint64(0);
}

Boolean UNIX_BlockStorageStatisticalData::getWriteHitIOs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WRITE_HIT_I_OS, getWriteHitIOs());
	return true;
}

Uint64 UNIX_BlockStorageStatisticalData::getWriteHitIOs() const
{
	return Uint64(0);
}

Boolean UNIX_BlockStorageStatisticalData::getWriteIOTimeCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WRITE_I_O_TIME_COUNTER, getWriteIOTimeCounter());
	return true;
}

Uint64 UNIX_BlockStorageStatisticalData::getWriteIOTimeCounter() const
{
	return Uint64(0);
}

Boolean UNIX_BlockStorageStatisticalData::getWriteHitIOTimeCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WRITE_HIT_I_O_TIME_COUNTER, getWriteHitIOTimeCounter());
	return true;
}

Uint64 UNIX_BlockStorageStatisticalData::getWriteHitIOTimeCounter() const
{
	return Uint64(0);
}

Boolean UNIX_BlockStorageStatisticalData::getIdleTimeCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDLE_TIME_COUNTER, getIdleTimeCounter());
	return true;
}

Uint64 UNIX_BlockStorageStatisticalData::getIdleTimeCounter() const
{
	return Uint64(0);
}

Boolean UNIX_BlockStorageStatisticalData::getMaintOp(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAINT_OP, getMaintOp());
	return true;
}

Uint64 UNIX_BlockStorageStatisticalData::getMaintOp() const
{
	return Uint64(0);
}

Boolean UNIX_BlockStorageStatisticalData::getMaintTimeCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAINT_TIME_COUNTER, getMaintTimeCounter());
	return true;
}

Uint64 UNIX_BlockStorageStatisticalData::getMaintTimeCounter() const
{
	return Uint64(0);
}



Boolean UNIX_BlockStorageStatisticalData::initialize()
{
	return false;
}

Boolean UNIX_BlockStorageStatisticalData::load(int &pIndex)
{
	return false;
}

Boolean UNIX_BlockStorageStatisticalData::finalize()
{
	return false;
}

Boolean UNIX_BlockStorageStatisticalData::find(Array<CIMKeyBinding> &kbArray)
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
