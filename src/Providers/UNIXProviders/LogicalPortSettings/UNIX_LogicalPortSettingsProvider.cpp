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


#include "UNIX_LogicalPortSettingsProvider.h"

UNIX_LogicalPortSettingsProvider::UNIX_LogicalPortSettingsProvider()
{
}

UNIX_LogicalPortSettingsProvider::~UNIX_LogicalPortSettingsProvider()
{
}

CIMInstance UNIX_LogicalPortSettingsProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_LogicalPortSettings &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_LogicalPortSettings"),
			constructKeyBindings(_p)));

	//CIM_ManagedElement Properties
	if (_p.getInstanceID(p)) inst.addProperty(p);
	if (_p.getCaption(p)) inst.addProperty(p);
	if (_p.getDescription(p)) inst.addProperty(p);
	if (_p.getElementName(p)) inst.addProperty(p);

	//CIM_SettingData Properties
	if (_p.getChangeableType(p)) inst.addProperty(p);
	if (_p.getConfigurationName(p)) inst.addProperty(p);

	//CIM_LogicalPortSettings Properties
	if (_p.getRequestedSpeed(p)) inst.addProperty(p);
	if (_p.getAutoSenseSpeed(p)) inst.addProperty(p);


	return inst;
}

Array<CIMKeyBinding> UNIX_LogicalPortSettingsProvider::constructKeyBindings(const UNIX_LogicalPortSettings& _p)

{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_INSTANCE_ID,
		_p.getInstanceID(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_LogicalPortSettingsProvider
#define UNIX_PROVIDER_NAME "UNIX_LogicalPortSettingsProvider"
#define CLASS_IMPLEMENTATION UNIX_LogicalPortSettings
#define CLASS_IMPLEMENTATION_NAME "UNIX_LogicalPortSettings"
#define BASE_CLASS_NAME "CIM_LogicalPortSettings"
#define NUMKEYS_CLASS_IMPLEMENTATION 0


#include "UNIXProviderBase.hpp"

