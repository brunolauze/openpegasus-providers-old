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


#include "UNIX_BGPPathAttributesProvider.h"

UNIX_BGPPathAttributesProvider::UNIX_BGPPathAttributesProvider()
{
}

UNIX_BGPPathAttributesProvider::~UNIX_BGPPathAttributesProvider()
{
}

CIMInstance UNIX_BGPPathAttributesProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_BGPPathAttributes &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_BGPPathAttributes"),
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

	//CIM_BGPPathAttributes Properties
	if (_p.getASNumbers(p)) inst.addProperty(p);
	if (_p.getPathAttrNextHop(p)) inst.addProperty(p);
	if (_p.getPathAttrASPathSegment(p)) inst.addProperty(p);
	if (_p.getPathAttrOrigin(p)) inst.addProperty(p);
	if (_p.getPathAttrMultiExitDisc(p)) inst.addProperty(p);
	if (_p.getPathAttrLocalPref(p)) inst.addProperty(p);
	if (_p.getPathAttrAtomicAggregate(p)) inst.addProperty(p);
	if (_p.getPathAttrAggregatorAS(p)) inst.addProperty(p);
	if (_p.getPathAttrAggregatorAddr(p)) inst.addProperty(p);
	if (_p.getPathAttrCalcLocalPref(p)) inst.addProperty(p);
	if (_p.getPathAttrBest(p)) inst.addProperty(p);
	if (_p.getPathAttrUnknown(p)) inst.addProperty(p);
	if (_p.getPathAttrUnknownNumber(p)) inst.addProperty(p);


	return inst;
}

Array<CIMKeyBinding> UNIX_BGPPathAttributesProvider::constructKeyBindings(const UNIX_BGPPathAttributes& _p)

{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_A_S_NUMBERS,
		_p.getASNumbers(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_PATH_ATTR_NEXT_HOP,
		_p.getPathAttrNextHop(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_BGPPathAttributesProvider
#define UNIX_PROVIDER_NAME "UNIX_BGPPathAttributesProvider"
#define CLASS_IMPLEMENTATION UNIX_BGPPathAttributes
#define CLASS_IMPLEMENTATION_NAME "UNIX_BGPPathAttributes"
#define BASE_CLASS_NAME "CIM_BGPPathAttributes"
#define NUMKEYS_CLASS_IMPLEMENTATION 2


#include "UNIXProviderBase.hpp"

