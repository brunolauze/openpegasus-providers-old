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

#ifndef __CIM_MEMORY_H
#define __CIM_MEMORY_H


#include "CIM_StorageExtent.h"


#define PROPERTY_VOLATILE				"Volatile"
#define PROPERTY_STARTING_ADDRESS				"StartingAddress"
#define PROPERTY_ENDING_ADDRESS				"EndingAddress"
#define PROPERTY_ERROR_INFO				"ErrorInfo"
#define PROPERTY_OTHER_ERROR_DESCRIPTION				"OtherErrorDescription"
#define PROPERTY_CORRECTABLE_ERROR				"CorrectableError"
#define PROPERTY_ERROR_TIME				"ErrorTime"
#define PROPERTY_ERROR_ACCESS				"ErrorAccess"
#define PROPERTY_ERROR_TRANSFER_SIZE				"ErrorTransferSize"
#define PROPERTY_ERROR_DATA				"ErrorData"
#define PROPERTY_ERROR_DATA_ORDER				"ErrorDataOrder"
#define PROPERTY_ERROR_ADDRESS				"ErrorAddress"
#define PROPERTY_SYSTEM_LEVEL_ADDRESS				"SystemLevelAddress"
#define PROPERTY_ERROR_RESOLUTION				"ErrorResolution"
#define PROPERTY_ADDITIONAL_ERROR_DATA				"AdditionalErrorData"


class CIM_Memory :
	public CIM_StorageExtent
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean finalize()=0;
	virtual Boolean find(Array<CIMKeyBinding>&)=0;
	virtual Boolean validateKey(CIMKeyBinding&) const=0;
	virtual void setScope(CIMName)=0;

	virtual Boolean getVolatile(CIMProperty&) const=0;
	virtual Boolean getVolatile() const=0;
	virtual Boolean getErrorMethodology(CIMProperty&) const=0;
	virtual String getErrorMethodology() const=0;
	virtual Boolean getStartingAddress(CIMProperty&) const=0;
	virtual Uint64 getStartingAddress() const=0;
	virtual Boolean getEndingAddress(CIMProperty&) const=0;
	virtual Uint64 getEndingAddress() const=0;
	virtual Boolean getErrorInfo(CIMProperty&) const=0;
	virtual Uint16 getErrorInfo() const=0;
	virtual Boolean getOtherErrorDescription(CIMProperty&) const=0;
	virtual String getOtherErrorDescription() const=0;
	virtual Boolean getCorrectableError(CIMProperty&) const=0;
	virtual Boolean getCorrectableError() const=0;
	virtual Boolean getErrorTime(CIMProperty&) const=0;
	virtual CIMDateTime getErrorTime() const=0;
	virtual Boolean getErrorAccess(CIMProperty&) const=0;
	virtual Uint16 getErrorAccess() const=0;
	virtual Boolean getErrorTransferSize(CIMProperty&) const=0;
	virtual Uint32 getErrorTransferSize() const=0;
	virtual Boolean getErrorData(CIMProperty&) const=0;
	virtual Array<Uint8> getErrorData() const=0;
	virtual Boolean getErrorDataOrder(CIMProperty&) const=0;
	virtual Uint16 getErrorDataOrder() const=0;
	virtual Boolean getErrorAddress(CIMProperty&) const=0;
	virtual Uint64 getErrorAddress() const=0;
	virtual Boolean getSystemLevelAddress(CIMProperty&) const=0;
	virtual Boolean getSystemLevelAddress() const=0;
	virtual Boolean getErrorResolution(CIMProperty&) const=0;
	virtual Uint64 getErrorResolution() const=0;
	virtual Boolean getAdditionalErrorData(CIMProperty&) const=0;
	virtual Array<Uint8> getAdditionalErrorData() const=0;

private:

};

#endif /* CIM_MEMORY */
