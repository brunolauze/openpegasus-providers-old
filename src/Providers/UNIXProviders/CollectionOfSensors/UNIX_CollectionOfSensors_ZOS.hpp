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


UNIX_CollectionOfSensors::UNIX_CollectionOfSensors(void)
{
}

UNIX_CollectionOfSensors::~UNIX_CollectionOfSensors(void)
{
}


Boolean UNIX_CollectionOfSensors::getGroupComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_COMPONENT, getGroupComponent());
	return true;
}

CIMInstance UNIX_CollectionOfSensors::getGroupComponent() const
{
	return CIMInstance(CIMName("CIM_Component"));
}

Boolean UNIX_CollectionOfSensors::getPartComponent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_COMPONENT, getPartComponent());
	return true;
}

CIMInstance UNIX_CollectionOfSensors::getPartComponent() const
{
	return CIMInstance(CIMName("CIM_Component"));
}



Boolean UNIX_CollectionOfSensors::initialize()
{
	groupIndex = -1;
	partIndex = 0;
	group_UNIX_MultiStateSensor_Index = -1;
	endOf_UNIX_MultiStateSensor_Group = false;
	group_UNIX_MultiStateSensor_Component.initialize();
	part_UNIX_DiscreteSensor_Index = -1;
	endOf_UNIX_DiscreteSensor_Part = false;
	part_UNIX_MultiStateSensor_Index = -1;
	endOf_UNIX_MultiStateSensor_Part = false;
	part_UNIX_TemperatureSensor_Index = -1;
	endOf_UNIX_TemperatureSensor_Part = false;
	part_UNIX_VoltageSensor_Index = -1;
	endOf_UNIX_VoltageSensor_Part = false;
	part_UNIX_CurrentSensor_Index = -1;
	endOf_UNIX_CurrentSensor_Part = false;
	part_UNIX_Tachometer_Index = -1;
	endOf_UNIX_Tachometer_Part = false;
	part_UNIX_BinarySensor_Index = -1;
	endOf_UNIX_BinarySensor_Part = false;
	return true;
}

