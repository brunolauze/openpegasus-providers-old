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


UNIX_ListenerDestinationCIMXML::UNIX_ListenerDestinationCIMXML(void)
{
}

UNIX_ListenerDestinationCIMXML::~UNIX_ListenerDestinationCIMXML(void)
{
}


Boolean UNIX_ListenerDestinationCIMXML::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ListenerDestinationCIMXML::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_ListenerDestinationCIMXML::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ListenerDestinationCIMXML::getCaption() const
{
	return String ("");
}

Boolean UNIX_ListenerDestinationCIMXML::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ListenerDestinationCIMXML::getDescription() const
{
	return String ("");
}

Boolean UNIX_ListenerDestinationCIMXML::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ListenerDestinationCIMXML::getElementName() const
{
	return String("ListenerDestinationCIMXML");
}

Boolean UNIX_ListenerDestinationCIMXML::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_ListenerDestinationCIMXML::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_ListenerDestinationCIMXML::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_ListenerDestinationCIMXML::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_ListenerDestinationCIMXML::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_ListenerDestinationCIMXML::getCreationClassName() const
{
	return String("UNIX_ListenerDestinationCIMXML");
}

Boolean UNIX_ListenerDestinationCIMXML::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_ListenerDestinationCIMXML::getName() const
{
	return String ("");
}

Boolean UNIX_ListenerDestinationCIMXML::getPersistenceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERSISTENCE_TYPE, getPersistenceType());
	return true;
}

Uint16 UNIX_ListenerDestinationCIMXML::getPersistenceType() const
{
	return Uint16(0);
}

Boolean UNIX_ListenerDestinationCIMXML::getOtherPersistenceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PERSISTENCE_TYPE, getOtherPersistenceType());
	return true;
}

String UNIX_ListenerDestinationCIMXML::getOtherPersistenceType() const
{
	return String ("");
}

Boolean UNIX_ListenerDestinationCIMXML::getDestination(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESTINATION, getDestination());
	return true;
}

String UNIX_ListenerDestinationCIMXML::getDestination() const
{
	return String ("");
}

Boolean UNIX_ListenerDestinationCIMXML::getOtherProtocol(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PROTOCOL, getOtherProtocol());
	return true;
}

String UNIX_ListenerDestinationCIMXML::getOtherProtocol() const
{
	return String ("");
}

Boolean UNIX_ListenerDestinationCIMXML::getProtocol(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL, getProtocol());
	return true;
}

Uint16 UNIX_ListenerDestinationCIMXML::getProtocol() const
{
	return Uint16(0);
}



Boolean UNIX_ListenerDestinationCIMXML::initialize()
{
	return false;
}

Boolean UNIX_ListenerDestinationCIMXML::load(int &pIndex)
{
	return false;
}

Boolean UNIX_ListenerDestinationCIMXML::finalize()
{
	return false;
}

Boolean UNIX_ListenerDestinationCIMXML::find(Array<CIMKeyBinding> &kbArray)
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
