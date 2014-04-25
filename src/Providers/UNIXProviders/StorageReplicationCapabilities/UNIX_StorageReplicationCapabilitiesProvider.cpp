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


#include "UNIX_StorageReplicationCapabilitiesProvider.h"

UNIX_StorageReplicationCapabilitiesProvider::UNIX_StorageReplicationCapabilitiesProvider()
{
}

UNIX_StorageReplicationCapabilitiesProvider::~UNIX_StorageReplicationCapabilitiesProvider()
{
}

CIMInstance UNIX_StorageReplicationCapabilitiesProvider::constructInstance(
	const CIMName &className,
	const CIMNamespaceName &nameSpace,
	const UNIX_StorageReplicationCapabilities &_p)
{
	CIMProperty p;

	CIMInstance inst(className);

	// Set path
	inst.setPath(CIMObjectPath(String(""), // hostname
			nameSpace,
			CIMName("UNIX_StorageReplicationCapabilities"),
			constructKeyBindings(_p)));

	//CIM_ManagedElement Properties
	if (_p.getInstanceID(p)) inst.addProperty(p);
	if (_p.getCaption(p)) inst.addProperty(p);
	if (_p.getDescription(p)) inst.addProperty(p);
	if (_p.getElementName(p)) inst.addProperty(p);

	//CIM_Capabilities Properties

	//CIM_StorageReplicationCapabilities Properties
	if (_p.getSupportedSynchronizationType(p)) inst.addProperty(p);
	if (_p.getSupportedAsynchronousActions(p)) inst.addProperty(p);
	if (_p.getSupportedSynchronousActions(p)) inst.addProperty(p);
	if (_p.getInitialReplicationState(p)) inst.addProperty(p);
	if (_p.getSupportedSpecializedElements(p)) inst.addProperty(p);
	if (_p.getSupportedModifyOperations(p)) inst.addProperty(p);
	if (_p.getReplicaHostAccessibility(p)) inst.addProperty(p);
	if (_p.getHostAccessibleState(p)) inst.addProperty(p);
	if (_p.getSpaceLimitSupported(p)) inst.addProperty(p);
	if (_p.getSpaceReservationSupported(p)) inst.addProperty(p);
	if (_p.getLocalMirrorSnapshotSupported(p)) inst.addProperty(p);
	if (_p.getRemoteMirrorSnapshotSupported(p)) inst.addProperty(p);
	if (_p.getIncrementalDeltasSupported(p)) inst.addProperty(p);
	if (_p.getPersistentReplicasSupported(p)) inst.addProperty(p);
	if (_p.getBidirectionalConnectionsSupported(p)) inst.addProperty(p);
	if (_p.getMaximumReplicasPerSource(p)) inst.addProperty(p);
	if (_p.getMaximumPortsPerConnection(p)) inst.addProperty(p);
	if (_p.getMaximumConnectionsPerPort(p)) inst.addProperty(p);
	if (_p.getMaximumPeerConnections(p)) inst.addProperty(p);
	if (_p.getMaximumLocalReplicationDepth(p)) inst.addProperty(p);
	if (_p.getMaximumRemoteReplicationDepth(p)) inst.addProperty(p);
	if (_p.getInitialSynchronizationDefault(p)) inst.addProperty(p);
	if (_p.getReplicationPriorityDefault(p)) inst.addProperty(p);
	if (_p.getLowSpaceWarningThresholdDefault(p)) inst.addProperty(p);
	if (_p.getSpaceLimitWarningThresholdDefault(p)) inst.addProperty(p);
	if (_p.getRemoteReplicationServicePointAccess(p)) inst.addProperty(p);
	if (_p.getAlternateReplicationServicePointAccess(p)) inst.addProperty(p);
	if (_p.getDeltaReplicaPoolAccess(p)) inst.addProperty(p);
	if (_p.getRemoteBufferElementType(p)) inst.addProperty(p);
	if (_p.getRemoteBufferHost(p)) inst.addProperty(p);
	if (_p.getRemoteBufferLocation(p)) inst.addProperty(p);
	if (_p.getRemoteBufferSupported(p)) inst.addProperty(p);
	if (_p.getUseReplicationBufferDefault(p)) inst.addProperty(p);
	if (_p.getPeerConnectionProtocol(p)) inst.addProperty(p);


	return inst;
}

Array<CIMKeyBinding> UNIX_StorageReplicationCapabilitiesProvider::constructKeyBindings(const UNIX_StorageReplicationCapabilities& _p)

{

	Array<CIMKeyBinding> keys;

	keys.append(CIMKeyBinding(
		PROPERTY_INSTANCE_ID,
		_p.getInstanceID(),
		CIMKeyBinding::STRING));


	return keys;
}



#define UNIX_PROVIDER UNIX_StorageReplicationCapabilitiesProvider
#define UNIX_PROVIDER_NAME "UNIX_StorageReplicationCapabilitiesProvider"
#define CLASS_IMPLEMENTATION UNIX_StorageReplicationCapabilities
#define CLASS_IMPLEMENTATION_NAME "UNIX_StorageReplicationCapabilities"
#define BASE_CLASS_NAME "CIM_StorageReplicationCapabilities"
#define NUMKEYS_CLASS_IMPLEMENTATION 0


#include "UNIXProviderBase.hpp"

