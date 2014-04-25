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


UNIX_FCPortStatistics::UNIX_FCPortStatistics(void)
{
}

UNIX_FCPortStatistics::~UNIX_FCPortStatistics(void)
{
}


Boolean UNIX_FCPortStatistics::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FCPortStatistics::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_FCPortStatistics::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FCPortStatistics::getCaption() const
{
	return String ("");
}

Boolean UNIX_FCPortStatistics::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FCPortStatistics::getDescription() const
{
	return String ("");
}

Boolean UNIX_FCPortStatistics::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FCPortStatistics::getElementName() const
{
	return String("FCPortStatistics");
}

Boolean UNIX_FCPortStatistics::getStartStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_STATISTIC_TIME, getStartStatisticTime());
	return true;
}

CIMDateTime UNIX_FCPortStatistics::getStartStatisticTime() const
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

Boolean UNIX_FCPortStatistics::getStatisticTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATISTIC_TIME, getStatisticTime());
	return true;
}

CIMDateTime UNIX_FCPortStatistics::getStatisticTime() const
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

Boolean UNIX_FCPortStatistics::getSampleInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAMPLE_INTERVAL, getSampleInterval());
	return true;
}

CIMDateTime UNIX_FCPortStatistics::getSampleInterval() const
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

Boolean UNIX_FCPortStatistics::getBytesTransmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BYTES_TRANSMITTED, getBytesTransmitted());
	return true;
}

Uint64 UNIX_FCPortStatistics::getBytesTransmitted() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortStatistics::getBytesReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BYTES_RECEIVED, getBytesReceived());
	return true;
}

Uint64 UNIX_FCPortStatistics::getBytesReceived() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortStatistics::getPacketsTransmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKETS_TRANSMITTED, getPacketsTransmitted());
	return true;
}

Uint64 UNIX_FCPortStatistics::getPacketsTransmitted() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortStatistics::getPacketsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKETS_RECEIVED, getPacketsReceived());
	return true;
}

Uint64 UNIX_FCPortStatistics::getPacketsReceived() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortStatistics::getLIPCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_L_I_P_COUNT, getLIPCount());
	return true;
}

Uint64 UNIX_FCPortStatistics::getLIPCount() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortStatistics::getNOSCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_N_OS_COUNT, getNOSCount());
	return true;
}

Uint64 UNIX_FCPortStatistics::getNOSCount() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortStatistics::getErrorFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_FRAMES, getErrorFrames());
	return true;
}

Uint64 UNIX_FCPortStatistics::getErrorFrames() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortStatistics::getDumpedFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DUMPED_FRAMES, getDumpedFrames());
	return true;
}

Uint64 UNIX_FCPortStatistics::getDumpedFrames() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortStatistics::getLinkFailures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LINK_FAILURES, getLinkFailures());
	return true;
}

Uint64 UNIX_FCPortStatistics::getLinkFailures() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortStatistics::getLossOfSignalCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOSS_OF_SIGNAL_COUNTER, getLossOfSignalCounter());
	return true;
}

Uint64 UNIX_FCPortStatistics::getLossOfSignalCounter() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortStatistics::getLossOfSyncCounter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOSS_OF_SYNC_COUNTER, getLossOfSyncCounter());
	return true;
}

Uint64 UNIX_FCPortStatistics::getLossOfSyncCounter() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortStatistics::getPrimitiveSeqProtocolErrCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMITIVE_SEQ_PROTOCOL_ERR_COUNT, getPrimitiveSeqProtocolErrCount());
	return true;
}

Uint64 UNIX_FCPortStatistics::getPrimitiveSeqProtocolErrCount() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortStatistics::getCRCErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_C_R_C_ERRORS, getCRCErrors());
	return true;
}

Uint64 UNIX_FCPortStatistics::getCRCErrors() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortStatistics::getInvalidTransmissionWords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INVALID_TRANSMISSION_WORDS, getInvalidTransmissionWords());
	return true;
}

Uint64 UNIX_FCPortStatistics::getInvalidTransmissionWords() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortStatistics::getFramesTooShort(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FRAMES_TOO_SHORT, getFramesTooShort());
	return true;
}

Uint64 UNIX_FCPortStatistics::getFramesTooShort() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortStatistics::getFramesTooLong(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FRAMES_TOO_LONG, getFramesTooLong());
	return true;
}

Uint64 UNIX_FCPortStatistics::getFramesTooLong() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortStatistics::getAddressErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_ERRORS, getAddressErrors());
	return true;
}

Uint64 UNIX_FCPortStatistics::getAddressErrors() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortStatistics::getBufferCreditNotProvided(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUFFER_CREDIT_NOT_PROVIDED, getBufferCreditNotProvided());
	return true;
}

Uint64 UNIX_FCPortStatistics::getBufferCreditNotProvided() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortStatistics::getBufferCreditNotReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUFFER_CREDIT_NOT_RECEIVED, getBufferCreditNotReceived());
	return true;
}

Uint64 UNIX_FCPortStatistics::getBufferCreditNotReceived() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortStatistics::getDelimiterErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELIMITER_ERRORS, getDelimiterErrors());
	return true;
}

Uint64 UNIX_FCPortStatistics::getDelimiterErrors() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortStatistics::getEncodingDisparityErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENCODING_DISPARITY_ERRORS, getEncodingDisparityErrors());
	return true;
}

