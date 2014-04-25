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

#ifndef __UNIX_WIFIENDPOINTSETTINGS_H
#define __UNIX_WIFIENDPOINTSETTINGS_H


#include "CIM_SettingData.h"

#include "UNIX_WiFiEndpointSettingsDeps.h"


#define PROPERTY_PRIORITY				"Priority"
#define PROPERTY_S_S_ID				"SSID"
#define PROPERTY_B_S_S_TYPE				"BSSType"
#define PROPERTY_ENCRYPTION_METHOD				"EncryptionMethod"
#define PROPERTY_OTHER_ENCRYPTION_METHOD				"OtherEncryptionMethod"
#define PROPERTY_AUTHENTICATION_METHOD				"AuthenticationMethod"
#define PROPERTY_OTHER_AUTHENTICATION_METHOD				"OtherAuthenticationMethod"
#define PROPERTY_KEYS				"Keys"
#define PROPERTY_KEY_INDEX				"KeyIndex"
#define PROPERTY_P_S_K_VALUE				"PSKValue"
#define PROPERTY_P_S_K_PASS_PHRASE				"PSKPassPhrase"


class UNIX_WiFiEndpointSettings :
	public CIM_SettingData
{
public:

	UNIX_WiFiEndpointSettings();
	~UNIX_WiFiEndpointSettings();

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
	virtual Boolean getChangeableType(CIMProperty&) const;
	virtual Uint16 getChangeableType() const;
	virtual Boolean getConfigurationName(CIMProperty&) const;
	virtual String getConfigurationName() const;
	virtual Boolean getPriority(CIMProperty&) const;
	virtual Uint8 getPriority() const;
	virtual Boolean getSSID(CIMProperty&) const;
	virtual String getSSID() const;
	virtual Boolean getBSSType(CIMProperty&) const;
	virtual Uint16 getBSSType() const;
	virtual Boolean getEncryptionMethod(CIMProperty&) const;
	virtual Uint16 getEncryptionMethod() const;
	virtual Boolean getOtherEncryptionMethod(CIMProperty&) const;
	virtual String getOtherEncryptionMethod() const;
	virtual Boolean getAuthenticationMethod(CIMProperty&) const;
	virtual Uint16 getAuthenticationMethod() const;
	virtual Boolean getOtherAuthenticationMethod(CIMProperty&) const;
	virtual String getOtherAuthenticationMethod() const;
	virtual Boolean getKeys(CIMProperty&) const;
	virtual Array<String> getKeys() const;
	virtual Boolean getKeyIndex(CIMProperty&) const;
	virtual Uint8 getKeyIndex() const;
	virtual Boolean getPSKValue(CIMProperty&) const;
	virtual Array<Uint8> getPSKValue() const;
	virtual Boolean getPSKPassPhrase(CIMProperty&) const;
	virtual String getPSKPassPhrase() const;

private:
	CIMName currentScope;

#	include "UNIX_WiFiEndpointSettingsPrivate.h"


};

#endif /* UNIX_WIFIENDPOINTSETTINGS */
