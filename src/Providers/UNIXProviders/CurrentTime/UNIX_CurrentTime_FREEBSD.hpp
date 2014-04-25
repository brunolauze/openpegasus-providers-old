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


UNIX_CurrentTime::UNIX_CurrentTime(void)
{
}

UNIX_CurrentTime::~UNIX_CurrentTime(void)
{
}


Boolean UNIX_CurrentTime::getCSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_CREATION_CLASS_NAME, getCSCreationClassName());
	return true;
}

String UNIX_CurrentTime::getCSCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_CurrentTime::getCSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_NAME, getCSName());
	return true;
}

String UNIX_CurrentTime::getCSName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_CurrentTime::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_CurrentTime::getCreationClassName() const
{
	return String("UNIX_CurrentTime");
}

Boolean UNIX_CurrentTime::getDay(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DAY, getDay());
	return true;
}

Uint32 UNIX_CurrentTime::getDay() const
{
	return Uint32(currentclock->tm_mday);
}

Boolean UNIX_CurrentTime::getDayOfWeek(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DAY_OF_WEEK, getDayOfWeek());
	return true;
}

Uint32 UNIX_CurrentTime::getDayOfWeek() const
{
	return Uint32(0);
}

Boolean UNIX_CurrentTime::getHour(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOUR, getHour());
	return true;
}

Uint32 UNIX_CurrentTime::getHour() const
{
	return Uint32(currentclock->tm_hour);
}

Boolean UNIX_CurrentTime::getMilliseconds(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MILLISECONDS, getMilliseconds());
	return true;
}

Uint32 UNIX_CurrentTime::getMilliseconds() const
{
	return Uint32(0);
}

Boolean UNIX_CurrentTime::getMinute(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MINUTE, getMinute());
	return true;
}

Uint32 UNIX_CurrentTime::getMinute() const
{
	return Uint32(currentclock->tm_min);
}

Boolean UNIX_CurrentTime::getMonth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MONTH, getMonth());
	return true;
}

Uint32 UNIX_CurrentTime::getMonth() const
{
	return Uint32(currentclock->tm_mon + 1);
}

Boolean UNIX_CurrentTime::getQuarter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_QUARTER, getQuarter());
	return true;
}

Uint32 UNIX_CurrentTime::getQuarter() const
{
	return Uint32(0);
}

Boolean UNIX_CurrentTime::getSecond(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SECOND, getSecond());
	return true;
}

Uint32 UNIX_CurrentTime::getSecond() const
{
	return Uint32(currentclock->tm_sec);
}

Boolean UNIX_CurrentTime::getWeekInMonth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WEEK_IN_MONTH, getWeekInMonth());
	return true;
}

Uint32 UNIX_CurrentTime::getWeekInMonth() const
{
	return Uint32(0);
}

Boolean UNIX_CurrentTime::getYear(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_YEAR, getYear());
	return true;
}

Uint32 UNIX_CurrentTime::getYear() const
{
	return Uint32(currentclock->tm_year + 1900);
}

Boolean UNIX_CurrentTime::getTimeZoneOffset(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_ZONE_OFFSET, getTimeZoneOffset());
	return true;
}

Uint32 UNIX_CurrentTime::getTimeZoneOffset() const
{
	return Uint32(currentclock->tm_gmtoff);
}


Boolean UNIX_CurrentTime::initialize()
{
	return true;
}

Boolean UNIX_CurrentTime::load(int &pIndex)
{
	if (pIndex == 0)
	{
		time_t val = time(NULL);
		currentclock = gmtime(&(val));	// Get the last modified time and put it into the time structure
		return true;
	}
	return false;
}

Boolean UNIX_CurrentTime::finalize()
{
	return true;
}

Boolean UNIX_CurrentTime::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String cSCreationClassNameKey;
	String cSNameKey;
	String creationClassNameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_CS_CREATION_CLASS_NAME)) cSCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CS_NAME)) cSNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
	}

	/* Return just the time */
	int pIndex = 0;
	load(pIndex);
	return true;
}
