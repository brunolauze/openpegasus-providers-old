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


UNIX_LocalFileSystem::UNIX_LocalFileSystem(void)
{
}

UNIX_LocalFileSystem::~UNIX_LocalFileSystem(void)
{
}


Boolean UNIX_LocalFileSystem::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_LocalFileSystem::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_LocalFileSystem::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_LocalFileSystem::getCaption() const
{
	return String ("");
}

Boolean UNIX_LocalFileSystem::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_LocalFileSystem::getDescription() const
{
	return String ("");
}

Boolean UNIX_LocalFileSystem::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_LocalFileSystem::getElementName() const
{
	return String("LocalFileSystem");
}

Boolean UNIX_LocalFileSystem::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_LocalFileSystem::getInstallDate() const
{
	struct tm* clock;			// create a time structure
	time_t val = time(NULL);
	clock = gmtime(&(val));	// Get the last modified time and put it into the time structure
	return CIMDateTime(
		clock->tm_year + 1900,
		clock->tm_mon + 1,
		clock->tm_mday,
		clock->tm_hour,
		clock->tm_min,
		clock->tm_sec,
		0,0,
		clock->tm_gmtoff);
}

Boolean UNIX_LocalFileSystem::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_LocalFileSystem::getName() const
{
	return String ("");
}

Boolean UNIX_LocalFileSystem::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_LocalFileSystem::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_LocalFileSystem::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_LocalFileSystem::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_LocalFileSystem::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_LocalFileSystem::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_LocalFileSystem::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_LocalFileSystem::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_LocalFileSystem::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_LocalFileSystem::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_LocalFileSystem::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_LocalFileSystem::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_LocalFileSystem::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_LocalFileSystem::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_LocalFileSystem::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_LocalFileSystem::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_LocalFileSystem::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_LocalFileSystem::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_LocalFileSystem::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_LocalFileSystem::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_LocalFileSystem::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_LocalFileSystem::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_LocalFileSystem::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_LocalFileSystem::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_LocalFileSystem::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_LocalFileSystem::getTimeOfLastStateChange() const
{
	struct tm* clock;			// create a time structure
	time_t val = time(NULL);
	clock = gmtime(&(val));	// Get the last modified time and put it into the time structure
	return CIMDateTime(
		clock->tm_year + 1900,
		clock->tm_mon + 1,
		clock->tm_mday,
		clock->tm_hour,
		clock->tm_min,
		clock->tm_sec,
		0,0,
		clock->tm_gmtoff);
}

Boolean UNIX_LocalFileSystem::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_LocalFileSystem::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_LocalFileSystem::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_LocalFileSystem::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_LocalFileSystem::getCSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_CREATION_CLASS_NAME, getCSCreationClassName());
	return true;
}

String UNIX_LocalFileSystem::getCSCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_LocalFileSystem::getCSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_NAME, getCSName());
	return true;
}

String UNIX_LocalFileSystem::getCSName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_LocalFileSystem::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_LocalFileSystem::getCreationClassName() const
{
	return String("UNIX_LocalFileSystem");
}

Boolean UNIX_LocalFileSystem::getRoot(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROOT, getRoot());
	return true;
}

String UNIX_LocalFileSystem::getRoot() const
{
	return String ("");
}

Boolean UNIX_LocalFileSystem::getBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BLOCK_SIZE, getBlockSize());
	return true;
}

Uint64 UNIX_LocalFileSystem::getBlockSize() const
{
	return Uint64(0);
}

Boolean UNIX_LocalFileSystem::getFileSystemSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILE_SYSTEM_SIZE, getFileSystemSize());
	return true;
}

Uint64 UNIX_LocalFileSystem::getFileSystemSize() const
{
	return Uint64(0);
}

Boolean UNIX_LocalFileSystem::getAvailableSpace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_SPACE, getAvailableSpace());
	return true;
}

Uint64 UNIX_LocalFileSystem::getAvailableSpace() const
{
	return Uint64(0);
}

