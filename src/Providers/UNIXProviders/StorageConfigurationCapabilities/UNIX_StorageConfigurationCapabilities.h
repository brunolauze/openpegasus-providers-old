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

#ifndef __UNIX_STORAGECONFIGURATIONCAPABILITIES_H
#define __UNIX_STORAGECONFIGURATIONCAPABILITIES_H


#include "CIM_Capabilities.h"

#include "UNIX_StorageConfigurationCapabilitiesDeps.h"


#define PROPERTY_SUPPORTED_ASYNCHRONOUS_ACTIONS				"SupportedAsynchronousActions"
#define PROPERTY_SUPPORTED_SYNCHRONOUS_ACTIONS				"SupportedSynchronousActions"
#define PROPERTY_SUPPORTED_STORAGE_ELEMENT_TYPES				"SupportedStorageElementTypes"
#define PROPERTY_SUPPORTED_STORAGE_POOL_FEATURES				"SupportedStoragePoolFeatures"
#define PROPERTY_SUPPORTED_STORAGE_ELEMENT_FEATURES				"SupportedStorageElementFeatures"
#define PROPERTY_SUPPORTED_COPY_TYPES				"SupportedCopyTypes"
#define PROPERTY_INITIAL_REPLICATION_STATE				"InitialReplicationState"


class UNIX_StorageConfigurationCapabilities :
	public CIM_Capabilities
{
public:

	UNIX_StorageConfigurationCapabilities();
	~UNIX_StorageConfigurationCapabilities();

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
	virtual Boolean getSupportedAsynchronousActions(CIMProperty&) const;
	virtual Array<Uint16> getSupportedAsynchronousActions() const;
	virtual Boolean getSupportedSynchronousActions(CIMProperty&) const;
	virtual Array<Uint16> getSupportedSynchronousActions() const;
	virtual Boolean getSupportedStorageElementTypes(CIMProperty&) const;
	virtual Array<Uint16> getSupportedStorageElementTypes() const;
	virtual Boolean getSupportedStoragePoolFeatures(CIMProperty&) const;
	virtual Array<Uint16> getSupportedStoragePoolFeatures() const;
	virtual Boolean getSupportedStorageElementFeatures(CIMProperty&) const;
	virtual Array<Uint16> getSupportedStorageElementFeatures() const;
	virtual Boolean getSupportedCopyTypes(CIMProperty&) const;
	virtual Array<Uint16> getSupportedCopyTypes() const;
	virtual Boolean getInitialReplicationState(CIMProperty&) const;
	virtual Uint16 getInitialReplicationState() const;

private:
	CIMName currentScope;

#	include "UNIX_StorageConfigurationCapabilitiesPrivate.h"


};

#endif /* UNIX_STORAGECONFIGURATIONCAPABILITIES */
