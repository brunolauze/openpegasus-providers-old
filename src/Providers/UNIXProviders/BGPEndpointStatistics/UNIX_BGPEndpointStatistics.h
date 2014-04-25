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

#ifndef __UNIX_BGPENDPOINTSTATISTICS_H
#define __UNIX_BGPENDPOINTSTATISTICS_H


#include "CIM_StatisticalData.h"

#include "UNIX_BGPEndpointStatisticsDeps.h"


#define PROPERTY_IN_UPDATES				"InUpdates"
#define PROPERTY_OUT_UPDATES				"OutUpdates"
#define PROPERTY_IN_TOTAL_MESSAGES				"InTotalMessages"
#define PROPERTY_OUT_TOTAL_MESSAGES				"OutTotalMessages"
#define PROPERTY_LAST_ERROR				"LastError"
#define PROPERTY_FSM_ESTABLISHED_TRANSITIONS				"FsmEstablishedTransitions"
#define PROPERTY_FSM_ESTABLISHED_TIME				"FsmEstablishedTime"
#define PROPERTY_IN_UPDATE_ELAPSED_TIME				"InUpdateElapsedTime"


class UNIX_BGPEndpointStatistics :
	public CIM_StatisticalData
{
public:

	UNIX_BGPEndpointStatistics();
	~UNIX_BGPEndpointStatistics();

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
	virtual Boolean getInUpdates(CIMProperty&) const;
	virtual Uint32 getInUpdates() const;
	virtual Boolean getOutUpdates(CIMProperty&) const;
	virtual Uint32 getOutUpdates() const;
	virtual Boolean getInTotalMessages(CIMProperty&) const;
	virtual Uint32 getInTotalMessages() const;
	virtual Boolean getOutTotalMessages(CIMProperty&) const;
	virtual Uint32 getOutTotalMessages() const;
	virtual Boolean getLastError(CIMProperty&) const;
	virtual Array<Uint8> getLastError() const;
	virtual Boolean getFsmEstablishedTransitions(CIMProperty&) const;
	virtual Uint32 getFsmEstablishedTransitions() const;
	virtual Boolean getFsmEstablishedTime(CIMProperty&) const;
	virtual Uint32 getFsmEstablishedTime() const;
	virtual Boolean getInUpdateElapsedTime(CIMProperty&) const;
	virtual Uint32 getInUpdateElapsedTime() const;

private:
	CIMName currentScope;

#	include "UNIX_BGPEndpointStatisticsPrivate.h"


};

#endif /* UNIX_BGPENDPOINTSTATISTICS */
