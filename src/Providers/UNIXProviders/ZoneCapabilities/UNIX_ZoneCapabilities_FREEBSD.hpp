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


UNIX_ZoneCapabilities::UNIX_ZoneCapabilities(void)
{
}

UNIX_ZoneCapabilities::~UNIX_ZoneCapabilities(void)
{
}


Boolean UNIX_ZoneCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ZoneCapabilities::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_ZoneCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ZoneCapabilities::getCaption() const
{
	return String ("");
}

Boolean UNIX_ZoneCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ZoneCapabilities::getDescription() const
{
	return String ("");
}

Boolean UNIX_ZoneCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ZoneCapabilities::getElementName() const
{
	return String("ZoneCapabilities");
}

Boolean UNIX_ZoneCapabilities::getZoneNameMaxLen(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ZONE_NAME_MAX_LEN, getZoneNameMaxLen());
	return true;
}

Uint32 UNIX_ZoneCapabilities::getZoneNameMaxLen() const
{
	return Uint32(0);
}

Boolean UNIX_ZoneCapabilities::getZoneNameFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ZONE_NAME_FORMAT, getZoneNameFormat());
	return true;
}

Uint16 UNIX_ZoneCapabilities::getZoneNameFormat() const
{
	return Uint16(0);
}

Boolean UNIX_ZoneCapabilities::getMaxNumZoneSets(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_NUM_ZONE_SETS, getMaxNumZoneSets());
	return true;
}

Uint32 UNIX_ZoneCapabilities::getMaxNumZoneSets() const
{
	return Uint32(0);
}

Boolean UNIX_ZoneCapabilities::getMaxNumZone(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_NUM_ZONE, getMaxNumZone());
	return true;
}

Uint32 UNIX_ZoneCapabilities::getMaxNumZone() const
{
	return Uint32(0);
}

Boolean UNIX_ZoneCapabilities::getMaxNumZoneMembers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_NUM_ZONE_MEMBERS, getMaxNumZoneMembers());
	return true;
}

Uint32 UNIX_ZoneCapabilities::getMaxNumZoneMembers() const
{
	return Uint32(0);
}

Boolean UNIX_ZoneCapabilities::getMaxNumZonesPerZoneSet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_NUM_ZONES_PER_ZONE_SET, getMaxNumZonesPerZoneSet());
	return true;
}

Uint32 UNIX_ZoneCapabilities::getMaxNumZonesPerZoneSet() const
{
	return Uint32(0);
}

Boolean UNIX_ZoneCapabilities::getMaxNumZoneAliases(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_NUM_ZONE_ALIASES, getMaxNumZoneAliases());
	return true;
}

Uint32 UNIX_ZoneCapabilities::getMaxNumZoneAliases() const
{
	return Uint32(0);
}

Boolean UNIX_ZoneCapabilities::getOtherSupportedConnectivityMemberTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPORTED_CONNECTIVITY_MEMBER_TYPES, getOtherSupportedConnectivityMemberTypes());
	return true;
}

Array<String> UNIX_ZoneCapabilities::getOtherSupportedConnectivityMemberTypes() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_ZoneCapabilities::getSupportedConnectivityMemberTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_CONNECTIVITY_MEMBER_TYPES, getSupportedConnectivityMemberTypes());
	return true;
}

Array<Uint16> UNIX_ZoneCapabilities::getSupportedConnectivityMemberTypes() const
{
	Array<Uint16> as;
	

	return as;

}



Boolean UNIX_ZoneCapabilities::initialize()
{
	return false;
}

Boolean UNIX_ZoneCapabilities::load(int &pIndex)
{
	return false;
}

Boolean UNIX_ZoneCapabilities::finalize()
{
	return false;
}

Boolean UNIX_ZoneCapabilities::find(Array<CIMKeyBinding> &kbArray)
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
