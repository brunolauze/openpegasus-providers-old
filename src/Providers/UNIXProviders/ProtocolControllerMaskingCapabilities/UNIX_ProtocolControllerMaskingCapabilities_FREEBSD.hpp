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


UNIX_ProtocolControllerMaskingCapabilities::UNIX_ProtocolControllerMaskingCapabilities(void)
{
}

UNIX_ProtocolControllerMaskingCapabilities::~UNIX_ProtocolControllerMaskingCapabilities(void)
{
}


Boolean UNIX_ProtocolControllerMaskingCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ProtocolControllerMaskingCapabilities::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ProtocolControllerMaskingCapabilities::getCaption() const
{
	return String ("");
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ProtocolControllerMaskingCapabilities::getDescription() const
{
	return String ("");
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ProtocolControllerMaskingCapabilities::getElementName() const
{
	return String("ProtocolControllerMaskingCapabilities");
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getValidHardwareIdTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VALID_HARDWARE_ID_TYPES, getValidHardwareIdTypes());
	return true;
}

Array<Uint16> UNIX_ProtocolControllerMaskingCapabilities::getValidHardwareIdTypes() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getOtherValidHardwareIDTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_VALID_HARDWARE_ID_TYPES, getOtherValidHardwareIDTypes());
	return true;
}

Array<String> UNIX_ProtocolControllerMaskingCapabilities::getOtherValidHardwareIDTypes() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getPortsPerView(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PORTS_PER_VIEW, getPortsPerView());
	return true;
}

Uint16 UNIX_ProtocolControllerMaskingCapabilities::getPortsPerView() const
{
	return Uint16(0);
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getClientSelectableDeviceNumbers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLIENT_SELECTABLE_DEVICE_NUMBERS, getClientSelectableDeviceNumbers());
	return true;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getClientSelectableDeviceNumbers() const
{
	return Boolean(false);
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getAttachDeviceSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ATTACH_DEVICE_SUPPORTED, getAttachDeviceSupported());
	return true;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getAttachDeviceSupported() const
{
	return Boolean(false);
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getOneHardwareIDPerView(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ONE_HARDWARE_ID_PER_VIEW, getOneHardwareIDPerView());
	return true;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getOneHardwareIDPerView() const
{
	return Boolean(false);
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getUniqueUnitNumbersPerPort(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNIQUE_UNIT_NUMBERS_PER_PORT, getUniqueUnitNumbersPerPort());
	return true;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getUniqueUnitNumbersPerPort() const
{
	return Boolean(false);
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getPrivilegeDeniedSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIVILEGE_DENIED_SUPPORTED, getPrivilegeDeniedSupported());
	return true;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getPrivilegeDeniedSupported() const
{
	return Boolean(false);
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getProtocolControllerRequiresAuthorizedIdentity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_CONTROLLER_REQUIRES_AUTHORIZED_IDENTITY, getProtocolControllerRequiresAuthorizedIdentity());
	return true;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getProtocolControllerRequiresAuthorizedIdentity() const
{
	return Boolean(false);
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getProtocolControllerSupportsCollections(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_CONTROLLER_SUPPORTS_COLLECTIONS, getProtocolControllerSupportsCollections());
	return true;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getProtocolControllerSupportsCollections() const
{
	return Boolean(false);
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getExposePathsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXPOSE_PATHS_SUPPORTED, getExposePathsSupported());
	return true;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getExposePathsSupported() const
{
	return Boolean(false);
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getCreateProtocolControllerSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATE_PROTOCOL_CONTROLLER_SUPPORTED, getCreateProtocolControllerSupported());
	return true;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getCreateProtocolControllerSupported() const
{
	return Boolean(false);
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getMaximumMapCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_MAP_COUNT, getMaximumMapCount());
	return true;
}

Uint16 UNIX_ProtocolControllerMaskingCapabilities::getMaximumMapCount() const
{
	return Uint16(0);
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getSPCAllowsNoLUs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_P_C_ALLOWS_NO_L_US, getSPCAllowsNoLUs());
	return true;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getSPCAllowsNoLUs() const
{
	return Boolean(false);
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getSPCAllowsNoTargets(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_P_C_ALLOWS_NO_TARGETS, getSPCAllowsNoTargets());
	return true;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getSPCAllowsNoTargets() const
{
	return Boolean(false);
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getSPCAllowsNoInitiators(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_P_C_ALLOWS_NO_INITIATORS, getSPCAllowsNoInitiators());
	return true;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getSPCAllowsNoInitiators() const
{
	return Boolean(false);
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getSPCSupportsDefaultViews(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_P_CSUPPORTS_DEFAULT_VIEWS, getSPCSupportsDefaultViews());
	return true;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::getSPCSupportsDefaultViews() const
{
	return Boolean(false);
}



Boolean UNIX_ProtocolControllerMaskingCapabilities::initialize()
{
	return false;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::load(int &pIndex)
{
	return false;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::finalize()
{
	return false;
}

Boolean UNIX_ProtocolControllerMaskingCapabilities::find(Array<CIMKeyBinding> &kbArray)
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
