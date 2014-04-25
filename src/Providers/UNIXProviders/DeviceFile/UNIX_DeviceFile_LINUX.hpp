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


UNIX_DeviceFile::UNIX_DeviceFile(void)
{
}

UNIX_DeviceFile::~UNIX_DeviceFile(void)
{
}


Boolean UNIX_DeviceFile::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DeviceFile::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_DeviceFile::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DeviceFile::getCaption() const
{
	return String ("");
}

Boolean UNIX_DeviceFile::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DeviceFile::getDescription() const
{
	return String ("");
}

Boolean UNIX_DeviceFile::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DeviceFile::getElementName() const
{
	return String("DeviceFile");
}

Boolean UNIX_DeviceFile::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_DeviceFile::getInstallDate() const
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

Boolean UNIX_DeviceFile::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_DeviceFile::getName() const
{
	return String ("");
}

Boolean UNIX_DeviceFile::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_DeviceFile::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DeviceFile::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_DeviceFile::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_DeviceFile::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_DeviceFile::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_DeviceFile::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_DeviceFile::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_DeviceFile::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_DeviceFile::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_DeviceFile::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_DeviceFile::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_DeviceFile::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_DeviceFile::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_DeviceFile::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_DeviceFile::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_DeviceFile::getCSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_CREATION_CLASS_NAME, getCSCreationClassName());
	return true;
}

String UNIX_DeviceFile::getCSCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_DeviceFile::getCSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_NAME, getCSName());
	return true;
}

String UNIX_DeviceFile::getCSName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_DeviceFile::getFSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FS_CREATION_CLASS_NAME, getFSCreationClassName());
	return true;
}

String UNIX_DeviceFile::getFSCreationClassName() const
{
	return String("UNIX_FileSystem");
}

Boolean UNIX_DeviceFile::getFSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FS_NAME, getFSName());
	return true;
}

String UNIX_DeviceFile::getFSName() const
{
	return String ("");
}

Boolean UNIX_DeviceFile::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_DeviceFile::getCreationClassName() const
{
	return String("UNIX_DeviceFile");
}

Boolean UNIX_DeviceFile::getFileSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILE_SIZE, getFileSize());
	return true;
}

Uint64 UNIX_DeviceFile::getFileSize() const
{
	return Uint64(0);
}

Boolean UNIX_DeviceFile::getCreationDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_DATE, getCreationDate());
	return true;
}

CIMDateTime UNIX_DeviceFile::getCreationDate() const
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

Boolean UNIX_DeviceFile::getLastModified(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_MODIFIED, getLastModified());
	return true;
}

CIMDateTime UNIX_DeviceFile::getLastModified() const
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

Boolean UNIX_DeviceFile::getLastAccessed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ACCESSED, getLastAccessed());
	return true;
}

CIMDateTime UNIX_DeviceFile::getLastAccessed() const
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

Boolean UNIX_DeviceFile::getReadable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_READABLE, getReadable());
	return true;
}

Boolean UNIX_DeviceFile::getReadable() const
{
	return Boolean(false);
}

Boolean UNIX_DeviceFile::getWriteable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WRITEABLE, getWriteable());
	return true;
}

Boolean UNIX_DeviceFile::getWriteable() const
{
	return Boolean(false);
}

Boolean UNIX_DeviceFile::getExecutable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXECUTABLE, getExecutable());
	return true;
}

Boolean UNIX_DeviceFile::getExecutable() const
{
	return Boolean(false);
}

Boolean UNIX_DeviceFile::getCompressionMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_METHOD, getCompressionMethod());
	return true;
}

String UNIX_DeviceFile::getCompressionMethod() const
{
	return String ("");
}

Boolean UNIX_DeviceFile::getEncryptionMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENCRYPTION_METHOD, getEncryptionMethod());
	return true;
}

String UNIX_DeviceFile::getEncryptionMethod() const
{
	return String ("");
}

Boolean UNIX_DeviceFile::getInUseCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IN_USE_COUNT, getInUseCount());
	return true;
}

Uint64 UNIX_DeviceFile::getInUseCount() const
{
	return Uint64(0);
}

Boolean UNIX_DeviceFile::getDeviceFileType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_FILE_TYPE, getDeviceFileType());
	return true;
}

Uint16 UNIX_DeviceFile::getDeviceFileType() const
{
	return Uint16(0);
}

Boolean UNIX_DeviceFile::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_DeviceFile::getOtherTypeDescription() const
{
	return String ("");
}

Boolean UNIX_DeviceFile::getDeviceId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceId());
	return true;
}

String UNIX_DeviceFile::getDeviceId() const
{
	return String ("");
}

Boolean UNIX_DeviceFile::getDeviceDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_DESCRIPTION, getDeviceDescription());
	return true;
}

String UNIX_DeviceFile::getDeviceDescription() const
{
	return String ("");
}

Boolean UNIX_DeviceFile::getDeviceMajor(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_MAJOR, getDeviceMajor());
	return true;
}

String UNIX_DeviceFile::getDeviceMajor() const
{
	return String ("");
}

Boolean UNIX_DeviceFile::getDeviceMinor(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_MINOR, getDeviceMinor());
	return true;
}

String UNIX_DeviceFile::getDeviceMinor() const
{
	return String ("");
}



Boolean UNIX_DeviceFile::initialize()
{
	return false;
}

Boolean UNIX_DeviceFile::load(int &pIndex)
{
	return false;
}

Boolean UNIX_DeviceFile::finalize()
{
	return false;
}

Boolean UNIX_DeviceFile::find(Array<CIMKeyBinding> &kbArray)
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
