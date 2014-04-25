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


UNIX_StorageRedundancyGroup::UNIX_StorageRedundancyGroup(void)
{
}

UNIX_StorageRedundancyGroup::~UNIX_StorageRedundancyGroup(void)
{
}


Boolean UNIX_StorageRedundancyGroup::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_StorageRedundancyGroup::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_StorageRedundancyGroup::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_StorageRedundancyGroup::getCaption() const
{
	return String ("");
}

Boolean UNIX_StorageRedundancyGroup::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_StorageRedundancyGroup::getDescription() const
{
	return String ("");
}

Boolean UNIX_StorageRedundancyGroup::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_StorageRedundancyGroup::getElementName() const
{
	return String("StorageRedundancyGroup");
}

Boolean UNIX_StorageRedundancyGroup::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_StorageRedundancyGroup::getInstallDate() const
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

Boolean UNIX_StorageRedundancyGroup::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_StorageRedundancyGroup::getName() const
{
	return String ("");
}

Boolean UNIX_StorageRedundancyGroup::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_StorageRedundancyGroup::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_StorageRedundancyGroup::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_StorageRedundancyGroup::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_StorageRedundancyGroup::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_StorageRedundancyGroup::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_StorageRedundancyGroup::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_StorageRedundancyGroup::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_StorageRedundancyGroup::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_StorageRedundancyGroup::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_StorageRedundancyGroup::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_StorageRedundancyGroup::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_StorageRedundancyGroup::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_StorageRedundancyGroup::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_StorageRedundancyGroup::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_StorageRedundancyGroup::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_StorageRedundancyGroup::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_StorageRedundancyGroup::getCreationClassName() const
{
	return String("UNIX_StorageRedundancyGroup");
}

Boolean UNIX_StorageRedundancyGroup::getRedundancyStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REDUNDANCY_STATUS, getRedundancyStatus());
	return true;
}

Uint16 UNIX_StorageRedundancyGroup::getRedundancyStatus() const
{
	return Uint16(0);
}

Boolean UNIX_StorageRedundancyGroup::getTypeOfAlgorithm(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TYPE_OF_ALGORITHM, getTypeOfAlgorithm());
	return true;
}

Uint16 UNIX_StorageRedundancyGroup::getTypeOfAlgorithm() const
{
	return Uint16(0);
}

Boolean UNIX_StorageRedundancyGroup::getStorageRedundancy(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STORAGE_REDUNDANCY, getStorageRedundancy());
	return true;
}

Uint16 UNIX_StorageRedundancyGroup::getStorageRedundancy() const
{
	return Uint16(0);
}

Boolean UNIX_StorageRedundancyGroup::getIsStriped(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_STRIPED, getIsStriped());
	return true;
}

Boolean UNIX_StorageRedundancyGroup::getIsStriped() const
{
	return Boolean(false);
}

Boolean UNIX_StorageRedundancyGroup::getIsConcatenated(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_CONCATENATED, getIsConcatenated());
	return true;
}

Boolean UNIX_StorageRedundancyGroup::getIsConcatenated() const
{
	return Boolean(false);
}



Boolean UNIX_StorageRedundancyGroup::initialize()
{
	return false;
}

Boolean UNIX_StorageRedundancyGroup::load(int &pIndex)
{
	return false;
}

Boolean UNIX_StorageRedundancyGroup::finalize()
{
	return false;
}

Boolean UNIX_StorageRedundancyGroup::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
