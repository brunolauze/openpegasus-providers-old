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

#ifndef __UNIX_PROTECTEDEXTENTBASEDON_H
#define __UNIX_PROTECTEDEXTENTBASEDON_H


#include "CIM_BasedOn.h"

#include "UNIX_ProtectedExtentBasedOnDeps.h"


#define PROPERTY_NUMBER_OF_BLOCKS				"NumberOfBlocks"
#define PROPERTY_BLOCK_SIZE				"BlockSize"
#define PROPERTY_UNITS_BEFORE_CHECK_DATA_INTERLEAVE				"UnitsBeforeCheckDataInterleave"
#define PROPERTY_UNITS_OF_CHECK_DATA				"UnitsOfCheckData"
#define PROPERTY_UNITS_OF_USER_DATA				"UnitsOfUserData"


class UNIX_ProtectedExtentBasedOn :
	public CIM_BasedOn
{
public:

	UNIX_ProtectedExtentBasedOn();
	~UNIX_ProtectedExtentBasedOn();

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
	virtual Boolean getStartingAddress(CIMProperty&) const;
	virtual Uint64 getStartingAddress() const;
	virtual Boolean getEndingAddress(CIMProperty&) const;
	virtual Uint64 getEndingAddress() const;
	virtual Boolean getOrderIndex(CIMProperty&) const;
	virtual Uint16 getOrderIndex() const;
	virtual Boolean getNumberOfBlocks(CIMProperty&) const;
	virtual Uint64 getNumberOfBlocks() const;
	virtual Boolean getBlockSize(CIMProperty&) const;
	virtual Uint64 getBlockSize() const;
	virtual Boolean getUnitsBeforeCheckDataInterleave(CIMProperty&) const;
	virtual Uint64 getUnitsBeforeCheckDataInterleave() const;
	virtual Boolean getUnitsOfCheckData(CIMProperty&) const;
	virtual Uint64 getUnitsOfCheckData() const;
	virtual Boolean getUnitsOfUserData(CIMProperty&) const;
	virtual Uint64 getUnitsOfUserData() const;

private:
	CIMName currentScope;

#	include "UNIX_ProtectedExtentBasedOnPrivate.h"


};

#endif /* UNIX_PROTECTEDEXTENTBASEDON */
