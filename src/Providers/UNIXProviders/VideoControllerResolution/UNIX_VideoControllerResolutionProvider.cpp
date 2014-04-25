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


#include "UNIX_VideoControllerResolutionProvider.h"

UNIX_VideoControllerResolutionProvider::UNIX_VideoControllerResolutionProvider()
{
}

UNIX_VideoControllerResolutionProvider::~UNIX_VideoControllerResolutionProvider()
{
}

CIMInstance UNIX_VideoControllerResolutionProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_VideoControllerResolution &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_VideoControllerResolution"),
			constructKeyBindings(_p)));

	//CIM_ManagedElement Properties
	if (_p.getInstanceID(p)) inst.addProperty(p);
	if (_p.getCaption(p)) inst.addProperty(p);
	if (_p.getDescription(p)) inst.addProperty(p);
	if (_p.getElementName(p)) inst.addProperty(p);

	//CIM_Setting Properties
	if (_p.getSettingID(p)) inst.addProperty(p);

	//CIM_VideoControllerResolution Properties
	if (_p.getHorizontalResolution(p)) inst.addProperty(p);
	if (_p.getVerticalResolution(p)) inst.addProperty(p);
	if (_p.getRefreshRate(p)) inst.addProperty(p);
	if (_p.getMinRefreshRate(p)) inst.addProperty(p);
	if (_p.getMaxRefreshRate(p)) inst.addProperty(p);
	if (_p.getScanMode(p)) inst.addProperty(p);
	if (_p.getNumberOfColors(p)) inst.addProperty(p);


	return inst;
}

Array<CIMKeyBinding> UNIX_VideoControllerResolutionProvider::constructKeyBindings(const UNIX_VideoControllerResolution& _p)

{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_SETTING_ID,
		_p.getSettingID(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_VideoControllerResolutionProvider
#define UNIX_PROVIDER_NAME "UNIX_VideoControllerResolutionProvider"
#define CLASS_IMPLEMENTATION UNIX_VideoControllerResolution
#define CLASS_IMPLEMENTATION_NAME "UNIX_VideoControllerResolution"
#define BASE_CLASS_NAME "CIM_VideoControllerResolution"
#define NUMKEYS_CLASS_IMPLEMENTATION 1


#include "UNIXProviderBase.hpp"

