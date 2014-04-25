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

#ifndef __UNIX_SCSIMULTIPATHCONFIGURATIONCAPABILITIES_H
#define __UNIX_SCSIMULTIPATHCONFIGURATIONCAPABILITIES_H


#include "CIM_Capabilities.h"

#include "UNIX_SCSIMultipathConfigurationCapabilitiesDeps.h"


#define PROPERTY_SUPPORTED_LOAD_BALANCE_TYPES				"SupportedLoadBalanceTypes"
#define PROPERTY_OTHER_SUPPORTED_LOAD_BALANCE_ALGORITHM_NAMES				"OtherSupportedLoadBalanceAlgorithmNames"
#define PROPERTY_OTHER_SUPPORTED_LOAD_BALANCE_VENDOR_NAMES				"OtherSupportedLoadBalanceVendorNames"
#define PROPERTY_CAN_SET_T_P_G_ACCESS				"CanSetTPGAccess"
#define PROPERTY_CAN_OVERRIDE_PATHS				"CanOverridePaths"
#define PROPERTY_EXPOSES_PATH_DEVICE_FILES				"ExposesPathDeviceFiles"
#define PROPERTY_DEVICE_NAME_FILESPACE				"DeviceNameFilespace"
#define PROPERTY_ONLY_SUPPORTS_SPECIFIED_PRODUCTS				"OnlySupportsSpecifiedProducts"
#define PROPERTY_MAXIMUM_WEIGHT				"MaximumWeight"
#define PROPERTY_AUTOFAILBACK_SUPPORT				"AutofailbackSupport"
#define PROPERTY_AUTO_FAILBACK_ENABLED				"AutoFailbackEnabled"
#define PROPERTY_POLLING_RATE_MAX				"PollingRateMax"
#define PROPERTY_CURRENT_POLLING_RATE				"CurrentPollingRate"
#define PROPERTY_DEFAULT_LOAD_BALANCE_TYPE				"DefaultLoadBalanceType"


class UNIX_SCSIMultipathConfigurationCapabilities :
	public CIM_Capabilities
{
public:

	UNIX_SCSIMultipathConfigurationCapabilities();
	~UNIX_SCSIMultipathConfigurationCapabilities();

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
	virtual Boolean getSupportedLoadBalanceTypes(CIMProperty&) const;
	virtual Array<Uint16> getSupportedLoadBalanceTypes() const;
	virtual Boolean getOtherSupportedLoadBalanceAlgorithmNames(CIMProperty&) const;
	virtual Array<String> getOtherSupportedLoadBalanceAlgorithmNames() const;
	virtual Boolean getOtherSupportedLoadBalanceVendorNames(CIMProperty&) const;
	virtual Array<String> getOtherSupportedLoadBalanceVendorNames() const;
	virtual Boolean getCanSetTPGAccess(CIMProperty&) const;
	virtual Boolean getCanSetTPGAccess() const;
	virtual Boolean getCanOverridePaths(CIMProperty&) const;
	virtual Boolean getCanOverridePaths() const;
	virtual Boolean getExposesPathDeviceFiles(CIMProperty&) const;
	virtual Boolean getExposesPathDeviceFiles() const;
	virtual Boolean getDeviceNameFilespace(CIMProperty&) const;
	virtual String getDeviceNameFilespace() const;
	virtual Boolean getOnlySupportsSpecifiedProducts(CIMProperty&) const;
	virtual Boolean getOnlySupportsSpecifiedProducts() const;
	virtual Boolean getMaximumWeight(CIMProperty&) const;
	virtual Uint32 getMaximumWeight() const;
	virtual Boolean getAutofailbackSupport(CIMProperty&) const;
	virtual Uint16 getAutofailbackSupport() const;
	virtual Boolean getAutoFailbackEnabled(CIMProperty&) const;
	virtual Boolean getAutoFailbackEnabled() const;
	virtual Boolean getPollingRateMax(CIMProperty&) const;
	virtual Uint32 getPollingRateMax() const;
	virtual Boolean getCurrentPollingRate(CIMProperty&) const;
	virtual Uint32 getCurrentPollingRate() const;
	virtual Boolean getDefaultLoadBalanceType(CIMProperty&) const;
	virtual Uint16 getDefaultLoadBalanceType() const;

private:
	CIMName currentScope;

#	include "UNIX_SCSIMultipathConfigurationCapabilitiesPrivate.h"


};

#endif /* UNIX_SCSIMULTIPATHCONFIGURATIONCAPABILITIES */
