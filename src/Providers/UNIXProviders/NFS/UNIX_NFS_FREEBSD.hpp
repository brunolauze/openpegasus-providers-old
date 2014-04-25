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


UNIX_NFS::UNIX_NFS(void)
{
}

UNIX_NFS::~UNIX_NFS(void)
{
}


Boolean UNIX_NFS::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_NFS::getInstanceID() const
{
	return UNIX_RemoteFileSystem::getInstanceID();
}

Boolean UNIX_NFS::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_NFS::getCaption() const
{
	return UNIX_RemoteFileSystem::getCaption();
}

Boolean UNIX_NFS::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_NFS::getDescription() const
{
	return UNIX_RemoteFileSystem::getDescription();
}

Boolean UNIX_NFS::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_NFS::getElementName() const
{
	return String("RemoteFileSystem");
}

Boolean UNIX_NFS::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_NFS::getInstallDate() const
{
	return UNIX_RemoteFileSystem::getInstallDate();
}

Boolean UNIX_NFS::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_NFS::getName() const
{
	return UNIX_RemoteFileSystem::getName();
}

Boolean UNIX_NFS::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_NFS::getOperationalStatus() const
{
	return UNIX_RemoteFileSystem::getOperationalStatus();

}

Boolean UNIX_NFS::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_NFS::getStatusDescriptions() const
{
	return UNIX_RemoteFileSystem::getStatusDescriptions();

}

Boolean UNIX_NFS::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_NFS::getStatus() const
{
	return UNIX_RemoteFileSystem::getStatus();
}

Boolean UNIX_NFS::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_NFS::getHealthState() const
{
	return UNIX_RemoteFileSystem::getHealthState();
}

Boolean UNIX_NFS::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_NFS::getCommunicationStatus() const
{
	return UNIX_RemoteFileSystem::getCommunicationStatus();
}

Boolean UNIX_NFS::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_NFS::getDetailedStatus() const
{
	return UNIX_RemoteFileSystem::getDetailedStatus();
}

Boolean UNIX_NFS::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_NFS::getOperatingStatus() const
{
	return UNIX_RemoteFileSystem::getOperatingStatus();
}

Boolean UNIX_NFS::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_NFS::getPrimaryStatus() const
{
	return UNIX_RemoteFileSystem::getPrimaryStatus();
}

Boolean UNIX_NFS::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_NFS::getEnabledState() const
{
	return UNIX_RemoteFileSystem::getEnabledState();
}

Boolean UNIX_NFS::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_NFS::getOtherEnabledState() const
{
	return UNIX_RemoteFileSystem::getOtherEnabledState();
}

Boolean UNIX_NFS::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_NFS::getRequestedState() const
{
	return UNIX_RemoteFileSystem::getRequestedState();
}

Boolean UNIX_NFS::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_NFS::getEnabledDefault() const
{
	return UNIX_RemoteFileSystem::getEnabledDefault();
}

Boolean UNIX_NFS::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_NFS::getTimeOfLastStateChange() const
{
	return UNIX_RemoteFileSystem::getTimeOfLastStateChange();
}

Boolean UNIX_NFS::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_NFS::getAvailableRequestedStates() const
{
	return UNIX_RemoteFileSystem::getAvailableRequestedStates();
}

Boolean UNIX_NFS::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_NFS::getTransitioningToState() const
{
	return UNIX_RemoteFileSystem::getTransitioningToState();
}

Boolean UNIX_NFS::getCSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_CREATION_CLASS_NAME, getCSCreationClassName());
	return true;
}

String UNIX_NFS::getCSCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_NFS::getCSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_NAME, getCSName());
	return true;
}

String UNIX_NFS::getCSName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_NFS::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_NFS::getCreationClassName() const
{
	return String("UNIX_NFS");
}

Boolean UNIX_NFS::getRoot(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROOT, getRoot());
	return true;
}

String UNIX_NFS::getRoot() const
{
	return UNIX_RemoteFileSystem::getRoot();
}

Boolean UNIX_NFS::getBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLOCK_SIZE, getBlockSize());
	return true;
}

