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

#ifndef __UNIX_PRODUCTPHYSICALCOMPONENT_H
#define __UNIX_PRODUCTPHYSICALCOMPONENT_H


#include "CIM_Component.h"
#include <Product/UNIX_Product.h>
#include <PhysicalLink/UNIX_PhysicalLink.h>
#include <PhysicalMedia/UNIX_PhysicalMedia.h>
#include <PhysicalTape/UNIX_PhysicalTape.h>
#include <Chip/UNIX_Chip.h>
#include <PhysicalMemory/UNIX_PhysicalMemory.h>
#include <PhysicalConnector/UNIX_PhysicalConnector.h>
#include <Slot/UNIX_Slot.h>
#include <Card/UNIX_Card.h>
#include <SystemBusCard/UNIX_SystemBusCard.h>
#include <Rack/UNIX_Rack.h>
#include <Chassis/UNIX_Chassis.h>
#include <PackageLocation/UNIX_PackageLocation.h>
#include <StorageMediaLocation/UNIX_StorageMediaLocation.h>
#include <Magazine/UNIX_Magazine.h>

#include "UNIX_ProductPhysicalComponentDeps.h"




class UNIX_ProductPhysicalComponent :
	public CIM_Component
{
public:

	UNIX_ProductPhysicalComponent();
	~UNIX_ProductPhysicalComponent();

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

#	include "UNIX_ProductPhysicalComponentPrivate.h"

	int groupIndex;
	int partIndex;
	UNIX_Product group_UNIX_Product_Component;
	int group_UNIX_Product_Index;
	bool endOf_UNIX_Product_Group;
	UNIX_PhysicalLink part_UNIX_PhysicalLink_Component;
	int part_UNIX_PhysicalLink_Index;
	bool endOf_UNIX_PhysicalLink_Part;
	UNIX_PhysicalMedia part_UNIX_PhysicalMedia_Component;
	int part_UNIX_PhysicalMedia_Index;
	bool endOf_UNIX_PhysicalMedia_Part;
	UNIX_PhysicalTape part_UNIX_PhysicalTape_Component;
	int part_UNIX_PhysicalTape_Index;
	bool endOf_UNIX_PhysicalTape_Part;
	UNIX_Chip part_UNIX_Chip_Component;
	int part_UNIX_Chip_Index;
	bool endOf_UNIX_Chip_Part;
	UNIX_PhysicalMemory part_UNIX_PhysicalMemory_Component;
	int part_UNIX_PhysicalMemory_Index;
	bool endOf_UNIX_PhysicalMemory_Part;
	UNIX_PhysicalConnector part_UNIX_PhysicalConnector_Component;
	int part_UNIX_PhysicalConnector_Index;
	bool endOf_UNIX_PhysicalConnector_Part;
	UNIX_Slot part_UNIX_Slot_Component;
	int part_UNIX_Slot_Index;
	bool endOf_UNIX_Slot_Part;
	UNIX_Card part_UNIX_Card_Component;
	int part_UNIX_Card_Index;
	bool endOf_UNIX_Card_Part;
	UNIX_SystemBusCard part_UNIX_SystemBusCard_Component;
	int part_UNIX_SystemBusCard_Index;
	bool endOf_UNIX_SystemBusCard_Part;
	UNIX_Rack part_UNIX_Rack_Component;
	int part_UNIX_Rack_Index;
	bool endOf_UNIX_Rack_Part;
	UNIX_Chassis part_UNIX_Chassis_Component;
	int part_UNIX_Chassis_Index;
	bool endOf_UNIX_Chassis_Part;
	UNIX_PackageLocation part_UNIX_PackageLocation_Component;
	int part_UNIX_PackageLocation_Index;
	bool endOf_UNIX_PackageLocation_Part;
	UNIX_StorageMediaLocation part_UNIX_StorageMediaLocation_Component;
	int part_UNIX_StorageMediaLocation_Index;
	bool endOf_UNIX_StorageMediaLocation_Part;
	UNIX_Magazine part_UNIX_Magazine_Component;
	int part_UNIX_Magazine_Index;
	bool endOf_UNIX_Magazine_Part;


};

#endif /* UNIX_PRODUCTPHYSICALCOMPONENT */
