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


UNIX_SwitchPortSourceRoutingStatistics::UNIX_SwitchPortSourceRoutingStatistics(void)
{
}

UNIX_SwitchPortSourceRoutingStatistics::~UNIX_SwitchPortSourceRoutingStatistics(void)
{
}


Boolean UNIX_SwitchPortSourceRoutingStatistics::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SwitchPortSourceRoutingStatistics::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SwitchPortSourceRoutingStatistics::getCaption() const
{
	return String ("");
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SwitchPortSourceRoutingStatistics::getDescription() const
{
	return String ("");
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SwitchPortSourceRoutingStatistics::getElementName() const
{
	return String("SwitchPortSourceRoutingStatistics");
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_SwitchPortSourceRoutingStatistics::getName() const
{
	return String ("");
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_SwitchPortSourceRoutingStatistics::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_SwitchPortSourceRoutingStatistics::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::getSAPCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_A_P_CREATION_CLASS_NAME, getSAPCreationClassName());
	return true;
}

String UNIX_SwitchPortSourceRoutingStatistics::getSAPCreationClassName() const
{
	return String ("");
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::getSAPName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_A_P_NAME, getSAPName());
	return true;
}

String UNIX_SwitchPortSourceRoutingStatistics::getSAPName() const
{
	return String ("");
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_SwitchPortSourceRoutingStatistics::getCreationClassName() const
{
	return String("UNIX_SwitchPortSourceRoutingStatistics");
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::getSpecInFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPEC_IN_FRAMES, getSpecInFrames());
	return true;
}

Uint32 UNIX_SwitchPortSourceRoutingStatistics::getSpecInFrames() const
{
	return Uint32(0);
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::getSpecOutFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPEC_OUT_FRAMES, getSpecOutFrames());
	return true;
}

Uint32 UNIX_SwitchPortSourceRoutingStatistics::getSpecOutFrames() const
{
	return Uint32(0);
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::getApeInFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_APE_IN_FRAMES, getApeInFrames());
	return true;
}

Uint32 UNIX_SwitchPortSourceRoutingStatistics::getApeInFrames() const
{
	return Uint32(0);
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::getApeOutFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_APE_OUT_FRAMES, getApeOutFrames());
	return true;
}

Uint32 UNIX_SwitchPortSourceRoutingStatistics::getApeOutFrames() const
{
	return Uint32(0);
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::getSteInFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STE_IN_FRAMES, getSteInFrames());
	return true;
}

Uint32 UNIX_SwitchPortSourceRoutingStatistics::getSteInFrames() const
{
	return Uint32(0);
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::getSteOutFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STE_OUT_FRAMES, getSteOutFrames());
	return true;
}

Uint32 UNIX_SwitchPortSourceRoutingStatistics::getSteOutFrames() const
{
	return Uint32(0);
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::getSegmentMismatchDiscards(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEGMENT_MISMATCH_DISCARDS, getSegmentMismatchDiscards());
	return true;
}

Uint32 UNIX_SwitchPortSourceRoutingStatistics::getSegmentMismatchDiscards() const
{
	return Uint32(0);
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::getDuplicateSegmentDiscards(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DUPLICATE_SEGMENT_DISCARDS, getDuplicateSegmentDiscards());
	return true;
}

Uint32 UNIX_SwitchPortSourceRoutingStatistics::getDuplicateSegmentDiscards() const
{
	return Uint32(0);
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::getHopCountExceedsDiscards(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOP_COUNT_EXCEEDS_DISCARDS, getHopCountExceedsDiscards());
	return true;
}

Uint32 UNIX_SwitchPortSourceRoutingStatistics::getHopCountExceedsDiscards() const
{
	return Uint32(0);
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::getDupLanIdOrTreeErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DUP_LAN_ID_OR_TREE_ERRORS, getDupLanIdOrTreeErrors());
	return true;
}

Uint32 UNIX_SwitchPortSourceRoutingStatistics::getDupLanIdOrTreeErrors() const
{
	return Uint32(0);
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::getLanIdMismatches(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAN_ID_MISMATCHES, getLanIdMismatches());
	return true;
}

Uint32 UNIX_SwitchPortSourceRoutingStatistics::getLanIdMismatches() const
{
	return Uint32(0);
}



Boolean UNIX_SwitchPortSourceRoutingStatistics::initialize()
{
	return false;
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::load(int &pIndex)
{
	return false;
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::finalize()
{
	return false;
}

Boolean UNIX_SwitchPortSourceRoutingStatistics::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String sAPCreationClassNameKey;
	String sAPNameKey;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_S_A_P_CREATION_CLASS_NAME)) sAPCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_S_A_P_NAME)) sAPNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
