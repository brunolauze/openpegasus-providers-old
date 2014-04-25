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

#ifndef __UNIX_ZONECAPABILITIES_H
#define __UNIX_ZONECAPABILITIES_H


#include "CIM_Capabilities.h"

#include "UNIX_ZoneCapabilitiesDeps.h"


#define PROPERTY_ZONE_NAME_MAX_LEN				"ZoneNameMaxLen"
#define PROPERTY_ZONE_NAME_FORMAT				"ZoneNameFormat"
#define PROPERTY_MAX_NUM_ZONE_SETS				"MaxNumZoneSets"
#define PROPERTY_MAX_NUM_ZONE				"MaxNumZone"
#define PROPERTY_MAX_NUM_ZONE_MEMBERS				"MaxNumZoneMembers"
#define PROPERTY_MAX_NUM_ZONES_PER_ZONE_SET				"MaxNumZonesPerZoneSet"
#define PROPERTY_MAX_NUM_ZONE_ALIASES				"MaxNumZoneAliases"
#define PROPERTY_OTHER_SUPPORTED_CONNECTIVITY_MEMBER_TYPES				"OtherSupportedConnectivityMemberTypes"
#define PROPERTY_SUPPORTED_CONNECTIVITY_MEMBER_TYPES				"SupportedConnectivityMemberTypes"


class UNIX_ZoneCapabilities :
	public CIM_Capabilities
{
public:

	UNIX_ZoneCapabilities();
	~UNIX_ZoneCapabilities();

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
	virtual Boolean getZoneNameMaxLen(CIMProperty&) const;
	virtual Uint32 getZoneNameMaxLen() const;
	virtual Boolean getZoneNameFormat(CIMProperty&) const;
	virtual Uint16 getZoneNameFormat() const;
	virtual Boolean getMaxNumZoneSets(CIMProperty&) const;
	virtual Uint32 getMaxNumZoneSets() const;
	virtual Boolean getMaxNumZone(CIMProperty&) const;
	virtual Uint32 getMaxNumZone() const;
	virtual Boolean getMaxNumZoneMembers(CIMProperty&) const;
	virtual Uint32 getMaxNumZoneMembers() const;
	virtual Boolean getMaxNumZonesPerZoneSet(CIMProperty&) const;
	virtual Uint32 getMaxNumZonesPerZoneSet() const;
	virtual Boolean getMaxNumZoneAliases(CIMProperty&) const;
	virtual Uint32 getMaxNumZoneAliases() const;
	virtual Boolean getOtherSupportedConnectivityMemberTypes(CIMProperty&) const;
	virtual Array<String> getOtherSupportedConnectivityMemberTypes() const;
	virtual Boolean getSupportedConnectivityMemberTypes(CIMProperty&) const;
	virtual Array<Uint16> getSupportedConnectivityMemberTypes() const;

private:
	CIMName currentScope;

#	include "UNIX_ZoneCapabilitiesPrivate.h"


};

#endif /* UNIX_ZONECAPABILITIES */
