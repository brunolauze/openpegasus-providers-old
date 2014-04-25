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

#ifndef __UNIX_DATABASESEGMENTSETTINGDATA_H
#define __UNIX_DATABASESEGMENTSETTINGDATA_H


#include "CIM_ScopedSettingData.h"

#include "UNIX_DatabaseSegmentSettingDataDeps.h"


#define PROPERTY_INITIAL_EXTENT_SIZE				"InitialExtentSize"
#define PROPERTY_MINIMUM_EXTENTS				"MinimumExtents"
#define PROPERTY_MAXIMUM_EXTENTS				"MaximumExtents"
#define PROPERTY_NEXT_EXTENT_SIZE				"NextExtentSize"
#define PROPERTY_PERCENT_INCREASE				"PercentIncrease"
#define PROPERTY_NUMBER_OF_FREE_LISTS				"NumberOfFreeLists"


class UNIX_DatabaseSegmentSettingData :
	public CIM_ScopedSettingData
{
public:

	UNIX_DatabaseSegmentSettingData();
	~UNIX_DatabaseSegmentSettingData();

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
	virtual Boolean getChangeableType(CIMProperty&) const;
	virtual Uint16 getChangeableType() const;
	virtual Boolean getConfigurationName(CIMProperty&) const;
	virtual String getConfigurationName() const;
	virtual Boolean getInitialExtentSize(CIMProperty&) const;
	virtual Uint64 getInitialExtentSize() const;
	virtual Boolean getMinimumExtents(CIMProperty&) const;
	virtual Uint64 getMinimumExtents() const;
	virtual Boolean getMaximumExtents(CIMProperty&) const;
	virtual Uint64 getMaximumExtents() const;
	virtual Boolean getNextExtentSize(CIMProperty&) const;
	virtual Uint64 getNextExtentSize() const;
	virtual Boolean getPercentIncrease(CIMProperty&) const;
	virtual Uint16 getPercentIncrease() const;
	virtual Boolean getNumberOfFreeLists(CIMProperty&) const;
	virtual Uint32 getNumberOfFreeLists() const;

private:
	CIMName currentScope;

#	include "UNIX_DatabaseSegmentSettingDataPrivate.h"


};

#endif /* UNIX_DATABASESEGMENTSETTINGDATA */
