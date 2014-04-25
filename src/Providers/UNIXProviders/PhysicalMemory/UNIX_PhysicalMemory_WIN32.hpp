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


UNIX_PhysicalMemory::UNIX_PhysicalMemory(void)
{
}

UNIX_PhysicalMemory::~UNIX_PhysicalMemory(void)
{
}


Boolean UNIX_PhysicalMemory::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PhysicalMemory::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_PhysicalMemory::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PhysicalMemory::getCaption() const
{
	return String ("");
}

Boolean UNIX_PhysicalMemory::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PhysicalMemory::getDescription() const
{
	return String ("");
}

Boolean UNIX_PhysicalMemory::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PhysicalMemory::getElementName() const
{
	return String("PhysicalMemory");
}

Boolean UNIX_PhysicalMemory::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_PhysicalMemory::getInstallDate() const
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

Boolean UNIX_PhysicalMemory::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PhysicalMemory::getName() const
{
	return String ("");
}

Boolean UNIX_PhysicalMemory::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_PhysicalMemory::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PhysicalMemory::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_PhysicalMemory::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PhysicalMemory::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_PhysicalMemory::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_PhysicalMemory::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_PhysicalMemory::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_PhysicalMemory::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_PhysicalMemory::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalMemory::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_PhysicalMemory::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalMemory::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_PhysicalMemory::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_PhysicalMemory::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_PhysicalMemory::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_PhysicalMemory::getTag(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TAG, getTag());
	return true;
}

String UNIX_PhysicalMemory::getTag() const
{
	return String ("");
}

Boolean UNIX_PhysicalMemory::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_PhysicalMemory::getCreationClassName() const
{
	return String("UNIX_PhysicalMemory");
}

Boolean UNIX_PhysicalMemory::getManufacturer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURER, getManufacturer());
	return true;
}

String UNIX_PhysicalMemory::getManufacturer() const
{
	return String ("");
}

Boolean UNIX_PhysicalMemory::getModel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MODEL, getModel());
	return true;
}

String UNIX_PhysicalMemory::getModel() const
{
	return String ("");
}

Boolean UNIX_PhysicalMemory::getSKU(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_K_U, getSKU());
	return true;
}

String UNIX_PhysicalMemory::getSKU() const
{
	return String ("");
}

Boolean UNIX_PhysicalMemory::getSerialNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERIAL_NUMBER, getSerialNumber());
	return true;
}

String UNIX_PhysicalMemory::getSerialNumber() const
{
	return String ("");
}

Boolean UNIX_PhysicalMemory::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_PhysicalMemory::getVersion() const
{
	return String ("");
}

Boolean UNIX_PhysicalMemory::getPartNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_NUMBER, getPartNumber());
	return true;
}

String UNIX_PhysicalMemory::getPartNumber() const
{
	return String ("");
}

Boolean UNIX_PhysicalMemory::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

String UNIX_PhysicalMemory::getOtherIdentifyingInfo() const
{
	return String ("");
}

Boolean UNIX_PhysicalMemory::getPoweredOn(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWERED_ON, getPoweredOn());
	return true;
}

Boolean UNIX_PhysicalMemory::getPoweredOn() const
{
	return Boolean(false);
}

Boolean UNIX_PhysicalMemory::getManufactureDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURE_DATE, getManufactureDate());
	return true;
}

CIMDateTime UNIX_PhysicalMemory::getManufactureDate() const
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

Boolean UNIX_PhysicalMemory::getVendorEquipmentType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_EQUIPMENT_TYPE, getVendorEquipmentType());
	return true;
}

String UNIX_PhysicalMemory::getVendorEquipmentType() const
{
	return String ("");
}

Boolean UNIX_PhysicalMemory::getUserTracking(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_TRACKING, getUserTracking());
	return true;
}

String UNIX_PhysicalMemory::getUserTracking() const
{
	return String ("");
}

Boolean UNIX_PhysicalMemory::getCanBeFRUed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAN_BE_F_R_UED, getCanBeFRUed());
	return true;
}

