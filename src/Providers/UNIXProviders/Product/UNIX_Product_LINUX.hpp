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


UNIX_Product::UNIX_Product(void)
{
}

UNIX_Product::~UNIX_Product(void)
{
}


Boolean UNIX_Product::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_Product::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_Product::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_Product::getCaption() const
{
	return String ("");
}

Boolean UNIX_Product::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_Product::getDescription() const
{
	return String ("");
}

Boolean UNIX_Product::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_Product::getElementName() const
{
	return String("Product");
}

Boolean UNIX_Product::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_Product::getName() const
{
	return String ("");
}

Boolean UNIX_Product::getIdentifyingNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_NUMBER, getIdentifyingNumber());
	return true;
}

String UNIX_Product::getIdentifyingNumber() const
{
	return String ("");
}

Boolean UNIX_Product::getVendor(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR, getVendor());
	return true;
}

String UNIX_Product::getVendor() const
{
	return String ("");
}

Boolean UNIX_Product::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_Product::getVersion() const
{
	return String ("");
}

Boolean UNIX_Product::getSKUNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_K_U_NUMBER, getSKUNumber());
	return true;
}

String UNIX_Product::getSKUNumber() const
{
	return String ("");
}

Boolean UNIX_Product::getWarrantyStartDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WARRANTY_START_DATE, getWarrantyStartDate());
	return true;
}

CIMDateTime UNIX_Product::getWarrantyStartDate() const
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

Boolean UNIX_Product::getWarrantyDuration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WARRANTY_DURATION, getWarrantyDuration());
	return true;
}

Uint32 UNIX_Product::getWarrantyDuration() const
{
	return Uint32(0);
}



Boolean UNIX_Product::initialize()
{
	return false;
}

Boolean UNIX_Product::load(int &pIndex)
{
	return false;
}

Boolean UNIX_Product::finalize()
{
	return false;
}

Boolean UNIX_Product::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String nameKey;
	String identifyingNumberKey;
	String vendorKey;
	String versionKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_IDENTIFYING_NUMBER)) identifyingNumberKey = kb.getValue();
		else if (keyName.equal(PROPERTY_VENDOR)) vendorKey = kb.getValue();
		else if (keyName.equal(PROPERTY_VERSION)) versionKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
