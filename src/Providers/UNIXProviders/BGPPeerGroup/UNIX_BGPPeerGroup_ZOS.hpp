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


UNIX_BGPPeerGroup::UNIX_BGPPeerGroup(void)
{
}

UNIX_BGPPeerGroup::~UNIX_BGPPeerGroup(void)
{
}


Boolean UNIX_BGPPeerGroup::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BGPPeerGroup::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_BGPPeerGroup::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BGPPeerGroup::getCaption() const
{
	return String ("");
}

Boolean UNIX_BGPPeerGroup::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BGPPeerGroup::getDescription() const
{
	return String ("");
}

Boolean UNIX_BGPPeerGroup::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BGPPeerGroup::getElementName() const
{
	return String("BGPPeerGroup");
}

Boolean UNIX_BGPPeerGroup::getCollectionID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COLLECTION_ID, getCollectionID());
	return true;
}

String UNIX_BGPPeerGroup::getCollectionID() const
{
	return String ("");
}

Boolean UNIX_BGPPeerGroup::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_BGPPeerGroup::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_BGPPeerGroup::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_BGPPeerGroup::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_BGPPeerGroup::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_BGPPeerGroup::getCreationClassName() const
{
	return String("UNIX_BGPPeerGroup");
}

Boolean UNIX_BGPPeerGroup::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_BGPPeerGroup::getName() const
{
	return String ("");
}

Boolean UNIX_BGPPeerGroup::getConnectRetryInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONNECT_RETRY_INTERVAL, getConnectRetryInterval());
	return true;
}

Uint32 UNIX_BGPPeerGroup::getConnectRetryInterval() const
{
	return Uint32(0);
}

Boolean UNIX_BGPPeerGroup::getHoldTimeConfigured(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HOLD_TIME_CONFIGURED, getHoldTimeConfigured());
	return true;
}

Uint16 UNIX_BGPPeerGroup::getHoldTimeConfigured() const
{
	return Uint16(0);
}

Boolean UNIX_BGPPeerGroup::getKeepAliveConfigured(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_KEEP_ALIVE_CONFIGURED, getKeepAliveConfigured());
	return true;
}

Uint16 UNIX_BGPPeerGroup::getKeepAliveConfigured() const
{
	return Uint16(0);
}

Boolean UNIX_BGPPeerGroup::getMinASOriginationInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_A_S_ORIGINATION_INTERVAL, getMinASOriginationInterval());
	return true;
}

Uint16 UNIX_BGPPeerGroup::getMinASOriginationInterval() const
{
	return Uint16(0);
}

Boolean UNIX_BGPPeerGroup::getMinRouteAdvertisementInterval(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_ROUTE_ADVERTISEMENT_INTERVAL, getMinRouteAdvertisementInterval());
	return true;
}

Uint16 UNIX_BGPPeerGroup::getMinRouteAdvertisementInterval() const
{
	return Uint16(0);
}



Boolean UNIX_BGPPeerGroup::initialize()
{
	return false;
}

Boolean UNIX_BGPPeerGroup::load(int &pIndex)
{
	return false;
}

Boolean UNIX_BGPPeerGroup::finalize()
{
	return false;
}

Boolean UNIX_BGPPeerGroup::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
