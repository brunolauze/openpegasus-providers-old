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


UNIX_PhysicalTape::UNIX_PhysicalTape(void)
{
}

UNIX_PhysicalTape::~UNIX_PhysicalTape(void)
{
}


Boolean UNIX_PhysicalTape::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PhysicalTape::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_PhysicalTape::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PhysicalTape::getCaption() const
{
	return String ("");
}

Boolean UNIX_PhysicalTape::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PhysicalTape::getDescription() const
{
	return String ("");
}

Boolean UNIX_PhysicalTape::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PhysicalTape::getElementName() const
{
	return String("PhysicalTape");
}

Boolean UNIX_PhysicalTape::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_PhysicalTape::getInstallDate() const
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

Boolean UNIX_PhysicalTape::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PhysicalTape::getName() const
{
	return String ("");
}

Boolean UNIX_PhysicalTape::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_PhysicalTape::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PhysicalTape::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_PhysicalTape::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PhysicalTape::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_PhysicalTape::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_PhysicalTape::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_PhysicalTape::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_PhysicalTape::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_PhysicalTape::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalTape::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_PhysicalTape::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalTape::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_PhysicalTape::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_PhysicalTape::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_PhysicalTape::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_PhysicalTape::getTag(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TAG, getTag());
	return true;
}

String UNIX_PhysicalTape::getTag() const
{
	return String ("");
}

Boolean UNIX_PhysicalTape::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_PhysicalTape::getCreationClassName() const
{
	return String("UNIX_PhysicalTape");
}

Boolean UNIX_PhysicalTape::getManufacturer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURER, getManufacturer());
	return true;
}

String UNIX_PhysicalTape::getManufacturer() const
{
	return String ("");
}

Boolean UNIX_PhysicalTape::getModel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MODEL, getModel());
	return true;
}

String UNIX_PhysicalTape::getModel() const
{
	return String ("");
}

Boolean UNIX_PhysicalTape::getSKU(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_K_U, getSKU());
	return true;
}

String UNIX_PhysicalTape::getSKU() const
{
	return String ("");
}

Boolean UNIX_PhysicalTape::getSerialNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERIAL_NUMBER, getSerialNumber());
	return true;
}

String UNIX_PhysicalTape::getSerialNumber() const
{
	return String ("");
}

Boolean UNIX_PhysicalTape::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_PhysicalTape::getVersion() const
{
	return String ("");
}

Boolean UNIX_PhysicalTape::getPartNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PART_NUMBER, getPartNumber());
	return true;
}

String UNIX_PhysicalTape::getPartNumber() const
{
	return String ("");
}

Boolean UNIX_PhysicalTape::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

String UNIX_PhysicalTape::getOtherIdentifyingInfo() const
{
	return String ("");
}

Boolean UNIX_PhysicalTape::getPoweredOn(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWERED_ON, getPoweredOn());
	return true;
}

Boolean UNIX_PhysicalTape::getPoweredOn() const
{
	return Boolean(false);
}

Boolean UNIX_PhysicalTape::getManufactureDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURE_DATE, getManufactureDate());
	return true;
}

CIMDateTime UNIX_PhysicalTape::getManufactureDate() const
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

Boolean UNIX_PhysicalTape::getVendorEquipmentType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_EQUIPMENT_TYPE, getVendorEquipmentType());
	return true;
}

String UNIX_PhysicalTape::getVendorEquipmentType() const
{
	return String ("");
}

Boolean UNIX_PhysicalTape::getUserTracking(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_TRACKING, getUserTracking());
	return true;
}

String UNIX_PhysicalTape::getUserTracking() const
{
	return String ("");
}

Boolean UNIX_PhysicalTape::getCanBeFRUed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAN_BE_F_R_UED, getCanBeFRUed());
	return true;
}

Boolean UNIX_PhysicalTape::getCanBeFRUed() const
{
	return Boolean(false);
}

Boolean UNIX_PhysicalTape::getRemovalConditions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOVAL_CONDITIONS, getRemovalConditions());
	return true;
}

Uint16 UNIX_PhysicalTape::getRemovalConditions() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalTape::getRemovable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOVABLE, getRemovable());
	return true;
}

Boolean UNIX_PhysicalTape::getRemovable() const
{
	return Boolean(false);
}

