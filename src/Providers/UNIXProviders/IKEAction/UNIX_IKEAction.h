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

#ifndef __UNIX_IKEACTION_H
#define __UNIX_IKEACTION_H


#include "CIM_SANegotiationAction.h"

#include "UNIX_IKEActionDeps.h"


#define PROPERTY_EXCHANGE_MODE				"ExchangeMode"
#define PROPERTY_USE_I_K_E_IDENTITY_TYPE				"UseIKEIdentityType"
#define PROPERTY_VENDOR_ID				"VendorID"
#define PROPERTY_AGGRESSIVE_MODE_GROUP_ID				"AggressiveModeGroupID"


class UNIX_IKEAction :
	public CIM_SANegotiationAction
{
public:

	UNIX_IKEAction();
	~UNIX_IKEAction();

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
	virtual Boolean getPolicyActionName(CIMProperty&) const;
	virtual String getPolicyActionName() const;
	virtual Boolean getDoActionLogging(CIMProperty&) const;
	virtual Boolean getDoActionLogging() const;
	virtual Boolean getDoPacketLogging(CIMProperty&) const;
	virtual Boolean getDoPacketLogging() const;
	virtual Boolean getMinLifetimeSeconds(CIMProperty&) const;
	virtual Uint64 getMinLifetimeSeconds() const;
	virtual Boolean getIdleDurationSeconds(CIMProperty&) const;
	virtual Uint64 getIdleDurationSeconds() const;
	virtual Boolean getMinLifetimeKilobytes(CIMProperty&) const;
	virtual Uint64 getMinLifetimeKilobytes() const;
	virtual Boolean getExchangeMode(CIMProperty&) const;
	virtual Uint16 getExchangeMode() const;
	virtual Boolean getUseIKEIdentityType(CIMProperty&) const;
	virtual Uint16 getUseIKEIdentityType() const;
	virtual Boolean getVendorID(CIMProperty&) const;
	virtual String getVendorID() const;
	virtual Boolean getAggressiveModeGroupID(CIMProperty&) const;
	virtual Uint16 getAggressiveModeGroupID() const;

private:
	CIMName currentScope;

#	include "UNIX_IKEActionPrivate.h"


};

#endif /* UNIX_IKEACTION */
