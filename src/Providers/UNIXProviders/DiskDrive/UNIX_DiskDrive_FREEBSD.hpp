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

#include <sys/sysctl.h>

UNIX_DiskDrive::UNIX_DiskDrive(void)
{
}

UNIX_DiskDrive::~UNIX_DiskDrive(void)
{
}


Boolean UNIX_DiskDrive::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DiskDrive::getInstanceID() const
{
	String s;
	s.append(disknode->name);
	char unit[128];
	sprintf(unit, "%d", disknode->unit);
	s.append(unit);
	return s;
}

Boolean UNIX_DiskDrive::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DiskDrive::getCaption() const
{
	return String(disknode->product);
}

Boolean UNIX_DiskDrive::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DiskDrive::getDescription() const
{
	return String(disknode->desc);
}

Boolean UNIX_DiskDrive::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DiskDrive::getElementName() const
{
	return String("DiskDrive");
}

Boolean UNIX_DiskDrive::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_DiskDrive::getInstallDate() const
{
	return CIMHelper::getOSInstallDate();
}

Boolean UNIX_DiskDrive::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_DiskDrive::getName() const
{
	return getInstanceID();
}

Boolean UNIX_DiskDrive::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_DiskDrive::getOperationalStatus() const
{
	Array<Uint16> as;
	as.append(2); //OK

	return as;

}

Boolean UNIX_DiskDrive::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_DiskDrive::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_DiskDrive::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_DiskDrive::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_DiskDrive::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_DiskDrive::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_DiskDrive::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_DiskDrive::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_DiskDrive::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_DiskDrive::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_DiskDrive::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_DiskDrive::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_DiskDrive::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_DiskDrive::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_DiskDrive::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_DiskDrive::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_DiskDrive::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_DiskDrive::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_DiskDrive::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_DiskDrive::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_DiskDrive::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_DiskDrive::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_DiskDrive::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_DiskDrive::getTimeOfLastStateChange() const
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

Boolean UNIX_DiskDrive::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_DiskDrive::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DiskDrive::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_DiskDrive::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_DiskDrive::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_DiskDrive::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_DiskDrive::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_DiskDrive::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_DiskDrive::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_DiskDrive::getCreationClassName() const
{
	return String("UNIX_DiskDrive");
}

Boolean UNIX_DiskDrive::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_DiskDrive::getDeviceID() const
{
	return getInstanceID();
}

Boolean UNIX_DiskDrive::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_DiskDrive::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_DiskDrive::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_DiskDrive::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DiskDrive::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_DiskDrive::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_DiskDrive::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_DiskDrive::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_DiskDrive::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_DiskDrive::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_DiskDrive::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_DiskDrive::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_DiskDrive::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_DiskDrive::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_DiskDrive::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_DiskDrive::getOtherIdentifyingInfo() const
{
	Array<String> as;

	return as;

}

Boolean UNIX_DiskDrive::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_DiskDrive::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_DiskDrive::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_DiskDrive::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_DiskDrive::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_DiskDrive::getIdentifyingDescriptions() const
{
	Array<String> as;
	String vendor; vendor.append("Vendor: "); vendor.append(disknode->vendor);
	String product; product.append("Product: "); product.append(disknode->product);
	String revision; revision.append("Revision: "); revision.append(disknode->revision);
	String firmware; firmware.append("Firmware: "); firmware.append(disknode->firmware);
	String serial; serial.append("Serial: "); serial.append(disknode->serial);
	as.append(vendor); as.append(product); as.append(revision); as.append(firmware); as.append(serial);

	return as;

}

Boolean UNIX_DiskDrive::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_DiskDrive::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DiskDrive::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_DiskDrive::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_DiskDrive::getCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITIES, getCapabilities());
	return true;
}

Array<Uint16> UNIX_DiskDrive::getCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DiskDrive::getCapabilityDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITY_DESCRIPTIONS, getCapabilityDescriptions());
	return true;
}

Array<String> UNIX_DiskDrive::getCapabilityDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_DiskDrive::getErrorMethodology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_METHODOLOGY, getErrorMethodology());
	return true;
}

String UNIX_DiskDrive::getErrorMethodology() const
{
	return String ("");
}

Boolean UNIX_DiskDrive::getCompressionMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMPRESSION_METHOD, getCompressionMethod());
	return true;
}

String UNIX_DiskDrive::getCompressionMethod() const
{
	return String ("Unknown");
}

Boolean UNIX_DiskDrive::getNumberOfMediaSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_MEDIA_SUPPORTED, getNumberOfMediaSupported());
	return true;
}

Uint32 UNIX_DiskDrive::getNumberOfMediaSupported() const
{
	return Uint32(1);
}

