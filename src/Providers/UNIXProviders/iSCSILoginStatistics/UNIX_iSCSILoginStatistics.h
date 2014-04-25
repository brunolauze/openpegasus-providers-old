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

#ifndef __UNIX_ISCSILOGINSTATISTICS_H
#define __UNIX_ISCSILOGINSTATISTICS_H


#include "CIM_StatisticalData.h"

#include "UNIX_iSCSILoginStatisticsDeps.h"


#define PROPERTY_LOGIN_FAILURES				"LoginFailures"
#define PROPERTY_LAST_LOGIN_FAILURE_TIME				"LastLoginFailureTime"
#define PROPERTY_LAST_LOGIN_FAILURE_TYPE				"LastLoginFailureType"
#define PROPERTY_OTHER_LAST_LOGIN_FAILURE_TYPE				"OtherLastLoginFailureType"
#define PROPERTY_LAST_LOGIN_FAILURE_REMOTE_NODE_NAME				"LastLoginFailureRemoteNodeName"
#define PROPERTY_LAST_LOGIN_FAILURE_REMOTE_ADDRESS_TYPE				"LastLoginFailureRemoteAddressType"
#define PROPERTY_LAST_LOGIN_FAILURE_REMOTE_ADDRESS				"LastLoginFailureRemoteAddress"
#define PROPERTY_SUCCESSFUL_LOGINS				"SuccessfulLogins"
#define PROPERTY_NEGOTIATION_LOGIN_FAILURES				"NegotiationLoginFailures"
#define PROPERTY_AUTHENTICATION_LOGIN_FAILURES				"AuthenticationLoginFailures"
#define PROPERTY_AUTHORIZATION_LOGIN_FAILURES				"AuthorizationLoginFailures"
#define PROPERTY_LOGIN_REDIRECTS				"LoginRedirects"
#define PROPERTY_OTHER_LOGIN_FAILURES				"OtherLoginFailures"
#define PROPERTY_NORMAL_LOGOUTS				"NormalLogouts"
#define PROPERTY_OTHER_LOGOUTS				"OtherLogouts"


class UNIX_iSCSILoginStatistics :
	public CIM_StatisticalData
{
public:

	UNIX_iSCSILoginStatistics();
	~UNIX_iSCSILoginStatistics();

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
	virtual Boolean getStartStatisticTime(CIMProperty&) const;
	virtual CIMDateTime getStartStatisticTime() const;
	virtual Boolean getStatisticTime(CIMProperty&) const;
	virtual CIMDateTime getStatisticTime() const;
	virtual Boolean getSampleInterval(CIMProperty&) const;
	virtual CIMDateTime getSampleInterval() const;
	virtual Boolean getLoginFailures(CIMProperty&) const;
	virtual Uint64 getLoginFailures() const;
	virtual Boolean getLastLoginFailureTime(CIMProperty&) const;
	virtual CIMDateTime getLastLoginFailureTime() const;
	virtual Boolean getLastLoginFailureType(CIMProperty&) const;
	virtual Uint16 getLastLoginFailureType() const;
	virtual Boolean getOtherLastLoginFailureType(CIMProperty&) const;
	virtual String getOtherLastLoginFailureType() const;
	virtual Boolean getLastLoginFailureRemoteNodeName(CIMProperty&) const;
	virtual String getLastLoginFailureRemoteNodeName() const;
	virtual Boolean getLastLoginFailureRemoteAddressType(CIMProperty&) const;
	virtual Uint16 getLastLoginFailureRemoteAddressType() const;
	virtual Boolean getLastLoginFailureRemoteAddress(CIMProperty&) const;
	virtual Uint32 getLastLoginFailureRemoteAddress() const;
	virtual Boolean getSuccessfulLogins(CIMProperty&) const;
	virtual Uint64 getSuccessfulLogins() const;
	virtual Boolean getNegotiationLoginFailures(CIMProperty&) const;
	virtual Uint64 getNegotiationLoginFailures() const;
	virtual Boolean getAuthenticationLoginFailures(CIMProperty&) const;
	virtual Uint64 getAuthenticationLoginFailures() const;
	virtual Boolean getAuthorizationLoginFailures(CIMProperty&) const;
	virtual Uint64 getAuthorizationLoginFailures() const;
	virtual Boolean getLoginRedirects(CIMProperty&) const;
	virtual Uint64 getLoginRedirects() const;
	virtual Boolean getOtherLoginFailures(CIMProperty&) const;
	virtual Uint64 getOtherLoginFailures() const;
	virtual Boolean getNormalLogouts(CIMProperty&) const;
	virtual Uint64 getNormalLogouts() const;
	virtual Boolean getOtherLogouts(CIMProperty&) const;
	virtual Uint64 getOtherLogouts() const;

private:
	CIMName currentScope;

#	include "UNIX_iSCSILoginStatisticsPrivate.h"


};

#endif /* UNIX_ISCSILOGINSTATISTICS */
