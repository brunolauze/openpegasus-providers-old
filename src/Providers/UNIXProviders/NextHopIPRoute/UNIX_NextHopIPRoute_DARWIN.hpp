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


UNIX_NextHopIPRoute::UNIX_NextHopIPRoute(void)
{
}

UNIX_NextHopIPRoute::~UNIX_NextHopIPRoute(void)
{
}


Boolean UNIX_NextHopIPRoute::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_NextHopIPRoute::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_NextHopIPRoute::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_NextHopIPRoute::getCaption() const
{
	return String ("");
}

Boolean UNIX_NextHopIPRoute::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_NextHopIPRoute::getDescription() const
{
	return String ("");
}

Boolean UNIX_NextHopIPRoute::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_NextHopIPRoute::getElementName() const
{
	return String("NextHopIPRoute");
}

Boolean UNIX_NextHopIPRoute::getDestinationAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESTINATION_ADDRESS, getDestinationAddress());
	return true;
}

String UNIX_NextHopIPRoute::getDestinationAddress() const
{
	return String ("");
}

Boolean UNIX_NextHopIPRoute::getAdminDistance(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADMIN_DISTANCE, getAdminDistance());
	return true;
}

Uint16 UNIX_NextHopIPRoute::getAdminDistance() const
{
	return Uint16(0);
}

Boolean UNIX_NextHopIPRoute::getRouteMetric(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROUTE_METRIC, getRouteMetric());
	return true;
}

Uint16 UNIX_NextHopIPRoute::getRouteMetric() const
{
	return Uint16(0);
}

Boolean UNIX_NextHopIPRoute::getIsStatic(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_STATIC, getIsStatic());
	return true;
}

Boolean UNIX_NextHopIPRoute::getIsStatic() const
{
	return Boolean(false);
}

Boolean UNIX_NextHopIPRoute::getTypeOfRoute(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TYPE_OF_ROUTE, getTypeOfRoute());
	return true;
}

Uint16 UNIX_NextHopIPRoute::getTypeOfRoute() const
{
	return Uint16(0);
}

Boolean UNIX_NextHopIPRoute::getRouteDerivation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ROUTE_DERIVATION, getRouteDerivation());
	return true;
}

Uint16 UNIX_NextHopIPRoute::getRouteDerivation() const
{
	return Uint16(0);
}

Boolean UNIX_NextHopIPRoute::getOtherDerivation(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_DERIVATION, getOtherDerivation());
	return true;
}

String UNIX_NextHopIPRoute::getOtherDerivation() const
{
	return String ("");
}

Boolean UNIX_NextHopIPRoute::getDestinationMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESTINATION_MASK, getDestinationMask());
	return true;
}

String UNIX_NextHopIPRoute::getDestinationMask() const
{
	return String ("");
}

Boolean UNIX_NextHopIPRoute::getPrefixLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PREFIX_LENGTH, getPrefixLength());
	return true;
}

Uint8 UNIX_NextHopIPRoute::getPrefixLength() const
{
	return Uint8(0);
}

Boolean UNIX_NextHopIPRoute::getAddressType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_TYPE, getAddressType());
	return true;
}

Uint16 UNIX_NextHopIPRoute::getAddressType() const
{
	return Uint16(0);
}



Boolean UNIX_NextHopIPRoute::initialize()
{
	return false;
}

Boolean UNIX_NextHopIPRoute::load(int &pIndex)
{
	return false;
}

Boolean UNIX_NextHopIPRoute::finalize()
{
	return false;
}

Boolean UNIX_NextHopIPRoute::find(Array<CIMKeyBinding> &kbArray)
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
