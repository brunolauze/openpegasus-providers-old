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

#ifndef __UNIX_ZONE_H
#define __UNIX_ZONE_H


#include "CIM_ConnectivityCollection.h"

#include "UNIX_ZoneDeps.h"


#define PROPERTY_ACTIVE				"Active"
#define PROPERTY_ZONE_TYPE				"ZoneType"
#define PROPERTY_OTHER_ZONE_TYPE_DESCRIPTION				"OtherZoneTypeDescription"
#define PROPERTY_ZONE_SUB_TYPE				"ZoneSubType"
#define PROPERTY_OTHER_ZONE_SUB_TYPE_DESCRIPTION				"OtherZoneSubTypeDescription"


class UNIX_Zone :
	public CIM_ConnectivityCollection
{
public:

	UNIX_Zone();
	~UNIX_Zone();

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
	virtual Boolean getConnectivityStatus(CIMProperty&) const;
	virtual Uint16 getConnectivityStatus() const;
	virtual Boolean getActive(CIMProperty&) const;
	virtual Boolean getActive() const;
	virtual Boolean getZoneType(CIMProperty&) const;
	virtual Uint16 getZoneType() const;
	virtual Boolean getOtherZoneTypeDescription(CIMProperty&) const;
	virtual String getOtherZoneTypeDescription() const;
	virtual Boolean getZoneSubType(CIMProperty&) const;
	virtual Uint16 getZoneSubType() const;
	virtual Boolean getOtherZoneSubTypeDescription(CIMProperty&) const;
	virtual String getOtherZoneSubTypeDescription() const;

private:
	CIMName currentScope;

#	include "UNIX_ZonePrivate.h"


};

#endif /* UNIX_ZONE */
