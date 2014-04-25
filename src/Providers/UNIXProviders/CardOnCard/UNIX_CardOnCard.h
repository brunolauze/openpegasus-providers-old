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

#ifndef __UNIX_CARDONCARD_H
#define __UNIX_CARDONCARD_H


#include "CIM_Container.h"
#include <Card/UNIX_Card.h>
#include <Card/UNIX_Card.h>

#include "UNIX_CardOnCardDeps.h"


#define PROPERTY_MOUNT_OR_SLOT_DESCRIPTION				"MountOrSlotDescription"


class UNIX_CardOnCard :
	public CIM_Container
{
public:

	UNIX_CardOnCard();
	~UNIX_CardOnCard();

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
	virtual Boolean getLocationWithinContainer(CIMProperty&) const;
	virtual String getLocationWithinContainer() const;
	virtual Boolean getMountOrSlotDescription(CIMProperty&) const;
	virtual String getMountOrSlotDescription() const;

private:
	CIMName currentScope;

#	include "UNIX_CardOnCardPrivate.h"

	int groupIndex;
	int partIndex;
	UNIX_Card group_UNIX_Card_Component;
	int group_UNIX_Card_Index;
	bool endOf_UNIX_Card_Group;
	UNIX_Card part_UNIX_Card_Component;
	int part_UNIX_Card_Index;
	bool endOf_UNIX_Card_Part;


};

#endif /* UNIX_CARDONCARD */
