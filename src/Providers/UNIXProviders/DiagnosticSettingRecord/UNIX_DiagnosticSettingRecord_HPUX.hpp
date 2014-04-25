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


UNIX_DiagnosticSettingRecord::UNIX_DiagnosticSettingRecord(void)
{
}

UNIX_DiagnosticSettingRecord::~UNIX_DiagnosticSettingRecord(void)
{
}


Boolean UNIX_DiagnosticSettingRecord::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DiagnosticSettingRecord::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_DiagnosticSettingRecord::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DiagnosticSettingRecord::getCaption() const
{
	return String ("");
}

Boolean UNIX_DiagnosticSettingRecord::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DiagnosticSettingRecord::getDescription() const
{
	return String ("");
}

Boolean UNIX_DiagnosticSettingRecord::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DiagnosticSettingRecord::getElementName() const
{
	return String("DiagnosticSettingRecord");
}

Boolean UNIX_DiagnosticSettingRecord::getRecordFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECORD_FORMAT, getRecordFormat());
	return true;
}

String UNIX_DiagnosticSettingRecord::getRecordFormat() const
{
	return String ("");
}

Boolean UNIX_DiagnosticSettingRecord::getRecordData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECORD_DATA, getRecordData());
	return true;
}

String UNIX_DiagnosticSettingRecord::getRecordData() const
{
	return String ("");
}

Boolean UNIX_DiagnosticSettingRecord::getLocale(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCALE, getLocale());
	return true;
}

String UNIX_DiagnosticSettingRecord::getLocale() const
{
	return String ("");
}

Boolean UNIX_DiagnosticSettingRecord::getPerceivedSeverity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERCEIVED_SEVERITY, getPerceivedSeverity());
	return true;
}

Uint16 UNIX_DiagnosticSettingRecord::getPerceivedSeverity() const
{
	return Uint16(0);
}

Boolean UNIX_DiagnosticSettingRecord::getServiceName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_NAME, getServiceName());
	return true;
}

String UNIX_DiagnosticSettingRecord::getServiceName() const
{
	return String ("");
}

Boolean UNIX_DiagnosticSettingRecord::getManagedElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANAGED_ELEMENT_NAME, getManagedElementName());
	return true;
}

String UNIX_DiagnosticSettingRecord::getManagedElementName() const
{
	return String ("");
}

Boolean UNIX_DiagnosticSettingRecord::getExpirationDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXPIRATION_DATE, getExpirationDate());
	return true;
}

CIMDateTime UNIX_DiagnosticSettingRecord::getExpirationDate() const
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

Boolean UNIX_DiagnosticSettingRecord::getRecordType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECORD_TYPE, getRecordType());
	return true;
}

Uint16 UNIX_DiagnosticSettingRecord::getRecordType() const
{
	return Uint16(0);
}

Boolean UNIX_DiagnosticSettingRecord::getOtherRecordTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_RECORD_TYPE_DESCRIPTION, getOtherRecordTypeDescription());
	return true;
}

String UNIX_DiagnosticSettingRecord::getOtherRecordTypeDescription() const
{
	return String ("");
}

Boolean UNIX_DiagnosticSettingRecord::getCreationTimeStamp(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_TIME_STAMP, getCreationTimeStamp());
	return true;
}

CIMDateTime UNIX_DiagnosticSettingRecord::getCreationTimeStamp() const
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

Boolean UNIX_DiagnosticSettingRecord::getHaltOnError(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HALT_ON_ERROR, getHaltOnError());
	return true;
}

Boolean UNIX_DiagnosticSettingRecord::getHaltOnError() const
{
	return Boolean(false);
}

Boolean UNIX_DiagnosticSettingRecord::getQuickMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_QUICK_MODE, getQuickMode());
	return true;
}

Boolean UNIX_DiagnosticSettingRecord::getQuickMode() const
{
	return Boolean(false);
}

Boolean UNIX_DiagnosticSettingRecord::getPercentOfTestCoverage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERCENT_OF_TEST_COVERAGE, getPercentOfTestCoverage());
	return true;
}

Uint8 UNIX_DiagnosticSettingRecord::getPercentOfTestCoverage() const
{
	return Uint8(0);
}

Boolean UNIX_DiagnosticSettingRecord::getLoopControlParameter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOOP_CONTROL_PARAMETER, getLoopControlParameter());
	return true;
}

Array<String> UNIX_DiagnosticSettingRecord::getLoopControlParameter() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_DiagnosticSettingRecord::getLoopControl(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOOP_CONTROL, getLoopControl());
	return true;
}

Array<Uint16> UNIX_DiagnosticSettingRecord::getLoopControl() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DiagnosticSettingRecord::getOtherLoopControlDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOOP_CONTROL_DESCRIPTIONS, getOtherLoopControlDescriptions());
	return true;
}

Array<String> UNIX_DiagnosticSettingRecord::getOtherLoopControlDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_DiagnosticSettingRecord::getResultPersistence(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESULT_PERSISTENCE, getResultPersistence());
	return true;
}

Uint32 UNIX_DiagnosticSettingRecord::getResultPersistence() const
{
	return Uint32(0);
}

Boolean UNIX_DiagnosticSettingRecord::getLogOptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_OPTIONS, getLogOptions());
	return true;
}

Array<Uint16> UNIX_DiagnosticSettingRecord::getLogOptions() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DiagnosticSettingRecord::getOtherLogOptionsDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOG_OPTIONS_DESCRIPTIONS, getOtherLogOptionsDescriptions());
	return true;
}

Array<String> UNIX_DiagnosticSettingRecord::getOtherLogOptionsDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_DiagnosticSettingRecord::getLogStorage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_STORAGE, getLogStorage());
	return true;
}

Array<Uint16> UNIX_DiagnosticSettingRecord::getLogStorage() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DiagnosticSettingRecord::getOtherLogStorageDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOG_STORAGE_DESCRIPTIONS, getOtherLogStorageDescriptions());
	return true;
}

Array<String> UNIX_DiagnosticSettingRecord::getOtherLogStorageDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_DiagnosticSettingRecord::getVerbosityLevel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERBOSITY_LEVEL, getVerbosityLevel());
	return true;
}

Array<Uint16> UNIX_DiagnosticSettingRecord::getVerbosityLevel() const
{
	Array<Uint16> as;
	

	return as;

}



Boolean UNIX_DiagnosticSettingRecord::initialize()
{
	return false;
}

Boolean UNIX_DiagnosticSettingRecord::load(int &pIndex)
{
	return false;
}

Boolean UNIX_DiagnosticSettingRecord::finalize()
{
	return false;
}

Boolean UNIX_DiagnosticSettingRecord::find(Array<CIMKeyBinding> &kbArray)
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
