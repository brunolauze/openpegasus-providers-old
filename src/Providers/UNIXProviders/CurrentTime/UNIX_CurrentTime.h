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

#ifndef __UNIX_CURRENTTIME_H
#define __UNIX_CURRENTTIME_H


#include "CIM_ClassBase.h"

#include "UNIX_CurrentTimeDeps.h"


#define PROPERTY_CS_CREATION_CLASS_NAME				"CSCreationClassName"
#define PROPERTY_CS_NAME				"CSName"
#define PROPERTY_CREATION_CLASS_NAME				"CreationClassName"
#define PROPERTY_DAY				"Day"
#define PROPERTY_DAY_OF_WEEK				"DayOfWeek"
#define PROPERTY_HOUR				"Hour"
#define PROPERTY_MILLISECONDS				"Milliseconds"
#define PROPERTY_MINUTE				"Minute"
#define PROPERTY_MONTH				"Month"
#define PROPERTY_QUARTER				"Quarter"
#define PROPERTY_SECOND				"Second"
#define PROPERTY_WEEK_IN_MONTH				"WeekInMonth"
#define PROPERTY_YEAR				"Year"
#define PROPERTY_TIME_ZONE_OFFSET				"TimeZoneOffset"


class UNIX_CurrentTime :
	public CIM_ClassBase
{
public:

	UNIX_CurrentTime();
	~UNIX_CurrentTime();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean finalize();
	virtual Boolean find(Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);

	virtual Boolean getCSCreationClassName(CIMProperty&) const;
	virtual String getCSCreationClassName() const;
	virtual Boolean getCSName(CIMProperty&) const;
	virtual String getCSName() const;
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual Boolean getDay(CIMProperty&) const;
	virtual Uint32 getDay() const;
	virtual Boolean getDayOfWeek(CIMProperty&) const;
	virtual Uint32 getDayOfWeek() const;
	virtual Boolean getHour(CIMProperty&) const;
	virtual Uint32 getHour() const;
	virtual Boolean getMilliseconds(CIMProperty&) const;
	virtual Uint32 getMilliseconds() const;
	virtual Boolean getMinute(CIMProperty&) const;
	virtual Uint32 getMinute() const;
	virtual Boolean getMonth(CIMProperty&) const;
	virtual Uint32 getMonth() const;
	virtual Boolean getQuarter(CIMProperty&) const;
	virtual Uint32 getQuarter() const;
	virtual Boolean getSecond(CIMProperty&) const;
	virtual Uint32 getSecond() const;
	virtual Boolean getWeekInMonth(CIMProperty&) const;
	virtual Uint32 getWeekInMonth() const;
	virtual Boolean getYear(CIMProperty&) const;
	virtual Uint32 getYear() const;
	virtual Boolean getTimeZoneOffset(CIMProperty&) const;
	virtual Uint32 getTimeZoneOffset() const;

private:
	CIMName currentScope;
	struct tm* currentclock;

#	include "UNIX_CurrentTimePrivate.h"


};

#endif /* UNIX_CURRENTTIME */
