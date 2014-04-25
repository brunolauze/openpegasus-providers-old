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

#ifndef __UNIX_BGPIPROUTE_H
#define __UNIX_BGPIPROUTE_H


#include "CIM_IPRoute.h"

#include "UNIX_BGPIPRouteDeps.h"


#define PROPERTY_IS_BACK_DOOR_ROUTE				"IsBackDoorRoute"
#define PROPERTY_USES_LOOPBACK_PEERING				"UsesLoopbackPeering"


class UNIX_BGPIPRoute :
	public CIM_IPRoute
{
public:

	UNIX_BGPIPRoute();
	~UNIX_BGPIPRoute();

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
	virtual Boolean getDestinationAddress(CIMProperty&) const;
	virtual String getDestinationAddress() const;
	virtual Boolean getDestinationMask(CIMProperty&) const;
	virtual String getDestinationMask() const;
	virtual Boolean getNextHop(CIMProperty&) const;
	virtual String getNextHop() const;
	virtual Boolean getIsStatic(CIMProperty&) const;
	virtual Boolean getIsStatic() const;
	virtual Boolean getSystemCreationClassName(CIMProperty&) const;
	virtual String getSystemCreationClassName() const;
	virtual Boolean getSystemName(CIMProperty&) const;
	virtual String getSystemName() const;
	virtual Boolean getServiceCreationClassName(CIMProperty&) const;
	virtual String getServiceCreationClassName() const;
	virtual Boolean getServiceName(CIMProperty&) const;
	virtual String getServiceName() const;
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual Boolean getIPDestinationAddress(CIMProperty&) const;
	virtual String getIPDestinationAddress() const;
	virtual Boolean getIPDestinationMask(CIMProperty&) const;
	virtual String getIPDestinationMask() const;
	virtual Boolean getAddressType(CIMProperty&) const;
	virtual Uint16 getAddressType() const;
	virtual Boolean getIsBackDoorRoute(CIMProperty&) const;
	virtual Boolean getIsBackDoorRoute() const;
	virtual Boolean getUsesLoopbackPeering(CIMProperty&) const;
	virtual Boolean getUsesLoopbackPeering() const;

private:
	CIMName currentScope;

#	include "UNIX_BGPIPRoutePrivate.h"


};

#endif /* UNIX_BGPIPROUTE */
