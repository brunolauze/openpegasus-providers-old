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


UNIX_IndicationHandlerCIMXML::UNIX_IndicationHandlerCIMXML(void)
{
}

UNIX_IndicationHandlerCIMXML::~UNIX_IndicationHandlerCIMXML(void)
{
}


Boolean UNIX_IndicationHandlerCIMXML::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_IndicationHandlerCIMXML::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_IndicationHandlerCIMXML::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_IndicationHandlerCIMXML::getCaption() const
{
	return String ("");
}

Boolean UNIX_IndicationHandlerCIMXML::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_IndicationHandlerCIMXML::getDescription() const
{
	return String ("");
}

Boolean UNIX_IndicationHandlerCIMXML::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_IndicationHandlerCIMXML::getElementName() const
{
	return String("IndicationHandlerCIMXML");
}

Boolean UNIX_IndicationHandlerCIMXML::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_IndicationHandlerCIMXML::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_IndicationHandlerCIMXML::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_IndicationHandlerCIMXML::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_IndicationHandlerCIMXML::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_IndicationHandlerCIMXML::getCreationClassName() const
{
	return String("UNIX_IndicationHandlerCIMXML");
}

Boolean UNIX_IndicationHandlerCIMXML::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_IndicationHandlerCIMXML::getName() const
{
	return String ("");
}

Boolean UNIX_IndicationHandlerCIMXML::getPersistenceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERSISTENCE_TYPE, getPersistenceType());
	return true;
}

Uint16 UNIX_IndicationHandlerCIMXML::getPersistenceType() const
{
	return Uint16(0);
}

Boolean UNIX_IndicationHandlerCIMXML::getOtherPersistenceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PERSISTENCE_TYPE, getOtherPersistenceType());
	return true;
}

String UNIX_IndicationHandlerCIMXML::getOtherPersistenceType() const
{
	return String ("");
}

Boolean UNIX_IndicationHandlerCIMXML::getDestination(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESTINATION, getDestination());
	return true;
}

String UNIX_IndicationHandlerCIMXML::getDestination() const
{
	return String ("");
}

Boolean UNIX_IndicationHandlerCIMXML::getOtherProtocol(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PROTOCOL, getOtherProtocol());
	return true;
}

String UNIX_IndicationHandlerCIMXML::getOtherProtocol() const
{
	return String ("");
}

Boolean UNIX_IndicationHandlerCIMXML::getProtocol(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL, getProtocol());
	return true;
}

Uint16 UNIX_IndicationHandlerCIMXML::getProtocol() const
{
	return Uint16(0);
}

Boolean UNIX_IndicationHandlerCIMXML::getOwner(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OWNER, getOwner());
	return true;
}

String UNIX_IndicationHandlerCIMXML::getOwner() const
{
	return String ("");
}



Boolean UNIX_IndicationHandlerCIMXML::initialize()
{
	return false;
}

Boolean UNIX_IndicationHandlerCIMXML::load(int &pIndex)
{
	return false;
}

Boolean UNIX_IndicationHandlerCIMXML::finalize()
{
	return false;
}

Boolean UNIX_IndicationHandlerCIMXML::find(Array<CIMKeyBinding> &kbArray)
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
