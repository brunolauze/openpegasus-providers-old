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

#ifndef __UNIX_NETWORKPORTCAPABILITIES_H
#define __UNIX_NETWORKPORTCAPABILITIES_H


#include "CIM_LogicalPortCapabilities.h"

#include "UNIX_NetworkPortCapabilitiesDeps.h"


#define PROPERTY_SPEED_CONFIGURABLE				"SpeedConfigurable"
#define PROPERTY_PORT_SPEEDS_SUPPORTED				"PortSpeedsSupported"
#define PROPERTY_NETWORK_IDS_CONFIGURABLE				"NetworkIDsConfigurable"
#define PROPERTY_NETWORK_IDS_FORMAT				"NetworkIDsFormat"
#define PROPERTY_LINK_TECHNOLOGIES_SUPPORTED				"LinkTechnologiesSupported"


class UNIX_NetworkPortCapabilities :
	public CIM_LogicalPortCapabilities
{
public:

	UNIX_NetworkPortCapabilities();
	~UNIX_NetworkPortCapabilities();

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
	virtual Boolean getElementNameEditSupported(CIMProperty&) const;
	virtual Boolean getElementNameEditSupported() const;
	virtual Boolean getMaxElementNameLen(CIMProperty&) const;
	virtual Uint16 getMaxElementNameLen() const;
	virtual Boolean getRequestedStatesSupported(CIMProperty&) const;
	virtual Array<Uint16> getRequestedStatesSupported() const;
	virtual Boolean getElementNameMask(CIMProperty&) const;
	virtual String getElementNameMask() const;
	virtual Boolean getRequestedSpeedsSupported(CIMProperty&) const;
	virtual Array<Uint64> getRequestedSpeedsSupported() const;
	virtual Boolean getAutoSenseSpeedConfigurable(CIMProperty&) const;
	virtual Boolean getAutoSenseSpeedConfigurable() const;
	virtual Boolean getSpeedConfigurable(CIMProperty&) const;
	virtual Boolean getSpeedConfigurable() const;
	virtual Boolean getPortSpeedsSupported(CIMProperty&) const;
	virtual Array<Uint64> getPortSpeedsSupported() const;
	virtual Boolean getNetworkIDsConfigurable(CIMProperty&) const;
	virtual Boolean getNetworkIDsConfigurable() const;
	virtual Boolean getNetworkIDsFormat(CIMProperty&) const;
	virtual Uint16 getNetworkIDsFormat() const;
	virtual Boolean getLinkTechnologiesSupported(CIMProperty&) const;
	virtual Array<Uint16> getLinkTechnologiesSupported() const;

private:
	CIMName currentScope;

#	include "UNIX_NetworkPortCapabilitiesPrivate.h"


};

#endif /* UNIX_NETWORKPORTCAPABILITIES */
