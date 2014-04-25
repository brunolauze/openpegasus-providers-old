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

#ifndef __UNIX_OOBALERTSERVICE_H
#define __UNIX_OOBALERTSERVICE_H


#include "CIM_Service.h"

#include "UNIX_OOBAlertServiceDeps.h"


#define PROPERTY_DESTINATION_TYPE				"DestinationType"
#define PROPERTY_OTHER_DESTINATION_TYPE_DESCRIPTION				"OtherDestinationTypeDescription"
#define PROPERTY_DESTINATION_ADDRESS				"DestinationAddress"
#define PROPERTY_MESSAGE_FORMAT				"MessageFormat"
#define PROPERTY_OTHER_MESSAGE_FORMAT_DESCRIPTION				"OtherMessageFormatDescription"
#define PROPERTY_ONLY_SENDS_FIXED_MESSAGE				"OnlySendsFixedMessage"
#define PROPERTY_FIXED_PART_OF_MESSAGE				"FixedPartOfMessage"
#define PROPERTY_DESTINATION_IS_ACK_CAPABLE				"DestinationIsAckCapable"
#define PROPERTY_RETRY_COUNT				"RetryCount"
#define PROPERTY_RETRY_INTERVAL				"RetryInterval"
#define PROPERTY_PRESENCE_HEARTBEAT_CAPABLE				"PresenceHeartbeatCapable"
#define PROPERTY_ENABLE_PRESENCE_HEARTBEATS				"EnablePresenceHeartbeats"


class UNIX_OOBAlertService :
	public CIM_Service
{
public:

	UNIX_OOBAlertService();
	~UNIX_OOBAlertService();

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
	virtual Boolean getPrimaryOwnerName(CIMProperty&) const;
	virtual String getPrimaryOwnerName() const;
	virtual Boolean getPrimaryOwnerContact(CIMProperty&) const;
	virtual String getPrimaryOwnerContact() const;
	virtual Boolean getStartMode(CIMProperty&) const;
	virtual String getStartMode() const;
	virtual Boolean getStarted(CIMProperty&) const;
	virtual Boolean getStarted() const;
	virtual Boolean getDestinationType(CIMProperty&) const;
	virtual Uint16 getDestinationType() const;
	virtual Boolean getOtherDestinationTypeDescription(CIMProperty&) const;
	virtual String getOtherDestinationTypeDescription() const;
	virtual Boolean getDestinationAddress(CIMProperty&) const;
	virtual String getDestinationAddress() const;
	virtual Boolean getMessageFormat(CIMProperty&) const;
	virtual Uint16 getMessageFormat() const;
	virtual Boolean getOtherMessageFormatDescription(CIMProperty&) const;
	virtual String getOtherMessageFormatDescription() const;
	virtual Boolean getOnlySendsFixedMessage(CIMProperty&) const;
	virtual Boolean getOnlySendsFixedMessage() const;
	virtual Boolean getFixedPartOfMessage(CIMProperty&) const;
	virtual String getFixedPartOfMessage() const;
	virtual Boolean getDestinationIsAckCapable(CIMProperty&) const;
	virtual Boolean getDestinationIsAckCapable() const;
	virtual Boolean getRetryCount(CIMProperty&) const;
	virtual Uint16 getRetryCount() const;
	virtual Boolean getRetryInterval(CIMProperty&) const;
	virtual Uint16 getRetryInterval() const;
	virtual Boolean getPresenceHeartbeatCapable(CIMProperty&) const;
	virtual Boolean getPresenceHeartbeatCapable() const;
	virtual Boolean getEnablePresenceHeartbeats(CIMProperty&) const;
	virtual Boolean getEnablePresenceHeartbeats() const;

private:
	CIMName currentScope;

#	include "UNIX_OOBAlertServicePrivate.h"


};

#endif /* UNIX_OOBALERTSERVICE */
