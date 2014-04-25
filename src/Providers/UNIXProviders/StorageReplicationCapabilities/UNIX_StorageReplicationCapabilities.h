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

#ifndef __UNIX_STORAGEREPLICATIONCAPABILITIES_H
#define __UNIX_STORAGEREPLICATIONCAPABILITIES_H


#include "CIM_Capabilities.h"

#include "UNIX_StorageReplicationCapabilitiesDeps.h"


#define PROPERTY_SUPPORTED_SYNCHRONIZATION_TYPE				"SupportedSynchronizationType"
#define PROPERTY_SUPPORTED_ASYNCHRONOUS_ACTIONS				"SupportedAsynchronousActions"
#define PROPERTY_SUPPORTED_SYNCHRONOUS_ACTIONS				"SupportedSynchronousActions"
#define PROPERTY_INITIAL_REPLICATION_STATE				"InitialReplicationState"
#define PROPERTY_SUPPORTED_SPECIALIZED_ELEMENTS				"SupportedSpecializedElements"
#define PROPERTY_SUPPORTED_MODIFY_OPERATIONS				"SupportedModifyOperations"
#define PROPERTY_REPLICA_HOST_ACCESSIBILITY				"ReplicaHostAccessibility"
#define PROPERTY_HOST_ACCESSIBLE_STATE				"HostAccessibleState"
#define PROPERTY_SPACE_LIMIT_SUPPORTED				"SpaceLimitSupported"
#define PROPERTY_SPACE_RESERVATION_SUPPORTED				"SpaceReservationSupported"
#define PROPERTY_LOCAL_MIRROR_SNAPSHOT_SUPPORTED				"LocalMirrorSnapshotSupported"
#define PROPERTY_REMOTE_MIRROR_SNAPSHOT_SUPPORTED				"RemoteMirrorSnapshotSupported"
#define PROPERTY_INCREMENTAL_DELTAS_SUPPORTED				"IncrementalDeltasSupported"
#define PROPERTY_PERSISTENT_REPLICAS_SUPPORTED				"PersistentReplicasSupported"
#define PROPERTY_BIDIRECTIONAL_CONNECTIONS_SUPPORTED				"BidirectionalConnectionsSupported"
#define PROPERTY_MAXIMUM_REPLICAS_PER_SOURCE				"MaximumReplicasPerSource"
#define PROPERTY_MAXIMUM_PORTS_PER_CONNECTION				"MaximumPortsPerConnection"
#define PROPERTY_MAXIMUM_CONNECTIONS_PER_PORT				"MaximumConnectionsPerPort"
#define PROPERTY_MAXIMUM_PEER_CONNECTIONS				"MaximumPeerConnections"
#define PROPERTY_MAXIMUM_LOCAL_REPLICATION_DEPTH				"MaximumLocalReplicationDepth"
#define PROPERTY_MAXIMUM_REMOTE_REPLICATION_DEPTH				"MaximumRemoteReplicationDepth"
#define PROPERTY_INITIAL_SYNCHRONIZATION_DEFAULT				"InitialSynchronizationDefault"
#define PROPERTY_REPLICATION_PRIORITY_DEFAULT				"ReplicationPriorityDefault"
#define PROPERTY_LOW_SPACE_WARNING_THRESHOLD_DEFAULT				"LowSpaceWarningThresholdDefault"
#define PROPERTY_SPACE_LIMIT_WARNING_THRESHOLD_DEFAULT				"SpaceLimitWarningThresholdDefault"
#define PROPERTY_REMOTE_REPLICATION_SERVICE_POINT_ACCESS				"RemoteReplicationServicePointAccess"
#define PROPERTY_ALTERNATE_REPLICATION_SERVICE_POINT_ACCESS				"AlternateReplicationServicePointAccess"
#define PROPERTY_DELTA_REPLICA_POOL_ACCESS				"DeltaReplicaPoolAccess"
#define PROPERTY_REMOTE_BUFFER_ELEMENT_TYPE				"RemoteBufferElementType"
#define PROPERTY_REMOTE_BUFFER_HOST				"RemoteBufferHost"
#define PROPERTY_REMOTE_BUFFER_LOCATION				"RemoteBufferLocation"
#define PROPERTY_REMOTE_BUFFER_SUPPORTED				"RemoteBufferSupported"
#define PROPERTY_USE_REPLICATION_BUFFER_DEFAULT				"UseReplicationBufferDefault"
#define PROPERTY_PEER_CONNECTION_PROTOCOL				"PeerConnectionProtocol"


