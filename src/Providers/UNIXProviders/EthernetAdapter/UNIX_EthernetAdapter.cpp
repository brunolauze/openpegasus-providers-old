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

#include "UNIX_EthernetAdapter.h"

UNIX_EthernetAdapter::UNIX_EthernetAdapter(void)
{
}

UNIX_EthernetAdapter::~UNIX_EthernetAdapter(void)
{
}


Boolean UNIX_EthernetAdapter::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_EthernetAdapter::getInstanceID() const
{
	return underlyingClass.getInstanceID();
}

Boolean UNIX_EthernetAdapter::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_EthernetAdapter::getCaption() const
{
	return underlyingClass.getCaption();
}

Boolean UNIX_EthernetAdapter::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_EthernetAdapter::getDescription() const
{
	return underlyingClass.getDescription();
}

Boolean UNIX_EthernetAdapter::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_EthernetAdapter::getElementName() const
{
	return String("EthernetAdapter");
}

Boolean UNIX_EthernetAdapter::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_EthernetAdapter::getInstallDate() const
{
	return underlyingClass.getInstallDate();
}

Boolean UNIX_EthernetAdapter::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_EthernetAdapter::getName() const
{
	return underlyingClass.getName();
}

Boolean UNIX_EthernetAdapter::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_EthernetAdapter::getOperationalStatus() const
{
	return underlyingClass.getOperationalStatus();

}

Boolean UNIX_EthernetAdapter::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_EthernetAdapter::getStatusDescriptions() const
{
	return underlyingClass.getStatusDescriptions();

}

Boolean UNIX_EthernetAdapter::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_EthernetAdapter::getStatus() const
{
	return underlyingClass.getStatus();
}

Boolean UNIX_EthernetAdapter::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_EthernetAdapter::getHealthState() const
{
	return underlyingClass.getHealthState();
}

Boolean UNIX_EthernetAdapter::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_EthernetAdapter::getCommunicationStatus() const
{
	return underlyingClass.getCommunicationStatus();
}

Boolean UNIX_EthernetAdapter::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_EthernetAdapter::getDetailedStatus() const
{
	return underlyingClass.getDetailedStatus();
}

Boolean UNIX_EthernetAdapter::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_EthernetAdapter::getOperatingStatus() const
{
	return underlyingClass.getOperatingStatus();
}

Boolean UNIX_EthernetAdapter::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_EthernetAdapter::getPrimaryStatus() const
{
	return underlyingClass.getPrimaryStatus();
}

Boolean UNIX_EthernetAdapter::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_EthernetAdapter::getEnabledState() const
{
	return underlyingClass.getEnabledState();
}

Boolean UNIX_EthernetAdapter::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_EthernetAdapter::getOtherEnabledState() const
{
	return underlyingClass.getOtherEnabledState();
}

Boolean UNIX_EthernetAdapter::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_EthernetAdapter::getRequestedState() const
{
	return underlyingClass.getRequestedState();
}

Boolean UNIX_EthernetAdapter::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_EthernetAdapter::getEnabledDefault() const
{
	return underlyingClass.getEnabledDefault();
}

Boolean UNIX_EthernetAdapter::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_EthernetAdapter::getTimeOfLastStateChange() const
{
	return underlyingClass.getTimeOfLastStateChange();
}

Boolean UNIX_EthernetAdapter::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_EthernetAdapter::getAvailableRequestedStates() const
{
	return underlyingClass.getAvailableRequestedStates();
}

Boolean UNIX_EthernetAdapter::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_EthernetAdapter::getTransitioningToState() const
{
	return underlyingClass.getTransitioningToState();
}

Boolean UNIX_EthernetAdapter::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_EthernetAdapter::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_EthernetAdapter::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_EthernetAdapter::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_EthernetAdapter::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_EthernetAdapter::getCreationClassName() const
{
	return String("UNIX_EthernetAdapter");
}

Boolean UNIX_EthernetAdapter::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_EthernetAdapter::getDeviceID() const
{
	return underlyingClass.getDeviceID();
}

Boolean UNIX_EthernetAdapter::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_EthernetAdapter::getPowerManagementSupported() const
{
	return underlyingClass.getPowerManagementSupported();
}

Boolean UNIX_EthernetAdapter::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_EthernetAdapter::getPowerManagementCapabilities() const
{
	return underlyingClass.getPowerManagementCapabilities();
}

