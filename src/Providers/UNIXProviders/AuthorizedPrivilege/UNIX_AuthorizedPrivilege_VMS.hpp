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


UNIX_AuthorizedPrivilege::UNIX_AuthorizedPrivilege(void)
{
}

UNIX_AuthorizedPrivilege::~UNIX_AuthorizedPrivilege(void)
{
}


Boolean UNIX_AuthorizedPrivilege::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_AuthorizedPrivilege::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_AuthorizedPrivilege::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_AuthorizedPrivilege::getCaption() const
{
	return String ("");
}

Boolean UNIX_AuthorizedPrivilege::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_AuthorizedPrivilege::getDescription() const
{
	return String ("");
}

Boolean UNIX_AuthorizedPrivilege::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_AuthorizedPrivilege::getElementName() const
{
	return String("AuthorizedPrivilege");
}

Boolean UNIX_AuthorizedPrivilege::getPrivilegeGranted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIVILEGE_GRANTED, getPrivilegeGranted());
	return true;
}

Boolean UNIX_AuthorizedPrivilege::getPrivilegeGranted() const
{
	return Boolean(false);
}

Boolean UNIX_AuthorizedPrivilege::getActivities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTIVITIES, getActivities());
	return true;
}

Array<Uint16> UNIX_AuthorizedPrivilege::getActivities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_AuthorizedPrivilege::getActivityQualifiers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTIVITY_QUALIFIERS, getActivityQualifiers());
	return true;
}

Array<String> UNIX_AuthorizedPrivilege::getActivityQualifiers() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_AuthorizedPrivilege::getQualifierFormats(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_QUALIFIER_FORMATS, getQualifierFormats());
	return true;
}

Array<Uint16> UNIX_AuthorizedPrivilege::getQualifierFormats() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_AuthorizedPrivilege::getRepresentsAuthorizationRights(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPRESENTS_AUTHORIZATION_RIGHTS, getRepresentsAuthorizationRights());
	return true;
}

Boolean UNIX_AuthorizedPrivilege::getRepresentsAuthorizationRights() const
{
	return Boolean(false);
}



Boolean UNIX_AuthorizedPrivilege::initialize()
{
	return false;
}

Boolean UNIX_AuthorizedPrivilege::load(int &pIndex)
{
	return false;
}

Boolean UNIX_AuthorizedPrivilege::finalize()
{
	return false;
}

Boolean UNIX_AuthorizedPrivilege::find(Array<CIMKeyBinding> &kbArray)
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
