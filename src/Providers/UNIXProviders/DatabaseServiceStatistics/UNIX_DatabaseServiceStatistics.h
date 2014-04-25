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

#ifndef __UNIX_DATABASESERVICESTATISTICS_H
#define __UNIX_DATABASESERVICESTATISTICS_H


#include "CIM_StatisticalData.h"

#include "UNIX_DatabaseServiceStatisticsDeps.h"


#define PROPERTY_LAST_ACTIVITY				"LastActivity"
#define PROPERTY_ACTIVE_CONNECTIONS				"ActiveConnections"
#define PROPERTY_CUMULATIVE_CONNECTIONS				"CumulativeConnections"
#define PROPERTY_REJECTED_CONNECTIONS				"RejectedConnections"
#define PROPERTY_COMPLETED_TRANSACTIONS				"CompletedTransactions"
#define PROPERTY_DISK_READS				"DiskReads"
#define PROPERTY_DISK_WRITES				"DiskWrites"
#define PROPERTY_LOGICAL_READS				"LogicalReads"
#define PROPERTY_LOGICAL_WRITES				"LogicalWrites"
#define PROPERTY_PAGE_READS				"PageReads"
#define PROPERTY_PAGE_WRITES				"PageWrites"
#define PROPERTY_DISK_SPACE_UNAVAILABLE				"DiskSpaceUnavailable"
#define PROPERTY_REQUESTS_HANDLED				"RequestsHandled"
#define PROPERTY_REQUESTS_RECEIVED				"RequestsReceived"
#define PROPERTY_REQUESTS_SENT				"RequestsSent"
#define PROPERTY_HIGHWATER_CONNECTIONS				"HighwaterConnections"


class UNIX_DatabaseServiceStatistics :
	public CIM_StatisticalData
{
public:

	UNIX_DatabaseServiceStatistics();
	~UNIX_DatabaseServiceStatistics();

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
	virtual Boolean getLastActivity(CIMProperty&) const;
	virtual CIMDateTime getLastActivity() const;
	virtual Boolean getActiveConnections(CIMProperty&) const;
	virtual Uint64 getActiveConnections() const;
	virtual Boolean getCumulativeConnections(CIMProperty&) const;
	virtual Uint64 getCumulativeConnections() const;
	virtual Boolean getRejectedConnections(CIMProperty&) const;
	virtual Uint64 getRejectedConnections() const;
	virtual Boolean getCompletedTransactions(CIMProperty&) const;
	virtual Uint64 getCompletedTransactions() const;
	virtual Boolean getDiskReads(CIMProperty&) const;
	virtual Uint64 getDiskReads() const;
	virtual Boolean getDiskWrites(CIMProperty&) const;
	virtual Uint64 getDiskWrites() const;
	virtual Boolean getLogicalReads(CIMProperty&) const;
	virtual Uint64 getLogicalReads() const;
	virtual Boolean getLogicalWrites(CIMProperty&) const;
	virtual Uint64 getLogicalWrites() const;
	virtual Boolean getPageReads(CIMProperty&) const;
	virtual Uint64 getPageReads() const;
	virtual Boolean getPageWrites(CIMProperty&) const;
	virtual Uint64 getPageWrites() const;
	virtual Boolean getDiskSpaceUnavailable(CIMProperty&) const;
	virtual Uint64 getDiskSpaceUnavailable() const;
	virtual Boolean getRequestsHandled(CIMProperty&) const;
	virtual Uint64 getRequestsHandled() const;
	virtual Boolean getRequestsReceived(CIMProperty&) const;
	virtual Uint64 getRequestsReceived() const;
	virtual Boolean getRequestsSent(CIMProperty&) const;
	virtual Uint64 getRequestsSent() const;
	virtual Boolean getHighwaterConnections(CIMProperty&) const;
	virtual Uint64 getHighwaterConnections() const;

private:
	CIMName currentScope;

#	include "UNIX_DatabaseServiceStatisticsPrivate.h"


};

#endif /* UNIX_DATABASESERVICESTATISTICS */
