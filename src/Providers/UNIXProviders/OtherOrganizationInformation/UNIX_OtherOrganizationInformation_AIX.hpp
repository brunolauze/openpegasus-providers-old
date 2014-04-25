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


UNIX_OtherOrganizationInformation::UNIX_OtherOrganizationInformation(void)
{
}

UNIX_OtherOrganizationInformation::~UNIX_OtherOrganizationInformation(void)
{
}


Boolean UNIX_OtherOrganizationInformation::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_OtherOrganizationInformation::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_OtherOrganizationInformation::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_OtherOrganizationInformation::getCaption() const
{
	return String ("");
}

Boolean UNIX_OtherOrganizationInformation::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_OtherOrganizationInformation::getDescription() const
{
	return String ("");
}

Boolean UNIX_OtherOrganizationInformation::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_OtherOrganizationInformation::getElementName() const
{
	return String("OtherOrganizationInformation");
}

Boolean UNIX_OtherOrganizationInformation::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_OtherOrganizationInformation::getCreationClassName() const
{
	return String("UNIX_OtherOrganizationInformation");
}

Boolean UNIX_OtherOrganizationInformation::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_OtherOrganizationInformation::getName() const
{
	return String ("");
}

Boolean UNIX_OtherOrganizationInformation::getObjectClass(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OBJECT_CLASS, getObjectClass());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getObjectClass() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherOrganizationInformation::getBusinessCategory(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUSINESS_CATEGORY, getBusinessCategory());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getBusinessCategory() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherOrganizationInformation::getDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTIONS, getDescriptions());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherOrganizationInformation::getDestinationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESTINATION_INDICATOR, getDestinationIndicator());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getDestinationIndicator() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherOrganizationInformation::getFacsimileTelephoneNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FACSIMILE_TELEPHONE_NUMBER, getFacsimileTelephoneNumber());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getFacsimileTelephoneNumber() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherOrganizationInformation::getInternationaliSDNNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERNATIONALI_S_D_N_NUMBER, getInternationaliSDNNumber());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getInternationaliSDNNumber() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherOrganizationInformation::getLabeledURI(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LABELED_U_R_I, getLabeledURI());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getLabeledURI() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherOrganizationInformation::getLocalityName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCALITY_NAME, getLocalityName());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getLocalityName() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherOrganizationInformation::getMail(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAIL, getMail());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getMail() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherOrganizationInformation::getManager(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANAGER, getManager());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getManager() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherOrganizationInformation::getOrganizationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ORGANIZATION_NAME, getOrganizationName());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getOrganizationName() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherOrganizationInformation::getOtherMailbox(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_MAILBOX, getOtherMailbox());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getOtherMailbox() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherOrganizationInformation::getPhysicalDeliveryOfficeName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PHYSICAL_DELIVERY_OFFICE_NAME, getPhysicalDeliveryOfficeName());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getPhysicalDeliveryOfficeName() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherOrganizationInformation::getPostalAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSTAL_ADDRESS, getPostalAddress());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getPostalAddress() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherOrganizationInformation::getPostalCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSTAL_CODE, getPostalCode());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getPostalCode() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherOrganizationInformation::getPostOfficeBox(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POST_OFFICE_BOX, getPostOfficeBox());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getPostOfficeBox() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherOrganizationInformation::getPreferredDeliveryMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PREFERRED_DELIVERY_METHOD, getPreferredDeliveryMethod());
	return true;
}

String UNIX_OtherOrganizationInformation::getPreferredDeliveryMethod() const
{
	return String ("");
}

Boolean UNIX_OtherOrganizationInformation::getRegisteredAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REGISTERED_ADDRESS, getRegisteredAddress());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getRegisteredAddress() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherOrganizationInformation::getSearchGuide(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEARCH_GUIDE, getSearchGuide());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getSearchGuide() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherOrganizationInformation::getSeeAlso(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEE_ALSO, getSeeAlso());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getSeeAlso() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherOrganizationInformation::getStateOrProvince(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATE_OR_PROVINCE, getStateOrProvince());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getStateOrProvince() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherOrganizationInformation::getStreet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STREET, getStreet());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getStreet() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherOrganizationInformation::getTelephoneNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TELEPHONE_NUMBER, getTelephoneNumber());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getTelephoneNumber() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherOrganizationInformation::getTeletexTerminalIdentifier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TELETEX_TERMINAL_IDENTIFIER, getTeletexTerminalIdentifier());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getTeletexTerminalIdentifier() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherOrganizationInformation::getTelexNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TELEX_NUMBER, getTelexNumber());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getTelexNumber() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherOrganizationInformation::getThumbnailLogo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_THUMBNAIL_LOGO, getThumbnailLogo());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getThumbnailLogo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherOrganizationInformation::getUniqueIdentifier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNIQUE_IDENTIFIER, getUniqueIdentifier());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getUniqueIdentifier() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherOrganizationInformation::getUserPassword(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_PASSWORD, getUserPassword());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getUserPassword() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherOrganizationInformation::getX121Address(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_X_1_2_1_ADDRESS, getX121Address());
	return true;
}

Array<String> UNIX_OtherOrganizationInformation::getX121Address() const
{
	Array<String> as;
	

	return as;

}



Boolean UNIX_OtherOrganizationInformation::initialize()
{
	return false;
}

Boolean UNIX_OtherOrganizationInformation::load(int &pIndex)
{
	return false;
}

Boolean UNIX_OtherOrganizationInformation::finalize()
{
	return false;
}

Boolean UNIX_OtherOrganizationInformation::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
