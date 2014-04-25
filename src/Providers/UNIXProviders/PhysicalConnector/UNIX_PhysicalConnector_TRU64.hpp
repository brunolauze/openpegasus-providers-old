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


UNIX_PhysicalConnector::UNIX_PhysicalConnector(void)
{
}

UNIX_PhysicalConnector::~UNIX_PhysicalConnector(void)
{
}


Boolean UNIX_PhysicalConnector::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PhysicalConnector::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_PhysicalConnector::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PhysicalConnector::getCaption() const
{
	return String ("");
}

Boolean UNIX_PhysicalConnector::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PhysicalConnector::getDescription() const
{
	return String ("");
}

Boolean UNIX_PhysicalConnector::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PhysicalConnector::getElementName() const
{
	return String("PhysicalConnector");
}

Boolean UNIX_PhysicalConnector::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_PhysicalConnector::getInstallDate() const
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

Boolean UNIX_PhysicalConnector::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PhysicalConnector::getName() const
{
	return String ("");
}

Boolean UNIX_PhysicalConnector::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_PhysicalConnector::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PhysicalConnector::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_PhysicalConnector::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PhysicalConnector::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_PhysicalConnector::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_PhysicalConnector::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_PhysicalConnector::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_PhysicalConnector::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_PhysicalConnector::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalConnector::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_PhysicalConnector::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalConnector::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_PhysicalConnector::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_PhysicalConnector::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_PhysicalConnector::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_PhysicalConnector::getTag(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TAG, getTag());
	return true;
}

String UNIX_PhysicalConnector::getTag() const
{
	return String ("");
}

Boolean UNIX_PhysicalConnector::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_PhysicalConnector::getCreationClassName() const
{
	return String("UNIX_PhysicalConnector");
}

Boolean UNIX_PhysicalConnector::getManufacturer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURER, getManufacturer());
	return true;
}

String UNIX_PhysicalConnector::getManufacturer() const
{
	return String ("");
}

Boolean UNIX_PhysicalConnector::getModel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MODEL, getModel());
	return true;
}

String UNIX_PhysicalConnector::getModel() const
{
	return String ("");
}

Boolean UNIX_PhysicalConnector::getSKU(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_K_U, getSKU());
	return true;
}

String UNIX_PhysicalConnector::getSKU() const
{
	return String ("");
}

Boolean UNIX_PhysicalConnector::getSerialNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERIAL_NUMBER, getSerialNumber());
	return true;
}

String UNIX_PhysicalConnector::getSerialNumber() const
{
	return String ("");
}

Boolean UNIX_PhysicalConnector::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_PhysicalConnector::getVersion() const
{
	return String ("");
}

Boolean UNIX_PhysicalConnector::getPartNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_NUMBER, getPartNumber());
	return true;
}

String UNIX_PhysicalConnector::getPartNumber() const
{
	return String ("");
}

Boolean UNIX_PhysicalConnector::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

String UNIX_PhysicalConnector::getOtherIdentifyingInfo() const
{
	return String ("");
}

Boolean UNIX_PhysicalConnector::getPoweredOn(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWERED_ON, getPoweredOn());
	return true;
}

Boolean UNIX_PhysicalConnector::getPoweredOn() const
{
	return Boolean(false);
}

Boolean UNIX_PhysicalConnector::getManufactureDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURE_DATE, getManufactureDate());
	return true;
}

CIMDateTime UNIX_PhysicalConnector::getManufactureDate() const
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

Boolean UNIX_PhysicalConnector::getVendorEquipmentType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_EQUIPMENT_TYPE, getVendorEquipmentType());
	return true;
}

String UNIX_PhysicalConnector::getVendorEquipmentType() const
{
	return String ("");
}

Boolean UNIX_PhysicalConnector::getUserTracking(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_TRACKING, getUserTracking());
	return true;
}

String UNIX_PhysicalConnector::getUserTracking() const
{
	return String ("");
}

Boolean UNIX_PhysicalConnector::getCanBeFRUed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAN_BE_F_R_UED, getCanBeFRUed());
	return true;
}

Boolean UNIX_PhysicalConnector::getCanBeFRUed() const
{
	return Boolean(false);
}

Boolean UNIX_PhysicalConnector::getConnectorPinout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTOR_PINOUT, getConnectorPinout());
	return true;
}

String UNIX_PhysicalConnector::getConnectorPinout() const
{
	return String ("");
}

Boolean UNIX_PhysicalConnector::getConnectorType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTOR_TYPE, getConnectorType());
	return true;
}

Array<Uint16> UNIX_PhysicalConnector::getConnectorType() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PhysicalConnector::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_PhysicalConnector::getOtherTypeDescription() const
{
	return String ("");
}

Boolean UNIX_PhysicalConnector::getConnectorGender(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTOR_GENDER, getConnectorGender());
	return true;
}

Uint16 UNIX_PhysicalConnector::getConnectorGender() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalConnector::getConnectorElectricalCharacteristics(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTOR_ELECTRICAL_CHARACTERISTICS, getConnectorElectricalCharacteristics());
	return true;
}

Array<Uint16> UNIX_PhysicalConnector::getConnectorElectricalCharacteristics() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PhysicalConnector::getOtherElectricalCharacteristics(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ELECTRICAL_CHARACTERISTICS, getOtherElectricalCharacteristics());
	return true;
}

Array<String> UNIX_PhysicalConnector::getOtherElectricalCharacteristics() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PhysicalConnector::getNumPhysicalPins(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUM_PHYSICAL_PINS, getNumPhysicalPins());
	return true;
}

Uint32 UNIX_PhysicalConnector::getNumPhysicalPins() const
{
	return Uint32(0);
}

Boolean UNIX_PhysicalConnector::getConnectorLayout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTOR_LAYOUT, getConnectorLayout());
	return true;
}

Uint16 UNIX_PhysicalConnector::getConnectorLayout() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalConnector::getConnectorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTOR_DESCRIPTION, getConnectorDescription());
	return true;
}

String UNIX_PhysicalConnector::getConnectorDescription() const
{
	return String ("");
}



Boolean UNIX_PhysicalConnector::initialize()
{
	return false;
}

Boolean UNIX_PhysicalConnector::load(int &pIndex)
{
	return false;
}

Boolean UNIX_PhysicalConnector::finalize()
{
	return false;
}

Boolean UNIX_PhysicalConnector::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String tagKey;
	String creationClassNameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_TAG)) tagKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
