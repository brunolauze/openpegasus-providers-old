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


UNIX_FRU::UNIX_FRU(void)
{
}

UNIX_FRU::~UNIX_FRU(void)
{
}


Boolean UNIX_FRU::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FRU::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_FRU::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FRU::getCaption() const
{
	return String ("");
}

Boolean UNIX_FRU::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FRU::getDescription() const
{
	return String ("");
}

Boolean UNIX_FRU::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FRU::getElementName() const
{
	return String("FRU");
}

Boolean UNIX_FRU::getFRUNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_F_R_U_NUMBER, getFRUNumber());
	return true;
}

String UNIX_FRU::getFRUNumber() const
{
	return String ("");
}

Boolean UNIX_FRU::getIdentifyingNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFYING_NUMBER, getIdentifyingNumber());
	return true;
}

String UNIX_FRU::getIdentifyingNumber() const
{
	return String ("");
}

Boolean UNIX_FRU::getVendor(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR, getVendor());
	return true;
}

String UNIX_FRU::getVendor() const
{
	return String ("");
}

Boolean UNIX_FRU::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_FRU::getName() const
{
	return String ("");
}

Boolean UNIX_FRU::getRevisionLevel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REVISION_LEVEL, getRevisionLevel());
	return true;
}

String UNIX_FRU::getRevisionLevel() const
{
	return String ("");
}

Boolean UNIX_FRU::getCustomerReplaceable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CUSTOMER_REPLACEABLE, getCustomerReplaceable());
	return true;
}

Boolean UNIX_FRU::getCustomerReplaceable() const
{
	return Boolean(false);
}



Boolean UNIX_FRU::initialize()
{
	return false;
}

Boolean UNIX_FRU::load(int &pIndex)
{
	return false;
}

Boolean UNIX_FRU::finalize()
{
	return false;
}

Boolean UNIX_FRU::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String fRUNumberKey;
	String identifyingNumberKey;
	String vendorKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_F_R_U_NUMBER)) fRUNumberKey = kb.getValue();
		else if (keyName.equal(PROPERTY_IDENTIFYING_NUMBER)) identifyingNumberKey = kb.getValue();
		else if (keyName.equal(PROPERTY_VENDOR)) vendorKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
