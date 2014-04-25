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


UNIX_MessageLog::UNIX_MessageLog(void)
{
}

UNIX_MessageLog::~UNIX_MessageLog(void)
{
}


Boolean UNIX_MessageLog::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_MessageLog::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_MessageLog::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_MessageLog::getCaption() const
{
	return String ("");
}

Boolean UNIX_MessageLog::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_MessageLog::getDescription() const
{
	return String ("");
}

Boolean UNIX_MessageLog::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_MessageLog::getElementName() const
{
	return String("MessageLog");
}

Boolean UNIX_MessageLog::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_MessageLog::getInstallDate() const
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

Boolean UNIX_MessageLog::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_MessageLog::getName() const
{
	return String ("");
}

Boolean UNIX_MessageLog::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_MessageLog::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_MessageLog::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_MessageLog::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_MessageLog::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_MessageLog::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_MessageLog::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_MessageLog::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_MessageLog::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_MessageLog::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_MessageLog::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_MessageLog::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_MessageLog::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_MessageLog::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_MessageLog::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_MessageLog::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_MessageLog::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_MessageLog::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_MessageLog::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_MessageLog::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_MessageLog::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_MessageLog::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_MessageLog::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_MessageLog::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_MessageLog::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_MessageLog::getTimeOfLastStateChange() const
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

Boolean UNIX_MessageLog::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_MessageLog::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_MessageLog::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_MessageLog::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_MessageLog::getMaxNumberOfRecords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_NUMBER_OF_RECORDS, getMaxNumberOfRecords());
	return true;
}

Uint64 UNIX_MessageLog::getMaxNumberOfRecords() const
{
	return Uint64(0);
}

Boolean UNIX_MessageLog::getCurrentNumberOfRecords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_NUMBER_OF_RECORDS, getCurrentNumberOfRecords());
	return true;
}

Uint64 UNIX_MessageLog::getCurrentNumberOfRecords() const
{
	return Uint64(0);
}

Boolean UNIX_MessageLog::getOverwritePolicy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OVERWRITE_POLICY, getOverwritePolicy());
	return true;
}

Uint16 UNIX_MessageLog::getOverwritePolicy() const
{
	return Uint16(0);
}

Boolean UNIX_MessageLog::getLogState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_STATE, getLogState());
	return true;
}

Uint16 UNIX_MessageLog::getLogState() const
{
	return Uint16(0);
}

Boolean UNIX_MessageLog::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_MessageLog::getCreationClassName() const
{
	return String("UNIX_MessageLog");
}

Boolean UNIX_MessageLog::getCapabilities(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITIES, getCapabilities());
	return true;
}

Array<Uint16> UNIX_MessageLog::getCapabilities() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_MessageLog::getCapabilitiesDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPABILITIES_DESCRIPTIONS, getCapabilitiesDescriptions());
	return true;
}

Array<String> UNIX_MessageLog::getCapabilitiesDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_MessageLog::getMaxLogSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_LOG_SIZE, getMaxLogSize());
	return true;
}

Uint64 UNIX_MessageLog::getMaxLogSize() const
{
	return Uint64(0);
}

Boolean UNIX_MessageLog::getSizeOfHeader(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIZE_OF_HEADER, getSizeOfHeader());
	return true;
}

Uint64 UNIX_MessageLog::getSizeOfHeader() const
{
	return Uint64(0);
}

Boolean UNIX_MessageLog::getHeaderFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEADER_FORMAT, getHeaderFormat());
	return true;
}

String UNIX_MessageLog::getHeaderFormat() const
{
	return String ("");
}

Boolean UNIX_MessageLog::getMaxRecordSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_RECORD_SIZE, getMaxRecordSize());
	return true;
}

Uint64 UNIX_MessageLog::getMaxRecordSize() const
{
	return Uint64(0);
}

Boolean UNIX_MessageLog::getSizeOfRecordHeader(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIZE_OF_RECORD_HEADER, getSizeOfRecordHeader());
	return true;
}

Uint64 UNIX_MessageLog::getSizeOfRecordHeader() const
{
	return Uint64(0);
}

Boolean UNIX_MessageLog::getRecordHeaderFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECORD_HEADER_FORMAT, getRecordHeaderFormat());
	return true;
}

String UNIX_MessageLog::getRecordHeaderFormat() const
{
	return String ("");
}

Boolean UNIX_MessageLog::getOtherPolicyDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_POLICY_DESCRIPTION, getOtherPolicyDescription());
	return true;
}

String UNIX_MessageLog::getOtherPolicyDescription() const
{
	return String ("");
}

Boolean UNIX_MessageLog::getTimeWhenOutdated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_WHEN_OUTDATED, getTimeWhenOutdated());
	return true;
}

CIMDateTime UNIX_MessageLog::getTimeWhenOutdated() const
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

Boolean UNIX_MessageLog::getPercentageNearFull(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERCENTAGE_NEAR_FULL, getPercentageNearFull());
	return true;
}

Uint8 UNIX_MessageLog::getPercentageNearFull() const
{
	return Uint8(0);
}

Boolean UNIX_MessageLog::getLastChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_CHANGE, getLastChange());
	return true;
}

Uint16 UNIX_MessageLog::getLastChange() const
{
	return Uint16(0);
}

Boolean UNIX_MessageLog::getTimeOfLastChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_CHANGE, getTimeOfLastChange());
	return true;
}

CIMDateTime UNIX_MessageLog::getTimeOfLastChange() const
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

Boolean UNIX_MessageLog::getRecordLastChanged(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECORD_LAST_CHANGED, getRecordLastChanged());
	return true;
}

Uint64 UNIX_MessageLog::getRecordLastChanged() const
{
	return Uint64(0);
}

Boolean UNIX_MessageLog::getIsFrozen(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_FROZEN, getIsFrozen());
	return true;
}

Boolean UNIX_MessageLog::getIsFrozen() const
{
	return Boolean(false);
}

Boolean UNIX_MessageLog::getCharacterSet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHARACTER_SET, getCharacterSet());
	return true;
}

Uint16 UNIX_MessageLog::getCharacterSet() const
{
	return Uint16(0);
}



Boolean UNIX_MessageLog::initialize()
{
	return false;
}

Boolean UNIX_MessageLog::load(int &pIndex)
{
	return false;
}

Boolean UNIX_MessageLog::finalize()
{
	return false;
}

Boolean UNIX_MessageLog::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
