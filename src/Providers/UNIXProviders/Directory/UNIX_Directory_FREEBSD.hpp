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


UNIX_Directory::UNIX_Directory(void)
{
}

UNIX_Directory::~UNIX_Directory(void)
{
}


Boolean UNIX_Directory::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_Directory::getInstanceID() const
{
	return String (entryPath);
}

Boolean UNIX_Directory::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_Directory::getCaption() const
{
	return String (entryPath);
}

Boolean UNIX_Directory::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_Directory::getDescription() const
{
	return String ("");
}

Boolean UNIX_Directory::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_Directory::getElementName() const
{
	return String("Directory");
}

Boolean UNIX_Directory::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_Directory::getInstallDate() const
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

Boolean UNIX_Directory::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_Directory::getName() const
{
	return String (entryPath);
}

Boolean UNIX_Directory::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_Directory::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Directory::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_Directory::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Directory::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_Directory::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_Directory::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_Directory::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_Directory::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_Directory::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_Directory::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_Directory::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_Directory::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_Directory::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_Directory::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_Directory::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_Directory::getCSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_CREATION_CLASS_NAME, getCSCreationClassName());
	return true;
}

String UNIX_Directory::getCSCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_Directory::getCSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_NAME, getCSName());
	return true;
}

String UNIX_Directory::getCSName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_Directory::getFSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FS_CREATION_CLASS_NAME, getFSCreationClassName());
	return true;
}

String UNIX_Directory::getFSCreationClassName() const
{
	return String("UNIX_FileSystem");
}

Boolean UNIX_Directory::getFSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FS_NAME, getFSName());
	return true;
}

String UNIX_Directory::getFSName() const
{
	return String ("");
}

Boolean UNIX_Directory::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_Directory::getCreationClassName() const
{
	return String("UNIX_Directory");
}

Boolean UNIX_Directory::getFileSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILE_SIZE, getFileSize());
	return true;
}

Uint64 UNIX_Directory::getFileSize() const
{
	return Uint64(0);
}

Boolean UNIX_Directory::getCreationDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_DATE, getCreationDate());
	return true;
}

CIMDateTime UNIX_Directory::getCreationDate() const
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

Boolean UNIX_Directory::getLastModified(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_MODIFIED, getLastModified());
	return true;
}

CIMDateTime UNIX_Directory::getLastModified() const
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

Boolean UNIX_Directory::getLastAccessed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ACCESSED, getLastAccessed());
	return true;
}

CIMDateTime UNIX_Directory::getLastAccessed() const
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

Boolean UNIX_Directory::getReadable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_READABLE, getReadable());
	return true;
}

Boolean UNIX_Directory::getReadable() const
{
	return Boolean(false);
}

Boolean UNIX_Directory::getWriteable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WRITEABLE, getWriteable());
	return true;
}

Boolean UNIX_Directory::getWriteable() const
{
	return Boolean(false);
}

Boolean UNIX_Directory::getExecutable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXECUTABLE, getExecutable());
	return true;
}

Boolean UNIX_Directory::getExecutable() const
{
	return Boolean(false);
}

Boolean UNIX_Directory::getCompressionMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_METHOD, getCompressionMethod());
	return true;
}

String UNIX_Directory::getCompressionMethod() const
{
	return String ("");
}

Boolean UNIX_Directory::getEncryptionMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENCRYPTION_METHOD, getEncryptionMethod());
	return true;
}

String UNIX_Directory::getEncryptionMethod() const
{
	return String ("");
}

Boolean UNIX_Directory::getInUseCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IN_USE_COUNT, getInUseCount());
	return true;
}

Uint64 UNIX_Directory::getInUseCount() const
{
	return Uint64(1);
}

Boolean UNIX_Directory::getFileSizeBits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILE_SIZE_BITS, getFileSizeBits());
	return true;
}

Uint64 UNIX_Directory::getFileSizeBits() const
{
	return Uint64(0);
}

Boolean UNIX_Directory::initialize()
{
	entry = NULL;
	sprintf(entryPath, "%s", "/");
	return true;
}

Boolean UNIX_Directory::load(int &pIndex)
{
	return false;
}

Boolean UNIX_Directory::finalize()
{
	entry = NULL;
	if (dir)
		closedir(dir);
	return true;
}

Boolean UNIX_Directory::get(const char* path)
{
	dir = opendir(path);
	if (!dir) return false;
	while ((entry = readdir(dir)) != NULL)
	{
		if (entry->d_name[0] == '.')
		{
			break;
		}
	}
	sprintf(entryPath, "%s", path);
	return true;
}

Boolean UNIX_Directory::find(Array<CIMKeyBinding> &kbArray)
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

	return get(nameKey.getCString());
}
