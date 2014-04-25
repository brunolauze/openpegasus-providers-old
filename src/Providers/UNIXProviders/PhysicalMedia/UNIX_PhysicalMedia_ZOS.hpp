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


UNIX_PhysicalMedia::UNIX_PhysicalMedia(void)
{
}

UNIX_PhysicalMedia::~UNIX_PhysicalMedia(void)
{
}


Boolean UNIX_PhysicalMedia::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PhysicalMedia::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_PhysicalMedia::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PhysicalMedia::getCaption() const
{
	return String ("");
}

Boolean UNIX_PhysicalMedia::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PhysicalMedia::getDescription() const
{
	return String ("");
}

Boolean UNIX_PhysicalMedia::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PhysicalMedia::getElementName() const
{
	return String("PhysicalMedia");
}

Boolean UNIX_PhysicalMedia::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_PhysicalMedia::getInstallDate() const
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

Boolean UNIX_PhysicalMedia::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PhysicalMedia::getName() const
{
	return String ("");
}

Boolean UNIX_PhysicalMedia::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_PhysicalMedia::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PhysicalMedia::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_PhysicalMedia::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PhysicalMedia::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_PhysicalMedia::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_PhysicalMedia::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_PhysicalMedia::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_PhysicalMedia::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_PhysicalMedia::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalMedia::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_PhysicalMedia::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalMedia::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_PhysicalMedia::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_PhysicalMedia::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_PhysicalMedia::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_PhysicalMedia::getTag(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TAG, getTag());
	return true;
}

String UNIX_PhysicalMedia::getTag() const
{
	return String ("");
}

Boolean UNIX_PhysicalMedia::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_PhysicalMedia::getCreationClassName() const
{
	return String("UNIX_PhysicalMedia");
}

Boolean UNIX_PhysicalMedia::getManufacturer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURER, getManufacturer());
	return true;
}

String UNIX_PhysicalMedia::getManufacturer() const
{
	return String ("");
}

Boolean UNIX_PhysicalMedia::getModel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MODEL, getModel());
	return true;
}

String UNIX_PhysicalMedia::getModel() const
{
	return String ("");
}

Boolean UNIX_PhysicalMedia::getSKU(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_K_U, getSKU());
	return true;
}

String UNIX_PhysicalMedia::getSKU() const
{
	return String ("");
}

Boolean UNIX_PhysicalMedia::getSerialNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERIAL_NUMBER, getSerialNumber());
	return true;
}

String UNIX_PhysicalMedia::getSerialNumber() const
{
	return String ("");
}

Boolean UNIX_PhysicalMedia::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_PhysicalMedia::getVersion() const
{
	return String ("");
}

Boolean UNIX_PhysicalMedia::getPartNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_NUMBER, getPartNumber());
	return true;
}

String UNIX_PhysicalMedia::getPartNumber() const
{
	return String ("");
}

Boolean UNIX_PhysicalMedia::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

String UNIX_PhysicalMedia::getOtherIdentifyingInfo() const
{
	return String ("");
}

Boolean UNIX_PhysicalMedia::getPoweredOn(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWERED_ON, getPoweredOn());
	return true;
}

Boolean UNIX_PhysicalMedia::getPoweredOn() const
{
	return Boolean(false);
}

Boolean UNIX_PhysicalMedia::getManufactureDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURE_DATE, getManufactureDate());
	return true;
}

CIMDateTime UNIX_PhysicalMedia::getManufactureDate() const
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

Boolean UNIX_PhysicalMedia::getVendorEquipmentType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_EQUIPMENT_TYPE, getVendorEquipmentType());
	return true;
}

String UNIX_PhysicalMedia::getVendorEquipmentType() const
{
	return String ("");
}

Boolean UNIX_PhysicalMedia::getUserTracking(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_TRACKING, getUserTracking());
	return true;
}

String UNIX_PhysicalMedia::getUserTracking() const
{
	return String ("");
}

Boolean UNIX_PhysicalMedia::getCanBeFRUed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAN_BE_F_R_UED, getCanBeFRUed());
	return true;
}

Boolean UNIX_PhysicalMedia::getCanBeFRUed() const
{
	return Boolean(false);
}

