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


UNIX_NextHopRoute::UNIX_NextHopRoute(void)
{
}

UNIX_NextHopRoute::~UNIX_NextHopRoute(void)
{
}


Boolean UNIX_NextHopRoute::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_NextHopRoute::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_NextHopRoute::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_NextHopRoute::getCaption() const
{
	return String ("");
}

Boolean UNIX_NextHopRoute::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_NextHopRoute::getDescription() const
{
	return String ("");
}

Boolean UNIX_NextHopRoute::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_NextHopRoute::getElementName() const
{
	return String("NextHopRoute");
}

Boolean UNIX_NextHopRoute::getDestinationAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESTINATION_ADDRESS, getDestinationAddress());
	return true;
}

String UNIX_NextHopRoute::getDestinationAddress() const
{
	return String ("");
}

Boolean UNIX_NextHopRoute::getAdminDistance(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADMIN_DISTANCE, getAdminDistance());
	return true;
}

Uint16 UNIX_NextHopRoute::getAdminDistance() const
{
	return Uint16(0);
}

Boolean UNIX_NextHopRoute::getRouteMetric(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROUTE_METRIC, getRouteMetric());
	return true;
}

Uint16 UNIX_NextHopRoute::getRouteMetric() const
{
	return Uint16(0);
}

Boolean UNIX_NextHopRoute::getIsStatic(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_STATIC, getIsStatic());
	return true;
}

Boolean UNIX_NextHopRoute::getIsStatic() const
{
	return Boolean(false);
}

Boolean UNIX_NextHopRoute::getTypeOfRoute(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TYPE_OF_ROUTE, getTypeOfRoute());
	return true;
}

Uint16 UNIX_NextHopRoute::getTypeOfRoute() const
{
	return Uint16(0);
}



Boolean UNIX_NextHopRoute::initialize()
{
	return false;
}

Boolean UNIX_NextHopRoute::load(int &pIndex)
{
	return false;
}

Boolean UNIX_NextHopRoute::finalize()
{
	return false;
}

Boolean UNIX_NextHopRoute::find(Array<CIMKeyBinding> &kbArray)
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
