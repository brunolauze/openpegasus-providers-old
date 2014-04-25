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


UNIX_TimeZone::UNIX_TimeZone(void)
{
}

UNIX_TimeZone::~UNIX_TimeZone(void)
{
}


Boolean UNIX_TimeZone::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_TimeZone::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_TimeZone::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_TimeZone::getCaption() const
{
	return String ("");
}

Boolean UNIX_TimeZone::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_TimeZone::getDescription() const
{
	return String ("");
}

Boolean UNIX_TimeZone::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_TimeZone::getElementName() const
{
	return String("TimeZone");
}

Boolean UNIX_TimeZone::getSettingID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SETTING_ID, getSettingID());
	return true;
}

String UNIX_TimeZone::getSettingID() const
{
	return String ("");
}

Boolean UNIX_TimeZone::getTimeZoneID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_ZONE_ID, getTimeZoneID());
	return true;
}

String UNIX_TimeZone::getTimeZoneID() const
{
	return String ("");
}

Boolean UNIX_TimeZone::getTimeZoneStartDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_ZONE_START_DATE, getTimeZoneStartDate());
	return true;
}

CIMDateTime UNIX_TimeZone::getTimeZoneStartDate() const
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

Boolean UNIX_TimeZone::getStandardName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STANDARD_NAME, getStandardName());
	return true;
}

String UNIX_TimeZone::getStandardName() const
{
	return String ("");
}

Boolean UNIX_TimeZone::getStandardCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STANDARD_CAPTION, getStandardCaption());
	return true;
}

String UNIX_TimeZone::getStandardCaption() const
{
	return String ("");
}

Boolean UNIX_TimeZone::getStandardOffset(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STANDARD_OFFSET, getStandardOffset());
	return true;
}

Sint32 UNIX_TimeZone::getStandardOffset() const
{
	return Sint32(0);
}

Boolean UNIX_TimeZone::getStandardMonth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STANDARD_MONTH, getStandardMonth());
	return true;
}

Uint8 UNIX_TimeZone::getStandardMonth() const
{
	return Uint8(0);
}

Boolean UNIX_TimeZone::getStandardDay(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STANDARD_DAY, getStandardDay());
	return true;
}

Sint8 UNIX_TimeZone::getStandardDay() const
{
	return Sint8(0);
}

Boolean UNIX_TimeZone::getStandardDayOfWeek(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STANDARD_DAY_OF_WEEK, getStandardDayOfWeek());
	return true;
}

Sint8 UNIX_TimeZone::getStandardDayOfWeek() const
{
	return Sint8(0);
}

Boolean UNIX_TimeZone::getStandardStartInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STANDARD_START_INTERVAL, getStandardStartInterval());
	return true;
}

CIMDateTime UNIX_TimeZone::getStandardStartInterval() const
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

Boolean UNIX_TimeZone::getDaylightName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DAYLIGHT_NAME, getDaylightName());
	return true;
}

String UNIX_TimeZone::getDaylightName() const
{
	return String ("");
}

Boolean UNIX_TimeZone::getDaylightCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DAYLIGHT_CAPTION, getDaylightCaption());
	return true;
}

String UNIX_TimeZone::getDaylightCaption() const
{
	return String ("");
}

Boolean UNIX_TimeZone::getDaylightOffset(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DAYLIGHT_OFFSET, getDaylightOffset());
	return true;
}

Sint32 UNIX_TimeZone::getDaylightOffset() const
{
	return Sint32(0);
}

Boolean UNIX_TimeZone::getDaylightMonth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DAYLIGHT_MONTH, getDaylightMonth());
	return true;
}

Uint8 UNIX_TimeZone::getDaylightMonth() const
{
	return Uint8(0);
}

Boolean UNIX_TimeZone::getDaylightDay(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DAYLIGHT_DAY, getDaylightDay());
	return true;
}

Sint8 UNIX_TimeZone::getDaylightDay() const
{
	return Sint8(0);
}

Boolean UNIX_TimeZone::getDaylightDayOfWeek(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DAYLIGHT_DAY_OF_WEEK, getDaylightDayOfWeek());
	return true;
}

Sint8 UNIX_TimeZone::getDaylightDayOfWeek() const
{
	return Sint8(0);
}

Boolean UNIX_TimeZone::getDaylightStartInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DAYLIGHT_START_INTERVAL, getDaylightStartInterval());
	return true;
}

CIMDateTime UNIX_TimeZone::getDaylightStartInterval() const
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



Boolean UNIX_TimeZone::initialize()
{
	return false;
}

Boolean UNIX_TimeZone::load(int &pIndex)
{
	return false;
}

Boolean UNIX_TimeZone::finalize()
{
	return false;
}

Boolean UNIX_TimeZone::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String timeZoneIDKey;
	String timeZoneStartDateKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_TIME_ZONE_ID)) timeZoneIDKey = kb.getValue();
		else if (keyName.equal(PROPERTY_TIME_ZONE_START_DATE)) timeZoneStartDateKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
