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

#ifndef __UNIX_BLOCKSTATISTICSMANIFEST_H
#define __UNIX_BLOCKSTATISTICSMANIFEST_H


#include "CIM_ManagedElement.h"

#include "UNIX_BlockStatisticsManifestDeps.h"


#define PROPERTY_ELEMENT_TYPE				"ElementType"
#define PROPERTY_INCLUDE_START_STATISTIC_TIME				"IncludeStartStatisticTime"
#define PROPERTY_INCLUDE_STATISTIC_TIME				"IncludeStatisticTime"
#define PROPERTY_INCLUDE_TOTAL_I_OS				"IncludeTotalIOs"
#define PROPERTY_INCLUDE_K_BYTES_TRANSFERRED				"IncludeKBytesTransferred"
#define PROPERTY_INCLUDE_I_O_TIME_COUNTER				"IncludeIOTimeCounter"
#define PROPERTY_INCLUDE_READ_I_OS				"IncludeReadIOs"
#define PROPERTY_INCLUDE_READ_HIT_I_OS				"IncludeReadHitIOs"
#define PROPERTY_INCLUDE_READ_I_O_TIME_COUNTER				"IncludeReadIOTimeCounter"
#define PROPERTY_INCLUDE_READ_HIT_I_O_TIME_COUNTER				"IncludeReadHitIOTimeCounter"
#define PROPERTY_INCLUDE_K_BYTES_READ				"IncludeKBytesRead"
#define PROPERTY_INCLUDE_WRITE_I_OS				"IncludeWriteIOs"
#define PROPERTY_INCLUDE_WRITE_HIT_I_OS				"IncludeWriteHitIOs"
#define PROPERTY_INCLUDE_WRITE_I_O_TIME_COUNTER				"IncludeWriteIOTimeCounter"
#define PROPERTY_INCLUDE_WRITE_HIT_I_O_TIME_COUNTER				"IncludeWriteHitIOTimeCounter"
#define PROPERTY_INCLUDE_K_BYTES_WRITTEN				"IncludeKBytesWritten"
#define PROPERTY_INCLUDE_IDLE_TIME_COUNTER				"IncludeIdleTimeCounter"
#define PROPERTY_INCLUDE_MAINT_OP				"IncludeMaintOp"
#define PROPERTY_INCLUDE_MAINT_TIME_COUNTER				"IncludeMaintTimeCounter"


class UNIX_BlockStatisticsManifest :
	public CIM_ManagedElement
{
public:

	UNIX_BlockStatisticsManifest();
	~UNIX_BlockStatisticsManifest();

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
	virtual Boolean getElementType(CIMProperty&) const;
	virtual Uint16 getElementType() const;
	virtual Boolean getIncludeStartStatisticTime(CIMProperty&) const;
	virtual Boolean getIncludeStartStatisticTime() const;
	virtual Boolean getIncludeStatisticTime(CIMProperty&) const;
	virtual Boolean getIncludeStatisticTime() const;
	virtual Boolean getIncludeTotalIOs(CIMProperty&) const;
	virtual Boolean getIncludeTotalIOs() const;
	virtual Boolean getIncludeKBytesTransferred(CIMProperty&) const;
	virtual Boolean getIncludeKBytesTransferred() const;
	virtual Boolean getIncludeIOTimeCounter(CIMProperty&) const;
	virtual Boolean getIncludeIOTimeCounter() const;
	virtual Boolean getIncludeReadIOs(CIMProperty&) const;
	virtual Boolean getIncludeReadIOs() const;
	virtual Boolean getIncludeReadHitIOs(CIMProperty&) const;
	virtual Boolean getIncludeReadHitIOs() const;
	virtual Boolean getIncludeReadIOTimeCounter(CIMProperty&) const;
	virtual Boolean getIncludeReadIOTimeCounter() const;
	virtual Boolean getIncludeReadHitIOTimeCounter(CIMProperty&) const;
	virtual Boolean getIncludeReadHitIOTimeCounter() const;
	virtual Boolean getIncludeKBytesRead(CIMProperty&) const;
	virtual Boolean getIncludeKBytesRead() const;
	virtual Boolean getIncludeWriteIOs(CIMProperty&) const;
	virtual Boolean getIncludeWriteIOs() const;
	virtual Boolean getIncludeWriteHitIOs(CIMProperty&) const;
	virtual Boolean getIncludeWriteHitIOs() const;
	virtual Boolean getIncludeWriteIOTimeCounter(CIMProperty&) const;
	virtual Boolean getIncludeWriteIOTimeCounter() const;
	virtual Boolean getIncludeWriteHitIOTimeCounter(CIMProperty&) const;
	virtual Boolean getIncludeWriteHitIOTimeCounter() const;
	virtual Boolean getIncludeKBytesWritten(CIMProperty&) const;
	virtual Boolean getIncludeKBytesWritten() const;
	virtual Boolean getIncludeIdleTimeCounter(CIMProperty&) const;
	virtual Boolean getIncludeIdleTimeCounter() const;
	virtual Boolean getIncludeMaintOp(CIMProperty&) const;
	virtual Boolean getIncludeMaintOp() const;
	virtual Boolean getIncludeMaintTimeCounter(CIMProperty&) const;
	virtual Boolean getIncludeMaintTimeCounter() const;

private:
	CIMName currentScope;

#	include "UNIX_BlockStatisticsManifestPrivate.h"


};

#endif /* UNIX_BLOCKSTATISTICSMANIFEST */
