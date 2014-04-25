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


UNIX_SoftwareInstallationServiceCapabilities::UNIX_SoftwareInstallationServiceCapabilities(void)
{
}

UNIX_SoftwareInstallationServiceCapabilities::~UNIX_SoftwareInstallationServiceCapabilities(void)
{
}


Boolean UNIX_SoftwareInstallationServiceCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SoftwareInstallationServiceCapabilities::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_SoftwareInstallationServiceCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SoftwareInstallationServiceCapabilities::getCaption() const
{
	return String ("");
}

Boolean UNIX_SoftwareInstallationServiceCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SoftwareInstallationServiceCapabilities::getDescription() const
{
	return String ("");
}

Boolean UNIX_SoftwareInstallationServiceCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SoftwareInstallationServiceCapabilities::getElementName() const
{
	return String("SoftwareInstallationServiceCapabilities");
}

Boolean UNIX_SoftwareInstallationServiceCapabilities::getSupportedAsynchronousActions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_ASYNCHRONOUS_ACTIONS, getSupportedAsynchronousActions());
	return true;
}

Array<Uint16> UNIX_SoftwareInstallationServiceCapabilities::getSupportedAsynchronousActions() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_SoftwareInstallationServiceCapabilities::getSupportedSynchronousActions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_SYNCHRONOUS_ACTIONS, getSupportedSynchronousActions());
	return true;
}

Array<Uint16> UNIX_SoftwareInstallationServiceCapabilities::getSupportedSynchronousActions() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_SoftwareInstallationServiceCapabilities::getSupportedTargetTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_TARGET_TYPES, getSupportedTargetTypes());
	return true;
}

Array<String> UNIX_SoftwareInstallationServiceCapabilities::getSupportedTargetTypes() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_SoftwareInstallationServiceCapabilities::getSupportedExtendedResourceTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_EXTENDED_RESOURCE_TYPES, getSupportedExtendedResourceTypes());
	return true;
}

Array<Uint16> UNIX_SoftwareInstallationServiceCapabilities::getSupportedExtendedResourceTypes() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_SoftwareInstallationServiceCapabilities::getCanAddToCollection(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAN_ADD_TO_COLLECTION, getCanAddToCollection());
	return true;
}

Boolean UNIX_SoftwareInstallationServiceCapabilities::getCanAddToCollection() const
{
	return Boolean(false);
}

Boolean UNIX_SoftwareInstallationServiceCapabilities::getSupportedInstallOptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_INSTALL_OPTIONS, getSupportedInstallOptions());
	return true;
}

Array<Uint16> UNIX_SoftwareInstallationServiceCapabilities::getSupportedInstallOptions() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_SoftwareInstallationServiceCapabilities::getOtherSupportedExtendedResourceTypeDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPORTED_EXTENDED_RESOURCE_TYPE_DESCRIPTIONS, getOtherSupportedExtendedResourceTypeDescriptions());
	return true;
}

Array<String> UNIX_SoftwareInstallationServiceCapabilities::getOtherSupportedExtendedResourceTypeDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_SoftwareInstallationServiceCapabilities::getSupportedExtendedResourceTypesMajorVersions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_EXTENDED_RESOURCE_TYPES_MAJOR_VERSIONS, getSupportedExtendedResourceTypesMajorVersions());
	return true;
}

Array<Uint16> UNIX_SoftwareInstallationServiceCapabilities::getSupportedExtendedResourceTypesMajorVersions() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_SoftwareInstallationServiceCapabilities::getSupportedExtendedResourceTypesMinorVersions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_EXTENDED_RESOURCE_TYPES_MINOR_VERSIONS, getSupportedExtendedResourceTypesMinorVersions());
	return true;
}

Array<Uint16> UNIX_SoftwareInstallationServiceCapabilities::getSupportedExtendedResourceTypesMinorVersions() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_SoftwareInstallationServiceCapabilities::getSupportedExtendedResourceTypesRevisionNumbers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_EXTENDED_RESOURCE_TYPES_REVISION_NUMBERS, getSupportedExtendedResourceTypesRevisionNumbers());
	return true;
}

Array<Uint16> UNIX_SoftwareInstallationServiceCapabilities::getSupportedExtendedResourceTypesRevisionNumbers() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_SoftwareInstallationServiceCapabilities::getSupportedExtendedResourceTypesBuildNumbers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_EXTENDED_RESOURCE_TYPES_BUILD_NUMBERS, getSupportedExtendedResourceTypesBuildNumbers());
	return true;
}

Array<Uint16> UNIX_SoftwareInstallationServiceCapabilities::getSupportedExtendedResourceTypesBuildNumbers() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_SoftwareInstallationServiceCapabilities::getSupportedURISchemes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_U_R_I_SCHEMES, getSupportedURISchemes());
	return true;
}

Array<Uint16> UNIX_SoftwareInstallationServiceCapabilities::getSupportedURISchemes() const
{
	Array<Uint16> as;
	

	return as;

}



Boolean UNIX_SoftwareInstallationServiceCapabilities::initialize()
{
	return false;
}

Boolean UNIX_SoftwareInstallationServiceCapabilities::load(int &pIndex)
{
	return false;
}

Boolean UNIX_SoftwareInstallationServiceCapabilities::finalize()
{
	return false;
}

Boolean UNIX_SoftwareInstallationServiceCapabilities::find(Array<CIMKeyBinding> &kbArray)
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
