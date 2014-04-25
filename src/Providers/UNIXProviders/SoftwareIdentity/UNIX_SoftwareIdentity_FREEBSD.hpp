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


UNIX_SoftwareIdentity::UNIX_SoftwareIdentity(void)
{
}

UNIX_SoftwareIdentity::~UNIX_SoftwareIdentity(void)
{
}


Boolean UNIX_SoftwareIdentity::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SoftwareIdentity::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_SoftwareIdentity::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SoftwareIdentity::getCaption() const
{
	return String ("");
}

Boolean UNIX_SoftwareIdentity::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SoftwareIdentity::getDescription() const
{
	return String ("");
}

Boolean UNIX_SoftwareIdentity::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SoftwareIdentity::getElementName() const
{
	return String("SoftwareIdentity");
}

Boolean UNIX_SoftwareIdentity::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_SoftwareIdentity::getInstallDate() const
{
	struct tm* clock;			// create a time structure
	time_t val = time(NULL);
	clock = gmtime(&(val));	// Get the last modified time and put it into the time structure
	return CIMDateTime(
		clock->tm_year + 1900,
		clock->tm_mon + 1,
		clock->tm_mday,
		clock->tm_hour,
		clock->tm_min,
		clock->tm_sec,
		0,0,
		clock->tm_gmtoff);
}

Boolean UNIX_SoftwareIdentity::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_SoftwareIdentity::getName() const
{
	return String ("");
}

Boolean UNIX_SoftwareIdentity::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_SoftwareIdentity::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_SoftwareIdentity::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_SoftwareIdentity::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_SoftwareIdentity::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_SoftwareIdentity::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_SoftwareIdentity::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_SoftwareIdentity::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_SoftwareIdentity::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_SoftwareIdentity::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_SoftwareIdentity::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_SoftwareIdentity::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_SoftwareIdentity::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_SoftwareIdentity::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_SoftwareIdentity::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_SoftwareIdentity::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_SoftwareIdentity::getMajorVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAJOR_VERSION, getMajorVersion());
	return true;
}

Uint16 UNIX_SoftwareIdentity::getMajorVersion() const
{
	return Uint16(0);
}

Boolean UNIX_SoftwareIdentity::getMinorVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MINOR_VERSION, getMinorVersion());
	return true;
}

Uint16 UNIX_SoftwareIdentity::getMinorVersion() const
{
	return Uint16(0);
}

Boolean UNIX_SoftwareIdentity::getRevisionNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REVISION_NUMBER, getRevisionNumber());
	return true;
}

Uint16 UNIX_SoftwareIdentity::getRevisionNumber() const
{
	return Uint16(0);
}

Boolean UNIX_SoftwareIdentity::getBuildNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUILD_NUMBER, getBuildNumber());
	return true;
}

Uint16 UNIX_SoftwareIdentity::getBuildNumber() const
{
	return Uint16(0);
}

Boolean UNIX_SoftwareIdentity::getLargeBuildNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LARGE_BUILD_NUMBER, getLargeBuildNumber());
	return true;
}

Uint64 UNIX_SoftwareIdentity::getLargeBuildNumber() const
{
	return Uint64(0);
}

Boolean UNIX_SoftwareIdentity::getIsLargeBuildNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_LARGE_BUILD_NUMBER, getIsLargeBuildNumber());
	return true;
}

Boolean UNIX_SoftwareIdentity::getIsLargeBuildNumber() const
{
	return Boolean(false);
}

Boolean UNIX_SoftwareIdentity::getVersionString(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION_STRING, getVersionString());
	return true;
}

String UNIX_SoftwareIdentity::getVersionString() const
{
	return String ("");
}

Boolean UNIX_SoftwareIdentity::getTargetOperatingSystems(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TARGET_OPERATING_SYSTEMS, getTargetOperatingSystems());
	return true;
}

Array<String> UNIX_SoftwareIdentity::getTargetOperatingSystems() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_SoftwareIdentity::getManufacturer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURER, getManufacturer());
	return true;
}

String UNIX_SoftwareIdentity::getManufacturer() const
{
	return String ("");
}

Boolean UNIX_SoftwareIdentity::getLanguages(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LANGUAGES, getLanguages());
	return true;
}

Array<String> UNIX_SoftwareIdentity::getLanguages() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_SoftwareIdentity::getClassifications(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASSIFICATIONS, getClassifications());
	return true;
}

Array<Uint16> UNIX_SoftwareIdentity::getClassifications() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_SoftwareIdentity::getClassificationDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASSIFICATION_DESCRIPTIONS, getClassificationDescriptions());
	return true;
}

