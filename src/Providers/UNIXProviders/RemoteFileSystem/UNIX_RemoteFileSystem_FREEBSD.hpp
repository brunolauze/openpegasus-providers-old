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


UNIX_RemoteFileSystem::UNIX_RemoteFileSystem(void)
{
}

UNIX_RemoteFileSystem::~UNIX_RemoteFileSystem(void)
{
}


Boolean UNIX_RemoteFileSystem::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_RemoteFileSystem::getInstanceID() const
{
	return UNIX_FileSystem::getInstanceID();
}

Boolean UNIX_RemoteFileSystem::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_RemoteFileSystem::getCaption() const
{
	return UNIX_FileSystem::getCaption();
}

Boolean UNIX_RemoteFileSystem::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_RemoteFileSystem::getDescription() const
{
	return UNIX_FileSystem::getDescription();
}

Boolean UNIX_RemoteFileSystem::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_RemoteFileSystem::getElementName() const
{
	return String("RemoteFileSystem");
}

Boolean UNIX_RemoteFileSystem::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_RemoteFileSystem::getInstallDate() const
{
	return UNIX_FileSystem::getInstallDate();
}

Boolean UNIX_RemoteFileSystem::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_RemoteFileSystem::getName() const
{
	return UNIX_FileSystem::getName();
}

Boolean UNIX_RemoteFileSystem::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_RemoteFileSystem::getOperationalStatus() const
{
	return UNIX_FileSystem::getOperationalStatus();

}

Boolean UNIX_RemoteFileSystem::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_RemoteFileSystem::getStatusDescriptions() const
{
	return UNIX_FileSystem::getStatusDescriptions();

}

Boolean UNIX_RemoteFileSystem::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_RemoteFileSystem::getStatus() const
{
	return UNIX_FileSystem::getStatus();
}

Boolean UNIX_RemoteFileSystem::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_RemoteFileSystem::getHealthState() const
{
	return UNIX_FileSystem::getHealthState();
}

Boolean UNIX_RemoteFileSystem::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_RemoteFileSystem::getCommunicationStatus() const
{
	return UNIX_FileSystem::getCommunicationStatus();
}

Boolean UNIX_RemoteFileSystem::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_RemoteFileSystem::getDetailedStatus() const
{
	return UNIX_FileSystem::getDetailedStatus();
}

Boolean UNIX_RemoteFileSystem::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_RemoteFileSystem::getOperatingStatus() const
{
	return UNIX_FileSystem::getOperatingStatus();
}

Boolean UNIX_RemoteFileSystem::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_RemoteFileSystem::getPrimaryStatus() const
{
	return UNIX_FileSystem::getPrimaryStatus();
}

Boolean UNIX_RemoteFileSystem::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_RemoteFileSystem::getEnabledState() const
{
	return UNIX_FileSystem::getEnabledState();
}

Boolean UNIX_RemoteFileSystem::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_RemoteFileSystem::getOtherEnabledState() const
{
	return UNIX_FileSystem::getOtherEnabledState();
}

Boolean UNIX_RemoteFileSystem::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_RemoteFileSystem::getRequestedState() const
{
	return UNIX_FileSystem::getRequestedState();
}

Boolean UNIX_RemoteFileSystem::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_RemoteFileSystem::getEnabledDefault() const
{
	return UNIX_FileSystem::getEnabledDefault();
}

Boolean UNIX_RemoteFileSystem::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_RemoteFileSystem::getTimeOfLastStateChange() const
{
	return UNIX_FileSystem::getTimeOfLastStateChange();
}

Boolean UNIX_RemoteFileSystem::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_RemoteFileSystem::getAvailableRequestedStates() const
{
	return UNIX_FileSystem::getAvailableRequestedStates();
}

Boolean UNIX_RemoteFileSystem::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_RemoteFileSystem::getTransitioningToState() const
{
	return UNIX_FileSystem::getTransitioningToState();
}

Boolean UNIX_RemoteFileSystem::getCSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_CREATION_CLASS_NAME, getCSCreationClassName());
	return true;
}

String UNIX_RemoteFileSystem::getCSCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_RemoteFileSystem::getCSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_NAME, getCSName());
	return true;
}

String UNIX_RemoteFileSystem::getCSName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_RemoteFileSystem::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_RemoteFileSystem::getCreationClassName() const
{
	return String("UNIX_RemoteFileSystem");
}

Boolean UNIX_RemoteFileSystem::getRoot(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROOT, getRoot());
	return true;
}

String UNIX_RemoteFileSystem::getRoot() const
{
	return UNIX_FileSystem::getRoot();
}

Boolean UNIX_RemoteFileSystem::getBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLOCK_SIZE, getBlockSize());
	return true;
}

