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


UNIX_LLDPEthernetPortStatistics::UNIX_LLDPEthernetPortStatistics(void)
{
}

UNIX_LLDPEthernetPortStatistics::~UNIX_LLDPEthernetPortStatistics(void)
{
}


Boolean UNIX_LLDPEthernetPortStatistics::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_LLDPEthernetPortStatistics::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_LLDPEthernetPortStatistics::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_LLDPEthernetPortStatistics::getCaption() const
{
	return String ("");
}

Boolean UNIX_LLDPEthernetPortStatistics::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_LLDPEthernetPortStatistics::getDescription() const
{
	return String ("");
}

Boolean UNIX_LLDPEthernetPortStatistics::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_LLDPEthernetPortStatistics::getElementName() const
{
	return String("LLDPEthernetPortStatistics");
}

Boolean UNIX_LLDPEthernetPortStatistics::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_LLDPEthernetPortStatistics::getStartStatisticTime() const
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

Boolean UNIX_LLDPEthernetPortStatistics::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_LLDPEthernetPortStatistics::getStatisticTime() const
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

Boolean UNIX_LLDPEthernetPortStatistics::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_LLDPEthernetPortStatistics::getSampleInterval() const
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

Boolean UNIX_LLDPEthernetPortStatistics::getBytesTransmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BYTES_TRANSMITTED, getBytesTransmitted());
	return true;
}

Uint64 UNIX_LLDPEthernetPortStatistics::getBytesTransmitted() const
{
	return Uint64(0);
}

Boolean UNIX_LLDPEthernetPortStatistics::getBytesReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BYTES_RECEIVED, getBytesReceived());
	return true;
}

Uint64 UNIX_LLDPEthernetPortStatistics::getBytesReceived() const
{
	return Uint64(0);
}

Boolean UNIX_LLDPEthernetPortStatistics::getPacketsTransmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKETS_TRANSMITTED, getPacketsTransmitted());
	return true;
}

Uint64 UNIX_LLDPEthernetPortStatistics::getPacketsTransmitted() const
{
	return Uint64(0);
}

Boolean UNIX_LLDPEthernetPortStatistics::getPacketsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKETS_RECEIVED, getPacketsReceived());
	return true;
}

Uint64 UNIX_LLDPEthernetPortStatistics::getPacketsReceived() const
{
	return Uint64(0);
}

Boolean UNIX_LLDPEthernetPortStatistics::getSymbolErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYMBOL_ERRORS, getSymbolErrors());
	return true;
}

Uint32 UNIX_LLDPEthernetPortStatistics::getSymbolErrors() const
{
	return Uint32(0);
}

Boolean UNIX_LLDPEthernetPortStatistics::getAlignmentErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALIGNMENT_ERRORS, getAlignmentErrors());
	return true;
}

Uint32 UNIX_LLDPEthernetPortStatistics::getAlignmentErrors() const
{
	return Uint32(0);
}

Boolean UNIX_LLDPEthernetPortStatistics::getFCSErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_F_CS_ERRORS, getFCSErrors());
	return true;
}

Uint32 UNIX_LLDPEthernetPortStatistics::getFCSErrors() const
{
	return Uint32(0);
}

Boolean UNIX_LLDPEthernetPortStatistics::getSingleCollisionFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SINGLE_COLLISION_FRAMES, getSingleCollisionFrames());
	return true;
}

Uint32 UNIX_LLDPEthernetPortStatistics::getSingleCollisionFrames() const
{
	return Uint32(0);
}

Boolean UNIX_LLDPEthernetPortStatistics::getMultipleCollisionFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MULTIPLE_COLLISION_FRAMES, getMultipleCollisionFrames());
	return true;
}

Uint32 UNIX_LLDPEthernetPortStatistics::getMultipleCollisionFrames() const
{
	return Uint32(0);
}

Boolean UNIX_LLDPEthernetPortStatistics::getSQETestErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_Q_E_TEST_ERRORS, getSQETestErrors());
	return true;
}

Uint32 UNIX_LLDPEthernetPortStatistics::getSQETestErrors() const
{
	return Uint32(0);
}

Boolean UNIX_LLDPEthernetPortStatistics::getDeferredTransmissions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFERRED_TRANSMISSIONS, getDeferredTransmissions());
	return true;
}

Uint32 UNIX_LLDPEthernetPortStatistics::getDeferredTransmissions() const
{
	return Uint32(0);
}

Boolean UNIX_LLDPEthernetPortStatistics::getLateCollisions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LATE_COLLISIONS, getLateCollisions());
	return true;
}

Uint32 UNIX_LLDPEthernetPortStatistics::getLateCollisions() const
{
	return Uint32(0);
}

Boolean UNIX_LLDPEthernetPortStatistics::getExcessiveCollisions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXCESSIVE_COLLISIONS, getExcessiveCollisions());
	return true;
}

