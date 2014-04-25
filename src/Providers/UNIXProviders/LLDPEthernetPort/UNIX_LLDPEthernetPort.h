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

#ifndef __UNIX_LLDPETHERNETPORT_H
#define __UNIX_LLDPETHERNETPORT_H


#include "CIM_EthernetPort.h"

#include "UNIX_LLDPEthernetPortDeps.h"


#define PROPERTY_CONFIG_PORT_VLAN_TX_ENABLE				"ConfigPortVlanTxEnable"
#define PROPERTY_CONFIG_MAN_VID_TX_ENABLE				"ConfigManVidTxEnable"
#define PROPERTY_MESSAGE_TX_INTERVAL				"MessageTxInterval"
#define PROPERTY_MESSAGE_TX_HOLD_MULTIPLIER				"MessageTxHoldMultiplier"
#define PROPERTY_REINIT_DELAY				"ReinitDelay"
#define PROPERTY_NOTIFICATION_INTERVAL				"NotificationInterval"
#define PROPERTY_TX_CREDIT_MAX				"TxCreditMax"
#define PROPERTY_MESSAGE_FAST_TX				"MessageFastTx"
#define PROPERTY_TX_FAST_INIT				"TxFastInit"
#define PROPERTY_DEST_MAC_ADDRESS				"DestMacAddress"
#define PROPERTY_PORT_CONFIG_ADMIN_STATUS				"PortConfigAdminStatus"
#define PROPERTY_PORT_CONFIG_NOTIFICATION_ENABLE				"PortConfigNotificationEnable"
#define PROPERTY_PORT_CONFIG_PORT_DESCRIPTION_T_L_V_TX_ENABLE				"PortConfigPortDescriptionTLVTxEnable"
#define PROPERTY_PORT_CONFIG_SYSTEM_NAME_T_L_V_TX_ENABLE				"PortConfigSystemNameTLVTxEnable"
#define PROPERTY_PORT_CONFIG_SYSTEM_DESCRIPTION_T_L_V_TX_ENABLE				"PortConfigSystemDescriptionTLVTxEnable"
#define PROPERTY_PORT_CONFIG_SYSTEM_CAPABILITIES_T_L_V_TX_ENABLE				"PortConfigSystemCapabilitiesTLVTxEnable"
#define PROPERTY_MAN_ADDR_CONFIG_DEST_ADDRESS				"ManAddrConfigDestAddress"
#define PROPERTY_MAN_ADDR_CONFIG_LOC_MAN_ADDR_SUBTYPE				"ManAddrConfigLocManAddrSubtype"
#define PROPERTY_MAN_ADDR_CONFIG_LOC_MAN_ADDR				"ManAddrConfigLocManAddr"
#define PROPERTY_MAN_ADDR_CONFIG_TX_ENABLE				"ManAddrConfigTxEnable"
#define PROPERTY_LOC_CHASSIS_ID_SUBTYPE				"LocChassisIdSubtype"
#define PROPERTY_LOC_CHASSIS_ID				"LocChassisId"
#define PROPERTY_LOC_SYS_NAME				"LocSysName"
#define PROPERTY_LOC_SYS_DESC				"LocSysDesc"
#define PROPERTY_LOC_SYS_CAP_SUPPORTED				"LocSysCapSupported"
#define PROPERTY_LOC_SYS_CAP_ENABLED				"LocSysCapEnabled"
#define PROPERTY_LOC_PORT_ID_SUBTYPE				"LocPortIdSubtype"
#define PROPERTY_LOC_PORT_ID				"LocPortID"
#define PROPERTY_LOC_PORT_DESC				"LocPortDesc"
#define PROPERTY_LOC_TX_SYSTEM_VALUE				"LocTxSystemValue"
#define PROPERTY_REM_TX_SYSTEM_VALUE_ECHO				"RemTxSystemValueEcho"
#define PROPERTY_LOC_RX_SYSTEM_VALUE				"LocRxSystemValue"
#define PROPERTY_REM_RX_SYSTEM_VALUE_ECHO				"RemRxSystemValueEcho"
#define PROPERTY_LOC_FB_SYSTEM_VALUE				"LocFbSystemValue"
#define PROPERTY_REM_TX_SYSTEM_VALUE				"RemTxSystemValue"
#define PROPERTY_LOC_TX_SYSTEM_VALUE_ECHO				"LocTxSystemValueEcho"
#define PROPERTY_REM_RX_SYSTEM_VALUE				"RemRxSystemValue"
#define PROPERTY_LOC_RX_SYSTEM_VALUE_ECHO				"LocRxSystemValueEcho"
#define PROPERTY_LOC_RESOLVED_TX_SYSTEM_VALUE				"LocResolvedTxSystemValue"
#define PROPERTY_LOC_RESOLVED_RX_SYSTEM_VALUE				"LocResolvedRxSystemValue"
#define PROPERTY_MAXIMUM_FRAME_SIZE_T_L_V_ENABLED				"MaximumFrameSizeTLVEnabled"
#define PROPERTY_LOC_MAN_ADDR_SUB_TYPE				"LocManAddrSubType"
#define PROPERTY_LOC_MAN_ADDR				"LocManAddr"
#define PROPERTY_LOC_MAN_ADDR_IF_SUBTYPE				"LocManAddrIfSubtype"
#define PROPERTY_LOC_MAN_ADDR_IF_ID				"LocManAddrIfId"
#define PROPERTY_REM_LOCAL_DEST_MAC_ADDRESS				"RemLocalDestMacAddress"
#define PROPERTY_REM_MAN_ADDR_SUB_TYPE				"RemManAddrSubType"
#define PROPERTY_REM_MAN_ADDR				"RemManAddr"
#define PROPERTY_REM_MAN_ADDR_IF_SUBTYPE				"RemManAddrIfSubtype"
#define PROPERTY_REM_MAN_ADDR_IF_ID				"RemManAddrIfId"
#define PROPERTY_REM_CHASSIS_ID_SUBTYPE				"RemChassisIdSubtype"
#define PROPERTY_REM_CHASSIS_ID				"RemChassisId"
#define PROPERTY_REM_SYS_NAME				"RemSysName"
#define PROPERTY_REM_SYS_DESC				"RemSysDesc"
#define PROPERTY_REM_SYS_CAP_SUPPORTED				"RemSysCapSupported"
#define PROPERTY_REM_SYS_CAP_ENABLED				"RemSysCapEnabled"
#define PROPERTY_REM_PORT_ID_SUBTYPE				"RemPortIdSubtype"
#define PROPERTY_REM_PORT_ID				"RemPortID"
#define PROPERTY_REM_PORT_DESC				"RemPortDesc"


