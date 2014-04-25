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


UNIX_AssociatedCacheMemory::UNIX_AssociatedCacheMemory(void)
{
}

UNIX_AssociatedCacheMemory::~UNIX_AssociatedCacheMemory(void)
{
}


Boolean UNIX_AssociatedCacheMemory::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_AssociatedCacheMemory::getAntecedent() const
{
	return CIMInstance(CIMName("CIM_Dependency"));
}

Boolean UNIX_AssociatedCacheMemory::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_AssociatedCacheMemory::getDependent() const
{
	return CIMInstance(CIMName("CIM_Dependency"));
}

Boolean UNIX_AssociatedCacheMemory::getLevel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LEVEL, getLevel());
	return true;
}

Uint16 UNIX_AssociatedCacheMemory::getLevel() const
{
	return Uint16(0);
}

Boolean UNIX_AssociatedCacheMemory::getOtherLevelDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LEVEL_DESCRIPTION, getOtherLevelDescription());
	return true;
}

String UNIX_AssociatedCacheMemory::getOtherLevelDescription() const
{
	return String ("");
}

Boolean UNIX_AssociatedCacheMemory::getWritePolicy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WRITE_POLICY, getWritePolicy());
	return true;
}

Uint16 UNIX_AssociatedCacheMemory::getWritePolicy() const
{
	return Uint16(0);
}

Boolean UNIX_AssociatedCacheMemory::getOtherWritePolicyDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_WRITE_POLICY_DESCRIPTION, getOtherWritePolicyDescription());
	return true;
}

String UNIX_AssociatedCacheMemory::getOtherWritePolicyDescription() const
{
	return String ("");
}

Boolean UNIX_AssociatedCacheMemory::getCacheType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CACHE_TYPE, getCacheType());
	return true;
}

Uint16 UNIX_AssociatedCacheMemory::getCacheType() const
{
	return Uint16(0);
}

Boolean UNIX_AssociatedCacheMemory::getOtherCacheTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_CACHE_TYPE_DESCRIPTION, getOtherCacheTypeDescription());
	return true;
}

String UNIX_AssociatedCacheMemory::getOtherCacheTypeDescription() const
{
	return String ("");
}

Boolean UNIX_AssociatedCacheMemory::getLineSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LINE_SIZE, getLineSize());
	return true;
}

Uint32 UNIX_AssociatedCacheMemory::getLineSize() const
{
	return Uint32(0);
}

Boolean UNIX_AssociatedCacheMemory::getReplacementPolicy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPLACEMENT_POLICY, getReplacementPolicy());
	return true;
}

Uint16 UNIX_AssociatedCacheMemory::getReplacementPolicy() const
{
	return Uint16(0);
}

Boolean UNIX_AssociatedCacheMemory::getOtherReplacementPolicyDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_REPLACEMENT_POLICY_DESCRIPTION, getOtherReplacementPolicyDescription());
	return true;
}

String UNIX_AssociatedCacheMemory::getOtherReplacementPolicyDescription() const
{
	return String ("");
}

Boolean UNIX_AssociatedCacheMemory::getReadPolicy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_READ_POLICY, getReadPolicy());
	return true;
}

Uint16 UNIX_AssociatedCacheMemory::getReadPolicy() const
{
	return Uint16(0);
}

Boolean UNIX_AssociatedCacheMemory::getOtherReadPolicyDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_READ_POLICY_DESCRIPTION, getOtherReadPolicyDescription());
	return true;
}

String UNIX_AssociatedCacheMemory::getOtherReadPolicyDescription() const
{
	return String ("");
}

Boolean UNIX_AssociatedCacheMemory::getFlushTimer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FLUSH_TIMER, getFlushTimer());
	return true;
}

Uint32 UNIX_AssociatedCacheMemory::getFlushTimer() const
{
	return Uint32(0);
}

Boolean UNIX_AssociatedCacheMemory::getAssociativity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ASSOCIATIVITY, getAssociativity());
	return true;
}

Uint16 UNIX_AssociatedCacheMemory::getAssociativity() const
{
	return Uint16(0);
}

Boolean UNIX_AssociatedCacheMemory::getOtherAssociativityDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ASSOCIATIVITY_DESCRIPTION, getOtherAssociativityDescription());
	return true;
}

String UNIX_AssociatedCacheMemory::getOtherAssociativityDescription() const
{
	return String ("");
}



Boolean UNIX_AssociatedCacheMemory::initialize()
{
	return false;
}

Boolean UNIX_AssociatedCacheMemory::load(int &pIndex)
{
	return false;
}

Boolean UNIX_AssociatedCacheMemory::finalize()
{
	return false;
}

Boolean UNIX_AssociatedCacheMemory::find(Array<CIMKeyBinding> &kbArray)
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
