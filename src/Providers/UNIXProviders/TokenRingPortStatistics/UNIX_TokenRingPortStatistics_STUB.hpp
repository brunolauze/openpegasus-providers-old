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


UNIX_TokenRingPortStatistics::UNIX_TokenRingPortStatistics(void)
{
}

UNIX_TokenRingPortStatistics::~UNIX_TokenRingPortStatistics(void)
{
}


Boolean UNIX_TokenRingPortStatistics::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_TokenRingPortStatistics::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_TokenRingPortStatistics::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_TokenRingPortStatistics::getCaption() const
{
	return String ("");
}

Boolean UNIX_TokenRingPortStatistics::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_TokenRingPortStatistics::getDescription() const
{
	return String ("");
}

Boolean UNIX_TokenRingPortStatistics::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_TokenRingPortStatistics::getElementName() const
{
	return String("TokenRingPortStatistics");
}

Boolean UNIX_TokenRingPortStatistics::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_TokenRingPortStatistics::getStartStatisticTime() const
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

Boolean UNIX_TokenRingPortStatistics::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_TokenRingPortStatistics::getStatisticTime() const
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

Boolean UNIX_TokenRingPortStatistics::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_TokenRingPortStatistics::getSampleInterval() const
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

Boolean UNIX_TokenRingPortStatistics::getBytesTransmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BYTES_TRANSMITTED, getBytesTransmitted());
	return true;
}

Uint64 UNIX_TokenRingPortStatistics::getBytesTransmitted() const
{
	return Uint64(0);
}

Boolean UNIX_TokenRingPortStatistics::getBytesReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BYTES_RECEIVED, getBytesReceived());
	return true;
}

Uint64 UNIX_TokenRingPortStatistics::getBytesReceived() const
{
	return Uint64(0);
}

Boolean UNIX_TokenRingPortStatistics::getPacketsTransmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKETS_TRANSMITTED, getPacketsTransmitted());
	return true;
}

Uint64 UNIX_TokenRingPortStatistics::getPacketsTransmitted() const
{
	return Uint64(0);
}

Boolean UNIX_TokenRingPortStatistics::getPacketsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKETS_RECEIVED, getPacketsReceived());
	return true;
}

Uint64 UNIX_TokenRingPortStatistics::getPacketsReceived() const
{
	return Uint64(0);
}

Boolean UNIX_TokenRingPortStatistics::getBurstErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BURST_ERRORS, getBurstErrors());
	return true;
}

Uint32 UNIX_TokenRingPortStatistics::getBurstErrors() const
{
	return Uint32(0);
}

Boolean UNIX_TokenRingPortStatistics::getACErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_A_C_ERRORS, getACErrors());
	return true;
}

Uint32 UNIX_TokenRingPortStatistics::getACErrors() const
{
	return Uint32(0);
}

Boolean UNIX_TokenRingPortStatistics::getAbortTransErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ABORT_TRANS_ERRORS, getAbortTransErrors());
	return true;
}

Uint32 UNIX_TokenRingPortStatistics::getAbortTransErrors() const
{
	return Uint32(0);
}

Boolean UNIX_TokenRingPortStatistics::getInternalErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERNAL_ERRORS, getInternalErrors());
	return true;
}

Uint32 UNIX_TokenRingPortStatistics::getInternalErrors() const
{
	return Uint32(0);
}

Boolean UNIX_TokenRingPortStatistics::getLostFrameErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOST_FRAME_ERRORS, getLostFrameErrors());
	return true;
}

Uint32 UNIX_TokenRingPortStatistics::getLostFrameErrors() const
{
	return Uint32(0);
}

Boolean UNIX_TokenRingPortStatistics::getReceiveCongestions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECEIVE_CONGESTIONS, getReceiveCongestions());
	return true;
}

Uint32 UNIX_TokenRingPortStatistics::getReceiveCongestions() const
{
	return Uint32(0);
}

Boolean UNIX_TokenRingPortStatistics::getFrameCopiedErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FRAME_COPIED_ERRORS, getFrameCopiedErrors());
	return true;
}

Uint32 UNIX_TokenRingPortStatistics::getFrameCopiedErrors() const
{
	return Uint32(0);
}

Boolean UNIX_TokenRingPortStatistics::getTokenErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOKEN_ERRORS, getTokenErrors());
	return true;
}

Uint32 UNIX_TokenRingPortStatistics::getTokenErrors() const
{
	return Uint32(0);
}

Boolean UNIX_TokenRingPortStatistics::getSoftErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOFT_ERRORS, getSoftErrors());
	return true;
}

Uint32 UNIX_TokenRingPortStatistics::getSoftErrors() const
{
	return Uint32(0);
}

Boolean UNIX_TokenRingPortStatistics::getHardErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HARD_ERRORS, getHardErrors());
	return true;
}

Uint32 UNIX_TokenRingPortStatistics::getHardErrors() const
{
	return Uint32(0);
}

Boolean UNIX_TokenRingPortStatistics::getSignalLossCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIGNAL_LOSS_COUNT, getSignalLossCount());
	return true;
}

Uint32 UNIX_TokenRingPortStatistics::getSignalLossCount() const
{
	return Uint32(0);
}

Boolean UNIX_TokenRingPortStatistics::getTransmittedBeacons(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSMITTED_BEACONS, getTransmittedBeacons());
	return true;
}

Uint32 UNIX_TokenRingPortStatistics::getTransmittedBeacons() const
{
	return Uint32(0);
}

Boolean UNIX_TokenRingPortStatistics::getRecoverys(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECOVERYS, getRecoverys());
	return true;
}

Uint32 UNIX_TokenRingPortStatistics::getRecoverys() const
{
	return Uint32(0);
}

Boolean UNIX_TokenRingPortStatistics::getLobeWires(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOBE_WIRES, getLobeWires());
	return true;
}

Uint32 UNIX_TokenRingPortStatistics::getLobeWires() const
{
	return Uint32(0);
}

Boolean UNIX_TokenRingPortStatistics::getRemoves(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOVES, getRemoves());
	return true;
}

Uint32 UNIX_TokenRingPortStatistics::getRemoves() const
{
	return Uint32(0);
}

Boolean UNIX_TokenRingPortStatistics::getSingles(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SINGLES, getSingles());
	return true;
}

Uint32 UNIX_TokenRingPortStatistics::getSingles() const
{
	return Uint32(0);
}

Boolean UNIX_TokenRingPortStatistics::getFrequencyErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FREQUENCY_ERRORS, getFrequencyErrors());
	return true;
}

Uint32 UNIX_TokenRingPortStatistics::getFrequencyErrors() const
{
	return Uint32(0);
}



Boolean UNIX_TokenRingPortStatistics::initialize()
{
	return false;
}

Boolean UNIX_TokenRingPortStatistics::load(int &pIndex)
{
	return false;
}

Boolean UNIX_TokenRingPortStatistics::finalize()
{
	return false;
}

Boolean UNIX_TokenRingPortStatistics::find(Array<CIMKeyBinding> &kbArray)
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
