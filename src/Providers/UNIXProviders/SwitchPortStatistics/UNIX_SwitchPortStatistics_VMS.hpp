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


UNIX_SwitchPortStatistics::UNIX_SwitchPortStatistics(void)
{
}

UNIX_SwitchPortStatistics::~UNIX_SwitchPortStatistics(void)
{
}


Boolean UNIX_SwitchPortStatistics::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SwitchPortStatistics::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_SwitchPortStatistics::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SwitchPortStatistics::getCaption() const
{
	return String ("");
}

Boolean UNIX_SwitchPortStatistics::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SwitchPortStatistics::getDescription() const
{
	return String ("");
}

Boolean UNIX_SwitchPortStatistics::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SwitchPortStatistics::getElementName() const
{
	return String("SwitchPortStatistics");
}

Boolean UNIX_SwitchPortStatistics::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_SwitchPortStatistics::getName() const
{
	return String ("");
}

Boolean UNIX_SwitchPortStatistics::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_SwitchPortStatistics::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_SwitchPortStatistics::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_SwitchPortStatistics::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_SwitchPortStatistics::getSAPCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_A_P_CREATION_CLASS_NAME, getSAPCreationClassName());
	return true;
}

String UNIX_SwitchPortStatistics::getSAPCreationClassName() const
{
	return String ("");
}

Boolean UNIX_SwitchPortStatistics::getSAPName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_A_P_NAME, getSAPName());
	return true;
}

String UNIX_SwitchPortStatistics::getSAPName() const
{
	return String ("");
}

Boolean UNIX_SwitchPortStatistics::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_SwitchPortStatistics::getCreationClassName() const
{
	return String("UNIX_SwitchPortStatistics");
}

Boolean UNIX_SwitchPortStatistics::getDelayExceededDiscards(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELAY_EXCEEDED_DISCARDS, getDelayExceededDiscards());
	return true;
}

Uint32 UNIX_SwitchPortStatistics::getDelayExceededDiscards() const
{
	return Uint32(0);
}

Boolean UNIX_SwitchPortStatistics::getMtuExceededDiscards(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MTU_EXCEEDED_DISCARDS, getMtuExceededDiscards());
	return true;
}

Uint32 UNIX_SwitchPortStatistics::getMtuExceededDiscards() const
{
	return Uint32(0);
}



Boolean UNIX_SwitchPortStatistics::initialize()
{
	return false;
}

Boolean UNIX_SwitchPortStatistics::load(int &pIndex)
{
	return false;
}

Boolean UNIX_SwitchPortStatistics::finalize()
{
	return false;
}

Boolean UNIX_SwitchPortStatistics::find(Array<CIMKeyBinding> &kbArray)
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
