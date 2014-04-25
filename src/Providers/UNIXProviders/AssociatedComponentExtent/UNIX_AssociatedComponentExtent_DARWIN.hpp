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


UNIX_AssociatedComponentExtent::UNIX_AssociatedComponentExtent(void)
{
}

UNIX_AssociatedComponentExtent::~UNIX_AssociatedComponentExtent(void)
{
}


Boolean UNIX_AssociatedComponentExtent::getGroupComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_COMPONENT, getGroupComponent());
	return true;
}

CIMInstance UNIX_AssociatedComponentExtent::getGroupComponent() const
{
	return CIMInstance(CIMName("CIM_Component"));
}

Boolean UNIX_AssociatedComponentExtent::getPartComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_COMPONENT, getPartComponent());
	return true;
}

CIMInstance UNIX_AssociatedComponentExtent::getPartComponent() const
{
	return CIMInstance(CIMName("CIM_Component"));
}



Boolean UNIX_AssociatedComponentExtent::initialize()
{
	groupIndex = -1;
	partIndex = 0;
	group_UNIX_StoragePool_Index = -1;
	endOf_UNIX_StoragePool_Group = false;
	group_UNIX_StoragePool_Component.initialize();
	part_UNIX_StorageVolume_Index = -1;
	endOf_UNIX_StorageVolume_Part = false;
	part_UNIX_VolumeSet_Index = -1;
	endOf_UNIX_VolumeSet_Part = false;
	part_UNIX_LogicalDisk_Index = -1;
	endOf_UNIX_LogicalDisk_Part = false;
	part_UNIX_PhysicalExtent_Index = -1;
	endOf_UNIX_PhysicalExtent_Part = false;
	part_UNIX_VolatileStorage_Index = -1;
	endOf_UNIX_VolatileStorage_Part = false;
	part_UNIX_NonVolatileStorage_Index = -1;
	endOf_UNIX_NonVolatileStorage_Part = false;
	part_UNIX_CacheMemory_Index = -1;
	endOf_UNIX_CacheMemory_Part = false;
	part_UNIX_DatabaseSegment_Index = -1;
	endOf_UNIX_DatabaseSegment_Part = false;
	part_UNIX_OpaqueManagementData_Index = -1;
	endOf_UNIX_OpaqueManagementData_Part = false;
	part_UNIX_AggregatePSExtent_Index = -1;
	endOf_UNIX_AggregatePSExtent_Part = false;
	part_UNIX_Snapshot_Index = -1;
	endOf_UNIX_Snapshot_Part = false;
	part_UNIX_AggregatePExtent_Index = -1;
	endOf_UNIX_AggregatePExtent_Part = false;
	part_UNIX_TapePartition_Index = -1;
	endOf_UNIX_TapePartition_Part = false;
	part_UNIX_DiskPartition_Index = -1;
	endOf_UNIX_DiskPartition_Part = false;
	part_UNIX_CompositeExtent_Index = -1;
	endOf_UNIX_CompositeExtent_Part = false;
	part_UNIX_ProtectedSpaceExtent_Index = -1;
	endOf_UNIX_ProtectedSpaceExtent_Part = false;
	return true;
}

