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

#ifndef __UNIX_INSTCREATION_H
#define __UNIX_INSTCREATION_H


#include "CIM_InstIndication.h"

#include "UNIX_InstCreationDeps.h"




class UNIX_InstCreation :
	public CIM_InstIndication
{
public:

	UNIX_InstCreation();
	~UNIX_InstCreation();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean finalize();
	virtual Boolean find(Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);

	virtual Boolean getIndicationIdentifier(CIMProperty&) const;
	virtual String getIndicationIdentifier() const;
	virtual Boolean getCorrelatedIndications(CIMProperty&) const;
	virtual Array<String> getCorrelatedIndications() const;
	virtual Boolean getIndicationTime(CIMProperty&) const;
	virtual CIMDateTime getIndicationTime() const;
	virtual Boolean getPerceivedSeverity(CIMProperty&) const;
	virtual Uint16 getPerceivedSeverity() const;
	virtual Boolean getOtherSeverity(CIMProperty&) const;
	virtual String getOtherSeverity() const;
	virtual Boolean getIndicationFilterName(CIMProperty&) const;
	virtual String getIndicationFilterName() const;
	virtual Boolean getSequenceContext(CIMProperty&) const;
	virtual String getSequenceContext() const;
	virtual Boolean getSequenceNumber(CIMProperty&) const;
	virtual Sint64 getSequenceNumber() const;
	virtual Boolean getSourceInstance(CIMProperty&) const;
	virtual String getSourceInstance() const;
	virtual Boolean getSourceInstanceModelPath(CIMProperty&) const;
	virtual String getSourceInstanceModelPath() const;
	virtual Boolean getSourceInstanceHost(CIMProperty&) const;
	virtual String getSourceInstanceHost() const;

private:
	CIMName currentScope;

#	include "UNIX_InstCreationPrivate.h"


};

#endif /* UNIX_INSTCREATION */
