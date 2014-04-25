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


UNIX_RemoteAccessAvailableToElement::UNIX_RemoteAccessAvailableToElement(void)
{
}

UNIX_RemoteAccessAvailableToElement::~UNIX_RemoteAccessAvailableToElement(void)
{
}


Boolean UNIX_RemoteAccessAvailableToElement::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_RemoteAccessAvailableToElement::getAntecedent() const
{
	return CIMInstance(CIMName("CIM_Dependency"));
}

Boolean UNIX_RemoteAccessAvailableToElement::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_RemoteAccessAvailableToElement::getDependent() const
{
	return CIMInstance(CIMName("CIM_Dependency"));
}

Boolean UNIX_RemoteAccessAvailableToElement::getIsDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_DEFAULT, getIsDefault());
	return true;
}

Boolean UNIX_RemoteAccessAvailableToElement::getIsDefault() const
{
	return Boolean(false);
}

Boolean UNIX_RemoteAccessAvailableToElement::getOrderOfAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ORDER_OF_ACCESS, getOrderOfAccess());
	return true;
}

Uint16 UNIX_RemoteAccessAvailableToElement::getOrderOfAccess() const
{
	return Uint16(0);
}



Boolean UNIX_RemoteAccessAvailableToElement::initialize()
{
	return false;
}

Boolean UNIX_RemoteAccessAvailableToElement::load(int &pIndex)
{
	return false;
}

Boolean UNIX_RemoteAccessAvailableToElement::finalize()
{
	return false;
}

Boolean UNIX_RemoteAccessAvailableToElement::find(Array<CIMKeyBinding> &kbArray)
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
