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

#ifndef __UNIX_LOGENTRY_H
#define __UNIX_LOGENTRY_H


#include "CIM_RecordForLog.h"

#include "UNIX_LogEntryDeps.h"


#define PROPERTY_LOG_INSTANCE_ID				"LogInstanceID"
#define PROPERTY_LOG_NAME				"LogName"
#define PROPERTY_RECORD_ID				"RecordID"
#define PROPERTY_CREATION_TIME_STAMP				"CreationTimeStamp"
#define PROPERTY_MESSAGE_ID				"MessageID"
#define PROPERTY_MESSAGE				"Message"
#define PROPERTY_MESSAGE_ARGUMENTS				"MessageArguments"
#define PROPERTY_OWNING_ENTITY				"OwningEntity"


class UNIX_LogEntry :
	public CIM_RecordForLog
{
public:

	UNIX_LogEntry();
	~UNIX_LogEntry();

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
	virtual Boolean getRecordFormat(CIMProperty&) const;
	virtual String getRecordFormat() const;
	virtual Boolean getRecordData(CIMProperty&) const;
	virtual String getRecordData() const;
	virtual Boolean getLocale(CIMProperty&) const;
	virtual String getLocale() const;
	virtual Boolean getPerceivedSeverity(CIMProperty&) const;
	virtual Uint16 getPerceivedSeverity() const;
	virtual Boolean getLogInstanceID(CIMProperty&) const;
	virtual String getLogInstanceID() const;
	virtual Boolean getLogName(CIMProperty&) const;
	virtual String getLogName() const;
	virtual Boolean getRecordID(CIMProperty&) const;
	virtual String getRecordID() const;
	virtual Boolean getCreationTimeStamp(CIMProperty&) const;
	virtual CIMDateTime getCreationTimeStamp() const;
	virtual Boolean getMessageID(CIMProperty&) const;
	virtual String getMessageID() const;
	virtual Boolean getMessage(CIMProperty&) const;
	virtual String getMessage() const;
	virtual Boolean getMessageArguments(CIMProperty&) const;
	virtual Array<String> getMessageArguments() const;
	virtual Boolean getOwningEntity(CIMProperty&) const;
	virtual String getOwningEntity() const;

private:
	CIMName currentScope;

#	include "UNIX_LogEntryPrivate.h"


};

#endif /* UNIX_LOGENTRY */
