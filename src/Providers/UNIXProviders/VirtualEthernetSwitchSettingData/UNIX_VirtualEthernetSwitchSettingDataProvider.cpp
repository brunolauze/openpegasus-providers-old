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


#include "UNIX_VirtualEthernetSwitchSettingDataProvider.h"

UNIX_VirtualEthernetSwitchSettingDataProvider::UNIX_VirtualEthernetSwitchSettingDataProvider()
{
}

UNIX_VirtualEthernetSwitchSettingDataProvider::~UNIX_VirtualEthernetSwitchSettingDataProvider()
{
}

CIMInstance UNIX_VirtualEthernetSwitchSettingDataProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_VirtualEthernetSwitchSettingData &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_VirtualEthernetSwitchSettingData"),
			constructKeyBindings(_p)));

	//CIM_ManagedElement Properties
	if (_p.getInstanceID(p)) inst.addProperty(p);
	if (_p.getCaption(p)) inst.addProperty(p);
	if (_p.getDescription(p)) inst.addProperty(p);
	if (_p.getElementName(p)) inst.addProperty(p);

	//CIM_SettingData Properties
	if (_p.getChangeableType(p)) inst.addProperty(p);
	if (_p.getConfigurationName(p)) inst.addProperty(p);

	//CIM_VirtualSystemSettingData Properties
	if (_p.getVirtualSystemIdentifier(p)) inst.addProperty(p);
	if (_p.getVirtualSystemType(p)) inst.addProperty(p);
	if (_p.getNotes(p)) inst.addProperty(p);
	if (_p.getCreationTime(p)) inst.addProperty(p);
	if (_p.getConfigurationID(p)) inst.addProperty(p);
	if (_p.getConfigurationDataRoot(p)) inst.addProperty(p);
	if (_p.getConfigurationFile(p)) inst.addProperty(p);
	if (_p.getSnapshotDataRoot(p)) inst.addProperty(p);
	if (_p.getSuspendDataRoot(p)) inst.addProperty(p);
	if (_p.getSwapFileDataRoot(p)) inst.addProperty(p);
	if (_p.getLogDataRoot(p)) inst.addProperty(p);
	if (_p.getAutomaticStartupAction(p)) inst.addProperty(p);
	if (_p.getAutomaticStartupActionDelay(p)) inst.addProperty(p);
	if (_p.getAutomaticStartupActionSequenceNumber(p)) inst.addProperty(p);
	if (_p.getAutomaticShutdownAction(p)) inst.addProperty(p);
	if (_p.getAutomaticRecoveryAction(p)) inst.addProperty(p);
	if (_p.getRecoveryFile(p)) inst.addProperty(p);

	//CIM_VirtualEthernetSwitchSettingData Properties
	if (_p.getVLANConnection(p)) inst.addProperty(p);
	if (_p.getAssociatedResourcePool(p)) inst.addProperty(p);
	if (_p.getMaxNumMACAddress(p)) inst.addProperty(p);
	if (_p.getEVBMode(p)) inst.addProperty(p);
	if (_p.getOtherEVBMode(p)) inst.addProperty(p);


	return inst;
}

Array<CIMKeyBinding> UNIX_VirtualEthernetSwitchSettingDataProvider::constructKeyBindings(const UNIX_VirtualEthernetSwitchSettingData& _p)

{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_INSTANCE_ID,
		_p.getInstanceID(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_VirtualEthernetSwitchSettingDataProvider
#define UNIX_PROVIDER_NAME "UNIX_VirtualEthernetSwitchSettingDataProvider"
#define CLASS_IMPLEMENTATION UNIX_VirtualEthernetSwitchSettingData
#define CLASS_IMPLEMENTATION_NAME "UNIX_VirtualEthernetSwitchSettingData"
#define BASE_CLASS_NAME "CIM_VirtualEthernetSwitchSettingData"
#define NUMKEYS_CLASS_IMPLEMENTATION 0


#include "UNIXProviderBase.hpp"

