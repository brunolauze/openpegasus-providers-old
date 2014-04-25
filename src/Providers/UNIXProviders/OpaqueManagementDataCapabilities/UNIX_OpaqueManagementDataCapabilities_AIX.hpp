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


UNIX_OpaqueManagementDataCapabilities::UNIX_OpaqueManagementDataCapabilities(void)
{
}

UNIX_OpaqueManagementDataCapabilities::~UNIX_OpaqueManagementDataCapabilities(void)
{
}


Boolean UNIX_OpaqueManagementDataCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_OpaqueManagementDataCapabilities::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_OpaqueManagementDataCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_OpaqueManagementDataCapabilities::getCaption() const
{
	return String ("");
}

Boolean UNIX_OpaqueManagementDataCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_OpaqueManagementDataCapabilities::getDescription() const
{
	return String ("");
}

Boolean UNIX_OpaqueManagementDataCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_OpaqueManagementDataCapabilities::getElementName() const
{
	return String("OpaqueManagementDataCapabilities");
}

Boolean UNIX_OpaqueManagementDataCapabilities::getElementNameEditSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_EDIT_SUPPORTED, getElementNameEditSupported());
	return true;
}

Boolean UNIX_OpaqueManagementDataCapabilities::getElementNameEditSupported() const
{
	return Boolean(false);
}

Boolean UNIX_OpaqueManagementDataCapabilities::getMaxElementNameLen(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ELEMENT_NAME_LEN, getMaxElementNameLen());
	return true;
}

Uint16 UNIX_OpaqueManagementDataCapabilities::getMaxElementNameLen() const
{
	return Uint16(0);
}

Boolean UNIX_OpaqueManagementDataCapabilities::getRequestedStatesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATES_SUPPORTED, getRequestedStatesSupported());
	return true;
}

Array<Uint16> UNIX_OpaqueManagementDataCapabilities::getRequestedStatesSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_OpaqueManagementDataCapabilities::getElementNameMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_MASK, getElementNameMask());
	return true;
}

String UNIX_OpaqueManagementDataCapabilities::getElementNameMask() const
{
	return String ("");
}

Boolean UNIX_OpaqueManagementDataCapabilities::getMaxAvailableStorage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_AVAILABLE_STORAGE, getMaxAvailableStorage());
	return true;
}

Uint64 UNIX_OpaqueManagementDataCapabilities::getMaxAvailableStorage() const
{
	return Uint64(0);
}

Boolean UNIX_OpaqueManagementDataCapabilities::getMaxReadLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_READ_LENGTH, getMaxReadLength());
	return true;
}

Uint64 UNIX_OpaqueManagementDataCapabilities::getMaxReadLength() const
{
	return Uint64(0);
}

Boolean UNIX_OpaqueManagementDataCapabilities::getMaxWriteLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_WRITE_LENGTH, getMaxWriteLength());
	return true;
}

Uint64 UNIX_OpaqueManagementDataCapabilities::getMaxWriteLength() const
{
	return Uint64(0);
}

Boolean UNIX_OpaqueManagementDataCapabilities::getSupportedExportURISchemes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_EXPORT_U_R_I_SCHEMES, getSupportedExportURISchemes());
	return true;
}

Array<Uint16> UNIX_OpaqueManagementDataCapabilities::getSupportedExportURISchemes() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_OpaqueManagementDataCapabilities::getSupportedImportURISchemes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_IMPORT_U_R_I_SCHEMES, getSupportedImportURISchemes());
	return true;
}

Array<Uint16> UNIX_OpaqueManagementDataCapabilities::getSupportedImportURISchemes() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_OpaqueManagementDataCapabilities::getSupportedMethods(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_METHODS, getSupportedMethods());
	return true;
}

Array<Uint16> UNIX_OpaqueManagementDataCapabilities::getSupportedMethods() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_OpaqueManagementDataCapabilities::getTruncationSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRUNCATION_SUPPORTED, getTruncationSupported());
	return true;
}

Boolean UNIX_OpaqueManagementDataCapabilities::getTruncationSupported() const
{
	return Boolean(false);
}

Boolean UNIX_OpaqueManagementDataCapabilities::getMaxInstancesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_INSTANCES_SUPPORTED, getMaxInstancesSupported());
	return true;
}

Uint16 UNIX_OpaqueManagementDataCapabilities::getMaxInstancesSupported() const
{
	return Uint16(0);
}



Boolean UNIX_OpaqueManagementDataCapabilities::initialize()
{
	return false;
}

Boolean UNIX_OpaqueManagementDataCapabilities::load(int &pIndex)
{
	return false;
}

Boolean UNIX_OpaqueManagementDataCapabilities::finalize()
{
	return false;
}

Boolean UNIX_OpaqueManagementDataCapabilities::find(Array<CIMKeyBinding> &kbArray)
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
