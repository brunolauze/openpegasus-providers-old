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

#ifndef __UNIX_PROCESSSTATISTICALINFORMATION_H
#define __UNIX_PROCESSSTATISTICALINFORMATION_H


#include "CIM_StatisticalInformation.h"

#include "UNIX_ProcessStatisticalInformationDeps.h"


#define PROPERTY_CS_CREATION_CLASS_NAME				"CSCreationClassName"
#define PROPERTY_CS_NAME				"CSName"
#define PROPERTY_OS_CREATION_CLASS_NAME				"OSCreationClassName"
#define PROPERTY_OS_NAME				"OSName"
#define PROPERTY_HANDLE				"Handle"
#define PROPERTY_PROCESS_CREATION_CLASS_NAME				"ProcessCreationClassName"
#define PROPERTY_C_P_U_TIME				"CPUTime"
#define PROPERTY_REAL_TEXT				"RealText"
#define PROPERTY_REAL_DATA				"RealData"
#define PROPERTY_REAL_STACK				"RealStack"
#define PROPERTY_VIRTUAL_TEXT				"VirtualText"
#define PROPERTY_VIRTUAL_DATA				"VirtualData"
#define PROPERTY_VIRTUAL_STACK				"VirtualStack"
#define PROPERTY_VIRTUAL_MEMORY_MAPPED_FILE_SIZE				"VirtualMemoryMappedFileSize"
#define PROPERTY_VIRTUAL_SHARED_MEMORY				"VirtualSharedMemory"
#define PROPERTY_CPU_TIME_DEAD_CHILDREN				"CpuTimeDeadChildren"
#define PROPERTY_SYSTEM_TIME_DEAD_CHILDREN				"SystemTimeDeadChildren"


class UNIX_ProcessStatisticalInformation :
	public CIM_StatisticalInformation
{
public:

	UNIX_ProcessStatisticalInformation();
	~UNIX_ProcessStatisticalInformation();

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
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual Boolean getCSCreationClassName(CIMProperty&) const;
	virtual String getCSCreationClassName() const;
	virtual Boolean getCSName(CIMProperty&) const;
	virtual String getCSName() const;
	virtual Boolean getOSCreationClassName(CIMProperty&) const;
	virtual String getOSCreationClassName() const;
	virtual Boolean getOSName(CIMProperty&) const;
	virtual String getOSName() const;
	virtual Boolean getHandle(CIMProperty&) const;
	virtual String getHandle() const;
	virtual Boolean getProcessCreationClassName(CIMProperty&) const;
	virtual String getProcessCreationClassName() const;
	virtual Boolean getCPUTime(CIMProperty&) const;
	virtual Uint32 getCPUTime() const;
	virtual Boolean getRealText(CIMProperty&) const;
	virtual Uint64 getRealText() const;
	virtual Boolean getRealData(CIMProperty&) const;
	virtual Uint64 getRealData() const;
	virtual Boolean getRealStack(CIMProperty&) const;
	virtual Uint64 getRealStack() const;
	virtual Boolean getVirtualText(CIMProperty&) const;
	virtual Uint64 getVirtualText() const;
	virtual Boolean getVirtualData(CIMProperty&) const;
	virtual Uint64 getVirtualData() const;
	virtual Boolean getVirtualStack(CIMProperty&) const;
	virtual Uint64 getVirtualStack() const;
	virtual Boolean getVirtualMemoryMappedFileSize(CIMProperty&) const;
	virtual Uint64 getVirtualMemoryMappedFileSize() const;
	virtual Boolean getVirtualSharedMemory(CIMProperty&) const;
	virtual Uint64 getVirtualSharedMemory() const;
	virtual Boolean getCpuTimeDeadChildren(CIMProperty&) const;
	virtual Uint64 getCpuTimeDeadChildren() const;
	virtual Boolean getSystemTimeDeadChildren(CIMProperty&) const;
	virtual Uint64 getSystemTimeDeadChildren() const;

private:
	CIMName currentScope;

#	include "UNIX_ProcessStatisticalInformationPrivate.h"


};

#endif /* UNIX_PROCESSSTATISTICALINFORMATION */
