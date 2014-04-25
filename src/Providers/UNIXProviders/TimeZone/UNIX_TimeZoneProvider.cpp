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


#include "UNIX_TimeZoneProvider.h"

UNIX_TimeZoneProvider::UNIX_TimeZoneProvider()
{
}

UNIX_TimeZoneProvider::~UNIX_TimeZoneProvider()
{
}

CIMInstance UNIX_TimeZoneProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_TimeZone &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_TimeZone"),
			constructKeyBindings(_p)));

	//CIM_ManagedElement Properties
	if (_p.getInstanceID(p)) inst.addProperty(p);
	if (_p.getCaption(p)) inst.addProperty(p);
	if (_p.getDescription(p)) inst.addProperty(p);
	if (_p.getElementName(p)) inst.addProperty(p);

	//CIM_Setting Properties
	if (_p.getSettingID(p)) inst.addProperty(p);

	//CIM_TimeZone Properties
	if (_p.getTimeZoneID(p)) inst.addProperty(p);
	if (_p.getTimeZoneStartDate(p)) inst.addProperty(p);
	if (_p.getStandardName(p)) inst.addProperty(p);
	if (_p.getStandardCaption(p)) inst.addProperty(p);
	if (_p.getStandardOffset(p)) inst.addProperty(p);
	if (_p.getStandardMonth(p)) inst.addProperty(p);
	if (_p.getStandardDay(p)) inst.addProperty(p);
	if (_p.getStandardDayOfWeek(p)) inst.addProperty(p);
	if (_p.getStandardStartInterval(p)) inst.addProperty(p);
	if (_p.getDaylightName(p)) inst.addProperty(p);
	if (_p.getDaylightCaption(p)) inst.addProperty(p);
	if (_p.getDaylightOffset(p)) inst.addProperty(p);
	if (_p.getDaylightMonth(p)) inst.addProperty(p);
	if (_p.getDaylightDay(p)) inst.addProperty(p);
	if (_p.getDaylightDayOfWeek(p)) inst.addProperty(p);
	if (_p.getDaylightStartInterval(p)) inst.addProperty(p);


	return inst;
}

Array<CIMKeyBinding> UNIX_TimeZoneProvider::constructKeyBindings(const UNIX_TimeZone& _p)

{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_TIME_ZONE_ID,
		_p.getTimeZoneID(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_TIME_ZONE_START_DATE,
		CIMValue(_p.getTimeZoneStartDate()).toString(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_TimeZoneProvider
#define UNIX_PROVIDER_NAME "UNIX_TimeZoneProvider"
#define CLASS_IMPLEMENTATION UNIX_TimeZone
#define CLASS_IMPLEMENTATION_NAME "UNIX_TimeZone"
#define BASE_CLASS_NAME "CIM_TimeZone"
#define NUMKEYS_CLASS_IMPLEMENTATION 2


#include "UNIXProviderBase.hpp"