Boolean UNIX_DiskDrive::getMaxMediaSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_MEDIA_SIZE, getMaxMediaSize());
	return true;
}

Uint64 UNIX_DiskDrive::getMaxMediaSize() const
{
	return Uint64(0);
}

Boolean UNIX_DiskDrive::getDefaultBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_BLOCK_SIZE, getDefaultBlockSize());
	return true;
}

Uint64 UNIX_DiskDrive::getDefaultBlockSize() const
{
	return Uint64(512);
}

Boolean UNIX_DiskDrive::getMaxBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_BLOCK_SIZE, getMaxBlockSize());
	return true;
}

Uint64 UNIX_DiskDrive::getMaxBlockSize() const
{
	return Uint64(512);
}

Boolean UNIX_DiskDrive::getMinBlockSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_BLOCK_SIZE, getMinBlockSize());
	return true;
}

Uint64 UNIX_DiskDrive::getMinBlockSize() const
{
	return Uint64(512);
}

Boolean UNIX_DiskDrive::getNeedsCleaning(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NEEDS_CLEANING, getNeedsCleaning());
	return true;
}

Boolean UNIX_DiskDrive::getNeedsCleaning() const
{
	return Boolean(false);
}

Boolean UNIX_DiskDrive::getMediaIsLocked(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MEDIA_IS_LOCKED, getMediaIsLocked());
	return true;
}

Boolean UNIX_DiskDrive::getMediaIsLocked() const
{
	return Boolean(false);
}

Boolean UNIX_DiskDrive::getSecurity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SECURITY, getSecurity());
	return true;
}

Uint16 UNIX_DiskDrive::getSecurity() const
{
	return Uint16(0);
}

Boolean UNIX_DiskDrive::getLastCleaned(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_CLEANED, getLastCleaned());
	return true;
}

CIMDateTime UNIX_DiskDrive::getLastCleaned() const
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

Boolean UNIX_DiskDrive::getMaxAccessTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ACCESS_TIME, getMaxAccessTime());
	return true;
}

Uint64 UNIX_DiskDrive::getMaxAccessTime() const
{
	return Uint64(0);
}

Boolean UNIX_DiskDrive::getUncompressedDataRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNCOMPRESSED_DATA_RATE, getUncompressedDataRate());
	return true;
}

Uint32 UNIX_DiskDrive::getUncompressedDataRate() const
{
	return Uint32(0);
}

Boolean UNIX_DiskDrive::getLoadTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOAD_TIME, getLoadTime());
	return true;
}

Uint64 UNIX_DiskDrive::getLoadTime() const
{
	return Uint64(0);
}

Boolean UNIX_DiskDrive::getUnloadTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNLOAD_TIME, getUnloadTime());
	return true;
}

Uint64 UNIX_DiskDrive::getUnloadTime() const
{
	return Uint64(0);
}

Boolean UNIX_DiskDrive::getMountCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MOUNT_COUNT, getMountCount());
	return true;
}

Uint64 UNIX_DiskDrive::getMountCount() const
{
	return Uint64(0);
}

Boolean UNIX_DiskDrive::getTimeOfLastMount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_MOUNT, getTimeOfLastMount());
	return true;
}

CIMDateTime UNIX_DiskDrive::getTimeOfLastMount() const
{
	/* Last Boot or Modified Dev File ??? */
	int mib[2] = { CTL_KERN, KERN_BOOTTIME };
    struct timeval   tv;
    struct tm* clock;
    size_t len = sizeof(tv);
    if (sysctl(mib, 2, &tv, &len, NULL, 0) == -1)
    {
        return CIMHelper::getOSInstallDate();
    }
	clock = gmtime(&(tv.tv_sec));	// Get the last modified time and put it into the time structure
	/*
	struct tm* clock;			// create a time structure
	struct stat attrib;			// create a file attribute structure
	const char* devName = getName().getCString();
	stat(devName, &attrib);		// get the attributes mnt
	clock = gmtime(&(attrib.st_mtime));	// Get the last modified time and put it into the time structure
	*/
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

Boolean UNIX_DiskDrive::getTotalMountTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_MOUNT_TIME, getTotalMountTime());
	return true;
}

Uint64 UNIX_DiskDrive::getTotalMountTime() const
{
	return Uint64(0);
}

Boolean UNIX_DiskDrive::getUnitsDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNITS_DESCRIPTION, getUnitsDescription());
	return true;
}

String UNIX_DiskDrive::getUnitsDescription() const
{
	return String ("");
}

Boolean UNIX_DiskDrive::getMaxUnitsBeforeCleaning(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_UNITS_BEFORE_CLEANING, getMaxUnitsBeforeCleaning());
	return true;
}

