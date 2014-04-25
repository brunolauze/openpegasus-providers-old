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

#ifndef __CIM_LOGICALFILE_H
#define __CIM_LOGICALFILE_H


#include "CIM_LogicalElement.h"


#define PROPERTY_CS_CREATION_CLASS_NAME				"CSCreationClassName"
#define PROPERTY_CS_NAME				"CSName"
#define PROPERTY_FS_CREATION_CLASS_NAME				"FSCreationClassName"
#define PROPERTY_FS_NAME				"FSName"
#define PROPERTY_CREATION_CLASS_NAME				"CreationClassName"
#define PROPERTY_FILE_SIZE				"FileSize"
#define PROPERTY_CREATION_DATE				"CreationDate"
#define PROPERTY_LAST_MODIFIED				"LastModified"
#define PROPERTY_LAST_ACCESSED				"LastAccessed"
#define PROPERTY_READABLE				"Readable"
#define PROPERTY_WRITEABLE				"Writeable"
#define PROPERTY_EXECUTABLE				"Executable"
#define PROPERTY_COMPRESSION_METHOD				"CompressionMethod"
#define PROPERTY_ENCRYPTION_METHOD				"EncryptionMethod"
#define PROPERTY_IN_USE_COUNT				"InUseCount"


class CIM_LogicalFile :
	public CIM_LogicalElement
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean finalize()=0;
	virtual Boolean find(Array<CIMKeyBinding>&)=0;
	virtual Boolean validateKey(CIMKeyBinding&) const=0;
	virtual void setScope(CIMName)=0;

	virtual Boolean getCSCreationClassName(CIMProperty&) const=0;
	virtual String getCSCreationClassName() const=0;
	virtual Boolean getCSName(CIMProperty&) const=0;
	virtual String getCSName() const=0;
	virtual Boolean getFSCreationClassName(CIMProperty&) const=0;
	virtual String getFSCreationClassName() const=0;
	virtual Boolean getFSName(CIMProperty&) const=0;
	virtual String getFSName() const=0;
	virtual Boolean getCreationClassName(CIMProperty&) const=0;
	virtual String getCreationClassName() const=0;
	virtual Boolean getName(CIMProperty&) const=0;
	virtual String getName() const=0;
	virtual Boolean getFileSize(CIMProperty&) const=0;
	virtual Uint64 getFileSize() const=0;
	virtual Boolean getCreationDate(CIMProperty&) const=0;
	virtual CIMDateTime getCreationDate() const=0;
	virtual Boolean getLastModified(CIMProperty&) const=0;
	virtual CIMDateTime getLastModified() const=0;
	virtual Boolean getLastAccessed(CIMProperty&) const=0;
	virtual CIMDateTime getLastAccessed() const=0;
	virtual Boolean getReadable(CIMProperty&) const=0;
	virtual Boolean getReadable() const=0;
	virtual Boolean getWriteable(CIMProperty&) const=0;
	virtual Boolean getWriteable() const=0;
	virtual Boolean getExecutable(CIMProperty&) const=0;
	virtual Boolean getExecutable() const=0;
	virtual Boolean getCompressionMethod(CIMProperty&) const=0;
	virtual String getCompressionMethod() const=0;
	virtual Boolean getEncryptionMethod(CIMProperty&) const=0;
	virtual String getEncryptionMethod() const=0;
	virtual Boolean getInUseCount(CIMProperty&) const=0;
	virtual Uint64 getInUseCount() const=0;

private:

};

#endif /* CIM_LOGICALFILE */
