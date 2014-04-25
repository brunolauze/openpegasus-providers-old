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


#include "UNIX_VideoHeadResolutionProvider.h"

UNIX_VideoHeadResolutionProvider::UNIX_VideoHeadResolutionProvider()
{
}

UNIX_VideoHeadResolutionProvider::~UNIX_VideoHeadResolutionProvider()
{
}

CIMInstance UNIX_VideoHeadResolutionProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_VideoHeadResolution &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_VideoHeadResolution"),
			constructKeyBindings(_p)));

	//CIM_ManagedElement Properties
	if (_p.getInstanceID(p)) inst.addProperty(p);
	if (_p.getCaption(p)) inst.addProperty(p);
	if (_p.getDescription(p)) inst.addProperty(p);
	if (_p.getElementName(p)) inst.addProperty(p);

	//CIM_SettingData Properties
	if (_p.getChangeableType(p)) inst.addProperty(p);
	if (_p.getConfigurationName(p)) inst.addProperty(p);

	//CIM_VideoHeadResolution Properties
	if (_p.getHorizontalResolution(p)) inst.addProperty(p);
	if (_p.getVerticalResolution(p)) inst.addProperty(p);
	if (_p.getRefreshRate(p)) inst.addProperty(p);
	if (_p.getMinRefreshRate(p)) inst.addProperty(p);
	if (_p.getMaxRefreshRate(p)) inst.addProperty(p);
	if (_p.getScanMode(p)) inst.addProperty(p);
	if (_p.getOtherScanMode(p)) inst.addProperty(p);
	if (_p.getNumberOfColors(p)) inst.addProperty(p);


	return inst;
}

Array<CIMKeyBinding> UNIX_VideoHeadResolutionProvider::constructKeyBindings(const UNIX_VideoHeadResolution& _p)

{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_INSTANCE_ID,
		_p.getInstanceID(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_VideoHeadResolutionProvider
#define UNIX_PROVIDER_NAME "UNIX_VideoHeadResolutionProvider"
#define CLASS_IMPLEMENTATION UNIX_VideoHeadResolution
#define CLASS_IMPLEMENTATION_NAME "UNIX_VideoHeadResolution"
#define BASE_CLASS_NAME "CIM_VideoHeadResolution"
#define NUMKEYS_CLASS_IMPLEMENTATION 0


#include "UNIXProviderBase.hpp"

