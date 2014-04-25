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

#ifndef __UNIX_MEMORYERROR_H
#define __UNIX_MEMORYERROR_H


#include "CIM_StorageError.h"

#include "UNIX_MemoryErrorDeps.h"


#define PROPERTY_ERROR_INFO				"ErrorInfo"
#define PROPERTY_OTHER_ERROR_DESCRIPTION				"OtherErrorDescription"
#define PROPERTY_CORRECTABLE_ERROR				"CorrectableError"
#define PROPERTY_ERROR_TIME				"ErrorTime"
#define PROPERTY_ERROR_ACCESS				"ErrorAccess"
#define PROPERTY_ERROR_TRANSFER_SIZE				"ErrorTransferSize"
#define PROPERTY_ERROR_DATA				"ErrorData"
#define PROPERTY_ERROR_DATA_ORDER				"ErrorDataOrder"
#define PROPERTY_SYSTEM_LEVEL_ADDRESS				"SystemLevelAddress"
#define PROPERTY_ERROR_RESOLUTION				"ErrorResolution"
#define PROPERTY_ADDITIONAL_ERROR_DATA				"AdditionalErrorData"


class UNIX_MemoryError :
	public CIM_StorageError
{
public:

	UNIX_MemoryError();
	~UNIX_MemoryError();

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
	virtual Boolean getSystemCreationClassName(CIMProperty&) const;
	virtual String getSystemCreationClassName() const;
	virtual Boolean getSystemName(CIMProperty&) const;
	virtual String getSystemName() const;
	virtual Boolean getDeviceCreationClassName(CIMProperty&) const;
	virtual String getDeviceCreationClassName() const;
	virtual Boolean getDeviceID(CIMProperty&) const;
	virtual String getDeviceID() const;
	virtual Boolean getStartingAddress(CIMProperty&) const;
	virtual Uint64 getStartingAddress() const;
	virtual Boolean getEndingAddress(CIMProperty&) const;
	virtual Uint64 getEndingAddress() const;
	virtual Boolean getErrorInfo(CIMProperty&) const;
	virtual Uint16 getErrorInfo() const;
	virtual Boolean getOtherErrorDescription(CIMProperty&) const;
	virtual String getOtherErrorDescription() const;
	virtual Boolean getCorrectableError(CIMProperty&) const;
	virtual Boolean getCorrectableError() const;
	virtual Boolean getErrorTime(CIMProperty&) const;
	virtual CIMDateTime getErrorTime() const;
	virtual Boolean getErrorAccess(CIMProperty&) const;
	virtual Uint16 getErrorAccess() const;
	virtual Boolean getErrorTransferSize(CIMProperty&) const;
	virtual Uint32 getErrorTransferSize() const;
	virtual Boolean getErrorData(CIMProperty&) const;
	virtual Array<Uint8> getErrorData() const;
	virtual Boolean getErrorDataOrder(CIMProperty&) const;
	virtual Uint16 getErrorDataOrder() const;
	virtual Boolean getSystemLevelAddress(CIMProperty&) const;
	virtual Boolean getSystemLevelAddress() const;
	virtual Boolean getErrorResolution(CIMProperty&) const;
	virtual Uint64 getErrorResolution() const;
	virtual Boolean getAdditionalErrorData(CIMProperty&) const;
	virtual Array<Uint8> getAdditionalErrorData() const;

private:
	CIMName currentScope;

#	include "UNIX_MemoryErrorPrivate.h"


};

#endif /* UNIX_MEMORYERROR */
