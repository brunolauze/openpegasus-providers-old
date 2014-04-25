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

#ifndef __UNIX_MEDIAACCESSSTATDATA_H
#define __UNIX_MEDIAACCESSSTATDATA_H


#include "CIM_StatisticalData.h"

#include "UNIX_MediaAccessStatDataDeps.h"


#define PROPERTY_READ_OPERATIONS				"ReadOperations"
#define PROPERTY_UNRECOVERABLE_READ_OPERATIONS				"UnrecoverableReadOperations"
#define PROPERTY_WRITE_OPERATIONS				"WriteOperations"
#define PROPERTY_UNRECOVERABLE_WRITE_OPERATIONS				"UnrecoverableWriteOperations"
#define PROPERTY_RECOVERED_READ_OPERATIONS				"RecoveredReadOperations"
#define PROPERTY_RECOVERED_WRITE_OPERATIONS				"RecoveredWriteOperations"
#define PROPERTY_RECOVERED_SEEK_OPERATIONS				"RecoveredSeekOperations"
#define PROPERTY_UNRECOVERABLE_SEEK_OPERATIONS				"UnrecoverableSeekOperations"


class UNIX_MediaAccessStatData :
	public CIM_StatisticalData
{
public:

	UNIX_MediaAccessStatData();
	~UNIX_MediaAccessStatData();

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
	virtual Boolean getReadOperations(CIMProperty&) const;
	virtual Uint64 getReadOperations() const;
	virtual Boolean getUnrecoverableReadOperations(CIMProperty&) const;
	virtual Uint64 getUnrecoverableReadOperations() const;
	virtual Boolean getWriteOperations(CIMProperty&) const;
	virtual Uint64 getWriteOperations() const;
	virtual Boolean getUnrecoverableWriteOperations(CIMProperty&) const;
	virtual Uint64 getUnrecoverableWriteOperations() const;
	virtual Boolean getRecoveredReadOperations(CIMProperty&) const;
	virtual Uint64 getRecoveredReadOperations() const;
	virtual Boolean getRecoveredWriteOperations(CIMProperty&) const;
	virtual Uint64 getRecoveredWriteOperations() const;
	virtual Boolean getRecoveredSeekOperations(CIMProperty&) const;
	virtual Uint64 getRecoveredSeekOperations() const;
	virtual Boolean getUnrecoverableSeekOperations(CIMProperty&) const;
	virtual Uint64 getUnrecoverableSeekOperations() const;

private:
	CIMName currentScope;

#	include "UNIX_MediaAccessStatDataPrivate.h"


};

#endif /* UNIX_MEDIAACCESSSTATDATA */
