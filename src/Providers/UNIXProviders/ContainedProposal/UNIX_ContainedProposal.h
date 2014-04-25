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

#ifndef __UNIX_CONTAINEDPROPOSAL_H
#define __UNIX_CONTAINEDPROPOSAL_H


#include "CIM_Component.h"
#include <IKEAction/UNIX_IKEAction.h>
#include <IPsecTunnelAction/UNIX_IPsecTunnelAction.h>
#include <IPsecTransportAction/UNIX_IPsecTransportAction.h>
#include <IKEProposal/UNIX_IKEProposal.h>
#include <IPsecProposal/UNIX_IPsecProposal.h>

#include "UNIX_ContainedProposalDeps.h"


#define PROPERTY_SEQUENCE_NUMBER				"SequenceNumber"


class UNIX_ContainedProposal :
	public CIM_Component
{
public:

	UNIX_ContainedProposal();
	~UNIX_ContainedProposal();

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
	virtual Boolean getSequenceNumber(CIMProperty&) const;
	virtual Uint16 getSequenceNumber() const;

private:
	CIMName currentScope;

#	include "UNIX_ContainedProposalPrivate.h"

	int groupIndex;
	int partIndex;
	UNIX_IKEAction group_UNIX_IKEAction_Component;
	int group_UNIX_IKEAction_Index;
	bool endOf_UNIX_IKEAction_Group;
	UNIX_IPsecTunnelAction group_UNIX_IPsecTunnelAction_Component;
	int group_UNIX_IPsecTunnelAction_Index;
	bool endOf_UNIX_IPsecTunnelAction_Group;
	UNIX_IPsecTransportAction group_UNIX_IPsecTransportAction_Component;
	int group_UNIX_IPsecTransportAction_Index;
	bool endOf_UNIX_IPsecTransportAction_Group;
	UNIX_IKEProposal part_UNIX_IKEProposal_Component;
	int part_UNIX_IKEProposal_Index;
	bool endOf_UNIX_IKEProposal_Part;
	UNIX_IPsecProposal part_UNIX_IPsecProposal_Component;
	int part_UNIX_IPsecProposal_Index;
	bool endOf_UNIX_IPsecProposal_Part;


};

#endif /* UNIX_CONTAINEDPROPOSAL */
