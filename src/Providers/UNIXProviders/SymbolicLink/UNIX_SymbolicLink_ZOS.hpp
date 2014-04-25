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


UNIX_SymbolicLink::UNIX_SymbolicLink(void)
{
}

UNIX_SymbolicLink::~UNIX_SymbolicLink(void)
{
}


Boolean UNIX_SymbolicLink::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SymbolicLink::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_SymbolicLink::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SymbolicLink::getCaption() const
{
	return String ("");
}

Boolean UNIX_SymbolicLink::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SymbolicLink::getDescription() const
{
	return String ("");
}

Boolean UNIX_SymbolicLink::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SymbolicLink::getElementName() const
{
	return String("SymbolicLink");
}

Boolean UNIX_SymbolicLink::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_SymbolicLink::getInstallDate() const
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

Boolean UNIX_SymbolicLink::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_SymbolicLink::getName() const
{
	return String ("");
}

Boolean UNIX_SymbolicLink::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_SymbolicLink::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_SymbolicLink::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_SymbolicLink::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_SymbolicLink::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_SymbolicLink::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_SymbolicLink::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_SymbolicLink::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_SymbolicLink::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_SymbolicLink::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_SymbolicLink::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_SymbolicLink::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_SymbolicLink::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_SymbolicLink::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_SymbolicLink::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_SymbolicLink::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_SymbolicLink::getCSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_CREATION_CLASS_NAME, getCSCreationClassName());
	return true;
}

String UNIX_SymbolicLink::getCSCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_SymbolicLink::getCSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_NAME, getCSName());
	return true;
}

String UNIX_SymbolicLink::getCSName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_SymbolicLink::getFSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FS_CREATION_CLASS_NAME, getFSCreationClassName());
	return true;
}

String UNIX_SymbolicLink::getFSCreationClassName() const
{
	return String("UNIX_FileSystem");
}

Boolean UNIX_SymbolicLink::getFSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FS_NAME, getFSName());
	return true;
}

String UNIX_SymbolicLink::getFSName() const
{
	return String ("");
}

Boolean UNIX_SymbolicLink::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_SymbolicLink::getCreationClassName() const
{
	return String("UNIX_SymbolicLink");
}

Boolean UNIX_SymbolicLink::getFileSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILE_SIZE, getFileSize());
	return true;
}

Uint64 UNIX_SymbolicLink::getFileSize() const
{
	return Uint64(0);
}

Boolean UNIX_SymbolicLink::getCreationDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_DATE, getCreationDate());
	return true;
}

CIMDateTime UNIX_SymbolicLink::getCreationDate() const
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

Boolean UNIX_SymbolicLink::getLastModified(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_MODIFIED, getLastModified());
	return true;
}

CIMDateTime UNIX_SymbolicLink::getLastModified() const
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

Boolean UNIX_SymbolicLink::getLastAccessed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ACCESSED, getLastAccessed());
	return true;
}

CIMDateTime UNIX_SymbolicLink::getLastAccessed() const
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

Boolean UNIX_SymbolicLink::getReadable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_READABLE, getReadable());
	return true;
}

Boolean UNIX_SymbolicLink::getReadable() const
{
	return Boolean(false);
}

Boolean UNIX_SymbolicLink::getWriteable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WRITEABLE, getWriteable());
	return true;
}

Boolean UNIX_SymbolicLink::getWriteable() const
{
	return Boolean(false);
}

Boolean UNIX_SymbolicLink::getExecutable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXECUTABLE, getExecutable());
	return true;
}

Boolean UNIX_SymbolicLink::getExecutable() const
{
	return Boolean(false);
}

Boolean UNIX_SymbolicLink::getCompressionMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_METHOD, getCompressionMethod());
	return true;
}

String UNIX_SymbolicLink::getCompressionMethod() const
{
	return String ("");
}

Boolean UNIX_SymbolicLink::getEncryptionMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENCRYPTION_METHOD, getEncryptionMethod());
	return true;
}

String UNIX_SymbolicLink::getEncryptionMethod() const
{
	return String ("");
}

Boolean UNIX_SymbolicLink::getInUseCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IN_USE_COUNT, getInUseCount());
	return true;
}

Uint64 UNIX_SymbolicLink::getInUseCount() const
{
	return Uint64(0);
}

Boolean UNIX_SymbolicLink::getTargetFile(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TARGET_FILE, getTargetFile());
	return true;
}

String UNIX_SymbolicLink::getTargetFile() const
{
	return String ("");
}



Boolean UNIX_SymbolicLink::initialize()
{
	return false;
}

Boolean UNIX_SymbolicLink::load(int &pIndex)
{
	return false;
}

Boolean UNIX_SymbolicLink::finalize()
{
	return false;
}

Boolean UNIX_SymbolicLink::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String cSCreationClassNameKey;
	String cSNameKey;
	String fSCreationClassNameKey;
	String fSNameKey;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_CS_CREATION_CLASS_NAME)) cSCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CS_NAME)) cSNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_FS_CREATION_CLASS_NAME)) fSCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_FS_NAME)) fSNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
