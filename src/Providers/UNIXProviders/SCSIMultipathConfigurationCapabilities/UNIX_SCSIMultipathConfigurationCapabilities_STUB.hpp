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


UNIX_SCSIMultipathConfigurationCapabilities::UNIX_SCSIMultipathConfigurationCapabilities(void)
{
}

UNIX_SCSIMultipathConfigurationCapabilities::~UNIX_SCSIMultipathConfigurationCapabilities(void)
{
}


Boolean UNIX_SCSIMultipathConfigurationCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SCSIMultipathConfigurationCapabilities::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SCSIMultipathConfigurationCapabilities::getCaption() const
{
	return String ("");
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SCSIMultipathConfigurationCapabilities::getDescription() const
{
	return String ("");
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SCSIMultipathConfigurationCapabilities::getElementName() const
{
	return String("SCSIMultipathConfigurationCapabilities");
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::getSupportedLoadBalanceTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_LOAD_BALANCE_TYPES, getSupportedLoadBalanceTypes());
	return true;
}

Array<Uint16> UNIX_SCSIMultipathConfigurationCapabilities::getSupportedLoadBalanceTypes() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::getOtherSupportedLoadBalanceAlgorithmNames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPORTED_LOAD_BALANCE_ALGORITHM_NAMES, getOtherSupportedLoadBalanceAlgorithmNames());
	return true;
}

Array<String> UNIX_SCSIMultipathConfigurationCapabilities::getOtherSupportedLoadBalanceAlgorithmNames() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::getOtherSupportedLoadBalanceVendorNames(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPORTED_LOAD_BALANCE_VENDOR_NAMES, getOtherSupportedLoadBalanceVendorNames());
	return true;
}

Array<String> UNIX_SCSIMultipathConfigurationCapabilities::getOtherSupportedLoadBalanceVendorNames() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::getCanSetTPGAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAN_SET_T_P_G_ACCESS, getCanSetTPGAccess());
	return true;
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::getCanSetTPGAccess() const
{
	return Boolean(false);
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::getCanOverridePaths(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAN_OVERRIDE_PATHS, getCanOverridePaths());
	return true;
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::getCanOverridePaths() const
{
	return Boolean(false);
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::getExposesPathDeviceFiles(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXPOSES_PATH_DEVICE_FILES, getExposesPathDeviceFiles());
	return true;
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::getExposesPathDeviceFiles() const
{
	return Boolean(false);
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::getDeviceNameFilespace(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_NAME_FILESPACE, getDeviceNameFilespace());
	return true;
}

String UNIX_SCSIMultipathConfigurationCapabilities::getDeviceNameFilespace() const
{
	return String ("");
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::getOnlySupportsSpecifiedProducts(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ONLY_SUPPORTS_SPECIFIED_PRODUCTS, getOnlySupportsSpecifiedProducts());
	return true;
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::getOnlySupportsSpecifiedProducts() const
{
	return Boolean(false);
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::getMaximumWeight(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_WEIGHT, getMaximumWeight());
	return true;
}

Uint32 UNIX_SCSIMultipathConfigurationCapabilities::getMaximumWeight() const
{
	return Uint32(0);
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::getAutofailbackSupport(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTOFAILBACK_SUPPORT, getAutofailbackSupport());
	return true;
}

Uint16 UNIX_SCSIMultipathConfigurationCapabilities::getAutofailbackSupport() const
{
	return Uint16(0);
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::getAutoFailbackEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTO_FAILBACK_ENABLED, getAutoFailbackEnabled());
	return true;
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::getAutoFailbackEnabled() const
{
	return Boolean(false);
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::getPollingRateMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLLING_RATE_MAX, getPollingRateMax());
	return true;
}

Uint32 UNIX_SCSIMultipathConfigurationCapabilities::getPollingRateMax() const
{
	return Uint32(0);
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::getCurrentPollingRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_POLLING_RATE, getCurrentPollingRate());
	return true;
}

Uint32 UNIX_SCSIMultipathConfigurationCapabilities::getCurrentPollingRate() const
{
	return Uint32(0);
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::getDefaultLoadBalanceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_LOAD_BALANCE_TYPE, getDefaultLoadBalanceType());
	return true;
}

Uint16 UNIX_SCSIMultipathConfigurationCapabilities::getDefaultLoadBalanceType() const
{
	return Uint16(0);
}



Boolean UNIX_SCSIMultipathConfigurationCapabilities::initialize()
{
	return false;
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::load(int &pIndex)
{
	return false;
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::finalize()
{
	return false;
}

Boolean UNIX_SCSIMultipathConfigurationCapabilities::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String instanceIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_INSTANCE_ID)) instanceIDKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
