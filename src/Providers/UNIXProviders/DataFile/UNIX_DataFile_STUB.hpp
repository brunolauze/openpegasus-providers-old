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


UNIX_DataFile::UNIX_DataFile(void)
{
}

UNIX_DataFile::~UNIX_DataFile(void)
{
}


Boolean UNIX_DataFile::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DataFile::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_DataFile::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DataFile::getCaption() const
{
	return String ("");
}

Boolean UNIX_DataFile::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DataFile::getDescription() const
{
	return String ("");
}

Boolean UNIX_DataFile::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DataFile::getElementName() const
{
	return String("DataFile");
}

Boolean UNIX_DataFile::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_DataFile::getInstallDate() const
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

Boolean UNIX_DataFile::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_DataFile::getName() const
{
	return String ("");
}

Boolean UNIX_DataFile::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_DataFile::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DataFile::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_DataFile::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_DataFile::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_DataFile::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_DataFile::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_DataFile::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_DataFile::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_DataFile::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_DataFile::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_DataFile::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_DataFile::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_DataFile::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_DataFile::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_DataFile::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_DataFile::getCSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_CREATION_CLASS_NAME, getCSCreationClassName());
	return true;
}

String UNIX_DataFile::getCSCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_DataFile::getCSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_NAME, getCSName());
	return true;
}

String UNIX_DataFile::getCSName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_DataFile::getFSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FS_CREATION_CLASS_NAME, getFSCreationClassName());
	return true;
}

String UNIX_DataFile::getFSCreationClassName() const
{
	return String("UNIX_FileSystem");
}

Boolean UNIX_DataFile::getFSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FS_NAME, getFSName());
	return true;
}

String UNIX_DataFile::getFSName() const
{
	return String ("");
}

Boolean UNIX_DataFile::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_DataFile::getCreationClassName() const
{
	return String("UNIX_DataFile");
}

Boolean UNIX_DataFile::getFileSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILE_SIZE, getFileSize());
	return true;
}

Uint64 UNIX_DataFile::getFileSize() const
{
	return Uint64(0);
}

Boolean UNIX_DataFile::getCreationDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_DATE, getCreationDate());
	return true;
}

CIMDateTime UNIX_DataFile::getCreationDate() const
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

Boolean UNIX_DataFile::getLastModified(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_MODIFIED, getLastModified());
	return true;
}

CIMDateTime UNIX_DataFile::getLastModified() const
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

Boolean UNIX_DataFile::getLastAccessed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ACCESSED, getLastAccessed());
	return true;
}

CIMDateTime UNIX_DataFile::getLastAccessed() const
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

Boolean UNIX_DataFile::getReadable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_READABLE, getReadable());
	return true;
}

Boolean UNIX_DataFile::getReadable() const
{
	return Boolean(false);
}

Boolean UNIX_DataFile::getWriteable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WRITEABLE, getWriteable());
	return true;
}

Boolean UNIX_DataFile::getWriteable() const
{
	return Boolean(false);
}

Boolean UNIX_DataFile::getExecutable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXECUTABLE, getExecutable());
	return true;
}

Boolean UNIX_DataFile::getExecutable() const
{
	return Boolean(false);
}

Boolean UNIX_DataFile::getCompressionMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_METHOD, getCompressionMethod());
	return true;
}

String UNIX_DataFile::getCompressionMethod() const
{
	return String ("");
}

Boolean UNIX_DataFile::getEncryptionMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENCRYPTION_METHOD, getEncryptionMethod());
	return true;
}

String UNIX_DataFile::getEncryptionMethod() const
{
	return String ("");
}

Boolean UNIX_DataFile::getInUseCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IN_USE_COUNT, getInUseCount());
	return true;
}

Uint64 UNIX_DataFile::getInUseCount() const
{
	return Uint64(0);
}



Boolean UNIX_DataFile::initialize()
{
	return false;
}

Boolean UNIX_DataFile::load(int &pIndex)
{
	return false;
}

Boolean UNIX_DataFile::finalize()
{
	return false;
}

Boolean UNIX_DataFile::find(Array<CIMKeyBinding> &kbArray)
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
