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


UNIX_EthernetPortStatistics::UNIX_EthernetPortStatistics(void)
{
}

UNIX_EthernetPortStatistics::~UNIX_EthernetPortStatistics(void)
{
}


Boolean UNIX_EthernetPortStatistics::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_EthernetPortStatistics::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_EthernetPortStatistics::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_EthernetPortStatistics::getCaption() const
{
	return String ("");
}

Boolean UNIX_EthernetPortStatistics::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_EthernetPortStatistics::getDescription() const
{
	return String ("");
}

Boolean UNIX_EthernetPortStatistics::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_EthernetPortStatistics::getElementName() const
{
	return String("EthernetPortStatistics");
}

Boolean UNIX_EthernetPortStatistics::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_EthernetPortStatistics::getStartStatisticTime() const
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

Boolean UNIX_EthernetPortStatistics::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_EthernetPortStatistics::getStatisticTime() const
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

Boolean UNIX_EthernetPortStatistics::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_EthernetPortStatistics::getSampleInterval() const
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

Boolean UNIX_EthernetPortStatistics::getBytesTransmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BYTES_TRANSMITTED, getBytesTransmitted());
	return true;
}

Uint64 UNIX_EthernetPortStatistics::getBytesTransmitted() const
{
	return Uint64(0);
}

Boolean UNIX_EthernetPortStatistics::getBytesReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BYTES_RECEIVED, getBytesReceived());
	return true;
}

Uint64 UNIX_EthernetPortStatistics::getBytesReceived() const
{
	return Uint64(0);
}

Boolean UNIX_EthernetPortStatistics::getPacketsTransmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKETS_TRANSMITTED, getPacketsTransmitted());
	return true;
}

Uint64 UNIX_EthernetPortStatistics::getPacketsTransmitted() const
{
	return Uint64(0);
}

Boolean UNIX_EthernetPortStatistics::getPacketsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKETS_RECEIVED, getPacketsReceived());
	return true;
}

Uint64 UNIX_EthernetPortStatistics::getPacketsReceived() const
{
	return Uint64(0);
}

Boolean UNIX_EthernetPortStatistics::getSymbolErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYMBOL_ERRORS, getSymbolErrors());
	return true;
}

Uint32 UNIX_EthernetPortStatistics::getSymbolErrors() const
{
	return Uint32(0);
}

Boolean UNIX_EthernetPortStatistics::getAlignmentErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALIGNMENT_ERRORS, getAlignmentErrors());
	return true;
}

Uint32 UNIX_EthernetPortStatistics::getAlignmentErrors() const
{
	return Uint32(0);
}

Boolean UNIX_EthernetPortStatistics::getFCSErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_F_CS_ERRORS, getFCSErrors());
	return true;
}

Uint32 UNIX_EthernetPortStatistics::getFCSErrors() const
{
	return Uint32(0);
}

Boolean UNIX_EthernetPortStatistics::getSingleCollisionFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SINGLE_COLLISION_FRAMES, getSingleCollisionFrames());
	return true;
}

Uint32 UNIX_EthernetPortStatistics::getSingleCollisionFrames() const
{
	return Uint32(0);
}

Boolean UNIX_EthernetPortStatistics::getMultipleCollisionFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MULTIPLE_COLLISION_FRAMES, getMultipleCollisionFrames());
	return true;
}

Uint32 UNIX_EthernetPortStatistics::getMultipleCollisionFrames() const
{
	return Uint32(0);
}

Boolean UNIX_EthernetPortStatistics::getSQETestErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_Q_E_TEST_ERRORS, getSQETestErrors());
	return true;
}

Uint32 UNIX_EthernetPortStatistics::getSQETestErrors() const
{
	return Uint32(0);
}

Boolean UNIX_EthernetPortStatistics::getDeferredTransmissions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFERRED_TRANSMISSIONS, getDeferredTransmissions());
	return true;
}

Uint32 UNIX_EthernetPortStatistics::getDeferredTransmissions() const
{
	return Uint32(0);
}

Boolean UNIX_EthernetPortStatistics::getLateCollisions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LATE_COLLISIONS, getLateCollisions());
	return true;
}

Uint32 UNIX_EthernetPortStatistics::getLateCollisions() const
{
	return Uint32(0);
}

Boolean UNIX_EthernetPortStatistics::getExcessiveCollisions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXCESSIVE_COLLISIONS, getExcessiveCollisions());
	return true;
}

Uint32 UNIX_EthernetPortStatistics::getExcessiveCollisions() const
{
	return Uint32(0);
}

Boolean UNIX_EthernetPortStatistics::getInternalMACTransmitErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERNAL_M_A_C_TRANSMIT_ERRORS, getInternalMACTransmitErrors());
	return true;
}

Uint32 UNIX_EthernetPortStatistics::getInternalMACTransmitErrors() const
{
	return Uint32(0);
}

Boolean UNIX_EthernetPortStatistics::getInternalMACReceiveErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERNAL_M_A_C_RECEIVE_ERRORS, getInternalMACReceiveErrors());
	return true;
}

Uint32 UNIX_EthernetPortStatistics::getInternalMACReceiveErrors() const
{
	return Uint32(0);
}

Boolean UNIX_EthernetPortStatistics::getCarrierSenseErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CARRIER_SENSE_ERRORS, getCarrierSenseErrors());
	return true;
}

Uint32 UNIX_EthernetPortStatistics::getCarrierSenseErrors() const
{
	return Uint32(0);
}

Boolean UNIX_EthernetPortStatistics::getFrameTooLongs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FRAME_TOO_LONGS, getFrameTooLongs());
	return true;
}

Uint32 UNIX_EthernetPortStatistics::getFrameTooLongs() const
{
	return Uint32(0);
}



Boolean UNIX_EthernetPortStatistics::initialize()
{
	return false;
}

Boolean UNIX_EthernetPortStatistics::load(int &pIndex)
{
	return false;
}

Boolean UNIX_EthernetPortStatistics::finalize()
{
	return false;
}

Boolean UNIX_EthernetPortStatistics::find(Array<CIMKeyBinding> &kbArray)
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
