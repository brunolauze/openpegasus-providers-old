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


UNIX_LANSegment::UNIX_LANSegment(void)
{
}

UNIX_LANSegment::~UNIX_LANSegment(void)
{
}


Boolean UNIX_LANSegment::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_LANSegment::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_LANSegment::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_LANSegment::getCaption() const
{
	return String ("");
}

Boolean UNIX_LANSegment::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_LANSegment::getDescription() const
{
	return String ("");
}

Boolean UNIX_LANSegment::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_LANSegment::getElementName() const
{
	return String("LANSegment");
}

Boolean UNIX_LANSegment::getCollectionID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COLLECTION_ID, getCollectionID());
	return true;
}

String UNIX_LANSegment::getCollectionID() const
{
	return String ("");
}

Boolean UNIX_LANSegment::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_LANSegment::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_LANSegment::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_LANSegment::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_LANSegment::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_LANSegment::getCreationClassName() const
{
	return String("UNIX_LANSegment");
}

Boolean UNIX_LANSegment::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_LANSegment::getName() const
{
	return String ("");
}

Boolean UNIX_LANSegment::getNetworkType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NETWORK_TYPE, getNetworkType());
	return true;
}

Uint16 UNIX_LANSegment::getNetworkType() const
{
	return Uint16(0);
}

Boolean UNIX_LANSegment::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_LANSegment::getOtherTypeDescription() const
{
	return String ("");
}

Boolean UNIX_LANSegment::getLANID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_L_A_N_ID, getLANID());
	return true;
}

String UNIX_LANSegment::getLANID() const
{
	return String ("");
}

Boolean UNIX_LANSegment::getLANType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_L_A_N_TYPE, getLANType());
	return true;
}

Uint16 UNIX_LANSegment::getLANType() const
{
	return Uint16(0);
}

Boolean UNIX_LANSegment::getOtherLANType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_L_A_N_TYPE, getOtherLANType());
	return true;
}

String UNIX_LANSegment::getOtherLANType() const
{
	return String ("");
}



Boolean UNIX_LANSegment::initialize()
{
	return false;
}

Boolean UNIX_LANSegment::load(int &pIndex)
{
	return false;
}

Boolean UNIX_LANSegment::finalize()
{
	return false;
}

Boolean UNIX_LANSegment::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
