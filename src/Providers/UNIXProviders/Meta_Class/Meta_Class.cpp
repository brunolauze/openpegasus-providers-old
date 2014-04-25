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


#include "Meta_Class.h"
#include <Pegasus/Client/CIMClient.h>
#include <Pegasus/Repository/CIMRepository.h>

Meta_Class::Meta_Class(void)
{
}

Meta_Class::~Meta_Class(void)
{
}


Boolean Meta_Class::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String Meta_Class::getInstanceID() const
{
	return getClassName();
}

Boolean Meta_Class::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String Meta_Class::getCaption() const
{
	return getName();
}

Boolean Meta_Class::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String Meta_Class::getDescription() const
{
	return String ("");
}

Boolean Meta_Class::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String Meta_Class::getElementName() const
{
	return String("Class");
}

Boolean Meta_Class::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String Meta_Class::getName() const
{
	return getClassName();
}

Boolean Meta_Class::getClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_NAME, getClassName());
	return true;
}

String Meta_Class::getClassName() const
{
	return currentclass.getClassName().getString();
}

Boolean Meta_Class::getSuperClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPER_CLASS_NAME, getSuperClassName());
	return true;
}

String Meta_Class::getSuperClassName() const
{
	return currentclass.getSuperClassName().getString();
}

Boolean Meta_Class::getNamespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAMESPACE, getNamespace());
	return true;
}

String Meta_Class::getNamespace() const
{
	return String(_ns); //currentclass.getPath().getNameSpace().getString();
}

Boolean Meta_Class::getIsAssociation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_ASSOCIATION, getIsAssociation());
	return true;
}

Boolean Meta_Class::getIsAssociation() const
{
	return currentclass.isAssociation();
}

Boolean Meta_Class::getProperties(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROPERTIES, getProperties());
	return true;
}

Array<String> Meta_Class::getProperties() const
{
	Array<String> as;
	Uint32 propertyCount = currentclass.getPropertyCount();
	for (Uint32 i = 0; i < propertyCount; i++)
	{
		as.append(currentclass.getProperty(i).getName().getString());
	}
	return as;
}

void Meta_Class::setCIMOMHandle(CIMOMHandle &handle)
{
	_cimomHandle = handle;
}

void Meta_Class::setContext(const OperationContext &context, const CIMNamespaceName &nameSpace)
{
	_ns = strdup(nameSpace.getString().getCString());
	_context = context;
}

Boolean Meta_Class::validateKey(CIMKeyBinding &kb) const
{

	/* Keys  */
	//Namespace
	//Name

	CIMName name = kb.getName();
	if (name.equal(PROPERTY_NAMESPACE) ||
			name.equal(PROPERTY_NAME)
		)
			return true;

	return false;
}

void Meta_Class::setScope(CIMName scope)
{
	currentScope = scope;
}


Boolean Meta_Class::initialize()
{
	CIMName className;

	    String repositoryRootPath =
        ConfigManager::getHomedPath(
            ConfigManager::getInstance()->getCurrentValue("repositoryDir"));

	CIMRepository rep(repositoryRootPath);
	try {

		classes = rep.enumerateClasses(CIMNamespaceName(String(_ns)), CIMName(), true, false, true, true);
		return true;
	}
	catch(Exception &e)
	{
		cout << e.getMessage() << endl;
		return false;
	}
	return true;
}

Boolean Meta_Class::load(int &pIndex)
{
	if (Uint32(pIndex) > classes.size() - 1) return false;
	currentclass = classes[pIndex];
	return true;
}

Boolean Meta_Class::finalize()
{
	return true;
}

Boolean Meta_Class::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String nameSpaceKey;
	String nameKey;

	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_NAMESPACE)) nameSpaceKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
