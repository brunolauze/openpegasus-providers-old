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

#ifndef __UNIX_CONTAINEDDOMAIN_H
#define __UNIX_CONTAINEDDOMAIN_H


#include "CIM_SystemComponent.h"
#include <ReusablePolicyContainer/UNIX_ReusablePolicyContainer.h>
#include <RoutingProtocolDomain/UNIX_RoutingProtocolDomain.h>
#include <OSPFArea/UNIX_OSPFArea.h>
#include <Network/UNIX_Network.h>
#include <PolicyRepository/UNIX_PolicyRepository.h>
#include <AutonomousSystem/UNIX_AutonomousSystem.h>
#include <ReusablePolicyContainer/UNIX_ReusablePolicyContainer.h>
#include <RoutingProtocolDomain/UNIX_RoutingProtocolDomain.h>
#include <OSPFArea/UNIX_OSPFArea.h>
#include <Network/UNIX_Network.h>
#include <PolicyRepository/UNIX_PolicyRepository.h>
#include <AutonomousSystem/UNIX_AutonomousSystem.h>

#include "UNIX_ContainedDomainDeps.h"




class UNIX_ContainedDomain :
	public CIM_SystemComponent
{
public:

	UNIX_ContainedDomain();
	~UNIX_ContainedDomain();

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

#	include "UNIX_ContainedDomainPrivate.h"

	int groupIndex;
	int partIndex;
	UNIX_ReusablePolicyContainer group_UNIX_ReusablePolicyContainer_Component;
	int group_UNIX_ReusablePolicyContainer_Index;
	bool endOf_UNIX_ReusablePolicyContainer_Group;
	UNIX_RoutingProtocolDomain group_UNIX_RoutingProtocolDomain_Component;
	int group_UNIX_RoutingProtocolDomain_Index;
	bool endOf_UNIX_RoutingProtocolDomain_Group;
	UNIX_OSPFArea group_UNIX_OSPFArea_Component;
	int group_UNIX_OSPFArea_Index;
	bool endOf_UNIX_OSPFArea_Group;
	UNIX_Network group_UNIX_Network_Component;
	int group_UNIX_Network_Index;
	bool endOf_UNIX_Network_Group;
	UNIX_PolicyRepository group_UNIX_PolicyRepository_Component;
	int group_UNIX_PolicyRepository_Index;
	bool endOf_UNIX_PolicyRepository_Group;
	UNIX_AutonomousSystem group_UNIX_AutonomousSystem_Component;
	int group_UNIX_AutonomousSystem_Index;
	bool endOf_UNIX_AutonomousSystem_Group;
	UNIX_ReusablePolicyContainer part_UNIX_ReusablePolicyContainer_Component;
	int part_UNIX_ReusablePolicyContainer_Index;
	bool endOf_UNIX_ReusablePolicyContainer_Part;
	UNIX_RoutingProtocolDomain part_UNIX_RoutingProtocolDomain_Component;
	int part_UNIX_RoutingProtocolDomain_Index;
	bool endOf_UNIX_RoutingProtocolDomain_Part;
	UNIX_OSPFArea part_UNIX_OSPFArea_Component;
	int part_UNIX_OSPFArea_Index;
	bool endOf_UNIX_OSPFArea_Part;
	UNIX_Network part_UNIX_Network_Component;
	int part_UNIX_Network_Index;
	bool endOf_UNIX_Network_Part;
	UNIX_PolicyRepository part_UNIX_PolicyRepository_Component;
	int part_UNIX_PolicyRepository_Index;
	bool endOf_UNIX_PolicyRepository_Part;
	UNIX_AutonomousSystem part_UNIX_AutonomousSystem_Component;
	int part_UNIX_AutonomousSystem_Index;
	bool endOf_UNIX_AutonomousSystem_Part;


};

#endif /* UNIX_CONTAINEDDOMAIN */
