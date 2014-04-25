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


UNIX_IPCOMPTransform::UNIX_IPCOMPTransform(void)
{
}

UNIX_IPCOMPTransform::~UNIX_IPCOMPTransform(void)
{
}


Boolean UNIX_IPCOMPTransform::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_IPCOMPTransform::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_IPCOMPTransform::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_IPCOMPTransform::getCaption() const
{
	return String ("");
}

Boolean UNIX_IPCOMPTransform::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_IPCOMPTransform::getDescription() const
{
	return String ("");
}

Boolean UNIX_IPCOMPTransform::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_IPCOMPTransform::getElementName() const
{
	return String("IPCOMPTransform");
}

Boolean UNIX_IPCOMPTransform::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_IPCOMPTransform::getChangeableType() const
{
	return Uint16(0);
}

Boolean UNIX_IPCOMPTransform::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_IPCOMPTransform::getConfigurationName() const
{
	return String ("");
}

Boolean UNIX_IPCOMPTransform::getMaxLifetimeSeconds(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_LIFETIME_SECONDS, getMaxLifetimeSeconds());
	return true;
}

Uint64 UNIX_IPCOMPTransform::getMaxLifetimeSeconds() const
{
	return Uint64(0);
}

Boolean UNIX_IPCOMPTransform::getMaxLifetimeKilobytes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_LIFETIME_KILOBYTES, getMaxLifetimeKilobytes());
	return true;
}

Uint64 UNIX_IPCOMPTransform::getMaxLifetimeKilobytes() const
{
	return Uint64(0);
}

Boolean UNIX_IPCOMPTransform::getVendorID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_ID, getVendorID());
	return true;
}

String UNIX_IPCOMPTransform::getVendorID() const
{
	return String ("");
}

Boolean UNIX_IPCOMPTransform::getAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALGORITHM, getAlgorithm());
	return true;
}

Uint16 UNIX_IPCOMPTransform::getAlgorithm() const
{
	return Uint16(0);
}

Boolean UNIX_IPCOMPTransform::getOtherAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ALGORITHM, getOtherAlgorithm());
	return true;
}

String UNIX_IPCOMPTransform::getOtherAlgorithm() const
{
	return String ("");
}

Boolean UNIX_IPCOMPTransform::getPrivateAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIVATE_ALGORITHM, getPrivateAlgorithm());
	return true;
}

Uint32 UNIX_IPCOMPTransform::getPrivateAlgorithm() const
{
	return Uint32(0);
}

Boolean UNIX_IPCOMPTransform::getDictionarySize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DICTIONARY_SIZE, getDictionarySize());
	return true;
}

Uint16 UNIX_IPCOMPTransform::getDictionarySize() const
{
	return Uint16(0);
}



Boolean UNIX_IPCOMPTransform::initialize()
{
	return false;
}

Boolean UNIX_IPCOMPTransform::load(int &pIndex)
{
	return false;
}

Boolean UNIX_IPCOMPTransform::finalize()
{
	return false;
}

Boolean UNIX_IPCOMPTransform::find(Array<CIMKeyBinding> &kbArray)
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
