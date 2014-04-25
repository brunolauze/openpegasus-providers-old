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

#ifndef __UNIX_SCSIINITIATORTARGETLOGICALUNITPATH_H
#define __UNIX_SCSIINITIATORTARGETLOGICALUNITPATH_H


#include "CIM_ClassBase.h"

#include "UNIX_SCSIInitiatorTargetLogicalUnitPathDeps.h"


#define PROPERTY_INITIATOR				"Initiator"
#define PROPERTY_TARGET				"Target"
#define PROPERTY_LOGICAL_UNIT				"LogicalUnit"
#define PROPERTY_OS_DEVICE_NAME				"OSDeviceName"
#define PROPERTY_ADMINISTRATIVE_WEIGHT				"AdministrativeWeight"
#define PROPERTY_STATE				"State"
#define PROPERTY_ADMINISTRATIVE_OVERRIDE				"AdministrativeOverride"
#define PROPERTY_LOGICAL_UNIT_NUMBER				"LogicalUnitNumber"


class UNIX_SCSIInitiatorTargetLogicalUnitPath :
	public CIM_ClassBase
{
public:

	UNIX_SCSIInitiatorTargetLogicalUnitPath();
	~UNIX_SCSIInitiatorTargetLogicalUnitPath();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean finalize();
	virtual Boolean find(Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);

	virtual Boolean getInitiator(CIMProperty&) const;
	virtual CIMInstance getInitiator() const;
	virtual Boolean getTarget(CIMProperty&) const;
	virtual CIMInstance getTarget() const;
	virtual Boolean getLogicalUnit(CIMProperty&) const;
	virtual CIMInstance getLogicalUnit() const;
	virtual Boolean getOSDeviceName(CIMProperty&) const;
	virtual String getOSDeviceName() const;
	virtual Boolean getAdministrativeWeight(CIMProperty&) const;
	virtual Uint32 getAdministrativeWeight() const;
	virtual Boolean getState(CIMProperty&) const;
	virtual Uint32 getState() const;
	virtual Boolean getAdministrativeOverride(CIMProperty&) const;
	virtual Uint16 getAdministrativeOverride() const;
	virtual Boolean getLogicalUnitNumber(CIMProperty&) const;
	virtual Uint16 getLogicalUnitNumber() const;

private:
	CIMName currentScope;

#	include "UNIX_SCSIInitiatorTargetLogicalUnitPathPrivate.h"


};

#endif /* UNIX_SCSIINITIATORTARGETLOGICALUNITPATH */
