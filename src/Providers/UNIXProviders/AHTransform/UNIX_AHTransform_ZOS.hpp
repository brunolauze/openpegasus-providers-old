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


UNIX_AHTransform::UNIX_AHTransform(void)
{
}

UNIX_AHTransform::~UNIX_AHTransform(void)
{
}


Boolean UNIX_AHTransform::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_AHTransform::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_AHTransform::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_AHTransform::getCaption() const
{
	return String ("");
}

Boolean UNIX_AHTransform::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_AHTransform::getDescription() const
{
	return String ("");
}

Boolean UNIX_AHTransform::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_AHTransform::getElementName() const
{
	return String("AHTransform");
}

Boolean UNIX_AHTransform::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_AHTransform::getChangeableType() const
{
	return Uint16(0);
}

Boolean UNIX_AHTransform::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_AHTransform::getConfigurationName() const
{
	return String ("");
}

Boolean UNIX_AHTransform::getMaxLifetimeSeconds(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_LIFETIME_SECONDS, getMaxLifetimeSeconds());
	return true;
}

Uint64 UNIX_AHTransform::getMaxLifetimeSeconds() const
{
	return Uint64(0);
}

Boolean UNIX_AHTransform::getMaxLifetimeKilobytes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_LIFETIME_KILOBYTES, getMaxLifetimeKilobytes());
	return true;
}

Uint64 UNIX_AHTransform::getMaxLifetimeKilobytes() const
{
	return Uint64(0);
}

Boolean UNIX_AHTransform::getVendorID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_ID, getVendorID());
	return true;
}

String UNIX_AHTransform::getVendorID() const
{
	return String ("");
}

Boolean UNIX_AHTransform::getAHTransformId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_A_H_TRANSFORM_ID, getAHTransformId());
	return true;
}

Uint16 UNIX_AHTransform::getAHTransformId() const
{
	return Uint16(0);
}

Boolean UNIX_AHTransform::getOtherAHTransformId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_A_H_TRANSFORM_ID, getOtherAHTransformId());
	return true;
}

String UNIX_AHTransform::getOtherAHTransformId() const
{
	return String ("");
}

Boolean UNIX_AHTransform::getUseReplayPrevention(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USE_REPLAY_PREVENTION, getUseReplayPrevention());
	return true;
}

Boolean UNIX_AHTransform::getUseReplayPrevention() const
{
	return Boolean(false);
}

Boolean UNIX_AHTransform::getReplayPreventionWindowSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPLAY_PREVENTION_WINDOW_SIZE, getReplayPreventionWindowSize());
	return true;
}

Uint32 UNIX_AHTransform::getReplayPreventionWindowSize() const
{
	return Uint32(0);
}



Boolean UNIX_AHTransform::initialize()
{
	return false;
}

Boolean UNIX_AHTransform::load(int &pIndex)
{
	return false;
}

Boolean UNIX_AHTransform::finalize()
{
	return false;
}

Boolean UNIX_AHTransform::find(Array<CIMKeyBinding> &kbArray)
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
