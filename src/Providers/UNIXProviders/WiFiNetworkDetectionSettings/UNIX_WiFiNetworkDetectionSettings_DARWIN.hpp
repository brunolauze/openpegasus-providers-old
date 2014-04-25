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


UNIX_WiFiNetworkDetectionSettings::UNIX_WiFiNetworkDetectionSettings(void)
{
}

UNIX_WiFiNetworkDetectionSettings::~UNIX_WiFiNetworkDetectionSettings(void)
{
}


Boolean UNIX_WiFiNetworkDetectionSettings::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_WiFiNetworkDetectionSettings::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_WiFiNetworkDetectionSettings::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_WiFiNetworkDetectionSettings::getCaption() const
{
	return String ("");
}

Boolean UNIX_WiFiNetworkDetectionSettings::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_WiFiNetworkDetectionSettings::getDescription() const
{
	return String ("");
}

Boolean UNIX_WiFiNetworkDetectionSettings::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_WiFiNetworkDetectionSettings::getElementName() const
{
	return String("WiFiNetworkDetectionSettings");
}

Boolean UNIX_WiFiNetworkDetectionSettings::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_WiFiNetworkDetectionSettings::getChangeableType() const
{
	return Uint16(0);
}

Boolean UNIX_WiFiNetworkDetectionSettings::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_WiFiNetworkDetectionSettings::getConfigurationName() const
{
	return String ("");
}

Boolean UNIX_WiFiNetworkDetectionSettings::getTargetNetworkCategories(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TARGET_NETWORK_CATEGORIES, getTargetNetworkCategories());
	return true;
}

Uint16 UNIX_WiFiNetworkDetectionSettings::getTargetNetworkCategories() const
{
	return Uint16(0);
}

Boolean UNIX_WiFiNetworkDetectionSettings::getPreferredNetworks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PREFERRED_NETWORKS, getPreferredNetworks());
	return true;
}

Array<String> UNIX_WiFiNetworkDetectionSettings::getPreferredNetworks() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_WiFiNetworkDetectionSettings::getKnownNetworks(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_KNOWN_NETWORKS, getKnownNetworks());
	return true;
}

Array<String> UNIX_WiFiNetworkDetectionSettings::getKnownNetworks() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_WiFiNetworkDetectionSettings::getMinimumSignalStrength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MINIMUM_SIGNAL_STRENGTH, getMinimumSignalStrength());
	return true;
}

Uint16 UNIX_WiFiNetworkDetectionSettings::getMinimumSignalStrength() const
{
	return Uint16(0);
}

Boolean UNIX_WiFiNetworkDetectionSettings::getPortTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_TYPES, getPortTypes());
	return true;
}

Array<Uint16> UNIX_WiFiNetworkDetectionSettings::getPortTypes() const
{
	Array<Uint16> as;
	

	return as;

}



Boolean UNIX_WiFiNetworkDetectionSettings::initialize()
{
	return false;
}

Boolean UNIX_WiFiNetworkDetectionSettings::load(int &pIndex)
{
	return false;
}

Boolean UNIX_WiFiNetworkDetectionSettings::finalize()
{
	return false;
}

Boolean UNIX_WiFiNetworkDetectionSettings::find(Array<CIMKeyBinding> &kbArray)
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
