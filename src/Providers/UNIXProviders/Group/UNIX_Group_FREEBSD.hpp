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


UNIX_Group::UNIX_Group(void)
{
}

UNIX_Group::~UNIX_Group(void)
{
}


Boolean UNIX_Group::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_Group::getInstanceID() const
{
	String s;
	s.append(CIMHelper::HostName);
	s.append(".");
	s.append(getName());
	return s;
}

Boolean UNIX_Group::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_Group::getCaption() const
{
	return getName();
}

Boolean UNIX_Group::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_Group::getDescription() const
{
	return String ("");
}

Boolean UNIX_Group::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_Group::getElementName() const
{
	return String("Group");
}

Boolean UNIX_Group::getGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GENERATION, getGeneration());
	return true;
}

Uint64 UNIX_Group::getGeneration() const
{
	return Uint64(0);
}

Boolean UNIX_Group::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_Group::getCreationClassName() const
{
	return String("UNIX_Group");
}

Boolean UNIX_Group::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_Group::getName() const
{
	return getCommonName();
}

Boolean UNIX_Group::getBusinessCategory(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUSINESS_CATEGORY, getBusinessCategory());
	return true;
}

String UNIX_Group::getBusinessCategory() const
{
	return String ("");
}

Boolean UNIX_Group::getCommonName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMON_NAME, getCommonName());
	return true;
}

String UNIX_Group::getCommonName() const
{
	return String (grp->gr_name);
}

Boolean UNIX_Group::getGroupID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_ID, getGroupID());
	return true;
}

String UNIX_Group::getGroupID() const
{
	char val[256];
	sprintf(val, "%d", grp->gr_gid);
	return String (val);
}

Boolean UNIX_Group::initialize()
{
	setgrent();
	return true;
}

Boolean UNIX_Group::load(int &pIndex)
{
	if ((grp = getgrent()) != NULL)
	{
		return true;
	}
	return false;
}

Boolean UNIX_Group::loadByName(String name)
{
	finalize();
	initialize();
	int pIndex = 0;
	while (load(pIndex))
	{
		if (String::equalNoCase(getCommonName(), name))
		{
			return true;
		}
	}
	return false;
}

Boolean UNIX_Group::finalize()
{
	endgrent();
	return true;
}

Boolean UNIX_Group::find(Array<CIMKeyBinding> &kbArray)
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



	/* Execute find with extracted keys */
	bool found = false;	

	for(int i = 0; i < load(i); i++)
	{
		if (String::equal(nameKey, getName()))
		{
			found = true;
			break;
		}
	}

	return false;
}
