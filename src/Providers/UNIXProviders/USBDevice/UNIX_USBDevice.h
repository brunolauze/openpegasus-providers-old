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

#ifndef __UNIX_USBDEVICE_H
#define __UNIX_USBDEVICE_H


#include "CIM_LogicalDevice.h"

#include "UNIX_USBDeviceDeps.h"


#define PROPERTY_U_S_B_VERSION				"USBVersion"
#define PROPERTY_CLASS_CODE				"ClassCode"
#define PROPERTY_SUBCLASS_CODE				"SubclassCode"
#define PROPERTY_PROTOCOL_CODE				"ProtocolCode"
#define PROPERTY_U_S_B_VERSION_IN_B_C_D				"USBVersionInBCD"
#define PROPERTY_MAX_PACKET_SIZE				"MaxPacketSize"
#define PROPERTY_VENDOR_ID				"VendorID"
#define PROPERTY_PRODUCT_ID				"ProductID"
#define PROPERTY_DEVICE_RELEASE_NUMBER				"DeviceReleaseNumber"
#define PROPERTY_MANUFACTURER				"Manufacturer"
#define PROPERTY_PRODUCT				"Product"
#define PROPERTY_SERIAL_NUMBER				"SerialNumber"
#define PROPERTY_NUMBER_OF_CONFIGS				"NumberOfConfigs"
#define PROPERTY_CURRENT_CONFIG_VALUE				"CurrentConfigValue"
#define PROPERTY_CURRENT_ALTERNATE_SETTINGS				"CurrentAlternateSettings"
#define PROPERTY_COMMAND_TIMEOUT				"CommandTimeout"


