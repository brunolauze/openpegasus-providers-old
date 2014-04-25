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

#ifndef __UNIX_ISCSISESSIONFAILURES_H
#define __UNIX_ISCSISESSIONFAILURES_H


#include "CIM_StatisticalData.h"

#include "UNIX_iSCSISessionFailuresDeps.h"


#define PROPERTY_SESSION_FAILURES				"SessionFailures"
#define PROPERTY_LAST_SESSION_FAILURE_TYPE				"LastSessionFailureType"
#define PROPERTY_OTHER_LAST_SESSION_FAILURE_TYPE				"OtherLastSessionFailureType"
#define PROPERTY_LAST_SESSION_FAILURE_REMOTE_NODE_NAME				"LastSessionFailureRemoteNodeName"
#define PROPERTY_SESSION_DIGEST_FAILURES				"SessionDigestFailures"
#define PROPERTY_SESSION_CONNECTION_TIMEOUT_FAILURES				"SessionConnectionTimeoutFailures"
#define PROPERTY_SESSION_FORMAT_ERRORS				"SessionFormatErrors"


class UNIX_iSCSISessionFailures :
	public CIM_StatisticalData
{
public:

	UNIX_iSCSISessionFailures();
	~UNIX_iSCSISessionFailures();

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
	virtual Boolean getSessionFailures(CIMProperty&) const;
	virtual Uint64 getSessionFailures() const;
	virtual Boolean getLastSessionFailureType(CIMProperty&) const;
	virtual Uint16 getLastSessionFailureType() const;
	virtual Boolean getOtherLastSessionFailureType(CIMProperty&) const;
	virtual String getOtherLastSessionFailureType() const;
	virtual Boolean getLastSessionFailureRemoteNodeName(CIMProperty&) const;
	virtual String getLastSessionFailureRemoteNodeName() const;
	virtual Boolean getSessionDigestFailures(CIMProperty&) const;
	virtual Uint64 getSessionDigestFailures() const;
	virtual Boolean getSessionConnectionTimeoutFailures(CIMProperty&) const;
	virtual Uint64 getSessionConnectionTimeoutFailures() const;
	virtual Boolean getSessionFormatErrors(CIMProperty&) const;
	virtual Uint64 getSessionFormatErrors() const;

private:
	CIMName currentScope;

#	include "UNIX_iSCSISessionFailuresPrivate.h"


};

#endif /* UNIX_ISCSISESSIONFAILURES */
