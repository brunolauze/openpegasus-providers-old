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


UNIX_LogEntry::UNIX_LogEntry(void)
{
}

UNIX_LogEntry::~UNIX_LogEntry(void)
{
}


Boolean UNIX_LogEntry::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_LogEntry::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_LogEntry::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_LogEntry::getCaption() const
{
	return String ("");
}

Boolean UNIX_LogEntry::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_LogEntry::getDescription() const
{
	return String ("");
}

Boolean UNIX_LogEntry::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_LogEntry::getElementName() const
{
	return String("LogEntry");
}

Boolean UNIX_LogEntry::getRecordFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECORD_FORMAT, getRecordFormat());
	return true;
}

String UNIX_LogEntry::getRecordFormat() const
{
	return String ("");
}

Boolean UNIX_LogEntry::getRecordData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECORD_DATA, getRecordData());
	return true;
}

String UNIX_LogEntry::getRecordData() const
{
	return String ("");
}

Boolean UNIX_LogEntry::getLocale(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCALE, getLocale());
	return true;
}

String UNIX_LogEntry::getLocale() const
{
	return String ("");
}

Boolean UNIX_LogEntry::getPerceivedSeverity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERCEIVED_SEVERITY, getPerceivedSeverity());
	return true;
}

Uint16 UNIX_LogEntry::getPerceivedSeverity() const
{
	return Uint16(0);
}

Boolean UNIX_LogEntry::getLogInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_INSTANCE_ID, getLogInstanceID());
	return true;
}

String UNIX_LogEntry::getLogInstanceID() const
{
	return String ("");
}

Boolean UNIX_LogEntry::getLogName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_NAME, getLogName());
	return true;
}

String UNIX_LogEntry::getLogName() const
{
	return String ("");
}

Boolean UNIX_LogEntry::getRecordID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECORD_ID, getRecordID());
	return true;
}

String UNIX_LogEntry::getRecordID() const
{
	return String ("");
}

Boolean UNIX_LogEntry::getCreationTimeStamp(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_TIME_STAMP, getCreationTimeStamp());
	return true;
}

CIMDateTime UNIX_LogEntry::getCreationTimeStamp() const
{
	struct tm* clock;			// create a time structure
	time_t val = time(NULL);
	clock = gmtime(&(val));	// Get the last modified time and put it into the time structure
	return CIMDateTime(
		clock->tm_year + 1900,
		clock->tm_mon + 1,
		clock->tm_mday,
		clock->tm_hour,
		clock->tm_min,
		clock->tm_sec,
		0,0,
		clock->tm_gmtoff);
}

Boolean UNIX_LogEntry::getMessageID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MESSAGE_ID, getMessageID());
	return true;
}

String UNIX_LogEntry::getMessageID() const
{
	return String ("");
}

Boolean UNIX_LogEntry::getMessage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MESSAGE, getMessage());
	return true;
}

String UNIX_LogEntry::getMessage() const
{
	return String ("");
}

Boolean UNIX_LogEntry::getMessageArguments(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MESSAGE_ARGUMENTS, getMessageArguments());
	return true;
}

Array<String> UNIX_LogEntry::getMessageArguments() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_LogEntry::getOwningEntity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OWNING_ENTITY, getOwningEntity());
	return true;
}

String UNIX_LogEntry::getOwningEntity() const
{
	return String ("");
}



Boolean UNIX_LogEntry::initialize()
{
	return false;
}

Boolean UNIX_LogEntry::load(int &pIndex)
{
	return false;
}

Boolean UNIX_LogEntry::finalize()
{
	return false;
}

Boolean UNIX_LogEntry::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String instanceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_INSTANCE_ID)) instanceIDKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
