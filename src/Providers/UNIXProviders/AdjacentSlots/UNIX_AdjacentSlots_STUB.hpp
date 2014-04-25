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


UNIX_AdjacentSlots::UNIX_AdjacentSlots(void)
{
}

UNIX_AdjacentSlots::~UNIX_AdjacentSlots(void)
{
}


Boolean UNIX_AdjacentSlots::getSlotA(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SLOT_A, getSlotA());
	return true;
}

CIMInstance UNIX_AdjacentSlots::getSlotA() const
{
	return CIMInstance(CIMName("CIM_ManagedElement"));
}

Boolean UNIX_AdjacentSlots::getSlotB(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SLOT_B, getSlotB());
	return true;
}

CIMInstance UNIX_AdjacentSlots::getSlotB() const
{
	return CIMInstance(CIMName("CIM_ManagedElement"));
}

Boolean UNIX_AdjacentSlots::getDistanceBetweenSlots(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DISTANCE_BETWEEN_SLOTS, getDistanceBetweenSlots());
	return true;
}

Real32 UNIX_AdjacentSlots::getDistanceBetweenSlots() const
{
	return Real32(0);
}

Boolean UNIX_AdjacentSlots::getSharedSlots(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SHARED_SLOTS, getSharedSlots());
	return true;
}

Boolean UNIX_AdjacentSlots::getSharedSlots() const
{
	return Boolean(false);
}



Boolean UNIX_AdjacentSlots::initialize()
{
	return false;
}

Boolean UNIX_AdjacentSlots::load(int &pIndex)
{
	return false;
}

Boolean UNIX_AdjacentSlots::finalize()
{
	return false;
}

Boolean UNIX_AdjacentSlots::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String slotAKey;
	String slotBKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SLOT_A)) slotAKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SLOT_B)) slotBKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
