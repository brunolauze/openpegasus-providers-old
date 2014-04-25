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


UNIX_AlertInstIndication::UNIX_AlertInstIndication(void)
{
}

UNIX_AlertInstIndication::~UNIX_AlertInstIndication(void)
{
}


Boolean UNIX_AlertInstIndication::getIndicationIdentifier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INDICATION_IDENTIFIER, getIndicationIdentifier());
	return true;
}

String UNIX_AlertInstIndication::getIndicationIdentifier() const
{
	return String ("");
}

Boolean UNIX_AlertInstIndication::getCorrelatedIndications(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CORRELATED_INDICATIONS, getCorrelatedIndications());
	return true;
}

Array<String> UNIX_AlertInstIndication::getCorrelatedIndications() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_AlertInstIndication::getIndicationTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INDICATION_TIME, getIndicationTime());
	return true;
}

CIMDateTime UNIX_AlertInstIndication::getIndicationTime() const
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

Boolean UNIX_AlertInstIndication::getPerceivedSeverity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERCEIVED_SEVERITY, getPerceivedSeverity());
	return true;
}

Uint16 UNIX_AlertInstIndication::getPerceivedSeverity() const
{
	return Uint16(0);
}

Boolean UNIX_AlertInstIndication::getOtherSeverity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SEVERITY, getOtherSeverity());
	return true;
}

String UNIX_AlertInstIndication::getOtherSeverity() const
{
	return String ("");
}

Boolean UNIX_AlertInstIndication::getIndicationFilterName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INDICATION_FILTER_NAME, getIndicationFilterName());
	return true;
}

String UNIX_AlertInstIndication::getIndicationFilterName() const
{
	return String ("");
}

Boolean UNIX_AlertInstIndication::getSequenceContext(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEQUENCE_CONTEXT, getSequenceContext());
	return true;
}

String UNIX_AlertInstIndication::getSequenceContext() const
{
	return String ("");
}

Boolean UNIX_AlertInstIndication::getSequenceNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEQUENCE_NUMBER, getSequenceNumber());
	return true;
}

Sint64 UNIX_AlertInstIndication::getSequenceNumber() const
{
	return Sint64(0);
}

Boolean UNIX_AlertInstIndication::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_AlertInstIndication::getDescription() const
{
	return String ("");
}

Boolean UNIX_AlertInstIndication::getAlertingManagedElement(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALERTING_MANAGED_ELEMENT, getAlertingManagedElement());
	return true;
}

String UNIX_AlertInstIndication::getAlertingManagedElement() const
{
	return String ("");
}

Boolean UNIX_AlertInstIndication::getAlertingElementFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALERTING_ELEMENT_FORMAT, getAlertingElementFormat());
	return true;
}

Uint16 UNIX_AlertInstIndication::getAlertingElementFormat() const
{
	return Uint16(0);
}

Boolean UNIX_AlertInstIndication::getOtherAlertingElementFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ALERTING_ELEMENT_FORMAT, getOtherAlertingElementFormat());
	return true;
}

String UNIX_AlertInstIndication::getOtherAlertingElementFormat() const
{
	return String ("");
}

Boolean UNIX_AlertInstIndication::getAlertType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALERT_TYPE, getAlertType());
	return true;
}

Uint16 UNIX_AlertInstIndication::getAlertType() const
{
	return Uint16(0);
}

Boolean UNIX_AlertInstIndication::getOtherAlertType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ALERT_TYPE, getOtherAlertType());
	return true;
}

String UNIX_AlertInstIndication::getOtherAlertType() const
{
	return String ("");
}

Boolean UNIX_AlertInstIndication::getProbableCause(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROBABLE_CAUSE, getProbableCause());
	return true;
}

Uint16 UNIX_AlertInstIndication::getProbableCause() const
{
	return Uint16(0);
}

Boolean UNIX_AlertInstIndication::getProbableCauseDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROBABLE_CAUSE_DESCRIPTION, getProbableCauseDescription());
	return true;
}

String UNIX_AlertInstIndication::getProbableCauseDescription() const
{
	return String ("");
}

Boolean UNIX_AlertInstIndication::getTrending(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRENDING, getTrending());
	return true;
}

Uint16 UNIX_AlertInstIndication::getTrending() const
{
	return Uint16(0);
}

Boolean UNIX_AlertInstIndication::getRecommendedActions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECOMMENDED_ACTIONS, getRecommendedActions());
	return true;
}

Array<String> UNIX_AlertInstIndication::getRecommendedActions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_AlertInstIndication::getEventID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EVENT_ID, getEventID());
	return true;
}

String UNIX_AlertInstIndication::getEventID() const
{
	return String ("");
}

Boolean UNIX_AlertInstIndication::getEventTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EVENT_TIME, getEventTime());
	return true;
}

CIMDateTime UNIX_AlertInstIndication::getEventTime() const
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

Boolean UNIX_AlertInstIndication::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_AlertInstIndication::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_AlertInstIndication::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_AlertInstIndication::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_AlertInstIndication::getProviderName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROVIDER_NAME, getProviderName());
	return true;
}

String UNIX_AlertInstIndication::getProviderName() const
{
	return String ("");
}

Boolean UNIX_AlertInstIndication::getMessage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MESSAGE, getMessage());
	return true;
}

String UNIX_AlertInstIndication::getMessage() const
{
	return String ("");
}

Boolean UNIX_AlertInstIndication::getMessageArguments(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MESSAGE_ARGUMENTS, getMessageArguments());
	return true;
}

Array<String> UNIX_AlertInstIndication::getMessageArguments() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_AlertInstIndication::getMessageID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MESSAGE_ID, getMessageID());
	return true;
}

String UNIX_AlertInstIndication::getMessageID() const
{
	return String ("");
}

Boolean UNIX_AlertInstIndication::getOwningEntity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OWNING_ENTITY, getOwningEntity());
	return true;
}

String UNIX_AlertInstIndication::getOwningEntity() const
{
	return String ("");
}

Boolean UNIX_AlertInstIndication::getIndObject(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IND_OBJECT, getIndObject());
	return true;
}

String UNIX_AlertInstIndication::getIndObject() const
{
	return String ("");
}



Boolean UNIX_AlertInstIndication::initialize()
{
	return false;
}

Boolean UNIX_AlertInstIndication::load(int &pIndex)
{
	return false;
}

Boolean UNIX_AlertInstIndication::finalize()
{
	return false;
}

Boolean UNIX_AlertInstIndication::find(Array<CIMKeyBinding> &kbArray)
{
	return true;
}
