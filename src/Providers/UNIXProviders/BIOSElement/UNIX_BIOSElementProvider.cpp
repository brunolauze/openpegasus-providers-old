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


#include "UNIX_BIOSElementProvider.h"

UNIX_BIOSElementProvider::UNIX_BIOSElementProvider()
{
}

UNIX_BIOSElementProvider::~UNIX_BIOSElementProvider()
{
}

CIMInstance UNIX_BIOSElementProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_BIOSElement &_p) const
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_BIOSElement"),
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

	//UNIX_SoftwareElement Properties
	if (_p.getVersion(p)) inst.addProperty(p);
	if (_p.getSoftwareElementState(p)) inst.addProperty(p);
	if (_p.getSoftwareElementID(p)) inst.addProperty(p);
	if (_p.getTargetOperatingSystem(p)) inst.addProperty(p);
	if (_p.getOtherTargetOS(p)) inst.addProperty(p);
	if (_p.getManufacturer(p)) inst.addProperty(p);
	if (_p.getBuildNumber(p)) inst.addProperty(p);
	if (_p.getSerialNumber(p)) inst.addProperty(p);
	if (_p.getCodeSet(p)) inst.addProperty(p);
	if (_p.getIdentificationCode(p)) inst.addProperty(p);
	if (_p.getLanguageEdition(p)) inst.addProperty(p);

	//CIM_BIOSElement Properties
	if (_p.getPrimaryBIOS(p)) inst.addProperty(p);
	if (_p.getListOfLanguages(p)) inst.addProperty(p);
	if (_p.getCurrentLanguage(p)) inst.addProperty(p);
	if (_p.getLoadedStartingAddress(p)) inst.addProperty(p);
	if (_p.getLoadedEndingAddress(p)) inst.addProperty(p);
	if (_p.getLoadUtilityInformation(p)) inst.addProperty(p);
	if (_p.getReleaseDate(p)) inst.addProperty(p);
	if (_p.getRegistryURIs(p)) inst.addProperty(p);


	return inst;
}

Array<CIMKeyBinding> UNIX_BIOSElementProvider::constructKeyBindings(const UNIX_BIOSElement& _p) const

{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_NAME,
		_p.getName(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_VERSION,
		_p.getVersion(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_SOFTWARE_ELEMENT_STATE,
		CIMValue(_p.getSoftwareElementState()).toString(),
		CIMKeyBinding::NUMERIC));
	keys.append(CIMKeyBinding(
		PROPERTY_SOFTWARE_ELEMENT_ID,
		_p.getSoftwareElementID(),
		CIMKeyBinding::STRING));
	keys.append(CIMKeyBinding(
		PROPERTY_TARGET_OPERATING_SYSTEM,
		CIMValue(_p.getTargetOperatingSystem()).toString(),
		CIMKeyBinding::NUMERIC));


	return keys;
}



#define UNIX_PROVIDER UNIX_BIOSElementProvider
#define UNIX_PROVIDER_NAME "UNIX_BIOSElementProvider"
#define CLASS_IMPLEMENTATION UNIX_BIOSElement
#define CLASS_IMPLEMENTATION_NAME "UNIX_BIOSElement"
#define BASE_CLASS_NAME "CIM_BIOSElement"
#define NUMKEYS_CLASS_IMPLEMENTATION 0


#include "UNIXProviderBase.hpp"

