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


UNIX_SwitchPortTransparentBridgingStatistics::UNIX_SwitchPortTransparentBridgingStatistics(void)
{
}

UNIX_SwitchPortTransparentBridgingStatistics::~UNIX_SwitchPortTransparentBridgingStatistics(void)
{
}


Boolean UNIX_SwitchPortTransparentBridgingStatistics::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SwitchPortTransparentBridgingStatistics::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_SwitchPortTransparentBridgingStatistics::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SwitchPortTransparentBridgingStatistics::getCaption() const
{
	return String ("");
}

Boolean UNIX_SwitchPortTransparentBridgingStatistics::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SwitchPortTransparentBridgingStatistics::getDescription() const
{
	return String ("");
}

Boolean UNIX_SwitchPortTransparentBridgingStatistics::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SwitchPortTransparentBridgingStatistics::getElementName() const
{
	return String("SwitchPortTransparentBridgingStatistics");
}

Boolean UNIX_SwitchPortTransparentBridgingStatistics::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_SwitchPortTransparentBridgingStatistics::getName() const
{
	return String ("");
}

Boolean UNIX_SwitchPortTransparentBridgingStatistics::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_SwitchPortTransparentBridgingStatistics::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_SwitchPortTransparentBridgingStatistics::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_SwitchPortTransparentBridgingStatistics::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_SwitchPortTransparentBridgingStatistics::getSAPCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_A_P_CREATION_CLASS_NAME, getSAPCreationClassName());
	return true;
}

String UNIX_SwitchPortTransparentBridgingStatistics::getSAPCreationClassName() const
{
	return String ("");
}

Boolean UNIX_SwitchPortTransparentBridgingStatistics::getSAPName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_A_P_NAME, getSAPName());
	return true;
}

String UNIX_SwitchPortTransparentBridgingStatistics::getSAPName() const
{
	return String ("");
}

Boolean UNIX_SwitchPortTransparentBridgingStatistics::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_SwitchPortTransparentBridgingStatistics::getCreationClassName() const
{
	return String("UNIX_SwitchPortTransparentBridgingStatistics");
}

Boolean UNIX_SwitchPortTransparentBridgingStatistics::getInFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IN_FRAMES, getInFrames());
	return true;
}

Uint32 UNIX_SwitchPortTransparentBridgingStatistics::getInFrames() const
{
	return Uint32(0);
}

Boolean UNIX_SwitchPortTransparentBridgingStatistics::getOutFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUT_FRAMES, getOutFrames());
	return true;
}

Uint32 UNIX_SwitchPortTransparentBridgingStatistics::getOutFrames() const
{
	return Uint32(0);
}

Boolean UNIX_SwitchPortTransparentBridgingStatistics::getInDiscards(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IN_DISCARDS, getInDiscards());
	return true;
}

Uint32 UNIX_SwitchPortTransparentBridgingStatistics::getInDiscards() const
{
	return Uint32(0);
}



Boolean UNIX_SwitchPortTransparentBridgingStatistics::initialize()
{
	return false;
}

Boolean UNIX_SwitchPortTransparentBridgingStatistics::load(int &pIndex)
{
	return false;
}

Boolean UNIX_SwitchPortTransparentBridgingStatistics::finalize()
{
	return false;
}

Boolean UNIX_SwitchPortTransparentBridgingStatistics::find(Array<CIMKeyBinding> &kbArray)
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
