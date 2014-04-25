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


#include "UNIX_CreateDirectoryActionProvider.h"

UNIX_CreateDirectoryActionProvider::UNIX_CreateDirectoryActionProvider()
{
}

UNIX_CreateDirectoryActionProvider::~UNIX_CreateDirectoryActionProvider()
{
}

CIMInstance UNIX_CreateDirectoryActionProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_CreateDirectoryAction &_p) const
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_CreateDirectoryAction"),
			constructKeyBindings(_p)));

	//CIM_ManagedElement Properties
	if (_p.getInstanceID(p)) inst.addProperty(p);
	if (_p.getCaption(p)) inst.addProperty(p);
	if (_p.getDescription(p)) inst.addProperty(p);
	if (_p.getElementName(p)) inst.addProperty(p);

	//CIM_Action Properties
	if (_p.getName(p)) inst.addProperty(p);
	if (_p.getVersion(p)) inst.addProperty(p);
	if (_p.getSoftwareElementState(p)) inst.addProperty(p);
	if (_p.getSoftwareElementID(p)) inst.addProperty(p);
	if (_p.getTargetOperatingSystem(p)) inst.addProperty(p);
	if (_p.getActionID(p)) inst.addProperty(p);
	if (_p.getDirection(p)) inst.addProperty(p);

	//CIM_DirectoryAction Properties
	if (_p.getDirectoryName(p)) inst.addProperty(p);

	//CIM_CreateDirectoryAction Properties


	return inst;
}

Array<CIMKeyBinding> UNIX_CreateDirectoryActionProvider::constructKeyBindings(const UNIX_CreateDirectoryAction& _p) const

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
	keys.append(CIMKeyBinding(
		PROPERTY_ACTION_ID,
		_p.getActionID(),
		CIMKeyBinding::STRING));


	return keys;
}

#define __invokeMethod_H
/*
================================================================================
NAME              : invokeMethod
DESCRIPTION       : tests the argument for valid classname,
                  : throws exception if not
ASSUMPTIONS       : None
PRE-CONDITIONS    :
POST-CONDITIONS   :
NOTES             :
================================================================================
*/
void UNIX_CreateDirectoryActionProvider::invokeMethod(
    const OperationContext& context,
    const CIMObjectPath& objectReference,
    const CIMName& methodName,
    const Array<CIMParamValue>& inParameters,
    MethodResultResponseHandler& handler)
{
    if (methodName.equal("Invoke") ||
    	methodName.equal("InvokeOnSystem"))
    {
    	CIMName className = objectReference.getClassName();
  		CIMNamespaceName nameSpace = objectReference.getNameSpace();
		Array<CIMKeyBinding> kbArray = objectReference.getKeyBindings();
		if (className.equal("CIM_CreateDirectoryAction") ||
			className.equal("UNIX_CreateDirectoryAction"))
		{
			UNIX_CreateDirectoryAction _p;

			if (_p.initialize())
			{
				if (_p.find(kbArray))
				{
					if (methodName.equal(String("InvokeOnSystem")))
					{
						CIMInstance computerSystem;
						bool found = false;
						for(Uint32 i = 0; i < inParameters.size(); i++)
						{
							CIMParamValue paramValue = inParameters[i];
							if (String::equalNoCase("TargetSystem", paramValue.getParameterName()))
							{
								CIMValue value = paramValue.getValue();
								if (value.getType() == CIMTYPE_REFERENCE)
								{
									value.get(computerSystem);
									found = true;
									break;
								}
							}
						}
						if (found)
							_p.Invoke(computerSystem);
					}
					else 
						_p.Invoke();

				}
			}
			_p.finalize();
		}

    }


    String message;
    message.append("UNIX_CreateDirectoryActionProvider does not support method ");
    message.append(methodName.getString());
    throw CIMNotSupportedException(message);
}

#define UNIX_PROVIDER UNIX_CreateDirectoryActionProvider
#define UNIX_PROVIDER_NAME "UNIX_CreateDirectoryActionProvider"
#define CLASS_IMPLEMENTATION UNIX_CreateDirectoryAction
#define CLASS_IMPLEMENTATION_NAME "UNIX_CreateDirectoryAction"
#define BASE_CLASS_NAME "CIM_CreateDirectoryAction"
#define NUMKEYS_CLASS_IMPLEMENTATION 6

#include "UNIXProviderBase.hpp"

#undef __invokeMethod_H