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


UNIX_MediaRedirectionCapabilities::UNIX_MediaRedirectionCapabilities(void)
{
}

UNIX_MediaRedirectionCapabilities::~UNIX_MediaRedirectionCapabilities(void)
{
}


Boolean UNIX_MediaRedirectionCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_MediaRedirectionCapabilities::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_MediaRedirectionCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_MediaRedirectionCapabilities::getCaption() const
{
	return String ("");
}

Boolean UNIX_MediaRedirectionCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_MediaRedirectionCapabilities::getDescription() const
{
	return String ("");
}

Boolean UNIX_MediaRedirectionCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_MediaRedirectionCapabilities::getElementName() const
{
	return String("MediaRedirectionCapabilities");
}

Boolean UNIX_MediaRedirectionCapabilities::getElementNameEditSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_EDIT_SUPPORTED, getElementNameEditSupported());
	return true;
}

Boolean UNIX_MediaRedirectionCapabilities::getElementNameEditSupported() const
{
	return Boolean(false);
}

Boolean UNIX_MediaRedirectionCapabilities::getMaxElementNameLen(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ELEMENT_NAME_LEN, getMaxElementNameLen());
	return true;
}

Uint16 UNIX_MediaRedirectionCapabilities::getMaxElementNameLen() const
{
	return Uint16(0);
}

Boolean UNIX_MediaRedirectionCapabilities::getRequestedStatesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATES_SUPPORTED, getRequestedStatesSupported());
	return true;
}

Array<Uint16> UNIX_MediaRedirectionCapabilities::getRequestedStatesSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_MediaRedirectionCapabilities::getElementNameMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_MASK, getElementNameMask());
	return true;
}

String UNIX_MediaRedirectionCapabilities::getElementNameMask() const
{
	return String ("");
}

Boolean UNIX_MediaRedirectionCapabilities::getSharingModeSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SHARING_MODE_SUPPORTED, getSharingModeSupported());
	return true;
}

Array<Uint16> UNIX_MediaRedirectionCapabilities::getSharingModeSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_MediaRedirectionCapabilities::getConnectionModesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTION_MODES_SUPPORTED, getConnectionModesSupported());
	return true;
}

Array<Uint16> UNIX_MediaRedirectionCapabilities::getConnectionModesSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_MediaRedirectionCapabilities::getDevicesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICES_SUPPORTED, getDevicesSupported());
	return true;
}

Array<Uint16> UNIX_MediaRedirectionCapabilities::getDevicesSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_MediaRedirectionCapabilities::getMaxDevicesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_DEVICES_SUPPORTED, getMaxDevicesSupported());
	return true;
}

Array<Uint16> UNIX_MediaRedirectionCapabilities::getMaxDevicesSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_MediaRedirectionCapabilities::getMaxDevicesPerSAP(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_DEVICES_PER_S_A_P, getMaxDevicesPerSAP());
	return true;
}

Array<Uint16> UNIX_MediaRedirectionCapabilities::getMaxDevicesPerSAP() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_MediaRedirectionCapabilities::getSAPCapabilitiesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_A_P_CAPABILITIES_SUPPORTED, getSAPCapabilitiesSupported());
	return true;
}

Array<Uint16> UNIX_MediaRedirectionCapabilities::getSAPCapabilitiesSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_MediaRedirectionCapabilities::getInfoFormatsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INFO_FORMATS_SUPPORTED, getInfoFormatsSupported());
	return true;
}

Array<Uint16> UNIX_MediaRedirectionCapabilities::getInfoFormatsSupported() const
{
	Array<Uint16> as;
	

	return as;

}



Boolean UNIX_MediaRedirectionCapabilities::initialize()
{
	return false;
}

Boolean UNIX_MediaRedirectionCapabilities::load(int &pIndex)
{
	return false;
}

Boolean UNIX_MediaRedirectionCapabilities::finalize()
{
	return false;
}

Boolean UNIX_MediaRedirectionCapabilities::find(Array<CIMKeyBinding> &kbArray)
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
