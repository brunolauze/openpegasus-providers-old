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


UNIX_MediaPhysicalStatInfo::UNIX_MediaPhysicalStatInfo(void)
{
}

UNIX_MediaPhysicalStatInfo::~UNIX_MediaPhysicalStatInfo(void)
{
}


Boolean UNIX_MediaPhysicalStatInfo::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_MediaPhysicalStatInfo::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_MediaPhysicalStatInfo::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_MediaPhysicalStatInfo::getCaption() const
{
	return String ("");
}

Boolean UNIX_MediaPhysicalStatInfo::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_MediaPhysicalStatInfo::getDescription() const
{
	return String ("");
}

Boolean UNIX_MediaPhysicalStatInfo::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_MediaPhysicalStatInfo::getElementName() const
{
	return String("MediaPhysicalStatInfo");
}

Boolean UNIX_MediaPhysicalStatInfo::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_MediaPhysicalStatInfo::getName() const
{
	return String ("");
}

Boolean UNIX_MediaPhysicalStatInfo::getPhysicalCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PHYSICAL_CREATION_CLASS_NAME, getPhysicalCreationClassName());
	return true;
}

String UNIX_MediaPhysicalStatInfo::getPhysicalCreationClassName() const
{
	return String ("");
}

Boolean UNIX_MediaPhysicalStatInfo::getTag(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TAG, getTag());
	return true;
}

String UNIX_MediaPhysicalStatInfo::getTag() const
{
	return String ("");
}

Boolean UNIX_MediaPhysicalStatInfo::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_MediaPhysicalStatInfo::getCreationClassName() const
{
	return String("UNIX_MediaPhysicalStatInfo");
}

Boolean UNIX_MediaPhysicalStatInfo::getScanSuccesses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCAN_SUCCESSES, getScanSuccesses());
	return true;
}

Uint64 UNIX_MediaPhysicalStatInfo::getScanSuccesses() const
{
	return Uint64(0);
}

Boolean UNIX_MediaPhysicalStatInfo::getScanFailures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCAN_FAILURES, getScanFailures());
	return true;
}

Uint64 UNIX_MediaPhysicalStatInfo::getScanFailures() const
{
	return Uint64(0);
}

Boolean UNIX_MediaPhysicalStatInfo::getScanRetries(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCAN_RETRIES, getScanRetries());
	return true;
}

Uint64 UNIX_MediaPhysicalStatInfo::getScanRetries() const
{
	return Uint64(0);
}

Boolean UNIX_MediaPhysicalStatInfo::getPickSuccesses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PICK_SUCCESSES, getPickSuccesses());
	return true;
}

Uint64 UNIX_MediaPhysicalStatInfo::getPickSuccesses() const
{
	return Uint64(0);
}

Boolean UNIX_MediaPhysicalStatInfo::getPickFailures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PICK_FAILURES, getPickFailures());
	return true;
}

Uint64 UNIX_MediaPhysicalStatInfo::getPickFailures() const
{
	return Uint64(0);
}

Boolean UNIX_MediaPhysicalStatInfo::getPickRetries(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PICK_RETRIES, getPickRetries());
	return true;
}

Uint64 UNIX_MediaPhysicalStatInfo::getPickRetries() const
{
	return Uint64(0);
}

Boolean UNIX_MediaPhysicalStatInfo::getPutSuccesses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PUT_SUCCESSES, getPutSuccesses());
	return true;
}

Uint64 UNIX_MediaPhysicalStatInfo::getPutSuccesses() const
{
	return Uint64(0);
}

Boolean UNIX_MediaPhysicalStatInfo::getPutFailures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PUT_FAILURES, getPutFailures());
	return true;
}

Uint64 UNIX_MediaPhysicalStatInfo::getPutFailures() const
{
	return Uint64(0);
}

Boolean UNIX_MediaPhysicalStatInfo::getPutRetries(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PUT_RETRIES, getPutRetries());
	return true;
}

Uint64 UNIX_MediaPhysicalStatInfo::getPutRetries() const
{
	return Uint64(0);
}



Boolean UNIX_MediaPhysicalStatInfo::initialize()
{
	return false;
}

Boolean UNIX_MediaPhysicalStatInfo::load(int &pIndex)
{
	return false;
}

Boolean UNIX_MediaPhysicalStatInfo::finalize()
{
	return false;
}

Boolean UNIX_MediaPhysicalStatInfo::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String physicalCreationClassNameKey;
	String tagKey;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_PHYSICAL_CREATION_CLASS_NAME)) physicalCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_TAG)) tagKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
