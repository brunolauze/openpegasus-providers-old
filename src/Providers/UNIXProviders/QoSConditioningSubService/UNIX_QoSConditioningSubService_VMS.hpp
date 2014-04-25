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


UNIX_QoSConditioningSubService::UNIX_QoSConditioningSubService(void)
{
}

UNIX_QoSConditioningSubService::~UNIX_QoSConditioningSubService(void)
{
}


Boolean UNIX_QoSConditioningSubService::getGroupComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_COMPONENT, getGroupComponent());
	return true;
}

CIMInstance UNIX_QoSConditioningSubService::getGroupComponent() const
{
	return CIMInstance(CIMName("CIM_Component"));
}

Boolean UNIX_QoSConditioningSubService::getPartComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_COMPONENT, getPartComponent());
	return true;
}

CIMInstance UNIX_QoSConditioningSubService::getPartComponent() const
{
	return CIMInstance(CIMName("CIM_Component"));
}



Boolean UNIX_QoSConditioningSubService::initialize()
{
	groupIndex = -1;
	partIndex = 0;
	group_UNIX_EFService_Index = -1;
	endOf_UNIX_EFService_Group = false;
	group_UNIX_EFService_Component.initialize();
	group_UNIX_AFService_Index = -1;
	endOf_UNIX_AFService_Group = false;
	group_UNIX_AFService_Component.initialize();
	group_UNIX_FlowService_Index = -1;
	endOf_UNIX_FlowService_Group = false;
	group_UNIX_FlowService_Component.initialize();
	group_UNIX_Hdr8021PService_Index = -1;
	endOf_UNIX_Hdr8021PService_Group = false;
	group_UNIX_Hdr8021PService_Component.initialize();
	group_UNIX_PrecedenceService_Index = -1;
	endOf_UNIX_PrecedenceService_Group = false;
	group_UNIX_PrecedenceService_Component.initialize();
	part_UNIX_REDDropperService_Index = -1;
	endOf_UNIX_REDDropperService_Part = false;
	part_UNIX_WeightedREDDropperService_Index = -1;
	endOf_UNIX_WeightedREDDropperService_Part = false;
	part_UNIX_HeadTailDropper_Index = -1;
	endOf_UNIX_HeadTailDropper_Part = false;
	part_UNIX_QueuingService_Index = -1;
	endOf_UNIX_QueuingService_Part = false;
	part_UNIX_PacketSchedulingService_Index = -1;
	endOf_UNIX_PacketSchedulingService_Part = false;
	part_UNIX_NonWorkConservingSchedulingService_Index = -1;
	endOf_UNIX_NonWorkConservingSchedulingService_Part = false;
	part_UNIX_ToSMarkerService_Index = -1;
	endOf_UNIX_ToSMarkerService_Part = false;
	part_UNIX_Priority8021QMarkerService_Index = -1;
	endOf_UNIX_Priority8021QMarkerService_Part = false;
	part_UNIX_PreambleMarkerService_Index = -1;
	endOf_UNIX_PreambleMarkerService_Part = false;
	part_UNIX_DSCPMarkerService_Index = -1;
	endOf_UNIX_DSCPMarkerService_Part = false;
	part_UNIX_ClassifierService_Index = -1;
	endOf_UNIX_ClassifierService_Part = false;
	part_UNIX_ClassifierElement_Index = -1;
	endOf_UNIX_ClassifierElement_Part = false;
	part_UNIX_TokenBucketMeterService_Index = -1;
	endOf_UNIX_TokenBucketMeterService_Part = false;
	part_UNIX_EWMAMeterService_Index = -1;
	endOf_UNIX_EWMAMeterService_Part = false;
	part_UNIX_AverageRateMeterService_Index = -1;
	endOf_UNIX_AverageRateMeterService_Part = false;
	return true;
}

