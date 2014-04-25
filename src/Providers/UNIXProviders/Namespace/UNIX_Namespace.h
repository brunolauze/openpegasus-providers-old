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

#ifndef __UNIX_NAMESPACE_H
#define __UNIX_NAMESPACE_H


#include "CIM_ManagedElement.h"

#include "UNIX_NamespaceDeps.h"


#define PROPERTY_SYSTEM_CREATION_CLASS_NAME				"SystemCreationClassName"
#define PROPERTY_SYSTEM_NAME				"SystemName"
#define PROPERTY_OBJECT_MANAGER_CREATION_CLASS_NAME				"ObjectManagerCreationClassName"
#define PROPERTY_OBJECT_MANAGER_NAME				"ObjectManagerName"
#define PROPERTY_CREATION_CLASS_NAME				"CreationClassName"
#define PROPERTY_NAME				"Name"
#define PROPERTY_CLASS_INFO				"ClassInfo"
#define PROPERTY_DESCRIPTION_OF_CLASS_INFO				"DescriptionOfClassInfo"
#define PROPERTY_CLASS_TYPE				"ClassType"
#define PROPERTY_CLASS_TYPE_VERSION				"ClassTypeVersion"
#define PROPERTY_DESCRIPTION_OF_CLASS_TYPE				"DescriptionOfClassType"


class UNIX_Namespace :
	public CIM_ManagedElement
{
public:

	UNIX_Namespace();
	~UNIX_Namespace();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean finalize();
	virtual Boolean find(Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);

	virtual Boolean getInstanceID(CIMProperty&) const;
	virtual String getInstanceID() const;
	virtual Boolean getCaption(CIMProperty&) const;
	virtual String getCaption() const;
	virtual Boolean getDescription(CIMProperty&) const;
	virtual String getDescription() const;
	virtual Boolean getElementName(CIMProperty&) const;
	virtual String getElementName() const;
	virtual Boolean getSystemCreationClassName(CIMProperty&) const;
	virtual String getSystemCreationClassName() const;
	virtual Boolean getSystemName(CIMProperty&) const;
	virtual String getSystemName() const;
	virtual Boolean getObjectManagerCreationClassName(CIMProperty&) const;
	virtual String getObjectManagerCreationClassName() const;
	virtual Boolean getObjectManagerName(CIMProperty&) const;
	virtual String getObjectManagerName() const;
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual Boolean getClassInfo(CIMProperty&) const;
	virtual Uint16 getClassInfo() const;
	virtual Boolean getDescriptionOfClassInfo(CIMProperty&) const;
	virtual String getDescriptionOfClassInfo() const;
	virtual Boolean getClassType(CIMProperty&) const;
	virtual Uint16 getClassType() const;
	virtual Boolean getClassTypeVersion(CIMProperty&) const;
	virtual String getClassTypeVersion() const;
	virtual Boolean getDescriptionOfClassType(CIMProperty&) const;
	virtual String getDescriptionOfClassType() const;

private:
	CIMName currentScope;

#	include "UNIX_NamespacePrivate.h"


};

#endif /* UNIX_NAMESPACE */
