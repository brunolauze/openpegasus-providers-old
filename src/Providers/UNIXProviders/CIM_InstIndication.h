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

#ifndef __CIM_INSTINDICATION_H
#define __CIM_INSTINDICATION_H


#include "CIM_Indication.h"


#define PROPERTY_SOURCE_INSTANCE				"SourceInstance"
#define PROPERTY_SOURCE_INSTANCE_MODEL_PATH				"SourceInstanceModelPath"
#define PROPERTY_SOURCE_INSTANCE_HOST				"SourceInstanceHost"


class CIM_InstIndication :
	public CIM_Indication
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean finalize()=0;
	virtual Boolean find(Array<CIMKeyBinding>&)=0;
	virtual Boolean validateKey(CIMKeyBinding&) const=0;
	virtual void setScope(CIMName)=0;

	virtual Boolean getSourceInstance(CIMProperty&) const=0;
	virtual String getSourceInstance() const=0;
	virtual Boolean getSourceInstanceModelPath(CIMProperty&) const=0;
	virtual String getSourceInstanceModelPath() const=0;
	virtual Boolean getSourceInstanceHost(CIMProperty&) const=0;
	virtual String getSourceInstanceHost() const=0;

private:

};

#endif /* CIM_INSTINDICATION */
