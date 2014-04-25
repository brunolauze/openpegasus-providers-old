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

#ifndef __UNIX_INDICATIONSERVICECAPABILITIES_H
#define __UNIX_INDICATIONSERVICECAPABILITIES_H


#include "CIM_Capabilities.h"

#include "UNIX_IndicationServiceCapabilitiesDeps.h"


#define PROPERTY_FILTER_CREATION_ENABLED_IS_SETTABLE				"FilterCreationEnabledIsSettable"
#define PROPERTY_DELIVERY_RETRY_ATTEMPTS_IS_SETTABLE				"DeliveryRetryAttemptsIsSettable"
#define PROPERTY_DELIVERY_RETRY_INTERVAL_IS_SETTABLE				"DeliveryRetryIntervalIsSettable"
#define PROPERTY_SUBSCRIPTION_REMOVAL_ACTION_IS_SETTABLE				"SubscriptionRemovalActionIsSettable"
#define PROPERTY_SUBSCRIPTION_REMOVAL_TIME_INTERVAL_IS_SETTABLE				"SubscriptionRemovalTimeIntervalIsSettable"
#define PROPERTY_MAX_LISTENER_DESTINATIONS				"MaxListenerDestinations"
#define PROPERTY_MAX_ACTIVE_SUBSCRIPTIONS				"MaxActiveSubscriptions"
#define PROPERTY_SUBSCRIPTIONS_PERSISTED				"SubscriptionsPersisted"


class UNIX_IndicationServiceCapabilities :
	public CIM_Capabilities
{
public:

	UNIX_IndicationServiceCapabilities();
	~UNIX_IndicationServiceCapabilities();

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
	virtual Boolean getFilterCreationEnabledIsSettable(CIMProperty&) const;
	virtual Boolean getFilterCreationEnabledIsSettable() const;
	virtual Boolean getDeliveryRetryAttemptsIsSettable(CIMProperty&) const;
	virtual Boolean getDeliveryRetryAttemptsIsSettable() const;
	virtual Boolean getDeliveryRetryIntervalIsSettable(CIMProperty&) const;
	virtual Boolean getDeliveryRetryIntervalIsSettable() const;
	virtual Boolean getSubscriptionRemovalActionIsSettable(CIMProperty&) const;
	virtual Boolean getSubscriptionRemovalActionIsSettable() const;
	virtual Boolean getSubscriptionRemovalTimeIntervalIsSettable(CIMProperty&) const;
	virtual Boolean getSubscriptionRemovalTimeIntervalIsSettable() const;
	virtual Boolean getMaxListenerDestinations(CIMProperty&) const;
	virtual Uint32 getMaxListenerDestinations() const;
	virtual Boolean getMaxActiveSubscriptions(CIMProperty&) const;
	virtual Uint32 getMaxActiveSubscriptions() const;
	virtual Boolean getSubscriptionsPersisted(CIMProperty&) const;
	virtual Boolean getSubscriptionsPersisted() const;

private:
	CIMName currentScope;

#	include "UNIX_IndicationServiceCapabilitiesPrivate.h"


};

#endif /* UNIX_INDICATIONSERVICECAPABILITIES */
