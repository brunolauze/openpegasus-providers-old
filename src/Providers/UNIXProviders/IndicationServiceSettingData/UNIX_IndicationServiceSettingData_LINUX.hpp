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


UNIX_IndicationServiceSettingData::UNIX_IndicationServiceSettingData(void)
{
}

UNIX_IndicationServiceSettingData::~UNIX_IndicationServiceSettingData(void)
{
}


Boolean UNIX_IndicationServiceSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_IndicationServiceSettingData::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_IndicationServiceSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_IndicationServiceSettingData::getCaption() const
{
	return String ("");
}

Boolean UNIX_IndicationServiceSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_IndicationServiceSettingData::getDescription() const
{
	return String ("");
}

Boolean UNIX_IndicationServiceSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_IndicationServiceSettingData::getElementName() const
{
	return String("IndicationServiceSettingData");
}

Boolean UNIX_IndicationServiceSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_IndicationServiceSettingData::getChangeableType() const
{
	return Uint16(0);
}

Boolean UNIX_IndicationServiceSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_IndicationServiceSettingData::getConfigurationName() const
{
	return String ("");
}

Boolean UNIX_IndicationServiceSettingData::getFilterCreationEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILTER_CREATION_ENABLED, getFilterCreationEnabled());
	return true;
}

Boolean UNIX_IndicationServiceSettingData::getFilterCreationEnabled() const
{
	return Boolean(false);
}

Boolean UNIX_IndicationServiceSettingData::getDeliveryRetryAttempts(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELIVERY_RETRY_ATTEMPTS, getDeliveryRetryAttempts());
	return true;
}

Uint16 UNIX_IndicationServiceSettingData::getDeliveryRetryAttempts() const
{
	return Uint16(0);
}

Boolean UNIX_IndicationServiceSettingData::getDeliveryRetryInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELIVERY_RETRY_INTERVAL, getDeliveryRetryInterval());
	return true;
}

Uint32 UNIX_IndicationServiceSettingData::getDeliveryRetryInterval() const
{
	return Uint32(0);
}

Boolean UNIX_IndicationServiceSettingData::getSubscriptionRemovalAction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBSCRIPTION_REMOVAL_ACTION, getSubscriptionRemovalAction());
	return true;
}

Uint16 UNIX_IndicationServiceSettingData::getSubscriptionRemovalAction() const
{
	return Uint16(0);
}

Boolean UNIX_IndicationServiceSettingData::getSubscriptionRemovalTimeInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBSCRIPTION_REMOVAL_TIME_INTERVAL, getSubscriptionRemovalTimeInterval());
	return true;
}

Uint32 UNIX_IndicationServiceSettingData::getSubscriptionRemovalTimeInterval() const
{
	return Uint32(0);
}



Boolean UNIX_IndicationServiceSettingData::initialize()
{
	return false;
}

Boolean UNIX_IndicationServiceSettingData::load(int &pIndex)
{
	return false;
}

Boolean UNIX_IndicationServiceSettingData::finalize()
{
	return false;
}

Boolean UNIX_IndicationServiceSettingData::find(Array<CIMKeyBinding> &kbArray)
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
