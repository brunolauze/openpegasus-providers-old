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


UNIX_SoftwareFeature::UNIX_SoftwareFeature(void)
{
}

UNIX_SoftwareFeature::~UNIX_SoftwareFeature(void)
{
}


Boolean UNIX_SoftwareFeature::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SoftwareFeature::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_SoftwareFeature::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SoftwareFeature::getCaption() const
{
	return String ("");
}

Boolean UNIX_SoftwareFeature::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SoftwareFeature::getDescription() const
{
	return String ("");
}

Boolean UNIX_SoftwareFeature::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SoftwareFeature::getElementName() const
{
	return String("SoftwareFeature");
}

Boolean UNIX_SoftwareFeature::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_SoftwareFeature::getInstallDate() const
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

Boolean UNIX_SoftwareFeature::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_SoftwareFeature::getName() const
{
	return String ("");
}

Boolean UNIX_SoftwareFeature::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_SoftwareFeature::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_SoftwareFeature::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_SoftwareFeature::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_SoftwareFeature::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_SoftwareFeature::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_SoftwareFeature::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_SoftwareFeature::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_SoftwareFeature::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_SoftwareFeature::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_SoftwareFeature::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_SoftwareFeature::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_SoftwareFeature::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_SoftwareFeature::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_SoftwareFeature::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_SoftwareFeature::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_SoftwareFeature::getIdentifyingNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_NUMBER, getIdentifyingNumber());
	return true;
}

String UNIX_SoftwareFeature::getIdentifyingNumber() const
{
	return String ("");
}

Boolean UNIX_SoftwareFeature::getProductName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRODUCT_NAME, getProductName());
	return true;
}

String UNIX_SoftwareFeature::getProductName() const
{
	return String ("");
}

Boolean UNIX_SoftwareFeature::getVendor(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR, getVendor());
	return true;
}

String UNIX_SoftwareFeature::getVendor() const
{
	return String ("");
}

Boolean UNIX_SoftwareFeature::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_SoftwareFeature::getVersion() const
{
	return String ("");
}



Boolean UNIX_SoftwareFeature::initialize()
{
	return false;
}

Boolean UNIX_SoftwareFeature::load(int &pIndex)
{
	return false;
}

Boolean UNIX_SoftwareFeature::finalize()
{
	return false;
}

Boolean UNIX_SoftwareFeature::find(Array<CIMKeyBinding> &kbArray)
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
