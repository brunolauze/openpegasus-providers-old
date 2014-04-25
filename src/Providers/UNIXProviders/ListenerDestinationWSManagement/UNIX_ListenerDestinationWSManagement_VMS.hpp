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


UNIX_ListenerDestinationWSManagement::UNIX_ListenerDestinationWSManagement(void)
{
}

UNIX_ListenerDestinationWSManagement::~UNIX_ListenerDestinationWSManagement(void)
{
}


Boolean UNIX_ListenerDestinationWSManagement::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ListenerDestinationWSManagement::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_ListenerDestinationWSManagement::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ListenerDestinationWSManagement::getCaption() const
{
	return String ("");
}

Boolean UNIX_ListenerDestinationWSManagement::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ListenerDestinationWSManagement::getDescription() const
{
	return String ("");
}

Boolean UNIX_ListenerDestinationWSManagement::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ListenerDestinationWSManagement::getElementName() const
{
	return String("ListenerDestinationWSManagement");
}

Boolean UNIX_ListenerDestinationWSManagement::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_ListenerDestinationWSManagement::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_ListenerDestinationWSManagement::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_ListenerDestinationWSManagement::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_ListenerDestinationWSManagement::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_ListenerDestinationWSManagement::getCreationClassName() const
{
	return String("UNIX_ListenerDestinationWSManagement");
}

Boolean UNIX_ListenerDestinationWSManagement::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_ListenerDestinationWSManagement::getName() const
{
	return String ("");
}

Boolean UNIX_ListenerDestinationWSManagement::getPersistenceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERSISTENCE_TYPE, getPersistenceType());
	return true;
}

Uint16 UNIX_ListenerDestinationWSManagement::getPersistenceType() const
{
	return Uint16(0);
}

Boolean UNIX_ListenerDestinationWSManagement::getOtherPersistenceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PERSISTENCE_TYPE, getOtherPersistenceType());
	return true;
}

String UNIX_ListenerDestinationWSManagement::getOtherPersistenceType() const
{
	return String ("");
}

Boolean UNIX_ListenerDestinationWSManagement::getDestination(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESTINATION, getDestination());
	return true;
}

String UNIX_ListenerDestinationWSManagement::getDestination() const
{
	return String ("");
}

Boolean UNIX_ListenerDestinationWSManagement::getOtherProtocol(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PROTOCOL, getOtherProtocol());
	return true;
}

String UNIX_ListenerDestinationWSManagement::getOtherProtocol() const
{
	return String ("");
}

Boolean UNIX_ListenerDestinationWSManagement::getProtocol(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL, getProtocol());
	return true;
}

Uint16 UNIX_ListenerDestinationWSManagement::getProtocol() const
{
	return Uint16(0);
}

Boolean UNIX_ListenerDestinationWSManagement::getDestinationEndTo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESTINATION_END_TO, getDestinationEndTo());
	return true;
}

String UNIX_ListenerDestinationWSManagement::getDestinationEndTo() const
{
	return String ("");
}

Boolean UNIX_ListenerDestinationWSManagement::getLocale(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCALE, getLocale());
	return true;
}

String UNIX_ListenerDestinationWSManagement::getLocale() const
{
	return String ("");
}

Boolean UNIX_ListenerDestinationWSManagement::getContentEncoding(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONTENT_ENCODING, getContentEncoding());
	return true;
}

String UNIX_ListenerDestinationWSManagement::getContentEncoding() const
{
	return String ("");
}

Boolean UNIX_ListenerDestinationWSManagement::getDeliveryMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELIVERY_MODE, getDeliveryMode());
	return true;
}

Uint16 UNIX_ListenerDestinationWSManagement::getDeliveryMode() const
{
	return Uint16(0);
}

Boolean UNIX_ListenerDestinationWSManagement::getHeartbeat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEARTBEAT, getHeartbeat());
	return true;
}

Uint64 UNIX_ListenerDestinationWSManagement::getHeartbeat() const
{
	return Uint64(0);
}

Boolean UNIX_ListenerDestinationWSManagement::getSendBookmark(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEND_BOOKMARK, getSendBookmark());
	return true;
}

Boolean UNIX_ListenerDestinationWSManagement::getSendBookmark() const
{
	return Boolean(false);
}

Boolean UNIX_ListenerDestinationWSManagement::getMaxTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_TIME, getMaxTime());
	return true;
}

Uint64 UNIX_ListenerDestinationWSManagement::getMaxTime() const
{
	return Uint64(0);
}

Boolean UNIX_ListenerDestinationWSManagement::getDeliveryAuth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELIVERY_AUTH, getDeliveryAuth());
	return true;
}

String UNIX_ListenerDestinationWSManagement::getDeliveryAuth() const
{
	return String ("");
}

Boolean UNIX_ListenerDestinationWSManagement::getPolyMorphismMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLY_MORPHISM_MODE, getPolyMorphismMode());
	return true;
}

Uint16 UNIX_ListenerDestinationWSManagement::getPolyMorphismMode() const
{
	return Uint16(0);
}



Boolean UNIX_ListenerDestinationWSManagement::initialize()
{
	return false;
}

Boolean UNIX_ListenerDestinationWSManagement::load(int &pIndex)
{
	return false;
}

Boolean UNIX_ListenerDestinationWSManagement::finalize()
{
	return false;
}

Boolean UNIX_ListenerDestinationWSManagement::find(Array<CIMKeyBinding> &kbArray)
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
