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


UNIX_USBRedirectionCapabilities::UNIX_USBRedirectionCapabilities(void)
{
}

UNIX_USBRedirectionCapabilities::~UNIX_USBRedirectionCapabilities(void)
{
}


Boolean UNIX_USBRedirectionCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_USBRedirectionCapabilities::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_USBRedirectionCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_USBRedirectionCapabilities::getCaption() const
{
	return String ("");
}

Boolean UNIX_USBRedirectionCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_USBRedirectionCapabilities::getDescription() const
{
	return String ("");
}

Boolean UNIX_USBRedirectionCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_USBRedirectionCapabilities::getElementName() const
{
	return String("USBRedirectionCapabilities");
}

Boolean UNIX_USBRedirectionCapabilities::getElementNameEditSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_EDIT_SUPPORTED, getElementNameEditSupported());
	return true;
}

Boolean UNIX_USBRedirectionCapabilities::getElementNameEditSupported() const
{
	return Boolean(false);
}

Boolean UNIX_USBRedirectionCapabilities::getMaxElementNameLen(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ELEMENT_NAME_LEN, getMaxElementNameLen());
	return true;
}

Uint16 UNIX_USBRedirectionCapabilities::getMaxElementNameLen() const
{
	return Uint16(0);
}

Boolean UNIX_USBRedirectionCapabilities::getRequestedStatesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATES_SUPPORTED, getRequestedStatesSupported());
	return true;
}

Array<Uint16> UNIX_USBRedirectionCapabilities::getRequestedStatesSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_USBRedirectionCapabilities::getElementNameMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_MASK, getElementNameMask());
	return true;
}

String UNIX_USBRedirectionCapabilities::getElementNameMask() const
{
	return String ("");
}

Boolean UNIX_USBRedirectionCapabilities::getSharingModeSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SHARING_MODE_SUPPORTED, getSharingModeSupported());
	return true;
}

Array<Uint16> UNIX_USBRedirectionCapabilities::getSharingModeSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_USBRedirectionCapabilities::getConnectionModesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTION_MODES_SUPPORTED, getConnectionModesSupported());
	return true;
}

Array<Uint16> UNIX_USBRedirectionCapabilities::getConnectionModesSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_USBRedirectionCapabilities::getUSBVersionsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_U_S_B_VERSIONS_SUPPORTED, getUSBVersionsSupported());
	return true;
}

Array<Uint16> UNIX_USBRedirectionCapabilities::getUSBVersionsSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_USBRedirectionCapabilities::getClassesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASSES_SUPPORTED, getClassesSupported());
	return true;
}

Array<Uint8> UNIX_USBRedirectionCapabilities::getClassesSupported() const
{
	Array<Uint8> as;
	

	return as;

}

Boolean UNIX_USBRedirectionCapabilities::getSubClassesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUB_CLASSES_SUPPORTED, getSubClassesSupported());
	return true;
}

Array<Uint8> UNIX_USBRedirectionCapabilities::getSubClassesSupported() const
{
	Array<Uint8> as;
	

	return as;

}

Boolean UNIX_USBRedirectionCapabilities::getMaxDevicesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_DEVICES_SUPPORTED, getMaxDevicesSupported());
	return true;
}

Array<Uint16> UNIX_USBRedirectionCapabilities::getMaxDevicesSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_USBRedirectionCapabilities::getMaxDevicesPerSAP(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_DEVICES_PER_S_A_P, getMaxDevicesPerSAP());
	return true;
}

Array<Uint16> UNIX_USBRedirectionCapabilities::getMaxDevicesPerSAP() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_USBRedirectionCapabilities::getSAPCapabilitiesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_A_P_CAPABILITIES_SUPPORTED, getSAPCapabilitiesSupported());
	return true;
}

Array<Uint16> UNIX_USBRedirectionCapabilities::getSAPCapabilitiesSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_USBRedirectionCapabilities::getRequestedStatesSupportedForCreatedSAP(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATES_SUPPORTED_FOR_CREATED_S_A_P, getRequestedStatesSupportedForCreatedSAP());
	return true;
}

Array<Uint16> UNIX_USBRedirectionCapabilities::getRequestedStatesSupportedForCreatedSAP() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_USBRedirectionCapabilities::getInfoFormatsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INFO_FORMATS_SUPPORTED, getInfoFormatsSupported());
	return true;
}

Array<Uint16> UNIX_USBRedirectionCapabilities::getInfoFormatsSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_USBRedirectionCapabilities::getSingleClassPerSAP(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SINGLE_CLASS_PER_S_A_P, getSingleClassPerSAP());
	return true;
}

Boolean UNIX_USBRedirectionCapabilities::getSingleClassPerSAP() const
{
	return Boolean(false);
}



Boolean UNIX_USBRedirectionCapabilities::initialize()
{
	return false;
}

Boolean UNIX_USBRedirectionCapabilities::load(int &pIndex)
{
	return false;
}

Boolean UNIX_USBRedirectionCapabilities::finalize()
{
	return false;
}

Boolean UNIX_USBRedirectionCapabilities::find(Array<CIMKeyBinding> &kbArray)
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
