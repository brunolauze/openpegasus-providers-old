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

#ifndef __UNIX_DATABASESTORAGE_H
#define __UNIX_DATABASESTORAGE_H


#include "CIM_Component.h"
#include <CommonDatabase/UNIX_CommonDatabase.h>
#include <DatabaseStorageArea/UNIX_DatabaseStorageArea.h>

#include "UNIX_DatabaseStorageDeps.h"




class UNIX_DatabaseStorage :
	public CIM_Component
{
public:

	UNIX_DatabaseStorage();
	~UNIX_DatabaseStorage();

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

#	include "UNIX_DatabaseStoragePrivate.h"

	int groupIndex;
	int partIndex;
	UNIX_CommonDatabase group_UNIX_CommonDatabase_Component;
	int group_UNIX_CommonDatabase_Index;
	bool endOf_UNIX_CommonDatabase_Group;
	UNIX_DatabaseStorageArea part_UNIX_DatabaseStorageArea_Component;
	int part_UNIX_DatabaseStorageArea_Index;
	bool endOf_UNIX_DatabaseStorageArea_Part;


};

#endif /* UNIX_DATABASESTORAGE */
