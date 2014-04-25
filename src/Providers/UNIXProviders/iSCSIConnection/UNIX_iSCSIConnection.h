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

#ifndef __UNIX_ISCSICONNECTION_H
#define __UNIX_ISCSICONNECTION_H


#include "CIM_NetworkPipe.h"

#include "UNIX_iSCSIConnectionDeps.h"


#define PROPERTY_CONNECTION_ID				"ConnectionID"
#define PROPERTY_MAX_RECEIVE_DATA_SEGMENT_LENGTH				"MaxReceiveDataSegmentLength"
#define PROPERTY_MAX_TRANSMIT_DATA_SEGMENT_LENGTH				"MaxTransmitDataSegmentLength"
#define PROPERTY_HEADER_DIGEST_METHOD				"HeaderDigestMethod"
#define PROPERTY_OTHER_HEADER_DIGEST_METHOD				"OtherHeaderDigestMethod"
#define PROPERTY_DATA_DIGEST_METHOD				"DataDigestMethod"
#define PROPERTY_OTHER_DATA_DIGEST_METHOD				"OtherDataDigestMethod"
#define PROPERTY_RECEIVING_MARKERS				"ReceivingMarkers"
#define PROPERTY_SENDING_MARKERS				"SendingMarkers"
#define PROPERTY_ACTIVEI_S_CS_I_VERSION				"ActiveiSCSIVersion"
#define PROPERTY_AUTHENTICATION_METHOD_USED				"AuthenticationMethodUsed"
#define PROPERTY_MUTUAL_AUTHENTICATION				"MutualAuthentication"


class UNIX_iSCSIConnection :
	public CIM_NetworkPipe
{
public:

	UNIX_iSCSIConnection();
	~UNIX_iSCSIConnection();

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
	virtual Boolean getInstallDate(CIMProperty&) const;
	virtual CIMDateTime getInstallDate() const;
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual Boolean getOperationalStatus(CIMProperty&) const;
	virtual Array<Uint16> getOperationalStatus() const;
	virtual Boolean getStatusDescriptions(CIMProperty&) const;
	virtual Array<String> getStatusDescriptions() const;
	virtual Boolean getStatus(CIMProperty&) const;
	virtual String getStatus() const;
	virtual Boolean getHealthState(CIMProperty&) const;
	virtual Uint16 getHealthState() const;
	virtual Boolean getCommunicationStatus(CIMProperty&) const;
	virtual Uint16 getCommunicationStatus() const;
	virtual Boolean getDetailedStatus(CIMProperty&) const;
	virtual Uint16 getDetailedStatus() const;
	virtual Boolean getOperatingStatus(CIMProperty&) const;
	virtual Uint16 getOperatingStatus() const;
	virtual Boolean getPrimaryStatus(CIMProperty&) const;
	virtual Uint16 getPrimaryStatus() const;
	virtual Boolean getEnabledState(CIMProperty&) const;
	virtual Uint16 getEnabledState() const;
	virtual Boolean getOtherEnabledState(CIMProperty&) const;
	virtual String getOtherEnabledState() const;
	virtual Boolean getRequestedState(CIMProperty&) const;
	virtual Uint16 getRequestedState() const;
	virtual Boolean getEnabledDefault(CIMProperty&) const;
	virtual Uint16 getEnabledDefault() const;
	virtual Boolean getTimeOfLastStateChange(CIMProperty&) const;
	virtual CIMDateTime getTimeOfLastStateChange() const;
	virtual Boolean getAvailableRequestedStates(CIMProperty&) const;
	virtual Array<Uint16> getAvailableRequestedStates() const;
	virtual Boolean getTransitioningToState(CIMProperty&) const;
	virtual Uint16 getTransitioningToState() const;
	virtual Boolean getDirectionality(CIMProperty&) const;
	virtual Uint16 getDirectionality() const;
	virtual Boolean getAggregationBehavior(CIMProperty&) const;
	virtual Uint16 getAggregationBehavior() const;
	virtual Boolean getConnectionID(CIMProperty&) const;
	virtual Uint32 getConnectionID() const;
	virtual Boolean getMaxReceiveDataSegmentLength(CIMProperty&) const;
	virtual Uint32 getMaxReceiveDataSegmentLength() const;
	virtual Boolean getMaxTransmitDataSegmentLength(CIMProperty&) const;
	virtual Uint32 getMaxTransmitDataSegmentLength() const;
	virtual Boolean getHeaderDigestMethod(CIMProperty&) const;
	virtual Uint16 getHeaderDigestMethod() const;
	virtual Boolean getOtherHeaderDigestMethod(CIMProperty&) const;
	virtual String getOtherHeaderDigestMethod() const;
	virtual Boolean getDataDigestMethod(CIMProperty&) const;
	virtual Uint16 getDataDigestMethod() const;
	virtual Boolean getOtherDataDigestMethod(CIMProperty&) const;
	virtual String getOtherDataDigestMethod() const;
	virtual Boolean getReceivingMarkers(CIMProperty&) const;
	virtual Boolean getReceivingMarkers() const;
	virtual Boolean getSendingMarkers(CIMProperty&) const;
	virtual Boolean getSendingMarkers() const;
	virtual Boolean getActiveiSCSIVersion(CIMProperty&) const;
	virtual Boolean getActiveiSCSIVersion() const;
	virtual Boolean getAuthenticationMethodUsed(CIMProperty&) const;
	virtual Uint16 getAuthenticationMethodUsed() const;
	virtual Boolean getMutualAuthentication(CIMProperty&) const;
	virtual Boolean getMutualAuthentication() const;

private:
	CIMName currentScope;

#	include "UNIX_iSCSIConnectionPrivate.h"


};

#endif /* UNIX_ISCSICONNECTION */
