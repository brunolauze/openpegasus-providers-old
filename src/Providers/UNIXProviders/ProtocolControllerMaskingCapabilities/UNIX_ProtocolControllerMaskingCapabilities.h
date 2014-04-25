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

#ifndef __UNIX_PROTOCOLCONTROLLERMASKINGCAPABILITIES_H
#define __UNIX_PROTOCOLCONTROLLERMASKINGCAPABILITIES_H


#include "CIM_Capabilities.h"

#include "UNIX_ProtocolControllerMaskingCapabilitiesDeps.h"


#define PROPERTY_VALID_HARDWARE_ID_TYPES				"ValidHardwareIdTypes"
#define PROPERTY_OTHER_VALID_HARDWARE_ID_TYPES				"OtherValidHardwareIDTypes"
#define PROPERTY_PORTS_PER_VIEW				"PortsPerView"
#define PROPERTY_CLIENT_SELECTABLE_DEVICE_NUMBERS				"ClientSelectableDeviceNumbers"
#define PROPERTY_ATTACH_DEVICE_SUPPORTED				"AttachDeviceSupported"
#define PROPERTY_ONE_HARDWARE_ID_PER_VIEW				"OneHardwareIDPerView"
#define PROPERTY_UNIQUE_UNIT_NUMBERS_PER_PORT				"UniqueUnitNumbersPerPort"
#define PROPERTY_PRIVILEGE_DENIED_SUPPORTED				"PrivilegeDeniedSupported"
#define PROPERTY_PROTOCOL_CONTROLLER_REQUIRES_AUTHORIZED_IDENTITY				"ProtocolControllerRequiresAuthorizedIdentity"
#define PROPERTY_PROTOCOL_CONTROLLER_SUPPORTS_COLLECTIONS				"ProtocolControllerSupportsCollections"
#define PROPERTY_EXPOSE_PATHS_SUPPORTED				"ExposePathsSupported"
#define PROPERTY_CREATE_PROTOCOL_CONTROLLER_SUPPORTED				"CreateProtocolControllerSupported"
#define PROPERTY_MAXIMUM_MAP_COUNT				"MaximumMapCount"
#define PROPERTY_S_P_C_ALLOWS_NO_L_US				"SPCAllowsNoLUs"
#define PROPERTY_S_P_C_ALLOWS_NO_TARGETS				"SPCAllowsNoTargets"
#define PROPERTY_S_P_C_ALLOWS_NO_INITIATORS				"SPCAllowsNoInitiators"
#define PROPERTY_S_P_CSUPPORTS_DEFAULT_VIEWS				"SPCSupportsDefaultViews"


class UNIX_ProtocolControllerMaskingCapabilities :
	public CIM_Capabilities
{
public:

	UNIX_ProtocolControllerMaskingCapabilities();
	~UNIX_ProtocolControllerMaskingCapabilities();

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
	virtual Boolean getValidHardwareIdTypes(CIMProperty&) const;
	virtual Array<Uint16> getValidHardwareIdTypes() const;
	virtual Boolean getOtherValidHardwareIDTypes(CIMProperty&) const;
	virtual Array<String> getOtherValidHardwareIDTypes() const;
	virtual Boolean getPortsPerView(CIMProperty&) const;
	virtual Uint16 getPortsPerView() const;
	virtual Boolean getClientSelectableDeviceNumbers(CIMProperty&) const;
	virtual Boolean getClientSelectableDeviceNumbers() const;
	virtual Boolean getAttachDeviceSupported(CIMProperty&) const;
	virtual Boolean getAttachDeviceSupported() const;
	virtual Boolean getOneHardwareIDPerView(CIMProperty&) const;
	virtual Boolean getOneHardwareIDPerView() const;
	virtual Boolean getUniqueUnitNumbersPerPort(CIMProperty&) const;
	virtual Boolean getUniqueUnitNumbersPerPort() const;
	virtual Boolean getPrivilegeDeniedSupported(CIMProperty&) const;
	virtual Boolean getPrivilegeDeniedSupported() const;
	virtual Boolean getProtocolControllerRequiresAuthorizedIdentity(CIMProperty&) const;
	virtual Boolean getProtocolControllerRequiresAuthorizedIdentity() const;
	virtual Boolean getProtocolControllerSupportsCollections(CIMProperty&) const;
	virtual Boolean getProtocolControllerSupportsCollections() const;
	virtual Boolean getExposePathsSupported(CIMProperty&) const;
	virtual Boolean getExposePathsSupported() const;
	virtual Boolean getCreateProtocolControllerSupported(CIMProperty&) const;
	virtual Boolean getCreateProtocolControllerSupported() const;
	virtual Boolean getMaximumMapCount(CIMProperty&) const;
	virtual Uint16 getMaximumMapCount() const;
	virtual Boolean getSPCAllowsNoLUs(CIMProperty&) const;
	virtual Boolean getSPCAllowsNoLUs() const;
	virtual Boolean getSPCAllowsNoTargets(CIMProperty&) const;
	virtual Boolean getSPCAllowsNoTargets() const;
	virtual Boolean getSPCAllowsNoInitiators(CIMProperty&) const;
	virtual Boolean getSPCAllowsNoInitiators() const;
	virtual Boolean getSPCSupportsDefaultViews(CIMProperty&) const;
	virtual Boolean getSPCSupportsDefaultViews() const;

private:
	CIMName currentScope;

#	include "UNIX_ProtocolControllerMaskingCapabilitiesPrivate.h"


};

#endif /* UNIX_PROTOCOLCONTROLLERMASKINGCAPABILITIES */
