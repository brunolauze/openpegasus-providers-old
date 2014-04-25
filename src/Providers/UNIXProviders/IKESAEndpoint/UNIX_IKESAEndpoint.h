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

#ifndef __UNIX_IKESAENDPOINT_H
#define __UNIX_IKESAENDPOINT_H


#include "CIM_SecurityAssociationEndpoint.h"

#include "UNIX_IKESAEndpointDeps.h"


#define PROPERTY_INITIATOR_COOKIE				"InitiatorCookie"
#define PROPERTY_RESPONDER_COOKIE				"ResponderCookie"
#define PROPERTY_CIPHER_ALGORITHM				"CipherAlgorithm"
#define PROPERTY_OTHER_CIPHER_ALGORITHM				"OtherCipherAlgorithm"
#define PROPERTY_HASH_ALGORITHM				"HashAlgorithm"
#define PROPERTY_OTHER_HASH_ALGORITHM				"OtherHashAlgorithm"
#define PROPERTY_AUTHENTICATION_METHOD				"AuthenticationMethod"
#define PROPERTY_OTHER_AUTHENTICATION_METHOD				"OtherAuthenticationMethod"
#define PROPERTY_GROUP_ID				"GroupId"
#define PROPERTY_VENDOR_ID				"VendorID"


class UNIX_IKESAEndpoint :
	public CIM_SecurityAssociationEndpoint
{
public:

	UNIX_IKESAEndpoint();
	~UNIX_IKESAEndpoint();

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
	virtual Boolean getSystemCreationClassName(CIMProperty&) const;
	virtual String getSystemCreationClassName() const;
	virtual Boolean getSystemName(CIMProperty&) const;
	virtual String getSystemName() const;
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual Boolean getNameFormat(CIMProperty&) const;
	virtual String getNameFormat() const;
	virtual Boolean getProtocolType(CIMProperty&) const;
	virtual Uint16 getProtocolType() const;
	virtual Boolean getProtocolIFType(CIMProperty&) const;
	virtual Uint16 getProtocolIFType() const;
	virtual Boolean getOtherTypeDescription(CIMProperty&) const;
	virtual String getOtherTypeDescription() const;
	virtual Boolean getLifetimeSeconds(CIMProperty&) const;
	virtual Uint64 getLifetimeSeconds() const;
	virtual Boolean getRefreshThresholdSecondsPercentage(CIMProperty&) const;
	virtual Uint8 getRefreshThresholdSecondsPercentage() const;
	virtual Boolean getIdleDurationSeconds(CIMProperty&) const;
	virtual Uint64 getIdleDurationSeconds() const;
	virtual Boolean getLifetimeKilobytes(CIMProperty&) const;
	virtual Uint64 getLifetimeKilobytes() const;
	virtual Boolean getRefreshThresholdKbytesPercentage(CIMProperty&) const;
	virtual Uint8 getRefreshThresholdKbytesPercentage() const;
	virtual Boolean getPacketLoggingActive(CIMProperty&) const;
	virtual Boolean getPacketLoggingActive() const;
	virtual Boolean getInitiatorCookie(CIMProperty&) const;
	virtual Uint64 getInitiatorCookie() const;
	virtual Boolean getResponderCookie(CIMProperty&) const;
	virtual Uint64 getResponderCookie() const;
	virtual Boolean getCipherAlgorithm(CIMProperty&) const;
	virtual Uint16 getCipherAlgorithm() const;
	virtual Boolean getOtherCipherAlgorithm(CIMProperty&) const;
	virtual String getOtherCipherAlgorithm() const;
	virtual Boolean getHashAlgorithm(CIMProperty&) const;
	virtual Uint16 getHashAlgorithm() const;
	virtual Boolean getOtherHashAlgorithm(CIMProperty&) const;
	virtual String getOtherHashAlgorithm() const;
	virtual Boolean getAuthenticationMethod(CIMProperty&) const;
	virtual Uint16 getAuthenticationMethod() const;
	virtual Boolean getOtherAuthenticationMethod(CIMProperty&) const;
	virtual String getOtherAuthenticationMethod() const;
	virtual Boolean getGroupId(CIMProperty&) const;
	virtual Uint16 getGroupId() const;
	virtual Boolean getVendorID(CIMProperty&) const;
	virtual String getVendorID() const;

private:
	CIMName currentScope;

#	include "UNIX_IKESAEndpointPrivate.h"


};

#endif /* UNIX_IKESAENDPOINT */
