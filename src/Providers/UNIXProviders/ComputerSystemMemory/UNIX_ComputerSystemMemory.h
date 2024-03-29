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

#ifndef __UNIX_COMPUTERSYSTEMMEMORY_H
#define __UNIX_COMPUTERSYSTEMMEMORY_H


#include "CIM_SystemDevice.h"
#include <ComputerSystem/UNIX_ComputerSystem.h>
#include <VolatileStorage/UNIX_VolatileStorage.h>
#include <NonVolatileStorage/UNIX_NonVolatileStorage.h>
#include <CacheMemory/UNIX_CacheMemory.h>

#include "UNIX_ComputerSystemMemoryDeps.h"




class UNIX_ComputerSystemMemory :
	public CIM_SystemDevice
{
public:

	UNIX_ComputerSystemMemory();
	~UNIX_ComputerSystemMemory();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean finalize();
	virtual Boolean find(Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);

	virtual Boolean getGroupComponent(CIMProperty&) const;
	virtual CIMInstance getGroupComponent() const;
	virtual Boolean getPartComponent(CIMProperty&) const;
	virtual CIMInstance getPartComponent() const;

private:
	CIMName currentScope;

#	include "UNIX_ComputerSystemMemoryPrivate.h"

	int groupIndex;
	int partIndex;
	UNIX_ComputerSystem group_UNIX_ComputerSystem_Component;
	int group_UNIX_ComputerSystem_Index;
	bool endOf_UNIX_ComputerSystem_Group;
	UNIX_VolatileStorage part_UNIX_VolatileStorage_Component;
	int part_UNIX_VolatileStorage_Index;
	bool endOf_UNIX_VolatileStorage_Part;
	UNIX_NonVolatileStorage part_UNIX_NonVolatileStorage_Component;
	int part_UNIX_NonVolatileStorage_Index;
	bool endOf_UNIX_NonVolatileStorage_Part;
	UNIX_CacheMemory part_UNIX_CacheMemory_Component;
	int part_UNIX_CacheMemory_Index;
	bool endOf_UNIX_CacheMemory_Part;


};

#endif /* UNIX_COMPUTERSYSTEMMEMORY */
