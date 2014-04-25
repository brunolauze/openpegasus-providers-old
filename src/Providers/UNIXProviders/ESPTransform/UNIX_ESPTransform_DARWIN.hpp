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


UNIX_ESPTransform::UNIX_ESPTransform(void)
{
}

UNIX_ESPTransform::~UNIX_ESPTransform(void)
{
}


Boolean UNIX_ESPTransform::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ESPTransform::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_ESPTransform::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ESPTransform::getCaption() const
{
	return String ("");
}

Boolean UNIX_ESPTransform::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ESPTransform::getDescription() const
{
	return String ("");
}

Boolean UNIX_ESPTransform::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ESPTransform::getElementName() const
{
	return String("ESPTransform");
}

Boolean UNIX_ESPTransform::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_ESPTransform::getChangeableType() const
{
	return Uint16(0);
}

Boolean UNIX_ESPTransform::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_ESPTransform::getConfigurationName() const
{
	return String ("");
}

Boolean UNIX_ESPTransform::getMaxLifetimeSeconds(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_LIFETIME_SECONDS, getMaxLifetimeSeconds());
	return true;
}

Uint64 UNIX_ESPTransform::getMaxLifetimeSeconds() const
{
	return Uint64(0);
}

Boolean UNIX_ESPTransform::getMaxLifetimeKilobytes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_LIFETIME_KILOBYTES, getMaxLifetimeKilobytes());
	return true;
}

Uint64 UNIX_ESPTransform::getMaxLifetimeKilobytes() const
{
	return Uint64(0);
}

Boolean UNIX_ESPTransform::getVendorID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_ID, getVendorID());
	return true;
}

String UNIX_ESPTransform::getVendorID() const
{
	return String ("");
}

Boolean UNIX_ESPTransform::getIntegrityTransformId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTEGRITY_TRANSFORM_ID, getIntegrityTransformId());
	return true;
}

Uint16 UNIX_ESPTransform::getIntegrityTransformId() const
{
	return Uint16(0);
}

Boolean UNIX_ESPTransform::getOtherIntegrityTransformId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_INTEGRITY_TRANSFORM_ID, getOtherIntegrityTransformId());
	return true;
}

String UNIX_ESPTransform::getOtherIntegrityTransformId() const
{
	return String ("");
}

Boolean UNIX_ESPTransform::getCipherTransformId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CIPHER_TRANSFORM_ID, getCipherTransformId());
	return true;
}

Uint16 UNIX_ESPTransform::getCipherTransformId() const
{
	return Uint16(0);
}

Boolean UNIX_ESPTransform::getOtherCipherTransformId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_CIPHER_TRANSFORM_ID, getOtherCipherTransformId());
	return true;
}

String UNIX_ESPTransform::getOtherCipherTransformId() const
{
	return String ("");
}

Boolean UNIX_ESPTransform::getCipherKeyLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CIPHER_KEY_LENGTH, getCipherKeyLength());
	return true;
}

Uint16 UNIX_ESPTransform::getCipherKeyLength() const
{
	return Uint16(0);
}

Boolean UNIX_ESPTransform::getCipherKeyRounds(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CIPHER_KEY_ROUNDS, getCipherKeyRounds());
	return true;
}

Uint16 UNIX_ESPTransform::getCipherKeyRounds() const
{
	return Uint16(0);
}

Boolean UNIX_ESPTransform::getUseReplayPrevention(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USE_REPLAY_PREVENTION, getUseReplayPrevention());
	return true;
}

Boolean UNIX_ESPTransform::getUseReplayPrevention() const
{
	return Boolean(false);
}

Boolean UNIX_ESPTransform::getReplayPreventionWindowSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPLAY_PREVENTION_WINDOW_SIZE, getReplayPreventionWindowSize());
	return true;
}

Uint32 UNIX_ESPTransform::getReplayPreventionWindowSize() const
{
	return Uint32(0);
}



Boolean UNIX_ESPTransform::initialize()
{
	return false;
}

Boolean UNIX_ESPTransform::load(int &pIndex)
{
	return false;
}

Boolean UNIX_ESPTransform::finalize()
{
	return false;
}

Boolean UNIX_ESPTransform::find(Array<CIMKeyBinding> &kbArray)
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
