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

#ifndef __UNIX_COLLECTIONOFSENSORS_H
#define __UNIX_COLLECTIONOFSENSORS_H


#include "CIM_Component.h"
#include <MultiStateSensor/UNIX_MultiStateSensor.h>
#include <DiscreteSensor/UNIX_DiscreteSensor.h>
#include <MultiStateSensor/UNIX_MultiStateSensor.h>
#include <TemperatureSensor/UNIX_TemperatureSensor.h>
#include <VoltageSensor/UNIX_VoltageSensor.h>
#include <CurrentSensor/UNIX_CurrentSensor.h>
#include <Tachometer/UNIX_Tachometer.h>
#include <BinarySensor/UNIX_BinarySensor.h>

#include "UNIX_CollectionOfSensorsDeps.h"




class UNIX_CollectionOfSensors :
	public CIM_Component
{
public:

	UNIX_CollectionOfSensors();
	~UNIX_CollectionOfSensors();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean finalize();
	virtual Boolean find(Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);

	virtual Boolean getGroupComponent(CIMProperty&) const;
	virtual CIMInstance getGroupComponent() const;
	virtual Boolean getPartComponent(CIMProperty&) const;
	virtual CIMInstance getPartComponent() const;

private:
	CIMName currentScope;

#	include "UNIX_CollectionOfSensorsPrivate.h"

	int groupIndex;
	int partIndex;
	UNIX_MultiStateSensor group_UNIX_MultiStateSensor_Component;
	int group_UNIX_MultiStateSensor_Index;
	bool endOf_UNIX_MultiStateSensor_Group;
	UNIX_DiscreteSensor part_UNIX_DiscreteSensor_Component;
	int part_UNIX_DiscreteSensor_Index;
	bool endOf_UNIX_DiscreteSensor_Part;
	UNIX_MultiStateSensor part_UNIX_MultiStateSensor_Component;
	int part_UNIX_MultiStateSensor_Index;
	bool endOf_UNIX_MultiStateSensor_Part;
	UNIX_TemperatureSensor part_UNIX_TemperatureSensor_Component;
	int part_UNIX_TemperatureSensor_Index;
	bool endOf_UNIX_TemperatureSensor_Part;
	UNIX_VoltageSensor part_UNIX_VoltageSensor_Component;
	int part_UNIX_VoltageSensor_Index;
	bool endOf_UNIX_VoltageSensor_Part;
	UNIX_CurrentSensor part_UNIX_CurrentSensor_Component;
	int part_UNIX_CurrentSensor_Index;
	bool endOf_UNIX_CurrentSensor_Part;
	UNIX_Tachometer part_UNIX_Tachometer_Component;
	int part_UNIX_Tachometer_Index;
	bool endOf_UNIX_Tachometer_Part;
	UNIX_BinarySensor part_UNIX_BinarySensor_Component;
	int part_UNIX_BinarySensor_Index;
	bool endOf_UNIX_BinarySensor_Part;


};

#endif /* UNIX_COLLECTIONOFSENSORS */
