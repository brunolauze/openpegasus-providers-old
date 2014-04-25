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

#ifndef __UNIX_BIOMETRICAUTHENTICATION_H
#define __UNIX_BIOMETRICAUTHENTICATION_H


#include "CIM_AuthenticationCondition.h"

#include "UNIX_BiometricAuthenticationDeps.h"


#define PROPERTY_TYPE_OF_BIOMETRIC				"TypeOfBiometric"
#define PROPERTY_OTHER_BIOMETRIC				"OtherBiometric"
#define PROPERTY_PERSONAL_IDENTIFIER				"PersonalIdentifier"


class UNIX_BiometricAuthentication :
	public CIM_AuthenticationCondition
{
public:

	UNIX_BiometricAuthentication();
	~UNIX_BiometricAuthentication();

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
	virtual Boolean getCommonName(CIMProperty&) const;
	virtual String getCommonName() const;
	virtual Boolean getPolicyKeywords(CIMProperty&) const;
	virtual Array<String> getPolicyKeywords() const;
	virtual Boolean getSystemCreationClassName(CIMProperty&) const;
	virtual String getSystemCreationClassName() const;
	virtual Boolean getSystemName(CIMProperty&) const;
	virtual String getSystemName() const;
	virtual Boolean getPolicyRuleCreationClassName(CIMProperty&) const;
	virtual String getPolicyRuleCreationClassName() const;
	virtual Boolean getPolicyRuleName(CIMProperty&) const;
	virtual String getPolicyRuleName() const;
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual Boolean getPolicyConditionName(CIMProperty&) const;
	virtual String getPolicyConditionName() const;
	virtual Boolean getTypeOfBiometric(CIMProperty&) const;
	virtual Uint16 getTypeOfBiometric() const;
	virtual Boolean getOtherBiometric(CIMProperty&) const;
	virtual String getOtherBiometric() const;
	virtual Boolean getPersonalIdentifier(CIMProperty&) const;
	virtual String getPersonalIdentifier() const;

private:
	CIMName currentScope;

#	include "UNIX_BiometricAuthenticationPrivate.h"


};

#endif /* UNIX_BIOMETRICAUTHENTICATION */
