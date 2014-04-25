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


UNIX_SwitchPortSpanningTree::UNIX_SwitchPortSpanningTree(void)
{
}

UNIX_SwitchPortSpanningTree::~UNIX_SwitchPortSpanningTree(void)
{
}


Boolean UNIX_SwitchPortSpanningTree::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_SwitchPortSpanningTree::getAntecedent() const
{
	return CIMInstance(CIMName("CIM_Dependency"));
}

Boolean UNIX_SwitchPortSpanningTree::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_SwitchPortSpanningTree::getDependent() const
{
	return CIMInstance(CIMName("CIM_Dependency"));
}

Boolean UNIX_SwitchPortSpanningTree::getPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIORITY, getPriority());
	return true;
}

Uint8 UNIX_SwitchPortSpanningTree::getPriority() const
{
	return Uint8(0);
}

Boolean UNIX_SwitchPortSpanningTree::getState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATE, getState());
	return true;
}

Uint16 UNIX_SwitchPortSpanningTree::getState() const
{
	return Uint16(0);
}

Boolean UNIX_SwitchPortSpanningTree::getEnable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLE, getEnable());
	return true;
}

Uint16 UNIX_SwitchPortSpanningTree::getEnable() const
{
	return Uint16(0);
}

Boolean UNIX_SwitchPortSpanningTree::getPathCost(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PATH_COST, getPathCost());
	return true;
}

Uint16 UNIX_SwitchPortSpanningTree::getPathCost() const
{
	return Uint16(0);
}

Boolean UNIX_SwitchPortSpanningTree::getDesignatedRoot(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESIGNATED_ROOT, getDesignatedRoot());
	return true;
}

String UNIX_SwitchPortSpanningTree::getDesignatedRoot() const
{
	return String ("");
}

Boolean UNIX_SwitchPortSpanningTree::getDesignatedCost(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESIGNATED_COST, getDesignatedCost());
	return true;
}

Uint16 UNIX_SwitchPortSpanningTree::getDesignatedCost() const
{
	return Uint16(0);
}

Boolean UNIX_SwitchPortSpanningTree::getDesignatedBridge(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESIGNATED_BRIDGE, getDesignatedBridge());
	return true;
}

String UNIX_SwitchPortSpanningTree::getDesignatedBridge() const
{
	return String ("");
}

Boolean UNIX_SwitchPortSpanningTree::getDesignatedPort(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESIGNATED_PORT, getDesignatedPort());
	return true;
}

Uint16 UNIX_SwitchPortSpanningTree::getDesignatedPort() const
{
	return Uint16(0);
}



Boolean UNIX_SwitchPortSpanningTree::initialize()
{
	return false;
}

Boolean UNIX_SwitchPortSpanningTree::load(int &pIndex)
{
	return false;
}

Boolean UNIX_SwitchPortSpanningTree::finalize()
{
	return false;
}

Boolean UNIX_SwitchPortSpanningTree::find(Array<CIMKeyBinding> &kbArray)
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
