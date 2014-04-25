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

#ifndef __UNIX_BASEMETRICVALUE_H
#define __UNIX_BASEMETRICVALUE_H


#include "CIM_ManagedElement.h"

#include "UNIX_BaseMetricValueDeps.h"


#define PROPERTY_METRIC_DEFINITION_ID				"MetricDefinitionId"
#define PROPERTY_MEASURED_ELEMENT_NAME				"MeasuredElementName"
#define PROPERTY_TIME_STAMP				"TimeStamp"
#define PROPERTY_DURATION				"Duration"
#define PROPERTY_METRIC_VALUE				"MetricValue"
#define PROPERTY_BREAKDOWN_DIMENSION				"BreakdownDimension"
#define PROPERTY_BREAKDOWN_VALUE				"BreakdownValue"
#define PROPERTY_VOLATILE				"Volatile"


class UNIX_BaseMetricValue :
	public CIM_ManagedElement
{
public:

	UNIX_BaseMetricValue();
	~UNIX_BaseMetricValue();

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
	virtual Boolean getMetricDefinitionId(CIMProperty&) const;
	virtual String getMetricDefinitionId() const;
	virtual Boolean getMeasuredElementName(CIMProperty&) const;
	virtual String getMeasuredElementName() const;
	virtual Boolean getTimeStamp(CIMProperty&) const;
	virtual CIMDateTime getTimeStamp() const;
	virtual Boolean getDuration(CIMProperty&) const;
	virtual CIMDateTime getDuration() const;
	virtual Boolean getMetricValue(CIMProperty&) const;
	virtual String getMetricValue() const;
	virtual Boolean getBreakdownDimension(CIMProperty&) const;
	virtual String getBreakdownDimension() const;
	virtual Boolean getBreakdownValue(CIMProperty&) const;
	virtual String getBreakdownValue() const;
	virtual Boolean getVolatile(CIMProperty&) const;
	virtual Boolean getVolatile() const;

private:
	CIMName currentScope;

#	include "UNIX_BaseMetricValuePrivate.h"


};

#endif /* UNIX_BASEMETRICVALUE */
