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


UNIX_iSCSISession::UNIX_iSCSISession(void)
{
}

UNIX_iSCSISession::~UNIX_iSCSISession(void)
{
}


Boolean UNIX_iSCSISession::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_iSCSISession::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_iSCSISession::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_iSCSISession::getCaption() const
{
	return String ("");
}

Boolean UNIX_iSCSISession::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_iSCSISession::getDescription() const
{
	return String ("");
}

Boolean UNIX_iSCSISession::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_iSCSISession::getElementName() const
{
	return String("iSCSISession");
}

Boolean UNIX_iSCSISession::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_iSCSISession::getInstallDate() const
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

Boolean UNIX_iSCSISession::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_iSCSISession::getName() const
{
	return String ("");
}

Boolean UNIX_iSCSISession::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_iSCSISession::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_iSCSISession::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_iSCSISession::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_iSCSISession::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_iSCSISession::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_iSCSISession::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_iSCSISession::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_iSCSISession::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_iSCSISession::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_iSCSISession::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_iSCSISession::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_iSCSISession::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_iSCSISession::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_iSCSISession::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_iSCSISession::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_iSCSISession::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_iSCSISession::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_iSCSISession::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_iSCSISession::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_iSCSISession::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_iSCSISession::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_iSCSISession::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_iSCSISession::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_iSCSISession::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_iSCSISession::getTimeOfLastStateChange() const
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

Boolean UNIX_iSCSISession::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_iSCSISession::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_iSCSISession::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_iSCSISession::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_iSCSISession::getDirectionality(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DIRECTIONALITY, getDirectionality());
	return true;
}

Uint16 UNIX_iSCSISession::getDirectionality() const
{
	return Uint16(0);
}

Boolean UNIX_iSCSISession::getAggregationBehavior(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AGGREGATION_BEHAVIOR, getAggregationBehavior());
	return true;
}

Uint16 UNIX_iSCSISession::getAggregationBehavior() const
{
	return Uint16(0);
}

Boolean UNIX_iSCSISession::getSessionType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SESSION_TYPE, getSessionType());
	return true;
}

Uint16 UNIX_iSCSISession::getSessionType() const
{
	return Uint16(0);
}

Boolean UNIX_iSCSISession::getTSIH(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_T_S_I_H, getTSIH());
	return true;
}

Uint32 UNIX_iSCSISession::getTSIH() const
{
	return Uint32(0);
}

Boolean UNIX_iSCSISession::getEndPointName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_END_POINT_NAME, getEndPointName());
	return true;
}

String UNIX_iSCSISession::getEndPointName() const
{
	return String ("");
}

Boolean UNIX_iSCSISession::getCurrentConnections(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_CONNECTIONS, getCurrentConnections());
	return true;
}

Uint32 UNIX_iSCSISession::getCurrentConnections() const
{
	return Uint32(0);
}

Boolean UNIX_iSCSISession::getInitialR2T(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INITIAL_R_2_T, getInitialR2T());
	return true;
}

Boolean UNIX_iSCSISession::getInitialR2T() const
{
	return Boolean(false);
}

Boolean UNIX_iSCSISession::getImmediateData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IMMEDIATE_DATA, getImmediateData());
	return true;
}

Boolean UNIX_iSCSISession::getImmediateData() const
{
	return Boolean(false);
}

Boolean UNIX_iSCSISession::getMaxOutstandingR2T(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_OUTSTANDING_R_2_T, getMaxOutstandingR2T());
	return true;
}

Uint32 UNIX_iSCSISession::getMaxOutstandingR2T() const
{
	return Uint32(0);
}

Boolean UNIX_iSCSISession::getMaxUnsolicitedFirstDataBurstLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_UNSOLICITED_FIRST_DATA_BURST_LENGTH, getMaxUnsolicitedFirstDataBurstLength());
	return true;
}

Uint32 UNIX_iSCSISession::getMaxUnsolicitedFirstDataBurstLength() const
{
	return Uint32(0);
}

Boolean UNIX_iSCSISession::getMaxDataBurstLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_DATA_BURST_LENGTH, getMaxDataBurstLength());
	return true;
}

Uint32 UNIX_iSCSISession::getMaxDataBurstLength() const
{
	return Uint32(0);
}

Boolean UNIX_iSCSISession::getDataSequenceInOrder(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_SEQUENCE_IN_ORDER, getDataSequenceInOrder());
	return true;
}

Boolean UNIX_iSCSISession::getDataSequenceInOrder() const
{
	return Boolean(false);
}

Boolean UNIX_iSCSISession::getDataPDUInOrder(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_P_D_U_IN_ORDER, getDataPDUInOrder());
	return true;
}

Boolean UNIX_iSCSISession::getDataPDUInOrder() const
{
	return Boolean(false);
}

Boolean UNIX_iSCSISession::getErrorRecoveryLevel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_RECOVERY_LEVEL, getErrorRecoveryLevel());
	return true;
}

Uint32 UNIX_iSCSISession::getErrorRecoveryLevel() const
{
	return Uint32(0);
}

Boolean UNIX_iSCSISession::getMaxConnectionsPerSession(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_CONNECTIONS_PER_SESSION, getMaxConnectionsPerSession());
	return true;
}

Uint32 UNIX_iSCSISession::getMaxConnectionsPerSession() const
{
	return Uint32(0);
}

Boolean UNIX_iSCSISession::getDefaultTimeToWait(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_TIME_TO_WAIT, getDefaultTimeToWait());
	return true;
}

Uint32 UNIX_iSCSISession::getDefaultTimeToWait() const
{
	return Uint32(0);
}

Boolean UNIX_iSCSISession::getDefaultTimeToRetain(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_TIME_TO_RETAIN, getDefaultTimeToRetain());
	return true;
}

Uint32 UNIX_iSCSISession::getDefaultTimeToRetain() const
{
	return Uint32(0);
}



Boolean UNIX_iSCSISession::initialize()
{
	return false;
}

Boolean UNIX_iSCSISession::load(int &pIndex)
{
	return false;
}

Boolean UNIX_iSCSISession::finalize()
{
	return false;
}

Boolean UNIX_iSCSISession::find(Array<CIMKeyBinding> &kbArray)
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
