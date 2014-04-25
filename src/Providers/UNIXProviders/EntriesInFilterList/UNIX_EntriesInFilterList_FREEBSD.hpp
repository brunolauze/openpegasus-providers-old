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


UNIX_EntriesInFilterList::UNIX_EntriesInFilterList(void)
{
}

UNIX_EntriesInFilterList::~UNIX_EntriesInFilterList(void)
{
}


Boolean UNIX_EntriesInFilterList::getGroupComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_COMPONENT, getGroupComponent());
	return true;
}

CIMInstance UNIX_EntriesInFilterList::getGroupComponent() const
{
	return CIMInstance(CIMName("CIM_Component"));
}

Boolean UNIX_EntriesInFilterList::getPartComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_COMPONENT, getPartComponent());
	return true;
}

CIMInstance UNIX_EntriesInFilterList::getPartComponent() const
{
	return CIMInstance(CIMName("CIM_Component"));
}

Boolean UNIX_EntriesInFilterList::getEntrySequence(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENTRY_SEQUENCE, getEntrySequence());
	return true;
}

Uint16 UNIX_EntriesInFilterList::getEntrySequence() const
{
	return Uint16(0);
}



Boolean UNIX_EntriesInFilterList::initialize()
{
	groupIndex = -1;
	partIndex = 0;
	group_UNIX_FilterList_Index = -1;
	endOf_UNIX_FilterList_Group = false;
	group_UNIX_FilterList_Component.initialize();
	part_UNIX_X509CredentialFilterEntry_Index = -1;
	endOf_UNIX_X509CredentialFilterEntry_Part = false;
	part_UNIX_FilterEntry_Index = -1;
	endOf_UNIX_FilterEntry_Part = false;
	part_UNIX_PreambleFilter_Index = -1;
	endOf_UNIX_PreambleFilter_Part = false;
	part_UNIX_PeerIDPayloadFilterEntry_Index = -1;
	endOf_UNIX_PeerIDPayloadFilterEntry_Part = false;
	part_UNIX_Hdr8021Filter_Index = -1;
	endOf_UNIX_Hdr8021Filter_Part = false;
	part_UNIX_IPSOFilterEntry_Index = -1;
	endOf_UNIX_IPSOFilterEntry_Part = false;
	part_UNIX_IPHeadersFilter_Index = -1;
	endOf_UNIX_IPHeadersFilter_Part = false;
	return true;
}

