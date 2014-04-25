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


UNIX_MetricDefinition::UNIX_MetricDefinition(void)
{
}

UNIX_MetricDefinition::~UNIX_MetricDefinition(void)
{
}


Boolean UNIX_MetricDefinition::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_MetricDefinition::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_MetricDefinition::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_MetricDefinition::getCaption() const
{
	return String ("");
}

Boolean UNIX_MetricDefinition::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_MetricDefinition::getDescription() const
{
	return String ("");
}

Boolean UNIX_MetricDefinition::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_MetricDefinition::getElementName() const
{
	return String("MetricDefinition");
}

Boolean UNIX_MetricDefinition::getId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ID, getId());
	return true;
}

String UNIX_MetricDefinition::getId() const
{
	return String ("");
}

Boolean UNIX_MetricDefinition::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_MetricDefinition::getName() const
{
	return String ("");
}

Boolean UNIX_MetricDefinition::getDataType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_TYPE, getDataType());
	return true;
}

Uint16 UNIX_MetricDefinition::getDataType() const
{
	return Uint16(0);
}

Boolean UNIX_MetricDefinition::getCalculable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CALCULABLE, getCalculable());
	return true;
}

Uint16 UNIX_MetricDefinition::getCalculable() const
{
	return Uint16(0);
}

Boolean UNIX_MetricDefinition::getUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNITS, getUnits());
	return true;
}

String UNIX_MetricDefinition::getUnits() const
{
	return String ("");
}

Boolean UNIX_MetricDefinition::getBreakdownDimensions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BREAKDOWN_DIMENSIONS, getBreakdownDimensions());
	return true;
}

Array<String> UNIX_MetricDefinition::getBreakdownDimensions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_MetricDefinition::getIsContinuous(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_CONTINUOUS, getIsContinuous());
	return true;
}

Boolean UNIX_MetricDefinition::getIsContinuous() const
{
	return Boolean(false);
}

Boolean UNIX_MetricDefinition::getChangeType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGE_TYPE, getChangeType());
	return true;
}

Uint16 UNIX_MetricDefinition::getChangeType() const
{
	return Uint16(0);
}

Boolean UNIX_MetricDefinition::getTimeScope(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_SCOPE, getTimeScope());
	return true;
}

Uint16 UNIX_MetricDefinition::getTimeScope() const
{
	return Uint16(0);
}

Boolean UNIX_MetricDefinition::getGatheringType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GATHERING_TYPE, getGatheringType());
	return true;
}

Uint16 UNIX_MetricDefinition::getGatheringType() const
{
	return Uint16(0);
}

Boolean UNIX_MetricDefinition::getProgrammaticUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROGRAMMATIC_UNITS, getProgrammaticUnits());
	return true;
}

String UNIX_MetricDefinition::getProgrammaticUnits() const
{
	return String ("");
}

Boolean UNIX_MetricDefinition::getValidity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VALIDITY, getValidity());
	return true;
}

Uint16 UNIX_MetricDefinition::getValidity() const
{
	return Uint16(0);
}



Boolean UNIX_MetricDefinition::initialize()
{
	return false;
}

Boolean UNIX_MetricDefinition::load(int &pIndex)
{
	return false;
}

Boolean UNIX_MetricDefinition::finalize()
{
	return false;
}

Boolean UNIX_MetricDefinition::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String idKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_ID)) idKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
