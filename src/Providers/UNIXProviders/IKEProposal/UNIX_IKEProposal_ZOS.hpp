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


UNIX_IKEProposal::UNIX_IKEProposal(void)
{
}

UNIX_IKEProposal::~UNIX_IKEProposal(void)
{
}


Boolean UNIX_IKEProposal::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_IKEProposal::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_IKEProposal::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_IKEProposal::getCaption() const
{
	return String ("");
}

Boolean UNIX_IKEProposal::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_IKEProposal::getDescription() const
{
	return String ("");
}

Boolean UNIX_IKEProposal::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_IKEProposal::getElementName() const
{
	return String("IKEProposal");
}

Boolean UNIX_IKEProposal::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_IKEProposal::getChangeableType() const
{
	return Uint16(0);
}

Boolean UNIX_IKEProposal::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_IKEProposal::getConfigurationName() const
{
	return String ("");
}

Boolean UNIX_IKEProposal::getMaxLifetimeSeconds(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_LIFETIME_SECONDS, getMaxLifetimeSeconds());
	return true;
}

Uint64 UNIX_IKEProposal::getMaxLifetimeSeconds() const
{
	return Uint64(0);
}

Boolean UNIX_IKEProposal::getMaxLifetimeKilobytes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_LIFETIME_KILOBYTES, getMaxLifetimeKilobytes());
	return true;
}

Uint64 UNIX_IKEProposal::getMaxLifetimeKilobytes() const
{
	return Uint64(0);
}

Boolean UNIX_IKEProposal::getCipherAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CIPHER_ALGORITHM, getCipherAlgorithm());
	return true;
}

Uint16 UNIX_IKEProposal::getCipherAlgorithm() const
{
	return Uint16(0);
}

Boolean UNIX_IKEProposal::getOtherCipherAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_CIPHER_ALGORITHM, getOtherCipherAlgorithm());
	return true;
}

String UNIX_IKEProposal::getOtherCipherAlgorithm() const
{
	return String ("");
}

Boolean UNIX_IKEProposal::getHashAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HASH_ALGORITHM, getHashAlgorithm());
	return true;
}

Uint16 UNIX_IKEProposal::getHashAlgorithm() const
{
	return Uint16(0);
}

Boolean UNIX_IKEProposal::getOtherHashAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_HASH_ALGORITHM, getOtherHashAlgorithm());
	return true;
}

String UNIX_IKEProposal::getOtherHashAlgorithm() const
{
	return String ("");
}

Boolean UNIX_IKEProposal::getAuthenticationMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTHENTICATION_METHOD, getAuthenticationMethod());
	return true;
}

Uint16 UNIX_IKEProposal::getAuthenticationMethod() const
{
	return Uint16(0);
}

Boolean UNIX_IKEProposal::getOtherAuthenticationMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_AUTHENTICATION_METHOD, getOtherAuthenticationMethod());
	return true;
}

String UNIX_IKEProposal::getOtherAuthenticationMethod() const
{
	return String ("");
}

Boolean UNIX_IKEProposal::getGroupId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_ID, getGroupId());
	return true;
}

Uint16 UNIX_IKEProposal::getGroupId() const
{
	return Uint16(0);
}

Boolean UNIX_IKEProposal::getVendorID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_ID, getVendorID());
	return true;
}

String UNIX_IKEProposal::getVendorID() const
{
	return String ("");
}



Boolean UNIX_IKEProposal::initialize()
{
	return false;
}

Boolean UNIX_IKEProposal::load(int &pIndex)
{
	return false;
}

Boolean UNIX_IKEProposal::finalize()
{
	return false;
}

Boolean UNIX_IKEProposal::find(Array<CIMKeyBinding> &kbArray)
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
