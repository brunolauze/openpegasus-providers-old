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

#ifndef __UNIX_ABSTRACTINDICATIONSUBSCRIPTION_H
#define __UNIX_ABSTRACTINDICATIONSUBSCRIPTION_H


#include "CIM_ClassBase.h"

#include "UNIX_AbstractIndicationSubscriptionDeps.h"


#define PROPERTY_FILTER				"Filter"
#define PROPERTY_HANDLER				"Handler"
#define PROPERTY_ON_FATAL_ERROR_POLICY				"OnFatalErrorPolicy"
#define PROPERTY_OTHER_ON_FATAL_ERROR_POLICY				"OtherOnFatalErrorPolicy"
#define PROPERTY_FAILURE_TRIGGER_TIME_INTERVAL				"FailureTriggerTimeInterval"
#define PROPERTY_SUBSCRIPTION_STATE				"SubscriptionState"
#define PROPERTY_OTHER_SUBSCRIPTION_STATE				"OtherSubscriptionState"
#define PROPERTY_TIME_OF_LAST_STATE_CHANGE				"TimeOfLastStateChange"
#define PROPERTY_SUBSCRIPTION_DURATION				"SubscriptionDuration"
#define PROPERTY_SUBSCRIPTION_START_TIME				"SubscriptionStartTime"
#define PROPERTY_SUBSCRIPTION_TIME_REMAINING				"SubscriptionTimeRemaining"
#define PROPERTY_REPEAT_NOTIFICATION_POLICY				"RepeatNotificationPolicy"
#define PROPERTY_OTHER_REPEAT_NOTIFICATION_POLICY				"OtherRepeatNotificationPolicy"
#define PROPERTY_REPEAT_NOTIFICATION_INTERVAL				"RepeatNotificationInterval"
#define PROPERTY_REPEAT_NOTIFICATION_GAP				"RepeatNotificationGap"
#define PROPERTY_REPEAT_NOTIFICATION_COUNT				"RepeatNotificationCount"
#define PROPERTY_SUBSCRIPTION_INFO				"SubscriptionInfo"


class UNIX_AbstractIndicationSubscription :
	public CIM_ClassBase
{
public:

	UNIX_AbstractIndicationSubscription();
	~UNIX_AbstractIndicationSubscription();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean finalize();
	virtual Boolean find(Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);

	virtual Boolean getFilter(CIMProperty&) const;
	virtual CIMInstance getFilter() const;
	virtual Boolean getHandler(CIMProperty&) const;
	virtual CIMInstance getHandler() const;
	virtual Boolean getOnFatalErrorPolicy(CIMProperty&) const;
	virtual Uint16 getOnFatalErrorPolicy() const;
	virtual Boolean getOtherOnFatalErrorPolicy(CIMProperty&) const;
	virtual String getOtherOnFatalErrorPolicy() const;
	virtual Boolean getFailureTriggerTimeInterval(CIMProperty&) const;
	virtual Uint64 getFailureTriggerTimeInterval() const;
	virtual Boolean getSubscriptionState(CIMProperty&) const;
	virtual Uint16 getSubscriptionState() const;
	virtual Boolean getOtherSubscriptionState(CIMProperty&) const;
	virtual String getOtherSubscriptionState() const;
	virtual Boolean getTimeOfLastStateChange(CIMProperty&) const;
	virtual CIMDateTime getTimeOfLastStateChange() const;
	virtual Boolean getSubscriptionDuration(CIMProperty&) const;
	virtual Uint64 getSubscriptionDuration() const;
	virtual Boolean getSubscriptionStartTime(CIMProperty&) const;
	virtual CIMDateTime getSubscriptionStartTime() const;
	virtual Boolean getSubscriptionTimeRemaining(CIMProperty&) const;
	virtual Uint64 getSubscriptionTimeRemaining() const;
	virtual Boolean getRepeatNotificationPolicy(CIMProperty&) const;
	virtual Uint16 getRepeatNotificationPolicy() const;
	virtual Boolean getOtherRepeatNotificationPolicy(CIMProperty&) const;
	virtual String getOtherRepeatNotificationPolicy() const;
	virtual Boolean getRepeatNotificationInterval(CIMProperty&) const;
	virtual Uint64 getRepeatNotificationInterval() const;
	virtual Boolean getRepeatNotificationGap(CIMProperty&) const;
	virtual Uint64 getRepeatNotificationGap() const;
	virtual Boolean getRepeatNotificationCount(CIMProperty&) const;
	virtual Uint16 getRepeatNotificationCount() const;
	virtual Boolean getSubscriptionInfo(CIMProperty&) const;
	virtual String getSubscriptionInfo() const;

private:
	CIMName currentScope;

#	include "UNIX_AbstractIndicationSubscriptionPrivate.h"


};

#endif /* UNIX_ABSTRACTINDICATIONSUBSCRIPTION */
