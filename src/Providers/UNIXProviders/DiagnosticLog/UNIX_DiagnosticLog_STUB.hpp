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


UNIX_DiagnosticLog::UNIX_DiagnosticLog(void)
{
}

UNIX_DiagnosticLog::~UNIX_DiagnosticLog(void)
{
}


Boolean UNIX_DiagnosticLog::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DiagnosticLog::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_DiagnosticLog::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DiagnosticLog::getCaption() const
{
	return String ("");
}

Boolean UNIX_DiagnosticLog::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DiagnosticLog::getDescription() const
{
	return String ("");
}

Boolean UNIX_DiagnosticLog::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DiagnosticLog::getElementName() const
{
	return String("DiagnosticLog");
}

Boolean UNIX_DiagnosticLog::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_DiagnosticLog::getInstallDate() const
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

Boolean UNIX_DiagnosticLog::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_DiagnosticLog::getName() const
{
	return String ("");
}

Boolean UNIX_DiagnosticLog::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_DiagnosticLog::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DiagnosticLog::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_DiagnosticLog::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_DiagnosticLog::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_DiagnosticLog::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_DiagnosticLog::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_DiagnosticLog::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_DiagnosticLog::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_DiagnosticLog::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_DiagnosticLog::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_DiagnosticLog::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_DiagnosticLog::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_DiagnosticLog::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_DiagnosticLog::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_DiagnosticLog::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_DiagnosticLog::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_DiagnosticLog::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_DiagnosticLog::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_DiagnosticLog::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_DiagnosticLog::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_DiagnosticLog::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_DiagnosticLog::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_DiagnosticLog::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_DiagnosticLog::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_DiagnosticLog::getTimeOfLastStateChange() const
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

Boolean UNIX_DiagnosticLog::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_DiagnosticLog::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DiagnosticLog::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_DiagnosticLog::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_DiagnosticLog::getMaxNumberOfRecords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_NUMBER_OF_RECORDS, getMaxNumberOfRecords());
	return true;
}

Uint64 UNIX_DiagnosticLog::getMaxNumberOfRecords() const
{
	return Uint64(0);
}

Boolean UNIX_DiagnosticLog::getCurrentNumberOfRecords(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_NUMBER_OF_RECORDS, getCurrentNumberOfRecords());
	return true;
}

Uint64 UNIX_DiagnosticLog::getCurrentNumberOfRecords() const
{
	return Uint64(0);
}

Boolean UNIX_DiagnosticLog::getOverwritePolicy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OVERWRITE_POLICY, getOverwritePolicy());
	return true;
}

Uint16 UNIX_DiagnosticLog::getOverwritePolicy() const
{
	return Uint16(0);
}

Boolean UNIX_DiagnosticLog::getLogState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_STATE, getLogState());
	return true;
}

Uint16 UNIX_DiagnosticLog::getLogState() const
{
	return Uint16(0);
}



Boolean UNIX_DiagnosticLog::initialize()
{
	return false;
}

Boolean UNIX_DiagnosticLog::load(int &pIndex)
{
	return false;
}

Boolean UNIX_DiagnosticLog::finalize()
{
	return false;
}

Boolean UNIX_DiagnosticLog::find(Array<CIMKeyBinding> &kbArray)
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
