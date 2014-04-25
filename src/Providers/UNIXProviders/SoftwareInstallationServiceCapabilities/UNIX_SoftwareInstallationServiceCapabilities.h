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

#ifndef __UNIX_SOFTWAREINSTALLATIONSERVICECAPABILITIES_H
#define __UNIX_SOFTWAREINSTALLATIONSERVICECAPABILITIES_H


#include "CIM_Capabilities.h"

#include "UNIX_SoftwareInstallationServiceCapabilitiesDeps.h"


#define PROPERTY_SUPPORTED_ASYNCHRONOUS_ACTIONS				"SupportedAsynchronousActions"
#define PROPERTY_SUPPORTED_SYNCHRONOUS_ACTIONS				"SupportedSynchronousActions"
#define PROPERTY_SUPPORTED_TARGET_TYPES				"SupportedTargetTypes"
#define PROPERTY_SUPPORTED_EXTENDED_RESOURCE_TYPES				"SupportedExtendedResourceTypes"
#define PROPERTY_CAN_ADD_TO_COLLECTION				"CanAddToCollection"
#define PROPERTY_SUPPORTED_INSTALL_OPTIONS				"SupportedInstallOptions"
#define PROPERTY_OTHER_SUPPORTED_EXTENDED_RESOURCE_TYPE_DESCRIPTIONS				"OtherSupportedExtendedResourceTypeDescriptions"
#define PROPERTY_SUPPORTED_EXTENDED_RESOURCE_TYPES_MAJOR_VERSIONS				"SupportedExtendedResourceTypesMajorVersions"
#define PROPERTY_SUPPORTED_EXTENDED_RESOURCE_TYPES_MINOR_VERSIONS				"SupportedExtendedResourceTypesMinorVersions"
#define PROPERTY_SUPPORTED_EXTENDED_RESOURCE_TYPES_REVISION_NUMBERS				"SupportedExtendedResourceTypesRevisionNumbers"
#define PROPERTY_SUPPORTED_EXTENDED_RESOURCE_TYPES_BUILD_NUMBERS				"SupportedExtendedResourceTypesBuildNumbers"
#define PROPERTY_SUPPORTED_U_R_I_SCHEMES				"SupportedURISchemes"


class UNIX_SoftwareInstallationServiceCapabilities :
	public CIM_Capabilities
{
public:

	UNIX_SoftwareInstallationServiceCapabilities();
	~UNIX_SoftwareInstallationServiceCapabilities();

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
	virtual Boolean getSupportedTargetTypes(CIMProperty&) const;
	virtual Array<String> getSupportedTargetTypes() const;
	virtual Boolean getSupportedExtendedResourceTypes(CIMProperty&) const;
	virtual Array<Uint16> getSupportedExtendedResourceTypes() const;
	virtual Boolean getCanAddToCollection(CIMProperty&) const;
	virtual Boolean getCanAddToCollection() const;
	virtual Boolean getSupportedInstallOptions(CIMProperty&) const;
	virtual Array<Uint16> getSupportedInstallOptions() const;
	virtual Boolean getOtherSupportedExtendedResourceTypeDescriptions(CIMProperty&) const;
	virtual Array<String> getOtherSupportedExtendedResourceTypeDescriptions() const;
	virtual Boolean getSupportedExtendedResourceTypesMajorVersions(CIMProperty&) const;
	virtual Array<Uint16> getSupportedExtendedResourceTypesMajorVersions() const;
	virtual Boolean getSupportedExtendedResourceTypesMinorVersions(CIMProperty&) const;
	virtual Array<Uint16> getSupportedExtendedResourceTypesMinorVersions() const;
	virtual Boolean getSupportedExtendedResourceTypesRevisionNumbers(CIMProperty&) const;
	virtual Array<Uint16> getSupportedExtendedResourceTypesRevisionNumbers() const;
	virtual Boolean getSupportedExtendedResourceTypesBuildNumbers(CIMProperty&) const;
	virtual Array<Uint16> getSupportedExtendedResourceTypesBuildNumbers() const;
	virtual Boolean getSupportedURISchemes(CIMProperty&) const;
	virtual Array<Uint16> getSupportedURISchemes() const;

private:
	CIMName currentScope;

#	include "UNIX_SoftwareInstallationServiceCapabilitiesPrivate.h"


};

#endif /* UNIX_SOFTWAREINSTALLATIONSERVICECAPABILITIES */
