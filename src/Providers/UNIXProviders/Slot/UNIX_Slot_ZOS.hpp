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


UNIX_Slot::UNIX_Slot(void)
{
}

UNIX_Slot::~UNIX_Slot(void)
{
}


Boolean UNIX_Slot::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_Slot::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_Slot::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_Slot::getCaption() const
{
	return String ("");
}

Boolean UNIX_Slot::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_Slot::getDescription() const
{
	return String ("");
}

Boolean UNIX_Slot::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_Slot::getElementName() const
{
	return String("Slot");
}

Boolean UNIX_Slot::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_Slot::getInstallDate() const
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

Boolean UNIX_Slot::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_Slot::getName() const
{
	return String ("");
}

Boolean UNIX_Slot::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_Slot::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Slot::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_Slot::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Slot::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_Slot::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_Slot::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_Slot::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_Slot::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_Slot::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_Slot::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_Slot::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_Slot::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_Slot::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_Slot::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_Slot::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_Slot::getTag(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TAG, getTag());
	return true;
}

String UNIX_Slot::getTag() const
{
	return String ("");
}

Boolean UNIX_Slot::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_Slot::getCreationClassName() const
{
	return String("UNIX_Slot");
}

Boolean UNIX_Slot::getManufacturer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURER, getManufacturer());
	return true;
}

String UNIX_Slot::getManufacturer() const
{
	return String ("");
}

Boolean UNIX_Slot::getModel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MODEL, getModel());
	return true;
}

String UNIX_Slot::getModel() const
{
	return String ("");
}

Boolean UNIX_Slot::getSKU(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_K_U, getSKU());
	return true;
}

String UNIX_Slot::getSKU() const
{
	return String ("");
}

Boolean UNIX_Slot::getSerialNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERIAL_NUMBER, getSerialNumber());
	return true;
}

String UNIX_Slot::getSerialNumber() const
{
	return String ("");
}

Boolean UNIX_Slot::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_Slot::getVersion() const
{
	return String ("");
}

Boolean UNIX_Slot::getPartNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_NUMBER, getPartNumber());
	return true;
}

String UNIX_Slot::getPartNumber() const
{
	return String ("");
}

Boolean UNIX_Slot::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

String UNIX_Slot::getOtherIdentifyingInfo() const
{
	return String ("");
}

Boolean UNIX_Slot::getPoweredOn(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWERED_ON, getPoweredOn());
	return true;
}

Boolean UNIX_Slot::getPoweredOn() const
{
	return Boolean(false);
}

Boolean UNIX_Slot::getManufactureDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURE_DATE, getManufactureDate());
	return true;
}

CIMDateTime UNIX_Slot::getManufactureDate() const
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

Boolean UNIX_Slot::getVendorEquipmentType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_EQUIPMENT_TYPE, getVendorEquipmentType());
	return true;
}

String UNIX_Slot::getVendorEquipmentType() const
{
	return String ("");
}

Boolean UNIX_Slot::getUserTracking(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_TRACKING, getUserTracking());
	return true;
}

String UNIX_Slot::getUserTracking() const
{
	return String ("");
}

Boolean UNIX_Slot::getCanBeFRUed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAN_BE_F_R_UED, getCanBeFRUed());
	return true;
}

Boolean UNIX_Slot::getCanBeFRUed() const
{
	return Boolean(false);
}

Boolean UNIX_Slot::getConnectorPinout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTOR_PINOUT, getConnectorPinout());
	return true;
}

String UNIX_Slot::getConnectorPinout() const
{
	return String ("");
}

Boolean UNIX_Slot::getConnectorType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTOR_TYPE, getConnectorType());
	return true;
}

Array<Uint16> UNIX_Slot::getConnectorType() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Slot::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_Slot::getOtherTypeDescription() const
{
	return String ("");
}

Boolean UNIX_Slot::getConnectorGender(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTOR_GENDER, getConnectorGender());
	return true;
}

Uint16 UNIX_Slot::getConnectorGender() const
{
	return Uint16(0);
}

Boolean UNIX_Slot::getConnectorElectricalCharacteristics(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTOR_ELECTRICAL_CHARACTERISTICS, getConnectorElectricalCharacteristics());
	return true;
}

Array<Uint16> UNIX_Slot::getConnectorElectricalCharacteristics() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Slot::getOtherElectricalCharacteristics(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ELECTRICAL_CHARACTERISTICS, getOtherElectricalCharacteristics());
	return true;
}

