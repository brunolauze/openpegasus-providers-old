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


#include "UNIX_DMAProvider.h"

UNIX_DMAProvider::UNIX_DMAProvider()
{
}

UNIX_DMAProvider::~UNIX_DMAProvider()
{
}

CIMInstance UNIX_DMAProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_DMA &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_DMA"),
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

	//CIM_EnabledLogicalElement Properties
	if (_p.getEnabledState(p)) inst.addProperty(p);
	if (_p.getOtherEnabledState(p)) inst.addProperty(p);
	if (_p.getRequestedState(p)) inst.addProperty(p);
	if (_p.getEnabledDefault(p)) inst.addProperty(p);
	if (_p.getTimeOfLastStateChange(p)) inst.addProperty(p);
	if (_p.getAvailableRequestedStates(p)) inst.addProperty(p);
	if (_p.getTransitioningToState(p)) inst.addProperty(p);

	//CIM_SystemResource Properties
	if (_p.getShareable(p)) inst.addProperty(p);
	if (_p.getImplementationInfo(p)) inst.addProperty(p);

	//CIM_DMA Properties
	if (_p.getCSCreationClassName(p)) inst.addProperty(p);
	if (_p.getCSName(p)) inst.addProperty(p);
	if (_p.getCreationClassName(p)) inst.addProperty(p);
	if (_p.getDMAChannel(p)) inst.addProperty(p);
	if (_p.getAvailability(p)) inst.addProperty(p);
	if (_p.getBurstMode(p)) inst.addProperty(p);
	if (_p.getTransferWidths(p)) inst.addProperty(p);
	if (_p.getAddressSize(p)) inst.addProperty(p);
	if (_p.getMaxTransferSize(p)) inst.addProperty(p);
	if (_p.getByteMode(p)) inst.addProperty(p);
	if (_p.getWordMode(p)) inst.addProperty(p);
	if (_p.getChannelTiming(p)) inst.addProperty(p);
	if (_p.getTypeCTiming(p)) inst.addProperty(p);


	return inst;
}

Array<CIMKeyBinding> UNIX_DMAProvider::constructKeyBindings(const UNIX_DMA& _p)

{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_CS_CREATION_CLASS_NAME,
		_p.getCSCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_CS_NAME,
		_p.getCSName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_CREATION_CLASS_NAME,
		_p.getCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_D_M_A_CHANNEL,
		CIMValue(_p.getDMAChannel()).toString(),
		CIMKeyBinding::NUMERIC));


	return keys;
}



#define UNIX_PROVIDER UNIX_DMAProvider
#define UNIX_PROVIDER_NAME "UNIX_DMAProvider"
#define CLASS_IMPLEMENTATION UNIX_DMA
#define CLASS_IMPLEMENTATION_NAME "UNIX_DMA"
#define BASE_CLASS_NAME "CIM_DMA"
#define NUMKEYS_CLASS_IMPLEMENTATION 4


#include "UNIXProviderBase.hpp"

