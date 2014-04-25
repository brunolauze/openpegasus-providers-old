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

#ifndef __UNIX_MODULEPORT_H
#define __UNIX_MODULEPORT_H


#include "CIM_Component.h"
#include <LogicalModule/UNIX_LogicalModule.h>
#include <FCPort/UNIX_FCPort.h>
#include <EthernetPort/UNIX_EthernetPort.h>
#include <LLDPEthernetPort/UNIX_LLDPEthernetPort.h>
#include <WiFiPort/UNIX_WiFiPort.h>
#include <TokenRingPort/UNIX_TokenRingPort.h>

#include "UNIX_ModulePortDeps.h"




class UNIX_ModulePort :
	public CIM_Component
{
public:

	UNIX_ModulePort();
	~UNIX_ModulePort();

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

#	include "UNIX_ModulePortPrivate.h"

	int groupIndex;
	int partIndex;
	UNIX_LogicalModule group_UNIX_LogicalModule_Component;
	int group_UNIX_LogicalModule_Index;
	bool endOf_UNIX_LogicalModule_Group;
	UNIX_FCPort part_UNIX_FCPort_Component;
	int part_UNIX_FCPort_Index;
	bool endOf_UNIX_FCPort_Part;
	UNIX_EthernetPort part_UNIX_EthernetPort_Component;
	int part_UNIX_EthernetPort_Index;
	bool endOf_UNIX_EthernetPort_Part;
	UNIX_LLDPEthernetPort part_UNIX_LLDPEthernetPort_Component;
	int part_UNIX_LLDPEthernetPort_Index;
	bool endOf_UNIX_LLDPEthernetPort_Part;
	UNIX_WiFiPort part_UNIX_WiFiPort_Component;
	int part_UNIX_WiFiPort_Index;
	bool endOf_UNIX_WiFiPort_Part;
	UNIX_TokenRingPort part_UNIX_TokenRingPort_Component;
	int part_UNIX_TokenRingPort_Index;
	bool endOf_UNIX_TokenRingPort_Part;


};

#endif /* UNIX_MODULEPORT */
