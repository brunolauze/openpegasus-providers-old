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

#ifndef __UNIX_IPPROTOCOLENDPOINT_H
#define __UNIX_IPPROTOCOLENDPOINT_H


#include "CIM_ProtocolEndpoint.h"

#include "UNIX_IPProtocolEndpointDeps.h"


#define PROPERTY_I_PV_4_ADDRESS				"IPv4Address"
#define PROPERTY_I_PV_6_ADDRESS				"IPv6Address"
#define PROPERTY_ADDRESS				"Address"
#define PROPERTY_SUBNET_MASK				"SubnetMask"
#define PROPERTY_PREFIX_LENGTH				"PrefixLength"
#define PROPERTY_ADDRESS_TYPE				"AddressType"
#define PROPERTY_I_P_VERSION_SUPPORT				"IPVersionSupport"
#define PROPERTY_ADDRESS_ORIGIN				"AddressOrigin"
#define PROPERTY_I_PV_6_ADDRESS_TYPE				"IPv6AddressType"
#define PROPERTY_I_PV_6_SUBNET_PREFIX_LENGTH				"IPv6SubnetPrefixLength"


class UNIX_IPProtocolEndpoint :
	public CIM_ProtocolEndpoint
{
public:

	UNIX_IPProtocolEndpoint();
	~UNIX_IPProtocolEndpoint();

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
	virtual Boolean getIPv4Address(CIMProperty&) const;
	virtual String getIPv4Address() const;
	virtual Boolean getIPv6Address(CIMProperty&) const;
	virtual String getIPv6Address() const;
	virtual Boolean getAddress(CIMProperty&) const;
	virtual String getAddress() const;
	virtual Boolean getSubnetMask(CIMProperty&) const;
	virtual String getSubnetMask() const;
	virtual Boolean getPrefixLength(CIMProperty&) const;
	virtual Uint8 getPrefixLength() const;
	virtual Boolean getAddressType(CIMProperty&) const;
	virtual Uint16 getAddressType() const;
	virtual Boolean getIPVersionSupport(CIMProperty&) const;
	virtual Uint16 getIPVersionSupport() const;
	virtual Boolean getAddressOrigin(CIMProperty&) const;
	virtual Uint16 getAddressOrigin() const;
	virtual Boolean getIPv6AddressType(CIMProperty&) const;
	virtual Uint16 getIPv6AddressType() const;
	virtual Boolean getIPv6SubnetPrefixLength(CIMProperty&) const;
	virtual Uint16 getIPv6SubnetPrefixLength() const;

private:
	CIMName currentScope;

#	include "UNIX_IPProtocolEndpointPrivate.h"


};

#endif /* UNIX_IPPROTOCOLENDPOINT */
