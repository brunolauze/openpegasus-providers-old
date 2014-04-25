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


UNIX_SystemIdentification::UNIX_SystemIdentification(void)
{
}

UNIX_SystemIdentification::~UNIX_SystemIdentification(void)
{
}


Boolean UNIX_SystemIdentification::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SystemIdentification::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_SystemIdentification::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SystemIdentification::getCaption() const
{
	return String ("");
}

Boolean UNIX_SystemIdentification::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SystemIdentification::getDescription() const
{
	return String ("");
}

Boolean UNIX_SystemIdentification::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SystemIdentification::getElementName() const
{
	return String("SystemIdentification");
}

Boolean UNIX_SystemIdentification::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_SystemIdentification::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_SystemIdentification::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_SystemIdentification::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_SystemIdentification::getObjectManagerCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OBJECT_MANAGER_CREATION_CLASS_NAME, getObjectManagerCreationClassName());
	return true;
}

String UNIX_SystemIdentification::getObjectManagerCreationClassName() const
{
	return String ("");
}

Boolean UNIX_SystemIdentification::getObjectManagerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OBJECT_MANAGER_NAME, getObjectManagerName());
	return true;
}

String UNIX_SystemIdentification::getObjectManagerName() const
{
	return String ("");
}

Boolean UNIX_SystemIdentification::getNamespaceCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAMESPACE_CREATION_CLASS_NAME, getNamespaceCreationClassName());
	return true;
}

String UNIX_SystemIdentification::getNamespaceCreationClassName() const
{
	return String ("");
}

Boolean UNIX_SystemIdentification::getNamespaceName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAMESPACE_NAME, getNamespaceName());
	return true;
}

String UNIX_SystemIdentification::getNamespaceName() const
{
	return String ("");
}

Boolean UNIX_SystemIdentification::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_SystemIdentification::getCreationClassName() const
{
	return String("UNIX_SystemIdentification");
}

Boolean UNIX_SystemIdentification::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_SystemIdentification::getName() const
{
	return String ("");
}

Boolean UNIX_SystemIdentification::getIdentificationFormats(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFICATION_FORMATS, getIdentificationFormats());
	return true;
}

Array<Uint16> UNIX_SystemIdentification::getIdentificationFormats() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_SystemIdentification::getFormatDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FORMAT_DESCRIPTIONS, getFormatDescriptions());
	return true;
}

Array<String> UNIX_SystemIdentification::getFormatDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_SystemIdentification::getIdentificationData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFICATION_DATA, getIdentificationData());
	return true;
}

Array<String> UNIX_SystemIdentification::getIdentificationData() const
{
	Array<String> as;
	

	return as;

}



Boolean UNIX_SystemIdentification::initialize()
{
	return false;
}

Boolean UNIX_SystemIdentification::load(int &pIndex)
{
	return false;
}

Boolean UNIX_SystemIdentification::finalize()
{
	return false;
}

Boolean UNIX_SystemIdentification::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String objectManagerCreationClassNameKey;
	String objectManagerNameKey;
	String namespaceCreationClassNameKey;
	String namespaceNameKey;
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
		else if (keyName.equal(PROPERTY_NAMESPACE_CREATION_CLASS_NAME)) namespaceCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAMESPACE_NAME)) namespaceNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
