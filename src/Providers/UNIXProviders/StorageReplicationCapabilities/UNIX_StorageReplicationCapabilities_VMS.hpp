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


UNIX_StorageReplicationCapabilities::UNIX_StorageReplicationCapabilities(void)
{
}

UNIX_StorageReplicationCapabilities::~UNIX_StorageReplicationCapabilities(void)
{
}


Boolean UNIX_StorageReplicationCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_StorageReplicationCapabilities::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_StorageReplicationCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_StorageReplicationCapabilities::getCaption() const
{
	return String ("");
}

Boolean UNIX_StorageReplicationCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_StorageReplicationCapabilities::getDescription() const
{
	return String ("");
}

Boolean UNIX_StorageReplicationCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_StorageReplicationCapabilities::getElementName() const
{
	return String("StorageReplicationCapabilities");
}

Boolean UNIX_StorageReplicationCapabilities::getSupportedSynchronizationType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_SYNCHRONIZATION_TYPE, getSupportedSynchronizationType());
	return true;
}

Uint16 UNIX_StorageReplicationCapabilities::getSupportedSynchronizationType() const
{
	return Uint16(0);
}

Boolean UNIX_StorageReplicationCapabilities::getSupportedAsynchronousActions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_ASYNCHRONOUS_ACTIONS, getSupportedAsynchronousActions());
	return true;
}

Array<Uint16> UNIX_StorageReplicationCapabilities::getSupportedAsynchronousActions() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_StorageReplicationCapabilities::getSupportedSynchronousActions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_SYNCHRONOUS_ACTIONS, getSupportedSynchronousActions());
	return true;
}

Array<Uint16> UNIX_StorageReplicationCapabilities::getSupportedSynchronousActions() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_StorageReplicationCapabilities::getInitialReplicationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INITIAL_REPLICATION_STATE, getInitialReplicationState());
	return true;
}

Uint16 UNIX_StorageReplicationCapabilities::getInitialReplicationState() const
{
	return Uint16(0);
}

Boolean UNIX_StorageReplicationCapabilities::getSupportedSpecializedElements(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_SPECIALIZED_ELEMENTS, getSupportedSpecializedElements());
	return true;
}

Array<Uint16> UNIX_StorageReplicationCapabilities::getSupportedSpecializedElements() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_StorageReplicationCapabilities::getSupportedModifyOperations(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_MODIFY_OPERATIONS, getSupportedModifyOperations());
	return true;
}

Array<Uint16> UNIX_StorageReplicationCapabilities::getSupportedModifyOperations() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_StorageReplicationCapabilities::getReplicaHostAccessibility(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPLICA_HOST_ACCESSIBILITY, getReplicaHostAccessibility());
	return true;
}

Uint16 UNIX_StorageReplicationCapabilities::getReplicaHostAccessibility() const
{
	return Uint16(0);
}

Boolean UNIX_StorageReplicationCapabilities::getHostAccessibleState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOST_ACCESSIBLE_STATE, getHostAccessibleState());
	return true;
}

Array<Uint16> UNIX_StorageReplicationCapabilities::getHostAccessibleState() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_StorageReplicationCapabilities::getSpaceLimitSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPACE_LIMIT_SUPPORTED, getSpaceLimitSupported());
	return true;
}

Boolean UNIX_StorageReplicationCapabilities::getSpaceLimitSupported() const
{
	return Boolean(false);
}

Boolean UNIX_StorageReplicationCapabilities::getSpaceReservationSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPACE_RESERVATION_SUPPORTED, getSpaceReservationSupported());
	return true;
}

Boolean UNIX_StorageReplicationCapabilities::getSpaceReservationSupported() const
{
	return Boolean(false);
}

Boolean UNIX_StorageReplicationCapabilities::getLocalMirrorSnapshotSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCAL_MIRROR_SNAPSHOT_SUPPORTED, getLocalMirrorSnapshotSupported());
	return true;
}

Boolean UNIX_StorageReplicationCapabilities::getLocalMirrorSnapshotSupported() const
{
	return Boolean(false);
}

