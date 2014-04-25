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

#ifndef __UNIX_VIRTUALSYSTEMSETTINGDATACOMPONENT_H
#define __UNIX_VIRTUALSYSTEMSETTINGDATACOMPONENT_H


#include "CIM_Component.h"
#include <VirtualSystemSettingData/UNIX_VirtualSystemSettingData.h>
#include <EthernetPortAllocationSettingData/UNIX_EthernetPortAllocationSettingData.h>
#include <ProcessorAllocationSettingData/UNIX_ProcessorAllocationSettingData.h>
#include <PowerAllocationSettingData/UNIX_PowerAllocationSettingData.h>
#include <StorageAllocationSettingData/UNIX_StorageAllocationSettingData.h>

#include "UNIX_VirtualSystemSettingDataComponentDeps.h"




class UNIX_VirtualSystemSettingDataComponent :
	public CIM_Component
{
public:

	UNIX_VirtualSystemSettingDataComponent();
	~UNIX_VirtualSystemSettingDataComponent();

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

#	include "UNIX_VirtualSystemSettingDataComponentPrivate.h"

	int groupIndex;
	int partIndex;
	UNIX_VirtualSystemSettingData group_UNIX_VirtualSystemSettingData_Component;
	int group_UNIX_VirtualSystemSettingData_Index;
	bool endOf_UNIX_VirtualSystemSettingData_Group;
	UNIX_EthernetPortAllocationSettingData part_UNIX_EthernetPortAllocationSettingData_Component;
	int part_UNIX_EthernetPortAllocationSettingData_Index;
	bool endOf_UNIX_EthernetPortAllocationSettingData_Part;
	UNIX_ProcessorAllocationSettingData part_UNIX_ProcessorAllocationSettingData_Component;
	int part_UNIX_ProcessorAllocationSettingData_Index;
	bool endOf_UNIX_ProcessorAllocationSettingData_Part;
	UNIX_PowerAllocationSettingData part_UNIX_PowerAllocationSettingData_Component;
	int part_UNIX_PowerAllocationSettingData_Index;
	bool endOf_UNIX_PowerAllocationSettingData_Part;
	UNIX_StorageAllocationSettingData part_UNIX_StorageAllocationSettingData_Component;
	int part_UNIX_StorageAllocationSettingData_Index;
	bool endOf_UNIX_StorageAllocationSettingData_Part;


};

#endif /* UNIX_VIRTUALSYSTEMSETTINGDATACOMPONENT */
