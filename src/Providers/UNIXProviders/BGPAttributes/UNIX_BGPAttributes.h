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

#ifndef __UNIX_BGPATTRIBUTES_H
#define __UNIX_BGPATTRIBUTES_H


#include "CIM_LogicalElement.h"

#include "UNIX_BGPAttributesDeps.h"


#define PROPERTY_SYSTEM_CREATION_CLASS_NAME				"SystemCreationClassName"
#define PROPERTY_SYSTEM_NAME				"SystemName"
#define PROPERTY_VERSION				"Version"
#define PROPERTY_LOCAL_PREFERENCE				"LocalPreference"
#define PROPERTY_A_S_PATH				"ASPath"
#define PROPERTY_AS_SET				"AsSet"
#define PROPERTY_NEXT_HOP				"NextHop"
#define PROPERTY_NEXT_HOP_SELF				"NextHopSelf"
#define PROPERTY_M_E_D				"MED"
#define PROPERTY_B_G_P_COMMUNITY_VALUE				"BGPCommunityValue"
#define PROPERTY_ATOMIC_AGGREGATE				"AtomicAggregate"
#define PROPERTY_AGGREGATOR				"Aggregator"
#define PROPERTY_ORIGIN				"Origin"
#define PROPERTY_ORIGINATOR_ID				"OriginatorID"


class UNIX_BGPAttributes :
	public CIM_LogicalElement
{
public:

	UNIX_BGPAttributes();
	~UNIX_BGPAttributes();

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
	virtual Boolean getSystemCreationClassName(CIMProperty&) const;
	virtual String getSystemCreationClassName() const;
	virtual Boolean getSystemName(CIMProperty&) const;
	virtual String getSystemName() const;
	virtual Boolean getVersion(CIMProperty&) const;
	virtual String getVersion() const;
	virtual Boolean getLocalPreference(CIMProperty&) const;
	virtual Uint16 getLocalPreference() const;
	virtual Boolean getASPath(CIMProperty&) const;
	virtual String getASPath() const;
	virtual Boolean getAsSet(CIMProperty&) const;
	virtual String getAsSet() const;
	virtual Boolean getNextHop(CIMProperty&) const;
	virtual String getNextHop() const;
	virtual Boolean getNextHopSelf(CIMProperty&) const;
	virtual String getNextHopSelf() const;
	virtual Boolean getMED(CIMProperty&) const;
	virtual Uint32 getMED() const;
	virtual Boolean getBGPCommunityValue(CIMProperty&) const;
	virtual Uint32 getBGPCommunityValue() const;
	virtual Boolean getAtomicAggregate(CIMProperty&) const;
	virtual Boolean getAtomicAggregate() const;
	virtual Boolean getAggregator(CIMProperty&) const;
	virtual String getAggregator() const;
	virtual Boolean getOrigin(CIMProperty&) const;
	virtual Uint16 getOrigin() const;
	virtual Boolean getOriginatorID(CIMProperty&) const;
	virtual String getOriginatorID() const;

private:
	CIMName currentScope;

#	include "UNIX_BGPAttributesPrivate.h"


};

#endif /* UNIX_BGPATTRIBUTES */
