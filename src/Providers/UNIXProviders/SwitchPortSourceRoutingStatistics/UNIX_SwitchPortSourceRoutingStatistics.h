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

#ifndef __UNIX_SWITCHPORTSOURCEROUTINGSTATISTICS_H
#define __UNIX_SWITCHPORTSOURCEROUTINGSTATISTICS_H


#include "CIM_SAPStatisticalInformation.h"

#include "UNIX_SwitchPortSourceRoutingStatisticsDeps.h"


#define PROPERTY_SPEC_IN_FRAMES				"SpecInFrames"
#define PROPERTY_SPEC_OUT_FRAMES				"SpecOutFrames"
#define PROPERTY_APE_IN_FRAMES				"ApeInFrames"
#define PROPERTY_APE_OUT_FRAMES				"ApeOutFrames"
#define PROPERTY_STE_IN_FRAMES				"SteInFrames"
#define PROPERTY_STE_OUT_FRAMES				"SteOutFrames"
#define PROPERTY_SEGMENT_MISMATCH_DISCARDS				"SegmentMismatchDiscards"
#define PROPERTY_DUPLICATE_SEGMENT_DISCARDS				"DuplicateSegmentDiscards"
#define PROPERTY_HOP_COUNT_EXCEEDS_DISCARDS				"HopCountExceedsDiscards"
#define PROPERTY_DUP_LAN_ID_OR_TREE_ERRORS				"DupLanIdOrTreeErrors"
#define PROPERTY_LAN_ID_MISMATCHES				"LanIdMismatches"


class UNIX_SwitchPortSourceRoutingStatistics :
	public CIM_SAPStatisticalInformation
{
public:

	UNIX_SwitchPortSourceRoutingStatistics();
	~UNIX_SwitchPortSourceRoutingStatistics();

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
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual Boolean getSystemCreationClassName(CIMProperty&) const;
	virtual String getSystemCreationClassName() const;
	virtual Boolean getSystemName(CIMProperty&) const;
	virtual String getSystemName() const;
	virtual Boolean getSAPCreationClassName(CIMProperty&) const;
	virtual String getSAPCreationClassName() const;
	virtual Boolean getSAPName(CIMProperty&) const;
	virtual String getSAPName() const;
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual Boolean getSpecInFrames(CIMProperty&) const;
	virtual Uint32 getSpecInFrames() const;
	virtual Boolean getSpecOutFrames(CIMProperty&) const;
	virtual Uint32 getSpecOutFrames() const;
	virtual Boolean getApeInFrames(CIMProperty&) const;
	virtual Uint32 getApeInFrames() const;
	virtual Boolean getApeOutFrames(CIMProperty&) const;
	virtual Uint32 getApeOutFrames() const;
	virtual Boolean getSteInFrames(CIMProperty&) const;
	virtual Uint32 getSteInFrames() const;
	virtual Boolean getSteOutFrames(CIMProperty&) const;
	virtual Uint32 getSteOutFrames() const;
	virtual Boolean getSegmentMismatchDiscards(CIMProperty&) const;
	virtual Uint32 getSegmentMismatchDiscards() const;
	virtual Boolean getDuplicateSegmentDiscards(CIMProperty&) const;
	virtual Uint32 getDuplicateSegmentDiscards() const;
	virtual Boolean getHopCountExceedsDiscards(CIMProperty&) const;
	virtual Uint32 getHopCountExceedsDiscards() const;
	virtual Boolean getDupLanIdOrTreeErrors(CIMProperty&) const;
	virtual Uint32 getDupLanIdOrTreeErrors() const;
	virtual Boolean getLanIdMismatches(CIMProperty&) const;
	virtual Uint32 getLanIdMismatches() const;

private:
	CIMName currentScope;

#	include "UNIX_SwitchPortSourceRoutingStatisticsPrivate.h"


};

#endif /* UNIX_SWITCHPORTSOURCEROUTINGSTATISTICS */
