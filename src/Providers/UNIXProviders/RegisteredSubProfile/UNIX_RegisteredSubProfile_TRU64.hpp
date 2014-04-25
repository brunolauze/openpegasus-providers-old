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


UNIX_RegisteredSubProfile::UNIX_RegisteredSubProfile(void)
{
}

UNIX_RegisteredSubProfile::~UNIX_RegisteredSubProfile(void)
{
}


Boolean UNIX_RegisteredSubProfile::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_RegisteredSubProfile::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_RegisteredSubProfile::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_RegisteredSubProfile::getCaption() const
{
	return String ("");
}

Boolean UNIX_RegisteredSubProfile::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_RegisteredSubProfile::getDescription() const
{
	return String ("");
}

Boolean UNIX_RegisteredSubProfile::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_RegisteredSubProfile::getElementName() const
{
	return String("RegisteredSubProfile");
}

Boolean UNIX_RegisteredSubProfile::getRegisteredOrganization(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REGISTERED_ORGANIZATION, getRegisteredOrganization());
	return true;
}

Uint16 UNIX_RegisteredSubProfile::getRegisteredOrganization() const
{
	return Uint16(0);
}

Boolean UNIX_RegisteredSubProfile::getOtherRegisteredOrganization(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_REGISTERED_ORGANIZATION, getOtherRegisteredOrganization());
	return true;
}

String UNIX_RegisteredSubProfile::getOtherRegisteredOrganization() const
{
	return String ("");
}

Boolean UNIX_RegisteredSubProfile::getRegisteredName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REGISTERED_NAME, getRegisteredName());
	return true;
}

String UNIX_RegisteredSubProfile::getRegisteredName() const
{
	return String ("");
}

Boolean UNIX_RegisteredSubProfile::getRegisteredVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REGISTERED_VERSION, getRegisteredVersion());
	return true;
}

String UNIX_RegisteredSubProfile::getRegisteredVersion() const
{
	return String ("");
}

Boolean UNIX_RegisteredSubProfile::getAdvertiseTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADVERTISE_TYPES, getAdvertiseTypes());
	return true;
}

Array<Uint16> UNIX_RegisteredSubProfile::getAdvertiseTypes() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_RegisteredSubProfile::getAdvertiseTypeDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADVERTISE_TYPE_DESCRIPTIONS, getAdvertiseTypeDescriptions());
	return true;
}

Array<String> UNIX_RegisteredSubProfile::getAdvertiseTypeDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_RegisteredSubProfile::getImplementedFeatures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IMPLEMENTED_FEATURES, getImplementedFeatures());
	return true;
}

Array<String> UNIX_RegisteredSubProfile::getImplementedFeatures() const
{
	Array<String> as;
	

	return as;

}



Boolean UNIX_RegisteredSubProfile::initialize()
{
	return false;
}

Boolean UNIX_RegisteredSubProfile::load(int &pIndex)
{
	return false;
}

Boolean UNIX_RegisteredSubProfile::finalize()
{
	return false;
}

Boolean UNIX_RegisteredSubProfile::find(Array<CIMKeyBinding> &kbArray)
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
