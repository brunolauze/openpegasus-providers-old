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


UNIX_DiagnosticSettingDataRecord::UNIX_DiagnosticSettingDataRecord(void)
{
}

UNIX_DiagnosticSettingDataRecord::~UNIX_DiagnosticSettingDataRecord(void)
{
}


Boolean UNIX_DiagnosticSettingDataRecord::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DiagnosticSettingDataRecord::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_DiagnosticSettingDataRecord::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DiagnosticSettingDataRecord::getCaption() const
{
	return String ("");
}

Boolean UNIX_DiagnosticSettingDataRecord::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DiagnosticSettingDataRecord::getDescription() const
{
	return String ("");
}

Boolean UNIX_DiagnosticSettingDataRecord::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DiagnosticSettingDataRecord::getElementName() const
{
	return String("DiagnosticSettingDataRecord");
}

Boolean UNIX_DiagnosticSettingDataRecord::getRecordFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECORD_FORMAT, getRecordFormat());
	return true;
}

String UNIX_DiagnosticSettingDataRecord::getRecordFormat() const
{
	return String ("");
}

Boolean UNIX_DiagnosticSettingDataRecord::getRecordData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECORD_DATA, getRecordData());
	return true;
}

String UNIX_DiagnosticSettingDataRecord::getRecordData() const
{
	return String ("");
}

Boolean UNIX_DiagnosticSettingDataRecord::getLocale(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCALE, getLocale());
	return true;
}

String UNIX_DiagnosticSettingDataRecord::getLocale() const
{
	return String ("");
}

Boolean UNIX_DiagnosticSettingDataRecord::getPerceivedSeverity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERCEIVED_SEVERITY, getPerceivedSeverity());
	return true;
}

Uint16 UNIX_DiagnosticSettingDataRecord::getPerceivedSeverity() const
{
	return Uint16(0);
}

Boolean UNIX_DiagnosticSettingDataRecord::getServiceName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_NAME, getServiceName());
	return true;
}

String UNIX_DiagnosticSettingDataRecord::getServiceName() const
{
	return String ("");
}

Boolean UNIX_DiagnosticSettingDataRecord::getManagedElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANAGED_ELEMENT_NAME, getManagedElementName());
	return true;
}

String UNIX_DiagnosticSettingDataRecord::getManagedElementName() const
{
	return String ("");
}

Boolean UNIX_DiagnosticSettingDataRecord::getExpirationDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXPIRATION_DATE, getExpirationDate());
	return true;
}

CIMDateTime UNIX_DiagnosticSettingDataRecord::getExpirationDate() const
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

Boolean UNIX_DiagnosticSettingDataRecord::getRecordType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECORD_TYPE, getRecordType());
	return true;
}

Uint16 UNIX_DiagnosticSettingDataRecord::getRecordType() const
{
	return Uint16(0);
}

Boolean UNIX_DiagnosticSettingDataRecord::getOtherRecordTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_RECORD_TYPE_DESCRIPTION, getOtherRecordTypeDescription());
	return true;
}

String UNIX_DiagnosticSettingDataRecord::getOtherRecordTypeDescription() const
{
	return String ("");
}

Boolean UNIX_DiagnosticSettingDataRecord::getCreationTimeStamp(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_TIME_STAMP, getCreationTimeStamp());
	return true;
}

CIMDateTime UNIX_DiagnosticSettingDataRecord::getCreationTimeStamp() const
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

Boolean UNIX_DiagnosticSettingDataRecord::getSettings(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SETTINGS, getSettings());
	return true;
}

String UNIX_DiagnosticSettingDataRecord::getSettings() const
{
	return String ("");
}



Boolean UNIX_DiagnosticSettingDataRecord::initialize()
{
	return false;
}

Boolean UNIX_DiagnosticSettingDataRecord::load(int &pIndex)
{
	return false;
}

Boolean UNIX_DiagnosticSettingDataRecord::finalize()
{
	return false;
}

Boolean UNIX_DiagnosticSettingDataRecord::find(Array<CIMKeyBinding> &kbArray)
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
