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


UNIX_VLANEndpointSettingData::UNIX_VLANEndpointSettingData(void)
{
}

UNIX_VLANEndpointSettingData::~UNIX_VLANEndpointSettingData(void)
{
}


Boolean UNIX_VLANEndpointSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_VLANEndpointSettingData::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_VLANEndpointSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_VLANEndpointSettingData::getCaption() const
{
	return String ("");
}

Boolean UNIX_VLANEndpointSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_VLANEndpointSettingData::getDescription() const
{
	return String ("");
}

Boolean UNIX_VLANEndpointSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_VLANEndpointSettingData::getElementName() const
{
	return String("VLANEndpointSettingData");
}

Boolean UNIX_VLANEndpointSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_VLANEndpointSettingData::getChangeableType() const
{
	return Uint16(0);
}

Boolean UNIX_VLANEndpointSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_VLANEndpointSettingData::getConfigurationName() const
{
	return String ("");
}

Boolean UNIX_VLANEndpointSettingData::getPruneEligibleVLANList(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRUNE_ELIGIBLE_V_L_A_N_LIST, getPruneEligibleVLANList());
	return true;
}

Array<Uint16> UNIX_VLANEndpointSettingData::getPruneEligibleVLANList() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_VLANEndpointSettingData::getNativeVLAN(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NATIVE_V_L_A_N, getNativeVLAN());
	return true;
}

Uint16 UNIX_VLANEndpointSettingData::getNativeVLAN() const
{
	return Uint16(0);
}

Boolean UNIX_VLANEndpointSettingData::getDefaultVLAN(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_V_L_A_N, getDefaultVLAN());
	return true;
}

Uint16 UNIX_VLANEndpointSettingData::getDefaultVLAN() const
{
	return Uint16(0);
}

Boolean UNIX_VLANEndpointSettingData::getTrunkedVLANList(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRUNKED_V_L_A_N_LIST, getTrunkedVLANList());
	return true;
}

Array<Uint16> UNIX_VLANEndpointSettingData::getTrunkedVLANList() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_VLANEndpointSettingData::getAccessVLAN(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS_V_L_A_N, getAccessVLAN());
	return true;
}

Uint16 UNIX_VLANEndpointSettingData::getAccessVLAN() const
{
	return Uint16(0);
}



Boolean UNIX_VLANEndpointSettingData::initialize()
{
	return false;
}

Boolean UNIX_VLANEndpointSettingData::load(int &pIndex)
{
	return false;
}

Boolean UNIX_VLANEndpointSettingData::finalize()
{
	return false;
}

Boolean UNIX_VLANEndpointSettingData::find(Array<CIMKeyBinding> &kbArray)
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
