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

#ifndef __UNIX_PEXTENTREDUNDANCYCOMPONENT_H
#define __UNIX_PEXTENTREDUNDANCYCOMPONENT_H


#include "CIM_ExtentRedundancyComponent.h"
#include <StorageRedundancyGroup/UNIX_StorageRedundancyGroup.h>
#include <PhysicalExtent/UNIX_PhysicalExtent.h>

#include "UNIX_PExtentRedundancyComponentDeps.h"




class UNIX_PExtentRedundancyComponent :
	public CIM_ExtentRedundancyComponent
{
public:

	UNIX_PExtentRedundancyComponent();
	~UNIX_PExtentRedundancyComponent();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean finalize();
	virtual Boolean find(Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);

	virtual Boolean getGroupComponent(CIMProperty&) const;
	virtual CIMInstance getGroupComponent() const;
	virtual Boolean getPartComponent(CIMProperty&) const;
	virtual CIMInstance getPartComponent() const;

private:
	CIMName currentScope;

#	include "UNIX_PExtentRedundancyComponentPrivate.h"

	int groupIndex;
	int partIndex;
	UNIX_StorageRedundancyGroup group_UNIX_StorageRedundancyGroup_Component;
	int group_UNIX_StorageRedundancyGroup_Index;
	bool endOf_UNIX_StorageRedundancyGroup_Group;
	UNIX_PhysicalExtent part_UNIX_PhysicalExtent_Component;
	int part_UNIX_PhysicalExtent_Index;
	bool endOf_UNIX_PhysicalExtent_Part;


};

#endif /* UNIX_PEXTENTREDUNDANCYCOMPONENT */
