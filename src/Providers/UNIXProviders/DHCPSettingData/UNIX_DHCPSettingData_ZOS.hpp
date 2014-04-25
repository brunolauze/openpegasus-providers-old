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


UNIX_DHCPSettingData::UNIX_DHCPSettingData(void)
{
}

UNIX_DHCPSettingData::~UNIX_DHCPSettingData(void)
{
}


Boolean UNIX_DHCPSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DHCPSettingData::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_DHCPSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DHCPSettingData::getCaption() const
{
	return String ("");
}

Boolean UNIX_DHCPSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DHCPSettingData::getDescription() const
{
	return String ("");
}

Boolean UNIX_DHCPSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DHCPSettingData::getElementName() const
{
	return String("DHCPSettingData");
}

Boolean UNIX_DHCPSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_DHCPSettingData::getChangeableType() const
{
	return Uint16(0);
}

Boolean UNIX_DHCPSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_DHCPSettingData::getConfigurationName() const
{
	return String ("");
}

Boolean UNIX_DHCPSettingData::getAddressOrigin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_ORIGIN, getAddressOrigin());
	return true;
}

Uint16 UNIX_DHCPSettingData::getAddressOrigin() const
{
	return Uint16(0);
}

Boolean UNIX_DHCPSettingData::getProtocolIFType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_I_F_TYPE, getProtocolIFType());
	return true;
}

Uint16 UNIX_DHCPSettingData::getProtocolIFType() const
{
	return Uint16(0);
}

Boolean UNIX_DHCPSettingData::getRequestedIPv4Address(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_I_PV_4_ADDRESS, getRequestedIPv4Address());
	return true;
}

String UNIX_DHCPSettingData::getRequestedIPv4Address() const
{
	return String ("");
}

Boolean UNIX_DHCPSettingData::getRequestedLeaseTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_LEASE_TIME, getRequestedLeaseTime());
	return true;
}

Uint32 UNIX_DHCPSettingData::getRequestedLeaseTime() const
{
	return Uint32(0);
}

Boolean UNIX_DHCPSettingData::getClientIdentifier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLIENT_IDENTIFIER, getClientIdentifier());
	return true;
}

String UNIX_DHCPSettingData::getClientIdentifier() const
{
	return String ("");
}

Boolean UNIX_DHCPSettingData::getVendorClassIdentifier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_CLASS_IDENTIFIER, getVendorClassIdentifier());
	return true;
}

String UNIX_DHCPSettingData::getVendorClassIdentifier() const
{
	return String ("");
}

Boolean UNIX_DHCPSettingData::getRequestedOptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_OPTIONS, getRequestedOptions());
	return true;
}

Array<Uint16> UNIX_DHCPSettingData::getRequestedOptions() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DHCPSettingData::getRequiredOptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUIRED_OPTIONS, getRequiredOptions());
	return true;
}

Array<Uint16> UNIX_DHCPSettingData::getRequiredOptions() const
{
	Array<Uint16> as;
	

	return as;

}



Boolean UNIX_DHCPSettingData::initialize()
{
	return false;
}

Boolean UNIX_DHCPSettingData::load(int &pIndex)
{
	return false;
}

Boolean UNIX_DHCPSettingData::finalize()
{
	return false;
}

Boolean UNIX_DHCPSettingData::find(Array<CIMKeyBinding> &kbArray)
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
