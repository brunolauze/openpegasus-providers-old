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


UNIX_SupportAccess::UNIX_SupportAccess(void)
{
}

UNIX_SupportAccess::~UNIX_SupportAccess(void)
{
}


Boolean UNIX_SupportAccess::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SupportAccess::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_SupportAccess::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SupportAccess::getCaption() const
{
	return String ("");
}

Boolean UNIX_SupportAccess::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SupportAccess::getDescription() const
{
	return String ("");
}

Boolean UNIX_SupportAccess::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SupportAccess::getElementName() const
{
	return String("SupportAccess");
}

Boolean UNIX_SupportAccess::getSupportAccessId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORT_ACCESS_ID, getSupportAccessId());
	return true;
}

String UNIX_SupportAccess::getSupportAccessId() const
{
	return String ("");
}

Boolean UNIX_SupportAccess::getCommunicationInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_INFO, getCommunicationInfo());
	return true;
}

String UNIX_SupportAccess::getCommunicationInfo() const
{
	return String ("");
}

Boolean UNIX_SupportAccess::getCommunicationMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_MODE, getCommunicationMode());
	return true;
}

Uint16 UNIX_SupportAccess::getCommunicationMode() const
{
	return Uint16(0);
}

Boolean UNIX_SupportAccess::getLocale(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCALE, getLocale());
	return true;
}

String UNIX_SupportAccess::getLocale() const
{
	return String ("");
}



Boolean UNIX_SupportAccess::initialize()
{
	return false;
}

Boolean UNIX_SupportAccess::load(int &pIndex)
{
	return false;
}

Boolean UNIX_SupportAccess::finalize()
{
	return false;
}

Boolean UNIX_SupportAccess::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String supportAccessIdKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SUPPORT_ACCESS_ID)) supportAccessIdKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
