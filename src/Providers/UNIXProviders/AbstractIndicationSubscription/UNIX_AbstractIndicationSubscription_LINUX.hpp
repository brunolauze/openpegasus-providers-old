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


UNIX_AbstractIndicationSubscription::UNIX_AbstractIndicationSubscription(void)
{
}

UNIX_AbstractIndicationSubscription::~UNIX_AbstractIndicationSubscription(void)
{
}


Boolean UNIX_AbstractIndicationSubscription::getFilter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILTER, getFilter());
	return true;
}

CIMInstance UNIX_AbstractIndicationSubscription::getFilter() const
{
	return CIMInstance(CIMName("CIM_ManagedElement"));
}

Boolean UNIX_AbstractIndicationSubscription::getHandler(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HANDLER, getHandler());
	return true;
}

CIMInstance UNIX_AbstractIndicationSubscription::getHandler() const
{
	return CIMInstance(CIMName("CIM_ManagedElement"));
}

Boolean UNIX_AbstractIndicationSubscription::getOnFatalErrorPolicy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ON_FATAL_ERROR_POLICY, getOnFatalErrorPolicy());
	return true;
}

Uint16 UNIX_AbstractIndicationSubscription::getOnFatalErrorPolicy() const
{
	return Uint16(0);
}

Boolean UNIX_AbstractIndicationSubscription::getOtherOnFatalErrorPolicy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ON_FATAL_ERROR_POLICY, getOtherOnFatalErrorPolicy());
	return true;
}

String UNIX_AbstractIndicationSubscription::getOtherOnFatalErrorPolicy() const
{
	return String ("");
}

Boolean UNIX_AbstractIndicationSubscription::getFailureTriggerTimeInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FAILURE_TRIGGER_TIME_INTERVAL, getFailureTriggerTimeInterval());
	return true;
}

Uint64 UNIX_AbstractIndicationSubscription::getFailureTriggerTimeInterval() const
{
	return Uint64(0);
}

Boolean UNIX_AbstractIndicationSubscription::getSubscriptionState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBSCRIPTION_STATE, getSubscriptionState());
	return true;
}

Uint16 UNIX_AbstractIndicationSubscription::getSubscriptionState() const
{
	return Uint16(0);
}

Boolean UNIX_AbstractIndicationSubscription::getOtherSubscriptionState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUBSCRIPTION_STATE, getOtherSubscriptionState());
	return true;
}

String UNIX_AbstractIndicationSubscription::getOtherSubscriptionState() const
{
	return String ("");
}

Boolean UNIX_AbstractIndicationSubscription::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_AbstractIndicationSubscription::getTimeOfLastStateChange() const
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

Boolean UNIX_AbstractIndicationSubscription::getSubscriptionDuration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBSCRIPTION_DURATION, getSubscriptionDuration());
	return true;
}

Uint64 UNIX_AbstractIndicationSubscription::getSubscriptionDuration() const
{
	return Uint64(0);
}

Boolean UNIX_AbstractIndicationSubscription::getSubscriptionStartTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBSCRIPTION_START_TIME, getSubscriptionStartTime());
	return true;
}

CIMDateTime UNIX_AbstractIndicationSubscription::getSubscriptionStartTime() const
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

Boolean UNIX_AbstractIndicationSubscription::getSubscriptionTimeRemaining(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBSCRIPTION_TIME_REMAINING, getSubscriptionTimeRemaining());
	return true;
}

Uint64 UNIX_AbstractIndicationSubscription::getSubscriptionTimeRemaining() const
{
	return Uint64(0);
}

Boolean UNIX_AbstractIndicationSubscription::getRepeatNotificationPolicy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPEAT_NOTIFICATION_POLICY, getRepeatNotificationPolicy());
	return true;
}

Uint16 UNIX_AbstractIndicationSubscription::getRepeatNotificationPolicy() const
{
	return Uint16(0);
}

Boolean UNIX_AbstractIndicationSubscription::getOtherRepeatNotificationPolicy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_REPEAT_NOTIFICATION_POLICY, getOtherRepeatNotificationPolicy());
	return true;
}

String UNIX_AbstractIndicationSubscription::getOtherRepeatNotificationPolicy() const
{
	return String ("");
}

Boolean UNIX_AbstractIndicationSubscription::getRepeatNotificationInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPEAT_NOTIFICATION_INTERVAL, getRepeatNotificationInterval());
	return true;
}

Uint64 UNIX_AbstractIndicationSubscription::getRepeatNotificationInterval() const
{
	return Uint64(0);
}

Boolean UNIX_AbstractIndicationSubscription::getRepeatNotificationGap(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPEAT_NOTIFICATION_GAP, getRepeatNotificationGap());
	return true;
}

Uint64 UNIX_AbstractIndicationSubscription::getRepeatNotificationGap() const
{
	return Uint64(0);
}

Boolean UNIX_AbstractIndicationSubscription::getRepeatNotificationCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPEAT_NOTIFICATION_COUNT, getRepeatNotificationCount());
	return true;
}

Uint16 UNIX_AbstractIndicationSubscription::getRepeatNotificationCount() const
{
	return Uint16(0);
}

Boolean UNIX_AbstractIndicationSubscription::getSubscriptionInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBSCRIPTION_INFO, getSubscriptionInfo());
	return true;
}

String UNIX_AbstractIndicationSubscription::getSubscriptionInfo() const
{
	return String ("");
}



Boolean UNIX_AbstractIndicationSubscription::initialize()
{
	return false;
}

Boolean UNIX_AbstractIndicationSubscription::load(int &pIndex)
{
	return false;
}

Boolean UNIX_AbstractIndicationSubscription::finalize()
{
	return false;
}

Boolean UNIX_AbstractIndicationSubscription::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String filterKey;
	String handlerKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_FILTER)) filterKey = kb.getValue();
		else if (keyName.equal(PROPERTY_HANDLER)) handlerKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
