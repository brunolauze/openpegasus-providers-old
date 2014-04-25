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


UNIX_AssociatedJobMethodResult::UNIX_AssociatedJobMethodResult(void)
{
}

UNIX_AssociatedJobMethodResult::~UNIX_AssociatedJobMethodResult(void)
{
}


Boolean UNIX_AssociatedJobMethodResult::getJob(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_JOB, getJob());
	return true;
}

CIMInstance UNIX_AssociatedJobMethodResult::getJob() const
{
	return CIMInstance(CIMName("CIM_ManagedElement"));
}

Boolean UNIX_AssociatedJobMethodResult::getJobParameters(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_JOB_PARAMETERS, getJobParameters());
	return true;
}

CIMInstance UNIX_AssociatedJobMethodResult::getJobParameters() const
{
	return CIMInstance(CIMName("CIM_ManagedElement"));
}



Boolean UNIX_AssociatedJobMethodResult::initialize()
{
	return false;
}

Boolean UNIX_AssociatedJobMethodResult::load(int &pIndex)
{
	return false;
}

Boolean UNIX_AssociatedJobMethodResult::finalize()
{
	return false;
}

Boolean UNIX_AssociatedJobMethodResult::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String jobKey;
	String jobParametersKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_JOB)) jobKey = kb.getValue();
		else if (keyName.equal(PROPERTY_JOB_PARAMETERS)) jobParametersKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
