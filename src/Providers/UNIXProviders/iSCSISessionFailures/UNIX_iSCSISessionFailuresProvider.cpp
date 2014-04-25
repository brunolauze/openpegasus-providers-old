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


#include "UNIX_iSCSISessionFailuresProvider.h"

UNIX_iSCSISessionFailuresProvider::UNIX_iSCSISessionFailuresProvider()
{
}

UNIX_iSCSISessionFailuresProvider::~UNIX_iSCSISessionFailuresProvider()
{
}

CIMInstance UNIX_iSCSISessionFailuresProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_iSCSISessionFailures &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_iSCSISessionFailures"),
			constructKeyBindings(_p)));

	//CIM_ManagedElement Properties
	if (_p.getInstanceID(p)) inst.addProperty(p);
	if (_p.getCaption(p)) inst.addProperty(p);
	if (_p.getDescription(p)) inst.addProperty(p);
	if (_p.getElementName(p)) inst.addProperty(p);

	//CIM_StatisticalData Properties
	if (_p.getStartStatisticTime(p)) inst.addProperty(p);
	if (_p.getStatisticTime(p)) inst.addProperty(p);
	if (_p.getSampleInterval(p)) inst.addProperty(p);

	//CIM_iSCSISessionFailures Properties
	if (_p.getSessionFailures(p)) inst.addProperty(p);
	if (_p.getLastSessionFailureType(p)) inst.addProperty(p);
	if (_p.getOtherLastSessionFailureType(p)) inst.addProperty(p);
	if (_p.getLastSessionFailureRemoteNodeName(p)) inst.addProperty(p);
	if (_p.getSessionDigestFailures(p)) inst.addProperty(p);
	if (_p.getSessionConnectionTimeoutFailures(p)) inst.addProperty(p);
	if (_p.getSessionFormatErrors(p)) inst.addProperty(p);


	return inst;
}

Array<CIMKeyBinding> UNIX_iSCSISessionFailuresProvider::constructKeyBindings(const UNIX_iSCSISessionFailures& _p)

{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_INSTANCE_ID,
		_p.getInstanceID(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_iSCSISessionFailuresProvider
#define UNIX_PROVIDER_NAME "UNIX_iSCSISessionFailuresProvider"
#define CLASS_IMPLEMENTATION UNIX_iSCSISessionFailures
#define CLASS_IMPLEMENTATION_NAME "UNIX_iSCSISessionFailures"
#define BASE_CLASS_NAME "CIM_iSCSISessionFailures"
#define NUMKEYS_CLASS_IMPLEMENTATION 0


#include "UNIXProviderBase.hpp"

