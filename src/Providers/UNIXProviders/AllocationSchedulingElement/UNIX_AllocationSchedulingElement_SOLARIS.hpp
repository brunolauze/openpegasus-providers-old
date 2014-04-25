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


UNIX_AllocationSchedulingElement::UNIX_AllocationSchedulingElement(void)
{
}

UNIX_AllocationSchedulingElement::~UNIX_AllocationSchedulingElement(void)
{
}


Boolean UNIX_AllocationSchedulingElement::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_AllocationSchedulingElement::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_AllocationSchedulingElement::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_AllocationSchedulingElement::getCaption() const
{
	return String ("");
}

Boolean UNIX_AllocationSchedulingElement::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_AllocationSchedulingElement::getDescription() const
{
	return String ("");
}

Boolean UNIX_AllocationSchedulingElement::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_AllocationSchedulingElement::getElementName() const
{
	return String("AllocationSchedulingElement");
}

Boolean UNIX_AllocationSchedulingElement::getWorkConserving(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WORK_CONSERVING, getWorkConserving());
	return true;
}

Boolean UNIX_AllocationSchedulingElement::getWorkConserving() const
{
	return Boolean(false);
}

Boolean UNIX_AllocationSchedulingElement::getAllocationUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALLOCATION_UNITS, getAllocationUnits());
	return true;
}

Uint16 UNIX_AllocationSchedulingElement::getAllocationUnits() const
{
	return Uint16(0);
}

Boolean UNIX_AllocationSchedulingElement::getBandwidthAllocation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BANDWIDTH_ALLOCATION, getBandwidthAllocation());
	return true;
}

Uint32 UNIX_AllocationSchedulingElement::getBandwidthAllocation() const
{
	return Uint32(0);
}

Boolean UNIX_AllocationSchedulingElement::getBurstAllocation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BURST_ALLOCATION, getBurstAllocation());
	return true;
}

Uint32 UNIX_AllocationSchedulingElement::getBurstAllocation() const
{
	return Uint32(0);
}

Boolean UNIX_AllocationSchedulingElement::getCanShare(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAN_SHARE, getCanShare());
	return true;
}

Boolean UNIX_AllocationSchedulingElement::getCanShare() const
{
	return Boolean(false);
}

Boolean UNIX_AllocationSchedulingElement::getWorkFlexible(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WORK_FLEXIBLE, getWorkFlexible());
	return true;
}

Boolean UNIX_AllocationSchedulingElement::getWorkFlexible() const
{
	return Boolean(false);
}



Boolean UNIX_AllocationSchedulingElement::initialize()
{
	return false;
}

Boolean UNIX_AllocationSchedulingElement::load(int &pIndex)
{
	return false;
}

Boolean UNIX_AllocationSchedulingElement::finalize()
{
	return false;
}

Boolean UNIX_AllocationSchedulingElement::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String instanceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_INSTANCE_ID)) instanceIDKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