Uint64 UNIX_RemoteFileSystem::getBlockSize() const
{
	return UNIX_FileSystem::getBlockSize();
}

Boolean UNIX_RemoteFileSystem::getFileSystemSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILE_SYSTEM_SIZE, getFileSystemSize());
	return true;
}

Uint64 UNIX_RemoteFileSystem::getFileSystemSize() const
{
	return UNIX_FileSystem::getFileSystemSize();
}

Boolean UNIX_RemoteFileSystem::getAvailableSpace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_SPACE, getAvailableSpace());
	return true;
}

Uint64 UNIX_RemoteFileSystem::getAvailableSpace() const
{
	return UNIX_FileSystem::getAvailableSpace();
}

Boolean UNIX_RemoteFileSystem::getReadOnly(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_READ_ONLY, getReadOnly());
	return true;
}

Boolean UNIX_RemoteFileSystem::getReadOnly() const
{
	return UNIX_FileSystem::getReadOnly();
}

Boolean UNIX_RemoteFileSystem::getEncryptionMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENCRYPTION_METHOD, getEncryptionMethod());
	return true;
}

String UNIX_RemoteFileSystem::getEncryptionMethod() const
{
	return UNIX_FileSystem::getEncryptionMethod();
}

Boolean UNIX_RemoteFileSystem::getCompressionMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_METHOD, getCompressionMethod());
	return true;
}

String UNIX_RemoteFileSystem::getCompressionMethod() const
{
	return UNIX_FileSystem::getCompressionMethod();
}

Boolean UNIX_RemoteFileSystem::getCaseSensitive(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CASE_SENSITIVE, getCaseSensitive());
	return true;
}

Boolean UNIX_RemoteFileSystem::getCaseSensitive() const
{
	return UNIX_FileSystem::getCaseSensitive();
}

Boolean UNIX_RemoteFileSystem::getCasePreserved(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CASE_PRESERVED, getCasePreserved());
	return true;
}

Boolean UNIX_RemoteFileSystem::getCasePreserved() const
{
	return UNIX_FileSystem::getCasePreserved();
}

Boolean UNIX_RemoteFileSystem::getCodeSet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CODE_SET, getCodeSet());
	return true;
}

Array<Uint16> UNIX_RemoteFileSystem::getCodeSet() const
{
	return UNIX_FileSystem::getCodeSet();

}

Boolean UNIX_RemoteFileSystem::getMaxFileNameLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_FILE_NAME_LENGTH, getMaxFileNameLength());
	return true;
}

Uint32 UNIX_RemoteFileSystem::getMaxFileNameLength() const
{
	return UNIX_FileSystem::getMaxFileNameLength();
}

Boolean UNIX_RemoteFileSystem::getClusterSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLUSTER_SIZE, getClusterSize());
	return true;
}

Uint32 UNIX_RemoteFileSystem::getClusterSize() const
{
	return UNIX_FileSystem::getClusterSize();
}

Boolean UNIX_RemoteFileSystem::getFileSystemType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILE_SYSTEM_TYPE, getFileSystemType());
	return true;
}

String UNIX_RemoteFileSystem::getFileSystemType() const
{
	return UNIX_FileSystem::getFileSystemType();
}

Boolean UNIX_RemoteFileSystem::getPersistenceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERSISTENCE_TYPE, getPersistenceType());
	return true;
}

Uint16 UNIX_RemoteFileSystem::getPersistenceType() const
{
	return UNIX_FileSystem::getPersistenceType();
}

Boolean UNIX_RemoteFileSystem::getOtherPersistenceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PERSISTENCE_TYPE, getOtherPersistenceType());
	return true;
}

String UNIX_RemoteFileSystem::getOtherPersistenceType() const
{
	return UNIX_FileSystem::getOtherPersistenceType();
}

Boolean UNIX_RemoteFileSystem::getNumberOfFiles(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_FILES, getNumberOfFiles());
	return true;
}

Uint64 UNIX_RemoteFileSystem::getNumberOfFiles() const
{
	return UNIX_FileSystem::getNumberOfFiles();
}



Boolean UNIX_RemoteFileSystem::initialize()
{
	return UNIX_FileSystem::initialize();
}

Boolean UNIX_RemoteFileSystem::load(int &pIndex)
{
	if (UNIX_FileSystem::load(pIndex))
	{
		if (String::equalNoCase(getFileSystemType(), "nfs"))
		{
			return true;
		}
		else { return load(++pIndex); }
	}
	return false;
}

Boolean UNIX_RemoteFileSystem::finalize()
{
	return UNIX_FileSystem::finalize();
}

Boolean UNIX_RemoteFileSystem::find(Array<CIMKeyBinding> &kbArray)
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
