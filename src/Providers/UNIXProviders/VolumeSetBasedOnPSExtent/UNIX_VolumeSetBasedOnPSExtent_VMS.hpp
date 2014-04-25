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


UNIX_VolumeSetBasedOnPSExtent::UNIX_VolumeSetBasedOnPSExtent(void)
{
}

UNIX_VolumeSetBasedOnPSExtent::~UNIX_VolumeSetBasedOnPSExtent(void)
{
}


Boolean UNIX_VolumeSetBasedOnPSExtent::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_VolumeSetBasedOnPSExtent::getAntecedent() const
{
	return CIMInstance(CIMName("CIM_Dependency"));
}

Boolean UNIX_VolumeSetBasedOnPSExtent::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_VolumeSetBasedOnPSExtent::getDependent() const
{
	return CIMInstance(CIMName("CIM_Dependency"));
}

Boolean UNIX_VolumeSetBasedOnPSExtent::getStartingAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTING_ADDRESS, getStartingAddress());
	return true;
}

Uint64 UNIX_VolumeSetBasedOnPSExtent::getStartingAddress() const
{
	return Uint64(0);
}

Boolean UNIX_VolumeSetBasedOnPSExtent::getEndingAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENDING_ADDRESS, getEndingAddress());
	return true;
}

Uint64 UNIX_VolumeSetBasedOnPSExtent::getEndingAddress() const
{
	return Uint64(0);
}

Boolean UNIX_VolumeSetBasedOnPSExtent::getOrderIndex(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ORDER_INDEX, getOrderIndex());
	return true;
}

Uint16 UNIX_VolumeSetBasedOnPSExtent::getOrderIndex() const
{
	return Uint16(0);
}

Boolean UNIX_VolumeSetBasedOnPSExtent::getLBAsMappedByDecrementing(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_L_B_AS_MAPPED_BY_DECREMENTING, getLBAsMappedByDecrementing());
	return true;
}

Boolean UNIX_VolumeSetBasedOnPSExtent::getLBAsMappedByDecrementing() const
{
	return Boolean(false);
}

Boolean UNIX_VolumeSetBasedOnPSExtent::getLBAMappingIncludesCheckData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_L_B_A_MAPPING_INCLUDES_CHECK_DATA, getLBAMappingIncludesCheckData());
	return true;
}

Boolean UNIX_VolumeSetBasedOnPSExtent::getLBAMappingIncludesCheckData() const
{
	return Boolean(false);
}



Boolean UNIX_VolumeSetBasedOnPSExtent::initialize()
{
	return false;
}

Boolean UNIX_VolumeSetBasedOnPSExtent::load(int &pIndex)
{
	return false;
}

Boolean UNIX_VolumeSetBasedOnPSExtent::finalize()
{
	return false;
}

Boolean UNIX_VolumeSetBasedOnPSExtent::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String antecedentKey;
	String dependentKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_ANTECEDENT)) antecedentKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DEPENDENT)) dependentKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
