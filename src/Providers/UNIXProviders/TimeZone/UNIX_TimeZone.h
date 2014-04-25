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

#ifndef __UNIX_TIMEZONE_H
#define __UNIX_TIMEZONE_H


#include "CIM_Setting.h"

#include "UNIX_TimeZoneDeps.h"


#define PROPERTY_TIME_ZONE_ID				"TimeZoneID"
#define PROPERTY_TIME_ZONE_START_DATE				"TimeZoneStartDate"
#define PROPERTY_STANDARD_NAME				"StandardName"
#define PROPERTY_STANDARD_CAPTION				"StandardCaption"
#define PROPERTY_STANDARD_OFFSET				"StandardOffset"
#define PROPERTY_STANDARD_MONTH				"StandardMonth"
#define PROPERTY_STANDARD_DAY				"StandardDay"
#define PROPERTY_STANDARD_DAY_OF_WEEK				"StandardDayOfWeek"
#define PROPERTY_STANDARD_START_INTERVAL				"StandardStartInterval"
#define PROPERTY_DAYLIGHT_NAME				"DaylightName"
#define PROPERTY_DAYLIGHT_CAPTION				"DaylightCaption"
#define PROPERTY_DAYLIGHT_OFFSET				"DaylightOffset"
#define PROPERTY_DAYLIGHT_MONTH				"DaylightMonth"
#define PROPERTY_DAYLIGHT_DAY				"DaylightDay"
#define PROPERTY_DAYLIGHT_DAY_OF_WEEK				"DaylightDayOfWeek"
#define PROPERTY_DAYLIGHT_START_INTERVAL				"DaylightStartInterval"


class UNIX_TimeZone :
	public CIM_Setting
{
public:

	UNIX_TimeZone();
	~UNIX_TimeZone();

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
	virtual Boolean getSettingID(CIMProperty&) const;
	virtual String getSettingID() const;
	virtual Boolean getTimeZoneID(CIMProperty&) const;
	virtual String getTimeZoneID() const;
	virtual Boolean getTimeZoneStartDate(CIMProperty&) const;
	virtual CIMDateTime getTimeZoneStartDate() const;
	virtual Boolean getStandardName(CIMProperty&) const;
	virtual String getStandardName() const;
	virtual Boolean getStandardCaption(CIMProperty&) const;
	virtual String getStandardCaption() const;
	virtual Boolean getStandardOffset(CIMProperty&) const;
	virtual Sint32 getStandardOffset() const;
	virtual Boolean getStandardMonth(CIMProperty&) const;
	virtual Uint8 getStandardMonth() const;
	virtual Boolean getStandardDay(CIMProperty&) const;
	virtual Sint8 getStandardDay() const;
	virtual Boolean getStandardDayOfWeek(CIMProperty&) const;
	virtual Sint8 getStandardDayOfWeek() const;
	virtual Boolean getStandardStartInterval(CIMProperty&) const;
	virtual CIMDateTime getStandardStartInterval() const;
	virtual Boolean getDaylightName(CIMProperty&) const;
	virtual String getDaylightName() const;
	virtual Boolean getDaylightCaption(CIMProperty&) const;
	virtual String getDaylightCaption() const;
	virtual Boolean getDaylightOffset(CIMProperty&) const;
	virtual Sint32 getDaylightOffset() const;
	virtual Boolean getDaylightMonth(CIMProperty&) const;
	virtual Uint8 getDaylightMonth() const;
	virtual Boolean getDaylightDay(CIMProperty&) const;
	virtual Sint8 getDaylightDay() const;
	virtual Boolean getDaylightDayOfWeek(CIMProperty&) const;
	virtual Sint8 getDaylightDayOfWeek() const;
	virtual Boolean getDaylightStartInterval(CIMProperty&) const;
	virtual CIMDateTime getDaylightStartInterval() const;

private:
	CIMName currentScope;

#	include "UNIX_TimeZonePrivate.h"


};

#endif /* UNIX_TIMEZONE */
