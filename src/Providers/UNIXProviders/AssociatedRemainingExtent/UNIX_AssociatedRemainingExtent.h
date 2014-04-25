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

#ifndef __UNIX_ASSOCIATEDREMAININGEXTENT_H
#define __UNIX_ASSOCIATEDREMAININGEXTENT_H


#include "CIM_Component.h"
#include <StoragePool/UNIX_StoragePool.h>
#include <StorageVolume/UNIX_StorageVolume.h>
#include <VolumeSet/UNIX_VolumeSet.h>
#include <LogicalDisk/UNIX_LogicalDisk.h>
#include <PhysicalExtent/UNIX_PhysicalExtent.h>
#include <VolatileStorage/UNIX_VolatileStorage.h>
#include <NonVolatileStorage/UNIX_NonVolatileStorage.h>
#include <CacheMemory/UNIX_CacheMemory.h>
#include <DatabaseSegment/UNIX_DatabaseSegment.h>
#include <OpaqueManagementData/UNIX_OpaqueManagementData.h>
#include <AggregatePSExtent/UNIX_AggregatePSExtent.h>
#include <Snapshot/UNIX_Snapshot.h>
#include <AggregatePExtent/UNIX_AggregatePExtent.h>
#include <TapePartition/UNIX_TapePartition.h>
#include <DiskPartition/UNIX_DiskPartition.h>
#include <CompositeExtent/UNIX_CompositeExtent.h>
#include <ProtectedSpaceExtent/UNIX_ProtectedSpaceExtent.h>

#include "UNIX_AssociatedRemainingExtentDeps.h"




class UNIX_AssociatedRemainingExtent :
	public CIM_Component
{
public:

	UNIX_AssociatedRemainingExtent();
	~UNIX_AssociatedRemainingExtent();

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

#	include "UNIX_AssociatedRemainingExtentPrivate.h"

	int groupIndex;
	int partIndex;
	UNIX_StoragePool group_UNIX_StoragePool_Component;
	int group_UNIX_StoragePool_Index;
	bool endOf_UNIX_StoragePool_Group;
	UNIX_StorageVolume part_UNIX_StorageVolume_Component;
	int part_UNIX_StorageVolume_Index;
	bool endOf_UNIX_StorageVolume_Part;
	UNIX_VolumeSet part_UNIX_VolumeSet_Component;
	int part_UNIX_VolumeSet_Index;
	bool endOf_UNIX_VolumeSet_Part;
	UNIX_LogicalDisk part_UNIX_LogicalDisk_Component;
	int part_UNIX_LogicalDisk_Index;
	bool endOf_UNIX_LogicalDisk_Part;
	UNIX_PhysicalExtent part_UNIX_PhysicalExtent_Component;
	int part_UNIX_PhysicalExtent_Index;
	bool endOf_UNIX_PhysicalExtent_Part;
	UNIX_VolatileStorage part_UNIX_VolatileStorage_Component;
	int part_UNIX_VolatileStorage_Index;
	bool endOf_UNIX_VolatileStorage_Part;
	UNIX_NonVolatileStorage part_UNIX_NonVolatileStorage_Component;
	int part_UNIX_NonVolatileStorage_Index;
	bool endOf_UNIX_NonVolatileStorage_Part;
	UNIX_CacheMemory part_UNIX_CacheMemory_Component;
	int part_UNIX_CacheMemory_Index;
	bool endOf_UNIX_CacheMemory_Part;
	UNIX_DatabaseSegment part_UNIX_DatabaseSegment_Component;
	int part_UNIX_DatabaseSegment_Index;
	bool endOf_UNIX_DatabaseSegment_Part;
	UNIX_OpaqueManagementData part_UNIX_OpaqueManagementData_Component;
	int part_UNIX_OpaqueManagementData_Index;
	bool endOf_UNIX_OpaqueManagementData_Part;
	UNIX_AggregatePSExtent part_UNIX_AggregatePSExtent_Component;
	int part_UNIX_AggregatePSExtent_Index;
	bool endOf_UNIX_AggregatePSExtent_Part;
	UNIX_Snapshot part_UNIX_Snapshot_Component;
	int part_UNIX_Snapshot_Index;
	bool endOf_UNIX_Snapshot_Part;
	UNIX_AggregatePExtent part_UNIX_AggregatePExtent_Component;
	int part_UNIX_AggregatePExtent_Index;
	bool endOf_UNIX_AggregatePExtent_Part;
	UNIX_TapePartition part_UNIX_TapePartition_Component;
	int part_UNIX_TapePartition_Index;
	bool endOf_UNIX_TapePartition_Part;
	UNIX_DiskPartition part_UNIX_DiskPartition_Component;
	int part_UNIX_DiskPartition_Index;
	bool endOf_UNIX_DiskPartition_Part;
	UNIX_CompositeExtent part_UNIX_CompositeExtent_Component;
	int part_UNIX_CompositeExtent_Index;
	bool endOf_UNIX_CompositeExtent_Part;
	UNIX_ProtectedSpaceExtent part_UNIX_ProtectedSpaceExtent_Component;
	int part_UNIX_ProtectedSpaceExtent_Index;
	bool endOf_UNIX_ProtectedSpaceExtent_Part;


};

#endif /* UNIX_ASSOCIATEDREMAININGEXTENT */
