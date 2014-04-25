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


UNIX_IndicationServiceCapabilities::UNIX_IndicationServiceCapabilities(void)
{
}

UNIX_IndicationServiceCapabilities::~UNIX_IndicationServiceCapabilities(void)
{
}


Boolean UNIX_IndicationServiceCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_IndicationServiceCapabilities::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_IndicationServiceCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_IndicationServiceCapabilities::getCaption() const
{
	return String ("");
}

Boolean UNIX_IndicationServiceCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_IndicationServiceCapabilities::getDescription() const
{
	return String ("");
}

Boolean UNIX_IndicationServiceCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_IndicationServiceCapabilities::getElementName() const
{
	return String("IndicationServiceCapabilities");
}

Boolean UNIX_IndicationServiceCapabilities::getFilterCreationEnabledIsSettable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILTER_CREATION_ENABLED_IS_SETTABLE, getFilterCreationEnabledIsSettable());
	return true;
}

Boolean UNIX_IndicationServiceCapabilities::getFilterCreationEnabledIsSettable() const
{
	return Boolean(false);
}

Boolean UNIX_IndicationServiceCapabilities::getDeliveryRetryAttemptsIsSettable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELIVERY_RETRY_ATTEMPTS_IS_SETTABLE, getDeliveryRetryAttemptsIsSettable());
	return true;
}

Boolean UNIX_IndicationServiceCapabilities::getDeliveryRetryAttemptsIsSettable() const
{
	return Boolean(false);
}

Boolean UNIX_IndicationServiceCapabilities::getDeliveryRetryIntervalIsSettable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELIVERY_RETRY_INTERVAL_IS_SETTABLE, getDeliveryRetryIntervalIsSettable());
	return true;
}

Boolean UNIX_IndicationServiceCapabilities::getDeliveryRetryIntervalIsSettable() const
{
	return Boolean(false);
}

Boolean UNIX_IndicationServiceCapabilities::getSubscriptionRemovalActionIsSettable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBSCRIPTION_REMOVAL_ACTION_IS_SETTABLE, getSubscriptionRemovalActionIsSettable());
	return true;
}

Boolean UNIX_IndicationServiceCapabilities::getSubscriptionRemovalActionIsSettable() const
{
	return Boolean(false);
}

Boolean UNIX_IndicationServiceCapabilities::getSubscriptionRemovalTimeIntervalIsSettable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBSCRIPTION_REMOVAL_TIME_INTERVAL_IS_SETTABLE, getSubscriptionRemovalTimeIntervalIsSettable());
	return true;
}

Boolean UNIX_IndicationServiceCapabilities::getSubscriptionRemovalTimeIntervalIsSettable() const
{
	return Boolean(false);
}

Boolean UNIX_IndicationServiceCapabilities::getMaxListenerDestinations(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_LISTENER_DESTINATIONS, getMaxListenerDestinations());
	return true;
}

Uint32 UNIX_IndicationServiceCapabilities::getMaxListenerDestinations() const
{
	return Uint32(0);
}

Boolean UNIX_IndicationServiceCapabilities::getMaxActiveSubscriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ACTIVE_SUBSCRIPTIONS, getMaxActiveSubscriptions());
	return true;
}

Uint32 UNIX_IndicationServiceCapabilities::getMaxActiveSubscriptions() const
{
	return Uint32(0);
}

Boolean UNIX_IndicationServiceCapabilities::getSubscriptionsPersisted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBSCRIPTIONS_PERSISTED, getSubscriptionsPersisted());
	return true;
}

Boolean UNIX_IndicationServiceCapabilities::getSubscriptionsPersisted() const
{
	return Boolean(false);
}



Boolean UNIX_IndicationServiceCapabilities::initialize()
{
	return false;
}

Boolean UNIX_IndicationServiceCapabilities::load(int &pIndex)
{
	return false;
}

Boolean UNIX_IndicationServiceCapabilities::finalize()
{
	return false;
}

Boolean UNIX_IndicationServiceCapabilities::find(Array<CIMKeyBinding> &kbArray)
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
