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


UNIX_DatabaseServiceStatistics::UNIX_DatabaseServiceStatistics(void)
{
}

UNIX_DatabaseServiceStatistics::~UNIX_DatabaseServiceStatistics(void)
{
}


Boolean UNIX_DatabaseServiceStatistics::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DatabaseServiceStatistics::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_DatabaseServiceStatistics::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DatabaseServiceStatistics::getCaption() const
{
	return String ("");
}

Boolean UNIX_DatabaseServiceStatistics::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DatabaseServiceStatistics::getDescription() const
{
	return String ("");
}

Boolean UNIX_DatabaseServiceStatistics::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DatabaseServiceStatistics::getElementName() const
{
	return String("DatabaseServiceStatistics");
}

Boolean UNIX_DatabaseServiceStatistics::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_DatabaseServiceStatistics::getStartStatisticTime() const
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

Boolean UNIX_DatabaseServiceStatistics::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_DatabaseServiceStatistics::getStatisticTime() const
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

Boolean UNIX_DatabaseServiceStatistics::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_DatabaseServiceStatistics::getSampleInterval() const
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

Boolean UNIX_DatabaseServiceStatistics::getLastActivity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ACTIVITY, getLastActivity());
	return true;
}

CIMDateTime UNIX_DatabaseServiceStatistics::getLastActivity() const
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

Boolean UNIX_DatabaseServiceStatistics::getActiveConnections(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTIVE_CONNECTIONS, getActiveConnections());
	return true;
}

Uint64 UNIX_DatabaseServiceStatistics::getActiveConnections() const
{
	return Uint64(0);
}

Boolean UNIX_DatabaseServiceStatistics::getCumulativeConnections(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CUMULATIVE_CONNECTIONS, getCumulativeConnections());
	return true;
}

Uint64 UNIX_DatabaseServiceStatistics::getCumulativeConnections() const
{
	return Uint64(0);
}

Boolean UNIX_DatabaseServiceStatistics::getRejectedConnections(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REJECTED_CONNECTIONS, getRejectedConnections());
	return true;
}

Uint64 UNIX_DatabaseServiceStatistics::getRejectedConnections() const
{
	return Uint64(0);
}

Boolean UNIX_DatabaseServiceStatistics::getCompletedTransactions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPLETED_TRANSACTIONS, getCompletedTransactions());
	return true;
}

Uint64 UNIX_DatabaseServiceStatistics::getCompletedTransactions() const
{
	return Uint64(0);
}

Boolean UNIX_DatabaseServiceStatistics::getDiskReads(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DISK_READS, getDiskReads());
	return true;
}

Uint64 UNIX_DatabaseServiceStatistics::getDiskReads() const
{
	return Uint64(0);
}

Boolean UNIX_DatabaseServiceStatistics::getDiskWrites(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DISK_WRITES, getDiskWrites());
	return true;
}

Uint64 UNIX_DatabaseServiceStatistics::getDiskWrites() const
{
	return Uint64(0);
}

Boolean UNIX_DatabaseServiceStatistics::getLogicalReads(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOGICAL_READS, getLogicalReads());
	return true;
}

Uint64 UNIX_DatabaseServiceStatistics::getLogicalReads() const
{
	return Uint64(0);
}

Boolean UNIX_DatabaseServiceStatistics::getLogicalWrites(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOGICAL_WRITES, getLogicalWrites());
	return true;
}

Uint64 UNIX_DatabaseServiceStatistics::getLogicalWrites() const
{
	return Uint64(0);
}

Boolean UNIX_DatabaseServiceStatistics::getPageReads(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PAGE_READS, getPageReads());
	return true;
}

Uint64 UNIX_DatabaseServiceStatistics::getPageReads() const
{
	return Uint64(0);
}

Boolean UNIX_DatabaseServiceStatistics::getPageWrites(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PAGE_WRITES, getPageWrites());
	return true;
}

Uint64 UNIX_DatabaseServiceStatistics::getPageWrites() const
{
	return Uint64(0);
}

Boolean UNIX_DatabaseServiceStatistics::getDiskSpaceUnavailable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DISK_SPACE_UNAVAILABLE, getDiskSpaceUnavailable());
	return true;
}

Uint64 UNIX_DatabaseServiceStatistics::getDiskSpaceUnavailable() const
{
	return Uint64(0);
}

Boolean UNIX_DatabaseServiceStatistics::getRequestsHandled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTS_HANDLED, getRequestsHandled());
	return true;
}

Uint64 UNIX_DatabaseServiceStatistics::getRequestsHandled() const
{
	return Uint64(0);
}

Boolean UNIX_DatabaseServiceStatistics::getRequestsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTS_RECEIVED, getRequestsReceived());
	return true;
}

Uint64 UNIX_DatabaseServiceStatistics::getRequestsReceived() const
{
	return Uint64(0);
}

Boolean UNIX_DatabaseServiceStatistics::getRequestsSent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTS_SENT, getRequestsSent());
	return true;
}

Uint64 UNIX_DatabaseServiceStatistics::getRequestsSent() const
{
	return Uint64(0);
}

Boolean UNIX_DatabaseServiceStatistics::getHighwaterConnections(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HIGHWATER_CONNECTIONS, getHighwaterConnections());
	return true;
}

Uint64 UNIX_DatabaseServiceStatistics::getHighwaterConnections() const
{
	return Uint64(0);
}



Boolean UNIX_DatabaseServiceStatistics::initialize()
{
	return false;
}

Boolean UNIX_DatabaseServiceStatistics::load(int &pIndex)
{
	return false;
}

Boolean UNIX_DatabaseServiceStatistics::finalize()
{
	return false;
}

Boolean UNIX_DatabaseServiceStatistics::find(Array<CIMKeyBinding> &kbArray)
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