Boolean UNIX_EthernetAdapter::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_EthernetAdapter::getAvailability() const
{
	return underlyingClass.getAvailability();
}

Boolean UNIX_EthernetAdapter::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_EthernetAdapter::getStatusInfo() const
{
	return underlyingClass.getStatusInfo();
}

Boolean UNIX_EthernetAdapter::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_EthernetAdapter::getLastErrorCode() const
{
	return underlyingClass.getLastErrorCode();
}

Boolean UNIX_EthernetAdapter::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_EthernetAdapter::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_EthernetAdapter::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_EthernetAdapter::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_EthernetAdapter::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_EthernetAdapter::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_EthernetAdapter::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_EthernetAdapter::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_EthernetAdapter::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_EthernetAdapter::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_EthernetAdapter::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_EthernetAdapter::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_EthernetAdapter::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_EthernetAdapter::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_EthernetAdapter::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_EthernetAdapter::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_EthernetAdapter::getPermanentAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERMANENT_ADDRESS, getPermanentAddress());
	return true;
}

String UNIX_EthernetAdapter::getPermanentAddress() const
{
	return String ("");
}

Boolean UNIX_EthernetAdapter::getNetworkAddresses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NETWORK_ADDRESSES, getNetworkAddresses());
	return true;
}

Array<String> UNIX_EthernetAdapter::getNetworkAddresses() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_EthernetAdapter::getSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SPEED, getSpeed());
	return true;
}

Uint64 UNIX_EthernetAdapter::getSpeed() const
{
	return Uint64(0);
}

Boolean UNIX_EthernetAdapter::getMaxSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_SPEED, getMaxSpeed());
	return true;
}

Uint64 UNIX_EthernetAdapter::getMaxSpeed() const
{
	return Uint64(0);
}

Boolean UNIX_EthernetAdapter::getFullDuplex(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FULL_DUPLEX, getFullDuplex());
	return true;
}

Boolean UNIX_EthernetAdapter::getFullDuplex() const
{
	return Boolean(false);
}

Boolean UNIX_EthernetAdapter::getAutoSense(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTO_SENSE, getAutoSense());
	return true;
}

Boolean UNIX_EthernetAdapter::getAutoSense() const
{
	return Boolean(false);
}

Boolean UNIX_EthernetAdapter::getOctetsTransmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OCTETS_TRANSMITTED, getOctetsTransmitted());
	return true;
}

Uint64 UNIX_EthernetAdapter::getOctetsTransmitted() const
{
	return Uint64(0);
}

Boolean UNIX_EthernetAdapter::getOctetsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OCTETS_RECEIVED, getOctetsReceived());
	return true;
}

Uint64 UNIX_EthernetAdapter::getOctetsReceived() const
{
	return Uint64(0);
}

Boolean UNIX_EthernetAdapter::getMaxDataSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_DATA_SIZE, getMaxDataSize());
	return true;
}

Uint32 UNIX_EthernetAdapter::getMaxDataSize() const
{
	return Uint32(0);
}

Boolean UNIX_EthernetAdapter::getCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITIES, getCapabilities());
	return true;
}

Array<Uint16> UNIX_EthernetAdapter::getCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_EthernetAdapter::getCapabilityDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITY_DESCRIPTIONS, getCapabilityDescriptions());
	return true;
}

Array<String> UNIX_EthernetAdapter::getCapabilityDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_EthernetAdapter::getEnabledCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_CAPABILITIES, getEnabledCapabilities());
	return true;
}

Array<Uint16> UNIX_EthernetAdapter::getEnabledCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_EthernetAdapter::getSymbolErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYMBOL_ERRORS, getSymbolErrors());
	return true;
}

Uint32 UNIX_EthernetAdapter::getSymbolErrors() const
{
	return Uint32(0);
}

Boolean UNIX_EthernetAdapter::getTotalPacketsTransmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_PACKETS_TRANSMITTED, getTotalPacketsTransmitted());
	return true;
}

Uint64 UNIX_EthernetAdapter::getTotalPacketsTransmitted() const
{
	return Uint64(0);
}

Boolean UNIX_EthernetAdapter::getTotalPacketsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_PACKETS_RECEIVED, getTotalPacketsReceived());
	return true;
}

Uint64 UNIX_EthernetAdapter::getTotalPacketsReceived() const
{
	return Uint64(0);
}

