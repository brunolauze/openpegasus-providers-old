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

#ifndef __UNIX_CONNECTORONPACKAGE_H
#define __UNIX_CONNECTORONPACKAGE_H


#include "CIM_Container.h"
#include <Card/UNIX_Card.h>
#include <SystemBusCard/UNIX_SystemBusCard.h>
#include <Rack/UNIX_Rack.h>
#include <Chassis/UNIX_Chassis.h>
#include <PackageLocation/UNIX_PackageLocation.h>
#include <StorageMediaLocation/UNIX_StorageMediaLocation.h>
#include <Magazine/UNIX_Magazine.h>
#include <PhysicalConnector/UNIX_PhysicalConnector.h>

#include "UNIX_ConnectorOnPackageDeps.h"




class UNIX_ConnectorOnPackage :
	public CIM_Container
{
public:

	UNIX_ConnectorOnPackage();
	~UNIX_ConnectorOnPackage();

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

private:
	CIMName currentScope;

#	include "UNIX_ConnectorOnPackagePrivate.h"

	int groupIndex;
	int partIndex;
	UNIX_Card group_UNIX_Card_Component;
	int group_UNIX_Card_Index;
	bool endOf_UNIX_Card_Group;
	UNIX_SystemBusCard group_UNIX_SystemBusCard_Component;
	int group_UNIX_SystemBusCard_Index;
	bool endOf_UNIX_SystemBusCard_Group;
	UNIX_Rack group_UNIX_Rack_Component;
	int group_UNIX_Rack_Index;
	bool endOf_UNIX_Rack_Group;
	UNIX_Chassis group_UNIX_Chassis_Component;
	int group_UNIX_Chassis_Index;
	bool endOf_UNIX_Chassis_Group;
	UNIX_PackageLocation group_UNIX_PackageLocation_Component;
	int group_UNIX_PackageLocation_Index;
	bool endOf_UNIX_PackageLocation_Group;
	UNIX_StorageMediaLocation group_UNIX_StorageMediaLocation_Component;
	int group_UNIX_StorageMediaLocation_Index;
	bool endOf_UNIX_StorageMediaLocation_Group;
	UNIX_Magazine group_UNIX_Magazine_Component;
	int group_UNIX_Magazine_Index;
	bool endOf_UNIX_Magazine_Group;
	UNIX_PhysicalConnector part_UNIX_PhysicalConnector_Component;
	int part_UNIX_PhysicalConnector_Index;
	bool endOf_UNIX_PhysicalConnector_Part;


};

#endif /* UNIX_CONNECTORONPACKAGE */