Array<String> UNIX_SoftwareIdentity::getClassificationDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_SoftwareIdentity::getSerialNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERIAL_NUMBER, getSerialNumber());
	return true;
}

String UNIX_SoftwareIdentity::getSerialNumber() const
{
	return String ("");
}

Boolean UNIX_SoftwareIdentity::getTargetTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TARGET_TYPES, getTargetTypes());
	return true;
}

Array<String> UNIX_SoftwareIdentity::getTargetTypes() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_SoftwareIdentity::getIdentityInfoValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTITY_INFO_VALUE, getIdentityInfoValue());
	return true;
}

Array<String> UNIX_SoftwareIdentity::getIdentityInfoValue() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_SoftwareIdentity::getIdentityInfoType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTITY_INFO_TYPE, getIdentityInfoType());
	return true;
}

Array<String> UNIX_SoftwareIdentity::getIdentityInfoType() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_SoftwareIdentity::getReleaseDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RELEASE_DATE, getReleaseDate());
	return true;
}

CIMDateTime UNIX_SoftwareIdentity::getReleaseDate() const
{
	struct tm* clock;			// create a time structure
	time_t val = time(NULL);
	clock = gmtime(&(val));	// Get the last modified time and put it into the time structure
	return CIMDateTime(
		clock->tm_year + 1900,
		clock->tm_mon + 1,
		clock->tm_mday,
		clock->tm_hour,
		clock->tm_min,
		clock->tm_sec,
		0,0,
		clock->tm_gmtoff);
}

Boolean UNIX_SoftwareIdentity::getIsEntity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_ENTITY, getIsEntity());
	return true;
}

Boolean UNIX_SoftwareIdentity::getIsEntity() const
{
	return Boolean(false);
}

Boolean UNIX_SoftwareIdentity::getExtendedResourceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENDED_RESOURCE_TYPE, getExtendedResourceType());
	return true;
}

Uint16 UNIX_SoftwareIdentity::getExtendedResourceType() const
{
	return Uint16(0);
}

Boolean UNIX_SoftwareIdentity::getOtherExtendedResourceTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_EXTENDED_RESOURCE_TYPE_DESCRIPTION, getOtherExtendedResourceTypeDescription());
	return true;
}

String UNIX_SoftwareIdentity::getOtherExtendedResourceTypeDescription() const
{
	return String ("");
}

Boolean UNIX_SoftwareIdentity::getMinExtendedResourceTypeMajorVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_EXTENDED_RESOURCE_TYPE_MAJOR_VERSION, getMinExtendedResourceTypeMajorVersion());
	return true;
}

Uint16 UNIX_SoftwareIdentity::getMinExtendedResourceTypeMajorVersion() const
{
	return Uint16(0);
}

Boolean UNIX_SoftwareIdentity::getMinExtendedResourceTypeMinorVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_EXTENDED_RESOURCE_TYPE_MINOR_VERSION, getMinExtendedResourceTypeMinorVersion());
	return true;
}

Uint16 UNIX_SoftwareIdentity::getMinExtendedResourceTypeMinorVersion() const
{
	return Uint16(0);
}

Boolean UNIX_SoftwareIdentity::getMinExtendedResourceTypeRevisionNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_EXTENDED_RESOURCE_TYPE_REVISION_NUMBER, getMinExtendedResourceTypeRevisionNumber());
	return true;
}

Uint16 UNIX_SoftwareIdentity::getMinExtendedResourceTypeRevisionNumber() const
{
	return Uint16(0);
}

Boolean UNIX_SoftwareIdentity::getMinExtendedResourceTypeBuildNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_EXTENDED_RESOURCE_TYPE_BUILD_NUMBER, getMinExtendedResourceTypeBuildNumber());
	return true;
}

Uint16 UNIX_SoftwareIdentity::getMinExtendedResourceTypeBuildNumber() const
{
	return Uint16(0);
}

Boolean UNIX_SoftwareIdentity::getTargetOSTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TARGET_OS_TYPES, getTargetOSTypes());
	return true;
}

Array<Uint16> UNIX_SoftwareIdentity::getTargetOSTypes() const
{
	Array<Uint16> as;
	

	return as;

}



Boolean UNIX_SoftwareIdentity::initialize()
{
	return false;
}

Boolean UNIX_SoftwareIdentity::load(int &pIndex)
{
	return false;
}

Boolean UNIX_SoftwareIdentity::finalize()
{
	return false;
}

Boolean UNIX_SoftwareIdentity::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String instanceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_INSTANCE_ID)) instanceIDKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
