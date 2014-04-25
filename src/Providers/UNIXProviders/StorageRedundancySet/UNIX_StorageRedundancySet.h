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

#ifndef __UNIX_STORAGEREDUNDANCYSET_H
#define __UNIX_STORAGEREDUNDANCYSET_H


#include "CIM_RedundancySet.h"

#include "UNIX_StorageRedundancySetDeps.h"


#define PROPERTY_TYPE_OF_ALGORITHM				"TypeOfAlgorithm"
#define PROPERTY_OTHER_ALGORITHM				"OtherAlgorithm"


class UNIX_StorageRedundancySet :
	public CIM_RedundancySet
{
public:

	UNIX_StorageRedundancySet();
	~UNIX_StorageRedundancySet();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean finalize();
	virtual Boolean find(Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);

	virtual Boolean getInstanceID(CIMProperty&) const;
	virtual String getInstanceID() const;
	virtual Boolean getCaption(CIMProperty&) const;
	virtual String getCaption() const;
	virtual Boolean getDescription(CIMProperty&) const;
	virtual String getDescription() const;
	virtual Boolean getElementName(CIMProperty&) const;
	virtual String getElementName() const;
	virtual Boolean getRedundancyStatus(CIMProperty&) const;
	virtual Uint16 getRedundancyStatus() const;
	virtual Boolean getTypeOfSet(CIMProperty&) const;
	virtual Array<Uint16> getTypeOfSet() const;
	virtual Boolean getMinNumberNeeded(CIMProperty&) const;
	virtual Uint32 getMinNumberNeeded() const;
	virtual Boolean getMaxNumberSupported(CIMProperty&) const;
	virtual Uint32 getMaxNumberSupported() const;
	virtual Boolean getVendorIdentifyingInfo(CIMProperty&) const;
	virtual String getVendorIdentifyingInfo() const;
	virtual Boolean getOtherTypeOfSet(CIMProperty&) const;
	virtual Array<String> getOtherTypeOfSet() const;
	virtual Boolean getLoadBalanceAlgorithm(CIMProperty&) const;
	virtual Uint16 getLoadBalanceAlgorithm() const;
	virtual Boolean getOtherLoadBalanceAlgorithm(CIMProperty&) const;
	virtual String getOtherLoadBalanceAlgorithm() const;
	virtual Boolean getTypeOfAlgorithm(CIMProperty&) const;
	virtual Uint16 getTypeOfAlgorithm() const;
	virtual Boolean getOtherAlgorithm(CIMProperty&) const;
	virtual String getOtherAlgorithm() const;

private:
	CIMName currentScope;

#	include "UNIX_StorageRedundancySetPrivate.h"


};

#endif /* UNIX_STORAGEREDUNDANCYSET */
