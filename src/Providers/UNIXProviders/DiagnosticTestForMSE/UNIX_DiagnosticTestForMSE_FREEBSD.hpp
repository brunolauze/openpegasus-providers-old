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


UNIX_DiagnosticTestForMSE::UNIX_DiagnosticTestForMSE(void)
{
}

UNIX_DiagnosticTestForMSE::~UNIX_DiagnosticTestForMSE(void)
{
}


Boolean UNIX_DiagnosticTestForMSE::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_DiagnosticTestForMSE::getAntecedent() const
{
	return CIMInstance(CIMName("CIM_Dependency"));
}

Boolean UNIX_DiagnosticTestForMSE::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_DiagnosticTestForMSE::getDependent() const
{
	return CIMInstance(CIMName("CIM_Dependency"));
}

Boolean UNIX_DiagnosticTestForMSE::getEstimatedTimeOfPerforming(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ESTIMATED_TIME_OF_PERFORMING, getEstimatedTimeOfPerforming());
	return true;
}

Uint32 UNIX_DiagnosticTestForMSE::getEstimatedTimeOfPerforming() const
{
	return Uint32(0);
}

Boolean UNIX_DiagnosticTestForMSE::getIsExclusiveForMSE(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_EXCLUSIVE_FOR_M_S_E, getIsExclusiveForMSE());
	return true;
}

Boolean UNIX_DiagnosticTestForMSE::getIsExclusiveForMSE() const
{
	return Boolean(false);
}



Boolean UNIX_DiagnosticTestForMSE::initialize()
{
	return false;
}

Boolean UNIX_DiagnosticTestForMSE::load(int &pIndex)
{
	return false;
}

Boolean UNIX_DiagnosticTestForMSE::finalize()
{
	return false;
}

Boolean UNIX_DiagnosticTestForMSE::find(Array<CIMKeyBinding> &kbArray)
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
