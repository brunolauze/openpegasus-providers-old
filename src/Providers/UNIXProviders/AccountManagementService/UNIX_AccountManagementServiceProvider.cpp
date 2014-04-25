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


#include "UNIX_AccountManagementServiceProvider.h"

UNIX_AccountManagementServiceProvider::UNIX_AccountManagementServiceProvider()
{
}

UNIX_AccountManagementServiceProvider::~UNIX_AccountManagementServiceProvider()
{
}

CIMInstance UNIX_AccountManagementServiceProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_AccountManagementService &_p) const
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_AccountManagementService"),
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

	//CIM_Service Properties
	if (_p.getSystemCreationClassName(p)) inst.addProperty(p);
	if (_p.getSystemName(p)) inst.addProperty(p);
	if (_p.getCreationClassName(p)) inst.addProperty(p);
	if (_p.getPrimaryOwnerName(p)) inst.addProperty(p);
	if (_p.getPrimaryOwnerContact(p)) inst.addProperty(p);
	if (_p.getStartMode(p)) inst.addProperty(p);
	if (_p.getStarted(p)) inst.addProperty(p);

	//CIM_SecurityService Properties

	//CIM_AccountManagementService Properties


	return inst;
}

Array<CIMKeyBinding> UNIX_AccountManagementServiceProvider::constructKeyBindings(const UNIX_AccountManagementService& _p) const

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
		PROPERTY_NAME,
		_p.getName(),
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
void UNIX_AccountManagementServiceProvider::invokeMethod(
    const OperationContext& context,
    const CIMObjectPath& objectReference,
    const CIMName& methodName,
    const Array<CIMParamValue>& inParameters,
    MethodResultResponseHandler& handler)
{
    UNIX_AccountManagementService service;
    CIMName className = objectReference.getClassName();
    if (className.equal(String("UNIX_AccountManagementService")))
    {
	    if (String::equalNoCase(methodName.getString(),String("CreateAccount")))
	    {
	    	/* Retreive the targeted Account Management Service */
	    	Array<CIMKeyBinding> bindings = objectReference.getKeyBindings();
	    	if (service.find(bindings))
	    	{
	    		/* Convert CIMParamValues to AccountTemplate and ComputerSystem */
	    		int count = 0;
	    		CIMObjectPath accountTemplate;
	    		CIMInstance computerSystem;

	    		for(Uint32 i = 0; i < inParameters.size(); i++)
	    		{
	    			CIMParamValue paramValue = inParameters[i];
	    			if (String::equalNoCase(paramValue.getParameterName(),String("AccountTemplate")))
	    			{
	    				String accountTemplateString;
	    				CIMValue accountTemplateValue = paramValue.getValue();
	    				if (!accountTemplateValue.isNull())
	    				{
		    				accountTemplateValue.get(accountTemplateString);
		    				accountTemplate = CIMObjectPath(accountTemplateString);
		    				count++;
		    			}
	    			}
	    			else if (String::equalNoCase(paramValue.getParameterName(),String("System")))
	    			{
	    				CIMValue computerSystemValue = paramValue.getValue();
	    				if (!computerSystemValue.isNull())
	    				{
	    					computerSystemValue.get(computerSystem);
	    					count++;
    					}
	    			}
	    		}
	    		if (count == 2)
	    		{
	    			handler.processing();
	    			/* We have the template and the keys */
	    			/* Call the createAccount method */
	    			Array<CIMInstance> accountIdentities;
					CIMInstance account;
	    			if (service.createAccount(
	    						accountTemplate, 
	    						accountIdentities, 
	    						account, 
	    						computerSystem))
	    			{
	    				handler.deliverParamValue(CIMParamValue(String("Identities"), 
	    					CIMValue(accountIdentities)));
	    				handler.deliverParamValue(CIMParamValue(String("Account"), 
	    					CIMValue(account)));
	    				handler.deliver(CIMValue(Uint32(0)));
	    			}
	    		}
	    	    else {
	    	    	handler.deliver(CIMValue(Uint32(2)));
	    	    }
	    	}
			else {
	    	    	handler.deliver(CIMValue(Uint32(2)));
    	    }
	    }
		else if (String::equalNoCase(methodName.getString(),String("CreateUserContact")))
		{
			
		}
	    handler.complete();
	}
	else {
	    String message;
	    message.append(className.getString());
	    message.append(" does not support invokeMethod");
	    throw CIMNotSupportedException(message);
   }
}


#define UNIX_PROVIDER UNIX_AccountManagementServiceProvider
#define UNIX_PROVIDER_NAME "UNIX_AccountManagementServiceProvider"
#define CLASS_IMPLEMENTATION UNIX_AccountManagementService
#define CLASS_IMPLEMENTATION_NAME "UNIX_AccountManagementService"
#define BASE_CLASS_NAME "CIM_AccountManagementService"
#define NUMKEYS_CLASS_IMPLEMENTATION 4


#include "UNIXProviderBase.hpp"

