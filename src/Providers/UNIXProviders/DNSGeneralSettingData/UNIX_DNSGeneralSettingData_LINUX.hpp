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


UNIX_DNSGeneralSettingData::UNIX_DNSGeneralSettingData(void)
{
}

UNIX_DNSGeneralSettingData::~UNIX_DNSGeneralSettingData(void)
{
}


Boolean UNIX_DNSGeneralSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DNSGeneralSettingData::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_DNSGeneralSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DNSGeneralSettingData::getCaption() const
{
	return String ("");
}

Boolean UNIX_DNSGeneralSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DNSGeneralSettingData::getDescription() const
{
	return String ("");
}

Boolean UNIX_DNSGeneralSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DNSGeneralSettingData::getElementName() const
{
	return String("DNSGeneralSettingData");
}

Boolean UNIX_DNSGeneralSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_DNSGeneralSettingData::getChangeableType() const
{
	return Uint16(0);
}

Boolean UNIX_DNSGeneralSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_DNSGeneralSettingData::getConfigurationName() const
{
	return String ("");
}

Boolean UNIX_DNSGeneralSettingData::getAddressOrigin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_ORIGIN, getAddressOrigin());
	return true;
}

Uint16 UNIX_DNSGeneralSettingData::getAddressOrigin() const
{
	return Uint16(0);
}

Boolean UNIX_DNSGeneralSettingData::getProtocolIFType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_I_F_TYPE, getProtocolIFType());
	return true;
}

Uint16 UNIX_DNSGeneralSettingData::getProtocolIFType() const
{
	return Uint16(0);
}

Boolean UNIX_DNSGeneralSettingData::getAppendPrimarySuffixes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_APPEND_PRIMARY_SUFFIXES, getAppendPrimarySuffixes());
	return true;
}

Boolean UNIX_DNSGeneralSettingData::getAppendPrimarySuffixes() const
{
	return Boolean(false);
}

Boolean UNIX_DNSGeneralSettingData::getAppendParentSuffixes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_APPEND_PARENT_SUFFIXES, getAppendParentSuffixes());
	return true;
}

Boolean UNIX_DNSGeneralSettingData::getAppendParentSuffixes() const
{
	return Boolean(false);
}

Boolean UNIX_DNSGeneralSettingData::getDNSSuffixesToAppend(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_D_N_S_SUFFIXES_TO_APPEND, getDNSSuffixesToAppend());
	return true;
}

Array<String> UNIX_DNSGeneralSettingData::getDNSSuffixesToAppend() const
{
	Array<String> as;
	

	return as;

}



Boolean UNIX_DNSGeneralSettingData::initialize()
{
	return false;
}

Boolean UNIX_DNSGeneralSettingData::load(int &pIndex)
{
	return false;
}

Boolean UNIX_DNSGeneralSettingData::finalize()
{
	return false;
}

Boolean UNIX_DNSGeneralSettingData::find(Array<CIMKeyBinding> &kbArray)
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
