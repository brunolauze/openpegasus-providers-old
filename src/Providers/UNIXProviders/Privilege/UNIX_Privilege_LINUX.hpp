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


UNIX_Privilege::UNIX_Privilege(void)
{
}

UNIX_Privilege::~UNIX_Privilege(void)
{
}


Boolean UNIX_Privilege::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_Privilege::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_Privilege::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_Privilege::getCaption() const
{
	return String ("");
}

Boolean UNIX_Privilege::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_Privilege::getDescription() const
{
	return String ("");
}

Boolean UNIX_Privilege::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_Privilege::getElementName() const
{
	return String("Privilege");
}

Boolean UNIX_Privilege::getPrivilegeGranted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIVILEGE_GRANTED, getPrivilegeGranted());
	return true;
}

Boolean UNIX_Privilege::getPrivilegeGranted() const
{
	return Boolean(false);
}

Boolean UNIX_Privilege::getActivities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTIVITIES, getActivities());
	return true;
}

Array<Uint16> UNIX_Privilege::getActivities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Privilege::getActivityQualifiers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTIVITY_QUALIFIERS, getActivityQualifiers());
	return true;
}

Array<String> UNIX_Privilege::getActivityQualifiers() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Privilege::getQualifierFormats(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_QUALIFIER_FORMATS, getQualifierFormats());
	return true;
}

Array<Uint16> UNIX_Privilege::getQualifierFormats() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Privilege::getRepresentsAuthorizationRights(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPRESENTS_AUTHORIZATION_RIGHTS, getRepresentsAuthorizationRights());
	return true;
}

Boolean UNIX_Privilege::getRepresentsAuthorizationRights() const
{
	return Boolean(false);
}



Boolean UNIX_Privilege::initialize()
{
	return false;
}

Boolean UNIX_Privilege::load(int &pIndex)
{
	return false;
}

Boolean UNIX_Privilege::finalize()
{
	return false;
}

Boolean UNIX_Privilege::find(Array<CIMKeyBinding> &kbArray)
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
