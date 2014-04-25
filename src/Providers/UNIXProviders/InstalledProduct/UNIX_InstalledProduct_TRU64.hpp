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


UNIX_InstalledProduct::UNIX_InstalledProduct(void)
{
}

UNIX_InstalledProduct::~UNIX_InstalledProduct(void)
{
}


Boolean UNIX_InstalledProduct::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_InstalledProduct::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_InstalledProduct::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_InstalledProduct::getCaption() const
{
	return String ("");
}

Boolean UNIX_InstalledProduct::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_InstalledProduct::getDescription() const
{
	return String ("");
}

Boolean UNIX_InstalledProduct::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_InstalledProduct::getElementName() const
{
	return String("InstalledProduct");
}

Boolean UNIX_InstalledProduct::getProductIdentifyingNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRODUCT_IDENTIFYING_NUMBER, getProductIdentifyingNumber());
	return true;
}

String UNIX_InstalledProduct::getProductIdentifyingNumber() const
{
	return String ("");
}

Boolean UNIX_InstalledProduct::getProductName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRODUCT_NAME, getProductName());
	return true;
}

String UNIX_InstalledProduct::getProductName() const
{
	return String ("");
}

Boolean UNIX_InstalledProduct::getProductVendor(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRODUCT_VENDOR, getProductVendor());
	return true;
}

String UNIX_InstalledProduct::getProductVendor() const
{
	return String ("");
}

Boolean UNIX_InstalledProduct::getProductVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRODUCT_VERSION, getProductVersion());
	return true;
}

String UNIX_InstalledProduct::getProductVersion() const
{
	return String ("");
}

Boolean UNIX_InstalledProduct::getSystemID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_ID, getSystemID());
	return true;
}

String UNIX_InstalledProduct::getSystemID() const
{
	return String ("");
}

Boolean UNIX_InstalledProduct::getCollectionID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COLLECTION_ID, getCollectionID());
	return true;
}

String UNIX_InstalledProduct::getCollectionID() const
{
	return String ("");
}

Boolean UNIX_InstalledProduct::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_InstalledProduct::getName() const
{
	return String ("");
}



Boolean UNIX_InstalledProduct::initialize()
{
	return false;
}

Boolean UNIX_InstalledProduct::load(int &pIndex)
{
	return false;
}

Boolean UNIX_InstalledProduct::finalize()
{
	return false;
}

Boolean UNIX_InstalledProduct::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String productIdentifyingNumberKey;
	String productNameKey;
	String productVendorKey;
	String productVersionKey;
	String systemIDKey;
	String collectionIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_PRODUCT_IDENTIFYING_NUMBER)) productIdentifyingNumberKey = kb.getValue();
		else if (keyName.equal(PROPERTY_PRODUCT_NAME)) productNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_PRODUCT_VENDOR)) productVendorKey = kb.getValue();
		else if (keyName.equal(PROPERTY_PRODUCT_VERSION)) productVersionKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_ID)) systemIDKey = kb.getValue();
		else if (keyName.equal(PROPERTY_COLLECTION_ID)) collectionIDKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
