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


#include "UNIX_NFSProvider.h"

UNIX_NFSProvider::UNIX_NFSProvider()
{
}

UNIX_NFSProvider::~UNIX_NFSProvider()
{
}

CIMInstance UNIX_NFSProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_NFS &_p) const
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_NFS"),
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

	//UNIX_FileSystem Properties
	if (_p.getCSCreationClassName(p)) inst.addProperty(p);
	if (_p.getCSName(p)) inst.addProperty(p);
	if (_p.getCreationClassName(p)) inst.addProperty(p);
	if (_p.getRoot(p)) inst.addProperty(p);
	if (_p.getBlockSize(p)) inst.addProperty(p);
	if (_p.getFileSystemSize(p)) inst.addProperty(p);
	if (_p.getAvailableSpace(p)) inst.addProperty(p);
	if (_p.getReadOnly(p)) inst.addProperty(p);
	if (_p.getEncryptionMethod(p)) inst.addProperty(p);
	if (_p.getCompressionMethod(p)) inst.addProperty(p);
	if (_p.getCaseSensitive(p)) inst.addProperty(p);
	if (_p.getCasePreserved(p)) inst.addProperty(p);
	if (_p.getCodeSet(p)) inst.addProperty(p);
	if (_p.getMaxFileNameLength(p)) inst.addProperty(p);
	if (_p.getClusterSize(p)) inst.addProperty(p);
	if (_p.getFileSystemType(p)) inst.addProperty(p);
	if (_p.getPersistenceType(p)) inst.addProperty(p);
	if (_p.getOtherPersistenceType(p)) inst.addProperty(p);
	if (_p.getNumberOfFiles(p)) inst.addProperty(p);

	//CIM_RemoteFileSystem Properties

	//CIM_NFS Properties
	if (_p.getHardMount(p)) inst.addProperty(p);
	if (_p.getForegroundMount(p)) inst.addProperty(p);
	if (_p.getInterrupt(p)) inst.addProperty(p);
	if (_p.getMountFailureRetries(p)) inst.addProperty(p);
	if (_p.getRetransmissionAttempts(p)) inst.addProperty(p);
	if (_p.getRetransmissionTimeout(p)) inst.addProperty(p);
	if (_p.getReadBufferSize(p)) inst.addProperty(p);
	if (_p.getWriteBufferSize(p)) inst.addProperty(p);
	if (_p.getServerCommunicationPort(p)) inst.addProperty(p);
	if (_p.getAttributeCaching(p)) inst.addProperty(p);
	if (_p.getAttributeCachingForRegularFilesMin(p)) inst.addProperty(p);
	if (_p.getAttributeCachingForRegularFilesMax(p)) inst.addProperty(p);
	if (_p.getAttributeCachingForDirectoriesMin(p)) inst.addProperty(p);
	if (_p.getAttributeCachingForDirectoriesMax(p)) inst.addProperty(p);


	return inst;
}

Array<CIMKeyBinding> UNIX_NFSProvider::constructKeyBindings(const UNIX_NFS& _p) const

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
		PROPERTY_NAME,
		_p.getName(),
		CIMKeyBinding::STRING));


	return keys;
}

#define __createInstance_H
void UNIX_NFSProvider::createInstance(
    const OperationContext& context,
    const CIMObjectPath& ref,
    const CIMInstance& instanceObject,
    ObjectPathResponseHandler& handler )
{
    handler.processing();

	CIMName className = ref.getClassName();
	if (String::equal(className.getString(), String("UNIX_NFS")))
	{
		Array<CIMKeyBinding> bindings = ref.getKeyBindings();
		for(Uint32 i = 0; i < bindings.size(); i++)
		{
			String name = bindings[i].getName().getString();

			if (String::equal(name, "Name"))
			{
				String source = bindings[i].getValue();

				Uint32 rootIndex = instanceObject.findProperty(String("Root"));
				if (rootIndex != PEG_NOT_FOUND)
				{
					CIMConstProperty rootProperty = instanceObject.getProperty(rootIndex);
					CIMValue rootValue = rootProperty.getValue();
					if (!rootValue.isNull())
					{
						String target;
						rootValue.get(target);
						String cmd("mount -t nfs ");
						cmd.append(source);
						cmd.append(" ");
						cmd.append(target);
						system(cmd.getCString());
					}
				}
			 	break;
			}
		}
	}

	handler.complete();
}

#define __deleteInstance_H
// =============================================================================
// NAME              : createInstance
// DESCRIPTION       : Create a UnixProcess instance.
// ASSUMPTIONS       : None
// PRE-CONDITIONS    :
// POST-CONDITIONS   :
// NOTES             : Currently not supported.
// PARAMETERS        :
// =============================================================================
void UNIX_NFSProvider::deleteInstance(
    const OperationContext& context,
    const CIMObjectPath& ref,
    ResponseHandler& handler)
{
	handler.processing();

	CIMName className = ref.getClassName();
	if (String::equal(className.getString(), String("UNIX_NFS")))
	{
		Array<CIMKeyBinding> bindings = ref.getKeyBindings();
		for(Uint32 i = 0; i < bindings.size(); i++)
		{
			String name = bindings[i].getName().getString();

			if (String::equal(name, "Name"))
			{
				String target = bindings[i].getValue();
				String cmd("umount ");
				cmd.append(target);
			 	system(cmd.getCString());
			 	break;
			}
		}
	}

	handler.complete();
}

#define UNIX_PROVIDER UNIX_NFSProvider
#define UNIX_PROVIDER_NAME "UNIX_NFSProvider"
#define CLASS_IMPLEMENTATION UNIX_NFS
#define CLASS_IMPLEMENTATION_NAME "UNIX_NFS"
#define BASE_CLASS_NAME "CIM_NFS"
#define NUMKEYS_CLASS_IMPLEMENTATION 4


#include "UNIXProviderBase.hpp"

