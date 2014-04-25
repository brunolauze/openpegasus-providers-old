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


UNIX_NetworkPortCapabilities::UNIX_NetworkPortCapabilities(void)
{
}

UNIX_NetworkPortCapabilities::~UNIX_NetworkPortCapabilities(void)
{
}


Boolean UNIX_NetworkPortCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_NetworkPortCapabilities::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_NetworkPortCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_NetworkPortCapabilities::getCaption() const
{
	return String ("");
}

Boolean UNIX_NetworkPortCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_NetworkPortCapabilities::getDescription() const
{
	return String ("");
}

Boolean UNIX_NetworkPortCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_NetworkPortCapabilities::getElementName() const
{
	return String("NetworkPortCapabilities");
}

Boolean UNIX_NetworkPortCapabilities::getElementNameEditSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_EDIT_SUPPORTED, getElementNameEditSupported());
	return true;
}

Boolean UNIX_NetworkPortCapabilities::getElementNameEditSupported() const
{
	return Boolean(false);
}

Boolean UNIX_NetworkPortCapabilities::getMaxElementNameLen(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ELEMENT_NAME_LEN, getMaxElementNameLen());
	return true;
}

Uint16 UNIX_NetworkPortCapabilities::getMaxElementNameLen() const
{
	return Uint16(0);
}

Boolean UNIX_NetworkPortCapabilities::getRequestedStatesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATES_SUPPORTED, getRequestedStatesSupported());
	return true;
}

Array<Uint16> UNIX_NetworkPortCapabilities::getRequestedStatesSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_NetworkPortCapabilities::getElementNameMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_MASK, getElementNameMask());
	return true;
}

String UNIX_NetworkPortCapabilities::getElementNameMask() const
{
	return String ("");
}

Boolean UNIX_NetworkPortCapabilities::getRequestedSpeedsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_SPEEDS_SUPPORTED, getRequestedSpeedsSupported());
	return true;
}

Array<Uint64> UNIX_NetworkPortCapabilities::getRequestedSpeedsSupported() const
{
	Array<Uint64> as;
	

	return as;

}

Boolean UNIX_NetworkPortCapabilities::getAutoSenseSpeedConfigurable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTO_SENSE_SPEED_CONFIGURABLE, getAutoSenseSpeedConfigurable());
	return true;
}

Boolean UNIX_NetworkPortCapabilities::getAutoSenseSpeedConfigurable() const
{
	return Boolean(false);
}

Boolean UNIX_NetworkPortCapabilities::getSpeedConfigurable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPEED_CONFIGURABLE, getSpeedConfigurable());
	return true;
}

Boolean UNIX_NetworkPortCapabilities::getSpeedConfigurable() const
{
	return Boolean(false);
}

Boolean UNIX_NetworkPortCapabilities::getPortSpeedsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORT_SPEEDS_SUPPORTED, getPortSpeedsSupported());
	return true;
}

Array<Uint64> UNIX_NetworkPortCapabilities::getPortSpeedsSupported() const
{
	Array<Uint64> as;
	

	return as;

}

Boolean UNIX_NetworkPortCapabilities::getNetworkIDsConfigurable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NETWORK_IDS_CONFIGURABLE, getNetworkIDsConfigurable());
	return true;
}

Boolean UNIX_NetworkPortCapabilities::getNetworkIDsConfigurable() const
{
	return Boolean(false);
}

Boolean UNIX_NetworkPortCapabilities::getNetworkIDsFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NETWORK_IDS_FORMAT, getNetworkIDsFormat());
	return true;
}

Uint16 UNIX_NetworkPortCapabilities::getNetworkIDsFormat() const
{
	return Uint16(0);
}

Boolean UNIX_NetworkPortCapabilities::getLinkTechnologiesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LINK_TECHNOLOGIES_SUPPORTED, getLinkTechnologiesSupported());
	return true;
}

Array<Uint16> UNIX_NetworkPortCapabilities::getLinkTechnologiesSupported() const
{
	Array<Uint16> as;
	

	return as;

}



Boolean UNIX_NetworkPortCapabilities::initialize()
{
	return false;
}

Boolean UNIX_NetworkPortCapabilities::load(int &pIndex)
{
	return false;
}

Boolean UNIX_NetworkPortCapabilities::finalize()
{
	return false;
}

Boolean UNIX_NetworkPortCapabilities::find(Array<CIMKeyBinding> &kbArray)
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