Uint32 UNIX_LLDPEthernetPortStatistics::getExcessiveCollisions() const
{
	return Uint32(0);
}

Boolean UNIX_LLDPEthernetPortStatistics::getInternalMACTransmitErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERNAL_M_A_C_TRANSMIT_ERRORS, getInternalMACTransmitErrors());
	return true;
}

Uint32 UNIX_LLDPEthernetPortStatistics::getInternalMACTransmitErrors() const
{
	return Uint32(0);
}

Boolean UNIX_LLDPEthernetPortStatistics::getInternalMACReceiveErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERNAL_M_A_C_RECEIVE_ERRORS, getInternalMACReceiveErrors());
	return true;
}

Uint32 UNIX_LLDPEthernetPortStatistics::getInternalMACReceiveErrors() const
{
	return Uint32(0);
}

Boolean UNIX_LLDPEthernetPortStatistics::getCarrierSenseErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CARRIER_SENSE_ERRORS, getCarrierSenseErrors());
	return true;
}

Uint32 UNIX_LLDPEthernetPortStatistics::getCarrierSenseErrors() const
{
	return Uint32(0);
}

Boolean UNIX_LLDPEthernetPortStatistics::getFrameTooLongs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FRAME_TOO_LONGS, getFrameTooLongs());
	return true;
}

Uint32 UNIX_LLDPEthernetPortStatistics::getFrameTooLongs() const
{
	return Uint32(0);
}

Boolean UNIX_LLDPEthernetPortStatistics::getTxDestMACAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TX_DEST_M_A_C_ADDRESS, getTxDestMACAddress());
	return true;
}

Array<String> UNIX_LLDPEthernetPortStatistics::getTxDestMACAddress() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPortStatistics::getTxPortFramesTotal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TX_PORT_FRAMES_TOTAL, getTxPortFramesTotal());
	return true;
}

Array<Uint32> UNIX_LLDPEthernetPortStatistics::getTxPortFramesTotal() const
{
	Array<Uint32> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPortStatistics::getTxLLDPDULengthErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TX_L_L_D_P_D_U_LENGTH_ERRORS, getTxLLDPDULengthErrors());
	return true;
}

Array<Uint32> UNIX_LLDPEthernetPortStatistics::getTxLLDPDULengthErrors() const
{
	Array<Uint32> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPortStatistics::getRxDestMACAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RX_DEST_M_A_C_ADDRESS, getRxDestMACAddress());
	return true;
}

Array<String> UNIX_LLDPEthernetPortStatistics::getRxDestMACAddress() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPortStatistics::getRxPortFramesDiscardedTotal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RX_PORT_FRAMES_DISCARDED_TOTAL, getRxPortFramesDiscardedTotal());
	return true;
}

Array<Uint32> UNIX_LLDPEthernetPortStatistics::getRxPortFramesDiscardedTotal() const
{
	Array<Uint32> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPortStatistics::getRxPortFramesErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RX_PORT_FRAMES_ERRORS, getRxPortFramesErrors());
	return true;
}

Array<Uint32> UNIX_LLDPEthernetPortStatistics::getRxPortFramesErrors() const
{
	Array<Uint32> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPortStatistics::getRxPortTLVsDiscardedTotal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RX_PORT_T_L_VS_DISCARDED_TOTAL, getRxPortTLVsDiscardedTotal());
	return true;
}

Array<Uint32> UNIX_LLDPEthernetPortStatistics::getRxPortTLVsDiscardedTotal() const
{
	Array<Uint32> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPortStatistics::getRxPortTLVsUnrecognizedTotal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RX_PORT_T_L_VS_UNRECOGNIZED_TOTAL, getRxPortTLVsUnrecognizedTotal());
	return true;
}

Array<Uint32> UNIX_LLDPEthernetPortStatistics::getRxPortTLVsUnrecognizedTotal() const
{
	Array<Uint32> as;
	

	return as;

}

Boolean UNIX_LLDPEthernetPortStatistics::getRxPortAgeoutsTotal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RX_PORT_AGEOUTS_TOTAL, getRxPortAgeoutsTotal());
	return true;
}

Array<Uint32> UNIX_LLDPEthernetPortStatistics::getRxPortAgeoutsTotal() const
{
	Array<Uint32> as;
	

	return as;

}



Boolean UNIX_LLDPEthernetPortStatistics::initialize()
{
	return false;
}

Boolean UNIX_LLDPEthernetPortStatistics::load(int &pIndex)
{
	return false;
}

Boolean UNIX_LLDPEthernetPortStatistics::finalize()
{
	return false;
}

Boolean UNIX_LLDPEthernetPortStatistics::find(Array<CIMKeyBinding> &kbArray)
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
