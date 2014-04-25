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


UNIX_StaticIPAssignmentSettingData::UNIX_StaticIPAssignmentSettingData(void)
{
}

UNIX_StaticIPAssignmentSettingData::~UNIX_StaticIPAssignmentSettingData(void)
{
}


Boolean UNIX_StaticIPAssignmentSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_StaticIPAssignmentSettingData::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_StaticIPAssignmentSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_StaticIPAssignmentSettingData::getCaption() const
{
	return String ("");
}

Boolean UNIX_StaticIPAssignmentSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_StaticIPAssignmentSettingData::getDescription() const
{
	return String ("");
}

Boolean UNIX_StaticIPAssignmentSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_StaticIPAssignmentSettingData::getElementName() const
{
	return String("StaticIPAssignmentSettingData");
}

Boolean UNIX_StaticIPAssignmentSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_StaticIPAssignmentSettingData::getChangeableType() const
{
	return Uint16(0);
}

Boolean UNIX_StaticIPAssignmentSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_StaticIPAssignmentSettingData::getConfigurationName() const
{
	return String ("");
}

Boolean UNIX_StaticIPAssignmentSettingData::getAddressOrigin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_ORIGIN, getAddressOrigin());
	return true;
}

Uint16 UNIX_StaticIPAssignmentSettingData::getAddressOrigin() const
{
	return Uint16(0);
}

Boolean UNIX_StaticIPAssignmentSettingData::getProtocolIFType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_I_F_TYPE, getProtocolIFType());
	return true;
}

Uint16 UNIX_StaticIPAssignmentSettingData::getProtocolIFType() const
{
	return Uint16(0);
}

Boolean UNIX_StaticIPAssignmentSettingData::getIPv4Address(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_I_PV_4_ADDRESS, getIPv4Address());
	return true;
}

String UNIX_StaticIPAssignmentSettingData::getIPv4Address() const
{
	return String ("");
}

Boolean UNIX_StaticIPAssignmentSettingData::getSubnetMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBNET_MASK, getSubnetMask());
	return true;
}

String UNIX_StaticIPAssignmentSettingData::getSubnetMask() const
{
	return String ("");
}

Boolean UNIX_StaticIPAssignmentSettingData::getGatewayIPv4Address(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GATEWAY_I_PV_4_ADDRESS, getGatewayIPv4Address());
	return true;
}

String UNIX_StaticIPAssignmentSettingData::getGatewayIPv4Address() const
{
	return String ("");
}

Boolean UNIX_StaticIPAssignmentSettingData::getGatewayIPv6Address(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GATEWAY_I_PV_6_ADDRESS, getGatewayIPv6Address());
	return true;
}

String UNIX_StaticIPAssignmentSettingData::getGatewayIPv6Address() const
{
	return String ("");
}

Boolean UNIX_StaticIPAssignmentSettingData::getIPv6Address(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_I_PV_6_ADDRESS, getIPv6Address());
	return true;
}

String UNIX_StaticIPAssignmentSettingData::getIPv6Address() const
{
	return String ("");
}

Boolean UNIX_StaticIPAssignmentSettingData::getIPv6AddressType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_I_PV_6_ADDRESS_TYPE, getIPv6AddressType());
	return true;
}

Uint16 UNIX_StaticIPAssignmentSettingData::getIPv6AddressType() const
{
	return Uint16(0);
}

Boolean UNIX_StaticIPAssignmentSettingData::getIPv6SubnetPrefixLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_I_PV_6_SUBNET_PREFIX_LENGTH, getIPv6SubnetPrefixLength());
	return true;
}

Uint16 UNIX_StaticIPAssignmentSettingData::getIPv6SubnetPrefixLength() const
{
	return Uint16(0);
}



Boolean UNIX_StaticIPAssignmentSettingData::initialize()
{
	return false;
}

Boolean UNIX_StaticIPAssignmentSettingData::load(int &pIndex)
{
	return false;
}

Boolean UNIX_StaticIPAssignmentSettingData::finalize()
{
	return false;
}

Boolean UNIX_StaticIPAssignmentSettingData::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String instanceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_INSTANCE_ID)) instanceIDKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
