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


UNIX_USBDevice::UNIX_USBDevice(void)
{
}

UNIX_USBDevice::~UNIX_USBDevice(void)
{
}


Boolean UNIX_USBDevice::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_USBDevice::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_USBDevice::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_USBDevice::getCaption() const
{
	return String ("");
}

Boolean UNIX_USBDevice::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_USBDevice::getDescription() const
{
	return String ("");
}

Boolean UNIX_USBDevice::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_USBDevice::getElementName() const
{
	return String("USBDevice");
}

Boolean UNIX_USBDevice::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_USBDevice::getInstallDate() const
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

Boolean UNIX_USBDevice::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_USBDevice::getName() const
{
	return String ("");
}

Boolean UNIX_USBDevice::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_USBDevice::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_USBDevice::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_USBDevice::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_USBDevice::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_USBDevice::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_USBDevice::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_USBDevice::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_USBDevice::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_USBDevice::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_USBDevice::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_USBDevice::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_USBDevice::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_USBDevice::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_USBDevice::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_USBDevice::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_USBDevice::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_USBDevice::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_USBDevice::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_USBDevice::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_USBDevice::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_USBDevice::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_USBDevice::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_USBDevice::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_USBDevice::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_USBDevice::getTimeOfLastStateChange() const
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

Boolean UNIX_USBDevice::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_USBDevice::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_USBDevice::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_USBDevice::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_USBDevice::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_USBDevice::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_USBDevice::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_USBDevice::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_USBDevice::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_USBDevice::getCreationClassName() const
{
	return String("UNIX_USBDevice");
}

Boolean UNIX_USBDevice::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_USBDevice::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_USBDevice::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_USBDevice::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_USBDevice::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_USBDevice::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_USBDevice::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_USBDevice::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_USBDevice::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_USBDevice::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_USBDevice::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_USBDevice::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_USBDevice::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_USBDevice::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_USBDevice::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_USBDevice::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_USBDevice::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_USBDevice::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_USBDevice::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_USBDevice::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_USBDevice::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_USBDevice::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_USBDevice::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_USBDevice::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_USBDevice::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_USBDevice::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_USBDevice::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_USBDevice::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_USBDevice::getUSBVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_U_S_B_VERSION, getUSBVersion());
	return true;
}

Uint16 UNIX_USBDevice::getUSBVersion() const
{
	return Uint16(0);
}

Boolean UNIX_USBDevice::getClassCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_CODE, getClassCode());
	return true;
}

Uint8 UNIX_USBDevice::getClassCode() const
{
	return Uint8(0);
}

Boolean UNIX_USBDevice::getSubclassCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBCLASS_CODE, getSubclassCode());
	return true;
}

Uint8 UNIX_USBDevice::getSubclassCode() const
{
	return Uint8(0);
}

Boolean UNIX_USBDevice::getProtocolCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_CODE, getProtocolCode());
	return true;
}

Uint8 UNIX_USBDevice::getProtocolCode() const
{
	return Uint8(0);
}

Boolean UNIX_USBDevice::getUSBVersionInBCD(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_U_S_B_VERSION_IN_B_C_D, getUSBVersionInBCD());
	return true;
}

Uint16 UNIX_USBDevice::getUSBVersionInBCD() const
{
	return Uint16(0);
}

Boolean UNIX_USBDevice::getMaxPacketSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_PACKET_SIZE, getMaxPacketSize());
	return true;
}

Uint8 UNIX_USBDevice::getMaxPacketSize() const
{
	return Uint8(0);
}

Boolean UNIX_USBDevice::getVendorID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_ID, getVendorID());
	return true;
}

Uint16 UNIX_USBDevice::getVendorID() const
{
	return Uint16(0);
}

Boolean UNIX_USBDevice::getProductID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRODUCT_ID, getProductID());
	return true;
}

Uint16 UNIX_USBDevice::getProductID() const
{
	return Uint16(0);
}

Boolean UNIX_USBDevice::getDeviceReleaseNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_RELEASE_NUMBER, getDeviceReleaseNumber());
	return true;
}

Uint16 UNIX_USBDevice::getDeviceReleaseNumber() const
{
	return Uint16(0);
}

Boolean UNIX_USBDevice::getManufacturer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURER, getManufacturer());
	return true;
}

String UNIX_USBDevice::getManufacturer() const
{
	return String ("");
}

Boolean UNIX_USBDevice::getProduct(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRODUCT, getProduct());
	return true;
}

String UNIX_USBDevice::getProduct() const
{
	return String ("");
}

Boolean UNIX_USBDevice::getSerialNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERIAL_NUMBER, getSerialNumber());
	return true;
}

String UNIX_USBDevice::getSerialNumber() const
{
	return String ("");
}

Boolean UNIX_USBDevice::getNumberOfConfigs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_CONFIGS, getNumberOfConfigs());
	return true;
}

Uint8 UNIX_USBDevice::getNumberOfConfigs() const
{
	return Uint8(0);
}

Boolean UNIX_USBDevice::getCurrentConfigValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_CONFIG_VALUE, getCurrentConfigValue());
	return true;
}

Uint8 UNIX_USBDevice::getCurrentConfigValue() const
{
	return Uint8(0);
}

Boolean UNIX_USBDevice::getCurrentAlternateSettings(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_ALTERNATE_SETTINGS, getCurrentAlternateSettings());
	return true;
}

Array<Uint8> UNIX_USBDevice::getCurrentAlternateSettings() const
{
	Array<Uint8> as;
	

	return as;

}

Boolean UNIX_USBDevice::getCommandTimeout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMAND_TIMEOUT, getCommandTimeout());
	return true;
}

CIMDateTime UNIX_USBDevice::getCommandTimeout() const
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



Boolean UNIX_USBDevice::initialize()
{
	return false;
}

Boolean UNIX_USBDevice::load(int &pIndex)
{
	return false;
}

Boolean UNIX_USBDevice::finalize()
{
	return false;
}

Boolean UNIX_USBDevice::find(Array<CIMKeyBinding> &kbArray)
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

	return false;
}
