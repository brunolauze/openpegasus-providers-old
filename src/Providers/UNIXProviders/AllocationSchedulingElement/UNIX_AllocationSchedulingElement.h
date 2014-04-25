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

#ifndef __UNIX_ALLOCATIONSCHEDULINGELEMENT_H
#define __UNIX_ALLOCATIONSCHEDULINGELEMENT_H


#include "CIM_SchedulingElement.h"

#include "UNIX_AllocationSchedulingElementDeps.h"


#define PROPERTY_ALLOCATION_UNITS				"AllocationUnits"
#define PROPERTY_BANDWIDTH_ALLOCATION				"BandwidthAllocation"
#define PROPERTY_BURST_ALLOCATION				"BurstAllocation"
#define PROPERTY_CAN_SHARE				"CanShare"
#define PROPERTY_WORK_FLEXIBLE				"WorkFlexible"


class UNIX_AllocationSchedulingElement :
	public CIM_SchedulingElement
{
public:

	UNIX_AllocationSchedulingElement();
	~UNIX_AllocationSchedulingElement();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean finalize();
	virtual Boolean find(Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);

	virtual Boolean getInstanceID(CIMProperty&) const;
	virtual String getInstanceID() const;
	virtual Boolean getCaption(CIMProperty&) const;
	virtual String getCaption() const;
	virtual Boolean getDescription(CIMProperty&) const;
	virtual String getDescription() const;
	virtual Boolean getElementName(CIMProperty&) const;
	virtual String getElementName() const;
	virtual Boolean getWorkConserving(CIMProperty&) const;
	virtual Boolean getWorkConserving() const;
	virtual Boolean getAllocationUnits(CIMProperty&) const;
	virtual Uint16 getAllocationUnits() const;
	virtual Boolean getBandwidthAllocation(CIMProperty&) const;
	virtual Uint32 getBandwidthAllocation() const;
	virtual Boolean getBurstAllocation(CIMProperty&) const;
	virtual Uint32 getBurstAllocation() const;
	virtual Boolean getCanShare(CIMProperty&) const;
	virtual Boolean getCanShare() const;
	virtual Boolean getWorkFlexible(CIMProperty&) const;
	virtual Boolean getWorkFlexible() const;

private:
	CIMName currentScope;

#	include "UNIX_AllocationSchedulingElementPrivate.h"


};

#endif /* UNIX_ALLOCATIONSCHEDULINGELEMENT */
