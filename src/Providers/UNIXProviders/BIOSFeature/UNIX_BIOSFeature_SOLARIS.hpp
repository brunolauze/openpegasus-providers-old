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


UNIX_BIOSFeature::UNIX_BIOSFeature(void)
{
}

UNIX_BIOSFeature::~UNIX_BIOSFeature(void)
{
}


Boolean UNIX_BIOSFeature::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BIOSFeature::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_BIOSFeature::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BIOSFeature::getCaption() const
{
	return String ("");
}

Boolean UNIX_BIOSFeature::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BIOSFeature::getDescription() const
{
	return String ("");
}

Boolean UNIX_BIOSFeature::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BIOSFeature::getElementName() const
{
	return String("BIOSFeature");
}

Boolean UNIX_BIOSFeature::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_BIOSFeature::getInstallDate() const
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

Boolean UNIX_BIOSFeature::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_BIOSFeature::getName() const
{
	return String ("");
}

Boolean UNIX_BIOSFeature::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_BIOSFeature::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_BIOSFeature::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_BIOSFeature::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_BIOSFeature::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_BIOSFeature::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_BIOSFeature::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_BIOSFeature::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_BIOSFeature::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_BIOSFeature::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_BIOSFeature::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_BIOSFeature::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_BIOSFeature::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_BIOSFeature::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_BIOSFeature::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_BIOSFeature::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_BIOSFeature::getIdentifyingNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_NUMBER, getIdentifyingNumber());
	return true;
}

String UNIX_BIOSFeature::getIdentifyingNumber() const
{
	return String ("");
}

Boolean UNIX_BIOSFeature::getProductName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRODUCT_NAME, getProductName());
	return true;
}

String UNIX_BIOSFeature::getProductName() const
{
	return String ("");
}

Boolean UNIX_BIOSFeature::getVendor(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR, getVendor());
	return true;
}

String UNIX_BIOSFeature::getVendor() const
{
	return String ("");
}

Boolean UNIX_BIOSFeature::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_BIOSFeature::getVersion() const
{
	return String ("");
}

Boolean UNIX_BIOSFeature::getCharacteristics(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHARACTERISTICS, getCharacteristics());
	return true;
}

Array<Uint16> UNIX_BIOSFeature::getCharacteristics() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_BIOSFeature::getCharacteristicDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHARACTERISTIC_DESCRIPTIONS, getCharacteristicDescriptions());
	return true;
}

Array<String> UNIX_BIOSFeature::getCharacteristicDescriptions() const
{
	Array<String> as;
	

	return as;

}



Boolean UNIX_BIOSFeature::initialize()
{
	return false;
}

Boolean UNIX_BIOSFeature::load(int &pIndex)
{
	return false;
}

Boolean UNIX_BIOSFeature::finalize()
{
	return false;
}

Boolean UNIX_BIOSFeature::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String identifyingNumberKey;
	String productNameKey;
	String vendorKey;
	String versionKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_IDENTIFYING_NUMBER)) identifyingNumberKey = kb.getValue();
		else if (keyName.equal(PROPERTY_PRODUCT_NAME)) productNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_VENDOR)) vendorKey = kb.getValue();
		else if (keyName.equal(PROPERTY_VERSION)) versionKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
