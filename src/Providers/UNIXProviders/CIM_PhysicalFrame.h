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

#ifndef __CIM_PHYSICALFRAME_H
#define __CIM_PHYSICALFRAME_H


#include "CIM_PhysicalPackage.h"


#define PROPERTY_CABLE_MANAGEMENT_STRATEGY				"CableManagementStrategy"
#define PROPERTY_SERVICE_PHILOSOPHY				"ServicePhilosophy"
#define PROPERTY_SERVICE_DESCRIPTIONS				"ServiceDescriptions"
#define PROPERTY_LOCK_PRESENT				"LockPresent"
#define PROPERTY_AUDIBLE_ALARM				"AudibleAlarm"
#define PROPERTY_VISIBLE_ALARM				"VisibleAlarm"
#define PROPERTY_SECURITY_BREACH				"SecurityBreach"
#define PROPERTY_BREACH_DESCRIPTION				"BreachDescription"
#define PROPERTY_IS_LOCKED				"IsLocked"


class CIM_PhysicalFrame :
	public CIM_PhysicalPackage
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean finalize()=0;
	virtual Boolean find(Array<CIMKeyBinding>&)=0;
	virtual Boolean validateKey(CIMKeyBinding&) const=0;
	virtual void setScope(CIMName)=0;

	virtual Boolean getCableManagementStrategy(CIMProperty&) const=0;
	virtual String getCableManagementStrategy() const=0;
	virtual Boolean getServicePhilosophy(CIMProperty&) const=0;
	virtual Array<Uint16> getServicePhilosophy() const=0;
	virtual Boolean getServiceDescriptions(CIMProperty&) const=0;
	virtual Array<String> getServiceDescriptions() const=0;
	virtual Boolean getLockPresent(CIMProperty&) const=0;
	virtual Boolean getLockPresent() const=0;
	virtual Boolean getAudibleAlarm(CIMProperty&) const=0;
	virtual Boolean getAudibleAlarm() const=0;
	virtual Boolean getVisibleAlarm(CIMProperty&) const=0;
	virtual Boolean getVisibleAlarm() const=0;
	virtual Boolean getSecurityBreach(CIMProperty&) const=0;
	virtual Uint16 getSecurityBreach() const=0;
	virtual Boolean getBreachDescription(CIMProperty&) const=0;
	virtual String getBreachDescription() const=0;
	virtual Boolean getIsLocked(CIMProperty&) const=0;
	virtual Boolean getIsLocked() const=0;

private:

};

#endif /* CIM_PHYSICALFRAME */
