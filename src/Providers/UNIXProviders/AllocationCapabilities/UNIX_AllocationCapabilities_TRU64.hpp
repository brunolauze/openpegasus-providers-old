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


UNIX_AllocationCapabilities::UNIX_AllocationCapabilities(void)
{
}

UNIX_AllocationCapabilities::~UNIX_AllocationCapabilities(void)
{
}


Boolean UNIX_AllocationCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_AllocationCapabilities::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_AllocationCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_AllocationCapabilities::getCaption() const
{
	return String ("");
}

Boolean UNIX_AllocationCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_AllocationCapabilities::getDescription() const
{
	return String ("");
}

Boolean UNIX_AllocationCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_AllocationCapabilities::getElementName() const
{
	return String("AllocationCapabilities");
}

Boolean UNIX_AllocationCapabilities::getResourceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESOURCE_TYPE, getResourceType());
	return true;
}

Uint16 UNIX_AllocationCapabilities::getResourceType() const
{
	return Uint16(0);
}

Boolean UNIX_AllocationCapabilities::getOtherResourceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_RESOURCE_TYPE, getOtherResourceType());
	return true;
}

String UNIX_AllocationCapabilities::getOtherResourceType() const
{
	return String ("");
}

Boolean UNIX_AllocationCapabilities::getResourceSubType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESOURCE_SUB_TYPE, getResourceSubType());
	return true;
}

String UNIX_AllocationCapabilities::getResourceSubType() const
{
	return String ("");
}

Boolean UNIX_AllocationCapabilities::getRequestTypesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUEST_TYPES_SUPPORTED, getRequestTypesSupported());
	return true;
}

Uint16 UNIX_AllocationCapabilities::getRequestTypesSupported() const
{
	return Uint16(0);
}

Boolean UNIX_AllocationCapabilities::getSharingMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SHARING_MODE, getSharingMode());
	return true;
}

Uint16 UNIX_AllocationCapabilities::getSharingMode() const
{
	return Uint16(0);
}

Boolean UNIX_AllocationCapabilities::getSupportedAddStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_ADD_STATES, getSupportedAddStates());
	return true;
}

Array<Uint16> UNIX_AllocationCapabilities::getSupportedAddStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_AllocationCapabilities::getSupportedRemoveStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_REMOVE_STATES, getSupportedRemoveStates());
	return true;
}

Array<Uint16> UNIX_AllocationCapabilities::getSupportedRemoveStates() const
{
	Array<Uint16> as;
	

	return as;

}



Boolean UNIX_AllocationCapabilities::initialize()
{
	return false;
}

Boolean UNIX_AllocationCapabilities::load(int &pIndex)
{
	return false;
}

Boolean UNIX_AllocationCapabilities::finalize()
{
	return false;
}

Boolean UNIX_AllocationCapabilities::find(Array<CIMKeyBinding> &kbArray)
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
