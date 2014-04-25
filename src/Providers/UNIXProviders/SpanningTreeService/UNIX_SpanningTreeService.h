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

#ifndef __UNIX_SPANNINGTREESERVICE_H
#define __UNIX_SPANNINGTREESERVICE_H


#include "CIM_ForwardingService.h"

#include "UNIX_SpanningTreeServiceDeps.h"


#define PROPERTY_PROTOCOL_SPEC				"ProtocolSpec"
#define PROPERTY_PRIORITY				"Priority"
#define PROPERTY_SPANNING_TREE_BRIDGE_ADDRESS				"SpanningTreeBridgeAddress"
#define PROPERTY_DESIGNATED_ROOT				"DesignatedRoot"
#define PROPERTY_ROOT_COST				"RootCost"
#define PROPERTY_ROOT_PORT				"RootPort"
#define PROPERTY_MAX_AGE				"MaxAge"
#define PROPERTY_HELLO_TIME				"HelloTime"
#define PROPERTY_HOLD_TIME				"HoldTime"
#define PROPERTY_FORWARD_DELAY				"ForwardDelay"
#define PROPERTY_BRIDGE_MAX_AGE				"BridgeMaxAge"
#define PROPERTY_BRIDGE_HELLO_TIME				"BridgeHelloTime"
#define PROPERTY_BRIDGE_FORWARD_DELAY				"BridgeForwardDelay"


class UNIX_SpanningTreeService :
	public CIM_ForwardingService
{
public:

	UNIX_SpanningTreeService();
	~UNIX_SpanningTreeService();

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
	virtual Boolean getKeywords(CIMProperty&) const;
	virtual Array<String> getKeywords() const;
	virtual Boolean getServiceURL(CIMProperty&) const;
	virtual String getServiceURL() const;
	virtual Boolean getStartupConditions(CIMProperty&) const;
	virtual Array<String> getStartupConditions() const;
	virtual Boolean getStartupParameters(CIMProperty&) const;
	virtual Array<String> getStartupParameters() const;
	virtual Boolean getProtocolType(CIMProperty&) const;
	virtual Uint16 getProtocolType() const;
	virtual Boolean getOtherProtocolType(CIMProperty&) const;
	virtual String getOtherProtocolType() const;
	virtual Boolean getProtocolSpec(CIMProperty&) const;
	virtual Uint16 getProtocolSpec() const;
	virtual Boolean getPriority(CIMProperty&) const;
	virtual Uint16 getPriority() const;
	virtual Boolean getSpanningTreeBridgeAddress(CIMProperty&) const;
	virtual String getSpanningTreeBridgeAddress() const;
	virtual Boolean getDesignatedRoot(CIMProperty&) const;
	virtual String getDesignatedRoot() const;
	virtual Boolean getRootCost(CIMProperty&) const;
	virtual Uint16 getRootCost() const;
	virtual Boolean getRootPort(CIMProperty&) const;
	virtual Uint16 getRootPort() const;
	virtual Boolean getMaxAge(CIMProperty&) const;
	virtual Uint32 getMaxAge() const;
	virtual Boolean getHelloTime(CIMProperty&) const;
	virtual Uint32 getHelloTime() const;
	virtual Boolean getHoldTime(CIMProperty&) const;
	virtual Uint32 getHoldTime() const;
	virtual Boolean getForwardDelay(CIMProperty&) const;
	virtual Uint32 getForwardDelay() const;
	virtual Boolean getBridgeMaxAge(CIMProperty&) const;
	virtual Uint32 getBridgeMaxAge() const;
	virtual Boolean getBridgeHelloTime(CIMProperty&) const;
	virtual Uint32 getBridgeHelloTime() const;
	virtual Boolean getBridgeForwardDelay(CIMProperty&) const;
	virtual Uint32 getBridgeForwardDelay() const;

private:
	CIMName currentScope;

#	include "UNIX_SpanningTreeServicePrivate.h"


};

#endif /* UNIX_SPANNINGTREESERVICE */
