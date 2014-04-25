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

#ifndef __UNIX_EXTENDEDSTATICIPASSIGNMENTSETTINGDATA_H
#define __UNIX_EXTENDEDSTATICIPASSIGNMENTSETTINGDATA_H


#include "CIM_IPAssignmentSettingData.h"

#include "UNIX_ExtendedStaticIPAssignmentSettingDataDeps.h"


#define PROPERTY_I_P_ADDRESSES				"IPAddresses"
#define PROPERTY_I_PV_6_SUBNET_PREFIX_LENGTHS				"IPv6SubnetPrefixLengths"
#define PROPERTY_SUBNET_MASKS				"SubnetMasks"
#define PROPERTY_GATEWAY_ADDRESSES				"GatewayAddresses"


class UNIX_ExtendedStaticIPAssignmentSettingData :
	public CIM_IPAssignmentSettingData
{
public:

	UNIX_ExtendedStaticIPAssignmentSettingData();
	~UNIX_ExtendedStaticIPAssignmentSettingData();

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
	virtual Boolean getIPAddresses(CIMProperty&) const;
	virtual Array<String> getIPAddresses() const;
	virtual Boolean getIPv6SubnetPrefixLengths(CIMProperty&) const;
	virtual Array<Uint16> getIPv6SubnetPrefixLengths() const;
	virtual Boolean getSubnetMasks(CIMProperty&) const;
	virtual Array<String> getSubnetMasks() const;
	virtual Boolean getGatewayAddresses(CIMProperty&) const;
	virtual Array<String> getGatewayAddresses() const;

private:
	CIMName currentScope;

#	include "UNIX_ExtendedStaticIPAssignmentSettingDataPrivate.h"


};

#endif /* UNIX_EXTENDEDSTATICIPASSIGNMENTSETTINGDATA */
