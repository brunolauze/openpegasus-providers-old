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

#ifndef __UNIX_INDICATIONHANDLERCIMXML_H
#define __UNIX_INDICATIONHANDLERCIMXML_H


#include "CIM_IndicationHandler.h"

#include "UNIX_IndicationHandlerCIMXMLDeps.h"




class UNIX_IndicationHandlerCIMXML :
	public CIM_IndicationHandler
{
public:

	UNIX_IndicationHandlerCIMXML();
	~UNIX_IndicationHandlerCIMXML();

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
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual Boolean getPersistenceType(CIMProperty&) const;
	virtual Uint16 getPersistenceType() const;
	virtual Boolean getOtherPersistenceType(CIMProperty&) const;
	virtual String getOtherPersistenceType() const;
	virtual Boolean getDestination(CIMProperty&) const;
	virtual String getDestination() const;
	virtual Boolean getOtherProtocol(CIMProperty&) const;
	virtual String getOtherProtocol() const;
	virtual Boolean getProtocol(CIMProperty&) const;
	virtual Uint16 getProtocol() const;
	virtual Boolean getOwner(CIMProperty&) const;
	virtual String getOwner() const;

private:
	CIMName currentScope;

#	include "UNIX_IndicationHandlerCIMXMLPrivate.h"


};

#endif /* UNIX_INDICATIONHANDLERCIMXML */