Boolean UNIX_PhysicalTape::getReplaceable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPLACEABLE, getReplaceable());
	return true;
}

Boolean UNIX_PhysicalTape::getReplaceable() const
{
	return Boolean(false);
}

Boolean UNIX_PhysicalTape::getHotSwappable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOT_SWAPPABLE, getHotSwappable());
	return true;
}

Boolean UNIX_PhysicalTape::getHotSwappable() const
{
	return Boolean(false);
}

Boolean UNIX_PhysicalTape::getCapacity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPACITY, getCapacity());
	return true;
}

Uint64 UNIX_PhysicalTape::getCapacity() const
{
	return Uint64(0);
}

Boolean UNIX_PhysicalTape::getMediaType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA_TYPE, getMediaType());
	return true;
}

Uint16 UNIX_PhysicalTape::getMediaType() const
{
	return Uint16(0);
}

Boolean UNIX_PhysicalTape::getMediaDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA_DESCRIPTION, getMediaDescription());
	return true;
}

String UNIX_PhysicalTape::getMediaDescription() const
{
	return String ("");
}

Boolean UNIX_PhysicalTape::getWriteProtectOn(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WRITE_PROTECT_ON, getWriteProtectOn());
	return true;
}

Boolean UNIX_PhysicalTape::getWriteProtectOn() const
{
	return Boolean(false);
}

Boolean UNIX_PhysicalTape::getCleanerMedia(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLEANER_MEDIA, getCleanerMedia());
	return true;
}

Boolean UNIX_PhysicalTape::getCleanerMedia() const
{
	return Boolean(false);
}

Boolean UNIX_PhysicalTape::getMediaSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA_SIZE, getMediaSize());
	return true;
}

Real32 UNIX_PhysicalTape::getMediaSize() const
{
	return Real32(0);
}

Boolean UNIX_PhysicalTape::getMaxMounts(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_MOUNTS, getMaxMounts());
	return true;
}

Uint64 UNIX_PhysicalTape::getMaxMounts() const
{
	return Uint64(0);
}

Boolean UNIX_PhysicalTape::getMountCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MOUNT_COUNT, getMountCount());
	return true;
}

Uint64 UNIX_PhysicalTape::getMountCount() const
{
	return Uint64(0);
}

Boolean UNIX_PhysicalTape::getDualSided(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DUAL_SIDED, getDualSided());
	return true;
}

Boolean UNIX_PhysicalTape::getDualSided() const
{
	return Boolean(false);
}

Boolean UNIX_PhysicalTape::getPhysicalLabels(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PHYSICAL_LABELS, getPhysicalLabels());
	return true;
}

Array<String> UNIX_PhysicalTape::getPhysicalLabels() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PhysicalTape::getLabelStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LABEL_STATES, getLabelStates());
	return true;
}

Array<Uint16> UNIX_PhysicalTape::getLabelStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PhysicalTape::getLabelFormats(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LABEL_FORMATS, getLabelFormats());
	return true;
}

Array<Uint16> UNIX_PhysicalTape::getLabelFormats() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PhysicalTape::getTimeOfLastMount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_MOUNT, getTimeOfLastMount());
	return true;
}

CIMDateTime UNIX_PhysicalTape::getTimeOfLastMount() const
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

Boolean UNIX_PhysicalTape::getTotalMountTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_MOUNT_TIME, getTotalMountTime());
	return true;
}

Uint64 UNIX_PhysicalTape::getTotalMountTime() const
{
	return Uint64(0);
}

Boolean UNIX_PhysicalTape::getTapeLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TAPE_LENGTH, getTapeLength());
	return true;
}

Real32 UNIX_PhysicalTape::getTapeLength() const
{
	return Real32(0);
}

Boolean UNIX_PhysicalTape::getUnloadAnywhere(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNLOAD_ANYWHERE, getUnloadAnywhere());
	return true;
}

Boolean UNIX_PhysicalTape::getUnloadAnywhere() const
{
	return Boolean(false);
}



Boolean UNIX_PhysicalTape::initialize()
{
	return false;
}

Boolean UNIX_PhysicalTape::load(int &pIndex)
{
	return false;
}

Boolean UNIX_PhysicalTape::finalize()
{
	return false;
}

Boolean UNIX_PhysicalTape::find(Array<CIMKeyBinding> &kbArray)
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
