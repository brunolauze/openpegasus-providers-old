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

#ifndef __UNIX_ALLOCATIONCAPABILITIES_H
#define __UNIX_ALLOCATIONCAPABILITIES_H


#include "CIM_Capabilities.h"

#include "UNIX_AllocationCapabilitiesDeps.h"


#define PROPERTY_RESOURCE_TYPE				"ResourceType"
#define PROPERTY_OTHER_RESOURCE_TYPE				"OtherResourceType"
#define PROPERTY_RESOURCE_SUB_TYPE				"ResourceSubType"
#define PROPERTY_REQUEST_TYPES_SUPPORTED				"RequestTypesSupported"
#define PROPERTY_SHARING_MODE				"SharingMode"
#define PROPERTY_SUPPORTED_ADD_STATES				"SupportedAddStates"
#define PROPERTY_SUPPORTED_REMOVE_STATES				"SupportedRemoveStates"


class UNIX_AllocationCapabilities :
	public CIM_Capabilities
{
public:

	UNIX_AllocationCapabilities();
	~UNIX_AllocationCapabilities();

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
	virtual Boolean getResourceType(CIMProperty&) const;
	virtual Uint16 getResourceType() const;
	virtual Boolean getOtherResourceType(CIMProperty&) const;
	virtual String getOtherResourceType() const;
	virtual Boolean getResourceSubType(CIMProperty&) const;
	virtual String getResourceSubType() const;
	virtual Boolean getRequestTypesSupported(CIMProperty&) const;
	virtual Uint16 getRequestTypesSupported() const;
	virtual Boolean getSharingMode(CIMProperty&) const;
	virtual Uint16 getSharingMode() const;
	virtual Boolean getSupportedAddStates(CIMProperty&) const;
	virtual Array<Uint16> getSupportedAddStates() const;
	virtual Boolean getSupportedRemoveStates(CIMProperty&) const;
	virtual Array<Uint16> getSupportedRemoveStates() const;

private:
	CIMName currentScope;

#	include "UNIX_AllocationCapabilitiesPrivate.h"


};

#endif /* UNIX_ALLOCATIONCAPABILITIES */
