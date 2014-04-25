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


UNIX_PhysicalStatisticalInformation::UNIX_PhysicalStatisticalInformation(void)
{
}

UNIX_PhysicalStatisticalInformation::~UNIX_PhysicalStatisticalInformation(void)
{
}


Boolean UNIX_PhysicalStatisticalInformation::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PhysicalStatisticalInformation::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_PhysicalStatisticalInformation::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PhysicalStatisticalInformation::getCaption() const
{
	return String ("");
}

Boolean UNIX_PhysicalStatisticalInformation::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PhysicalStatisticalInformation::getDescription() const
{
	return String ("");
}

Boolean UNIX_PhysicalStatisticalInformation::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PhysicalStatisticalInformation::getElementName() const
{
	return String("PhysicalStatisticalInformation");
}

Boolean UNIX_PhysicalStatisticalInformation::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PhysicalStatisticalInformation::getName() const
{
	return String ("");
}

Boolean UNIX_PhysicalStatisticalInformation::getPhysicalCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PHYSICAL_CREATION_CLASS_NAME, getPhysicalCreationClassName());
	return true;
}

String UNIX_PhysicalStatisticalInformation::getPhysicalCreationClassName() const
{
	return String ("");
}

Boolean UNIX_PhysicalStatisticalInformation::getTag(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TAG, getTag());
	return true;
}

String UNIX_PhysicalStatisticalInformation::getTag() const
{
	return String ("");
}

Boolean UNIX_PhysicalStatisticalInformation::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_PhysicalStatisticalInformation::getCreationClassName() const
{
	return String("UNIX_PhysicalStatisticalInformation");
}



Boolean UNIX_PhysicalStatisticalInformation::initialize()
{
	return false;
}

Boolean UNIX_PhysicalStatisticalInformation::load(int &pIndex)
{
	return false;
}

Boolean UNIX_PhysicalStatisticalInformation::finalize()
{
	return false;
}

Boolean UNIX_PhysicalStatisticalInformation::find(Array<CIMKeyBinding> &kbArray)
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
