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

#ifndef __CIM_CONTROLLEDBY_H
#define __CIM_CONTROLLEDBY_H


#include "CIM_DeviceConnection.h"


#define PROPERTY_ACCESS_STATE				"AccessState"
#define PROPERTY_TIME_OF_DEVICE_RESET				"TimeOfDeviceReset"
#define PROPERTY_NUMBER_OF_HARD_RESETS				"NumberOfHardResets"
#define PROPERTY_NUMBER_OF_SOFT_RESETS				"NumberOfSoftResets"
#define PROPERTY_DEVICE_NUMBER				"DeviceNumber"
#define PROPERTY_ACCESS_MODE				"AccessMode"
#define PROPERTY_ACCESS_PRIORITY				"AccessPriority"


class CIM_ControlledBy :
	public CIM_DeviceConnection
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean finalize()=0;
	virtual Boolean find(Array<CIMKeyBinding>&)=0;
	virtual Boolean validateKey(CIMKeyBinding&) const=0;
	virtual void setScope(CIMName)=0;

	virtual Boolean getAntecedent(CIMProperty&) const=0;
	virtual CIMInstance getAntecedent() const=0;
	virtual Boolean getDependent(CIMProperty&) const=0;
	virtual CIMInstance getDependent() const=0;
	virtual Boolean getAccessState(CIMProperty&) const=0;
	virtual Uint16 getAccessState() const=0;
	virtual Boolean getTimeOfDeviceReset(CIMProperty&) const=0;
	virtual CIMDateTime getTimeOfDeviceReset() const=0;
	virtual Boolean getNumberOfHardResets(CIMProperty&) const=0;
	virtual Uint32 getNumberOfHardResets() const=0;
	virtual Boolean getNumberOfSoftResets(CIMProperty&) const=0;
	virtual Uint32 getNumberOfSoftResets() const=0;
	virtual Boolean getDeviceNumber(CIMProperty&) const=0;
	virtual String getDeviceNumber() const=0;
	virtual Boolean getAccessMode(CIMProperty&) const=0;
	virtual Uint16 getAccessMode() const=0;
	virtual Boolean getAccessPriority(CIMProperty&) const=0;
	virtual Uint16 getAccessPriority() const=0;

private:

};

#endif /* CIM_CONTROLLEDBY */
