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

#ifndef __UNIX_BLOCKSTORAGESTATISTICALDATA_H
#define __UNIX_BLOCKSTORAGESTATISTICALDATA_H


#include "CIM_StatisticalData.h"

#include "UNIX_BlockStorageStatisticalDataDeps.h"


#define PROPERTY_ELEMENT_TYPE				"ElementType"
#define PROPERTY_TOTAL_I_OS				"TotalIOs"
#define PROPERTY_K_BYTES_TRANSFERRED				"KBytesTransferred"
#define PROPERTY_K_BYTES_WRITTEN				"KBytesWritten"
#define PROPERTY_I_O_TIME_COUNTER				"IOTimeCounter"
#define PROPERTY_READ_I_OS				"ReadIOs"
#define PROPERTY_READ_HIT_I_OS				"ReadHitIOs"
#define PROPERTY_READ_I_O_TIME_COUNTER				"ReadIOTimeCounter"
#define PROPERTY_READ_HIT_I_O_TIME_COUNTER				"ReadHitIOTimeCounter"
#define PROPERTY_K_BYTES_READ				"KBytesRead"
#define PROPERTY_WRITE_I_OS				"WriteIOs"
#define PROPERTY_WRITE_HIT_I_OS				"WriteHitIOs"
#define PROPERTY_WRITE_I_O_TIME_COUNTER				"WriteIOTimeCounter"
#define PROPERTY_WRITE_HIT_I_O_TIME_COUNTER				"WriteHitIOTimeCounter"
#define PROPERTY_IDLE_TIME_COUNTER				"IdleTimeCounter"
#define PROPERTY_MAINT_OP				"MaintOp"
#define PROPERTY_MAINT_TIME_COUNTER				"MaintTimeCounter"


class UNIX_BlockStorageStatisticalData :
	public CIM_StatisticalData
{
public:

	UNIX_BlockStorageStatisticalData();
	~UNIX_BlockStorageStatisticalData();

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
	virtual Boolean getElementType(CIMProperty&) const;
	virtual Uint16 getElementType() const;
	virtual Boolean getTotalIOs(CIMProperty&) const;
	virtual Uint64 getTotalIOs() const;
	virtual Boolean getKBytesTransferred(CIMProperty&) const;
	virtual Uint64 getKBytesTransferred() const;
	virtual Boolean getKBytesWritten(CIMProperty&) const;
	virtual Uint64 getKBytesWritten() const;
	virtual Boolean getIOTimeCounter(CIMProperty&) const;
	virtual Uint64 getIOTimeCounter() const;
	virtual Boolean getReadIOs(CIMProperty&) const;
	virtual Uint64 getReadIOs() const;
	virtual Boolean getReadHitIOs(CIMProperty&) const;
	virtual Uint64 getReadHitIOs() const;
	virtual Boolean getReadIOTimeCounter(CIMProperty&) const;
	virtual Uint64 getReadIOTimeCounter() const;
	virtual Boolean getReadHitIOTimeCounter(CIMProperty&) const;
	virtual Uint64 getReadHitIOTimeCounter() const;
	virtual Boolean getKBytesRead(CIMProperty&) const;
	virtual Uint64 getKBytesRead() const;
	virtual Boolean getWriteIOs(CIMProperty&) const;
	virtual Uint64 getWriteIOs() const;
	virtual Boolean getWriteHitIOs(CIMProperty&) const;
	virtual Uint64 getWriteHitIOs() const;
	virtual Boolean getWriteIOTimeCounter(CIMProperty&) const;
	virtual Uint64 getWriteIOTimeCounter() const;
	virtual Boolean getWriteHitIOTimeCounter(CIMProperty&) const;
	virtual Uint64 getWriteHitIOTimeCounter() const;
	virtual Boolean getIdleTimeCounter(CIMProperty&) const;
	virtual Uint64 getIdleTimeCounter() const;
	virtual Boolean getMaintOp(CIMProperty&) const;
	virtual Uint64 getMaintOp() const;
	virtual Boolean getMaintTimeCounter(CIMProperty&) const;
	virtual Uint64 getMaintTimeCounter() const;

private:
	CIMName currentScope;

#	include "UNIX_BlockStorageStatisticalDataPrivate.h"


};

#endif /* UNIX_BLOCKSTORAGESTATISTICALDATA */
