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


#include "UNIX_iSCSILoginStatisticsProvider.h"

UNIX_iSCSILoginStatisticsProvider::UNIX_iSCSILoginStatisticsProvider()
{
}

UNIX_iSCSILoginStatisticsProvider::~UNIX_iSCSILoginStatisticsProvider()
{
}

CIMInstance UNIX_iSCSILoginStatisticsProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_iSCSILoginStatistics &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_iSCSILoginStatistics"),
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

	//CIM_iSCSILoginStatistics Properties
	if (_p.getLoginFailures(p)) inst.addProperty(p);
	if (_p.getLastLoginFailureTime(p)) inst.addProperty(p);
	if (_p.getLastLoginFailureType(p)) inst.addProperty(p);
	if (_p.getOtherLastLoginFailureType(p)) inst.addProperty(p);
	if (_p.getLastLoginFailureRemoteNodeName(p)) inst.addProperty(p);
	if (_p.getLastLoginFailureRemoteAddressType(p)) inst.addProperty(p);
	if (_p.getLastLoginFailureRemoteAddress(p)) inst.addProperty(p);
	if (_p.getSuccessfulLogins(p)) inst.addProperty(p);
	if (_p.getNegotiationLoginFailures(p)) inst.addProperty(p);
	if (_p.getAuthenticationLoginFailures(p)) inst.addProperty(p);
	if (_p.getAuthorizationLoginFailures(p)) inst.addProperty(p);
	if (_p.getLoginRedirects(p)) inst.addProperty(p);
	if (_p.getOtherLoginFailures(p)) inst.addProperty(p);
	if (_p.getNormalLogouts(p)) inst.addProperty(p);
	if (_p.getOtherLogouts(p)) inst.addProperty(p);


	return inst;
}

Array<CIMKeyBinding> UNIX_iSCSILoginStatisticsProvider::constructKeyBindings(const UNIX_iSCSILoginStatistics& _p)

{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_INSTANCE_ID,
		_p.getInstanceID(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_iSCSILoginStatisticsProvider
#define UNIX_PROVIDER_NAME "UNIX_iSCSILoginStatisticsProvider"
#define CLASS_IMPLEMENTATION UNIX_iSCSILoginStatistics
#define CLASS_IMPLEMENTATION_NAME "UNIX_iSCSILoginStatistics"
#define BASE_CLASS_NAME "CIM_iSCSILoginStatistics"
#define NUMKEYS_CLASS_IMPLEMENTATION 0


#include "UNIXProviderBase.hpp"

