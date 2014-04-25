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


UNIX_RedundancySet::UNIX_RedundancySet(void)
{
}

UNIX_RedundancySet::~UNIX_RedundancySet(void)
{
}


Boolean UNIX_RedundancySet::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_RedundancySet::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_RedundancySet::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_RedundancySet::getCaption() const
{
	return String ("");
}

Boolean UNIX_RedundancySet::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_RedundancySet::getDescription() const
{
	return String ("");
}

Boolean UNIX_RedundancySet::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_RedundancySet::getElementName() const
{
	return String("RedundancySet");
}

Boolean UNIX_RedundancySet::getRedundancyStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REDUNDANCY_STATUS, getRedundancyStatus());
	return true;
}

Uint16 UNIX_RedundancySet::getRedundancyStatus() const
{
	return Uint16(0);
}

Boolean UNIX_RedundancySet::getTypeOfSet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TYPE_OF_SET, getTypeOfSet());
	return true;
}

Array<Uint16> UNIX_RedundancySet::getTypeOfSet() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_RedundancySet::getMinNumberNeeded(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_NUMBER_NEEDED, getMinNumberNeeded());
	return true;
}

Uint32 UNIX_RedundancySet::getMinNumberNeeded() const
{
	return Uint32(0);
}

Boolean UNIX_RedundancySet::getMaxNumberSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_NUMBER_SUPPORTED, getMaxNumberSupported());
	return true;
}

Uint32 UNIX_RedundancySet::getMaxNumberSupported() const
{
	return Uint32(0);
}

Boolean UNIX_RedundancySet::getVendorIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_IDENTIFYING_INFO, getVendorIdentifyingInfo());
	return true;
}

String UNIX_RedundancySet::getVendorIdentifyingInfo() const
{
	return String ("");
}

Boolean UNIX_RedundancySet::getOtherTypeOfSet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_OF_SET, getOtherTypeOfSet());
	return true;
}

Array<String> UNIX_RedundancySet::getOtherTypeOfSet() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_RedundancySet::getLoadBalanceAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOAD_BALANCE_ALGORITHM, getLoadBalanceAlgorithm());
	return true;
}

Uint16 UNIX_RedundancySet::getLoadBalanceAlgorithm() const
{
	return Uint16(0);
}

Boolean UNIX_RedundancySet::getOtherLoadBalanceAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOAD_BALANCE_ALGORITHM, getOtherLoadBalanceAlgorithm());
	return true;
}

String UNIX_RedundancySet::getOtherLoadBalanceAlgorithm() const
{
	return String ("");
}



Boolean UNIX_RedundancySet::initialize()
{
	return false;
}

Boolean UNIX_RedundancySet::load(int &pIndex)
{
	return false;
}

Boolean UNIX_RedundancySet::finalize()
{
	return false;
}

Boolean UNIX_RedundancySet::find(Array<CIMKeyBinding> &kbArray)
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
