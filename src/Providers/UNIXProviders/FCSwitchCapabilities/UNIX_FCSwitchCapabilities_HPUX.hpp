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


UNIX_FCSwitchCapabilities::UNIX_FCSwitchCapabilities(void)
{
}

UNIX_FCSwitchCapabilities::~UNIX_FCSwitchCapabilities(void)
{
}


Boolean UNIX_FCSwitchCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FCSwitchCapabilities::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_FCSwitchCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FCSwitchCapabilities::getCaption() const
{
	return String ("");
}

Boolean UNIX_FCSwitchCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FCSwitchCapabilities::getDescription() const
{
	return String ("");
}

Boolean UNIX_FCSwitchCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FCSwitchCapabilities::getElementName() const
{
	return String("FCSwitchCapabilities");
}

Boolean UNIX_FCSwitchCapabilities::getElementNameEditSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_EDIT_SUPPORTED, getElementNameEditSupported());
	return true;
}

Boolean UNIX_FCSwitchCapabilities::getElementNameEditSupported() const
{
	return Boolean(false);
}

Boolean UNIX_FCSwitchCapabilities::getMaxElementNameLen(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ELEMENT_NAME_LEN, getMaxElementNameLen());
	return true;
}

Uint16 UNIX_FCSwitchCapabilities::getMaxElementNameLen() const
{
	return Uint16(0);
}

Boolean UNIX_FCSwitchCapabilities::getRequestedStatesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATES_SUPPORTED, getRequestedStatesSupported());
	return true;
}

Array<Uint16> UNIX_FCSwitchCapabilities::getRequestedStatesSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_FCSwitchCapabilities::getElementNameMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_MASK, getElementNameMask());
	return true;
}

String UNIX_FCSwitchCapabilities::getElementNameMask() const
{
	return String ("");
}

Boolean UNIX_FCSwitchCapabilities::getDomainIDConfigureable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DOMAIN_ID_CONFIGUREABLE, getDomainIDConfigureable());
	return true;
}

Boolean UNIX_FCSwitchCapabilities::getDomainIDConfigureable() const
{
	return Boolean(false);
}

Boolean UNIX_FCSwitchCapabilities::getMinDomainID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_DOMAIN_ID, getMinDomainID());
	return true;
}

Uint8 UNIX_FCSwitchCapabilities::getMinDomainID() const
{
	return Uint8(0);
}

Boolean UNIX_FCSwitchCapabilities::getMaxDomainID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_DOMAIN_ID, getMaxDomainID());
	return true;
}

Uint8 UNIX_FCSwitchCapabilities::getMaxDomainID() const
{
	return Uint8(0);
}

Boolean UNIX_FCSwitchCapabilities::getDomainIDLockedSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DOMAIN_ID_LOCKED_SUPPORTED, getDomainIDLockedSupported());
	return true;
}

Boolean UNIX_FCSwitchCapabilities::getDomainIDLockedSupported() const
{
	return Boolean(false);
}

Boolean UNIX_FCSwitchCapabilities::getPrincipalPrioritiesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRINCIPAL_PRIORITIES_SUPPORTED, getPrincipalPrioritiesSupported());
	return true;
}

Array<Uint16> UNIX_FCSwitchCapabilities::getPrincipalPrioritiesSupported() const
{
	Array<Uint16> as;
	

	return as;

}



Boolean UNIX_FCSwitchCapabilities::initialize()
{
	return false;
}

Boolean UNIX_FCSwitchCapabilities::load(int &pIndex)
{
	return false;
}

Boolean UNIX_FCSwitchCapabilities::finalize()
{
	return false;
}

Boolean UNIX_FCSwitchCapabilities::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String instanceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_INSTANCE_ID)) instanceIDKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
