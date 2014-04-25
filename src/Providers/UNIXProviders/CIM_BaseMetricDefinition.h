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

#ifndef __CIM_BASEMETRICDEFINITION_H
#define __CIM_BASEMETRICDEFINITION_H


#include "CIM_ManagedElement.h"


#define PROPERTY_ID				"Id"
#define PROPERTY_NAME				"Name"
#define PROPERTY_DATA_TYPE				"DataType"
#define PROPERTY_CALCULABLE				"Calculable"
#define PROPERTY_UNITS				"Units"
#define PROPERTY_BREAKDOWN_DIMENSIONS				"BreakdownDimensions"
#define PROPERTY_IS_CONTINUOUS				"IsContinuous"
#define PROPERTY_CHANGE_TYPE				"ChangeType"
#define PROPERTY_TIME_SCOPE				"TimeScope"
#define PROPERTY_GATHERING_TYPE				"GatheringType"
#define PROPERTY_PROGRAMMATIC_UNITS				"ProgrammaticUnits"


class CIM_BaseMetricDefinition :
	public CIM_ManagedElement
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean finalize()=0;
	virtual Boolean find(Array<CIMKeyBinding>&)=0;
	virtual Boolean validateKey(CIMKeyBinding&) const=0;
	virtual void setScope(CIMName)=0;

	virtual Boolean getId(CIMProperty&) const=0;
	virtual String getId() const=0;
	virtual Boolean getName(CIMProperty&) const=0;
	virtual String getName() const=0;
	virtual Boolean getDataType(CIMProperty&) const=0;
	virtual Uint16 getDataType() const=0;
	virtual Boolean getCalculable(CIMProperty&) const=0;
	virtual Uint16 getCalculable() const=0;
	virtual Boolean getUnits(CIMProperty&) const=0;
	virtual String getUnits() const=0;
	virtual Boolean getBreakdownDimensions(CIMProperty&) const=0;
	virtual Array<String> getBreakdownDimensions() const=0;
	virtual Boolean getIsContinuous(CIMProperty&) const=0;
	virtual Boolean getIsContinuous() const=0;
	virtual Boolean getChangeType(CIMProperty&) const=0;
	virtual Uint16 getChangeType() const=0;
	virtual Boolean getTimeScope(CIMProperty&) const=0;
	virtual Uint16 getTimeScope() const=0;
	virtual Boolean getGatheringType(CIMProperty&) const=0;
	virtual Uint16 getGatheringType() const=0;
	virtual Boolean getProgrammaticUnits(CIMProperty&) const=0;
	virtual String getProgrammaticUnits() const=0;

private:

};

#endif /* CIM_BASEMETRICDEFINITION */
