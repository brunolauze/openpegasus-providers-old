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


UNIX_ApplicationSystemDirectory::UNIX_ApplicationSystemDirectory(void)
{
}

UNIX_ApplicationSystemDirectory::~UNIX_ApplicationSystemDirectory(void)
{
}


Boolean UNIX_ApplicationSystemDirectory::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_ApplicationSystemDirectory::getAntecedent() const
{
	return CIMInstance(CIMName("CIM_ManagedElement"));
}

Boolean UNIX_ApplicationSystemDirectory::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_ApplicationSystemDirectory::getDependent() const
{
	return CIMInstance(CIMName("CIM_ManagedElement"));
}

Boolean UNIX_ApplicationSystemDirectory::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_ApplicationSystemDirectory::getName() const
{
	return String ("");
}

Boolean UNIX_ApplicationSystemDirectory::getApplicationDirectoryUses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_APPLICATION_DIRECTORY_USES, getApplicationDirectoryUses());
	return true;
}

Array<Uint16> UNIX_ApplicationSystemDirectory::getApplicationDirectoryUses() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_ApplicationSystemDirectory::getOtherUseDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_USE_DESCRIPTIONS, getOtherUseDescriptions());
	return true;
}

Array<String> UNIX_ApplicationSystemDirectory::getOtherUseDescriptions() const
{
	Array<String> as;
	

	return as;

}



Boolean UNIX_ApplicationSystemDirectory::initialize()
{
	return false;
}

Boolean UNIX_ApplicationSystemDirectory::load(int &pIndex)
{
	return false;
}

Boolean UNIX_ApplicationSystemDirectory::finalize()
{
	return false;
}

Boolean UNIX_ApplicationSystemDirectory::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String antecedentKey;
	String dependentKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_ANTECEDENT)) antecedentKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DEPENDENT)) dependentKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
