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


UNIX_StorageCapabilities::UNIX_StorageCapabilities(void)
{
}

UNIX_StorageCapabilities::~UNIX_StorageCapabilities(void)
{
}


Boolean UNIX_StorageCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_StorageCapabilities::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_StorageCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_StorageCapabilities::getCaption() const
{
	return String ("");
}

Boolean UNIX_StorageCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_StorageCapabilities::getDescription() const
{
	return String ("");
}

Boolean UNIX_StorageCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_StorageCapabilities::getElementName() const
{
	return String("StorageCapabilities");
}

Boolean UNIX_StorageCapabilities::getElementType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_TYPE, getElementType());
	return true;
}

Uint16 UNIX_StorageCapabilities::getElementType() const
{
	return Uint16(0);
}

Boolean UNIX_StorageCapabilities::getNoSinglePointOfFailure(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NO_SINGLE_POINT_OF_FAILURE, getNoSinglePointOfFailure());
	return true;
}

Boolean UNIX_StorageCapabilities::getNoSinglePointOfFailure() const
{
	return Boolean(false);
}

Boolean UNIX_StorageCapabilities::getNoSinglePointOfFailureDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NO_SINGLE_POINT_OF_FAILURE_DEFAULT, getNoSinglePointOfFailureDefault());
	return true;
}

Boolean UNIX_StorageCapabilities::getNoSinglePointOfFailureDefault() const
{
	return Boolean(false);
}

Boolean UNIX_StorageCapabilities::getDataRedundancyMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_REDUNDANCY_MAX, getDataRedundancyMax());
	return true;
}

Uint16 UNIX_StorageCapabilities::getDataRedundancyMax() const
{
	return Uint16(0);
}

Boolean UNIX_StorageCapabilities::getDataRedundancyMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_REDUNDANCY_MIN, getDataRedundancyMin());
	return true;
}

Uint16 UNIX_StorageCapabilities::getDataRedundancyMin() const
{
	return Uint16(0);
}

Boolean UNIX_StorageCapabilities::getDataRedundancyDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_REDUNDANCY_DEFAULT, getDataRedundancyDefault());
	return true;
}

Uint16 UNIX_StorageCapabilities::getDataRedundancyDefault() const
{
	return Uint16(0);
}

Boolean UNIX_StorageCapabilities::getPackageRedundancyMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_REDUNDANCY_MAX, getPackageRedundancyMax());
	return true;
}

Uint16 UNIX_StorageCapabilities::getPackageRedundancyMax() const
{
	return Uint16(0);
}

Boolean UNIX_StorageCapabilities::getPackageRedundancyMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_REDUNDANCY_MIN, getPackageRedundancyMin());
	return true;
}

Uint16 UNIX_StorageCapabilities::getPackageRedundancyMin() const
{
	return Uint16(0);
}

Boolean UNIX_StorageCapabilities::getPackageRedundancyDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PACKAGE_REDUNDANCY_DEFAULT, getPackageRedundancyDefault());
	return true;
}

Uint16 UNIX_StorageCapabilities::getPackageRedundancyDefault() const
{
	return Uint16(0);
}

Boolean UNIX_StorageCapabilities::getDeltaReservationMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_RESERVATION_MAX, getDeltaReservationMax());
	return true;
}

Uint16 UNIX_StorageCapabilities::getDeltaReservationMax() const
{
	return Uint16(0);
}

Boolean UNIX_StorageCapabilities::getDeltaReservationMin(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_RESERVATION_MIN, getDeltaReservationMin());
	return true;
}

Uint16 UNIX_StorageCapabilities::getDeltaReservationMin() const
{
	return Uint16(0);
}

Boolean UNIX_StorageCapabilities::getDeltaReservationDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELTA_RESERVATION_DEFAULT, getDeltaReservationDefault());
	return true;
}

Uint16 UNIX_StorageCapabilities::getDeltaReservationDefault() const
{
	return Uint16(0);
}

Boolean UNIX_StorageCapabilities::getExtentStripeLengthDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXTENT_STRIPE_LENGTH_DEFAULT, getExtentStripeLengthDefault());
	return true;
}

Uint16 UNIX_StorageCapabilities::getExtentStripeLengthDefault() const
{
	return Uint16(0);
}

Boolean UNIX_StorageCapabilities::getParityLayoutDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARITY_LAYOUT_DEFAULT, getParityLayoutDefault());
	return true;
}

Uint16 UNIX_StorageCapabilities::getParityLayoutDefault() const
{
	return Uint16(0);
}

Boolean UNIX_StorageCapabilities::getUserDataStripeDepthDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_DATA_STRIPE_DEPTH_DEFAULT, getUserDataStripeDepthDefault());
	return true;
}

Uint64 UNIX_StorageCapabilities::getUserDataStripeDepthDefault() const
{
	return Uint64(0);
}



Boolean UNIX_StorageCapabilities::initialize()
{
	return false;
}

Boolean UNIX_StorageCapabilities::load(int &pIndex)
{
	return false;
}

Boolean UNIX_StorageCapabilities::finalize()
{
	return false;
}

Boolean UNIX_StorageCapabilities::find(Array<CIMKeyBinding> &kbArray)
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
