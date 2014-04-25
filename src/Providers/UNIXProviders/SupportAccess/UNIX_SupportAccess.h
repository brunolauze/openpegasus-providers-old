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

#ifndef __UNIX_SUPPORTACCESS_H
#define __UNIX_SUPPORTACCESS_H


#include "CIM_ManagedElement.h"

#include "UNIX_SupportAccessDeps.h"


#define PROPERTY_SUPPORT_ACCESS_ID				"SupportAccessId"
#define PROPERTY_COMMUNICATION_INFO				"CommunicationInfo"
#define PROPERTY_COMMUNICATION_MODE				"CommunicationMode"
#define PROPERTY_LOCALE				"Locale"


class UNIX_SupportAccess :
	public CIM_ManagedElement
{
public:

	UNIX_SupportAccess();
	~UNIX_SupportAccess();

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
	virtual Boolean getSupportAccessId(CIMProperty&) const;
	virtual String getSupportAccessId() const;
	virtual Boolean getCommunicationInfo(CIMProperty&) const;
	virtual String getCommunicationInfo() const;
	virtual Boolean getCommunicationMode(CIMProperty&) const;
	virtual Uint16 getCommunicationMode() const;
	virtual Boolean getLocale(CIMProperty&) const;
	virtual String getLocale() const;

private:
	CIMName currentScope;

#	include "UNIX_SupportAccessPrivate.h"


};

#endif /* UNIX_SUPPORTACCESS */