Array<String> UNIX_Slot::getOtherElectricalCharacteristics() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_Slot::getNumPhysicalPins(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUM_PHYSICAL_PINS, getNumPhysicalPins());
	return true;
}

Uint32 UNIX_Slot::getNumPhysicalPins() const
{
	return Uint32(0);
}

Boolean UNIX_Slot::getConnectorLayout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTOR_LAYOUT, getConnectorLayout());
	return true;
}

Uint16 UNIX_Slot::getConnectorLayout() const
{
	return Uint16(0);
}

Boolean UNIX_Slot::getConnectorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTOR_DESCRIPTION, getConnectorDescription());
	return true;
}

String UNIX_Slot::getConnectorDescription() const
{
	return String ("");
}

Boolean UNIX_Slot::getSupportsHotPlug(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTS_HOT_PLUG, getSupportsHotPlug());
	return true;
}

Boolean UNIX_Slot::getSupportsHotPlug() const
{
	return Boolean(false);
}

Boolean UNIX_Slot::getHeightAllowed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEIGHT_ALLOWED, getHeightAllowed());
	return true;
}

Real32 UNIX_Slot::getHeightAllowed() const
{
	return Real32(0);
}

Boolean UNIX_Slot::getLengthAllowed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LENGTH_ALLOWED, getLengthAllowed());
	return true;
}

Real32 UNIX_Slot::getLengthAllowed() const
{
	return Real32(0);
}

Boolean UNIX_Slot::getMaxDataWidth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_DATA_WIDTH, getMaxDataWidth());
	return true;
}

Uint16 UNIX_Slot::getMaxDataWidth() const
{
	return Uint16(0);
}

Boolean UNIX_Slot::getVccMixedVoltageSupport(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VCC_MIXED_VOLTAGE_SUPPORT, getVccMixedVoltageSupport());
	return true;
}

Array<Uint16> UNIX_Slot::getVccMixedVoltageSupport() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Slot::getVppMixedVoltageSupport(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VPP_MIXED_VOLTAGE_SUPPORT, getVppMixedVoltageSupport());
	return true;
}

Array<Uint16> UNIX_Slot::getVppMixedVoltageSupport() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_Slot::getThermalRating(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_THERMAL_RATING, getThermalRating());
	return true;
}

Uint32 UNIX_Slot::getThermalRating() const
{
	return Uint32(0);
}

Boolean UNIX_Slot::getSpecialPurpose(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPECIAL_PURPOSE, getSpecialPurpose());
	return true;
}

Boolean UNIX_Slot::getSpecialPurpose() const
{
	return Boolean(false);
}

Boolean UNIX_Slot::getPurposeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PURPOSE_DESCRIPTION, getPurposeDescription());
	return true;
}

String UNIX_Slot::getPurposeDescription() const
{
	return String ("");
}

Boolean UNIX_Slot::getNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER, getNumber());
	return true;
}

Uint16 UNIX_Slot::getNumber() const
{
	return Uint16(0);
}

Boolean UNIX_Slot::getPowered(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWERED, getPowered());
	return true;
}

Boolean UNIX_Slot::getPowered() const
{
	return Boolean(false);
}

Boolean UNIX_Slot::getOpenSwitch(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPEN_SWITCH, getOpenSwitch());
	return true;
}

Boolean UNIX_Slot::getOpenSwitch() const
{
	return Boolean(false);
}

Boolean UNIX_Slot::getMaxLinkWidth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_LINK_WIDTH, getMaxLinkWidth());
	return true;
}

Uint16 UNIX_Slot::getMaxLinkWidth() const
{
	return Uint16(0);
}

Boolean UNIX_Slot::getVendorCompatibilityStrings(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_COMPATIBILITY_STRINGS, getVendorCompatibilityStrings());
	return true;
}

Array<String> UNIX_Slot::getVendorCompatibilityStrings() const
{
	Array<String> as;
	

	return as;

}



Boolean UNIX_Slot::initialize()
{
	return false;
}

Boolean UNIX_Slot::load(int &pIndex)
{
	return false;
}

Boolean UNIX_Slot::finalize()
{
	return false;
}

Boolean UNIX_Slot::find(Array<CIMKeyBinding> &kbArray)
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
