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


UNIX_FRUPhysicalElements::UNIX_FRUPhysicalElements(void)
{
}

UNIX_FRUPhysicalElements::~UNIX_FRUPhysicalElements(void)
{
}


Boolean UNIX_FRUPhysicalElements::getFRU(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_F_R_U, getFRU());
	return true;
}

CIMInstance UNIX_FRUPhysicalElements::getFRU() const
{
	return CIMInstance(CIMName("CIM_ManagedElement"));
}

Boolean UNIX_FRUPhysicalElements::getComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPONENT, getComponent());
	return true;
}

CIMInstance UNIX_FRUPhysicalElements::getComponent() const
{
	return CIMInstance(CIMName("CIM_ManagedElement"));
}



Boolean UNIX_FRUPhysicalElements::initialize()
{
	return false;
}

Boolean UNIX_FRUPhysicalElements::load(int &pIndex)
{
	return false;
}

Boolean UNIX_FRUPhysicalElements::finalize()
{
	return false;
}

Boolean UNIX_FRUPhysicalElements::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String fRUKey;
	String componentKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_F_R_U)) fRUKey = kb.getValue();
		else if (keyName.equal(PROPERTY_COMPONENT)) componentKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