Uint64 UNIX_NFS::getBlockSize() const
{
	return UNIX_RemoteFileSystem::getBlockSize();
}

Boolean UNIX_NFS::getFileSystemSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILE_SYSTEM_SIZE, getFileSystemSize());
	return true;
}

Uint64 UNIX_NFS::getFileSystemSize() const
{
	return UNIX_RemoteFileSystem::getFileSystemSize();
}

Boolean UNIX_NFS::getAvailableSpace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_SPACE, getAvailableSpace());
	return true;
}

Uint64 UNIX_NFS::getAvailableSpace() const
{
	return UNIX_RemoteFileSystem::getAvailableSpace();
}

Boolean UNIX_NFS::getReadOnly(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_READ_ONLY, getReadOnly());
	return true;
}

Boolean UNIX_NFS::getReadOnly() const
{
	return UNIX_RemoteFileSystem::getReadOnly();
}

Boolean UNIX_NFS::getEncryptionMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENCRYPTION_METHOD, getEncryptionMethod());
	return true;
}

String UNIX_NFS::getEncryptionMethod() const
{
	return UNIX_RemoteFileSystem::getEncryptionMethod();
}

Boolean UNIX_NFS::getCompressionMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_METHOD, getCompressionMethod());
	return true;
}

String UNIX_NFS::getCompressionMethod() const
{
	return UNIX_RemoteFileSystem::getCompressionMethod();
}

Boolean UNIX_NFS::getCaseSensitive(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CASE_SENSITIVE, getCaseSensitive());
	return true;
}

Boolean UNIX_NFS::getCaseSensitive() const
{
	return UNIX_RemoteFileSystem::getCaseSensitive();
}

Boolean UNIX_NFS::getCasePreserved(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CASE_PRESERVED, getCasePreserved());
	return true;
}

Boolean UNIX_NFS::getCasePreserved() const
{
	return UNIX_RemoteFileSystem::getCasePreserved();
}

Boolean UNIX_NFS::getCodeSet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CODE_SET, getCodeSet());
	return true;
}

Array<Uint16> UNIX_NFS::getCodeSet() const
{
	return UNIX_RemoteFileSystem::getCodeSet();

}

Boolean UNIX_NFS::getMaxFileNameLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_FILE_NAME_LENGTH, getMaxFileNameLength());
	return true;
}

Uint32 UNIX_NFS::getMaxFileNameLength() const
{
	return UNIX_RemoteFileSystem::getMaxFileNameLength();
}

Boolean UNIX_NFS::getClusterSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLUSTER_SIZE, getClusterSize());
	return true;
}

Uint32 UNIX_NFS::getClusterSize() const
{
	return UNIX_RemoteFileSystem::getClusterSize();
}

Boolean UNIX_NFS::getFileSystemType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILE_SYSTEM_TYPE, getFileSystemType());
	return true;
}

String UNIX_NFS::getFileSystemType() const
{
	return UNIX_RemoteFileSystem::getFileSystemType();
}

Boolean UNIX_NFS::getPersistenceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERSISTENCE_TYPE, getPersistenceType());
	return true;
}

Uint16 UNIX_NFS::getPersistenceType() const
{
	return UNIX_RemoteFileSystem::getPersistenceType();
}

Boolean UNIX_NFS::getOtherPersistenceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PERSISTENCE_TYPE, getOtherPersistenceType());
	return true;
}

String UNIX_NFS::getOtherPersistenceType() const
{
	return UNIX_RemoteFileSystem::getOtherPersistenceType();
}

Boolean UNIX_NFS::getNumberOfFiles(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_FILES, getNumberOfFiles());
	return true;
}

Uint64 UNIX_NFS::getNumberOfFiles() const
{
	return UNIX_RemoteFileSystem::getNumberOfFiles();
}

Boolean UNIX_NFS::getHardMount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HARD_MOUNT, getHardMount());
	return true;
}

Boolean UNIX_NFS::getHardMount() const
{
	return Boolean(false);
}

Boolean UNIX_NFS::getForegroundMount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FOREGROUND_MOUNT, getForegroundMount());
	return true;
}

