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


UNIX_DatabaseSegmentSettingData::UNIX_DatabaseSegmentSettingData(void)
{
}

UNIX_DatabaseSegmentSettingData::~UNIX_DatabaseSegmentSettingData(void)
{
}


Boolean UNIX_DatabaseSegmentSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DatabaseSegmentSettingData::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_DatabaseSegmentSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DatabaseSegmentSettingData::getCaption() const
{
	return String ("");
}

Boolean UNIX_DatabaseSegmentSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DatabaseSegmentSettingData::getDescription() const
{
	return String ("");
}

Boolean UNIX_DatabaseSegmentSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DatabaseSegmentSettingData::getElementName() const
{
	return String("DatabaseSegmentSettingData");
}

Boolean UNIX_DatabaseSegmentSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_DatabaseSegmentSettingData::getChangeableType() const
{
	return Uint16(0);
}

Boolean UNIX_DatabaseSegmentSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_DatabaseSegmentSettingData::getConfigurationName() const
{
	return String ("");
}

Boolean UNIX_DatabaseSegmentSettingData::getInitialExtentSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INITIAL_EXTENT_SIZE, getInitialExtentSize());
	return true;
}

Uint64 UNIX_DatabaseSegmentSettingData::getInitialExtentSize() const
{
	return Uint64(0);
}

Boolean UNIX_DatabaseSegmentSettingData::getMinimumExtents(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MINIMUM_EXTENTS, getMinimumExtents());
	return true;
}

Uint64 UNIX_DatabaseSegmentSettingData::getMinimumExtents() const
{
	return Uint64(0);
}

Boolean UNIX_DatabaseSegmentSettingData::getMaximumExtents(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_EXTENTS, getMaximumExtents());
	return true;
}

Uint64 UNIX_DatabaseSegmentSettingData::getMaximumExtents() const
{
	return Uint64(0);
}

Boolean UNIX_DatabaseSegmentSettingData::getNextExtentSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NEXT_EXTENT_SIZE, getNextExtentSize());
	return true;
}

Uint64 UNIX_DatabaseSegmentSettingData::getNextExtentSize() const
{
	return Uint64(0);
}

Boolean UNIX_DatabaseSegmentSettingData::getPercentIncrease(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERCENT_INCREASE, getPercentIncrease());
	return true;
}

Uint16 UNIX_DatabaseSegmentSettingData::getPercentIncrease() const
{
	return Uint16(0);
}

Boolean UNIX_DatabaseSegmentSettingData::getNumberOfFreeLists(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_FREE_LISTS, getNumberOfFreeLists());
	return true;
}

Uint32 UNIX_DatabaseSegmentSettingData::getNumberOfFreeLists() const
{
	return Uint32(0);
}



Boolean UNIX_DatabaseSegmentSettingData::initialize()
{
	return false;
}

Boolean UNIX_DatabaseSegmentSettingData::load(int &pIndex)
{
	return false;
}

Boolean UNIX_DatabaseSegmentSettingData::finalize()
{
	return false;
}

Boolean UNIX_DatabaseSegmentSettingData::find(Array<CIMKeyBinding> &kbArray)
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
