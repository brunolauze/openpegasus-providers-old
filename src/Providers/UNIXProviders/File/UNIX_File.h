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

#ifndef __UNIX_FILE_H
#define __UNIX_FILE_H


#include "CIM_LogicalElement.h"

#include "UNIX_FileDeps.h"


#define PROPERTY_CS_CREATION_CLASS_NAME				"CSCreationClassName"
#define PROPERTY_CS_NAME				"CSName"
#define PROPERTY_FS_CREATION_CLASS_NAME				"FSCreationClassName"
#define PROPERTY_FS_NAME				"FSName"
#define PROPERTY_L_F_CREATION_CLASS_NAME				"LFCreationClassName"
#define PROPERTY_L_F_NAME				"LFName"
#define PROPERTY_USER_ID				"UserID"
#define PROPERTY_GROUP_ID				"GroupID"
#define PROPERTY_SAVE_TEXT				"SaveText"
#define PROPERTY_LINK_COUNT				"LinkCount"
#define PROPERTY_FILE_INODE_NUMBER				"FileInodeNumber"
#define PROPERTY_SET_UID				"SetUid"
#define PROPERTY_SET_GID				"SetGid"
#define PROPERTY_LAST_MODIFIED_INODE				"LastModifiedInode"
#define PROPERTY_LINK_MAX				"LinkMax"
#define PROPERTY_NAME_MAX				"NameMax"
#define PROPERTY_PATH_MAX				"PathMax"
#define PROPERTY_POSIX_CHOWN_RESTRICTED				"PosixChownRestricted"
#define PROPERTY_POSIX_NO_TRUNC				"PosixNoTrunc"
#define PROPERTY_POSIX_ASYNC_IO				"PosixAsyncIo"
#define PROPERTY_POSIX_PRIO_IO				"PosixPrioIo"
#define PROPERTY_POSIX_SYNC_IO				"PosixSyncIo"


class UNIX_File :
	public CIM_LogicalElement
{
public:

	UNIX_File();
	~UNIX_File();

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
	virtual Boolean getCSCreationClassName(CIMProperty&) const;
	virtual String getCSCreationClassName() const;
	virtual Boolean getCSName(CIMProperty&) const;
	virtual String getCSName() const;
	virtual Boolean getFSCreationClassName(CIMProperty&) const;
	virtual String getFSCreationClassName() const;
	virtual Boolean getFSName(CIMProperty&) const;
	virtual String getFSName() const;
	virtual Boolean getLFCreationClassName(CIMProperty&) const;
	virtual String getLFCreationClassName() const;
	virtual Boolean getLFName(CIMProperty&) const;
	virtual String getLFName() const;
	virtual Boolean getUserID(CIMProperty&) const;
	virtual String getUserID() const;
	virtual Boolean getGroupID(CIMProperty&) const;
	virtual String getGroupID() const;
	virtual Boolean getSaveText(CIMProperty&) const;
	virtual Boolean getSaveText() const;
	virtual Boolean getLinkCount(CIMProperty&) const;
	virtual Uint64 getLinkCount() const;
	virtual Boolean getFileInodeNumber(CIMProperty&) const;
	virtual String getFileInodeNumber() const;
	virtual Boolean getSetUid(CIMProperty&) const;
	virtual Boolean getSetUid() const;
	virtual Boolean getSetGid(CIMProperty&) const;
	virtual Boolean getSetGid() const;
	virtual Boolean getLastModifiedInode(CIMProperty&) const;
	virtual CIMDateTime getLastModifiedInode() const;
	virtual Boolean getLinkMax(CIMProperty&) const;
	virtual Uint64 getLinkMax() const;
	virtual Boolean getNameMax(CIMProperty&) const;
	virtual Uint64 getNameMax() const;
	virtual Boolean getPathMax(CIMProperty&) const;
	virtual Uint64 getPathMax() const;
	virtual Boolean getPosixChownRestricted(CIMProperty&) const;
	virtual Uint64 getPosixChownRestricted() const;
	virtual Boolean getPosixNoTrunc(CIMProperty&) const;
	virtual Uint64 getPosixNoTrunc() const;
	virtual Boolean getPosixAsyncIo(CIMProperty&) const;
	virtual Uint64 getPosixAsyncIo() const;
	virtual Boolean getPosixPrioIo(CIMProperty&) const;
	virtual Uint64 getPosixPrioIo() const;
	virtual Boolean getPosixSyncIo(CIMProperty&) const;
	virtual Uint64 getPosixSyncIo() const;

private:
	CIMName currentScope;

#	include "UNIX_FilePrivate.h"


};

#endif /* UNIX_FILE */
