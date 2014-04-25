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


UNIX_LaunchInContextSAP::UNIX_LaunchInContextSAP(void)
{
}

UNIX_LaunchInContextSAP::~UNIX_LaunchInContextSAP(void)
{
}


Boolean UNIX_LaunchInContextSAP::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_LaunchInContextSAP::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_LaunchInContextSAP::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_LaunchInContextSAP::getCaption() const
{
	return String ("");
}

Boolean UNIX_LaunchInContextSAP::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_LaunchInContextSAP::getDescription() const
{
	return String ("");
}

Boolean UNIX_LaunchInContextSAP::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_LaunchInContextSAP::getElementName() const
{
	return String("LaunchInContextSAP");
}

Boolean UNIX_LaunchInContextSAP::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_LaunchInContextSAP::getInstallDate() const
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

Boolean UNIX_LaunchInContextSAP::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_LaunchInContextSAP::getName() const
{
	return String ("");
}

Boolean UNIX_LaunchInContextSAP::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_LaunchInContextSAP::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_LaunchInContextSAP::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_LaunchInContextSAP::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_LaunchInContextSAP::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_LaunchInContextSAP::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_LaunchInContextSAP::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_LaunchInContextSAP::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_LaunchInContextSAP::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_LaunchInContextSAP::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_LaunchInContextSAP::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_LaunchInContextSAP::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_LaunchInContextSAP::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_LaunchInContextSAP::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_LaunchInContextSAP::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_LaunchInContextSAP::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_LaunchInContextSAP::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_LaunchInContextSAP::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_LaunchInContextSAP::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_LaunchInContextSAP::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_LaunchInContextSAP::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_LaunchInContextSAP::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_LaunchInContextSAP::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_LaunchInContextSAP::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_LaunchInContextSAP::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_LaunchInContextSAP::getTimeOfLastStateChange() const
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

Boolean UNIX_LaunchInContextSAP::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_LaunchInContextSAP::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_LaunchInContextSAP::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_LaunchInContextSAP::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_LaunchInContextSAP::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_LaunchInContextSAP::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_LaunchInContextSAP::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_LaunchInContextSAP::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_LaunchInContextSAP::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_LaunchInContextSAP::getCreationClassName() const
{
	return String("UNIX_LaunchInContextSAP");
}

Boolean UNIX_LaunchInContextSAP::getAccessInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS_INFO, getAccessInfo());
	return true;
}

String UNIX_LaunchInContextSAP::getAccessInfo() const
{
	return String ("");
}

Boolean UNIX_LaunchInContextSAP::getInfoFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INFO_FORMAT, getInfoFormat());
	return true;
}

Uint16 UNIX_LaunchInContextSAP::getInfoFormat() const
{
	return Uint16(0);
}

Boolean UNIX_LaunchInContextSAP::getOtherInfoFormatDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_INFO_FORMAT_DESCRIPTION, getOtherInfoFormatDescription());
	return true;
}

String UNIX_LaunchInContextSAP::getOtherInfoFormatDescription() const
{
	return String ("");
}

Boolean UNIX_LaunchInContextSAP::getAccessContext(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS_CONTEXT, getAccessContext());
	return true;
}

Uint16 UNIX_LaunchInContextSAP::getAccessContext() const
{
	return Uint16(0);
}

Boolean UNIX_LaunchInContextSAP::getOtherAccessContext(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ACCESS_CONTEXT, getOtherAccessContext());
	return true;
}

String UNIX_LaunchInContextSAP::getOtherAccessContext() const
{
	return String ("");
}

Boolean UNIX_LaunchInContextSAP::getParameterName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARAMETER_NAME, getParameterName());
	return true;
}

Array<String> UNIX_LaunchInContextSAP::getParameterName() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_LaunchInContextSAP::getParameterDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARAMETER_DESCRIPTION, getParameterDescription());
	return true;
}

Array<String> UNIX_LaunchInContextSAP::getParameterDescription() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_LaunchInContextSAP::getParameterDerivation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARAMETER_DERIVATION, getParameterDerivation());
	return true;
}

Array<String> UNIX_LaunchInContextSAP::getParameterDerivation() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_LaunchInContextSAP::getParameterConstraints(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARAMETER_CONSTRAINTS, getParameterConstraints());
	return true;
}

Array<String> UNIX_LaunchInContextSAP::getParameterConstraints() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_LaunchInContextSAP::getParameterType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARAMETER_TYPE, getParameterType());
	return true;
}

Array<Uint16> UNIX_LaunchInContextSAP::getParameterType() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_LaunchInContextSAP::getSupportedFeatureName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_FEATURE_NAME, getSupportedFeatureName());
	return true;
}

Array<String> UNIX_LaunchInContextSAP::getSupportedFeatureName() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_LaunchInContextSAP::getSupportedFeatureDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_FEATURE_DESCRIPTION, getSupportedFeatureDescription());
	return true;
}

Array<String> UNIX_LaunchInContextSAP::getSupportedFeatureDescription() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_LaunchInContextSAP::getManagedClasses(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANAGED_CLASSES, getManagedClasses());
	return true;
}

Array<String> UNIX_LaunchInContextSAP::getManagedClasses() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_LaunchInContextSAP::getManagementIsRestricted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MANAGEMENT_IS_RESTRICTED, getManagementIsRestricted());
	return true;
}

Boolean UNIX_LaunchInContextSAP::getManagementIsRestricted() const
{
	return Boolean(false);
}

Boolean UNIX_LaunchInContextSAP::getLaunchMessage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAUNCH_MESSAGE, getLaunchMessage());
	return true;
}

String UNIX_LaunchInContextSAP::getLaunchMessage() const
{
	return String ("");
}

Boolean UNIX_LaunchInContextSAP::getLaunchMessageProtocolOperation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAUNCH_MESSAGE_PROTOCOL_OPERATION, getLaunchMessageProtocolOperation());
	return true;
}

Uint16 UNIX_LaunchInContextSAP::getLaunchMessageProtocolOperation() const
{
	return Uint16(0);
}



Boolean UNIX_LaunchInContextSAP::initialize()
{
	return false;
}

Boolean UNIX_LaunchInContextSAP::load(int &pIndex)
{
	return false;
}

Boolean UNIX_LaunchInContextSAP::finalize()
{
	return false;
}

Boolean UNIX_LaunchInContextSAP::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
