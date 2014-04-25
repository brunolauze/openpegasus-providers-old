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

#ifndef __CIM_PROCESS_H
#define __CIM_PROCESS_H


#include "CIM_EnabledLogicalElement.h"


#define PROPERTY_CS_CREATION_CLASS_NAME				"CSCreationClassName"
#define PROPERTY_CS_NAME				"CSName"
#define PROPERTY_OS_CREATION_CLASS_NAME				"OSCreationClassName"
#define PROPERTY_OS_NAME				"OSName"
#define PROPERTY_CREATION_CLASS_NAME				"CreationClassName"
#define PROPERTY_HANDLE				"Handle"
#define PROPERTY_PRIORITY				"Priority"
#define PROPERTY_EXECUTION_STATE				"ExecutionState"
#define PROPERTY_OTHER_EXECUTION_DESCRIPTION				"OtherExecutionDescription"
#define PROPERTY_CREATION_DATE				"CreationDate"
#define PROPERTY_TERMINATION_DATE				"TerminationDate"
#define PROPERTY_KERNEL_MODE_TIME				"KernelModeTime"
#define PROPERTY_USER_MODE_TIME				"UserModeTime"
#define PROPERTY_WORKING_SET_SIZE				"WorkingSetSize"


class CIM_Process :
	public CIM_EnabledLogicalElement
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
	virtual Boolean getOSCreationClassName(CIMProperty&) const=0;
	virtual String getOSCreationClassName() const=0;
	virtual Boolean getOSName(CIMProperty&) const=0;
	virtual String getOSName() const=0;
	virtual Boolean getCreationClassName(CIMProperty&) const=0;
	virtual String getCreationClassName() const=0;
	virtual Boolean getHandle(CIMProperty&) const=0;
	virtual String getHandle() const=0;
	virtual Boolean getName(CIMProperty&) const=0;
	virtual String getName() const=0;
	virtual Boolean getPriority(CIMProperty&) const=0;
	virtual Uint32 getPriority() const=0;
	virtual Boolean getExecutionState(CIMProperty&) const=0;
	virtual Uint16 getExecutionState() const=0;
	virtual Boolean getOtherExecutionDescription(CIMProperty&) const=0;
	virtual String getOtherExecutionDescription() const=0;
	virtual Boolean getCreationDate(CIMProperty&) const=0;
	virtual CIMDateTime getCreationDate() const=0;
	virtual Boolean getTerminationDate(CIMProperty&) const=0;
	virtual CIMDateTime getTerminationDate() const=0;
	virtual Boolean getKernelModeTime(CIMProperty&) const=0;
	virtual Uint64 getKernelModeTime() const=0;
	virtual Boolean getUserModeTime(CIMProperty&) const=0;
	virtual Uint64 getUserModeTime() const=0;
	virtual Boolean getWorkingSetSize(CIMProperty&) const=0;
	virtual Uint64 getWorkingSetSize() const=0;

private:

};

#endif /* CIM_PROCESS */
