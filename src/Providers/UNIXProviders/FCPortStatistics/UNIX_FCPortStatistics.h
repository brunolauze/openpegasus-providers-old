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

#ifndef __UNIX_FCPORTSTATISTICS_H
#define __UNIX_FCPORTSTATISTICS_H


#include "CIM_NetworkPortStatistics.h"

#include "UNIX_FCPortStatisticsDeps.h"


#define PROPERTY_L_I_P_COUNT				"LIPCount"
#define PROPERTY_N_OS_COUNT				"NOSCount"
#define PROPERTY_ERROR_FRAMES				"ErrorFrames"
#define PROPERTY_DUMPED_FRAMES				"DumpedFrames"
#define PROPERTY_LINK_FAILURES				"LinkFailures"
#define PROPERTY_LOSS_OF_SIGNAL_COUNTER				"LossOfSignalCounter"
#define PROPERTY_LOSS_OF_SYNC_COUNTER				"LossOfSyncCounter"
#define PROPERTY_PRIMITIVE_SEQ_PROTOCOL_ERR_COUNT				"PrimitiveSeqProtocolErrCount"
#define PROPERTY_C_R_C_ERRORS				"CRCErrors"
#define PROPERTY_INVALID_TRANSMISSION_WORDS				"InvalidTransmissionWords"
#define PROPERTY_FRAMES_TOO_SHORT				"FramesTooShort"
#define PROPERTY_FRAMES_TOO_LONG				"FramesTooLong"
#define PROPERTY_ADDRESS_ERRORS				"AddressErrors"
#define PROPERTY_BUFFER_CREDIT_NOT_PROVIDED				"BufferCreditNotProvided"
#define PROPERTY_BUFFER_CREDIT_NOT_RECEIVED				"BufferCreditNotReceived"
#define PROPERTY_DELIMITER_ERRORS				"DelimiterErrors"
#define PROPERTY_ENCODING_DISPARITY_ERRORS				"EncodingDisparityErrors"
#define PROPERTY_LINK_RESETS_RECEIVED				"LinkResetsReceived"
#define PROPERTY_LINK_RESETS_TRANSMITTED				"LinkResetsTransmitted"
#define PROPERTY_MULTICAST_FRAMES_RECEIVED				"MulticastFramesReceived"
#define PROPERTY_MULTICAST_FRAMES_TRANSMITTED				"MulticastFramesTransmitted"
#define PROPERTY_F_B_S_Y_FRAMES				"FBSYFrames"
#define PROPERTY_P_B_S_Y_FRAMES				"PBSYFrames"
#define PROPERTY_F_R_J_T_FRAMES				"FRJTFrames"
#define PROPERTY_P_R_J_T_FRAMES				"PRJTFrames"
#define PROPERTY_R_X_CLASS_1_FRAMES				"RXClass1Frames"
#define PROPERTY_T_X_CLASS_1_FRAMES				"TXClass1Frames"
#define PROPERTY_CLASS_1_F_B_S_Y				"Class1FBSY"
#define PROPERTY_CLASS_1_P_B_S_Y				"Class1PBSY"
#define PROPERTY_CLASS_1_F_R_J_T				"Class1FRJT"
#define PROPERTY_CLASS_1_P_R_J_T				"Class1PRJT"
#define PROPERTY_R_X_CLASS_2_FRAMES				"RXClass2Frames"
#define PROPERTY_T_X_CLASS_2_FRAMES				"TXClass2Frames"
#define PROPERTY_CLASS_2_F_B_S_Y				"Class2FBSY"
#define PROPERTY_CLASS_2_P_B_S_Y				"Class2PBSY"
#define PROPERTY_CLASS_2_F_R_J_T				"Class2FRJT"
#define PROPERTY_CLASS_2_P_R_J_T				"Class2PRJT"
#define PROPERTY_R_X_CLASS_3_FRAMES				"RXClass3Frames"
#define PROPERTY_T_X_CLASS_3_FRAMES				"TXClass3Frames"
#define PROPERTY_CLASS_3_FRAMES_DISCARDED				"Class3FramesDiscarded"
#define PROPERTY_R_X_BROADCAST_FRAMES				"RXBroadcastFrames"
#define PROPERTY_T_X_BROADCAST_FRAMES				"TXBroadcastFrames"


