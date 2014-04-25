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


UNIX_USBHub::UNIX_USBHub(void)
{
}

UNIX_USBHub::~UNIX_USBHub(void)
{
}


Boolean UNIX_USBHub::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_USBHub::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_USBHub::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_USBHub::getCaption() const
{
	return String ("");
}

Boolean UNIX_USBHub::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_USBHub::getDescription() const
{
	return String ("");
}

Boolean UNIX_USBHub::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_USBHub::getElementName() const
{
	return String("USBHub");
}

Boolean UNIX_USBHub::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_USBHub::getInstallDate() const
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

Boolean UNIX_USBHub::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_USBHub::getName() const
{
	return String ("");
}

Boolean UNIX_USBHub::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_USBHub::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_USBHub::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_USBHub::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_USBHub::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_USBHub::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_USBHub::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_USBHub::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_USBHub::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_USBHub::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_USBHub::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_USBHub::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_USBHub::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_USBHub::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_USBHub::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_USBHub::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_USBHub::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_USBHub::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_USBHub::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_USBHub::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_USBHub::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_USBHub::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_USBHub::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_USBHub::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_USBHub::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_USBHub::getTimeOfLastStateChange() const
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

Boolean UNIX_USBHub::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_USBHub::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_USBHub::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_USBHub::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_USBHub::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_USBHub::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_USBHub::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_USBHub::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_USBHub::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_USBHub::getCreationClassName() const
{
	return String("UNIX_USBHub");
}

Boolean UNIX_USBHub::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_USBHub::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_USBHub::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_USBHub::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_USBHub::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_USBHub::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_USBHub::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_USBHub::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_USBHub::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_USBHub::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_USBHub::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_USBHub::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_USBHub::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_USBHub::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_USBHub::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_USBHub::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_USBHub::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_USBHub::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_USBHub::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_USBHub::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_USBHub::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_USBHub::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_USBHub::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_USBHub::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_USBHub::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_USBHub::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_USBHub::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_USBHub::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_USBHub::getUSBVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_U_S_B_VERSION, getUSBVersion());
	return true;
}

Uint16 UNIX_USBHub::getUSBVersion() const
{
	return Uint16(0);
}

Boolean UNIX_USBHub::getClassCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASS_CODE, getClassCode());
	return true;
}

Uint8 UNIX_USBHub::getClassCode() const
{
	return Uint8(0);
}

Boolean UNIX_USBHub::getSubclassCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUBCLASS_CODE, getSubclassCode());
	return true;
}

Uint8 UNIX_USBHub::getSubclassCode() const
{
	return Uint8(0);
}

Boolean UNIX_USBHub::getProtocolCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROTOCOL_CODE, getProtocolCode());
	return true;
}

Uint8 UNIX_USBHub::getProtocolCode() const
{
	return Uint8(0);
}

Boolean UNIX_USBHub::getUSBVersionInBCD(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_U_S_B_VERSION_IN_B_C_D, getUSBVersionInBCD());
	return true;
}

Uint16 UNIX_USBHub::getUSBVersionInBCD() const
{
	return Uint16(0);
}

Boolean UNIX_USBHub::getMaxPacketSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_PACKET_SIZE, getMaxPacketSize());
	return true;
}

Uint8 UNIX_USBHub::getMaxPacketSize() const
{
	return Uint8(0);
}

Boolean UNIX_USBHub::getVendorID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_ID, getVendorID());
	return true;
}

Uint16 UNIX_USBHub::getVendorID() const
{
	return Uint16(0);
}

Boolean UNIX_USBHub::getProductID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRODUCT_ID, getProductID());
	return true;
}

Uint16 UNIX_USBHub::getProductID() const
{
	return Uint16(0);
}

Boolean UNIX_USBHub::getDeviceReleaseNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_RELEASE_NUMBER, getDeviceReleaseNumber());
	return true;
}

Uint16 UNIX_USBHub::getDeviceReleaseNumber() const
{
	return Uint16(0);
}

Boolean UNIX_USBHub::getManufacturer(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANUFACTURER, getManufacturer());
	return true;
}

String UNIX_USBHub::getManufacturer() const
{
	return String ("");
}

Boolean UNIX_USBHub::getProduct(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRODUCT, getProduct());
	return true;
}

String UNIX_USBHub::getProduct() const
{
	return String ("");
}

Boolean UNIX_USBHub::getSerialNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERIAL_NUMBER, getSerialNumber());
	return true;
}

String UNIX_USBHub::getSerialNumber() const
{
	return String ("");
}

Boolean UNIX_USBHub::getNumberOfConfigs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_CONFIGS, getNumberOfConfigs());
	return true;
}

Uint8 UNIX_USBHub::getNumberOfConfigs() const
{
	return Uint8(0);
}

Boolean UNIX_USBHub::getCurrentConfigValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_CONFIG_VALUE, getCurrentConfigValue());
	return true;
}

Uint8 UNIX_USBHub::getCurrentConfigValue() const
{
	return Uint8(0);
}

Boolean UNIX_USBHub::getCurrentAlternateSettings(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_ALTERNATE_SETTINGS, getCurrentAlternateSettings());
	return true;
}

Array<Uint8> UNIX_USBHub::getCurrentAlternateSettings() const
{
	Array<Uint8> as;
	

	return as;

}

Boolean UNIX_USBHub::getCommandTimeout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMAND_TIMEOUT, getCommandTimeout());
	return true;
}

CIMDateTime UNIX_USBHub::getCommandTimeout() const
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

Boolean UNIX_USBHub::getGangSwitched(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_GANG_SWITCHED, getGangSwitched());
	return true;
}

Boolean UNIX_USBHub::getGangSwitched() const
{
	return Boolean(false);
}

Boolean UNIX_USBHub::getNumberOfPorts(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_PORTS, getNumberOfPorts());
	return true;
}

Uint8 UNIX_USBHub::getNumberOfPorts() const
{
	return Uint8(0);
}



Boolean UNIX_USBHub::initialize()
{
	return false;
}

Boolean UNIX_USBHub::load(int &pIndex)
{
	return false;
}

Boolean UNIX_USBHub::finalize()
{
	return false;
}

Boolean UNIX_USBHub::find(Array<CIMKeyBinding> &kbArray)
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
