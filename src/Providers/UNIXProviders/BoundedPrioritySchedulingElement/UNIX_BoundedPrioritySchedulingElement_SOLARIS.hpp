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


UNIX_BoundedPrioritySchedulingElement::UNIX_BoundedPrioritySchedulingElement(void)
{
}

UNIX_BoundedPrioritySchedulingElement::~UNIX_BoundedPrioritySchedulingElement(void)
{
}


Boolean UNIX_BoundedPrioritySchedulingElement::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BoundedPrioritySchedulingElement::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_BoundedPrioritySchedulingElement::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BoundedPrioritySchedulingElement::getCaption() const
{
	return String ("");
}

Boolean UNIX_BoundedPrioritySchedulingElement::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BoundedPrioritySchedulingElement::getDescription() const
{
	return String ("");
}

Boolean UNIX_BoundedPrioritySchedulingElement::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BoundedPrioritySchedulingElement::getElementName() const
{
	return String("BoundedPrioritySchedulingElement");
}

Boolean UNIX_BoundedPrioritySchedulingElement::getWorkConserving(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WORK_CONSERVING, getWorkConserving());
	return true;
}

Boolean UNIX_BoundedPrioritySchedulingElement::getWorkConserving() const
{
	return Boolean(false);
}

Boolean UNIX_BoundedPrioritySchedulingElement::getPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIORITY, getPriority());
	return true;
}

Uint16 UNIX_BoundedPrioritySchedulingElement::getPriority() const
{
	return Uint16(0);
}

Boolean UNIX_BoundedPrioritySchedulingElement::getBandwidthBound(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BANDWIDTH_BOUND, getBandwidthBound());
	return true;
}

Uint32 UNIX_BoundedPrioritySchedulingElement::getBandwidthBound() const
{
	return Uint32(0);
}



Boolean UNIX_BoundedPrioritySchedulingElement::initialize()
{
	return false;
}

Boolean UNIX_BoundedPrioritySchedulingElement::load(int &pIndex)
{
	return false;
}

Boolean UNIX_BoundedPrioritySchedulingElement::finalize()
{
	return false;
}

Boolean UNIX_BoundedPrioritySchedulingElement::find(Array<CIMKeyBinding> &kbArray)
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
