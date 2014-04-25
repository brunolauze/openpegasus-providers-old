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


UNIX_Namespace::UNIX_Namespace(void)
{
}

UNIX_Namespace::~UNIX_Namespace(void)
{
}


Boolean UNIX_Namespace::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_Namespace::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_Namespace::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_Namespace::getCaption() const
{
	return String ("");
}

Boolean UNIX_Namespace::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_Namespace::getDescription() const
{
	return String ("");
}

Boolean UNIX_Namespace::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_Namespace::getElementName() const
{
	return String("Namespace");
}

Boolean UNIX_Namespace::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_Namespace::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_Namespace::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_Namespace::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_Namespace::getObjectManagerCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OBJECT_MANAGER_CREATION_CLASS_NAME, getObjectManagerCreationClassName());
	return true;
}

String UNIX_Namespace::getObjectManagerCreationClassName() const
{
	return String ("");
}

Boolean UNIX_Namespace::getObjectManagerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OBJECT_MANAGER_NAME, getObjectManagerName());
	return true;
}

String UNIX_Namespace::getObjectManagerName() const
{
	return String ("");
}

Boolean UNIX_Namespace::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_Namespace::getCreationClassName() const
{
	return String("UNIX_Namespace");
}

Boolean UNIX_Namespace::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_Namespace::getName() const
{
	return String ("");
}

Boolean UNIX_Namespace::getClassInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_INFO, getClassInfo());
	return true;
}

Uint16 UNIX_Namespace::getClassInfo() const
{
	return Uint16(0);
}

Boolean UNIX_Namespace::getDescriptionOfClassInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION_OF_CLASS_INFO, getDescriptionOfClassInfo());
	return true;
}

String UNIX_Namespace::getDescriptionOfClassInfo() const
{
	return String ("");
}

Boolean UNIX_Namespace::getClassType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_TYPE, getClassType());
	return true;
}

Uint16 UNIX_Namespace::getClassType() const
{
	return Uint16(0);
}

Boolean UNIX_Namespace::getClassTypeVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_TYPE_VERSION, getClassTypeVersion());
	return true;
}

String UNIX_Namespace::getClassTypeVersion() const
{
	return String ("");
}

Boolean UNIX_Namespace::getDescriptionOfClassType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION_OF_CLASS_TYPE, getDescriptionOfClassType());
	return true;
}

String UNIX_Namespace::getDescriptionOfClassType() const
{
	return String ("");
}



Boolean UNIX_Namespace::initialize()
{
	return false;
}

Boolean UNIX_Namespace::load(int &pIndex)
{
	return false;
}

Boolean UNIX_Namespace::finalize()
{
	return false;
}

Boolean UNIX_Namespace::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String objectManagerCreationClassNameKey;
	String objectManagerNameKey;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_OBJECT_MANAGER_CREATION_CLASS_NAME)) objectManagerCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_OBJECT_MANAGER_NAME)) objectManagerNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
