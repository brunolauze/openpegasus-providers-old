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

#ifndef __UNIX_STATICIPASSIGNMENTSETTINGDATA_H
#define __UNIX_STATICIPASSIGNMENTSETTINGDATA_H


#include "CIM_IPAssignmentSettingData.h"

#include "UNIX_StaticIPAssignmentSettingDataDeps.h"


#define PROPERTY_I_PV_4_ADDRESS				"IPv4Address"
#define PROPERTY_SUBNET_MASK				"SubnetMask"
#define PROPERTY_GATEWAY_I_PV_4_ADDRESS				"GatewayIPv4Address"
#define PROPERTY_GATEWAY_I_PV_6_ADDRESS				"GatewayIPv6Address"
#define PROPERTY_I_PV_6_ADDRESS				"IPv6Address"
#define PROPERTY_I_PV_6_ADDRESS_TYPE				"IPv6AddressType"
#define PROPERTY_I_PV_6_SUBNET_PREFIX_LENGTH				"IPv6SubnetPrefixLength"


class UNIX_StaticIPAssignmentSettingData :
	public CIM_IPAssignmentSettingData
{
public:

	UNIX_StaticIPAssignmentSettingData();
	~UNIX_StaticIPAssignmentSettingData();

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
	virtual Boolean getAddressOrigin(CIMProperty&) const;
	virtual Uint16 getAddressOrigin() const;
	virtual Boolean getProtocolIFType(CIMProperty&) const;
	virtual Uint16 getProtocolIFType() const;
	virtual Boolean getIPv4Address(CIMProperty&) const;
	virtual String getIPv4Address() const;
	virtual Boolean getSubnetMask(CIMProperty&) const;
	virtual String getSubnetMask() const;
	virtual Boolean getGatewayIPv4Address(CIMProperty&) const;
	virtual String getGatewayIPv4Address() const;
	virtual Boolean getGatewayIPv6Address(CIMProperty&) const;
	virtual String getGatewayIPv6Address() const;
	virtual Boolean getIPv6Address(CIMProperty&) const;
	virtual String getIPv6Address() const;
	virtual Boolean getIPv6AddressType(CIMProperty&) const;
	virtual Uint16 getIPv6AddressType() const;
	virtual Boolean getIPv6SubnetPrefixLength(CIMProperty&) const;
	virtual Uint16 getIPv6SubnetPrefixLength() const;

private:
	CIMName currentScope;

#	include "UNIX_StaticIPAssignmentSettingDataPrivate.h"


};

#endif /* UNIX_STATICIPASSIGNMENTSETTINGDATA */
