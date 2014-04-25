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


UNIX_OtherRoleInformation::UNIX_OtherRoleInformation(void)
{
}

UNIX_OtherRoleInformation::~UNIX_OtherRoleInformation(void)
{
}


Boolean UNIX_OtherRoleInformation::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_OtherRoleInformation::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_OtherRoleInformation::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_OtherRoleInformation::getCaption() const
{
	return String ("");
}

Boolean UNIX_OtherRoleInformation::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_OtherRoleInformation::getDescription() const
{
	return String ("");
}

Boolean UNIX_OtherRoleInformation::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_OtherRoleInformation::getElementName() const
{
	return String("OtherRoleInformation");
}

Boolean UNIX_OtherRoleInformation::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_OtherRoleInformation::getCreationClassName() const
{
	return String("UNIX_OtherRoleInformation");
}

Boolean UNIX_OtherRoleInformation::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_OtherRoleInformation::getName() const
{
	return String ("");
}

Boolean UNIX_OtherRoleInformation::getObjectClass(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OBJECT_CLASS, getObjectClass());
	return true;
}

Array<String> UNIX_OtherRoleInformation::getObjectClass() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherRoleInformation::getBusinessCategory(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUSINESS_CATEGORY, getBusinessCategory());
	return true;
}

Array<String> UNIX_OtherRoleInformation::getBusinessCategory() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherRoleInformation::getCommonName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMON_NAME, getCommonName());
	return true;
}

Array<String> UNIX_OtherRoleInformation::getCommonName() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherRoleInformation::getDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTIONS, getDescriptions());
	return true;
}

Array<String> UNIX_OtherRoleInformation::getDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherRoleInformation::getDestinationIndicator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESTINATION_INDICATOR, getDestinationIndicator());
	return true;
}

Array<String> UNIX_OtherRoleInformation::getDestinationIndicator() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherRoleInformation::getFacsimileTelephoneNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FACSIMILE_TELEPHONE_NUMBER, getFacsimileTelephoneNumber());
	return true;
}

Array<String> UNIX_OtherRoleInformation::getFacsimileTelephoneNumber() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherRoleInformation::getInternationaliSDNNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERNATIONALI_S_D_N_NUMBER, getInternationaliSDNNumber());
	return true;
}

Array<String> UNIX_OtherRoleInformation::getInternationaliSDNNumber() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherRoleInformation::getOU(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_O_U, getOU());
	return true;
}

Array<String> UNIX_OtherRoleInformation::getOU() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherRoleInformation::getPhysicalDeliveryOfficeName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PHYSICAL_DELIVERY_OFFICE_NAME, getPhysicalDeliveryOfficeName());
	return true;
}

Array<String> UNIX_OtherRoleInformation::getPhysicalDeliveryOfficeName() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherRoleInformation::getPostalAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSTAL_ADDRESS, getPostalAddress());
	return true;
}

Array<String> UNIX_OtherRoleInformation::getPostalAddress() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherRoleInformation::getPostalCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSTAL_CODE, getPostalCode());
	return true;
}

Array<String> UNIX_OtherRoleInformation::getPostalCode() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherRoleInformation::getPostOfficeBox(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POST_OFFICE_BOX, getPostOfficeBox());
	return true;
}

Array<String> UNIX_OtherRoleInformation::getPostOfficeBox() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherRoleInformation::getPreferredDeliveryMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PREFERRED_DELIVERY_METHOD, getPreferredDeliveryMethod());
	return true;
}

String UNIX_OtherRoleInformation::getPreferredDeliveryMethod() const
{
	return String ("");
}

Boolean UNIX_OtherRoleInformation::getRegisteredAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REGISTERED_ADDRESS, getRegisteredAddress());
	return true;
}

Array<String> UNIX_OtherRoleInformation::getRegisteredAddress() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherRoleInformation::getSeeAlso(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SEE_ALSO, getSeeAlso());
	return true;
}

Array<String> UNIX_OtherRoleInformation::getSeeAlso() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherRoleInformation::getStateOrProvince(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATE_OR_PROVINCE, getStateOrProvince());
	return true;
}

Array<String> UNIX_OtherRoleInformation::getStateOrProvince() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherRoleInformation::getStreet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STREET, getStreet());
	return true;
}

Array<String> UNIX_OtherRoleInformation::getStreet() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherRoleInformation::getTelephoneNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TELEPHONE_NUMBER, getTelephoneNumber());
	return true;
}

Array<String> UNIX_OtherRoleInformation::getTelephoneNumber() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherRoleInformation::getTeletexTerminalIdentifier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TELETEX_TERMINAL_IDENTIFIER, getTeletexTerminalIdentifier());
	return true;
}

Array<String> UNIX_OtherRoleInformation::getTeletexTerminalIdentifier() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherRoleInformation::getTelexNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TELEX_NUMBER, getTelexNumber());
	return true;
}

Array<String> UNIX_OtherRoleInformation::getTelexNumber() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_OtherRoleInformation::getX121Address(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_X_1_2_1_ADDRESS, getX121Address());
	return true;
}

Array<String> UNIX_OtherRoleInformation::getX121Address() const
{
	Array<String> as;
	

	return as;

}



Boolean UNIX_OtherRoleInformation::initialize()
{
	return false;
}

Boolean UNIX_OtherRoleInformation::load(int &pIndex)
{
	return false;
}

Boolean UNIX_OtherRoleInformation::finalize()
{
	return false;
}

Boolean UNIX_OtherRoleInformation::find(Array<CIMKeyBinding> &kbArray)
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
