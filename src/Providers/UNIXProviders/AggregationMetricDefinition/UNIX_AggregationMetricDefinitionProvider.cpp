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


#include "UNIX_AggregationMetricDefinitionProvider.h"

UNIX_AggregationMetricDefinitionProvider::UNIX_AggregationMetricDefinitionProvider()
{
}

UNIX_AggregationMetricDefinitionProvider::~UNIX_AggregationMetricDefinitionProvider()
{
}

CIMInstance UNIX_AggregationMetricDefinitionProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_AggregationMetricDefinition &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_AggregationMetricDefinition"),
			constructKeyBindings(_p)));

	//CIM_ManagedElement Properties
	if (_p.getInstanceID(p)) inst.addProperty(p);
	if (_p.getCaption(p)) inst.addProperty(p);
	if (_p.getDescription(p)) inst.addProperty(p);
	if (_p.getElementName(p)) inst.addProperty(p);

	//CIM_BaseMetricDefinition Properties
	if (_p.getId(p)) inst.addProperty(p);
	if (_p.getName(p)) inst.addProperty(p);
	if (_p.getDataType(p)) inst.addProperty(p);
	if (_p.getCalculable(p)) inst.addProperty(p);
	if (_p.getUnits(p)) inst.addProperty(p);
	if (_p.getBreakdownDimensions(p)) inst.addProperty(p);
	if (_p.getIsContinuous(p)) inst.addProperty(p);
	if (_p.getChangeType(p)) inst.addProperty(p);
	if (_p.getTimeScope(p)) inst.addProperty(p);
	if (_p.getGatheringType(p)) inst.addProperty(p);
	if (_p.getProgrammaticUnits(p)) inst.addProperty(p);

	//CIM_AggregationMetricDefinition Properties
	if (_p.getSimpleFunction(p)) inst.addProperty(p);


	return inst;
}

Array<CIMKeyBinding> UNIX_AggregationMetricDefinitionProvider::constructKeyBindings(const UNIX_AggregationMetricDefinition& _p)

{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_ID,
		_p.getId(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_AggregationMetricDefinitionProvider
#define UNIX_PROVIDER_NAME "UNIX_AggregationMetricDefinitionProvider"
#define CLASS_IMPLEMENTATION UNIX_AggregationMetricDefinition
#define CLASS_IMPLEMENTATION_NAME "UNIX_AggregationMetricDefinition"
#define BASE_CLASS_NAME "CIM_AggregationMetricDefinition"
#define NUMKEYS_CLASS_IMPLEMENTATION 0


#include "UNIXProviderBase.hpp"