Boolean UNIX_EthernetAdapter::getAlignmentErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ALIGNMENT_ERRORS, getAlignmentErrors());
	return true;
}

Uint32 UNIX_EthernetAdapter::getAlignmentErrors() const
{
	return Uint32(0);
}

Boolean UNIX_EthernetAdapter::getFCSErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_F_CS_ERRORS, getFCSErrors());
	return true;
}

Uint32 UNIX_EthernetAdapter::getFCSErrors() const
{
	return Uint32(0);
}

Boolean UNIX_EthernetAdapter::getSingleCollisionFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SINGLE_COLLISION_FRAMES, getSingleCollisionFrames());
	return true;
}

Uint32 UNIX_EthernetAdapter::getSingleCollisionFrames() const
{
	return Uint32(0);
}

Boolean UNIX_EthernetAdapter::getMultipleCollisionFrames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MULTIPLE_COLLISION_FRAMES, getMultipleCollisionFrames());
	return true;
}

Uint32 UNIX_EthernetAdapter::getMultipleCollisionFrames() const
{
	return Uint32(0);
}

Boolean UNIX_EthernetAdapter::getSQETestErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_Q_E_TEST_ERRORS, getSQETestErrors());
	return true;
}

Uint32 UNIX_EthernetAdapter::getSQETestErrors() const
{
	return Uint32(0);
}

Boolean UNIX_EthernetAdapter::getDeferredTransmissions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFERRED_TRANSMISSIONS, getDeferredTransmissions());
	return true;
}

Uint32 UNIX_EthernetAdapter::getDeferredTransmissions() const
{
	return Uint32(0);
}

Boolean UNIX_EthernetAdapter::getLateCollisions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LATE_COLLISIONS, getLateCollisions());
	return true;
}

Uint32 UNIX_EthernetAdapter::getLateCollisions() const
{
	return Uint32(0);
}

Boolean UNIX_EthernetAdapter::getExcessiveCollisions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXCESSIVE_COLLISIONS, getExcessiveCollisions());
	return true;
}

Uint32 UNIX_EthernetAdapter::getExcessiveCollisions() const
{
	return Uint32(0);
}

Boolean UNIX_EthernetAdapter::getInternalMACTransmitErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERNAL_M_A_C_TRANSMIT_ERRORS, getInternalMACTransmitErrors());
	return true;
}

Uint32 UNIX_EthernetAdapter::getInternalMACTransmitErrors() const
{
	return Uint32(0);
}

Boolean UNIX_EthernetAdapter::getInternalMACReceiveErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERNAL_M_A_C_RECEIVE_ERRORS, getInternalMACReceiveErrors());
	return true;
}

Uint32 UNIX_EthernetAdapter::getInternalMACReceiveErrors() const
{
	return Uint32(0);
}

Boolean UNIX_EthernetAdapter::getCarrierSenseErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CARRIER_SENSE_ERRORS, getCarrierSenseErrors());
	return true;
}

Uint32 UNIX_EthernetAdapter::getCarrierSenseErrors() const
{
	return Uint32(0);
}

Boolean UNIX_EthernetAdapter::getFrameTooLongs(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FRAME_TOO_LONGS, getFrameTooLongs());
	return true;
}

Uint32 UNIX_EthernetAdapter::getFrameTooLongs() const
{
	return Uint32(0);
}

Boolean UNIX_EthernetAdapter::initialize()
{
	return underlyingClass.initialize();
}

Boolean UNIX_EthernetAdapter::load(int &pIndex)
{
	return underlyingClass.load(pIndex);
}

Boolean UNIX_EthernetAdapter::finalize()
{
	return underlyingClass.finalize();
}

Boolean UNIX_EthernetAdapter::find(Array<CIMKeyBinding> &kbArray)
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



Boolean UNIX_EthernetAdapter::validateKey(CIMKeyBinding &kb) const
{

        /* Keys  */
        //SystemCreationClassName
        //SystemName
        //CreationClassName
        //DeviceID

        CIMName name = kb.getName();
        if (name.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME) ||
                        name.equal(PROPERTY_SYSTEM_NAME) ||
                        name.equal(PROPERTY_CREATION_CLASS_NAME) ||
                        name.equal(PROPERTY_DEVICE_ID)
                )
                        return true;

        return false;
}

void UNIX_EthernetAdapter::setScope(CIMName scope)
{
        currentScope = scope;
}