Uint64 UNIX_FCPortStatistics::getEncodingDisparityErrors() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortStatistics::getLinkResetsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LINK_RESETS_RECEIVED, getLinkResetsReceived());
	return true;
}

Uint64 UNIX_FCPortStatistics::getLinkResetsReceived() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortStatistics::getLinkResetsTransmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LINK_RESETS_TRANSMITTED, getLinkResetsTransmitted());
	return true;
}

Uint64 UNIX_FCPortStatistics::getLinkResetsTransmitted() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortStatistics::getMulticastFramesReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MULTICAST_FRAMES_RECEIVED, getMulticastFramesReceived());
	return true;
}

Uint64 UNIX_FCPortStatistics::getMulticastFramesReceived() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortStatistics::getMulticastFramesTransmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MULTICAST_FRAMES_TRANSMITTED, getMulticastFramesTransmitted());
	return true;
}

Uint64 UNIX_FCPortStatistics::getMulticastFramesTransmitted() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortStatistics::getFBSYFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_F_B_S_Y_FRAMES, getFBSYFrames());
	return true;
}

Uint64 UNIX_FCPortStatistics::getFBSYFrames() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortStatistics::getPBSYFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_B_S_Y_FRAMES, getPBSYFrames());
	return true;
}

Uint64 UNIX_FCPortStatistics::getPBSYFrames() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortStatistics::getFRJTFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_F_R_J_T_FRAMES, getFRJTFrames());
	return true;
}

Uint64 UNIX_FCPortStatistics::getFRJTFrames() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortStatistics::getPRJTFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_R_J_T_FRAMES, getPRJTFrames());
	return true;
}

Uint64 UNIX_FCPortStatistics::getPRJTFrames() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortStatistics::getRXClass1Frames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_R_X_CLASS_1_FRAMES, getRXClass1Frames());
	return true;
}

Uint64 UNIX_FCPortStatistics::getRXClass1Frames() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortStatistics::getTXClass1Frames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_T_X_CLASS_1_FRAMES, getTXClass1Frames());
	return true;
}

Uint64 UNIX_FCPortStatistics::getTXClass1Frames() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortStatistics::getClass1FBSY(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_1_F_B_S_Y, getClass1FBSY());
	return true;
}

Uint64 UNIX_FCPortStatistics::getClass1FBSY() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortStatistics::getClass1PBSY(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_1_P_B_S_Y, getClass1PBSY());
	return true;
}

Uint64 UNIX_FCPortStatistics::getClass1PBSY() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortStatistics::getClass1FRJT(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_1_F_R_J_T, getClass1FRJT());
	return true;
}

Uint64 UNIX_FCPortStatistics::getClass1FRJT() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortStatistics::getClass1PRJT(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_1_P_R_J_T, getClass1PRJT());
	return true;
}

Uint64 UNIX_FCPortStatistics::getClass1PRJT() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortStatistics::getRXClass2Frames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_R_X_CLASS_2_FRAMES, getRXClass2Frames());
	return true;
}

Uint64 UNIX_FCPortStatistics::getRXClass2Frames() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortStatistics::getTXClass2Frames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_T_X_CLASS_2_FRAMES, getTXClass2Frames());
	return true;
}

Uint64 UNIX_FCPortStatistics::getTXClass2Frames() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortStatistics::getClass2FBSY(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_2_F_B_S_Y, getClass2FBSY());
	return true;
}

Uint64 UNIX_FCPortStatistics::getClass2FBSY() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortStatistics::getClass2PBSY(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_2_P_B_S_Y, getClass2PBSY());
	return true;
}

Uint64 UNIX_FCPortStatistics::getClass2PBSY() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortStatistics::getClass2FRJT(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_2_F_R_J_T, getClass2FRJT());
	return true;
}

Uint64 UNIX_FCPortStatistics::getClass2FRJT() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortStatistics::getClass2PRJT(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_2_P_R_J_T, getClass2PRJT());
	return true;
}

Uint64 UNIX_FCPortStatistics::getClass2PRJT() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortStatistics::getRXClass3Frames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_R_X_CLASS_3_FRAMES, getRXClass3Frames());
	return true;
}

Uint64 UNIX_FCPortStatistics::getRXClass3Frames() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortStatistics::getTXClass3Frames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_T_X_CLASS_3_FRAMES, getTXClass3Frames());
	return true;
}

Uint64 UNIX_FCPortStatistics::getTXClass3Frames() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortStatistics::getClass3FramesDiscarded(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_3_FRAMES_DISCARDED, getClass3FramesDiscarded());
	return true;
}

Uint64 UNIX_FCPortStatistics::getClass3FramesDiscarded() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortStatistics::getRXBroadcastFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_R_X_BROADCAST_FRAMES, getRXBroadcastFrames());
	return true;
}

Uint64 UNIX_FCPortStatistics::getRXBroadcastFrames() const
{
	return Uint64(0);
}

Boolean UNIX_FCPortStatistics::getTXBroadcastFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_T_X_BROADCAST_FRAMES, getTXBroadcastFrames());
	return true;
}

Uint64 UNIX_FCPortStatistics::getTXBroadcastFrames() const
{
	return Uint64(0);
}



Boolean UNIX_FCPortStatistics::initialize()
{
	return false;
}

Boolean UNIX_FCPortStatistics::load(int &pIndex)
{
	return false;
}

Boolean UNIX_FCPortStatistics::finalize()
{
	return false;
}

Boolean UNIX_FCPortStatistics::find(Array<CIMKeyBinding> &kbArray)
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
