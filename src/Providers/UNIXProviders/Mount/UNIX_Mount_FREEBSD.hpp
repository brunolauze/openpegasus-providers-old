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


UNIX_Mount::UNIX_Mount(void)
{
}

UNIX_Mount::~UNIX_Mount(void)
{
}


Boolean UNIX_Mount::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_Mount::getAntecedent() const
{
	CIMInstance instance = directoryProvider.constructInstance(
		CIMName("UNIX_Directory"),
		CIMNamespaceName("root/cimv2"),
		directory);
	return instance;
}

Boolean UNIX_Mount::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_Mount::getDependent() const
{
	CIMInstance instance = fileSystemProvider.constructInstance(
		CIMName("UNIX_FileSystem"),
		CIMNamespaceName("root/cimv2"),
		fileSystem);
	return instance;
}



Boolean UNIX_Mount::initialize()
{
	fileSystem.initialize();
	return true;
}

Boolean UNIX_Mount::load(int &pIndex)
{
	if (fileSystem.load(pIndex))
	{
		if (pIndex > 0) directory.finalize();
		if (directory.get(fileSystem.getRoot().getCString()))
		{
			return true;
		}
	}
	return false;
}

Boolean UNIX_Mount::finalize()
{
	fileSystem.finalize();
	directory.finalize();
	return true;
}

Boolean UNIX_Mount::find(Array<CIMKeyBinding> &kbArray)
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

	/* Execute find with extracted keys */

	return false;
}
