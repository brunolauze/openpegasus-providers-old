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

#ifndef __UNIX_AGGREGATIONMETRICDEFINITION_H
#define __UNIX_AGGREGATIONMETRICDEFINITION_H


#include "CIM_BaseMetricDefinition.h"

#include "UNIX_AggregationMetricDefinitionDeps.h"


#define PROPERTY_SIMPLE_FUNCTION				"SimpleFunction"


class UNIX_AggregationMetricDefinition :
	public CIM_BaseMetricDefinition
{
public:

	UNIX_AggregationMetricDefinition();
	~UNIX_AggregationMetricDefinition();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean finalize();
	virtual Boolean find(Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);

	virtual Boolean getInstanceID(CIMProperty&) const;
	virtual String getInstanceID() const;
	virtual Boolean getCaption(CIMProperty&) const;
	virtual String getCaption() const;
	virtual Boolean getDescription(CIMProperty&) const;
	virtual String getDescription() const;
	virtual Boolean getElementName(CIMProperty&) const;
	virtual String getElementName() const;
	virtual Boolean getId(CIMProperty&) const;
	virtual String getId() const;
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual Boolean getDataType(CIMProperty&) const;
	virtual Uint16 getDataType() const;
	virtual Boolean getCalculable(CIMProperty&) const;
	virtual Uint16 getCalculable() const;
	virtual Boolean getUnits(CIMProperty&) const;
	virtual String getUnits() const;
	virtual Boolean getBreakdownDimensions(CIMProperty&) const;
	virtual Array<String> getBreakdownDimensions() const;
	virtual Boolean getIsContinuous(CIMProperty&) const;
	virtual Boolean getIsContinuous() const;
	virtual Boolean getChangeType(CIMProperty&) const;
	virtual Uint16 getChangeType() const;
	virtual Boolean getTimeScope(CIMProperty&) const;
	virtual Uint16 getTimeScope() const;
	virtual Boolean getGatheringType(CIMProperty&) const;
	virtual Uint16 getGatheringType() const;
	virtual Boolean getProgrammaticUnits(CIMProperty&) const;
	virtual String getProgrammaticUnits() const;
	virtual Boolean getSimpleFunction(CIMProperty&) const;
	virtual Uint16 getSimpleFunction() const;

private:
	CIMName currentScope;

#	include "UNIX_AggregationMetricDefinitionPrivate.h"


};

#endif /* UNIX_AGGREGATIONMETRICDEFINITION */
