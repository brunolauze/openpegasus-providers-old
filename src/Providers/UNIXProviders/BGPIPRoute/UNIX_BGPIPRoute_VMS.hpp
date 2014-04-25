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


UNIX_BGPIPRoute::UNIX_BGPIPRoute(void)
{
}

UNIX_BGPIPRoute::~UNIX_BGPIPRoute(void)
{
}


Boolean UNIX_BGPIPRoute::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BGPIPRoute::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_BGPIPRoute::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BGPIPRoute::getCaption() const
{
	return String ("");
}

Boolean UNIX_BGPIPRoute::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BGPIPRoute::getDescription() const
{
	return String ("");
}

Boolean UNIX_BGPIPRoute::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BGPIPRoute::getElementName() const
{
	return String("BGPIPRoute");
}

Boolean UNIX_BGPIPRoute::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_BGPIPRoute::getInstallDate() const
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

Boolean UNIX_BGPIPRoute::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_BGPIPRoute::getName() const
{
	return String ("");
}

Boolean UNIX_BGPIPRoute::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_BGPIPRoute::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_BGPIPRoute::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_BGPIPRoute::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_BGPIPRoute::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_BGPIPRoute::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_BGPIPRoute::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_BGPIPRoute::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_BGPIPRoute::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_BGPIPRoute::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_BGPIPRoute::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_BGPIPRoute::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_BGPIPRoute::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_BGPIPRoute::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_BGPIPRoute::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_BGPIPRoute::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_BGPIPRoute::getDestinationAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESTINATION_ADDRESS, getDestinationAddress());
	return true;
}

String UNIX_BGPIPRoute::getDestinationAddress() const
{
	return String ("");
}

Boolean UNIX_BGPIPRoute::getDestinationMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESTINATION_MASK, getDestinationMask());
	return true;
}

String UNIX_BGPIPRoute::getDestinationMask() const
{
	return String ("");
}

Boolean UNIX_BGPIPRoute::getNextHop(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NEXT_HOP, getNextHop());
	return true;
}

String UNIX_BGPIPRoute::getNextHop() const
{
	return String ("");
}

Boolean UNIX_BGPIPRoute::getIsStatic(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_STATIC, getIsStatic());
	return true;
}

Boolean UNIX_BGPIPRoute::getIsStatic() const
{
	return Boolean(false);
}

Boolean UNIX_BGPIPRoute::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_BGPIPRoute::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_BGPIPRoute::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_BGPIPRoute::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_BGPIPRoute::getServiceCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_CREATION_CLASS_NAME, getServiceCreationClassName());
	return true;
}

String UNIX_BGPIPRoute::getServiceCreationClassName() const
{
	return String ("");
}

Boolean UNIX_BGPIPRoute::getServiceName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_NAME, getServiceName());
	return true;
}

String UNIX_BGPIPRoute::getServiceName() const
{
	return String ("");
}

Boolean UNIX_BGPIPRoute::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_BGPIPRoute::getCreationClassName() const
{
	return String("UNIX_BGPIPRoute");
}

Boolean UNIX_BGPIPRoute::getIPDestinationAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_I_P_DESTINATION_ADDRESS, getIPDestinationAddress());
	return true;
}

String UNIX_BGPIPRoute::getIPDestinationAddress() const
{
	return String ("");
}

Boolean UNIX_BGPIPRoute::getIPDestinationMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_I_P_DESTINATION_MASK, getIPDestinationMask());
	return true;
}

String UNIX_BGPIPRoute::getIPDestinationMask() const
{
	return String ("");
}

Boolean UNIX_BGPIPRoute::getAddressType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_TYPE, getAddressType());
	return true;
}

Uint16 UNIX_BGPIPRoute::getAddressType() const
{
	return Uint16(0);
}

Boolean UNIX_BGPIPRoute::getIsBackDoorRoute(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_BACK_DOOR_ROUTE, getIsBackDoorRoute());
	return true;
}

Boolean UNIX_BGPIPRoute::getIsBackDoorRoute() const
{
	return Boolean(false);
}

Boolean UNIX_BGPIPRoute::getUsesLoopbackPeering(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USES_LOOPBACK_PEERING, getUsesLoopbackPeering());
	return true;
}

Boolean UNIX_BGPIPRoute::getUsesLoopbackPeering() const
{
	return Boolean(false);
}



Boolean UNIX_BGPIPRoute::initialize()
{
	return false;
}

Boolean UNIX_BGPIPRoute::load(int &pIndex)
{
	return false;
}

Boolean UNIX_BGPIPRoute::finalize()
{
	return false;
}

Boolean UNIX_BGPIPRoute::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String serviceCreationClassNameKey;
	String serviceNameKey;
	String creationClassNameKey;
	String iPDestinationAddressKey;
	String iPDestinationMaskKey;
	String addressTypeKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SERVICE_CREATION_CLASS_NAME)) serviceCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SERVICE_NAME)) serviceNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_I_P_DESTINATION_ADDRESS)) iPDestinationAddressKey = kb.getValue();
		else if (keyName.equal(PROPERTY_I_P_DESTINATION_MASK)) iPDestinationMaskKey = kb.getValue();
		else if (keyName.equal(PROPERTY_ADDRESS_TYPE)) addressTypeKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
