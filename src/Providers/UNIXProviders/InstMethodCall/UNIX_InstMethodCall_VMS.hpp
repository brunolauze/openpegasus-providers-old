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


UNIX_InstMethodCall::UNIX_InstMethodCall(void)
{
}

UNIX_InstMethodCall::~UNIX_InstMethodCall(void)
{
}


Boolean UNIX_InstMethodCall::getIndicationIdentifier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INDICATION_IDENTIFIER, getIndicationIdentifier());
	return true;
}

String UNIX_InstMethodCall::getIndicationIdentifier() const
{
	return String ("");
}

Boolean UNIX_InstMethodCall::getCorrelatedIndications(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CORRELATED_INDICATIONS, getCorrelatedIndications());
	return true;
}

Array<String> UNIX_InstMethodCall::getCorrelatedIndications() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_InstMethodCall::getIndicationTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INDICATION_TIME, getIndicationTime());
	return true;
}

CIMDateTime UNIX_InstMethodCall::getIndicationTime() const
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

Boolean UNIX_InstMethodCall::getPerceivedSeverity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERCEIVED_SEVERITY, getPerceivedSeverity());
	return true;
}

Uint16 UNIX_InstMethodCall::getPerceivedSeverity() const
{
	return Uint16(0);
}

Boolean UNIX_InstMethodCall::getOtherSeverity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SEVERITY, getOtherSeverity());
	return true;
}

String UNIX_InstMethodCall::getOtherSeverity() const
{
	return String ("");
}

Boolean UNIX_InstMethodCall::getIndicationFilterName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INDICATION_FILTER_NAME, getIndicationFilterName());
	return true;
}

String UNIX_InstMethodCall::getIndicationFilterName() const
{
	return String ("");
}

Boolean UNIX_InstMethodCall::getSequenceContext(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEQUENCE_CONTEXT, getSequenceContext());
	return true;
}

String UNIX_InstMethodCall::getSequenceContext() const
{
	return String ("");
}

Boolean UNIX_InstMethodCall::getSequenceNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEQUENCE_NUMBER, getSequenceNumber());
	return true;
}

Sint64 UNIX_InstMethodCall::getSequenceNumber() const
{
	return Sint64(0);
}

Boolean UNIX_InstMethodCall::getSourceInstance(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOURCE_INSTANCE, getSourceInstance());
	return true;
}

String UNIX_InstMethodCall::getSourceInstance() const
{
	return String ("");
}

Boolean UNIX_InstMethodCall::getSourceInstanceModelPath(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOURCE_INSTANCE_MODEL_PATH, getSourceInstanceModelPath());
	return true;
}

String UNIX_InstMethodCall::getSourceInstanceModelPath() const
{
	return String ("");
}

Boolean UNIX_InstMethodCall::getSourceInstanceHost(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOURCE_INSTANCE_HOST, getSourceInstanceHost());
	return true;
}

String UNIX_InstMethodCall::getSourceInstanceHost() const
{
	return String ("");
}

Boolean UNIX_InstMethodCall::getMethodName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_METHOD_NAME, getMethodName());
	return true;
}

String UNIX_InstMethodCall::getMethodName() const
{
	return String ("");
}

Boolean UNIX_InstMethodCall::getMethodParameters(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_METHOD_PARAMETERS, getMethodParameters());
	return true;
}

String UNIX_InstMethodCall::getMethodParameters() const
{
	return String ("");
}

Boolean UNIX_InstMethodCall::getReturnValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RETURN_VALUE, getReturnValue());
	return true;
}

String UNIX_InstMethodCall::getReturnValue() const
{
	return String ("");
}

Boolean UNIX_InstMethodCall::getPreCall(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRE_CALL, getPreCall());
	return true;
}

Boolean UNIX_InstMethodCall::getPreCall() const
{
	return Boolean(false);
}



Boolean UNIX_InstMethodCall::initialize()
{
	return false;
}

Boolean UNIX_InstMethodCall::load(int &pIndex)
{
	return false;
}

Boolean UNIX_InstMethodCall::finalize()
{
	return false;
}

Boolean UNIX_InstMethodCall::find(Array<CIMKeyBinding> &kbArray)
{
	return true;
}