Boolean UNIX_PhysicalMemory::getCanBeFRUed() const
{
	return Boolean(false);
}

Boolean UNIX_PhysicalMemory::getRemovalConditions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOVAL_CONDITIONS, getRemovalConditions());
	return true;
}

Uint16 UNIX_PhysicalMemory::getRemovalConditions() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalMemory::getRemovable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOVABLE, getRemovable());
	return true;
}

Boolean UNIX_PhysicalMemory::getRemovable() const
{
	return Boolean(false);
}

Boolean UNIX_PhysicalMemory::getReplaceable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPLACEABLE, getReplaceable());
	return true;
}

Boolean UNIX_PhysicalMemory::getReplaceable() const
{
	return Boolean(false);
}

Boolean UNIX_PhysicalMemory::getHotSwappable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOT_SWAPPABLE, getHotSwappable());
	return true;
}

Boolean UNIX_PhysicalMemory::getHotSwappable() const
{
	return Boolean(false);
}

Boolean UNIX_PhysicalMemory::getFormFactor(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FORM_FACTOR, getFormFactor());
	return true;
}

Uint16 UNIX_PhysicalMemory::getFormFactor() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalMemory::getMemoryType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEMORY_TYPE, getMemoryType());
	return true;
}

Uint16 UNIX_PhysicalMemory::getMemoryType() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalMemory::getTotalWidth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_WIDTH, getTotalWidth());
	return true;
}

Uint16 UNIX_PhysicalMemory::getTotalWidth() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalMemory::getDataWidth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_WIDTH, getDataWidth());
	return true;
}

Uint16 UNIX_PhysicalMemory::getDataWidth() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalMemory::getSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPEED, getSpeed());
	return true;
}

Uint32 UNIX_PhysicalMemory::getSpeed() const
{
	return Uint32(0);
}

Boolean UNIX_PhysicalMemory::getCapacity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPACITY, getCapacity());
	return true;
}

Uint64 UNIX_PhysicalMemory::getCapacity() const
{
	return Uint64(0);
}

Boolean UNIX_PhysicalMemory::getBankLabel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BANK_LABEL, getBankLabel());
	return true;
}

String UNIX_PhysicalMemory::getBankLabel() const
{
	return String ("");
}

Boolean UNIX_PhysicalMemory::getPositionInRow(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSITION_IN_ROW, getPositionInRow());
	return true;
}

Uint32 UNIX_PhysicalMemory::getPositionInRow() const
{
	return Uint32(0);
}

Boolean UNIX_PhysicalMemory::getInterleavePosition(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERLEAVE_POSITION, getInterleavePosition());
	return true;
}

Uint32 UNIX_PhysicalMemory::getInterleavePosition() const
{
	return Uint32(0);
}

Boolean UNIX_PhysicalMemory::getConfiguredMemoryClockSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURED_MEMORY_CLOCK_SPEED, getConfiguredMemoryClockSpeed());
	return true;
}

Uint32 UNIX_PhysicalMemory::getConfiguredMemoryClockSpeed() const
{
	return Uint32(0);
}

Boolean UNIX_PhysicalMemory::getIsSpeedInMhz(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_SPEED_IN_MHZ, getIsSpeedInMhz());
	return true;
}

Boolean UNIX_PhysicalMemory::getIsSpeedInMhz() const
{
	return Boolean(false);
}

Boolean UNIX_PhysicalMemory::getMaxMemorySpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_MEMORY_SPEED, getMaxMemorySpeed());
	return true;
}

Uint32 UNIX_PhysicalMemory::getMaxMemorySpeed() const
{
	return Uint32(0);
}



Boolean UNIX_PhysicalMemory::initialize()
{
	return false;
}

Boolean UNIX_PhysicalMemory::load(int &pIndex)
{
	return false;
}

Boolean UNIX_PhysicalMemory::finalize()
{
	return false;
}

Boolean UNIX_PhysicalMemory::find(Array<CIMKeyBinding> &kbArray)
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
