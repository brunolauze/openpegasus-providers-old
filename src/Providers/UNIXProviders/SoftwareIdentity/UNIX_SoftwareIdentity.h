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

#ifndef __UNIX_SOFTWAREIDENTITY_H
#define __UNIX_SOFTWAREIDENTITY_H


#include "CIM_LogicalElement.h"

#include "UNIX_SoftwareIdentityDeps.h"


#define PROPERTY_MAJOR_VERSION				"MajorVersion"
#define PROPERTY_MINOR_VERSION				"MinorVersion"
#define PROPERTY_REVISION_NUMBER				"RevisionNumber"
#define PROPERTY_BUILD_NUMBER				"BuildNumber"
#define PROPERTY_LARGE_BUILD_NUMBER				"LargeBuildNumber"
#define PROPERTY_IS_LARGE_BUILD_NUMBER				"IsLargeBuildNumber"
#define PROPERTY_VERSION_STRING				"VersionString"
#define PROPERTY_TARGET_OPERATING_SYSTEMS				"TargetOperatingSystems"
#define PROPERTY_MANUFACTURER				"Manufacturer"
#define PROPERTY_LANGUAGES				"Languages"
#define PROPERTY_CLASSIFICATIONS				"Classifications"
#define PROPERTY_CLASSIFICATION_DESCRIPTIONS				"ClassificationDescriptions"
#define PROPERTY_SERIAL_NUMBER				"SerialNumber"
#define PROPERTY_TARGET_TYPES				"TargetTypes"
#define PROPERTY_IDENTITY_INFO_VALUE				"IdentityInfoValue"
#define PROPERTY_IDENTITY_INFO_TYPE				"IdentityInfoType"
#define PROPERTY_RELEASE_DATE				"ReleaseDate"
#define PROPERTY_IS_ENTITY				"IsEntity"
#define PROPERTY_EXTENDED_RESOURCE_TYPE				"ExtendedResourceType"
#define PROPERTY_OTHER_EXTENDED_RESOURCE_TYPE_DESCRIPTION				"OtherExtendedResourceTypeDescription"
#define PROPERTY_MIN_EXTENDED_RESOURCE_TYPE_MAJOR_VERSION				"MinExtendedResourceTypeMajorVersion"
#define PROPERTY_MIN_EXTENDED_RESOURCE_TYPE_MINOR_VERSION				"MinExtendedResourceTypeMinorVersion"
#define PROPERTY_MIN_EXTENDED_RESOURCE_TYPE_REVISION_NUMBER				"MinExtendedResourceTypeRevisionNumber"
#define PROPERTY_MIN_EXTENDED_RESOURCE_TYPE_BUILD_NUMBER				"MinExtendedResourceTypeBuildNumber"
#define PROPERTY_TARGET_OS_TYPES				"TargetOSTypes"


class UNIX_SoftwareIdentity :
	public CIM_LogicalElement
{
public:

	UNIX_SoftwareIdentity();
	~UNIX_SoftwareIdentity();

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
	virtual Boolean getInstallDate(CIMProperty&) const;
	virtual CIMDateTime getInstallDate() const;
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual Boolean getOperationalStatus(CIMProperty&) const;
	virtual Array<Uint16> getOperationalStatus() const;
	virtual Boolean getStatusDescriptions(CIMProperty&) const;
	virtual Array<String> getStatusDescriptions() const;
	virtual Boolean getStatus(CIMProperty&) const;
	virtual String getStatus() const;
	virtual Boolean getHealthState(CIMProperty&) const;
	virtual Uint16 getHealthState() const;
	virtual Boolean getCommunicationStatus(CIMProperty&) const;
	virtual Uint16 getCommunicationStatus() const;
	virtual Boolean getDetailedStatus(CIMProperty&) const;
	virtual Uint16 getDetailedStatus() const;
	virtual Boolean getOperatingStatus(CIMProperty&) const;
	virtual Uint16 getOperatingStatus() const;
	virtual Boolean getPrimaryStatus(CIMProperty&) const;
	virtual Uint16 getPrimaryStatus() const;
	virtual Boolean getMajorVersion(CIMProperty&) const;
	virtual Uint16 getMajorVersion() const;
	virtual Boolean getMinorVersion(CIMProperty&) const;
	virtual Uint16 getMinorVersion() const;
	virtual Boolean getRevisionNumber(CIMProperty&) const;
	virtual Uint16 getRevisionNumber() const;
	virtual Boolean getBuildNumber(CIMProperty&) const;
	virtual Uint16 getBuildNumber() const;
	virtual Boolean getLargeBuildNumber(CIMProperty&) const;
	virtual Uint64 getLargeBuildNumber() const;
	virtual Boolean getIsLargeBuildNumber(CIMProperty&) const;
	virtual Boolean getIsLargeBuildNumber() const;
	virtual Boolean getVersionString(CIMProperty&) const;
	virtual String getVersionString() const;
	virtual Boolean getTargetOperatingSystems(CIMProperty&) const;
	virtual Array<String> getTargetOperatingSystems() const;
	virtual Boolean getManufacturer(CIMProperty&) const;
	virtual String getManufacturer() const;
	virtual Boolean getLanguages(CIMProperty&) const;
	virtual Array<String> getLanguages() const;
	virtual Boolean getClassifications(CIMProperty&) const;
	virtual Array<Uint16> getClassifications() const;
	virtual Boolean getClassificationDescriptions(CIMProperty&) const;
	virtual Array<String> getClassificationDescriptions() const;
	virtual Boolean getSerialNumber(CIMProperty&) const;
	virtual String getSerialNumber() const;
	virtual Boolean getTargetTypes(CIMProperty&) const;
	virtual Array<String> getTargetTypes() const;
	virtual Boolean getIdentityInfoValue(CIMProperty&) const;
	virtual Array<String> getIdentityInfoValue() const;
	virtual Boolean getIdentityInfoType(CIMProperty&) const;
	virtual Array<String> getIdentityInfoType() const;
	virtual Boolean getReleaseDate(CIMProperty&) const;
	virtual CIMDateTime getReleaseDate() const;
	virtual Boolean getIsEntity(CIMProperty&) const;
	virtual Boolean getIsEntity() const;
	virtual Boolean getExtendedResourceType(CIMProperty&) const;
	virtual Uint16 getExtendedResourceType() const;
	virtual Boolean getOtherExtendedResourceTypeDescription(CIMProperty&) const;
	virtual String getOtherExtendedResourceTypeDescription() const;
	virtual Boolean getMinExtendedResourceTypeMajorVersion(CIMProperty&) const;
	virtual Uint16 getMinExtendedResourceTypeMajorVersion() const;
	virtual Boolean getMinExtendedResourceTypeMinorVersion(CIMProperty&) const;
	virtual Uint16 getMinExtendedResourceTypeMinorVersion() const;
	virtual Boolean getMinExtendedResourceTypeRevisionNumber(CIMProperty&) const;
	virtual Uint16 getMinExtendedResourceTypeRevisionNumber() const;
	virtual Boolean getMinExtendedResourceTypeBuildNumber(CIMProperty&) const;
	virtual Uint16 getMinExtendedResourceTypeBuildNumber() const;
	virtual Boolean getTargetOSTypes(CIMProperty&) const;
	virtual Array<Uint16> getTargetOSTypes() const;

private:
	CIMName currentScope;

#	include "UNIX_SoftwareIdentityPrivate.h"


};

#endif /* UNIX_SOFTWAREIDENTITY */
