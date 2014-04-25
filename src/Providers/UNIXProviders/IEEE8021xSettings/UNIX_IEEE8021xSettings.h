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

#ifndef __UNIX_IEEE8021XSETTINGS_H
#define __UNIX_IEEE8021XSETTINGS_H


#include "CIM_SettingData.h"

#include "UNIX_IEEE8021xSettingsDeps.h"


#define PROPERTY_AUTHENTICATION_PROTOCOL				"AuthenticationProtocol"
#define PROPERTY_ROAMING_IDENTITY				"RoamingIdentity"
#define PROPERTY_SERVER_CERTIFICATE_NAME				"ServerCertificateName"
#define PROPERTY_SERVER_CERTIFICATE_NAME_COMPARISON				"ServerCertificateNameComparison"
#define PROPERTY_USERNAME				"Username"
#define PROPERTY_PASSWORD				"Password"
#define PROPERTY_DOMAIN				"Domain"
#define PROPERTY_PROTECTED_ACCESS_CREDENTIAL				"ProtectedAccessCredential"
#define PROPERTY_P_A_C_PASSWORD				"PACPassword"
#define PROPERTY_P_S_K				"PSK"


class UNIX_IEEE8021xSettings :
	public CIM_SettingData
{
public:

	UNIX_IEEE8021xSettings();
	~UNIX_IEEE8021xSettings();

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
	virtual Boolean getAuthenticationProtocol(CIMProperty&) const;
	virtual Uint16 getAuthenticationProtocol() const;
	virtual Boolean getRoamingIdentity(CIMProperty&) const;
	virtual String getRoamingIdentity() const;
	virtual Boolean getServerCertificateName(CIMProperty&) const;
	virtual String getServerCertificateName() const;
	virtual Boolean getServerCertificateNameComparison(CIMProperty&) const;
	virtual Uint16 getServerCertificateNameComparison() const;
	virtual Boolean getUsername(CIMProperty&) const;
	virtual String getUsername() const;
	virtual Boolean getPassword(CIMProperty&) const;
	virtual String getPassword() const;
	virtual Boolean getDomain(CIMProperty&) const;
	virtual String getDomain() const;
	virtual Boolean getProtectedAccessCredential(CIMProperty&) const;
	virtual Array<Uint8> getProtectedAccessCredential() const;
	virtual Boolean getPACPassword(CIMProperty&) const;
	virtual String getPACPassword() const;
	virtual Boolean getPSK(CIMProperty&) const;
	virtual Array<Uint8> getPSK() const;

private:
	CIMName currentScope;

#	include "UNIX_IEEE8021xSettingsPrivate.h"


};

#endif /* UNIX_IEEE8021XSETTINGS */
