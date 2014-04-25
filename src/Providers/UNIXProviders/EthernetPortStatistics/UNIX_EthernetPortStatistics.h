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

#ifndef __UNIX_ETHERNETPORTSTATISTICS_H
#define __UNIX_ETHERNETPORTSTATISTICS_H


#include "CIM_NetworkPortStatistics.h"

#include "UNIX_EthernetPortStatisticsDeps.h"


#define PROPERTY_SYMBOL_ERRORS				"SymbolErrors"
#define PROPERTY_ALIGNMENT_ERRORS				"AlignmentErrors"
#define PROPERTY_F_CS_ERRORS				"FCSErrors"
#define PROPERTY_SINGLE_COLLISION_FRAMES				"SingleCollisionFrames"
#define PROPERTY_MULTIPLE_COLLISION_FRAMES				"MultipleCollisionFrames"
#define PROPERTY_S_Q_E_TEST_ERRORS				"SQETestErrors"
#define PROPERTY_DEFERRED_TRANSMISSIONS				"DeferredTransmissions"
#define PROPERTY_LATE_COLLISIONS				"LateCollisions"
#define PROPERTY_EXCESSIVE_COLLISIONS				"ExcessiveCollisions"
#define PROPERTY_INTERNAL_M_A_C_TRANSMIT_ERRORS				"InternalMACTransmitErrors"
#define PROPERTY_INTERNAL_M_A_C_RECEIVE_ERRORS				"InternalMACReceiveErrors"
#define PROPERTY_CARRIER_SENSE_ERRORS				"CarrierSenseErrors"
#define PROPERTY_FRAME_TOO_LONGS				"FrameTooLongs"


class UNIX_EthernetPortStatistics :
	public CIM_NetworkPortStatistics
{
public:

	UNIX_EthernetPortStatistics();
	~UNIX_EthernetPortStatistics();

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

private:
	CIMName currentScope;

#	include "UNIX_EthernetPortStatisticsPrivate.h"


};

#endif /* UNIX_ETHERNETPORTSTATISTICS */
