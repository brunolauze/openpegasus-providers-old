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


UNIX_LogRecord::UNIX_LogRecord(void)
{
}

UNIX_LogRecord::~UNIX_LogRecord(void)
{
}


Boolean UNIX_LogRecord::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_LogRecord::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_LogRecord::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_LogRecord::getCaption() const
{
	return String ("");
}

Boolean UNIX_LogRecord::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_LogRecord::getDescription() const
{
	return String ("");
}

Boolean UNIX_LogRecord::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_LogRecord::getElementName() const
{
	return String("LogRecord");
}

Boolean UNIX_LogRecord::getRecordFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECORD_FORMAT, getRecordFormat());
	return true;
}

String UNIX_LogRecord::getRecordFormat() const
{
	return String ("");
}

Boolean UNIX_LogRecord::getRecordData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECORD_DATA, getRecordData());
	return true;
}

String UNIX_LogRecord::getRecordData() const
{
	return String ("");
}

Boolean UNIX_LogRecord::getLocale(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCALE, getLocale());
	return true;
}

String UNIX_LogRecord::getLocale() const
{
	return String ("");
}

Boolean UNIX_LogRecord::getPerceivedSeverity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERCEIVED_SEVERITY, getPerceivedSeverity());
	return true;
}

Uint16 UNIX_LogRecord::getPerceivedSeverity() const
{
	return Uint16(0);
}

Boolean UNIX_LogRecord::getLogCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_CREATION_CLASS_NAME, getLogCreationClassName());
	return true;
}

String UNIX_LogRecord::getLogCreationClassName() const
{
	return String ("");
}

Boolean UNIX_LogRecord::getLogName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_NAME, getLogName());
	return true;
}

String UNIX_LogRecord::getLogName() const
{
	return String ("");
}

Boolean UNIX_LogRecord::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_LogRecord::getCreationClassName() const
{
	return String("UNIX_LogRecord");
}

Boolean UNIX_LogRecord::getRecordID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECORD_ID, getRecordID());
	return true;
}

String UNIX_LogRecord::getRecordID() const
{
	return String ("");
}

Boolean UNIX_LogRecord::getMessageTimestamp(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MESSAGE_TIMESTAMP, getMessageTimestamp());
	return true;
}

CIMDateTime UNIX_LogRecord::getMessageTimestamp() const
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

Boolean UNIX_LogRecord::getDataFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_FORMAT, getDataFormat());
	return true;
}

String UNIX_LogRecord::getDataFormat() const
{
	return String ("");
}



Boolean UNIX_LogRecord::initialize()
{
	return false;
}

Boolean UNIX_LogRecord::load(int &pIndex)
{
	return false;
}

Boolean UNIX_LogRecord::finalize()
{
	return false;
}

Boolean UNIX_LogRecord::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String logCreationClassNameKey;
	String logNameKey;
	String creationClassNameKey;
	String recordIDKey;
	String messageTimestampKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_LOG_CREATION_CLASS_NAME)) logCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_LOG_NAME)) logNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_RECORD_ID)) recordIDKey = kb.getValue();
		else if (keyName.equal(PROPERTY_MESSAGE_TIMESTAMP)) messageTimestampKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
