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

#ifndef __UNIX_ASSOCIATEDCACHEMEMORY_H
#define __UNIX_ASSOCIATEDCACHEMEMORY_H


#include "CIM_AssociatedMemory.h"

#include "UNIX_AssociatedCacheMemoryDeps.h"


#define PROPERTY_LEVEL				"Level"
#define PROPERTY_OTHER_LEVEL_DESCRIPTION				"OtherLevelDescription"
#define PROPERTY_WRITE_POLICY				"WritePolicy"
#define PROPERTY_OTHER_WRITE_POLICY_DESCRIPTION				"OtherWritePolicyDescription"
#define PROPERTY_CACHE_TYPE				"CacheType"
#define PROPERTY_OTHER_CACHE_TYPE_DESCRIPTION				"OtherCacheTypeDescription"
#define PROPERTY_LINE_SIZE				"LineSize"
#define PROPERTY_REPLACEMENT_POLICY				"ReplacementPolicy"
#define PROPERTY_OTHER_REPLACEMENT_POLICY_DESCRIPTION				"OtherReplacementPolicyDescription"
#define PROPERTY_READ_POLICY				"ReadPolicy"
#define PROPERTY_OTHER_READ_POLICY_DESCRIPTION				"OtherReadPolicyDescription"
#define PROPERTY_FLUSH_TIMER				"FlushTimer"
#define PROPERTY_ASSOCIATIVITY				"Associativity"
#define PROPERTY_OTHER_ASSOCIATIVITY_DESCRIPTION				"OtherAssociativityDescription"


class UNIX_AssociatedCacheMemory :
	public CIM_AssociatedMemory
{
public:

	UNIX_AssociatedCacheMemory();
	~UNIX_AssociatedCacheMemory();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean finalize();
	virtual Boolean find(Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);

	virtual Boolean getAntecedent(CIMProperty&) const;
	virtual CIMInstance getAntecedent() const;
	virtual Boolean getDependent(CIMProperty&) const;
	virtual CIMInstance getDependent() const;
	virtual Boolean getLevel(CIMProperty&) const;
	virtual Uint16 getLevel() const;
	virtual Boolean getOtherLevelDescription(CIMProperty&) const;
	virtual String getOtherLevelDescription() const;
	virtual Boolean getWritePolicy(CIMProperty&) const;
	virtual Uint16 getWritePolicy() const;
	virtual Boolean getOtherWritePolicyDescription(CIMProperty&) const;
	virtual String getOtherWritePolicyDescription() const;
	virtual Boolean getCacheType(CIMProperty&) const;
	virtual Uint16 getCacheType() const;
	virtual Boolean getOtherCacheTypeDescription(CIMProperty&) const;
	virtual String getOtherCacheTypeDescription() const;
	virtual Boolean getLineSize(CIMProperty&) const;
	virtual Uint32 getLineSize() const;
	virtual Boolean getReplacementPolicy(CIMProperty&) const;
	virtual Uint16 getReplacementPolicy() const;
	virtual Boolean getOtherReplacementPolicyDescription(CIMProperty&) const;
	virtual String getOtherReplacementPolicyDescription() const;
	virtual Boolean getReadPolicy(CIMProperty&) const;
	virtual Uint16 getReadPolicy() const;
	virtual Boolean getOtherReadPolicyDescription(CIMProperty&) const;
	virtual String getOtherReadPolicyDescription() const;
	virtual Boolean getFlushTimer(CIMProperty&) const;
	virtual Uint32 getFlushTimer() const;
	virtual Boolean getAssociativity(CIMProperty&) const;
	virtual Uint16 getAssociativity() const;
	virtual Boolean getOtherAssociativityDescription(CIMProperty&) const;
	virtual String getOtherAssociativityDescription() const;

private:
	CIMName currentScope;

#	include "UNIX_AssociatedCacheMemoryPrivate.h"


};

#endif /* UNIX_ASSOCIATEDCACHEMEMORY */