Boolean UNIX_NFS::getForegroundMount() const
{
	return Boolean(false);
}

Boolean UNIX_NFS::getInterrupt(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERRUPT, getInterrupt());
	return true;
}

Boolean UNIX_NFS::getInterrupt() const
{
	return Boolean(false);
}

Boolean UNIX_NFS::getMountFailureRetries(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MOUNT_FAILURE_RETRIES, getMountFailureRetries());
	return true;
}

Uint16 UNIX_NFS::getMountFailureRetries() const
{
	return Uint16(0);
}

Boolean UNIX_NFS::getRetransmissionAttempts(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RETRANSMISSION_ATTEMPTS, getRetransmissionAttempts());
	return true;
}

Uint16 UNIX_NFS::getRetransmissionAttempts() const
{
	return Uint16(0);
}

Boolean UNIX_NFS::getRetransmissionTimeout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RETRANSMISSION_TIMEOUT, getRetransmissionTimeout());
	return true;
}

Uint32 UNIX_NFS::getRetransmissionTimeout() const
{
	return Uint32(0);
}

Boolean UNIX_NFS::getReadBufferSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_READ_BUFFER_SIZE, getReadBufferSize());
	return true;
}

Uint64 UNIX_NFS::getReadBufferSize() const
{
	return Uint64(0);
}

Boolean UNIX_NFS::getWriteBufferSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WRITE_BUFFER_SIZE, getWriteBufferSize());
	return true;
}

Uint64 UNIX_NFS::getWriteBufferSize() const
{
	return Uint64(0);
}

Boolean UNIX_NFS::getServerCommunicationPort(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVER_COMMUNICATION_PORT, getServerCommunicationPort());
	return true;
}

Uint32 UNIX_NFS::getServerCommunicationPort() const
{
	return Uint32(0);
}

Boolean UNIX_NFS::getAttributeCaching(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ATTRIBUTE_CACHING, getAttributeCaching());
	return true;
}

Boolean UNIX_NFS::getAttributeCaching() const
{
	return Boolean(false);
}

Boolean UNIX_NFS::getAttributeCachingForRegularFilesMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ATTRIBUTE_CACHING_FOR_REGULAR_FILES_MIN, getAttributeCachingForRegularFilesMin());
	return true;
}

Uint16 UNIX_NFS::getAttributeCachingForRegularFilesMin() const
{
	return Uint16(0);
}

Boolean UNIX_NFS::getAttributeCachingForRegularFilesMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ATTRIBUTE_CACHING_FOR_REGULAR_FILES_MAX, getAttributeCachingForRegularFilesMax());
	return true;
}

Uint16 UNIX_NFS::getAttributeCachingForRegularFilesMax() const
{
	return Uint16(0);
}

Boolean UNIX_NFS::getAttributeCachingForDirectoriesMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ATTRIBUTE_CACHING_FOR_DIRECTORIES_MIN, getAttributeCachingForDirectoriesMin());
	return true;
}

Uint16 UNIX_NFS::getAttributeCachingForDirectoriesMin() const
{
	return Uint16(0);
}

Boolean UNIX_NFS::getAttributeCachingForDirectoriesMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ATTRIBUTE_CACHING_FOR_DIRECTORIES_MAX, getAttributeCachingForDirectoriesMax());
	return true;
}

Uint16 UNIX_NFS::getAttributeCachingForDirectoriesMax() const
{
	return Uint16(0);
}


Boolean UNIX_NFS::initialize()
{
	return UNIX_RemoteFileSystem::initialize();
}

Boolean UNIX_NFS::load(int &pIndex)
{
	if (UNIX_RemoteFileSystem::load(pIndex))
	{
		if (String::equalNoCase(getFileSystemType(), "nfs"))
		{
			return true;
		}
		else { return load(++pIndex); }
	}
	return false;
}

Boolean UNIX_NFS::finalize()
{
	return UNIX_RemoteFileSystem::finalize();
}

Boolean UNIX_NFS::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String cSCreationClassNameKey;
	String cSNameKey;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_CS_CREATION_CLASS_NAME)) cSCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CS_NAME)) cSNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
