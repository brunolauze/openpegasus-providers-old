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

#ifndef __UNIX_ENTRIESINFILTERLIST_H
#define __UNIX_ENTRIESINFILTERLIST_H


#include "CIM_Component.h"
#include <FilterList/UNIX_FilterList.h>
#include <X509CredentialFilterEntry/UNIX_X509CredentialFilterEntry.h>
#include <FilterEntry/UNIX_FilterEntry.h>
#include <PreambleFilter/UNIX_PreambleFilter.h>
#include <PeerIDPayloadFilterEntry/UNIX_PeerIDPayloadFilterEntry.h>
#include <Hdr8021Filter/UNIX_Hdr8021Filter.h>
#include <IPSOFilterEntry/UNIX_IPSOFilterEntry.h>
#include <IPHeadersFilter/UNIX_IPHeadersFilter.h>

#include "UNIX_EntriesInFilterListDeps.h"


#define PROPERTY_ENTRY_SEQUENCE				"EntrySequence"


class UNIX_EntriesInFilterList :
	public CIM_Component
{
public:

	UNIX_EntriesInFilterList();
	~UNIX_EntriesInFilterList();

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
	virtual Boolean getEntrySequence(CIMProperty&) const;
	virtual Uint16 getEntrySequence() const;

private:
	CIMName currentScope;

#	include "UNIX_EntriesInFilterListPrivate.h"

	int groupIndex;
	int partIndex;
	UNIX_FilterList group_UNIX_FilterList_Component;
	int group_UNIX_FilterList_Index;
	bool endOf_UNIX_FilterList_Group;
	UNIX_X509CredentialFilterEntry part_UNIX_X509CredentialFilterEntry_Component;
	int part_UNIX_X509CredentialFilterEntry_Index;
	bool endOf_UNIX_X509CredentialFilterEntry_Part;
	UNIX_FilterEntry part_UNIX_FilterEntry_Component;
	int part_UNIX_FilterEntry_Index;
	bool endOf_UNIX_FilterEntry_Part;
	UNIX_PreambleFilter part_UNIX_PreambleFilter_Component;
	int part_UNIX_PreambleFilter_Index;
	bool endOf_UNIX_PreambleFilter_Part;
	UNIX_PeerIDPayloadFilterEntry part_UNIX_PeerIDPayloadFilterEntry_Component;
	int part_UNIX_PeerIDPayloadFilterEntry_Index;
	bool endOf_UNIX_PeerIDPayloadFilterEntry_Part;
	UNIX_Hdr8021Filter part_UNIX_Hdr8021Filter_Component;
	int part_UNIX_Hdr8021Filter_Index;
	bool endOf_UNIX_Hdr8021Filter_Part;
	UNIX_IPSOFilterEntry part_UNIX_IPSOFilterEntry_Component;
	int part_UNIX_IPSOFilterEntry_Index;
	bool endOf_UNIX_IPSOFilterEntry_Part;
	UNIX_IPHeadersFilter part_UNIX_IPHeadersFilter_Component;
	int part_UNIX_IPHeadersFilter_Index;
	bool endOf_UNIX_IPHeadersFilter_Part;


};

#endif /* UNIX_ENTRIESINFILTERLIST */
