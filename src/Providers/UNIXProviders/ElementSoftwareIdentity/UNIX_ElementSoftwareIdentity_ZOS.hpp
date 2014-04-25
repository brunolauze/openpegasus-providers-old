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


UNIX_ElementSoftwareIdentity::UNIX_ElementSoftwareIdentity(void)
{
}

UNIX_ElementSoftwareIdentity::~UNIX_ElementSoftwareIdentity(void)
{
}


Boolean UNIX_ElementSoftwareIdentity::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_ElementSoftwareIdentity::getAntecedent() const
{
	return CIMInstance(CIMName("CIM_Dependency"));
}

Boolean UNIX_ElementSoftwareIdentity::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_ElementSoftwareIdentity::getDependent() const
{
	return CIMInstance(CIMName("CIM_Dependency"));
}

Boolean UNIX_ElementSoftwareIdentity::getUpgradeCondition(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UPGRADE_CONDITION, getUpgradeCondition());
	return true;
}

Uint16 UNIX_ElementSoftwareIdentity::getUpgradeCondition() const
{
	return Uint16(0);
}

Boolean UNIX_ElementSoftwareIdentity::getOtherUpgradeCondition(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_UPGRADE_CONDITION, getOtherUpgradeCondition());
	return true;
}

String UNIX_ElementSoftwareIdentity::getOtherUpgradeCondition() const
{
	return String ("");
}

Boolean UNIX_ElementSoftwareIdentity::getElementSoftwareStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_SOFTWARE_STATUS, getElementSoftwareStatus());
	return true;
}

Array<Uint16> UNIX_ElementSoftwareIdentity::getElementSoftwareStatus() const
{
	Array<Uint16> as;
	

	return as;

}



Boolean UNIX_ElementSoftwareIdentity::initialize()
{
	return false;
}

Boolean UNIX_ElementSoftwareIdentity::load(int &pIndex)
{
	return false;
}

Boolean UNIX_ElementSoftwareIdentity::finalize()
{
	return false;
}

Boolean UNIX_ElementSoftwareIdentity::find(Array<CIMKeyBinding> &kbArray)
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
