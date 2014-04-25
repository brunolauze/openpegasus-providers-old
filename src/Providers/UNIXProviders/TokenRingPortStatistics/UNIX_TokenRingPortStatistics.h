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

#ifndef __UNIX_TOKENRINGPORTSTATISTICS_H
#define __UNIX_TOKENRINGPORTSTATISTICS_H


#include "CIM_NetworkPortStatistics.h"

#include "UNIX_TokenRingPortStatisticsDeps.h"


#define PROPERTY_BURST_ERRORS				"BurstErrors"
#define PROPERTY_A_C_ERRORS				"ACErrors"
#define PROPERTY_ABORT_TRANS_ERRORS				"AbortTransErrors"
#define PROPERTY_INTERNAL_ERRORS				"InternalErrors"
#define PROPERTY_LOST_FRAME_ERRORS				"LostFrameErrors"
#define PROPERTY_RECEIVE_CONGESTIONS				"ReceiveCongestions"
#define PROPERTY_FRAME_COPIED_ERRORS				"FrameCopiedErrors"
#define PROPERTY_TOKEN_ERRORS				"TokenErrors"
#define PROPERTY_SOFT_ERRORS				"SoftErrors"
#define PROPERTY_HARD_ERRORS				"HardErrors"
#define PROPERTY_SIGNAL_LOSS_COUNT				"SignalLossCount"
#define PROPERTY_TRANSMITTED_BEACONS				"TransmittedBeacons"
#define PROPERTY_RECOVERYS				"Recoverys"
#define PROPERTY_LOBE_WIRES				"LobeWires"
#define PROPERTY_REMOVES				"Removes"
#define PROPERTY_SINGLES				"Singles"
#define PROPERTY_FREQUENCY_ERRORS				"FrequencyErrors"


class UNIX_TokenRingPortStatistics :
	public CIM_NetworkPortStatistics
{
public:

	UNIX_TokenRingPortStatistics();
	~UNIX_TokenRingPortStatistics();

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
	virtual Boolean getBurstErrors(CIMProperty&) const;
	virtual Uint32 getBurstErrors() const;
	virtual Boolean getACErrors(CIMProperty&) const;
	virtual Uint32 getACErrors() const;
	virtual Boolean getAbortTransErrors(CIMProperty&) const;
	virtual Uint32 getAbortTransErrors() const;
	virtual Boolean getInternalErrors(CIMProperty&) const;
	virtual Uint32 getInternalErrors() const;
	virtual Boolean getLostFrameErrors(CIMProperty&) const;
	virtual Uint32 getLostFrameErrors() const;
	virtual Boolean getReceiveCongestions(CIMProperty&) const;
	virtual Uint32 getReceiveCongestions() const;
	virtual Boolean getFrameCopiedErrors(CIMProperty&) const;
	virtual Uint32 getFrameCopiedErrors() const;
	virtual Boolean getTokenErrors(CIMProperty&) const;
	virtual Uint32 getTokenErrors() const;
	virtual Boolean getSoftErrors(CIMProperty&) const;
	virtual Uint32 getSoftErrors() const;
	virtual Boolean getHardErrors(CIMProperty&) const;
	virtual Uint32 getHardErrors() const;
	virtual Boolean getSignalLossCount(CIMProperty&) const;
	virtual Uint32 getSignalLossCount() const;
	virtual Boolean getTransmittedBeacons(CIMProperty&) const;
	virtual Uint32 getTransmittedBeacons() const;
	virtual Boolean getRecoverys(CIMProperty&) const;
	virtual Uint32 getRecoverys() const;
	virtual Boolean getLobeWires(CIMProperty&) const;
	virtual Uint32 getLobeWires() const;
	virtual Boolean getRemoves(CIMProperty&) const;
	virtual Uint32 getRemoves() const;
	virtual Boolean getSingles(CIMProperty&) const;
	virtual Uint32 getSingles() const;
	virtual Boolean getFrequencyErrors(CIMProperty&) const;
	virtual Uint32 getFrequencyErrors() const;

private:
	CIMName currentScope;

#	include "UNIX_TokenRingPortStatisticsPrivate.h"


};

#endif /* UNIX_TOKENRINGPORTSTATISTICS */
