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


UNIX_OtherGroupInformation::UNIX_OtherGroupInformation(void)
{
}

UNIX_OtherGroupInformation::~UNIX_OtherGroupInformation(void)
{
}


Boolean UNIX_OtherGroupInformation::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_OtherGroupInformation::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_OtherGroupInformation::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_OtherGroupInformation::getCaption() const
{
	return String ("");
}

Boolean UNIX_OtherGroupInformation::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_OtherGroupInformation::getDescription() const
{
	return String ("");
}

Boolean UNIX_OtherGroupInformation::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_OtherGroupInformation::getElementName() const
{
	return String("OtherGroupInformation");
}

Boolean UNIX_OtherGroupInformation::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_OtherGroupInformation::getCreationClassName() const
{
	return String("UNIX_OtherGroupInformation");
}

Boolean UNIX_OtherGroupInformation::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_OtherGroupInformation::getName() const
{
	return String ("");
}

Boolean UNIX_OtherGroupInformation::getObjectClass(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OBJECT_CLASS, getObjectClass());
	return true;
}

Array<String> UNIX_OtherGroupInformation::getObjectClass() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherGroupInformation::getBusinessCategory(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUSINESS_CATEGORY, getBusinessCategory());
	return true;
}

Array<String> UNIX_OtherGroupInformation::getBusinessCategory() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherGroupInformation::getCommonName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMON_NAME, getCommonName());
	return true;
}

Array<String> UNIX_OtherGroupInformation::getCommonName() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherGroupInformation::getDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTIONS, getDescriptions());
	return true;
}

Array<String> UNIX_OtherGroupInformation::getDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherGroupInformation::getOrganizationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ORGANIZATION_NAME, getOrganizationName());
	return true;
}

Array<String> UNIX_OtherGroupInformation::getOrganizationName() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherGroupInformation::getOU(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_O_U, getOU());
	return true;
}

Array<String> UNIX_OtherGroupInformation::getOU() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherGroupInformation::getOwner(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OWNER, getOwner());
	return true;
}

Array<String> UNIX_OtherGroupInformation::getOwner() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherGroupInformation::getSeeAlso(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEE_ALSO, getSeeAlso());
	return true;
}

Array<String> UNIX_OtherGroupInformation::getSeeAlso() const
{
	Array<String> as;
	

	return as;

}



Boolean UNIX_OtherGroupInformation::initialize()
{
	return false;
}

Boolean UNIX_OtherGroupInformation::load(int &pIndex)
{
	return false;
}

Boolean UNIX_OtherGroupInformation::finalize()
{
	return false;
}

Boolean UNIX_OtherGroupInformation::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