Boolean UNIX_LocalFileSystem::getReadOnly(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_READ_ONLY, getReadOnly());
	return true;
}

Boolean UNIX_LocalFileSystem::getReadOnly() const
{
	return Boolean(false);
}

Boolean UNIX_LocalFileSystem::getEncryptionMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENCRYPTION_METHOD, getEncryptionMethod());
	return true;
}

String UNIX_LocalFileSystem::getEncryptionMethod() const
{
	return String ("");
}

Boolean UNIX_LocalFileSystem::getCompressionMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_METHOD, getCompressionMethod());
	return true;
}

String UNIX_LocalFileSystem::getCompressionMethod() const
{
	return String ("");
}

Boolean UNIX_LocalFileSystem::getCaseSensitive(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CASE_SENSITIVE, getCaseSensitive());
	return true;
}

Boolean UNIX_LocalFileSystem::getCaseSensitive() const
{
	return Boolean(false);
}

Boolean UNIX_LocalFileSystem::getCasePreserved(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CASE_PRESERVED, getCasePreserved());
	return true;
}

Boolean UNIX_LocalFileSystem::getCasePreserved() const
{
	return Boolean(false);
}

Boolean UNIX_LocalFileSystem::getCodeSet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CODE_SET, getCodeSet());
	return true;
}

Array<Uint16> UNIX_LocalFileSystem::getCodeSet() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_LocalFileSystem::getMaxFileNameLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_FILE_NAME_LENGTH, getMaxFileNameLength());
	return true;
}

Uint32 UNIX_LocalFileSystem::getMaxFileNameLength() const
{
	return Uint32(0);
}

Boolean UNIX_LocalFileSystem::getClusterSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLUSTER_SIZE, getClusterSize());
	return true;
}

Uint32 UNIX_LocalFileSystem::getClusterSize() const
{
	return Uint32(0);
}

Boolean UNIX_LocalFileSystem::getFileSystemType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILE_SYSTEM_TYPE, getFileSystemType());
	return true;
}

String UNIX_LocalFileSystem::getFileSystemType() const
{
	return String ("");
}

Boolean UNIX_LocalFileSystem::getPersistenceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERSISTENCE_TYPE, getPersistenceType());
	return true;
}

Uint16 UNIX_LocalFileSystem::getPersistenceType() const
{
	return Uint16(0);
}

Boolean UNIX_LocalFileSystem::getOtherPersistenceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_PERSISTENCE_TYPE, getOtherPersistenceType());
	return true;
}

String UNIX_LocalFileSystem::getOtherPersistenceType() const
{
	return String ("");
}

Boolean UNIX_LocalFileSystem::getNumberOfFiles(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_FILES, getNumberOfFiles());
	return true;
}

Uint64 UNIX_LocalFileSystem::getNumberOfFiles() const
{
	return Uint64(0);
}

Boolean UNIX_LocalFileSystem::getFreeInodes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FREE_INODES, getFreeInodes());
	return true;
}

Uint64 UNIX_LocalFileSystem::getFreeInodes() const
{
	return Uint64(0);
}

Boolean UNIX_LocalFileSystem::getTotalInodes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_INODES, getTotalInodes());
	return true;
}

Uint64 UNIX_LocalFileSystem::getTotalInodes() const
{
	return Uint64(0);
}

Boolean UNIX_LocalFileSystem::getFSReservedCapacity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FS_RESERVED_CAPACITY, getFSReservedCapacity());
	return true;
}

Uint64 UNIX_LocalFileSystem::getFSReservedCapacity() const
{
	return Uint64(0);
}



Boolean UNIX_LocalFileSystem::initialize()
{
	return false;
}

Boolean UNIX_LocalFileSystem::load(int &pIndex)
{
	return false;
}

Boolean UNIX_LocalFileSystem::finalize()
{
	return false;
}

Boolean UNIX_LocalFileSystem::find(Array<CIMKeyBinding> &kbArray)
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