class UNIX_FCPortStatistics :
	public CIM_NetworkPortStatistics
{
public:

	UNIX_FCPortStatistics();
	~UNIX_FCPortStatistics();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean finalize();
	virtual Boolean find(Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);

	virtual Boolean getInstanceID(CIMProperty&) const;
	virtual String getInstanceID() const;
	virtual Boolean getCaption(CIMProperty&) const;
	virtual String getCaption() const;
	virtual Boolean getDescription(CIMProperty&) const;
	virtual String getDescription() const;
	virtual Boolean getElementName(CIMProperty&) const;
	virtual String getElementName() const;
	virtual Boolean getStartStatisticTime(CIMProperty&) const;
	virtual CIMDateTime getStartStatisticTime() const;
	virtual Boolean getStatisticTime(CIMProperty&) const;
	virtual CIMDateTime getStatisticTime() const;
	virtual Boolean getSampleInterval(CIMProperty&) const;
	virtual CIMDateTime getSampleInterval() const;
	virtual Boolean getBytesTransmitted(CIMProperty&) const;
	virtual Uint64 getBytesTransmitted() const;
	virtual Boolean getBytesReceived(CIMProperty&) const;
	virtual Uint64 getBytesReceived() const;
	virtual Boolean getPacketsTransmitted(CIMProperty&) const;
	virtual Uint64 getPacketsTransmitted() const;
	virtual Boolean getPacketsReceived(CIMProperty&) const;
	virtual Uint64 getPacketsReceived() const;
	virtual Boolean getLIPCount(CIMProperty&) const;
	virtual Uint64 getLIPCount() const;
	virtual Boolean getNOSCount(CIMProperty&) const;
	virtual Uint64 getNOSCount() const;
	virtual Boolean getErrorFrames(CIMProperty&) const;
	virtual Uint64 getErrorFrames() const;
	virtual Boolean getDumpedFrames(CIMProperty&) const;
	virtual Uint64 getDumpedFrames() const;
	virtual Boolean getLinkFailures(CIMProperty&) const;
	virtual Uint64 getLinkFailures() const;
	virtual Boolean getLossOfSignalCounter(CIMProperty&) const;
	virtual Uint64 getLossOfSignalCounter() const;
	virtual Boolean getLossOfSyncCounter(CIMProperty&) const;
	virtual Uint64 getLossOfSyncCounter() const;
	virtual Boolean getPrimitiveSeqProtocolErrCount(CIMProperty&) const;
	virtual Uint64 getPrimitiveSeqProtocolErrCount() const;
	virtual Boolean getCRCErrors(CIMProperty&) const;
	virtual Uint64 getCRCErrors() const;
	virtual Boolean getInvalidTransmissionWords(CIMProperty&) const;
	virtual Uint64 getInvalidTransmissionWords() const;
	virtual Boolean getFramesTooShort(CIMProperty&) const;
	virtual Uint64 getFramesTooShort() const;
	virtual Boolean getFramesTooLong(CIMProperty&) const;
	virtual Uint64 getFramesTooLong() const;
	virtual Boolean getAddressErrors(CIMProperty&) const;
	virtual Uint64 getAddressErrors() const;
	virtual Boolean getBufferCreditNotProvided(CIMProperty&) const;
	virtual Uint64 getBufferCreditNotProvided() const;
	virtual Boolean getBufferCreditNotReceived(CIMProperty&) const;
	virtual Uint64 getBufferCreditNotReceived() const;
	virtual Boolean getDelimiterErrors(CIMProperty&) const;
	virtual Uint64 getDelimiterErrors() const;
	virtual Boolean getEncodingDisparityErrors(CIMProperty&) const;
	virtual Uint64 getEncodingDisparityErrors() const;
	virtual Boolean getLinkResetsReceived(CIMProperty&) const;
	virtual Uint64 getLinkResetsReceived() const;
	virtual Boolean getLinkResetsTransmitted(CIMProperty&) const;
	virtual Uint64 getLinkResetsTransmitted() const;
	virtual Boolean getMulticastFramesReceived(CIMProperty&) const;
	virtual Uint64 getMulticastFramesReceived() const;
	virtual Boolean getMulticastFramesTransmitted(CIMProperty&) const;
	virtual Uint64 getMulticastFramesTransmitted() const;
	virtual Boolean getFBSYFrames(CIMProperty&) const;
	virtual Uint64 getFBSYFrames() const;
	virtual Boolean getPBSYFrames(CIMProperty&) const;
	virtual Uint64 getPBSYFrames() const;
	virtual Boolean getFRJTFrames(CIMProperty&) const;
	virtual Uint64 getFRJTFrames() const;
	virtual Boolean getPRJTFrames(CIMProperty&) const;
	virtual Uint64 getPRJTFrames() const;
	virtual Boolean getRXClass1Frames(CIMProperty&) const;
	virtual Uint64 getRXClass1Frames() const;
	virtual Boolean getTXClass1Frames(CIMProperty&) const;
	virtual Uint64 getTXClass1Frames() const;
	virtual Boolean getClass1FBSY(CIMProperty&) const;
	virtual Uint64 getClass1FBSY() const;
	virtual Boolean getClass1PBSY(CIMProperty&) const;
	virtual Uint64 getClass1PBSY() const;
	virtual Boolean getClass1FRJT(CIMProperty&) const;
	virtual Uint64 getClass1FRJT() const;
	virtual Boolean getClass1PRJT(CIMProperty&) const;
	virtual Uint64 getClass1PRJT() const;
	virtual Boolean getRXClass2Frames(CIMProperty&) const;
	virtual Uint64 getRXClass2Frames() const;
	virtual Boolean getTXClass2Frames(CIMProperty&) const;
	virtual Uint64 getTXClass2Frames() const;
	virtual Boolean getClass2FBSY(CIMProperty&) const;
	virtual Uint64 getClass2FBSY() const;
	virtual Boolean getClass2PBSY(CIMProperty&) const;
	virtual Uint64 getClass2PBSY() const;
	virtual Boolean getClass2FRJT(CIMProperty&) const;
	virtual Uint64 getClass2FRJT() const;
	virtual Boolean getClass2PRJT(CIMProperty&) const;
	virtual Uint64 getClass2PRJT() const;
	virtual Boolean getRXClass3Frames(CIMProperty&) const;
	virtual Uint64 getRXClass3Frames() const;
	virtual Boolean getTXClass3Frames(CIMProperty&) const;
	virtual Uint64 getTXClass3Frames() const;
	virtual Boolean getClass3FramesDiscarded(CIMProperty&) const;
	virtual Uint64 getClass3FramesDiscarded() const;
	virtual Boolean getRXBroadcastFrames(CIMProperty&) const;
	virtual Uint64 getRXBroadcastFrames() const;
	virtual Boolean getTXBroadcastFrames(CIMProperty&) const;
	virtual Uint64 getTXBroadcastFrames() const;

private:
	CIMName currentScope;

#	include "UNIX_FCPortStatisticsPrivate.h"


};

#endif /* UNIX_FCPORTSTATISTICS */