class UNIX_StorageReplicationCapabilities :
	public CIM_Capabilities
{
public:

	UNIX_StorageReplicationCapabilities();
	~UNIX_StorageReplicationCapabilities();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean finalize();
	virtual Boolean find(Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);

	virtual Boolean getInstanceID(CIMProperty&) const;
	virtual String getInstanceID() const;
	virtual Boolean getCaption(CIMProperty&) const;
	virtual String getCaption() const;
	virtual Boolean getDescription(CIMProperty&) const;
	virtual String getDescription() const;
	virtual Boolean getElementName(CIMProperty&) const;
	virtual String getElementName() const;
	virtual Boolean getSupportedSynchronizationType(CIMProperty&) const;
	virtual Uint16 getSupportedSynchronizationType() const;
	virtual Boolean getSupportedAsynchronousActions(CIMProperty&) const;
	virtual Array<Uint16> getSupportedAsynchronousActions() const;
	virtual Boolean getSupportedSynchronousActions(CIMProperty&) const;
	virtual Array<Uint16> getSupportedSynchronousActions() const;
	virtual Boolean getInitialReplicationState(CIMProperty&) const;
	virtual Uint16 getInitialReplicationState() const;
	virtual Boolean getSupportedSpecializedElements(CIMProperty&) const;
	virtual Array<Uint16> getSupportedSpecializedElements() const;
	virtual Boolean getSupportedModifyOperations(CIMProperty&) const;
	virtual Array<Uint16> getSupportedModifyOperations() const;
	virtual Boolean getReplicaHostAccessibility(CIMProperty&) const;
	virtual Uint16 getReplicaHostAccessibility() const;
	virtual Boolean getHostAccessibleState(CIMProperty&) const;
	virtual Array<Uint16> getHostAccessibleState() const;
	virtual Boolean getSpaceLimitSupported(CIMProperty&) const;
	virtual Boolean getSpaceLimitSupported() const;
	virtual Boolean getSpaceReservationSupported(CIMProperty&) const;
	virtual Boolean getSpaceReservationSupported() const;
	virtual Boolean getLocalMirrorSnapshotSupported(CIMProperty&) const;
	virtual Boolean getLocalMirrorSnapshotSupported() const;
	virtual Boolean getRemoteMirrorSnapshotSupported(CIMProperty&) const;
	virtual Boolean getRemoteMirrorSnapshotSupported() const;
	virtual Boolean getIncrementalDeltasSupported(CIMProperty&) const;
	virtual Boolean getIncrementalDeltasSupported() const;
	virtual Boolean getPersistentReplicasSupported(CIMProperty&) const;
	virtual Boolean getPersistentReplicasSupported() const;
	virtual Boolean getBidirectionalConnectionsSupported(CIMProperty&) const;
	virtual Boolean getBidirectionalConnectionsSupported() const;
	virtual Boolean getMaximumReplicasPerSource(CIMProperty&) const;
	virtual Uint16 getMaximumReplicasPerSource() const;
	virtual Boolean getMaximumPortsPerConnection(CIMProperty&) const;
	virtual Uint16 getMaximumPortsPerConnection() const;
	virtual Boolean getMaximumConnectionsPerPort(CIMProperty&) const;
	virtual Uint16 getMaximumConnectionsPerPort() const;
	virtual Boolean getMaximumPeerConnections(CIMProperty&) const;
	virtual Uint16 getMaximumPeerConnections() const;
	virtual Boolean getMaximumLocalReplicationDepth(CIMProperty&) const;
	virtual Uint16 getMaximumLocalReplicationDepth() const;
	virtual Boolean getMaximumRemoteReplicationDepth(CIMProperty&) const;
	virtual Uint16 getMaximumRemoteReplicationDepth() const;
	virtual Boolean getInitialSynchronizationDefault(CIMProperty&) const;
	virtual Uint16 getInitialSynchronizationDefault() const;
	virtual Boolean getReplicationPriorityDefault(CIMProperty&) const;
	virtual Uint16 getReplicationPriorityDefault() const;
	virtual Boolean getLowSpaceWarningThresholdDefault(CIMProperty&) const;
	virtual Uint8 getLowSpaceWarningThresholdDefault() const;
	virtual Boolean getSpaceLimitWarningThresholdDefault(CIMProperty&) const;
	virtual Uint8 getSpaceLimitWarningThresholdDefault() const;
	virtual Boolean getRemoteReplicationServicePointAccess(CIMProperty&) const;
	virtual Uint16 getRemoteReplicationServicePointAccess() const;
	virtual Boolean getAlternateReplicationServicePointAccess(CIMProperty&) const;
	virtual Uint16 getAlternateReplicationServicePointAccess() const;
	virtual Boolean getDeltaReplicaPoolAccess(CIMProperty&) const;
	virtual Uint16 getDeltaReplicaPoolAccess() const;
	virtual Boolean getRemoteBufferElementType(CIMProperty&) const;
	virtual Uint16 getRemoteBufferElementType() const;
	virtual Boolean getRemoteBufferHost(CIMProperty&) const;
	virtual Uint16 getRemoteBufferHost() const;
	virtual Boolean getRemoteBufferLocation(CIMProperty&) const;
	virtual Uint16 getRemoteBufferLocation() const;
	virtual Boolean getRemoteBufferSupported(CIMProperty&) const;
	virtual Uint16 getRemoteBufferSupported() const;
	virtual Boolean getUseReplicationBufferDefault(CIMProperty&) const;
	virtual Uint16 getUseReplicationBufferDefault() const;
	virtual Boolean getPeerConnectionProtocol(CIMProperty&) const;
	virtual String getPeerConnectionProtocol() const;

private:
	CIMName currentScope;

#	include "UNIX_StorageReplicationCapabilitiesPrivate.h"


};

#endif /* UNIX_STORAGEREPLICATIONCAPABILITIES */
