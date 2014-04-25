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

#ifndef __CIM_MEDIAPARTITION_H
#define __CIM_MEDIAPARTITION_H


#include "CIM_StorageExtent.h"


#define PROPERTY_BOOTABLE				"Bootable"
#define PROPERTY_ALLOCATABLE				"Allocatable"
#define PROPERTY_SIGNATURE				"Signature"
#define PROPERTY_SIGNATURE_ALGORITHM				"SignatureAlgorithm"
#define PROPERTY_SIGNATURE_STATE				"SignatureState"
#define PROPERTY_EXTENDABLE				"Extendable"


class CIM_MediaPartition :
	public CIM_StorageExtent
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean finalize()=0;
	virtual Boolean find(Array<CIMKeyBinding>&)=0;
	virtual Boolean validateKey(CIMKeyBinding&) const=0;
	virtual void setScope(CIMName)=0;

	virtual Boolean getBootable(CIMProperty&) const=0;
	virtual Boolean getBootable() const=0;
	virtual Boolean getAllocatable(CIMProperty&) const=0;
	virtual Boolean getAllocatable() const=0;
	virtual Boolean getSignature(CIMProperty&) const=0;
	virtual String getSignature() const=0;
	virtual Boolean getSignatureAlgorithm(CIMProperty&) const=0;
	virtual String getSignatureAlgorithm() const=0;
	virtual Boolean getSignatureState(CIMProperty&) const=0;
	virtual String getSignatureState() const=0;
	virtual Boolean getExtendable(CIMProperty&) const=0;
	virtual Boolean getExtendable() const=0;

private:

};

#endif /* CIM_MEDIAPARTITION */
