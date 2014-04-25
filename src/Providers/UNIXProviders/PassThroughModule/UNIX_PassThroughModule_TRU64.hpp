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


UNIX_PassThroughModule::UNIX_PassThroughModule(void)
{
}

UNIX_PassThroughModule::~UNIX_PassThroughModule(void)
{
}


Boolean UNIX_PassThroughModule::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PassThroughModule::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_PassThroughModule::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PassThroughModule::getCaption() const
{
	return String ("");
}

Boolean UNIX_PassThroughModule::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PassThroughModule::getDescription() const
{
	return String ("");
}

Boolean UNIX_PassThroughModule::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PassThroughModule::getElementName() const
{
	return String("PassThroughModule");
}

Boolean UNIX_PassThroughModule::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_PassThroughModule::getInstallDate() const
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

Boolean UNIX_PassThroughModule::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PassThroughModule::getName() const
{
	return String ("");
}

Boolean UNIX_PassThroughModule::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_PassThroughModule::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PassThroughModule::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_PassThroughModule::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PassThroughModule::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_PassThroughModule::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_PassThroughModule::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_PassThroughModule::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_PassThroughModule::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_PassThroughModule::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_PassThroughModule::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_PassThroughModule::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_PassThroughModule::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_PassThroughModule::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_PassThroughModule::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_PassThroughModule::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_PassThroughModule::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_PassThroughModule::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_PassThroughModule::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_PassThroughModule::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_PassThroughModule::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_PassThroughModule::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_PassThroughModule::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_PassThroughModule::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_PassThroughModule::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_PassThroughModule::getTimeOfLastStateChange() const
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

Boolean UNIX_PassThroughModule::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_PassThroughModule::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PassThroughModule::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_PassThroughModule::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_PassThroughModule::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_PassThroughModule::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_PassThroughModule::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_PassThroughModule::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_PassThroughModule::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_PassThroughModule::getCreationClassName() const
{
	return String("UNIX_PassThroughModule");
}

Boolean UNIX_PassThroughModule::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_PassThroughModule::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_PassThroughModule::getPowerManagementSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_SUPPORTED, getPowerManagementSupported());
	return true;
}

Boolean UNIX_PassThroughModule::getPowerManagementSupported() const
{
	return Boolean(false);
}

Boolean UNIX_PassThroughModule::getPowerManagementCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_MANAGEMENT_CAPABILITIES, getPowerManagementCapabilities());
	return true;
}

Array<Uint16> UNIX_PassThroughModule::getPowerManagementCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PassThroughModule::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_PassThroughModule::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_PassThroughModule::getStatusInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_INFO, getStatusInfo());
	return true;
}

Uint16 UNIX_PassThroughModule::getStatusInfo() const
{
	return Uint16(0);
}

Boolean UNIX_PassThroughModule::getLastErrorCode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR_CODE, getLastErrorCode());
	return true;
}

Uint32 UNIX_PassThroughModule::getLastErrorCode() const
{
	return Uint32(0);
}

Boolean UNIX_PassThroughModule::getErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DESCRIPTION, getErrorDescription());
	return true;
}

String UNIX_PassThroughModule::getErrorDescription() const
{
	return String ("");
}

Boolean UNIX_PassThroughModule::getErrorCleared(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_CLEARED, getErrorCleared());
	return true;
}

Boolean UNIX_PassThroughModule::getErrorCleared() const
{
	return Boolean(false);
}

Boolean UNIX_PassThroughModule::getOtherIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_IDENTIFYING_INFO, getOtherIdentifyingInfo());
	return true;
}

Array<String> UNIX_PassThroughModule::getOtherIdentifyingInfo() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PassThroughModule::getPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POWER_ON_HOURS, getPowerOnHours());
	return true;
}

Uint64 UNIX_PassThroughModule::getPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_PassThroughModule::getTotalPowerOnHours(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_POWER_ON_HOURS, getTotalPowerOnHours());
	return true;
}

Uint64 UNIX_PassThroughModule::getTotalPowerOnHours() const
{
	return Uint64(0);
}

Boolean UNIX_PassThroughModule::getIdentifyingDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_DESCRIPTIONS, getIdentifyingDescriptions());
	return true;
}

Array<String> UNIX_PassThroughModule::getIdentifyingDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PassThroughModule::getAdditionalAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_AVAILABILITY, getAdditionalAvailability());
	return true;
}

Array<Uint16> UNIX_PassThroughModule::getAdditionalAvailability() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PassThroughModule::getMaxQuiesceTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_QUIESCE_TIME, getMaxQuiesceTime());
	return true;
}

Uint64 UNIX_PassThroughModule::getMaxQuiesceTime() const
{
	return Uint64(0);
}

Boolean UNIX_PassThroughModule::getModuleNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MODULE_NUMBER, getModuleNumber());
	return true;
}

Uint16 UNIX_PassThroughModule::getModuleNumber() const
{
	return Uint16(0);
}

Boolean UNIX_PassThroughModule::getLogicalModuleType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOGICAL_MODULE_TYPE, getLogicalModuleType());
	return true;
}

Uint16 UNIX_PassThroughModule::getLogicalModuleType() const
{
	return Uint16(0);
}

Boolean UNIX_PassThroughModule::getOtherLogicalModuleTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOGICAL_MODULE_TYPE_DESCRIPTION, getOtherLogicalModuleTypeDescription());
	return true;
}

String UNIX_PassThroughModule::getOtherLogicalModuleTypeDescription() const
{
	return String ("");
}

Boolean UNIX_PassThroughModule::getLinkTechnologies(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LINK_TECHNOLOGIES, getLinkTechnologies());
	return true;
}

Array<Uint16> UNIX_PassThroughModule::getLinkTechnologies() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PassThroughModule::getOtherLinkTechnologies(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LINK_TECHNOLOGIES, getOtherLinkTechnologies());
	return true;
}

Array<String> UNIX_PassThroughModule::getOtherLinkTechnologies() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PassThroughModule::getIsProgrammable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_PROGRAMMABLE, getIsProgrammable());
	return true;
}

Boolean UNIX_PassThroughModule::getIsProgrammable() const
{
	return Boolean(false);
}

Boolean UNIX_PassThroughModule::getNumberOfPorts(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_PORTS, getNumberOfPorts());
	return true;
}

Uint16 UNIX_PassThroughModule::getNumberOfPorts() const
{
	return Uint16(0);
}

Boolean UNIX_PassThroughModule::getInternalPorts(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INTERNAL_PORTS, getInternalPorts());
	return true;
}

Array<Uint16> UNIX_PassThroughModule::getInternalPorts() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PassThroughModule::getExternalPorts(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTERNAL_PORTS, getExternalPorts());
	return true;
}

Array<Uint16> UNIX_PassThroughModule::getExternalPorts() const
{
	Array<Uint16> as;
	

	return as;

}



Boolean UNIX_PassThroughModule::initialize()
{
	return false;
}

Boolean UNIX_PassThroughModule::load(int &pIndex)
{
	return false;
}

Boolean UNIX_PassThroughModule::finalize()
{
	return false;
}

Boolean UNIX_PassThroughModule::find(Array<CIMKeyBinding> &kbArray)
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