Uint64 UNIX_DiskDrive::getMaxUnitsBeforeCleaning() const
{
	return Uint64(0);
}

Boolean UNIX_DiskDrive::getUnitsUsed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNITS_USED, getUnitsUsed());
	return true;
}

Uint64 UNIX_DiskDrive::getUnitsUsed() const
{
	return Uint64(0);
}

Boolean UNIX_DiskDrive::initialize()
{
	int bufsize;
	disknode = NULL;
	if ((fd = open(XPT_DEVICE, O_RDWR)) == -1) {
		//warn("couldn't open %s", XPT_DEVICE);
		return false;
	}

	bzero(&ccb, sizeof(union ccb));

	ccb.ccb_h.path_id = CAM_XPT_PATH_ID;
	ccb.ccb_h.target_id = CAM_TARGET_WILDCARD;
	ccb.ccb_h.target_lun = CAM_LUN_WILDCARD;

	ccb.ccb_h.func_code = XPT_DEV_MATCH;
	bufsize = sizeof(struct dev_match_result) * 100;
	ccb.cdm.match_buf_len = bufsize;
	ccb.cdm.matches = (struct dev_match_result *)malloc(bufsize);
	if (ccb.cdm.matches == NULL) {
		//warnx("can't malloc memory for matches");
		close(fd);
		return false;
	}
	ccb.cdm.num_matches = 0;

	/*
	 * We fetch all nodes, since we display most of them in the default
	 * case, and all in the verbose case.
	 */
	ccb.cdm.num_patterns = 0;
	ccb.cdm.pattern_buf_len = 0;

	int error;
	unsigned int i;
	int need_close;
	int skip_device;
	do {
		if (ioctl(fd, CAMIOCOMMAND, &ccb) == -1) {
			//warn("error sending CAMIOCOMMAND ioctl");
			error = 1;
			break;
		}

		if ((ccb.ccb_h.status != CAM_REQ_CMP)
		 || ((ccb.cdm.status != CAM_DEV_MATCH_LAST)
		    && (ccb.cdm.status != CAM_DEV_MATCH_MORE))) {
			//warnx("got CAM error %#x, CDM error %d\n",
			//      ccb.ccb_h.status, ccb.cdm.status);
			error = 1;
			break;
		}
		char _desc[512];
		char _vendor[96];
		char _product[96];
		char _serial[96];
		char _revision[32];
		char _firmware[10];
		for (i = 0; i < ccb.cdm.num_matches; i++) {
			
			switch (ccb.cdm.matches[i].type) {
			case DEV_MATCH_BUS: {
				
				/*
				struct bus_match_result *bus_result;
				bus_result =
					&ccb.cdm.matches[i].result.bus_result;


				cout << "DEVNAME :" << bus_result->dev_name << endl;
				*/

				/*
				fprintf(stdout, "scbus%d on %s%d bus %d%s\n",
					bus_result->path_id,
					bus_result->dev_name,
					bus_result->unit_number,
					bus_result->bus_id,
					":");
				*/
				break;
			}
			case DEV_MATCH_DEVICE: {
				struct device_match_result *dev_result;
				u_char vendor[16], product[48], serial[48], revision[16];
				u_char fw[5];
				//char tmpstr[256];

				dev_result =
				     &ccb.cdm.matches[i].result.device_result;

				if ((dev_result->flags
				     & DEV_RESULT_UNCONFIGURED)) {
					skip_device = 1;
					break;
				} else
					skip_device = 0;

				if (dev_result->protocol == PROTO_SCSI) {
				    cam_strvis(vendor, (unsigned char*)dev_result->inq_data.vendor,
					   sizeof(dev_result->inq_data.vendor),
					   sizeof(vendor));
				    cam_strvis(product,
					   (unsigned char*)dev_result->inq_data.product,
					   sizeof(dev_result->inq_data.product),
					   sizeof(product));
				    cam_strvis(revision,
					   (unsigned char*)dev_result->inq_data.revision,
					  sizeof(dev_result->inq_data.revision),
					   sizeof(revision));
					sprintf(_desc, "%s %s %s", vendor, product,
					revision);
				    sprintf(_vendor, "%s", vendor);
				    sprintf(_product, "%s", product);
				    sprintf(_revision, "%s", revision);
				    sprintf(_firmware, "%s", "");
				    sprintf(_serial, "%s", "");
				} else if (dev_result->protocol == PROTO_ATA ||
				    dev_result->protocol == PROTO_SATAPM) {
				    cam_strvis(vendor, (unsigned char*)dev_result->ident_data.vendor7,
					   sizeof(dev_result->ident_data.vendor7),
					   sizeof(vendor));
				    cam_strvis(product,
					   dev_result->ident_data.model,
					   sizeof(dev_result->ident_data.model),
					   sizeof(product));
				    cam_strvis(revision,
					   dev_result->ident_data.revision,
					  sizeof(dev_result->ident_data.revision),
					   sizeof(revision));
					cam_strvis(serial,
					   dev_result->ident_data.serial,
					  sizeof(dev_result->ident_data.serial),
					   sizeof(serial));
				    sprintf(_desc, "%s %s", product,
					revision);
					sprintf(_vendor, "%s", vendor);
					sprintf(_product, "%s", product);
					sprintf(_revision, "%s", revision);
					sprintf(_firmware, "%s", "");
					sprintf(_serial, "%s", serial);
				} else if (dev_result->protocol == PROTO_SEMB) {
					struct sep_identify_data *sid;
					cam_strvis(serial,
					   dev_result->ident_data.serial,
					  sizeof(dev_result->ident_data.serial),
					   sizeof(serial));
					sid = (struct sep_identify_data *)
					    &dev_result->ident_data;
					cam_strvis(vendor, sid->vendor_id,
					    sizeof(sid->vendor_id),
					    sizeof(vendor));
					cam_strvis(product, sid->product_id,
					    sizeof(sid->product_id),
					    sizeof(product));
					cam_strvis(revision, sid->product_rev,
					    sizeof(sid->product_rev),
					    sizeof(revision));
					cam_strvis(fw, sid->firmware_rev,
					    sizeof(sid->firmware_rev),
					    sizeof(fw));
					sprintf(_desc, "%s %s %s %s",
					    vendor, product, revision, fw);
					sprintf(_vendor, "%s", vendor);
					sprintf(_product, "%s", product);
					sprintf(_revision, "%s", revision);
					sprintf(_firmware, "%s", fw);
					sprintf(_serial, "%s", serial);
				}
				if (need_close) {
					/* fprintf(stdout, ")\n"); */
					need_close = 0;
				}

				/*
				fprintf(stdout, "%-33s  at scbus%d "
					"target %d lun %jx (",
					tmpstr,
					dev_result->path_id,
					dev_result->target_id,
					(uintmax_t)dev_result->target_lun);
				*/
				need_close = 1;

				break;
			}
			case DEV_MATCH_PERIPH: {
				

				struct periph_match_result *periph_result;
				periph_result =
				      &ccb.cdm.matches[i].result.periph_result;
				
				if (skip_device != 0)
					break;
				
				if (strcmp(periph_result->periph_name, "pass") == 0) continue;
				struct disknode_t *temp;
				struct disknode_t *nn=(struct  disknode_t*)malloc(sizeof(struct disknode_t));

				sprintf(nn->desc, "%s", _desc);
				sprintf(nn->vendor, "%s", _vendor);
				sprintf(nn->product, "%s", _product);
				sprintf(nn->revision, "%s", _revision);
				sprintf(nn->firmware, "%s", _firmware);
				sprintf(nn->serial, "%s", _serial);
				nn->name = periph_result->periph_name;
				nn->unit = periph_result->unit_number;

				/*
				cout << " Name: " << periph_result->periph_name <<
						" Unit: " << periph_result->unit_number <<
						" PathId: " << periph_result->path_id <<
						" TargetId: " << periph_result->target_id <<
						" LunId: " << periph_result->target_lun << endl;
				*/
				/*
				fprintf(stdout, "%s%d",
					periph_result->periph_name,
					periph_result->unit_number);
				*/

				nn->next=NULL;
				if(disknode==NULL)
				{
					disknode=nn;
				}
				else
				{
				 	temp=disknode;
				   while(temp->next!=NULL)
				     temp=temp->next;
				   temp->next=nn;
				}   
				need_close++;
				break;
			}
			default:
				/* fprintf(stdout, "unknown match type\n"); */
				break;
			}
		}
	} while ((ccb.ccb_h.status == CAM_REQ_CMP)
		&& (ccb.cdm.status == CAM_DEV_MATCH_MORE));
	return true;
}

Boolean UNIX_DiskDrive::load(int &pIndex)
{
	if (pIndex > 0) disknode = disknode->next;
	if (disknode != NULL)
	{
		return true;		
	}
	return false;
}

Boolean UNIX_DiskDrive::finalize()
{
	close(fd);
	return false;
}

Boolean UNIX_DiskDrive::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String creationClassNameKey;
	String deviceIDKey;

	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DEVICE_ID)) deviceIDKey = kb.getValue();
	}

	/* EXecute find with extracted keys */
	for(int i = 0; load(i); i++)
	{
		if (String::equal(systemNameKey, getSystemName()) &&
			String::equal(deviceIDKey, getDeviceID()))
		{
			return true;
		}
	}

	return false;
}
