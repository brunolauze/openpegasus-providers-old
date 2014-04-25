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

#ifndef __UNIX_DEVICEERRORCOUNTS_H
#define __UNIX_DEVICEERRORCOUNTS_H


#include "CIM_StatisticalInformation.h"

#include "UNIX_DeviceErrorCountsDeps.h"


#define PROPERTY_SYSTEM_CREATION_CLASS_NAME				"SystemCreationClassName"
#define PROPERTY_SYSTEM_NAME				"SystemName"
#define PROPERTY_DEVICE_CREATION_CLASS_NAME				"DeviceCreationClassName"
#define PROPERTY_DEVICE_ID				"DeviceID"
#define PROPERTY_INDETERMINATE_ERROR_COUNT				"IndeterminateErrorCount"
#define PROPERTY_CRITICAL_ERROR_COUNT				"CriticalErrorCount"
#define PROPERTY_MAJOR_ERROR_COUNT				"MajorErrorCount"
#define PROPERTY_MINOR_ERROR_COUNT				"MinorErrorCount"
#define PROPERTY_WARNING_COUNT				"WarningCount"


class UNIX_DeviceErrorCounts :
	public CIM_StatisticalInformation
{
public:

	UNIX_DeviceErrorCounts();
	~UNIX_DeviceErrorCounts();

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
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual Boolean getSystemCreationClassName(CIMProperty&) const;
	virtual String getSystemCreationClassName() const;
	virtual Boolean getSystemName(CIMProperty&) const;
	virtual String getSystemName() const;
	virtual Boolean getDeviceCreationClassName(CIMProperty&) const;
	virtual String getDeviceCreationClassName() const;
	virtual Boolean getDeviceID(CIMProperty&) const;
	virtual String getDeviceID() const;
	virtual Boolean getIndeterminateErrorCount(CIMProperty&) const;
	virtual Uint64 getIndeterminateErrorCount() const;
	virtual Boolean getCriticalErrorCount(CIMProperty&) const;
	virtual Uint64 getCriticalErrorCount() const;
	virtual Boolean getMajorErrorCount(CIMProperty&) const;
	virtual Uint64 getMajorErrorCount() const;
	virtual Boolean getMinorErrorCount(CIMProperty&) const;
	virtual Uint64 getMinorErrorCount() const;
	virtual Boolean getWarningCount(CIMProperty&) const;
	virtual Uint64 getWarningCount() const;

private:
	CIMName currentScope;

#	include "UNIX_DeviceErrorCountsPrivate.h"


};

#endif /* UNIX_DEVICEERRORCOUNTS */