Boolean UNIX_EntriesInFilterList::load(int &pIndex)
{
	if (pIndex == 0 || (endOf_UNIX_X509CredentialFilterEntry_Part &&
			endOf_UNIX_FilterEntry_Part &&
			endOf_UNIX_PreambleFilter_Part &&
			endOf_UNIX_PeerIDPayloadFilterEntry_Part &&
			endOf_UNIX_Hdr8021Filter_Part &&
			endOf_UNIX_IPSOFilterEntry_Part &&
			endOf_UNIX_IPHeadersFilter_Part))
	{
		if (groupIndex == 0)
		{
			group_UNIX_FilterList_Index++;
			endOf_UNIX_FilterList_Group = !group_UNIX_FilterList_Component.load(group_UNIX_FilterList_Index);
			if (endOf_UNIX_FilterList_Group)
			{
				endOf_UNIX_X509CredentialFilterEntry_Part = false;
				part_UNIX_X509CredentialFilterEntry_Component.setScope(CIMName("UNIX_FilterList"));
				part_UNIX_X509CredentialFilterEntry_Component.initialize();
				endOf_UNIX_FilterEntry_Part = false;
				part_UNIX_FilterEntry_Component.setScope(CIMName("UNIX_FilterList"));
				part_UNIX_FilterEntry_Component.initialize();
				endOf_UNIX_PreambleFilter_Part = false;
				part_UNIX_PreambleFilter_Component.setScope(CIMName("UNIX_FilterList"));
				part_UNIX_PreambleFilter_Component.initialize();
				endOf_UNIX_PeerIDPayloadFilterEntry_Part = false;
				part_UNIX_PeerIDPayloadFilterEntry_Component.setScope(CIMName("UNIX_FilterList"));
				part_UNIX_PeerIDPayloadFilterEntry_Component.initialize();
				endOf_UNIX_Hdr8021Filter_Part = false;
				part_UNIX_Hdr8021Filter_Component.setScope(CIMName("UNIX_FilterList"));
				part_UNIX_Hdr8021Filter_Component.initialize();
				endOf_UNIX_IPSOFilterEntry_Part = false;
				part_UNIX_IPSOFilterEntry_Component.setScope(CIMName("UNIX_FilterList"));
				part_UNIX_IPSOFilterEntry_Component.initialize();
				endOf_UNIX_IPHeadersFilter_Part = false;
				part_UNIX_IPHeadersFilter_Component.setScope(CIMName("UNIX_FilterList"));
				part_UNIX_IPHeadersFilter_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
	}
	if (partIndex == 0)
	{
		part_UNIX_X509CredentialFilterEntry_Index++;
	endOf_UNIX_X509CredentialFilterEntry_Part = !part_UNIX_X509CredentialFilterEntry_Component.load(part_UNIX_X509CredentialFilterEntry_Index);
	}
	if (partIndex == 1)
	{
		part_UNIX_FilterEntry_Index++;
	endOf_UNIX_FilterEntry_Part = !part_UNIX_FilterEntry_Component.load(part_UNIX_FilterEntry_Index);
	}
	if (partIndex == 2)
	{
		part_UNIX_PreambleFilter_Index++;
	endOf_UNIX_PreambleFilter_Part = !part_UNIX_PreambleFilter_Component.load(part_UNIX_PreambleFilter_Index);
	}
	if (partIndex == 3)
	{
		part_UNIX_PeerIDPayloadFilterEntry_Index++;
	endOf_UNIX_PeerIDPayloadFilterEntry_Part = !part_UNIX_PeerIDPayloadFilterEntry_Component.load(part_UNIX_PeerIDPayloadFilterEntry_Index);
	}
	if (partIndex == 4)
	{
		part_UNIX_Hdr8021Filter_Index++;
	endOf_UNIX_Hdr8021Filter_Part = !part_UNIX_Hdr8021Filter_Component.load(part_UNIX_Hdr8021Filter_Index);
	}
	if (partIndex == 5)
	{
		part_UNIX_IPSOFilterEntry_Index++;
	endOf_UNIX_IPSOFilterEntry_Part = !part_UNIX_IPSOFilterEntry_Component.load(part_UNIX_IPSOFilterEntry_Index);
	}
	if (partIndex == 6)
	{
		part_UNIX_IPHeadersFilter_Index++;
	endOf_UNIX_IPHeadersFilter_Part = !part_UNIX_IPHeadersFilter_Component.load(part_UNIX_IPHeadersFilter_Index);
	}
	if (partIndex == 0 && endOf_UNIX_X509CredentialFilterEntry_Part)
	{
		part_UNIX_X509CredentialFilterEntry_Component.finalize();
		partIndex++;
	}
	if (partIndex == 1 && endOf_UNIX_FilterEntry_Part)
	{
		part_UNIX_FilterEntry_Component.finalize();
		partIndex++;
	}
	if (partIndex == 2 && endOf_UNIX_PreambleFilter_Part)
	{
		part_UNIX_PreambleFilter_Component.finalize();
		partIndex++;
	}
	if (partIndex == 3 && endOf_UNIX_PeerIDPayloadFilterEntry_Part)
	{
		part_UNIX_PeerIDPayloadFilterEntry_Component.finalize();
		partIndex++;
	}
	if (partIndex == 4 && endOf_UNIX_Hdr8021Filter_Part)
	{
		part_UNIX_Hdr8021Filter_Component.finalize();
		partIndex++;
	}
	if (partIndex == 5 && endOf_UNIX_IPSOFilterEntry_Part)
	{
		part_UNIX_IPSOFilterEntry_Component.finalize();
		partIndex++;
	}
	if (partIndex == 6 && endOf_UNIX_IPHeadersFilter_Part)
	{
		part_UNIX_IPHeadersFilter_Component.finalize();
		partIndex++;
	}

	if (endOf_UNIX_FilterList_Group &&
		endOf_UNIX_X509CredentialFilterEntry_Part &&
		endOf_UNIX_FilterEntry_Part &&
		endOf_UNIX_PreambleFilter_Part &&
		endOf_UNIX_PeerIDPayloadFilterEntry_Part &&
		endOf_UNIX_Hdr8021Filter_Part &&
		endOf_UNIX_IPSOFilterEntry_Part &&
		endOf_UNIX_IPHeadersFilter_Part)		return false;
	return true;
}

Boolean UNIX_EntriesInFilterList::finalize()
{
	group_UNIX_FilterList_Component.finalize();
	part_UNIX_X509CredentialFilterEntry_Component.finalize();
	part_UNIX_FilterEntry_Component.finalize();
	part_UNIX_PreambleFilter_Component.finalize();
	part_UNIX_PeerIDPayloadFilterEntry_Component.finalize();
	part_UNIX_Hdr8021Filter_Component.finalize();
	part_UNIX_IPSOFilterEntry_Component.finalize();
	part_UNIX_IPHeadersFilter_Component.finalize();
	return true;
}

Boolean UNIX_EntriesInFilterList::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String groupComponentKey;
	String partComponentKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_GROUP_COMPONENT)) groupComponentKey = kb.getValue();
		else if (keyName.equal(PROPERTY_PART_COMPONENT)) partComponentKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