Boolean UNIX_AssociatedComponentExtent::load(int &pIndex)
{
	if (pIndex == 0 || (endOf_UNIX_StorageVolume_Part &&
			endOf_UNIX_VolumeSet_Part &&
			endOf_UNIX_LogicalDisk_Part &&
			endOf_UNIX_PhysicalExtent_Part &&
			endOf_UNIX_VolatileStorage_Part &&
			endOf_UNIX_NonVolatileStorage_Part &&
			endOf_UNIX_CacheMemory_Part &&
			endOf_UNIX_DatabaseSegment_Part &&
			endOf_UNIX_OpaqueManagementData_Part &&
			endOf_UNIX_AggregatePSExtent_Part &&
			endOf_UNIX_Snapshot_Part &&
			endOf_UNIX_AggregatePExtent_Part &&
			endOf_UNIX_TapePartition_Part &&
			endOf_UNIX_DiskPartition_Part &&
			endOf_UNIX_CompositeExtent_Part &&
			endOf_UNIX_ProtectedSpaceExtent_Part))
	{
		if (groupIndex == 0)
		{
			group_UNIX_StoragePool_Index++;
			endOf_UNIX_StoragePool_Group = !group_UNIX_StoragePool_Component.load(group_UNIX_StoragePool_Index);
			if (endOf_UNIX_StoragePool_Group)
			{
				endOf_UNIX_StorageVolume_Part = false;
				part_UNIX_StorageVolume_Component.setScope(CIMName("UNIX_StoragePool"));
				part_UNIX_StorageVolume_Component.initialize();
				endOf_UNIX_VolumeSet_Part = false;
				part_UNIX_VolumeSet_Component.setScope(CIMName("UNIX_StoragePool"));
				part_UNIX_VolumeSet_Component.initialize();
				endOf_UNIX_LogicalDisk_Part = false;
				part_UNIX_LogicalDisk_Component.setScope(CIMName("UNIX_StoragePool"));
				part_UNIX_LogicalDisk_Component.initialize();
				endOf_UNIX_PhysicalExtent_Part = false;
				part_UNIX_PhysicalExtent_Component.setScope(CIMName("UNIX_StoragePool"));
				part_UNIX_PhysicalExtent_Component.initialize();
				endOf_UNIX_VolatileStorage_Part = false;
				part_UNIX_VolatileStorage_Component.setScope(CIMName("UNIX_StoragePool"));
				part_UNIX_VolatileStorage_Component.initialize();
				endOf_UNIX_NonVolatileStorage_Part = false;
				part_UNIX_NonVolatileStorage_Component.setScope(CIMName("UNIX_StoragePool"));
				part_UNIX_NonVolatileStorage_Component.initialize();
				endOf_UNIX_CacheMemory_Part = false;
				part_UNIX_CacheMemory_Component.setScope(CIMName("UNIX_StoragePool"));
				part_UNIX_CacheMemory_Component.initialize();
				endOf_UNIX_DatabaseSegment_Part = false;
				part_UNIX_DatabaseSegment_Component.setScope(CIMName("UNIX_StoragePool"));
				part_UNIX_DatabaseSegment_Component.initialize();
				endOf_UNIX_OpaqueManagementData_Part = false;
				part_UNIX_OpaqueManagementData_Component.setScope(CIMName("UNIX_StoragePool"));
				part_UNIX_OpaqueManagementData_Component.initialize();
				endOf_UNIX_AggregatePSExtent_Part = false;
				part_UNIX_AggregatePSExtent_Component.setScope(CIMName("UNIX_StoragePool"));
				part_UNIX_AggregatePSExtent_Component.initialize();
				endOf_UNIX_Snapshot_Part = false;
				part_UNIX_Snapshot_Component.setScope(CIMName("UNIX_StoragePool"));
				part_UNIX_Snapshot_Component.initialize();
				endOf_UNIX_AggregatePExtent_Part = false;
				part_UNIX_AggregatePExtent_Component.setScope(CIMName("UNIX_StoragePool"));
				part_UNIX_AggregatePExtent_Component.initialize();
				endOf_UNIX_TapePartition_Part = false;
				part_UNIX_TapePartition_Component.setScope(CIMName("UNIX_StoragePool"));
				part_UNIX_TapePartition_Component.initialize();
				endOf_UNIX_DiskPartition_Part = false;
				part_UNIX_DiskPartition_Component.setScope(CIMName("UNIX_StoragePool"));
				part_UNIX_DiskPartition_Component.initialize();
				endOf_UNIX_CompositeExtent_Part = false;
				part_UNIX_CompositeExtent_Component.setScope(CIMName("UNIX_StoragePool"));
				part_UNIX_CompositeExtent_Component.initialize();
				endOf_UNIX_ProtectedSpaceExtent_Part = false;
				part_UNIX_ProtectedSpaceExtent_Component.setScope(CIMName("UNIX_StoragePool"));
				part_UNIX_ProtectedSpaceExtent_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
	}
	if (partIndex == 0)
	{
		part_UNIX_StorageVolume_Index++;
	endOf_UNIX_StorageVolume_Part = !part_UNIX_StorageVolume_Component.load(part_UNIX_StorageVolume_Index);
	}
	if (partIndex == 1)
	{
		part_UNIX_VolumeSet_Index++;
	endOf_UNIX_VolumeSet_Part = !part_UNIX_VolumeSet_Component.load(part_UNIX_VolumeSet_Index);
	}
	if (partIndex == 2)
	{
		part_UNIX_LogicalDisk_Index++;
	endOf_UNIX_LogicalDisk_Part = !part_UNIX_LogicalDisk_Component.load(part_UNIX_LogicalDisk_Index);
	}
	if (partIndex == 3)
	{
		part_UNIX_PhysicalExtent_Index++;
	endOf_UNIX_PhysicalExtent_Part = !part_UNIX_PhysicalExtent_Component.load(part_UNIX_PhysicalExtent_Index);
	}
	if (partIndex == 4)
	{
		part_UNIX_VolatileStorage_Index++;
	endOf_UNIX_VolatileStorage_Part = !part_UNIX_VolatileStorage_Component.load(part_UNIX_VolatileStorage_Index);
	}
	if (partIndex == 5)
	{
		part_UNIX_NonVolatileStorage_Index++;
	endOf_UNIX_NonVolatileStorage_Part = !part_UNIX_NonVolatileStorage_Component.load(part_UNIX_NonVolatileStorage_Index);
	}
	if (partIndex == 6)
	{
		part_UNIX_CacheMemory_Index++;
	endOf_UNIX_CacheMemory_Part = !part_UNIX_CacheMemory_Component.load(part_UNIX_CacheMemory_Index);
	}
	if (partIndex == 7)
	{
		part_UNIX_DatabaseSegment_Index++;
	endOf_UNIX_DatabaseSegment_Part = !part_UNIX_DatabaseSegment_Component.load(part_UNIX_DatabaseSegment_Index);
	}
	if (partIndex == 8)
	{
		part_UNIX_OpaqueManagementData_Index++;
	endOf_UNIX_OpaqueManagementData_Part = !part_UNIX_OpaqueManagementData_Component.load(part_UNIX_OpaqueManagementData_Index);
	}
	if (partIndex == 9)
	{
		part_UNIX_AggregatePSExtent_Index++;
	endOf_UNIX_AggregatePSExtent_Part = !part_UNIX_AggregatePSExtent_Component.load(part_UNIX_AggregatePSExtent_Index);
	}
	if (partIndex == 10)
	{
		part_UNIX_Snapshot_Index++;
	endOf_UNIX_Snapshot_Part = !part_UNIX_Snapshot_Component.load(part_UNIX_Snapshot_Index);
	}
	if (partIndex == 11)
	{
		part_UNIX_AggregatePExtent_Index++;
	endOf_UNIX_AggregatePExtent_Part = !part_UNIX_AggregatePExtent_Component.load(part_UNIX_AggregatePExtent_Index);
	}
	if (partIndex == 12)
	{
		part_UNIX_TapePartition_Index++;
	endOf_UNIX_TapePartition_Part = !part_UNIX_TapePartition_Component.load(part_UNIX_TapePartition_Index);
	}
	if (partIndex == 13)
	{
		part_UNIX_DiskPartition_Index++;
	endOf_UNIX_DiskPartition_Part = !part_UNIX_DiskPartition_Component.load(part_UNIX_DiskPartition_Index);
	}
	if (partIndex == 14)
	{
		part_UNIX_CompositeExtent_Index++;
	endOf_UNIX_CompositeExtent_Part = !part_UNIX_CompositeExtent_Component.load(part_UNIX_CompositeExtent_Index);
	}
	if (partIndex == 15)
	{
		part_UNIX_ProtectedSpaceExtent_Index++;
	endOf_UNIX_ProtectedSpaceExtent_Part = !part_UNIX_ProtectedSpaceExtent_Component.load(part_UNIX_ProtectedSpaceExtent_Index);
	}
	if (partIndex == 0 && endOf_UNIX_StorageVolume_Part)
	{
		part_UNIX_StorageVolume_Component.finalize();
		partIndex++;
	}
	if (partIndex == 1 && endOf_UNIX_VolumeSet_Part)
	{
		part_UNIX_VolumeSet_Component.finalize();
		partIndex++;
	}
	if (partIndex == 2 && endOf_UNIX_LogicalDisk_Part)
	{
		part_UNIX_LogicalDisk_Component.finalize();
		partIndex++;
	}
	if (partIndex == 3 && endOf_UNIX_PhysicalExtent_Part)
	{
		part_UNIX_PhysicalExtent_Component.finalize();
		partIndex++;
	}
	if (partIndex == 4 && endOf_UNIX_VolatileStorage_Part)
	{
		part_UNIX_VolatileStorage_Component.finalize();
		partIndex++;
	}
	if (partIndex == 5 && endOf_UNIX_NonVolatileStorage_Part)
	{
		part_UNIX_NonVolatileStorage_Component.finalize();
		partIndex++;
	}
	if (partIndex == 6 && endOf_UNIX_CacheMemory_Part)
	{
		part_UNIX_CacheMemory_Component.finalize();
		partIndex++;
	}
	if (partIndex == 7 && endOf_UNIX_DatabaseSegment_Part)
	{
		part_UNIX_DatabaseSegment_Component.finalize();
		partIndex++;
	}
	if (partIndex == 8 && endOf_UNIX_OpaqueManagementData_Part)
	{
		part_UNIX_OpaqueManagementData_Component.finalize();
		partIndex++;
	}
	if (partIndex == 9 && endOf_UNIX_AggregatePSExtent_Part)
	{
		part_UNIX_AggregatePSExtent_Component.finalize();
		partIndex++;
	}
	if (partIndex == 10 && endOf_UNIX_Snapshot_Part)
	{
		part_UNIX_Snapshot_Component.finalize();
		partIndex++;
	}
	if (partIndex == 11 && endOf_UNIX_AggregatePExtent_Part)
	{
		part_UNIX_AggregatePExtent_Component.finalize();
		partIndex++;
	}
	if (partIndex == 12 && endOf_UNIX_TapePartition_Part)
	{
		part_UNIX_TapePartition_Component.finalize();
		partIndex++;
	}
	if (partIndex == 13 && endOf_UNIX_DiskPartition_Part)
	{
		part_UNIX_DiskPartition_Component.finalize();
		partIndex++;
	}
	if (partIndex == 14 && endOf_UNIX_CompositeExtent_Part)
	{
		part_UNIX_CompositeExtent_Component.finalize();
		partIndex++;
	}
	if (partIndex == 15 && endOf_UNIX_ProtectedSpaceExtent_Part)
	{
		part_UNIX_ProtectedSpaceExtent_Component.finalize();
		partIndex++;
	}

	if (endOf_UNIX_StoragePool_Group &&
		endOf_UNIX_StorageVolume_Part &&
		endOf_UNIX_VolumeSet_Part &&
		endOf_UNIX_LogicalDisk_Part &&
		endOf_UNIX_PhysicalExtent_Part &&
		endOf_UNIX_VolatileStorage_Part &&
		endOf_UNIX_NonVolatileStorage_Part &&
		endOf_UNIX_CacheMemory_Part &&
		endOf_UNIX_DatabaseSegment_Part &&
		endOf_UNIX_OpaqueManagementData_Part &&
		endOf_UNIX_AggregatePSExtent_Part &&
		endOf_UNIX_Snapshot_Part &&
		endOf_UNIX_AggregatePExtent_Part &&
		endOf_UNIX_TapePartition_Part &&
		endOf_UNIX_DiskPartition_Part &&
		endOf_UNIX_CompositeExtent_Part &&
		endOf_UNIX_ProtectedSpaceExtent_Part)		return false;
	return true;
}

Boolean UNIX_AssociatedComponentExtent::finalize()
{
	group_UNIX_StoragePool_Component.finalize();
	part_UNIX_StorageVolume_Component.finalize();
	part_UNIX_VolumeSet_Component.finalize();
	part_UNIX_LogicalDisk_Component.finalize();
	part_UNIX_PhysicalExtent_Component.finalize();
	part_UNIX_VolatileStorage_Component.finalize();
	part_UNIX_NonVolatileStorage_Component.finalize();
	part_UNIX_CacheMemory_Component.finalize();
	part_UNIX_DatabaseSegment_Component.finalize();
	part_UNIX_OpaqueManagementData_Component.finalize();
	part_UNIX_AggregatePSExtent_Component.finalize();
	part_UNIX_Snapshot_Component.finalize();
	part_UNIX_AggregatePExtent_Component.finalize();
	part_UNIX_TapePartition_Component.finalize();
	part_UNIX_DiskPartition_Component.finalize();
	part_UNIX_CompositeExtent_Component.finalize();
	part_UNIX_ProtectedSpaceExtent_Component.finalize();
	return true;
}

Boolean UNIX_AssociatedComponentExtent::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String groupComponentKey;
	String partComponentKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_GROUP_COMPONENT)) groupComponentKey = kb.getValue();
		else if (keyName.equal(PROPERTY_PART_COMPONENT)) partComponentKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
