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

#ifndef __UNIX_NETWORKPIPECOMPOSITION_H
#define __UNIX_NETWORKPIPECOMPOSITION_H


#include "CIM_Component.h"
#include <iSCSIConnection/UNIX_iSCSIConnection.h>
#include <iSCSISession/UNIX_iSCSISession.h>
#include <iSCSIConnection/UNIX_iSCSIConnection.h>
#include <iSCSISession/UNIX_iSCSISession.h>

#include "UNIX_NetworkPipeCompositionDeps.h"


#define PROPERTY_AGGREGATION_SEQUENCE				"AggregationSequence"


class UNIX_NetworkPipeComposition :
	public CIM_Component
{
public:

	UNIX_NetworkPipeComposition();
	~UNIX_NetworkPipeComposition();

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
	virtual Boolean getAggregationSequence(CIMProperty&) const;
	virtual Uint16 getAggregationSequence() const;

private:
	CIMName currentScope;

#	include "UNIX_NetworkPipeCompositionPrivate.h"

	int groupIndex;
	int partIndex;
	UNIX_iSCSIConnection group_UNIX_iSCSIConnection_Component;
	int group_UNIX_iSCSIConnection_Index;
	bool endOf_UNIX_iSCSIConnection_Group;
	UNIX_iSCSISession group_UNIX_iSCSISession_Component;
	int group_UNIX_iSCSISession_Index;
	bool endOf_UNIX_iSCSISession_Group;
	UNIX_iSCSIConnection part_UNIX_iSCSIConnection_Component;
	int part_UNIX_iSCSIConnection_Index;
	bool endOf_UNIX_iSCSIConnection_Part;
	UNIX_iSCSISession part_UNIX_iSCSISession_Component;
	int part_UNIX_iSCSISession_Index;
	bool endOf_UNIX_iSCSISession_Part;


};

#endif /* UNIX_NETWORKPIPECOMPOSITION */
