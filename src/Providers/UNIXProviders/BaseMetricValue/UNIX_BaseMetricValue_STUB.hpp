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


UNIX_BaseMetricValue::UNIX_BaseMetricValue(void)
{
}

UNIX_BaseMetricValue::~UNIX_BaseMetricValue(void)
{
}


Boolean UNIX_BaseMetricValue::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BaseMetricValue::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_BaseMetricValue::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BaseMetricValue::getCaption() const
{
	return String ("");
}

Boolean UNIX_BaseMetricValue::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BaseMetricValue::getDescription() const
{
	return String ("");
}

Boolean UNIX_BaseMetricValue::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BaseMetricValue::getElementName() const
{
	return String("BaseMetricValue");
}

Boolean UNIX_BaseMetricValue::getMetricDefinitionId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_METRIC_DEFINITION_ID, getMetricDefinitionId());
	return true;
}

String UNIX_BaseMetricValue::getMetricDefinitionId() const
{
	return String ("");
}

Boolean UNIX_BaseMetricValue::getMeasuredElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEASURED_ELEMENT_NAME, getMeasuredElementName());
	return true;
}

String UNIX_BaseMetricValue::getMeasuredElementName() const
{
	return String ("");
}

Boolean UNIX_BaseMetricValue::getTimeStamp(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_STAMP, getTimeStamp());
	return true;
}

CIMDateTime UNIX_BaseMetricValue::getTimeStamp() const
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

Boolean UNIX_BaseMetricValue::getDuration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DURATION, getDuration());
	return true;
}

CIMDateTime UNIX_BaseMetricValue::getDuration() const
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

Boolean UNIX_BaseMetricValue::getMetricValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_METRIC_VALUE, getMetricValue());
	return true;
}

String UNIX_BaseMetricValue::getMetricValue() const
{
	return String ("");
}

Boolean UNIX_BaseMetricValue::getBreakdownDimension(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BREAKDOWN_DIMENSION, getBreakdownDimension());
	return true;
}

String UNIX_BaseMetricValue::getBreakdownDimension() const
{
	return String ("");
}

Boolean UNIX_BaseMetricValue::getBreakdownValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BREAKDOWN_VALUE, getBreakdownValue());
	return true;
}

String UNIX_BaseMetricValue::getBreakdownValue() const
{
	return String ("");
}

Boolean UNIX_BaseMetricValue::getVolatile(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VOLATILE, getVolatile());
	return true;
}

Boolean UNIX_BaseMetricValue::getVolatile() const
{
	return Boolean(false);
}



Boolean UNIX_BaseMetricValue::initialize()
{
	return false;
}

Boolean UNIX_BaseMetricValue::load(int &pIndex)
{
	return false;
}

Boolean UNIX_BaseMetricValue::finalize()
{
	return false;
}

Boolean UNIX_BaseMetricValue::find(Array<CIMKeyBinding> &kbArray)
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