Boolean UNIX_PhysicalMedia::getRemovalConditions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOVAL_CONDITIONS, getRemovalConditions());
	return true;
}

Uint16 UNIX_PhysicalMedia::getRemovalConditions() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalMedia::getRemovable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOVABLE, getRemovable());
	return true;
}

Boolean UNIX_PhysicalMedia::getRemovable() const
{
	return Boolean(false);
}

Boolean UNIX_PhysicalMedia::getReplaceable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPLACEABLE, getReplaceable());
	return true;
}

Boolean UNIX_PhysicalMedia::getReplaceable() const
{
	return Boolean(false);
}

Boolean UNIX_PhysicalMedia::getHotSwappable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOT_SWAPPABLE, getHotSwappable());
	return true;
}

Boolean UNIX_PhysicalMedia::getHotSwappable() const
{
	return Boolean(false);
}

Boolean UNIX_PhysicalMedia::getCapacity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPACITY, getCapacity());
	return true;
}

Uint64 UNIX_PhysicalMedia::getCapacity() const
{
	return Uint64(0);
}

Boolean UNIX_PhysicalMedia::getMediaType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA_TYPE, getMediaType());
	return true;
}

Uint16 UNIX_PhysicalMedia::getMediaType() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalMedia::getMediaDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA_DESCRIPTION, getMediaDescription());
	return true;
}

String UNIX_PhysicalMedia::getMediaDescription() const
{
	return String ("");
}

Boolean UNIX_PhysicalMedia::getWriteProtectOn(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WRITE_PROTECT_ON, getWriteProtectOn());
	return true;
}

Boolean UNIX_PhysicalMedia::getWriteProtectOn() const
{
	return Boolean(false);
}

Boolean UNIX_PhysicalMedia::getCleanerMedia(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLEANER_MEDIA, getCleanerMedia());
	return true;
}

Boolean UNIX_PhysicalMedia::getCleanerMedia() const
{
	return Boolean(false);
}

Boolean UNIX_PhysicalMedia::getMediaSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA_SIZE, getMediaSize());
	return true;
}

Real32 UNIX_PhysicalMedia::getMediaSize() const
{
	return Real32(0);
}

Boolean UNIX_PhysicalMedia::getMaxMounts(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_MOUNTS, getMaxMounts());
	return true;
}

Uint64 UNIX_PhysicalMedia::getMaxMounts() const
{
	return Uint64(0);
}

Boolean UNIX_PhysicalMedia::getMountCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MOUNT_COUNT, getMountCount());
	return true;
}

Uint64 UNIX_PhysicalMedia::getMountCount() const
{
	return Uint64(0);
}

Boolean UNIX_PhysicalMedia::getDualSided(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DUAL_SIDED, getDualSided());
	return true;
}

Boolean UNIX_PhysicalMedia::getDualSided() const
{
	return Boolean(false);
}

Boolean UNIX_PhysicalMedia::getPhysicalLabels(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PHYSICAL_LABELS, getPhysicalLabels());
	return true;
}

Array<String> UNIX_PhysicalMedia::getPhysicalLabels() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PhysicalMedia::getLabelStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LABEL_STATES, getLabelStates());
	return true;
}

Array<Uint16> UNIX_PhysicalMedia::getLabelStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PhysicalMedia::getLabelFormats(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LABEL_FORMATS, getLabelFormats());
	return true;
}

Array<Uint16> UNIX_PhysicalMedia::getLabelFormats() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PhysicalMedia::getTimeOfLastMount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_MOUNT, getTimeOfLastMount());
	return true;
}

CIMDateTime UNIX_PhysicalMedia::getTimeOfLastMount() const
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

Boolean UNIX_PhysicalMedia::getTotalMountTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_MOUNT_TIME, getTotalMountTime());
	return true;
}

Uint64 UNIX_PhysicalMedia::getTotalMountTime() const
{
	return Uint64(0);
}



Boolean UNIX_PhysicalMedia::initialize()
{
	return false;
}

Boolean UNIX_PhysicalMedia::load(int &pIndex)
{
	return false;
}

Boolean UNIX_PhysicalMedia::finalize()
{
	return false;
}

Boolean UNIX_PhysicalMedia::find(Array<CIMKeyBinding> &kbArray)
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
