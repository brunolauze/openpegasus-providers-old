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

#ifndef __UNIX_LISTSINROUTINGPOLICY_H
#define __UNIX_LISTSINROUTINGPOLICY_H


#include "CIM_Component.h"
#include <RoutingPolicy/UNIX_RoutingPolicy.h>
#include <FilterList/UNIX_FilterList.h>

#include "UNIX_ListsInRoutingPolicyDeps.h"


#define PROPERTY_LIST_SEQUENCE				"ListSequence"


class UNIX_ListsInRoutingPolicy :
	public CIM_Component
{
public:

	UNIX_ListsInRoutingPolicy();
	~UNIX_ListsInRoutingPolicy();

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
	virtual Boolean getListSequence(CIMProperty&) const;
	virtual Uint16 getListSequence() const;

private:
	CIMName currentScope;

#	include "UNIX_ListsInRoutingPolicyPrivate.h"

	int groupIndex;
	int partIndex;
	UNIX_RoutingPolicy group_UNIX_RoutingPolicy_Component;
	int group_UNIX_RoutingPolicy_Index;
	bool endOf_UNIX_RoutingPolicy_Group;
	UNIX_FilterList part_UNIX_FilterList_Component;
	int part_UNIX_FilterList_Index;
	bool endOf_UNIX_FilterList_Part;


};

#endif /* UNIX_LISTSINROUTINGPOLICY */
