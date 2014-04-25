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


UNIX_OtherOrgUnitInformation::UNIX_OtherOrgUnitInformation(void)
{
}

UNIX_OtherOrgUnitInformation::~UNIX_OtherOrgUnitInformation(void)
{
}


Boolean UNIX_OtherOrgUnitInformation::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_OtherOrgUnitInformation::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_OtherOrgUnitInformation::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_OtherOrgUnitInformation::getCaption() const
{
	return String ("");
}

Boolean UNIX_OtherOrgUnitInformation::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_OtherOrgUnitInformation::getDescription() const
{
	return String ("");
}

Boolean UNIX_OtherOrgUnitInformation::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_OtherOrgUnitInformation::getElementName() const
{
	return String("OtherOrgUnitInformation");
}

Boolean UNIX_OtherOrgUnitInformation::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_OtherOrgUnitInformation::getCreationClassName() const
{
	return String("UNIX_OtherOrgUnitInformation");
}

Boolean UNIX_OtherOrgUnitInformation::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_OtherOrgUnitInformation::getName() const
{
	return String ("");
}

Boolean UNIX_OtherOrgUnitInformation::getObjectClass(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OBJECT_CLASS, getObjectClass());
	return true;
}

Array<String> UNIX_OtherOrgUnitInformation::getObjectClass() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherOrgUnitInformation::getBusinessCategory(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUSINESS_CATEGORY, getBusinessCategory());
	return true;
}

Array<String> UNIX_OtherOrgUnitInformation::getBusinessCategory() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherOrgUnitInformation::getDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTIONS, getDescriptions());
	return true;
}

Array<String> UNIX_OtherOrgUnitInformation::getDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherOrgUnitInformation::getDestinationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESTINATION_INDICATOR, getDestinationIndicator());
	return true;
}

Array<String> UNIX_OtherOrgUnitInformation::getDestinationIndicator() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherOrgUnitInformation::getFacsimileTelephoneNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FACSIMILE_TELEPHONE_NUMBER, getFacsimileTelephoneNumber());
	return true;
}

Array<String> UNIX_OtherOrgUnitInformation::getFacsimileTelephoneNumber() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherOrgUnitInformation::getInternationaliSDNNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERNATIONALI_S_D_N_NUMBER, getInternationaliSDNNumber());
	return true;
}

Array<String> UNIX_OtherOrgUnitInformation::getInternationaliSDNNumber() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherOrgUnitInformation::getLocalityName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCALITY_NAME, getLocalityName());
	return true;
}

Array<String> UNIX_OtherOrgUnitInformation::getLocalityName() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherOrgUnitInformation::getOU(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_O_U, getOU());
	return true;
}

Array<String> UNIX_OtherOrgUnitInformation::getOU() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherOrgUnitInformation::getPhysicalDeliveryOfficeName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PHYSICAL_DELIVERY_OFFICE_NAME, getPhysicalDeliveryOfficeName());
	return true;
}

Array<String> UNIX_OtherOrgUnitInformation::getPhysicalDeliveryOfficeName() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherOrgUnitInformation::getPostalAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSTAL_ADDRESS, getPostalAddress());
	return true;
}

Array<String> UNIX_OtherOrgUnitInformation::getPostalAddress() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherOrgUnitInformation::getPostalCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSTAL_CODE, getPostalCode());
	return true;
}

Array<String> UNIX_OtherOrgUnitInformation::getPostalCode() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherOrgUnitInformation::getPostOfficeBox(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POST_OFFICE_BOX, getPostOfficeBox());
	return true;
}

Array<String> UNIX_OtherOrgUnitInformation::getPostOfficeBox() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherOrgUnitInformation::getPreferredDeliveryMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PREFERRED_DELIVERY_METHOD, getPreferredDeliveryMethod());
	return true;
}

String UNIX_OtherOrgUnitInformation::getPreferredDeliveryMethod() const
{
	return String ("");
}

Boolean UNIX_OtherOrgUnitInformation::getSearchGuide(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEARCH_GUIDE, getSearchGuide());
	return true;
}

Array<String> UNIX_OtherOrgUnitInformation::getSearchGuide() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherOrgUnitInformation::getSeeAlso(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEE_ALSO, getSeeAlso());
	return true;
}

Array<String> UNIX_OtherOrgUnitInformation::getSeeAlso() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherOrgUnitInformation::getStateOrProvince(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATE_OR_PROVINCE, getStateOrProvince());
	return true;
}

Array<String> UNIX_OtherOrgUnitInformation::getStateOrProvince() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherOrgUnitInformation::getStreet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STREET, getStreet());
	return true;
}

Array<String> UNIX_OtherOrgUnitInformation::getStreet() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherOrgUnitInformation::getTelephoneNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TELEPHONE_NUMBER, getTelephoneNumber());
	return true;
}

Array<String> UNIX_OtherOrgUnitInformation::getTelephoneNumber() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherOrgUnitInformation::getTeletexTerminalIdentifier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TELETEX_TERMINAL_IDENTIFIER, getTeletexTerminalIdentifier());
	return true;
}

Array<String> UNIX_OtherOrgUnitInformation::getTeletexTerminalIdentifier() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherOrgUnitInformation::getTelexNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TELEX_NUMBER, getTelexNumber());
	return true;
}

Array<String> UNIX_OtherOrgUnitInformation::getTelexNumber() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherOrgUnitInformation::getUserPassword(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_PASSWORD, getUserPassword());
	return true;
}

Array<String> UNIX_OtherOrgUnitInformation::getUserPassword() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherOrgUnitInformation::getX121Address(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_X_1_2_1_ADDRESS, getX121Address());
	return true;
}

Array<String> UNIX_OtherOrgUnitInformation::getX121Address() const
{
	Array<String> as;
	

	return as;

}



Boolean UNIX_OtherOrgUnitInformation::initialize()
{
	return false;
}

Boolean UNIX_OtherOrgUnitInformation::load(int &pIndex)
{
	return false;
}

Boolean UNIX_OtherOrgUnitInformation::finalize()
{
	return false;
}

Boolean UNIX_OtherOrgUnitInformation::find(Array<CIMKeyBinding> &kbArray)
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
