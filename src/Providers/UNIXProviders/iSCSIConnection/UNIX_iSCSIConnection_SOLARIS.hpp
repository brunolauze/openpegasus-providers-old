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


UNIX_iSCSIConnection::UNIX_iSCSIConnection(void)
{
}

UNIX_iSCSIConnection::~UNIX_iSCSIConnection(void)
{
}


Boolean UNIX_iSCSIConnection::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_iSCSIConnection::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_iSCSIConnection::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_iSCSIConnection::getCaption() const
{
	return String ("");
}

Boolean UNIX_iSCSIConnection::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_iSCSIConnection::getDescription() const
{
	return String ("");
}

Boolean UNIX_iSCSIConnection::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_iSCSIConnection::getElementName() const
{
	return String("iSCSIConnection");
}

Boolean UNIX_iSCSIConnection::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_iSCSIConnection::getInstallDate() const
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

Boolean UNIX_iSCSIConnection::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_iSCSIConnection::getName() const
{
	return String ("");
}

Boolean UNIX_iSCSIConnection::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_iSCSIConnection::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_iSCSIConnection::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_iSCSIConnection::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_iSCSIConnection::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_iSCSIConnection::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_iSCSIConnection::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_iSCSIConnection::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_iSCSIConnection::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_iSCSIConnection::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_iSCSIConnection::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_iSCSIConnection::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_iSCSIConnection::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_iSCSIConnection::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_iSCSIConnection::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_iSCSIConnection::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_iSCSIConnection::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_iSCSIConnection::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_iSCSIConnection::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_iSCSIConnection::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_iSCSIConnection::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_iSCSIConnection::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_iSCSIConnection::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_iSCSIConnection::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_iSCSIConnection::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_iSCSIConnection::getTimeOfLastStateChange() const
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

Boolean UNIX_iSCSIConnection::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_iSCSIConnection::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_iSCSIConnection::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_iSCSIConnection::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_iSCSIConnection::getDirectionality(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DIRECTIONALITY, getDirectionality());
	return true;
}

Uint16 UNIX_iSCSIConnection::getDirectionality() const
{
	return Uint16(0);
}

Boolean UNIX_iSCSIConnection::getAggregationBehavior(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AGGREGATION_BEHAVIOR, getAggregationBehavior());
	return true;
}

Uint16 UNIX_iSCSIConnection::getAggregationBehavior() const
{
	return Uint16(0);
}

Boolean UNIX_iSCSIConnection::getConnectionID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECTION_ID, getConnectionID());
	return true;
}

Uint32 UNIX_iSCSIConnection::getConnectionID() const
{
	return Uint32(0);
}

Boolean UNIX_iSCSIConnection::getMaxReceiveDataSegmentLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_RECEIVE_DATA_SEGMENT_LENGTH, getMaxReceiveDataSegmentLength());
	return true;
}

Uint32 UNIX_iSCSIConnection::getMaxReceiveDataSegmentLength() const
{
	return Uint32(0);
}

Boolean UNIX_iSCSIConnection::getMaxTransmitDataSegmentLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_TRANSMIT_DATA_SEGMENT_LENGTH, getMaxTransmitDataSegmentLength());
	return true;
}

Uint32 UNIX_iSCSIConnection::getMaxTransmitDataSegmentLength() const
{
	return Uint32(0);
}

Boolean UNIX_iSCSIConnection::getHeaderDigestMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEADER_DIGEST_METHOD, getHeaderDigestMethod());
	return true;
}

Uint16 UNIX_iSCSIConnection::getHeaderDigestMethod() const
{
	return Uint16(0);
}

Boolean UNIX_iSCSIConnection::getOtherHeaderDigestMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_HEADER_DIGEST_METHOD, getOtherHeaderDigestMethod());
	return true;
}

String UNIX_iSCSIConnection::getOtherHeaderDigestMethod() const
{
	return String ("");
}

Boolean UNIX_iSCSIConnection::getDataDigestMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_DIGEST_METHOD, getDataDigestMethod());
	return true;
}

Uint16 UNIX_iSCSIConnection::getDataDigestMethod() const
{
	return Uint16(0);
}

Boolean UNIX_iSCSIConnection::getOtherDataDigestMethod(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_DATA_DIGEST_METHOD, getOtherDataDigestMethod());
	return true;
}

String UNIX_iSCSIConnection::getOtherDataDigestMethod() const
{
	return String ("");
}

Boolean UNIX_iSCSIConnection::getReceivingMarkers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECEIVING_MARKERS, getReceivingMarkers());
	return true;
}

Boolean UNIX_iSCSIConnection::getReceivingMarkers() const
{
	return Boolean(false);
}

Boolean UNIX_iSCSIConnection::getSendingMarkers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SENDING_MARKERS, getSendingMarkers());
	return true;
}

Boolean UNIX_iSCSIConnection::getSendingMarkers() const
{
	return Boolean(false);
}

Boolean UNIX_iSCSIConnection::getActiveiSCSIVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTIVEI_S_CS_I_VERSION, getActiveiSCSIVersion());
	return true;
}

Boolean UNIX_iSCSIConnection::getActiveiSCSIVersion() const
{
	return Boolean(false);
}

Boolean UNIX_iSCSIConnection::getAuthenticationMethodUsed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTHENTICATION_METHOD_USED, getAuthenticationMethodUsed());
	return true;
}

Uint16 UNIX_iSCSIConnection::getAuthenticationMethodUsed() const
{
	return Uint16(0);
}

Boolean UNIX_iSCSIConnection::getMutualAuthentication(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MUTUAL_AUTHENTICATION, getMutualAuthentication());
	return true;
}

Boolean UNIX_iSCSIConnection::getMutualAuthentication() const
{
	return Boolean(false);
}



Boolean UNIX_iSCSIConnection::initialize()
{
	return false;
}

Boolean UNIX_iSCSIConnection::load(int &pIndex)
{
	return false;
}

Boolean UNIX_iSCSIConnection::finalize()
{
	return false;
}

Boolean UNIX_iSCSIConnection::find(Array<CIMKeyBinding> &kbArray)
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
