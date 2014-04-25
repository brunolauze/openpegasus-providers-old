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

#ifndef __UNIX_NFS_H
#define __UNIX_NFS_H


#include "RemoteFileSystem/UNIX_RemoteFileSystem.h"

#include "UNIX_NFSDeps.h"


#define PROPERTY_HARD_MOUNT				"HardMount"
#define PROPERTY_FOREGROUND_MOUNT				"ForegroundMount"
#define PROPERTY_INTERRUPT				"Interrupt"
#define PROPERTY_MOUNT_FAILURE_RETRIES				"MountFailureRetries"
#define PROPERTY_RETRANSMISSION_ATTEMPTS				"RetransmissionAttempts"
#define PROPERTY_RETRANSMISSION_TIMEOUT				"RetransmissionTimeout"
#define PROPERTY_READ_BUFFER_SIZE				"ReadBufferSize"
#define PROPERTY_WRITE_BUFFER_SIZE				"WriteBufferSize"
#define PROPERTY_SERVER_COMMUNICATION_PORT				"ServerCommunicationPort"
#define PROPERTY_ATTRIBUTE_CACHING				"AttributeCaching"
#define PROPERTY_ATTRIBUTE_CACHING_FOR_REGULAR_FILES_MIN				"AttributeCachingForRegularFilesMin"
#define PROPERTY_ATTRIBUTE_CACHING_FOR_REGULAR_FILES_MAX				"AttributeCachingForRegularFilesMax"
#define PROPERTY_ATTRIBUTE_CACHING_FOR_DIRECTORIES_MIN				"AttributeCachingForDirectoriesMin"
#define PROPERTY_ATTRIBUTE_CACHING_FOR_DIRECTORIES_MAX				"AttributeCachingForDirectoriesMax"


