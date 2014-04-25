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

#ifndef __UNIX_OPAQUEMANAGEMENTDATACAPABILITIES_H
#define __UNIX_OPAQUEMANAGEMENTDATACAPABILITIES_H


#include "CIM_EnabledLogicalElementCapabilities.h"

#include "UNIX_OpaqueManagementDataCapabilitiesDeps.h"


#define PROPERTY_MAX_AVAILABLE_STORAGE				"MaxAvailableStorage"
#define PROPERTY_MAX_READ_LENGTH				"MaxReadLength"
#define PROPERTY_MAX_WRITE_LENGTH				"MaxWriteLength"
#define PROPERTY_SUPPORTED_EXPORT_U_R_I_SCHEMES				"SupportedExportURISchemes"
#define PROPERTY_SUPPORTED_IMPORT_U_R_I_SCHEMES				"SupportedImportURISchemes"
#define PROPERTY_SUPPORTED_METHODS				"SupportedMethods"
#define PROPERTY_TRUNCATION_SUPPORTED				"TruncationSupported"
#define PROPERTY_MAX_INSTANCES_SUPPORTED				"MaxInstancesSupported"


class UNIX_OpaqueManagementDataCapabilities :
	public CIM_EnabledLogicalElementCapabilities
{
public:

	UNIX_OpaqueManagementDataCapabilities();
	~UNIX_OpaqueManagementDataCapabilities();

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
	virtual Boolean getElementNameEditSupported(CIMProperty&) const;
	virtual Boolean getElementNameEditSupported() const;
	virtual Boolean getMaxElementNameLen(CIMProperty&) const;
	virtual Uint16 getMaxElementNameLen() const;
	virtual Boolean getRequestedStatesSupported(CIMProperty&) const;
	virtual Array<Uint16> getRequestedStatesSupported() const;
	virtual Boolean getElementNameMask(CIMProperty&) const;
	virtual String getElementNameMask() const;
	virtual Boolean getMaxAvailableStorage(CIMProperty&) const;
	virtual Uint64 getMaxAvailableStorage() const;
	virtual Boolean getMaxReadLength(CIMProperty&) const;
	virtual Uint64 getMaxReadLength() const;
	virtual Boolean getMaxWriteLength(CIMProperty&) const;
	virtual Uint64 getMaxWriteLength() const;
	virtual Boolean getSupportedExportURISchemes(CIMProperty&) const;
	virtual Array<Uint16> getSupportedExportURISchemes() const;
	virtual Boolean getSupportedImportURISchemes(CIMProperty&) const;
	virtual Array<Uint16> getSupportedImportURISchemes() const;
	virtual Boolean getSupportedMethods(CIMProperty&) const;
	virtual Array<Uint16> getSupportedMethods() const;
	virtual Boolean getTruncationSupported(CIMProperty&) const;
	virtual Boolean getTruncationSupported() const;
	virtual Boolean getMaxInstancesSupported(CIMProperty&) const;
	virtual Uint16 getMaxInstancesSupported() const;

private:
	CIMName currentScope;

#	include "UNIX_OpaqueManagementDataCapabilitiesPrivate.h"


};

#endif /* UNIX_OPAQUEMANAGEMENTDATACAPABILITIES */