Boolean UNIX_StorageReplicationCapabilities::getRemoteMirrorSnapshotSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOTE_MIRROR_SNAPSHOT_SUPPORTED, getRemoteMirrorSnapshotSupported());
	return true;
}

Boolean UNIX_StorageReplicationCapabilities::getRemoteMirrorSnapshotSupported() const
{
	return Boolean(false);
}

Boolean UNIX_StorageReplicationCapabilities::getIncrementalDeltasSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INCREMENTAL_DELTAS_SUPPORTED, getIncrementalDeltasSupported());
	return true;
}

Boolean UNIX_StorageReplicationCapabilities::getIncrementalDeltasSupported() const
{
	return Boolean(false);
}

Boolean UNIX_StorageReplicationCapabilities::getPersistentReplicasSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERSISTENT_REPLICAS_SUPPORTED, getPersistentReplicasSupported());
	return true;
}

Boolean UNIX_StorageReplicationCapabilities::getPersistentReplicasSupported() const
{
	return Boolean(false);
}

Boolean UNIX_StorageReplicationCapabilities::getBidirectionalConnectionsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BIDIRECTIONAL_CONNECTIONS_SUPPORTED, getBidirectionalConnectionsSupported());
	return true;
}

Boolean UNIX_StorageReplicationCapabilities::getBidirectionalConnectionsSupported() const
{
	return Boolean(false);
}

Boolean UNIX_StorageReplicationCapabilities::getMaximumReplicasPerSource(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_REPLICAS_PER_SOURCE, getMaximumReplicasPerSource());
	return true;
}

Uint16 UNIX_StorageReplicationCapabilities::getMaximumReplicasPerSource() const
{
	return Uint16(0);
}

Boolean UNIX_StorageReplicationCapabilities::getMaximumPortsPerConnection(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_PORTS_PER_CONNECTION, getMaximumPortsPerConnection());
	return true;
}

Uint16 UNIX_StorageReplicationCapabilities::getMaximumPortsPerConnection() const
{
	return Uint16(0);
}

Boolean UNIX_StorageReplicationCapabilities::getMaximumConnectionsPerPort(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_CONNECTIONS_PER_PORT, getMaximumConnectionsPerPort());
	return true;
}

Uint16 UNIX_StorageReplicationCapabilities::getMaximumConnectionsPerPort() const
{
	return Uint16(0);
}

Boolean UNIX_StorageReplicationCapabilities::getMaximumPeerConnections(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_PEER_CONNECTIONS, getMaximumPeerConnections());
	return true;
}

Uint16 UNIX_StorageReplicationCapabilities::getMaximumPeerConnections() const
{
	return Uint16(0);
}

Boolean UNIX_StorageReplicationCapabilities::getMaximumLocalReplicationDepth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_LOCAL_REPLICATION_DEPTH, getMaximumLocalReplicationDepth());
	return true;
}

Uint16 UNIX_StorageReplicationCapabilities::getMaximumLocalReplicationDepth() const
{
	return Uint16(0);
}

Boolean UNIX_StorageReplicationCapabilities::getMaximumRemoteReplicationDepth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_REMOTE_REPLICATION_DEPTH, getMaximumRemoteReplicationDepth());
	return true;
}

Uint16 UNIX_StorageReplicationCapabilities::getMaximumRemoteReplicationDepth() const
{
	return Uint16(0);
}

Boolean UNIX_StorageReplicationCapabilities::getInitialSynchronizationDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INITIAL_SYNCHRONIZATION_DEFAULT, getInitialSynchronizationDefault());
	return true;
}

Uint16 UNIX_StorageReplicationCapabilities::getInitialSynchronizationDefault() const
{
	return Uint16(0);
}

Boolean UNIX_StorageReplicationCapabilities::getReplicationPriorityDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPLICATION_PRIORITY_DEFAULT, getReplicationPriorityDefault());
	return true;
}

Uint16 UNIX_StorageReplicationCapabilities::getReplicationPriorityDefault() const
{
	return Uint16(0);
}