Boolean UNIX_CollectionOfSensors::load(int &pIndex)
{
	if (pIndex == 0 || (endOf_UNIX_DiscreteSensor_Part &&
			endOf_UNIX_MultiStateSensor_Part &&
			endOf_UNIX_TemperatureSensor_Part &&
			endOf_UNIX_VoltageSensor_Part &&
			endOf_UNIX_CurrentSensor_Part &&
			endOf_UNIX_Tachometer_Part &&
			endOf_UNIX_BinarySensor_Part))
	{
		if (groupIndex == 0)
		{
			group_UNIX_MultiStateSensor_Index++;
			endOf_UNIX_MultiStateSensor_Group = !group_UNIX_MultiStateSensor_Component.load(group_UNIX_MultiStateSensor_Index);
			if (endOf_UNIX_MultiStateSensor_Group)
			{
				endOf_UNIX_DiscreteSensor_Part = false;
				part_UNIX_DiscreteSensor_Component.setScope(CIMName("UNIX_MultiStateSensor"));
				part_UNIX_DiscreteSensor_Component.initialize();
				endOf_UNIX_MultiStateSensor_Part = false;
				part_UNIX_MultiStateSensor_Component.setScope(CIMName("UNIX_MultiStateSensor"));
				part_UNIX_MultiStateSensor_Component.initialize();
				endOf_UNIX_TemperatureSensor_Part = false;
				part_UNIX_TemperatureSensor_Component.setScope(CIMName("UNIX_MultiStateSensor"));
				part_UNIX_TemperatureSensor_Component.initialize();
				endOf_UNIX_VoltageSensor_Part = false;
				part_UNIX_VoltageSensor_Component.setScope(CIMName("UNIX_MultiStateSensor"));
				part_UNIX_VoltageSensor_Component.initialize();
				endOf_UNIX_CurrentSensor_Part = false;
				part_UNIX_CurrentSensor_Component.setScope(CIMName("UNIX_MultiStateSensor"));
				part_UNIX_CurrentSensor_Component.initialize();
				endOf_UNIX_Tachometer_Part = false;
				part_UNIX_Tachometer_Component.setScope(CIMName("UNIX_MultiStateSensor"));
				part_UNIX_Tachometer_Component.initialize();
				endOf_UNIX_BinarySensor_Part = false;
				part_UNIX_BinarySensor_Component.setScope(CIMName("UNIX_MultiStateSensor"));
				part_UNIX_BinarySensor_Component.initialize();
				partIndex = 0;
				groupIndex++;
			}
		}
	}
	if (partIndex == 0)
	{
		part_UNIX_DiscreteSensor_Index++;
	endOf_UNIX_DiscreteSensor_Part = !part_UNIX_DiscreteSensor_Component.load(part_UNIX_DiscreteSensor_Index);
	}
	if (partIndex == 1)
	{
		part_UNIX_MultiStateSensor_Index++;
	endOf_UNIX_MultiStateSensor_Part = !part_UNIX_MultiStateSensor_Component.load(part_UNIX_MultiStateSensor_Index);
	}
	if (partIndex == 2)
	{
		part_UNIX_TemperatureSensor_Index++;
	endOf_UNIX_TemperatureSensor_Part = !part_UNIX_TemperatureSensor_Component.load(part_UNIX_TemperatureSensor_Index);
	}
	if (partIndex == 3)
	{
		part_UNIX_VoltageSensor_Index++;
	endOf_UNIX_VoltageSensor_Part = !part_UNIX_VoltageSensor_Component.load(part_UNIX_VoltageSensor_Index);
	}
	if (partIndex == 4)
	{
		part_UNIX_CurrentSensor_Index++;
	endOf_UNIX_CurrentSensor_Part = !part_UNIX_CurrentSensor_Component.load(part_UNIX_CurrentSensor_Index);
	}
	if (partIndex == 5)
	{
		part_UNIX_Tachometer_Index++;
	endOf_UNIX_Tachometer_Part = !part_UNIX_Tachometer_Component.load(part_UNIX_Tachometer_Index);
	}
	if (partIndex == 6)
	{
		part_UNIX_BinarySensor_Index++;
	endOf_UNIX_BinarySensor_Part = !part_UNIX_BinarySensor_Component.load(part_UNIX_BinarySensor_Index);
	}
	if (partIndex == 0 && endOf_UNIX_DiscreteSensor_Part)
	{
		part_UNIX_DiscreteSensor_Component.finalize();
		partIndex++;
	}
	if (partIndex == 1 && endOf_UNIX_MultiStateSensor_Part)
	{
		part_UNIX_MultiStateSensor_Component.finalize();
		partIndex++;
	}
	if (partIndex == 2 && endOf_UNIX_TemperatureSensor_Part)
	{
		part_UNIX_TemperatureSensor_Component.finalize();
		partIndex++;
	}
	if (partIndex == 3 && endOf_UNIX_VoltageSensor_Part)
	{
		part_UNIX_VoltageSensor_Component.finalize();
		partIndex++;
	}
	if (partIndex == 4 && endOf_UNIX_CurrentSensor_Part)
	{
		part_UNIX_CurrentSensor_Component.finalize();
		partIndex++;
	}
	if (partIndex == 5 && endOf_UNIX_Tachometer_Part)
	{
		part_UNIX_Tachometer_Component.finalize();
		partIndex++;
	}
	if (partIndex == 6 && endOf_UNIX_BinarySensor_Part)
	{
		part_UNIX_BinarySensor_Component.finalize();
		partIndex++;
	}

	if (endOf_UNIX_MultiStateSensor_Group &&
		endOf_UNIX_DiscreteSensor_Part &&
		endOf_UNIX_MultiStateSensor_Part &&
		endOf_UNIX_TemperatureSensor_Part &&
		endOf_UNIX_VoltageSensor_Part &&
		endOf_UNIX_CurrentSensor_Part &&
		endOf_UNIX_Tachometer_Part &&
		endOf_UNIX_BinarySensor_Part)		return false;
	return true;
}

Boolean UNIX_CollectionOfSensors::finalize()
{
	group_UNIX_MultiStateSensor_Component.finalize();
	part_UNIX_DiscreteSensor_Component.finalize();
	part_UNIX_MultiStateSensor_Component.finalize();
	part_UNIX_TemperatureSensor_Component.finalize();
	part_UNIX_VoltageSensor_Component.finalize();
	part_UNIX_CurrentSensor_Component.finalize();
	part_UNIX_Tachometer_Component.finalize();
	part_UNIX_BinarySensor_Component.finalize();
	return true;
}

Boolean UNIX_CollectionOfSensors::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String groupComponentKey;
	String partComponentKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_GROUP_COMPONENT)) groupComponentKey = kb.getValue();
		else if (keyName.equal(PROPERTY_PART_COMPONENT)) partComponentKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