class UNIX_LLDPEthernetPort :
	public CIM_EthernetPort
{
public:

	UNIX_LLDPEthernetPort();
	~UNIX_LLDPEthernetPort();

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
	virtual Boolean getSpeed(CIMProperty&) const;
	virtual Uint64 getSpeed() const;
	virtual Boolean getMaxSpeed(CIMProperty&) const;
	virtual Uint64 getMaxSpeed() const;
	virtual Boolean getRequestedSpeed(CIMProperty&) const;
	virtual Uint64 getRequestedSpeed() const;
	virtual Boolean getUsageRestriction(CIMProperty&) const;
	virtual Uint16 getUsageRestriction() const;
	virtual Boolean getPortType(CIMProperty&) const;
	virtual Uint16 getPortType() const;
	virtual Boolean getOtherPortType(CIMProperty&) const;
	virtual String getOtherPortType() const;
	virtual Boolean getOtherNetworkPortType(CIMProperty&) const;
	virtual String getOtherNetworkPortType() const;
	virtual Boolean getPortNumber(CIMProperty&) const;
	virtual Uint16 getPortNumber() const;
	virtual Boolean getLinkTechnology(CIMProperty&) const;
	virtual Uint16 getLinkTechnology() const;
	virtual Boolean getOtherLinkTechnology(CIMProperty&) const;
	virtual String getOtherLinkTechnology() const;
	virtual Boolean getPermanentAddress(CIMProperty&) const;
	virtual String getPermanentAddress() const;
	virtual Boolean getNetworkAddresses(CIMProperty&) const;
	virtual Array<String> getNetworkAddresses() const;
	virtual Boolean getFullDuplex(CIMProperty&) const;
	virtual Boolean getFullDuplex() const;
	virtual Boolean getAutoSense(CIMProperty&) const;
	virtual Boolean getAutoSense() const;
	virtual Boolean getSupportedMaximumTransmissionUnit(CIMProperty&) const;
	virtual Uint64 getSupportedMaximumTransmissionUnit() const;
	virtual Boolean getActiveMaximumTransmissionUnit(CIMProperty&) const;
	virtual Uint64 getActiveMaximumTransmissionUnit() const;
	virtual Boolean getMaxDataSize(CIMProperty&) const;
	virtual Uint32 getMaxDataSize() const;
	virtual Boolean getCapabilities(CIMProperty&) const;
	virtual Array<Uint16> getCapabilities() const;
	virtual Boolean getCapabilityDescriptions(CIMProperty&) const;
	virtual Array<String> getCapabilityDescriptions() const;
	virtual Boolean getEnabledCapabilities(CIMProperty&) const;
	virtual Array<Uint16> getEnabledCapabilities() const;
	virtual Boolean getOtherEnabledCapabilities(CIMProperty&) const;
	virtual Array<String> getOtherEnabledCapabilities() const;
	virtual Boolean getPVID(CIMProperty&) const;
	virtual Uint16 getPVID() const;
	virtual Boolean getPoEPowerEntityType(CIMProperty&) const;
	virtual Uint16 getPoEPowerEntityType() const;
	virtual Boolean getPortDiscriminator(CIMProperty&) const;
	virtual Array<String> getPortDiscriminator() const;
	virtual Boolean getConfigPortVlanTxEnable(CIMProperty&) const;
	virtual Boolean getConfigPortVlanTxEnable() const;
	virtual Boolean getConfigManVidTxEnable(CIMProperty&) const;
	virtual Boolean getConfigManVidTxEnable() const;
	virtual Boolean getMessageTxInterval(CIMProperty&) const;
	virtual Uint16 getMessageTxInterval() const;
	virtual Boolean getMessageTxHoldMultiplier(CIMProperty&) const;
	virtual Uint8 getMessageTxHoldMultiplier() const;
	virtual Boolean getReinitDelay(CIMProperty&) const;
	virtual Uint8 getReinitDelay() const;
	virtual Boolean getNotificationInterval(CIMProperty&) const;
	virtual Uint16 getNotificationInterval() const;
	virtual Boolean getTxCreditMax(CIMProperty&) const;
	virtual Uint8 getTxCreditMax() const;
	virtual Boolean getMessageFastTx(CIMProperty&) const;
	virtual Uint16 getMessageFastTx() const;
	virtual Boolean getTxFastInit(CIMProperty&) const;
	virtual Uint8 getTxFastInit() const;
	virtual Boolean getDestMacAddress(CIMProperty&) const;
	virtual Array<String> getDestMacAddress() const;
	virtual Boolean getPortConfigAdminStatus(CIMProperty&) const;
	virtual Array<Uint8> getPortConfigAdminStatus() const;
	virtual Boolean getPortConfigNotificationEnable(CIMProperty&) const;
	virtual Array<Boolean> getPortConfigNotificationEnable() const;
	virtual Boolean getPortConfigPortDescriptionTLVTxEnable(CIMProperty&) const;
	virtual Array<Boolean> getPortConfigPortDescriptionTLVTxEnable() const;
	virtual Boolean getPortConfigSystemNameTLVTxEnable(CIMProperty&) const;
	virtual Array<Boolean> getPortConfigSystemNameTLVTxEnable() const;
	virtual Boolean getPortConfigSystemDescriptionTLVTxEnable(CIMProperty&) const;
	virtual Array<Boolean> getPortConfigSystemDescriptionTLVTxEnable() const;
	virtual Boolean getPortConfigSystemCapabilitiesTLVTxEnable(CIMProperty&) const;
	virtual Array<Boolean> getPortConfigSystemCapabilitiesTLVTxEnable() const;
	virtual Boolean getManAddrConfigDestAddress(CIMProperty&) const;
	virtual Array<String> getManAddrConfigDestAddress() const;
	virtual Boolean getManAddrConfigLocManAddrSubtype(CIMProperty&) const;
	virtual Array<Uint16> getManAddrConfigLocManAddrSubtype() const;
	virtual Boolean getManAddrConfigLocManAddr(CIMProperty&) const;
	virtual Array<String> getManAddrConfigLocManAddr() const;
	virtual Boolean getManAddrConfigTxEnable(CIMProperty&) const;
	virtual Array<Boolean> getManAddrConfigTxEnable() const;
	virtual Boolean getLocChassisIdSubtype(CIMProperty&) const;
	virtual Uint8 getLocChassisIdSubtype() const;
	virtual Boolean getLocChassisId(CIMProperty&) const;
	virtual String getLocChassisId() const;
	virtual Boolean getLocSysName(CIMProperty&) const;
	virtual String getLocSysName() const;
	virtual Boolean getLocSysDesc(CIMProperty&) const;
	virtual String getLocSysDesc() const;
	virtual Boolean getLocSysCapSupported(CIMProperty&) const;
	virtual Array<Uint8> getLocSysCapSupported() const;
	virtual Boolean getLocSysCapEnabled(CIMProperty&) const;
	virtual Array<Boolean> getLocSysCapEnabled() const;
	virtual Boolean getLocPortIdSubtype(CIMProperty&) const;
	virtual Uint8 getLocPortIdSubtype() const;
	virtual Boolean getLocPortID(CIMProperty&) const;
	virtual String getLocPortID() const;
	virtual Boolean getLocPortDesc(CIMProperty&) const;
	virtual String getLocPortDesc() const;
	virtual Boolean getLocTxSystemValue(CIMProperty&) const;
	virtual Uint16 getLocTxSystemValue() const;
	virtual Boolean getRemTxSystemValueEcho(CIMProperty&) const;
	virtual Uint16 getRemTxSystemValueEcho() const;
	virtual Boolean getLocRxSystemValue(CIMProperty&) const;
	virtual Uint16 getLocRxSystemValue() const;
	virtual Boolean getRemRxSystemValueEcho(CIMProperty&) const;
	virtual Uint16 getRemRxSystemValueEcho() const;
	virtual Boolean getLocFbSystemValue(CIMProperty&) const;
	virtual Uint16 getLocFbSystemValue() const;
	virtual Boolean getRemTxSystemValue(CIMProperty&) const;
	virtual Uint16 getRemTxSystemValue() const;
	virtual Boolean getLocTxSystemValueEcho(CIMProperty&) const;
	virtual Uint16 getLocTxSystemValueEcho() const;
	virtual Boolean getRemRxSystemValue(CIMProperty&) const;
	virtual Uint16 getRemRxSystemValue() const;
	virtual Boolean getLocRxSystemValueEcho(CIMProperty&) const;
	virtual Uint16 getLocRxSystemValueEcho() const;
	virtual Boolean getLocResolvedTxSystemValue(CIMProperty&) const;
	virtual Uint16 getLocResolvedTxSystemValue() const;
	virtual Boolean getLocResolvedRxSystemValue(CIMProperty&) const;
	virtual Uint16 getLocResolvedRxSystemValue() const;
	virtual Boolean getMaximumFrameSizeTLVEnabled(CIMProperty&) const;
	virtual Boolean getMaximumFrameSizeTLVEnabled() const;
	virtual Boolean getLocManAddrSubType(CIMProperty&) const;
	virtual Array<Uint16> getLocManAddrSubType() const;
	virtual Boolean getLocManAddr(CIMProperty&) const;
	virtual Array<String> getLocManAddr() const;
	virtual Boolean getLocManAddrIfSubtype(CIMProperty&) const;
	virtual Array<Uint16> getLocManAddrIfSubtype() const;
	virtual Boolean getLocManAddrIfId(CIMProperty&) const;
	virtual Array<Uint32> getLocManAddrIfId() const;
	virtual Boolean getRemLocalDestMacAddress(CIMProperty&) const;
	virtual Array<String> getRemLocalDestMacAddress() const;
	virtual Boolean getRemManAddrSubType(CIMProperty&) const;
	virtual Array<Uint16> getRemManAddrSubType() const;
	virtual Boolean getRemManAddr(CIMProperty&) const;
	virtual Array<String> getRemManAddr() const;
	virtual Boolean getRemManAddrIfSubtype(CIMProperty&) const;
	virtual Array<Uint16> getRemManAddrIfSubtype() const;
	virtual Boolean getRemManAddrIfId(CIMProperty&) const;
	virtual Array<Uint32> getRemManAddrIfId() const;
	virtual Boolean getRemChassisIdSubtype(CIMProperty&) const;
	virtual Array<Uint8> getRemChassisIdSubtype() const;
	virtual Boolean getRemChassisId(CIMProperty&) const;
	virtual Array<String> getRemChassisId() const;
	virtual Boolean getRemSysName(CIMProperty&) const;
	virtual Array<String> getRemSysName() const;
	virtual Boolean getRemSysDesc(CIMProperty&) const;
	virtual Array<String> getRemSysDesc() const;
	virtual Boolean getRemSysCapSupported(CIMProperty&) const;
	virtual Array<Uint8> getRemSysCapSupported() const;
	virtual Boolean getRemSysCapEnabled(CIMProperty&) const;
	virtual Array<Boolean> getRemSysCapEnabled() const;
	virtual Boolean getRemPortIdSubtype(CIMProperty&) const;
	virtual Array<Uint8> getRemPortIdSubtype() const;
	virtual Boolean getRemPortID(CIMProperty&) const;
	virtual Array<String> getRemPortID() const;
	virtual Boolean getRemPortDesc(CIMProperty&) const;
	virtual Array<String> getRemPortDesc() const;

private:
	CIMName currentScope;

#	include "UNIX_LLDPEthernetPortPrivate.h"


};

#endif /* UNIX_LLDPETHERNETPORT */
