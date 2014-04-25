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


UNIX_File::UNIX_File(void)
{
}

UNIX_File::~UNIX_File(void)
{
}


Boolean UNIX_File::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_File::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_File::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_File::getCaption() const
{
	return String ("");
}

Boolean UNIX_File::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_File::getDescription() const
{
	return String ("");
}

Boolean UNIX_File::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_File::getElementName() const
{
	return String("File");
}

Boolean UNIX_File::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_File::getInstallDate() const
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

Boolean UNIX_File::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_File::getName() const
{
	return String ("");
}

Boolean UNIX_File::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_File::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_File::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_File::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_File::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_File::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_File::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_File::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_File::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_File::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_File::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_File::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_File::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_File::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_File::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_File::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_File::getCSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_CREATION_CLASS_NAME, getCSCreationClassName());
	return true;
}

String UNIX_File::getCSCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_File::getCSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_NAME, getCSName());
	return true;
}

String UNIX_File::getCSName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_File::getFSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FS_CREATION_CLASS_NAME, getFSCreationClassName());
	return true;
}

String UNIX_File::getFSCreationClassName() const
{
	return String("UNIX_FileSystem");
}

Boolean UNIX_File::getFSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FS_NAME, getFSName());
	return true;
}

String UNIX_File::getFSName() const
{
	return String ("");
}

Boolean UNIX_File::getLFCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_L_F_CREATION_CLASS_NAME, getLFCreationClassName());
	return true;
}

String UNIX_File::getLFCreationClassName() const
{
	return String ("");
}

Boolean UNIX_File::getLFName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_L_F_NAME, getLFName());
	return true;
}

String UNIX_File::getLFName() const
{
	return String ("");
}

Boolean UNIX_File::getUserID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_ID, getUserID());
	return true;
}

String UNIX_File::getUserID() const
{
	return String ("");
}

Boolean UNIX_File::getGroupID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GROUP_ID, getGroupID());
	return true;
}

String UNIX_File::getGroupID() const
{
	return String ("");
}

Boolean UNIX_File::getSaveText(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SAVE_TEXT, getSaveText());
	return true;
}

Boolean UNIX_File::getSaveText() const
{
	return Boolean(false);
}

Boolean UNIX_File::getLinkCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LINK_COUNT, getLinkCount());
	return true;
}

Uint64 UNIX_File::getLinkCount() const
{
	return Uint64(0);
}

Boolean UNIX_File::getFileInodeNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILE_INODE_NUMBER, getFileInodeNumber());
	return true;
}

String UNIX_File::getFileInodeNumber() const
{
	return String ("");
}

Boolean UNIX_File::getSetUid(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SET_UID, getSetUid());
	return true;
}

Boolean UNIX_File::getSetUid() const
{
	return Boolean(false);
}

Boolean UNIX_File::getSetGid(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SET_GID, getSetGid());
	return true;
}

Boolean UNIX_File::getSetGid() const
{
	return Boolean(false);
}

Boolean UNIX_File::getLastModifiedInode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_MODIFIED_INODE, getLastModifiedInode());
	return true;
}

CIMDateTime UNIX_File::getLastModifiedInode() const
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

Boolean UNIX_File::getLinkMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LINK_MAX, getLinkMax());
	return true;
}

Uint64 UNIX_File::getLinkMax() const
{
	return Uint64(0);
}

Boolean UNIX_File::getNameMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME_MAX, getNameMax());
	return true;
}

Uint64 UNIX_File::getNameMax() const
{
	return Uint64(0);
}

Boolean UNIX_File::getPathMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PATH_MAX, getPathMax());
	return true;
}

Uint64 UNIX_File::getPathMax() const
{
	return Uint64(0);
}

Boolean UNIX_File::getPosixChownRestricted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSIX_CHOWN_RESTRICTED, getPosixChownRestricted());
	return true;
}

Uint64 UNIX_File::getPosixChownRestricted() const
{
	return Uint64(0);
}

Boolean UNIX_File::getPosixNoTrunc(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSIX_NO_TRUNC, getPosixNoTrunc());
	return true;
}

Uint64 UNIX_File::getPosixNoTrunc() const
{
	return Uint64(0);
}

Boolean UNIX_File::getPosixAsyncIo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSIX_ASYNC_IO, getPosixAsyncIo());
	return true;
}

Uint64 UNIX_File::getPosixAsyncIo() const
{
	return Uint64(0);
}

Boolean UNIX_File::getPosixPrioIo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSIX_PRIO_IO, getPosixPrioIo());
	return true;
}

Uint64 UNIX_File::getPosixPrioIo() const
{
	return Uint64(0);
}

Boolean UNIX_File::getPosixSyncIo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSIX_SYNC_IO, getPosixSyncIo());
	return true;
}

Uint64 UNIX_File::getPosixSyncIo() const
{
	return Uint64(0);
}



Boolean UNIX_File::initialize()
{
	return false;
}

Boolean UNIX_File::load(int &pIndex)
{
	return false;
}

Boolean UNIX_File::finalize()
{
	return false;
}

Boolean UNIX_File::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String cSCreationClassNameKey;
	String cSNameKey;
	String fSCreationClassNameKey;
	String fSNameKey;
	String lFCreationClassNameKey;
	String lFNameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_CS_CREATION_CLASS_NAME)) cSCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CS_NAME)) cSNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_FS_CREATION_CLASS_NAME)) fSCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_FS_NAME)) fSNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_L_F_CREATION_CLASS_NAME)) lFCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_L_F_NAME)) lFNameKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
