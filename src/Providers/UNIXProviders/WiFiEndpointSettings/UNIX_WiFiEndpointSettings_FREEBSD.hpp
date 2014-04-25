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


UNIX_WiFiEndpointSettings::UNIX_WiFiEndpointSettings(void)
{
}

UNIX_WiFiEndpointSettings::~UNIX_WiFiEndpointSettings(void)
{
}


Boolean UNIX_WiFiEndpointSettings::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_WiFiEndpointSettings::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_WiFiEndpointSettings::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_WiFiEndpointSettings::getCaption() const
{
	return String ("");
}

Boolean UNIX_WiFiEndpointSettings::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_WiFiEndpointSettings::getDescription() const
{
	return String ("");
}

Boolean UNIX_WiFiEndpointSettings::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_WiFiEndpointSettings::getElementName() const
{
	return String("WiFiEndpointSettings");
}

Boolean UNIX_WiFiEndpointSettings::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_WiFiEndpointSettings::getChangeableType() const
{
	return Uint16(0);
}

Boolean UNIX_WiFiEndpointSettings::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_WiFiEndpointSettings::getConfigurationName() const
{
	return String ("");
}

Boolean UNIX_WiFiEndpointSettings::getPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIORITY, getPriority());
	return true;
}

Uint8 UNIX_WiFiEndpointSettings::getPriority() const
{
	return Uint8(0);
}

Boolean UNIX_WiFiEndpointSettings::getSSID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_S_ID, getSSID());
	return true;
}

String UNIX_WiFiEndpointSettings::getSSID() const
{
	return String ("");
}

Boolean UNIX_WiFiEndpointSettings::getBSSType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_B_S_S_TYPE, getBSSType());
	return true;
}

Uint16 UNIX_WiFiEndpointSettings::getBSSType() const
{
	return Uint16(0);
}

Boolean UNIX_WiFiEndpointSettings::getEncryptionMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENCRYPTION_METHOD, getEncryptionMethod());
	return true;
}

Uint16 UNIX_WiFiEndpointSettings::getEncryptionMethod() const
{
	return Uint16(0);
}

Boolean UNIX_WiFiEndpointSettings::getOtherEncryptionMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENCRYPTION_METHOD, getOtherEncryptionMethod());
	return true;
}

String UNIX_WiFiEndpointSettings::getOtherEncryptionMethod() const
{
	return String ("");
}

Boolean UNIX_WiFiEndpointSettings::getAuthenticationMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTHENTICATION_METHOD, getAuthenticationMethod());
	return true;
}

Uint16 UNIX_WiFiEndpointSettings::getAuthenticationMethod() const
{
	return Uint16(0);
}

Boolean UNIX_WiFiEndpointSettings::getOtherAuthenticationMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_AUTHENTICATION_METHOD, getOtherAuthenticationMethod());
	return true;
}

String UNIX_WiFiEndpointSettings::getOtherAuthenticationMethod() const
{
	return String ("");
}

Boolean UNIX_WiFiEndpointSettings::getKeys(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_KEYS, getKeys());
	return true;
}

Array<String> UNIX_WiFiEndpointSettings::getKeys() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_WiFiEndpointSettings::getKeyIndex(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_KEY_INDEX, getKeyIndex());
	return true;
}

Uint8 UNIX_WiFiEndpointSettings::getKeyIndex() const
{
	return Uint8(0);
}

Boolean UNIX_WiFiEndpointSettings::getPSKValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_S_K_VALUE, getPSKValue());
	return true;
}

Array<Uint8> UNIX_WiFiEndpointSettings::getPSKValue() const
{
	Array<Uint8> as;
	

	return as;

}

Boolean UNIX_WiFiEndpointSettings::getPSKPassPhrase(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_S_K_PASS_PHRASE, getPSKPassPhrase());
	return true;
}

String UNIX_WiFiEndpointSettings::getPSKPassPhrase() const
{
	return String ("");
}



Boolean UNIX_WiFiEndpointSettings::initialize()
{
	return false;
}

Boolean UNIX_WiFiEndpointSettings::load(int &pIndex)
{
	return false;
}

Boolean UNIX_WiFiEndpointSettings::finalize()
{
	return false;
}

Boolean UNIX_WiFiEndpointSettings::find(Array<CIMKeyBinding> &kbArray)
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