class UNIX_NFS :
	public UNIX_RemoteFileSystem
{
public:

	UNIX_NFS();
	~UNIX_NFS();

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
	virtual Boolean getInstallDate(CIMProperty&) const;
	virtual CIMDateTime getInstallDate() const;
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual Boolean getOperationalStatus(CIMProperty&) const;
	virtual Array<Uint16> getOperationalStatus() const;
	virtual Boolean getStatusDescriptions(CIMProperty&) const;
	virtual Array<String> getStatusDescriptions() const;
	virtual Boolean getStatus(CIMProperty&) const;
	virtual String getStatus() const;
	virtual Boolean getHealthState(CIMProperty&) const;
	virtual Uint16 getHealthState() const;
	virtual Boolean getCommunicationStatus(CIMProperty&) const;
	virtual Uint16 getCommunicationStatus() const;
	virtual Boolean getDetailedStatus(CIMProperty&) const;
	virtual Uint16 getDetailedStatus() const;
	virtual Boolean getOperatingStatus(CIMProperty&) const;
	virtual Uint16 getOperatingStatus() const;
	virtual Boolean getPrimaryStatus(CIMProperty&) const;
	virtual Uint16 getPrimaryStatus() const;
	virtual Boolean getEnabledState(CIMProperty&) const;
	virtual Uint16 getEnabledState() const;
	virtual Boolean getOtherEnabledState(CIMProperty&) const;
	virtual String getOtherEnabledState() const;
	virtual Boolean getRequestedState(CIMProperty&) const;
	virtual Uint16 getRequestedState() const;
	virtual Boolean getEnabledDefault(CIMProperty&) const;
	virtual Uint16 getEnabledDefault() const;
	virtual Boolean getTimeOfLastStateChange(CIMProperty&) const;
	virtual CIMDateTime getTimeOfLastStateChange() const;
	virtual Boolean getAvailableRequestedStates(CIMProperty&) const;
	virtual Array<Uint16> getAvailableRequestedStates() const;
	virtual Boolean getTransitioningToState(CIMProperty&) const;
	virtual Uint16 getTransitioningToState() const;
	virtual Boolean getCSCreationClassName(CIMProperty&) const;
	virtual String getCSCreationClassName() const;
	virtual Boolean getCSName(CIMProperty&) const;
	virtual String getCSName() const;
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual Boolean getRoot(CIMProperty&) const;
	virtual String getRoot() const;
	virtual Boolean getBlockSize(CIMProperty&) const;
	virtual Uint64 getBlockSize() const;
	virtual Boolean getFileSystemSize(CIMProperty&) const;
	virtual Uint64 getFileSystemSize() const;
	virtual Boolean getAvailableSpace(CIMProperty&) const;
	virtual Uint64 getAvailableSpace() const;
	virtual Boolean getReadOnly(CIMProperty&) const;
	virtual Boolean getReadOnly() const;
	virtual Boolean getEncryptionMethod(CIMProperty&) const;
	virtual String getEncryptionMethod() const;
	virtual Boolean getCompressionMethod(CIMProperty&) const;
	virtual String getCompressionMethod() const;
	virtual Boolean getCaseSensitive(CIMProperty&) const;
	virtual Boolean getCaseSensitive() const;
	virtual Boolean getCasePreserved(CIMProperty&) const;
	virtual Boolean getCasePreserved() const;
	virtual Boolean getCodeSet(CIMProperty&) const;
	virtual Array<Uint16> getCodeSet() const;
	virtual Boolean getMaxFileNameLength(CIMProperty&) const;
	virtual Uint32 getMaxFileNameLength() const;
	virtual Boolean getClusterSize(CIMProperty&) const;
	virtual Uint32 getClusterSize() const;
	virtual Boolean getFileSystemType(CIMProperty&) const;
	virtual String getFileSystemType() const;
	virtual Boolean getPersistenceType(CIMProperty&) const;
	virtual Uint16 getPersistenceType() const;
	virtual Boolean getOtherPersistenceType(CIMProperty&) const;
	virtual String getOtherPersistenceType() const;
	virtual Boolean getNumberOfFiles(CIMProperty&) const;
	virtual Uint64 getNumberOfFiles() const;
	virtual Boolean getHardMount(CIMProperty&) const;
	virtual Boolean getHardMount() const;
	virtual Boolean getForegroundMount(CIMProperty&) const;
	virtual Boolean getForegroundMount() const;
	virtual Boolean getInterrupt(CIMProperty&) const;
	virtual Boolean getInterrupt() const;
	virtual Boolean getMountFailureRetries(CIMProperty&) const;
	virtual Uint16 getMountFailureRetries() const;
	virtual Boolean getRetransmissionAttempts(CIMProperty&) const;
	virtual Uint16 getRetransmissionAttempts() const;
	virtual Boolean getRetransmissionTimeout(CIMProperty&) const;
	virtual Uint32 getRetransmissionTimeout() const;
	virtual Boolean getReadBufferSize(CIMProperty&) const;
	virtual Uint64 getReadBufferSize() const;
	virtual Boolean getWriteBufferSize(CIMProperty&) const;
	virtual Uint64 getWriteBufferSize() const;
	virtual Boolean getServerCommunicationPort(CIMProperty&) const;
	virtual Uint32 getServerCommunicationPort() const;
	virtual Boolean getAttributeCaching(CIMProperty&) const;
	virtual Boolean getAttributeCaching() const;
	virtual Boolean getAttributeCachingForRegularFilesMin(CIMProperty&) const;
	virtual Uint16 getAttributeCachingForRegularFilesMin() const;
	virtual Boolean getAttributeCachingForRegularFilesMax(CIMProperty&) const;
	virtual Uint16 getAttributeCachingForRegularFilesMax() const;
	virtual Boolean getAttributeCachingForDirectoriesMin(CIMProperty&) const;
	virtual Uint16 getAttributeCachingForDirectoriesMin() const;
	virtual Boolean getAttributeCachingForDirectoriesMax(CIMProperty&) const;
	virtual Uint16 getAttributeCachingForDirectoriesMax() const;

private:
	CIMName currentScope;

#	include "UNIX_NFSPrivate.h"


};

#endif /* UNIX_NFS */