Boolean UNIX_QoSConditioningSubService::load(int &pIndex)
{
	if (pIndex == 0 || (endOf_UNIX_REDDropperService_Part &&
			endOf_UNIX_WeightedREDDropperService_Part &&
			endOf_UNIX_HeadTailDropper_Part &&
			endOf_UNIX_QueuingService_Part &&
			endOf_UNIX_PacketSchedulingService_Part &&
			endOf_UNIX_NonWorkConservingSchedulingService_Part &&
			endOf_UNIX_ToSMarkerService_Part &&
			endOf_UNIX_Priority8021QMarkerService_Part &&
			endOf_UNIX_PreambleMarkerService_Part &&
			endOf_UNIX_DSCPMarkerService_Part &&
			endOf_UNIX_ClassifierService_Part &&
			endOf_UNIX_ClassifierElement_Part &&
			endOf_UNIX_TokenBucketMeterService_Part &&
			endOf_UNIX_EWMAMeterService_Part &&
			endOf_UNIX_AverageRateMeterService_Part))
	{
		if (groupIndex == 0)
		{
			group_UNIX_EFService_Index++;
			endOf_UNIX_EFService_Group = !group_UNIX_EFService_Component.load(group_UNIX_EFService_Index);
			if (endOf_UNIX_EFService_Group)
			{
				endOf_UNIX_REDDropperService_Part = false;
				part_UNIX_REDDropperService_Component.setScope(CIMName("UNIX_EFService"));
				part_UNIX_REDDropperService_Component.initialize();
				endOf_UNIX_WeightedREDDropperService_Part = false;
				part_UNIX_WeightedREDDropperService_Component.setScope(CIMName("UNIX_EFService"));
				part_UNIX_WeightedREDDropperService_Component.initialize();
				endOf_UNIX_HeadTailDropper_Part = false;
				part_UNIX_HeadTailDropper_Component.setScope(CIMName("UNIX_EFService"));
				part_UNIX_HeadTailDropper_Component.initialize();
				endOf_UNIX_QueuingService_Part = false;
				part_UNIX_QueuingService_Component.setScope(CIMName("UNIX_EFService"));
				part_UNIX_QueuingService_Component.initialize();
				endOf_UNIX_PacketSchedulingService_Part = false;
				part_UNIX_PacketSchedulingService_Component.setScope(CIMName("UNIX_EFService"));
				part_UNIX_PacketSchedulingService_Component.initialize();
				endOf_UNIX_NonWorkConservingSchedulingService_Part = false;
				part_UNIX_NonWorkConservingSchedulingService_Component.setScope(CIMName("UNIX_EFService"));
				part_UNIX_NonWorkConservingSchedulingService_Component.initialize();
				endOf_UNIX_ToSMarkerService_Part = false;
				part_UNIX_ToSMarkerService_Component.setScope(CIMName("UNIX_EFService"));
				part_UNIX_ToSMarkerService_Component.initialize();
				endOf_UNIX_Priority8021QMarkerService_Part = false;
				part_UNIX_Priority8021QMarkerService_Component.setScope(CIMName("UNIX_EFService"));
				part_UNIX_Priority8021QMarkerService_Component.initialize();
				endOf_UNIX_PreambleMarkerService_Part = false;
				part_UNIX_PreambleMarkerService_Component.setScope(CIMName("UNIX_EFService"));
				part_UNIX_PreambleMarkerService_Component.initialize();
				endOf_UNIX_DSCPMarkerService_Part = false;
				part_UNIX_DSCPMarkerService_Component.setScope(CIMName("UNIX_EFService"));
				part_UNIX_DSCPMarkerService_Component.initialize();
				endOf_UNIX_ClassifierService_Part = false;
				part_UNIX_ClassifierService_Component.setScope(CIMName("UNIX_EFService"));
				part_UNIX_ClassifierService_Component.initialize();
				endOf_UNIX_ClassifierElement_Part = false;
				part_UNIX_ClassifierElement_Component.setScope(CIMName("UNIX_EFService"));
				part_UNIX_ClassifierElement_Component.initialize();
				endOf_UNIX_TokenBucketMeterService_Part = false;
				part_UNIX_TokenBucketMeterService_Component.setScope(CIMName("UNIX_EFService"));
				part_UNIX_TokenBucketMeterService_Component.initialize();
				endOf_UNIX_EWMAMeterService_Part = false;
				part_UNIX_EWMAMeterService_Component.setScope(CIMName("UNIX_EFService"));
				part_UNIX_EWMAMeterService_Component.initialize();
				endOf_UNIX_AverageRateMeterService_Part = false;
				part_UNIX_AverageRateMeterService_Component.setScope(CIMName("UNIX_EFService"));
				part_UNIX_AverageRateMeterService_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 1)
		{
			group_UNIX_AFService_Index++;
			endOf_UNIX_AFService_Group = !group_UNIX_AFService_Component.load(group_UNIX_AFService_Index);
			if (endOf_UNIX_AFService_Group)
			{
				endOf_UNIX_REDDropperService_Part = false;
				part_UNIX_REDDropperService_Component.setScope(CIMName("UNIX_AFService"));
				part_UNIX_REDDropperService_Component.initialize();
				endOf_UNIX_WeightedREDDropperService_Part = false;
				part_UNIX_WeightedREDDropperService_Component.setScope(CIMName("UNIX_AFService"));
				part_UNIX_WeightedREDDropperService_Component.initialize();
				endOf_UNIX_HeadTailDropper_Part = false;
				part_UNIX_HeadTailDropper_Component.setScope(CIMName("UNIX_AFService"));
				part_UNIX_HeadTailDropper_Component.initialize();
				endOf_UNIX_QueuingService_Part = false;
				part_UNIX_QueuingService_Component.setScope(CIMName("UNIX_AFService"));
				part_UNIX_QueuingService_Component.initialize();
				endOf_UNIX_PacketSchedulingService_Part = false;
				part_UNIX_PacketSchedulingService_Component.setScope(CIMName("UNIX_AFService"));
				part_UNIX_PacketSchedulingService_Component.initialize();
				endOf_UNIX_NonWorkConservingSchedulingService_Part = false;
				part_UNIX_NonWorkConservingSchedulingService_Component.setScope(CIMName("UNIX_AFService"));
				part_UNIX_NonWorkConservingSchedulingService_Component.initialize();
				endOf_UNIX_ToSMarkerService_Part = false;
				part_UNIX_ToSMarkerService_Component.setScope(CIMName("UNIX_AFService"));
				part_UNIX_ToSMarkerService_Component.initialize();
				endOf_UNIX_Priority8021QMarkerService_Part = false;
				part_UNIX_Priority8021QMarkerService_Component.setScope(CIMName("UNIX_AFService"));
				part_UNIX_Priority8021QMarkerService_Component.initialize();
				endOf_UNIX_PreambleMarkerService_Part = false;
				part_UNIX_PreambleMarkerService_Component.setScope(CIMName("UNIX_AFService"));
				part_UNIX_PreambleMarkerService_Component.initialize();
				endOf_UNIX_DSCPMarkerService_Part = false;
				part_UNIX_DSCPMarkerService_Component.setScope(CIMName("UNIX_AFService"));
				part_UNIX_DSCPMarkerService_Component.initialize();
				endOf_UNIX_ClassifierService_Part = false;
				part_UNIX_ClassifierService_Component.setScope(CIMName("UNIX_AFService"));
				part_UNIX_ClassifierService_Component.initialize();
				endOf_UNIX_ClassifierElement_Part = false;
				part_UNIX_ClassifierElement_Component.setScope(CIMName("UNIX_AFService"));
				part_UNIX_ClassifierElement_Component.initialize();
				endOf_UNIX_TokenBucketMeterService_Part = false;
				part_UNIX_TokenBucketMeterService_Component.setScope(CIMName("UNIX_AFService"));
				part_UNIX_TokenBucketMeterService_Component.initialize();
				endOf_UNIX_EWMAMeterService_Part = false;
				part_UNIX_EWMAMeterService_Component.setScope(CIMName("UNIX_AFService"));
				part_UNIX_EWMAMeterService_Component.initialize();
				endOf_UNIX_AverageRateMeterService_Part = false;
				part_UNIX_AverageRateMeterService_Component.setScope(CIMName("UNIX_AFService"));
				part_UNIX_AverageRateMeterService_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 2)
		{
			group_UNIX_FlowService_Index++;
			endOf_UNIX_FlowService_Group = !group_UNIX_FlowService_Component.load(group_UNIX_FlowService_Index);
			if (endOf_UNIX_FlowService_Group)
			{
				endOf_UNIX_REDDropperService_Part = false;
				part_UNIX_REDDropperService_Component.setScope(CIMName("UNIX_FlowService"));
				part_UNIX_REDDropperService_Component.initialize();
				endOf_UNIX_WeightedREDDropperService_Part = false;
				part_UNIX_WeightedREDDropperService_Component.setScope(CIMName("UNIX_FlowService"));
				part_UNIX_WeightedREDDropperService_Component.initialize();
				endOf_UNIX_HeadTailDropper_Part = false;
				part_UNIX_HeadTailDropper_Component.setScope(CIMName("UNIX_FlowService"));
				part_UNIX_HeadTailDropper_Component.initialize();
				endOf_UNIX_QueuingService_Part = false;
				part_UNIX_QueuingService_Component.setScope(CIMName("UNIX_FlowService"));
				part_UNIX_QueuingService_Component.initialize();
				endOf_UNIX_PacketSchedulingService_Part = false;
				part_UNIX_PacketSchedulingService_Component.setScope(CIMName("UNIX_FlowService"));
				part_UNIX_PacketSchedulingService_Component.initialize();
				endOf_UNIX_NonWorkConservingSchedulingService_Part = false;
				part_UNIX_NonWorkConservingSchedulingService_Component.setScope(CIMName("UNIX_FlowService"));
				part_UNIX_NonWorkConservingSchedulingService_Component.initialize();
				endOf_UNIX_ToSMarkerService_Part = false;
				part_UNIX_ToSMarkerService_Component.setScope(CIMName("UNIX_FlowService"));
				part_UNIX_ToSMarkerService_Component.initialize();
				endOf_UNIX_Priority8021QMarkerService_Part = false;
				part_UNIX_Priority8021QMarkerService_Component.setScope(CIMName("UNIX_FlowService"));
				part_UNIX_Priority8021QMarkerService_Component.initialize();
				endOf_UNIX_PreambleMarkerService_Part = false;
				part_UNIX_PreambleMarkerService_Component.setScope(CIMName("UNIX_FlowService"));
				part_UNIX_PreambleMarkerService_Component.initialize();
				endOf_UNIX_DSCPMarkerService_Part = false;
				part_UNIX_DSCPMarkerService_Component.setScope(CIMName("UNIX_FlowService"));
				part_UNIX_DSCPMarkerService_Component.initialize();
				endOf_UNIX_ClassifierService_Part = false;
				part_UNIX_ClassifierService_Component.setScope(CIMName("UNIX_FlowService"));
				part_UNIX_ClassifierService_Component.initialize();
				endOf_UNIX_ClassifierElement_Part = false;
				part_UNIX_ClassifierElement_Component.setScope(CIMName("UNIX_FlowService"));
				part_UNIX_ClassifierElement_Component.initialize();
				endOf_UNIX_TokenBucketMeterService_Part = false;
				part_UNIX_TokenBucketMeterService_Component.setScope(CIMName("UNIX_FlowService"));
				part_UNIX_TokenBucketMeterService_Component.initialize();
				endOf_UNIX_EWMAMeterService_Part = false;
				part_UNIX_EWMAMeterService_Component.setScope(CIMName("UNIX_FlowService"));
				part_UNIX_EWMAMeterService_Component.initialize();
				endOf_UNIX_AverageRateMeterService_Part = false;
				part_UNIX_AverageRateMeterService_Component.setScope(CIMName("UNIX_FlowService"));
				part_UNIX_AverageRateMeterService_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 3)
		{
			group_UNIX_Hdr8021PService_Index++;
			endOf_UNIX_Hdr8021PService_Group = !group_UNIX_Hdr8021PService_Component.load(group_UNIX_Hdr8021PService_Index);
			if (endOf_UNIX_Hdr8021PService_Group)
			{
				endOf_UNIX_REDDropperService_Part = false;
				part_UNIX_REDDropperService_Component.setScope(CIMName("UNIX_Hdr8021PService"));
				part_UNIX_REDDropperService_Component.initialize();
				endOf_UNIX_WeightedREDDropperService_Part = false;
				part_UNIX_WeightedREDDropperService_Component.setScope(CIMName("UNIX_Hdr8021PService"));
				part_UNIX_WeightedREDDropperService_Component.initialize();
				endOf_UNIX_HeadTailDropper_Part = false;
				part_UNIX_HeadTailDropper_Component.setScope(CIMName("UNIX_Hdr8021PService"));
				part_UNIX_HeadTailDropper_Component.initialize();
				endOf_UNIX_QueuingService_Part = false;
				part_UNIX_QueuingService_Component.setScope(CIMName("UNIX_Hdr8021PService"));
				part_UNIX_QueuingService_Component.initialize();
				endOf_UNIX_PacketSchedulingService_Part = false;
				part_UNIX_PacketSchedulingService_Component.setScope(CIMName("UNIX_Hdr8021PService"));
				part_UNIX_PacketSchedulingService_Component.initialize();
				endOf_UNIX_NonWorkConservingSchedulingService_Part = false;
				part_UNIX_NonWorkConservingSchedulingService_Component.setScope(CIMName("UNIX_Hdr8021PService"));
				part_UNIX_NonWorkConservingSchedulingService_Component.initialize();
				endOf_UNIX_ToSMarkerService_Part = false;
				part_UNIX_ToSMarkerService_Component.setScope(CIMName("UNIX_Hdr8021PService"));
				part_UNIX_ToSMarkerService_Component.initialize();
				endOf_UNIX_Priority8021QMarkerService_Part = false;
				part_UNIX_Priority8021QMarkerService_Component.setScope(CIMName("UNIX_Hdr8021PService"));
				part_UNIX_Priority8021QMarkerService_Component.initialize();
				endOf_UNIX_PreambleMarkerService_Part = false;
				part_UNIX_PreambleMarkerService_Component.setScope(CIMName("UNIX_Hdr8021PService"));
				part_UNIX_PreambleMarkerService_Component.initialize();
				endOf_UNIX_DSCPMarkerService_Part = false;
				part_UNIX_DSCPMarkerService_Component.setScope(CIMName("UNIX_Hdr8021PService"));
				part_UNIX_DSCPMarkerService_Component.initialize();
				endOf_UNIX_ClassifierService_Part = false;
				part_UNIX_ClassifierService_Component.setScope(CIMName("UNIX_Hdr8021PService"));
				part_UNIX_ClassifierService_Component.initialize();
				endOf_UNIX_ClassifierElement_Part = false;
				part_UNIX_ClassifierElement_Component.setScope(CIMName("UNIX_Hdr8021PService"));
				part_UNIX_ClassifierElement_Component.initialize();
				endOf_UNIX_TokenBucketMeterService_Part = false;
				part_UNIX_TokenBucketMeterService_Component.setScope(CIMName("UNIX_Hdr8021PService"));
				part_UNIX_TokenBucketMeterService_Component.initialize();
				endOf_UNIX_EWMAMeterService_Part = false;
				part_UNIX_EWMAMeterService_Component.setScope(CIMName("UNIX_Hdr8021PService"));
				part_UNIX_EWMAMeterService_Component.initialize();
				endOf_UNIX_AverageRateMeterService_Part = false;
				part_UNIX_AverageRateMeterService_Component.setScope(CIMName("UNIX_Hdr8021PService"));
				part_UNIX_AverageRateMeterService_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
		else if (groupIndex == 4)
		{
			group_UNIX_PrecedenceService_Index++;
			endOf_UNIX_PrecedenceService_Group = !group_UNIX_PrecedenceService_Component.load(group_UNIX_PrecedenceService_Index);
			if (endOf_UNIX_PrecedenceService_Group)
			{
				endOf_UNIX_REDDropperService_Part = false;
				part_UNIX_REDDropperService_Component.setScope(CIMName("UNIX_PrecedenceService"));
				part_UNIX_REDDropperService_Component.initialize();
				endOf_UNIX_WeightedREDDropperService_Part = false;
				part_UNIX_WeightedREDDropperService_Component.setScope(CIMName("UNIX_PrecedenceService"));
				part_UNIX_WeightedREDDropperService_Component.initialize();
				endOf_UNIX_HeadTailDropper_Part = false;
				part_UNIX_HeadTailDropper_Component.setScope(CIMName("UNIX_PrecedenceService"));
				part_UNIX_HeadTailDropper_Component.initialize();
				endOf_UNIX_QueuingService_Part = false;
				part_UNIX_QueuingService_Component.setScope(CIMName("UNIX_PrecedenceService"));
				part_UNIX_QueuingService_Component.initialize();
				endOf_UNIX_PacketSchedulingService_Part = false;
				part_UNIX_PacketSchedulingService_Component.setScope(CIMName("UNIX_PrecedenceService"));
				part_UNIX_PacketSchedulingService_Component.initialize();
				endOf_UNIX_NonWorkConservingSchedulingService_Part = false;
				part_UNIX_NonWorkConservingSchedulingService_Component.setScope(CIMName("UNIX_PrecedenceService"));
				part_UNIX_NonWorkConservingSchedulingService_Component.initialize();
				endOf_UNIX_ToSMarkerService_Part = false;
				part_UNIX_ToSMarkerService_Component.setScope(CIMName("UNIX_PrecedenceService"));
				part_UNIX_ToSMarkerService_Component.initialize();
				endOf_UNIX_Priority8021QMarkerService_Part = false;
				part_UNIX_Priority8021QMarkerService_Component.setScope(CIMName("UNIX_PrecedenceService"));
				part_UNIX_Priority8021QMarkerService_Component.initialize();
				endOf_UNIX_PreambleMarkerService_Part = false;
				part_UNIX_PreambleMarkerService_Component.setScope(CIMName("UNIX_PrecedenceService"));
				part_UNIX_PreambleMarkerService_Component.initialize();
				endOf_UNIX_DSCPMarkerService_Part = false;
				part_UNIX_DSCPMarkerService_Component.setScope(CIMName("UNIX_PrecedenceService"));
				part_UNIX_DSCPMarkerService_Component.initialize();
				endOf_UNIX_ClassifierService_Part = false;
				part_UNIX_ClassifierService_Component.setScope(CIMName("UNIX_PrecedenceService"));
				part_UNIX_ClassifierService_Component.initialize();
				endOf_UNIX_ClassifierElement_Part = false;
				part_UNIX_ClassifierElement_Component.setScope(CIMName("UNIX_PrecedenceService"));
				part_UNIX_ClassifierElement_Component.initialize();
				endOf_UNIX_TokenBucketMeterService_Part = false;
				part_UNIX_TokenBucketMeterService_Component.setScope(CIMName("UNIX_PrecedenceService"));
				part_UNIX_TokenBucketMeterService_Component.initialize();
				endOf_UNIX_EWMAMeterService_Part = false;
				part_UNIX_EWMAMeterService_Component.setScope(CIMName("UNIX_PrecedenceService"));
				part_UNIX_EWMAMeterService_Component.initialize();
				endOf_UNIX_AverageRateMeterService_Part = false;
				part_UNIX_AverageRateMeterService_Component.setScope(CIMName("UNIX_PrecedenceService"));
				part_UNIX_AverageRateMeterService_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
	}
	if (partIndex == 0)
	{
		part_UNIX_REDDropperService_Index++;
	endOf_UNIX_REDDropperService_Part = !part_UNIX_REDDropperService_Component.load(part_UNIX_REDDropperService_Index);
	}
	if (partIndex == 1)
	{
		part_UNIX_WeightedREDDropperService_Index++;
	endOf_UNIX_WeightedREDDropperService_Part = !part_UNIX_WeightedREDDropperService_Component.load(part_UNIX_WeightedREDDropperService_Index);
	}
	if (partIndex == 2)
	{
		part_UNIX_HeadTailDropper_Index++;
	endOf_UNIX_HeadTailDropper_Part = !part_UNIX_HeadTailDropper_Component.load(part_UNIX_HeadTailDropper_Index);
	}
	if (partIndex == 3)
	{
		part_UNIX_QueuingService_Index++;
	endOf_UNIX_QueuingService_Part = !part_UNIX_QueuingService_Component.load(part_UNIX_QueuingService_Index);
	}
	if (partIndex == 4)
	{
		part_UNIX_PacketSchedulingService_Index++;
	endOf_UNIX_PacketSchedulingService_Part = !part_UNIX_PacketSchedulingService_Component.load(part_UNIX_PacketSchedulingService_Index);
	}
	if (partIndex == 5)
	{
		part_UNIX_NonWorkConservingSchedulingService_Index++;
	endOf_UNIX_NonWorkConservingSchedulingService_Part = !part_UNIX_NonWorkConservingSchedulingService_Component.load(part_UNIX_NonWorkConservingSchedulingService_Index);
	}
	if (partIndex == 6)
	{
		part_UNIX_ToSMarkerService_Index++;
	endOf_UNIX_ToSMarkerService_Part = !part_UNIX_ToSMarkerService_Component.load(part_UNIX_ToSMarkerService_Index);
	}
	if (partIndex == 7)
	{
		part_UNIX_Priority8021QMarkerService_Index++;
	endOf_UNIX_Priority8021QMarkerService_Part = !part_UNIX_Priority8021QMarkerService_Component.load(part_UNIX_Priority8021QMarkerService_Index);
	}
	if (partIndex == 8)
	{
		part_UNIX_PreambleMarkerService_Index++;
	endOf_UNIX_PreambleMarkerService_Part = !part_UNIX_PreambleMarkerService_Component.load(part_UNIX_PreambleMarkerService_Index);
	}
	if (partIndex == 9)
	{
		part_UNIX_DSCPMarkerService_Index++;
	endOf_UNIX_DSCPMarkerService_Part = !part_UNIX_DSCPMarkerService_Component.load(part_UNIX_DSCPMarkerService_Index);
	}
	if (partIndex == 10)
	{
		part_UNIX_ClassifierService_Index++;
	endOf_UNIX_ClassifierService_Part = !part_UNIX_ClassifierService_Component.load(part_UNIX_ClassifierService_Index);
	}
	if (partIndex == 11)
	{
		part_UNIX_ClassifierElement_Index++;
	endOf_UNIX_ClassifierElement_Part = !part_UNIX_ClassifierElement_Component.load(part_UNIX_ClassifierElement_Index);
	}
	if (partIndex == 12)
	{
		part_UNIX_TokenBucketMeterService_Index++;
	endOf_UNIX_TokenBucketMeterService_Part = !part_UNIX_TokenBucketMeterService_Component.load(part_UNIX_TokenBucketMeterService_Index);
	}
	if (partIndex == 13)
	{
		part_UNIX_EWMAMeterService_Index++;
	endOf_UNIX_EWMAMeterService_Part = !part_UNIX_EWMAMeterService_Component.load(part_UNIX_EWMAMeterService_Index);
	}
	if (partIndex == 14)
	{
		part_UNIX_AverageRateMeterService_Index++;
	endOf_UNIX_AverageRateMeterService_Part = !part_UNIX_AverageRateMeterService_Component.load(part_UNIX_AverageRateMeterService_Index);
	}
	if (partIndex == 0 && endOf_UNIX_REDDropperService_Part)
	{
		part_UNIX_REDDropperService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 1 && endOf_UNIX_WeightedREDDropperService_Part)
	{
		part_UNIX_WeightedREDDropperService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 2 && endOf_UNIX_HeadTailDropper_Part)
	{
		part_UNIX_HeadTailDropper_Component.finalize();
		partIndex++;
	}
	if (partIndex == 3 && endOf_UNIX_QueuingService_Part)
	{
		part_UNIX_QueuingService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 4 && endOf_UNIX_PacketSchedulingService_Part)
	{
		part_UNIX_PacketSchedulingService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 5 && endOf_UNIX_NonWorkConservingSchedulingService_Part)
	{
		part_UNIX_NonWorkConservingSchedulingService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 6 && endOf_UNIX_ToSMarkerService_Part)
	{
		part_UNIX_ToSMarkerService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 7 && endOf_UNIX_Priority8021QMarkerService_Part)
	{
		part_UNIX_Priority8021QMarkerService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 8 && endOf_UNIX_PreambleMarkerService_Part)
	{
		part_UNIX_PreambleMarkerService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 9 && endOf_UNIX_DSCPMarkerService_Part)
	{
		part_UNIX_DSCPMarkerService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 10 && endOf_UNIX_ClassifierService_Part)
	{
		part_UNIX_ClassifierService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 11 && endOf_UNIX_ClassifierElement_Part)
	{
		part_UNIX_ClassifierElement_Component.finalize();
		partIndex++;
	}
	if (partIndex == 12 && endOf_UNIX_TokenBucketMeterService_Part)
	{
		part_UNIX_TokenBucketMeterService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 13 && endOf_UNIX_EWMAMeterService_Part)
	{
		part_UNIX_EWMAMeterService_Component.finalize();
		partIndex++;
	}
	if (partIndex == 14 && endOf_UNIX_AverageRateMeterService_Part)
	{
		part_UNIX_AverageRateMeterService_Component.finalize();
		partIndex++;
	}

	if (endOf_UNIX_EFService_Group &&
		endOf_UNIX_AFService_Group &&
		endOf_UNIX_FlowService_Group &&
		endOf_UNIX_Hdr8021PService_Group &&
		endOf_UNIX_PrecedenceService_Group &&
		endOf_UNIX_REDDropperService_Part &&
		endOf_UNIX_WeightedREDDropperService_Part &&
		endOf_UNIX_HeadTailDropper_Part &&
		endOf_UNIX_QueuingService_Part &&
		endOf_UNIX_PacketSchedulingService_Part &&
		endOf_UNIX_NonWorkConservingSchedulingService_Part &&
		endOf_UNIX_ToSMarkerService_Part &&
		endOf_UNIX_Priority8021QMarkerService_Part &&
		endOf_UNIX_PreambleMarkerService_Part &&
		endOf_UNIX_DSCPMarkerService_Part &&
		endOf_UNIX_ClassifierService_Part &&
		endOf_UNIX_ClassifierElement_Part &&
		endOf_UNIX_TokenBucketMeterService_Part &&
		endOf_UNIX_EWMAMeterService_Part &&
		endOf_UNIX_AverageRateMeterService_Part)		return false;
	return true;
}

Boolean UNIX_QoSConditioningSubService::finalize()
{
	group_UNIX_EFService_Component.finalize();
	group_UNIX_AFService_Component.finalize();
	group_UNIX_FlowService_Component.finalize();
	group_UNIX_Hdr8021PService_Component.finalize();
	group_UNIX_PrecedenceService_Component.finalize();
	part_UNIX_REDDropperService_Component.finalize();
	part_UNIX_WeightedREDDropperService_Component.finalize();
	part_UNIX_HeadTailDropper_Component.finalize();
	part_UNIX_QueuingService_Component.finalize();
	part_UNIX_PacketSchedulingService_Component.finalize();
	part_UNIX_NonWorkConservingSchedulingService_Component.finalize();
	part_UNIX_ToSMarkerService_Component.finalize();
	part_UNIX_Priority8021QMarkerService_Component.finalize();
	part_UNIX_PreambleMarkerService_Component.finalize();
	part_UNIX_DSCPMarkerService_Component.finalize();
	part_UNIX_ClassifierService_Component.finalize();
	part_UNIX_ClassifierElement_Component.finalize();
	part_UNIX_TokenBucketMeterService_Component.finalize();
	part_UNIX_EWMAMeterService_Component.finalize();
	part_UNIX_AverageRateMeterService_Component.finalize();
	return true;
}

Boolean UNIX_QoSConditioningSubService::find(Array<CIMKeyBinding> &kbArray)
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
