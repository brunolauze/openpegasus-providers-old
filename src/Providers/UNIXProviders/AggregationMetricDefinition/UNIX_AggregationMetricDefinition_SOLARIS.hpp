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


UNIX_AggregationMetricDefinition::UNIX_AggregationMetricDefinition(void)
{
}

UNIX_AggregationMetricDefinition::~UNIX_AggregationMetricDefinition(void)
{
}


Boolean UNIX_AggregationMetricDefinition::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_AggregationMetricDefinition::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_AggregationMetricDefinition::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_AggregationMetricDefinition::getCaption() const
{
	return String ("");
}

Boolean UNIX_AggregationMetricDefinition::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_AggregationMetricDefinition::getDescription() const
{
	return String ("");
}

Boolean UNIX_AggregationMetricDefinition::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_AggregationMetricDefinition::getElementName() const
{
	return String("AggregationMetricDefinition");
}

Boolean UNIX_AggregationMetricDefinition::getId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ID, getId());
	return true;
}

String UNIX_AggregationMetricDefinition::getId() const
{
	return String ("");
}

Boolean UNIX_AggregationMetricDefinition::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_AggregationMetricDefinition::getName() const
{
	return String ("");
}

Boolean UNIX_AggregationMetricDefinition::getDataType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_TYPE, getDataType());
	return true;
}

Uint16 UNIX_AggregationMetricDefinition::getDataType() const
{
	return Uint16(0);
}

Boolean UNIX_AggregationMetricDefinition::getCalculable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CALCULABLE, getCalculable());
	return true;
}

Uint16 UNIX_AggregationMetricDefinition::getCalculable() const
{
	return Uint16(0);
}

Boolean UNIX_AggregationMetricDefinition::getUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNITS, getUnits());
	return true;
}

String UNIX_AggregationMetricDefinition::getUnits() const
{
	return String ("");
}

Boolean UNIX_AggregationMetricDefinition::getBreakdownDimensions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BREAKDOWN_DIMENSIONS, getBreakdownDimensions());
	return true;
}

Array<String> UNIX_AggregationMetricDefinition::getBreakdownDimensions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_AggregationMetricDefinition::getIsContinuous(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_CONTINUOUS, getIsContinuous());
	return true;
}

Boolean UNIX_AggregationMetricDefinition::getIsContinuous() const
{
	return Boolean(false);
}

Boolean UNIX_AggregationMetricDefinition::getChangeType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGE_TYPE, getChangeType());
	return true;
}

Uint16 UNIX_AggregationMetricDefinition::getChangeType() const
{
	return Uint16(0);
}

Boolean UNIX_AggregationMetricDefinition::getTimeScope(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_SCOPE, getTimeScope());
	return true;
}

Uint16 UNIX_AggregationMetricDefinition::getTimeScope() const
{
	return Uint16(0);
}

Boolean UNIX_AggregationMetricDefinition::getGatheringType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GATHERING_TYPE, getGatheringType());
	return true;
}

Uint16 UNIX_AggregationMetricDefinition::getGatheringType() const
{
	return Uint16(0);
}

Boolean UNIX_AggregationMetricDefinition::getProgrammaticUnits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROGRAMMATIC_UNITS, getProgrammaticUnits());
	return true;
}

String UNIX_AggregationMetricDefinition::getProgrammaticUnits() const
{
	return String ("");
}

Boolean UNIX_AggregationMetricDefinition::getSimpleFunction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIMPLE_FUNCTION, getSimpleFunction());
	return true;
}

Uint16 UNIX_AggregationMetricDefinition::getSimpleFunction() const
{
	return Uint16(0);
}



Boolean UNIX_AggregationMetricDefinition::initialize()
{
	return false;
}

Boolean UNIX_AggregationMetricDefinition::load(int &pIndex)
{
	return false;
}

Boolean UNIX_AggregationMetricDefinition::finalize()
{
	return false;
}

Boolean UNIX_AggregationMetricDefinition::find(Array<CIMKeyBinding> &kbArray)
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
