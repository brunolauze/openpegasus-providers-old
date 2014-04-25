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

#ifndef __UNIX_QOSCONDITIONINGSUBSERVICE_H
#define __UNIX_QOSCONDITIONINGSUBSERVICE_H


#include "CIM_ServiceComponent.h"
#include <EFService/UNIX_EFService.h>
#include <AFService/UNIX_AFService.h>
#include <FlowService/UNIX_FlowService.h>
#include <Hdr8021PService/UNIX_Hdr8021PService.h>
#include <PrecedenceService/UNIX_PrecedenceService.h>
#include <REDDropperService/UNIX_REDDropperService.h>
#include <WeightedREDDropperService/UNIX_WeightedREDDropperService.h>
#include <HeadTailDropper/UNIX_HeadTailDropper.h>
#include <QueuingService/UNIX_QueuingService.h>
#include <PacketSchedulingService/UNIX_PacketSchedulingService.h>
#include <NonWorkConservingSchedulingService/UNIX_NonWorkConservingSchedulingService.h>
#include <ToSMarkerService/UNIX_ToSMarkerService.h>
#include <Priority8021QMarkerService/UNIX_Priority8021QMarkerService.h>
#include <PreambleMarkerService/UNIX_PreambleMarkerService.h>
#include <DSCPMarkerService/UNIX_DSCPMarkerService.h>
#include <ClassifierService/UNIX_ClassifierService.h>
#include <ClassifierElement/UNIX_ClassifierElement.h>
#include <TokenBucketMeterService/UNIX_TokenBucketMeterService.h>
#include <EWMAMeterService/UNIX_EWMAMeterService.h>
#include <AverageRateMeterService/UNIX_AverageRateMeterService.h>

#include "UNIX_QoSConditioningSubServiceDeps.h"




class UNIX_QoSConditioningSubService :
	public CIM_ServiceComponent
{
public:

	UNIX_QoSConditioningSubService();
	~UNIX_QoSConditioningSubService();

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

#	include "UNIX_QoSConditioningSubServicePrivate.h"

	int groupIndex;
	int partIndex;
	UNIX_EFService group_UNIX_EFService_Component;
	int group_UNIX_EFService_Index;
	bool endOf_UNIX_EFService_Group;
	UNIX_AFService group_UNIX_AFService_Component;
	int group_UNIX_AFService_Index;
	bool endOf_UNIX_AFService_Group;
	UNIX_FlowService group_UNIX_FlowService_Component;
	int group_UNIX_FlowService_Index;
	bool endOf_UNIX_FlowService_Group;
	UNIX_Hdr8021PService group_UNIX_Hdr8021PService_Component;
	int group_UNIX_Hdr8021PService_Index;
	bool endOf_UNIX_Hdr8021PService_Group;
	UNIX_PrecedenceService group_UNIX_PrecedenceService_Component;
	int group_UNIX_PrecedenceService_Index;
	bool endOf_UNIX_PrecedenceService_Group;
	UNIX_REDDropperService part_UNIX_REDDropperService_Component;
	int part_UNIX_REDDropperService_Index;
	bool endOf_UNIX_REDDropperService_Part;
	UNIX_WeightedREDDropperService part_UNIX_WeightedREDDropperService_Component;
	int part_UNIX_WeightedREDDropperService_Index;
	bool endOf_UNIX_WeightedREDDropperService_Part;
	UNIX_HeadTailDropper part_UNIX_HeadTailDropper_Component;
	int part_UNIX_HeadTailDropper_Index;
	bool endOf_UNIX_HeadTailDropper_Part;
	UNIX_QueuingService part_UNIX_QueuingService_Component;
	int part_UNIX_QueuingService_Index;
	bool endOf_UNIX_QueuingService_Part;
	UNIX_PacketSchedulingService part_UNIX_PacketSchedulingService_Component;
	int part_UNIX_PacketSchedulingService_Index;
	bool endOf_UNIX_PacketSchedulingService_Part;
	UNIX_NonWorkConservingSchedulingService part_UNIX_NonWorkConservingSchedulingService_Component;
	int part_UNIX_NonWorkConservingSchedulingService_Index;
	bool endOf_UNIX_NonWorkConservingSchedulingService_Part;
	UNIX_ToSMarkerService part_UNIX_ToSMarkerService_Component;
	int part_UNIX_ToSMarkerService_Index;
	bool endOf_UNIX_ToSMarkerService_Part;
	UNIX_Priority8021QMarkerService part_UNIX_Priority8021QMarkerService_Component;
	int part_UNIX_Priority8021QMarkerService_Index;
	bool endOf_UNIX_Priority8021QMarkerService_Part;
	UNIX_PreambleMarkerService part_UNIX_PreambleMarkerService_Component;
	int part_UNIX_PreambleMarkerService_Index;
	bool endOf_UNIX_PreambleMarkerService_Part;
	UNIX_DSCPMarkerService part_UNIX_DSCPMarkerService_Component;
	int part_UNIX_DSCPMarkerService_Index;
	bool endOf_UNIX_DSCPMarkerService_Part;
	UNIX_ClassifierService part_UNIX_ClassifierService_Component;
	int part_UNIX_ClassifierService_Index;
	bool endOf_UNIX_ClassifierService_Part;
	UNIX_ClassifierElement part_UNIX_ClassifierElement_Component;
	int part_UNIX_ClassifierElement_Index;
	bool endOf_UNIX_ClassifierElement_Part;
	UNIX_TokenBucketMeterService part_UNIX_TokenBucketMeterService_Component;
	int part_UNIX_TokenBucketMeterService_Index;
	bool endOf_UNIX_TokenBucketMeterService_Part;
	UNIX_EWMAMeterService part_UNIX_EWMAMeterService_Component;
	int part_UNIX_EWMAMeterService_Index;
	bool endOf_UNIX_EWMAMeterService_Part;
	UNIX_AverageRateMeterService part_UNIX_AverageRateMeterService_Component;
	int part_UNIX_AverageRateMeterService_Index;
	bool endOf_UNIX_AverageRateMeterService_Part;


};

#endif /* UNIX_QOSCONDITIONINGSUBSERVICE */
