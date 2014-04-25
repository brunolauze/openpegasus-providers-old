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


UNIX_PublicPrivateKeyPair::UNIX_PublicPrivateKeyPair(void)
{
}

UNIX_PublicPrivateKeyPair::~UNIX_PublicPrivateKeyPair(void)
{
}


Boolean UNIX_PublicPrivateKeyPair::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_PublicPrivateKeyPair::getAntecedent() const
{
	return CIMInstance(CIMName("CIM_Dependency"));
}

Boolean UNIX_PublicPrivateKeyPair::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_PublicPrivateKeyPair::getDependent() const
{
	return CIMInstance(CIMName("CIM_Dependency"));
}

Boolean UNIX_PublicPrivateKeyPair::getUse(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USE, getUse());
	return true;
}

Uint16 UNIX_PublicPrivateKeyPair::getUse() const
{
	return Uint16(0);
}

Boolean UNIX_PublicPrivateKeyPair::getNonRepudiation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NON_REPUDIATION, getNonRepudiation());
	return true;
}

Boolean UNIX_PublicPrivateKeyPair::getNonRepudiation() const
{
	return Boolean(false);
}

Boolean UNIX_PublicPrivateKeyPair::getBackedUp(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BACKED_UP, getBackedUp());
	return true;
}

Boolean UNIX_PublicPrivateKeyPair::getBackedUp() const
{
	return Boolean(false);
}

Boolean UNIX_PublicPrivateKeyPair::getRepository(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPOSITORY, getRepository());
	return true;
}

String UNIX_PublicPrivateKeyPair::getRepository() const
{
	return String ("");
}



Boolean UNIX_PublicPrivateKeyPair::initialize()
{
	return false;
}

Boolean UNIX_PublicPrivateKeyPair::load(int &pIndex)
{
	return false;
}

Boolean UNIX_PublicPrivateKeyPair::finalize()
{
	return false;
}

Boolean UNIX_PublicPrivateKeyPair::find(Array<CIMKeyBinding> &kbArray)
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
