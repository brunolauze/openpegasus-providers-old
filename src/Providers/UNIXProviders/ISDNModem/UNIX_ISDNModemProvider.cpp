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


#include "UNIX_ISDNModemProvider.h"

UNIX_ISDNModemProvider::UNIX_ISDNModemProvider()
{
}

UNIX_ISDNModemProvider::~UNIX_ISDNModemProvider()
{
}

CIMInstance UNIX_ISDNModemProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_ISDNModem &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_ISDNModem"),
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

	//CIM_LogicalDevice Properties
	if (_p.getSystemCreationClassName(p)) inst.addProperty(p);
	if (_p.getSystemName(p)) inst.addProperty(p);
	if (_p.getCreationClassName(p)) inst.addProperty(p);
	if (_p.getDeviceID(p)) inst.addProperty(p);
	if (_p.getPowerManagementSupported(p)) inst.addProperty(p);
	if (_p.getPowerManagementCapabilities(p)) inst.addProperty(p);
	if (_p.getAvailability(p)) inst.addProperty(p);
	if (_p.getStatusInfo(p)) inst.addProperty(p);
	if (_p.getLastErrorCode(p)) inst.addProperty(p);
	if (_p.getErrorDescription(p)) inst.addProperty(p);
	if (_p.getErrorCleared(p)) inst.addProperty(p);
	if (_p.getOtherIdentifyingInfo(p)) inst.addProperty(p);
	if (_p.getPowerOnHours(p)) inst.addProperty(p);
	if (_p.getTotalPowerOnHours(p)) inst.addProperty(p);
	if (_p.getIdentifyingDescriptions(p)) inst.addProperty(p);
	if (_p.getAdditionalAvailability(p)) inst.addProperty(p);
	if (_p.getMaxQuiesceTime(p)) inst.addProperty(p);

	//CIM_Modem Properties

	//CIM_CallBasedModem Properties
	if (_p.getFallbackEnabled(p)) inst.addProperty(p);
	if (_p.getCompressionSupported(p)) inst.addProperty(p);
	if (_p.getOtherCompressionDescription(p)) inst.addProperty(p);
	if (_p.getCompressionInfo(p)) inst.addProperty(p);
	if (_p.getOtherCompressionInfoDescription(p)) inst.addProperty(p);
	if (_p.getModulationSupported(p)) inst.addProperty(p);
	if (_p.getOtherModulationDescription(p)) inst.addProperty(p);
	if (_p.getModulationScheme(p)) inst.addProperty(p);
	if (_p.getOtherSchemeDescription(p)) inst.addProperty(p);
	if (_p.getErrorControlSupported(p)) inst.addProperty(p);
	if (_p.getOtherErrorControlDescription(p)) inst.addProperty(p);
	if (_p.getErrorControlInfo(p)) inst.addProperty(p);
	if (_p.getOtherErrorControlInfoDescription(p)) inst.addProperty(p);
	if (_p.getTimeOfLastReset(p)) inst.addProperty(p);
	if (_p.getCallSpeed(p)) inst.addProperty(p);
	if (_p.getCallStatus(p)) inst.addProperty(p);
	if (_p.getCharsSent(p)) inst.addProperty(p);
	if (_p.getCharsReceived(p)) inst.addProperty(p);
	if (_p.getCharsLost(p)) inst.addProperty(p);
	if (_p.getBlocksSent(p)) inst.addProperty(p);
	if (_p.getBlocksResent(p)) inst.addProperty(p);
	if (_p.getBlocksReceived(p)) inst.addProperty(p);
	if (_p.getBlockErrors(p)) inst.addProperty(p);
	if (_p.getCallLength(p)) inst.addProperty(p);
	if (_p.getNumberDialed(p)) inst.addProperty(p);

	//CIM_ISDNModem Properties


	return inst;
}

Array<CIMKeyBinding> UNIX_ISDNModemProvider::constructKeyBindings(const UNIX_ISDNModem& _p)

{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_SYSTEM_CREATION_CLASS_NAME,
		_p.getSystemCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_SYSTEM_NAME,
		_p.getSystemName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_CREATION_CLASS_NAME,
		_p.getCreationClassName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_DEVICE_ID,
		_p.getDeviceID(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_ISDNModemProvider
#define UNIX_PROVIDER_NAME "UNIX_ISDNModemProvider"
#define CLASS_IMPLEMENTATION UNIX_ISDNModem
#define CLASS_IMPLEMENTATION_NAME "UNIX_ISDNModem"
#define BASE_CLASS_NAME "CIM_ISDNModem"
#define NUMKEYS_CLASS_IMPLEMENTATION 0


#include "UNIXProviderBase.hpp"

