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


UNIX_StorageRedundancySet::UNIX_StorageRedundancySet(void)
{
}

UNIX_StorageRedundancySet::~UNIX_StorageRedundancySet(void)
{
}


Boolean UNIX_StorageRedundancySet::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_StorageRedundancySet::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_StorageRedundancySet::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_StorageRedundancySet::getCaption() const
{
	return String ("");
}

Boolean UNIX_StorageRedundancySet::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_StorageRedundancySet::getDescription() const
{
	return String ("");
}

Boolean UNIX_StorageRedundancySet::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_StorageRedundancySet::getElementName() const
{
	return String("StorageRedundancySet");
}

Boolean UNIX_StorageRedundancySet::getRedundancyStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REDUNDANCY_STATUS, getRedundancyStatus());
	return true;
}

Uint16 UNIX_StorageRedundancySet::getRedundancyStatus() const
{
	return Uint16(0);
}

Boolean UNIX_StorageRedundancySet::getTypeOfSet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TYPE_OF_SET, getTypeOfSet());
	return true;
}

Array<Uint16> UNIX_StorageRedundancySet::getTypeOfSet() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_StorageRedundancySet::getMinNumberNeeded(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_NUMBER_NEEDED, getMinNumberNeeded());
	return true;
}

Uint32 UNIX_StorageRedundancySet::getMinNumberNeeded() const
{
	return Uint32(0);
}

Boolean UNIX_StorageRedundancySet::getMaxNumberSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_NUMBER_SUPPORTED, getMaxNumberSupported());
	return true;
}

Uint32 UNIX_StorageRedundancySet::getMaxNumberSupported() const
{
	return Uint32(0);
}

Boolean UNIX_StorageRedundancySet::getVendorIdentifyingInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VENDOR_IDENTIFYING_INFO, getVendorIdentifyingInfo());
	return true;
}

String UNIX_StorageRedundancySet::getVendorIdentifyingInfo() const
{
	return String ("");
}

Boolean UNIX_StorageRedundancySet::getOtherTypeOfSet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_OF_SET, getOtherTypeOfSet());
	return true;
}

Array<String> UNIX_StorageRedundancySet::getOtherTypeOfSet() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_StorageRedundancySet::getLoadBalanceAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOAD_BALANCE_ALGORITHM, getLoadBalanceAlgorithm());
	return true;
}

Uint16 UNIX_StorageRedundancySet::getLoadBalanceAlgorithm() const
{
	return Uint16(0);
}

Boolean UNIX_StorageRedundancySet::getOtherLoadBalanceAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOAD_BALANCE_ALGORITHM, getOtherLoadBalanceAlgorithm());
	return true;
}

String UNIX_StorageRedundancySet::getOtherLoadBalanceAlgorithm() const
{
	return String ("");
}

Boolean UNIX_StorageRedundancySet::getTypeOfAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TYPE_OF_ALGORITHM, getTypeOfAlgorithm());
	return true;
}

Uint16 UNIX_StorageRedundancySet::getTypeOfAlgorithm() const
{
	return Uint16(0);
}

Boolean UNIX_StorageRedundancySet::getOtherAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ALGORITHM, getOtherAlgorithm());
	return true;
}

String UNIX_StorageRedundancySet::getOtherAlgorithm() const
{
	return String ("");
}



Boolean UNIX_StorageRedundancySet::initialize()
{
	return false;
}

Boolean UNIX_StorageRedundancySet::load(int &pIndex)
{
	return false;
}

Boolean UNIX_StorageRedundancySet::finalize()
{
	return false;
}

Boolean UNIX_StorageRedundancySet::find(Array<CIMKeyBinding> &kbArray)
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
