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


UNIX_BGPEndpointStatistics::UNIX_BGPEndpointStatistics(void)
{
}

UNIX_BGPEndpointStatistics::~UNIX_BGPEndpointStatistics(void)
{
}


Boolean UNIX_BGPEndpointStatistics::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BGPEndpointStatistics::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_BGPEndpointStatistics::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BGPEndpointStatistics::getCaption() const
{
	return String ("");
}

Boolean UNIX_BGPEndpointStatistics::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BGPEndpointStatistics::getDescription() const
{
	return String ("");
}

Boolean UNIX_BGPEndpointStatistics::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BGPEndpointStatistics::getElementName() const
{
	return String("BGPEndpointStatistics");
}

Boolean UNIX_BGPEndpointStatistics::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_BGPEndpointStatistics::getStartStatisticTime() const
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

Boolean UNIX_BGPEndpointStatistics::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_BGPEndpointStatistics::getStatisticTime() const
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

Boolean UNIX_BGPEndpointStatistics::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_BGPEndpointStatistics::getSampleInterval() const
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

Boolean UNIX_BGPEndpointStatistics::getInUpdates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IN_UPDATES, getInUpdates());
	return true;
}

Uint32 UNIX_BGPEndpointStatistics::getInUpdates() const
{
	return Uint32(0);
}

Boolean UNIX_BGPEndpointStatistics::getOutUpdates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUT_UPDATES, getOutUpdates());
	return true;
}

Uint32 UNIX_BGPEndpointStatistics::getOutUpdates() const
{
	return Uint32(0);
}

Boolean UNIX_BGPEndpointStatistics::getInTotalMessages(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IN_TOTAL_MESSAGES, getInTotalMessages());
	return true;
}

Uint32 UNIX_BGPEndpointStatistics::getInTotalMessages() const
{
	return Uint32(0);
}

Boolean UNIX_BGPEndpointStatistics::getOutTotalMessages(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUT_TOTAL_MESSAGES, getOutTotalMessages());
	return true;
}

Uint32 UNIX_BGPEndpointStatistics::getOutTotalMessages() const
{
	return Uint32(0);
}

Boolean UNIX_BGPEndpointStatistics::getLastError(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR, getLastError());
	return true;
}

Array<Uint8> UNIX_BGPEndpointStatistics::getLastError() const
{
	Array<Uint8> as;
	

	return as;

}

Boolean UNIX_BGPEndpointStatistics::getFsmEstablishedTransitions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FSM_ESTABLISHED_TRANSITIONS, getFsmEstablishedTransitions());
	return true;
}

Uint32 UNIX_BGPEndpointStatistics::getFsmEstablishedTransitions() const
{
	return Uint32(0);
}

Boolean UNIX_BGPEndpointStatistics::getFsmEstablishedTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FSM_ESTABLISHED_TIME, getFsmEstablishedTime());
	return true;
}

Uint32 UNIX_BGPEndpointStatistics::getFsmEstablishedTime() const
{
	return Uint32(0);
}

Boolean UNIX_BGPEndpointStatistics::getInUpdateElapsedTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IN_UPDATE_ELAPSED_TIME, getInUpdateElapsedTime());
	return true;
}

Uint32 UNIX_BGPEndpointStatistics::getInUpdateElapsedTime() const
{
	return Uint32(0);
}



Boolean UNIX_BGPEndpointStatistics::initialize()
{
	return false;
}

Boolean UNIX_BGPEndpointStatistics::load(int &pIndex)
{
	return false;
}

Boolean UNIX_BGPEndpointStatistics::finalize()
{
	return false;
}

Boolean UNIX_BGPEndpointStatistics::find(Array<CIMKeyBinding> &kbArray)
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
