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


#include "UNIX_ConcreteJobProvider.h"

UNIX_ConcreteJobProvider::UNIX_ConcreteJobProvider()
{
}

UNIX_ConcreteJobProvider::~UNIX_ConcreteJobProvider()
{
}

CIMInstance UNIX_ConcreteJobProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_ConcreteJob &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_ConcreteJob"),
			constructKeyBindings(_p)));

	//CIM_ManagedElement Properties
	if (_p.getInstanceID(p)) inst.addProperty(p);
	if (_p.getCaption(p)) inst.addProperty(p);
	if (_p.getDescription(p)) inst.addProperty(p);
	if (_p.getElementName(p)) inst.addProperty(p);

	//CIM_ManagedSystemElement Properties
	if (_p.getInstallDate(p)) inst.addProperty(p);
	if (_p.getName(p)) inst.addProperty(p);
	if (_p.getOperationalStatus(p)) inst.addProperty(p);
	if (_p.getStatusDescriptions(p)) inst.addProperty(p);
	if (_p.getStatus(p)) inst.addProperty(p);
	if (_p.getHealthState(p)) inst.addProperty(p);
	if (_p.getCommunicationStatus(p)) inst.addProperty(p);
	if (_p.getDetailedStatus(p)) inst.addProperty(p);
	if (_p.getOperatingStatus(p)) inst.addProperty(p);
	if (_p.getPrimaryStatus(p)) inst.addProperty(p);

	//CIM_LogicalElement Properties

	//CIM_Job Properties
	if (_p.getJobStatus(p)) inst.addProperty(p);
	if (_p.getTimeSubmitted(p)) inst.addProperty(p);
	if (_p.getScheduledStartTime(p)) inst.addProperty(p);
	if (_p.getStartTime(p)) inst.addProperty(p);
	if (_p.getElapsedTime(p)) inst.addProperty(p);
	if (_p.getJobRunTimes(p)) inst.addProperty(p);
	if (_p.getRunMonth(p)) inst.addProperty(p);
	if (_p.getRunDay(p)) inst.addProperty(p);
	if (_p.getRunDayOfWeek(p)) inst.addProperty(p);
	if (_p.getRunStartInterval(p)) inst.addProperty(p);
	if (_p.getLocalOrUtcTime(p)) inst.addProperty(p);
	if (_p.getUntilTime(p)) inst.addProperty(p);
	if (_p.getNotify(p)) inst.addProperty(p);
	if (_p.getOwner(p)) inst.addProperty(p);
	if (_p.getPriority(p)) inst.addProperty(p);
	if (_p.getPercentComplete(p)) inst.addProperty(p);
	if (_p.getDeleteOnCompletion(p)) inst.addProperty(p);
	if (_p.getErrorCode(p)) inst.addProperty(p);
	if (_p.getErrorDescription(p)) inst.addProperty(p);
	if (_p.getRecoveryAction(p)) inst.addProperty(p);
	if (_p.getOtherRecoveryAction(p)) inst.addProperty(p);

	//CIM_ConcreteJob Properties
	if (_p.getJobState(p)) inst.addProperty(p);
	if (_p.getTimeOfLastStateChange(p)) inst.addProperty(p);
	if (_p.getTimeBeforeRemoval(p)) inst.addProperty(p);


	return inst;
}

Array<CIMKeyBinding> UNIX_ConcreteJobProvider::constructKeyBindings(const UNIX_ConcreteJob& _p)

{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_INSTANCE_ID,
		_p.getInstanceID(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_ConcreteJobProvider
#define UNIX_PROVIDER_NAME "UNIX_ConcreteJobProvider"
#define CLASS_IMPLEMENTATION UNIX_ConcreteJob
#define CLASS_IMPLEMENTATION_NAME "UNIX_ConcreteJob"
#define BASE_CLASS_NAME "CIM_ConcreteJob"
#define NUMKEYS_CLASS_IMPLEMENTATION 1


#include "UNIXProviderBase.hpp"