class UNIX_USBDevice :
	public CIM_LogicalDevice
{
public:

	UNIX_USBDevice();
	~UNIX_USBDevice();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean finalize();
	virtual Boolean find(Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);

	virtual Boolean getInstanceID(CIMProperty&) const;
	virtual String getInstanceID() const;
	virtual Boolean getCaption(CIMProperty&) const;
	virtual String getCaption() const;
	virtual Boolean getDescription(CIMProperty&) const;
	virtual String getDescription() const;
	virtual Boolean getElementName(CIMProperty&) const;
	virtual String getElementName() const;
	virtual Boolean getInstallDate(CIMProperty&) const;
	virtual CIMDateTime getInstallDate() const;
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual Boolean getOperationalStatus(CIMProperty&) const;
	virtual Array<Uint16> getOperationalStatus() const;
	virtual Boolean getStatusDescriptions(CIMProperty&) const;
	virtual Array<String> getStatusDescriptions() const;
	virtual Boolean getStatus(CIMProperty&) const;
	virtual String getStatus() const;
	virtual Boolean getHealthState(CIMProperty&) const;
	virtual Uint16 getHealthState() const;
	virtual Boolean getCommunicationStatus(CIMProperty&) const;
	virtual Uint16 getCommunicationStatus() const;
	virtual Boolean getDetailedStatus(CIMProperty&) const;
	virtual Uint16 getDetailedStatus() const;
	virtual Boolean getOperatingStatus(CIMProperty&) const;
	virtual Uint16 getOperatingStatus() const;
	virtual Boolean getPrimaryStatus(CIMProperty&) const;
	virtual Uint16 getPrimaryStatus() const;
	virtual Boolean getEnabledState(CIMProperty&) const;
	virtual Uint16 getEnabledState() const;
	virtual Boolean getOtherEnabledState(CIMProperty&) const;
	virtual String getOtherEnabledState() const;
	virtual Boolean getRequestedState(CIMProperty&) const;
	virtual Uint16 getRequestedState() const;
	virtual Boolean getEnabledDefault(CIMProperty&) const;
	virtual Uint16 getEnabledDefault() const;
	virtual Boolean getTimeOfLastStateChange(CIMProperty&) const;
	virtual CIMDateTime getTimeOfLastStateChange() const;
	virtual Boolean getAvailableRequestedStates(CIMProperty&) const;
	virtual Array<Uint16> getAvailableRequestedStates() const;
	virtual Boolean getTransitioningToState(CIMProperty&) const;
	virtual Uint16 getTransitioningToState() const;
	virtual Boolean getSystemCreationClassName(CIMProperty&) const;
	virtual String getSystemCreationClassName() const;
	virtual Boolean getSystemName(CIMProperty&) const;
	virtual String getSystemName() const;
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual Boolean getDeviceID(CIMProperty&) const;
	virtual String getDeviceID() const;
	virtual Boolean getPowerManagementSupported(CIMProperty&) const;
	virtual Boolean getPowerManagementSupported() const;
	virtual Boolean getPowerManagementCapabilities(CIMProperty&) const;
	virtual Array<Uint16> getPowerManagementCapabilities() const;
	virtual Boolean getAvailability(CIMProperty&) const;
	virtual Uint16 getAvailability() const;
	virtual Boolean getStatusInfo(CIMProperty&) const;
	virtual Uint16 getStatusInfo() const;
	virtual Boolean getLastErrorCode(CIMProperty&) const;
	virtual Uint32 getLastErrorCode() const;
	virtual Boolean getErrorDescription(CIMProperty&) const;
	virtual String getErrorDescription() const;
	virtual Boolean getErrorCleared(CIMProperty&) const;
	virtual Boolean getErrorCleared() const;
	virtual Boolean getOtherIdentifyingInfo(CIMProperty&) const;
	virtual Array<String> getOtherIdentifyingInfo() const;
	virtual Boolean getPowerOnHours(CIMProperty&) const;
	virtual Uint64 getPowerOnHours() const;
	virtual Boolean getTotalPowerOnHours(CIMProperty&) const;
	virtual Uint64 getTotalPowerOnHours() const;
	virtual Boolean getIdentifyingDescriptions(CIMProperty&) const;
	virtual Array<String> getIdentifyingDescriptions() const;
	virtual Boolean getAdditionalAvailability(CIMProperty&) const;
	virtual Array<Uint16> getAdditionalAvailability() const;
	virtual Boolean getMaxQuiesceTime(CIMProperty&) const;
	virtual Uint64 getMaxQuiesceTime() const;
	virtual Boolean getUSBVersion(CIMProperty&) const;
	virtual Uint16 getUSBVersion() const;
	virtual Boolean getClassCode(CIMProperty&) const;
	virtual Uint8 getClassCode() const;
	virtual Boolean getSubclassCode(CIMProperty&) const;
	virtual Uint8 getSubclassCode() const;
	virtual Boolean getProtocolCode(CIMProperty&) const;
	virtual Uint8 getProtocolCode() const;
	virtual Boolean getUSBVersionInBCD(CIMProperty&) const;
	virtual Uint16 getUSBVersionInBCD() const;
	virtual Boolean getMaxPacketSize(CIMProperty&) const;
	virtual Uint8 getMaxPacketSize() const;
	virtual Boolean getVendorID(CIMProperty&) const;
	virtual Uint16 getVendorID() const;
	virtual Boolean getProductID(CIMProperty&) const;
	virtual Uint16 getProductID() const;
	virtual Boolean getDeviceReleaseNumber(CIMProperty&) const;
	virtual Uint16 getDeviceReleaseNumber() const;
	virtual Boolean getManufacturer(CIMProperty&) const;
	virtual String getManufacturer() const;
	virtual Boolean getProduct(CIMProperty&) const;
	virtual String getProduct() const;
	virtual Boolean getSerialNumber(CIMProperty&) const;
	virtual String getSerialNumber() const;
	virtual Boolean getNumberOfConfigs(CIMProperty&) const;
	virtual Uint8 getNumberOfConfigs() const;
	virtual Boolean getCurrentConfigValue(CIMProperty&) const;
	virtual Uint8 getCurrentConfigValue() const;
	virtual Boolean getCurrentAlternateSettings(CIMProperty&) const;
	virtual Array<Uint8> getCurrentAlternateSettings() const;
	virtual Boolean getCommandTimeout(CIMProperty&) const;
	virtual CIMDateTime getCommandTimeout() const;

private:
	CIMName currentScope;

#	include "UNIX_USBDevicePrivate.h"


};

#endif /* UNIX_USBDEVICE */
