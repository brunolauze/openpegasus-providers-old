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

#ifndef __UNIX_LLDPETHERNETPORTSTATISTICS_H
#define __UNIX_LLDPETHERNETPORTSTATISTICS_H


#include "CIM_EthernetPortStatistics.h"

#include "UNIX_LLDPEthernetPortStatisticsDeps.h"


#define PROPERTY_TX_DEST_M_A_C_ADDRESS				"TxDestMACAddress"
#define PROPERTY_TX_PORT_FRAMES_TOTAL				"TxPortFramesTotal"
#define PROPERTY_TX_L_L_D_P_D_U_LENGTH_ERRORS				"TxLLDPDULengthErrors"
#define PROPERTY_RX_DEST_M_A_C_ADDRESS				"RxDestMACAddress"
#define PROPERTY_RX_PORT_FRAMES_DISCARDED_TOTAL				"RxPortFramesDiscardedTotal"
#define PROPERTY_RX_PORT_FRAMES_ERRORS				"RxPortFramesErrors"
#define PROPERTY_RX_PORT_T_L_VS_DISCARDED_TOTAL				"RxPortTLVsDiscardedTotal"
#define PROPERTY_RX_PORT_T_L_VS_UNRECOGNIZED_TOTAL				"RxPortTLVsUnrecognizedTotal"
#define PROPERTY_RX_PORT_AGEOUTS_TOTAL				"RxPortAgeoutsTotal"


class UNIX_LLDPEthernetPortStatistics :
	public CIM_EthernetPortStatistics
{
public:

	UNIX_LLDPEthernetPortStatistics();
	~UNIX_LLDPEthernetPortStatistics();

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
	virtual Boolean getSymbolErrors(CIMProperty&) const;
	virtual Uint32 getSymbolErrors() const;
	virtual Boolean getAlignmentErrors(CIMProperty&) const;
	virtual Uint32 getAlignmentErrors() const;
	virtual Boolean getFCSErrors(CIMProperty&) const;
	virtual Uint32 getFCSErrors() const;
	virtual Boolean getSingleCollisionFrames(CIMProperty&) const;
	virtual Uint32 getSingleCollisionFrames() const;
	virtual Boolean getMultipleCollisionFrames(CIMProperty&) const;
	virtual Uint32 getMultipleCollisionFrames() const;
	virtual Boolean getSQETestErrors(CIMProperty&) const;
	virtual Uint32 getSQETestErrors() const;
	virtual Boolean getDeferredTransmissions(CIMProperty&) const;
	virtual Uint32 getDeferredTransmissions() const;
	virtual Boolean getLateCollisions(CIMProperty&) const;
	virtual Uint32 getLateCollisions() const;
	virtual Boolean getExcessiveCollisions(CIMProperty&) const;
	virtual Uint32 getExcessiveCollisions() const;
	virtual Boolean getInternalMACTransmitErrors(CIMProperty&) const;
	virtual Uint32 getInternalMACTransmitErrors() const;
	virtual Boolean getInternalMACReceiveErrors(CIMProperty&) const;
	virtual Uint32 getInternalMACReceiveErrors() const;
	virtual Boolean getCarrierSenseErrors(CIMProperty&) const;
	virtual Uint32 getCarrierSenseErrors() const;
	virtual Boolean getFrameTooLongs(CIMProperty&) const;
	virtual Uint32 getFrameTooLongs() const;
	virtual Boolean getTxDestMACAddress(CIMProperty&) const;
	virtual Array<String> getTxDestMACAddress() const;
	virtual Boolean getTxPortFramesTotal(CIMProperty&) const;
	virtual Array<Uint32> getTxPortFramesTotal() const;
	virtual Boolean getTxLLDPDULengthErrors(CIMProperty&) const;
	virtual Array<Uint32> getTxLLDPDULengthErrors() const;
	virtual Boolean getRxDestMACAddress(CIMProperty&) const;
	virtual Array<String> getRxDestMACAddress() const;
	virtual Boolean getRxPortFramesDiscardedTotal(CIMProperty&) const;
	virtual Array<Uint32> getRxPortFramesDiscardedTotal() const;
	virtual Boolean getRxPortFramesErrors(CIMProperty&) const;
	virtual Array<Uint32> getRxPortFramesErrors() const;
	virtual Boolean getRxPortTLVsDiscardedTotal(CIMProperty&) const;
	virtual Array<Uint32> getRxPortTLVsDiscardedTotal() const;
	virtual Boolean getRxPortTLVsUnrecognizedTotal(CIMProperty&) const;
	virtual Array<Uint32> getRxPortTLVsUnrecognizedTotal() const;
	virtual Boolean getRxPortAgeoutsTotal(CIMProperty&) const;
	virtual Array<Uint32> getRxPortAgeoutsTotal() const;

private:
	CIMName currentScope;

#	include "UNIX_LLDPEthernetPortStatisticsPrivate.h"


};

#endif /* UNIX_LLDPETHERNETPORTSTATISTICS */
