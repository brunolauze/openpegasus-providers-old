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


UNIX_FCPortRateStatistics::UNIX_FCPortRateStatistics(void)
{
}

UNIX_FCPortRateStatistics::~UNIX_FCPortRateStatistics(void)
{
}


Boolean UNIX_FCPortRateStatistics::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FCPortRateStatistics::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_FCPortRateStatistics::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FCPortRateStatistics::getCaption() const
{
	return String ("");
}

Boolean UNIX_FCPortRateStatistics::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FCPortRateStatistics::getDescription() const
{
	return String ("");
}

Boolean UNIX_FCPortRateStatistics::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FCPortRateStatistics::getElementName() const
{
	return String("FCPortRateStatistics");
}

Boolean UNIX_FCPortRateStatistics::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_FCPortRateStatistics::getStartStatisticTime() const
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

Boolean UNIX_FCPortRateStatistics::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_FCPortRateStatistics::getStatisticTime() const
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

Boolean UNIX_FCPortRateStatistics::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_FCPortRateStatistics::getSampleInterval() const
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

Boolean UNIX_FCPortRateStatistics::getTxFrameRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TX_FRAME_RATE, getTxFrameRate());
	return true;
}

Uint64 UNIX_FCPortRateStatistics::getTxFrameRate() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortRateStatistics::getRxFrameRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RX_FRAME_RATE, getRxFrameRate());
	return true;
}

Uint64 UNIX_FCPortRateStatistics::getRxFrameRate() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortRateStatistics::getMaxTxFrameRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_TX_FRAME_RATE, getMaxTxFrameRate());
	return true;
}

Uint64 UNIX_FCPortRateStatistics::getMaxTxFrameRate() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortRateStatistics::getMaxRxFrameRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_RX_FRAME_RATE, getMaxRxFrameRate());
	return true;
}

Uint64 UNIX_FCPortRateStatistics::getMaxRxFrameRate() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortRateStatistics::getTxRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TX_RATE, getTxRate());
	return true;
}

Uint64 UNIX_FCPortRateStatistics::getTxRate() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortRateStatistics::getRxRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RX_RATE, getRxRate());
	return true;
}

Uint64 UNIX_FCPortRateStatistics::getRxRate() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortRateStatistics::getPeakTxRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PEAK_TX_RATE, getPeakTxRate());
	return true;
}

Uint64 UNIX_FCPortRateStatistics::getPeakTxRate() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortRateStatistics::getPeakRxRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PEAK_RX_RATE, getPeakRxRate());
	return true;
}

Uint64 UNIX_FCPortRateStatistics::getPeakRxRate() const
{
	return Uint64(0);
}



Boolean UNIX_FCPortRateStatistics::initialize()
{
	return false;
}

Boolean UNIX_FCPortRateStatistics::load(int &pIndex)
{
	return false;
}

Boolean UNIX_FCPortRateStatistics::finalize()
{
	return false;
}

Boolean UNIX_FCPortRateStatistics::find(Array<CIMKeyBinding> &kbArray)
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