Boolean UNIX_StorageReplicationCapabilities::getLowSpaceWarningThresholdDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOW_SPACE_WARNING_THRESHOLD_DEFAULT, getLowSpaceWarningThresholdDefault());
	return true;
}

Uint8 UNIX_StorageReplicationCapabilities::getLowSpaceWarningThresholdDefault() const
{
	return Uint8(0);
}

Boolean UNIX_StorageReplicationCapabilities::getSpaceLimitWarningThresholdDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPACE_LIMIT_WARNING_THRESHOLD_DEFAULT, getSpaceLimitWarningThresholdDefault());
	return true;
}

Uint8 UNIX_StorageReplicationCapabilities::getSpaceLimitWarningThresholdDefault() const
{
	return Uint8(0);
}

Boolean UNIX_StorageReplicationCapabilities::getRemoteReplicationServicePointAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOTE_REPLICATION_SERVICE_POINT_ACCESS, getRemoteReplicationServicePointAccess());
	return true;
}

Uint16 UNIX_StorageReplicationCapabilities::getRemoteReplicationServicePointAccess() const
{
	return Uint16(0);
}

Boolean UNIX_StorageReplicationCapabilities::getAlternateReplicationServicePointAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALTERNATE_REPLICATION_SERVICE_POINT_ACCESS, getAlternateReplicationServicePointAccess());
	return true;
}

Uint16 UNIX_StorageReplicationCapabilities::getAlternateReplicationServicePointAccess() const
{
	return Uint16(0);
}

Boolean UNIX_StorageReplicationCapabilities::getDeltaReplicaPoolAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_REPLICA_POOL_ACCESS, getDeltaReplicaPoolAccess());
	return true;
}

Uint16 UNIX_StorageReplicationCapabilities::getDeltaReplicaPoolAccess() const
{
	return Uint16(0);
}

Boolean UNIX_StorageReplicationCapabilities::getRemoteBufferElementType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOTE_BUFFER_ELEMENT_TYPE, getRemoteBufferElementType());
	return true;
}

Uint16 UNIX_StorageReplicationCapabilities::getRemoteBufferElementType() const
{
	return Uint16(0);
}

Boolean UNIX_StorageReplicationCapabilities::getRemoteBufferHost(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOTE_BUFFER_HOST, getRemoteBufferHost());
	return true;
}

Uint16 UNIX_StorageReplicationCapabilities::getRemoteBufferHost() const
{
	return Uint16(0);
}

Boolean UNIX_StorageReplicationCapabilities::getRemoteBufferLocation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOTE_BUFFER_LOCATION, getRemoteBufferLocation());
	return true;
}

Uint16 UNIX_StorageReplicationCapabilities::getRemoteBufferLocation() const
{
	return Uint16(0);
}

Boolean UNIX_StorageReplicationCapabilities::getRemoteBufferSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOTE_BUFFER_SUPPORTED, getRemoteBufferSupported());
	return true;
}

Uint16 UNIX_StorageReplicationCapabilities::getRemoteBufferSupported() const
{
	return Uint16(0);
}

Boolean UNIX_StorageReplicationCapabilities::getUseReplicationBufferDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USE_REPLICATION_BUFFER_DEFAULT, getUseReplicationBufferDefault());
	return true;
}

Uint16 UNIX_StorageReplicationCapabilities::getUseReplicationBufferDefault() const
{
	return Uint16(0);
}

Boolean UNIX_StorageReplicationCapabilities::getPeerConnectionProtocol(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PEER_CONNECTION_PROTOCOL, getPeerConnectionProtocol());
	return true;
}

String UNIX_StorageReplicationCapabilities::getPeerConnectionProtocol() const
{
	return String ("");
}



Boolean UNIX_StorageReplicationCapabilities::initialize()
{
	return false;
}

Boolean UNIX_StorageReplicationCapabilities::load(int &pIndex)
{
	return false;
}

Boolean UNIX_StorageReplicationCapabilities::finalize()
{
	return false;
}

Boolean UNIX_StorageReplicationCapabilities::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String instanceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_INSTANCE_ID)) instanceIDKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
