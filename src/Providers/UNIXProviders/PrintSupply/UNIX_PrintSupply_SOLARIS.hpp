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


UNIX_PrintSupply::UNIX_PrintSupply(void)
{
}

UNIX_PrintSupply::~UNIX_PrintSupply(void)
{
}


Boolean UNIX_PrintSupply::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PrintSupply::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_PrintSupply::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PrintSupply::getCaption() const
{
	return String ("");
}

Boolean UNIX_PrintSupply::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PrintSupply::getDescription() const
{
	return String ("");
}

Boolean UNIX_PrintSupply::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PrintSupply::getElementName() const
{
	return String("PrintSupply");
}

Boolean UNIX_PrintSupply::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_PrintSupply::getInstallDate() const
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

Boolean UNIX_PrintSupply::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_PrintSupply::getName() const
{
	return String ("");
}

Boolean UNIX_PrintSupply::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_PrintSupply::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PrintSupply::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_PrintSupply::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_PrintSupply::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_PrintSupply::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_PrintSupply::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_PrintSupply::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_PrintSupply::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_PrintSupply::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_PrintSupply::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_PrintSupply::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_PrintSupply::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_PrintSupply::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_PrintSupply::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_PrintSupply::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_PrintSupply::getSNMPRowId(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_S_N_M_P_ROW_ID, getSNMPRowId());
	return true;
}

Uint32 UNIX_PrintSupply::getSNMPRowId() const
{
	return Uint32(0);
}

Boolean UNIX_PrintSupply::getLocalizedDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCALIZED_DESCRIPTION, getLocalizedDescription());
	return true;
}

String UNIX_PrintSupply::getLocalizedDescription() const
{
	return String ("");
}

Boolean UNIX_PrintSupply::getClassification(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CLASSIFICATION, getClassification());
	return true;
}

Uint32 UNIX_PrintSupply::getClassification() const
{
	return Uint32(0);
}

Boolean UNIX_PrintSupply::getOtherClassification(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_CLASSIFICATION, getOtherClassification());
	return true;
}

String UNIX_PrintSupply::getOtherClassification() const
{
	return String ("");
}

Boolean UNIX_PrintSupply::getType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TYPE, getType());
	return true;
}

Uint32 UNIX_PrintSupply::getType() const
{
	return Uint32(0);
}

Boolean UNIX_PrintSupply::getOtherTypeDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_TYPE_DESCRIPTION, getOtherTypeDescription());
	return true;
}

String UNIX_PrintSupply::getOtherTypeDescription() const
{
	return String ("");
}

Boolean UNIX_PrintSupply::getSupplyUnit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPLY_UNIT, getSupplyUnit());
	return true;
}

Uint32 UNIX_PrintSupply::getSupplyUnit() const
{
	return Uint32(0);
}

Boolean UNIX_PrintSupply::getOtherSupplyUnit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPLY_UNIT, getOtherSupplyUnit());
	return true;
}

String UNIX_PrintSupply::getOtherSupplyUnit() const
{
	return String ("");
}

Boolean UNIX_PrintSupply::getMaxCapacityBasis(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_CAPACITY_BASIS, getMaxCapacityBasis());
	return true;
}

Uint16 UNIX_PrintSupply::getMaxCapacityBasis() const
{
	return Uint16(0);
}

Boolean UNIX_PrintSupply::getMaxCapacity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_CAPACITY, getMaxCapacity());
	return true;
}

Uint32 UNIX_PrintSupply::getMaxCapacity() const
{
	return Uint32(0);
}

Boolean UNIX_PrintSupply::getRemainingCapacityBasis(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMAINING_CAPACITY_BASIS, getRemainingCapacityBasis());
	return true;
}

Uint16 UNIX_PrintSupply::getRemainingCapacityBasis() const
{
	return Uint16(0);
}

Boolean UNIX_PrintSupply::getRemainingCapacity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMAINING_CAPACITY, getRemainingCapacity());
	return true;
}

Uint32 UNIX_PrintSupply::getRemainingCapacity() const
{
	return Uint32(0);
}

Boolean UNIX_PrintSupply::getColorantRole(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COLORANT_ROLE, getColorantRole());
	return true;
}

Uint32 UNIX_PrintSupply::getColorantRole() const
{
	return Uint32(0);
}

Boolean UNIX_PrintSupply::getOtherColorantRole(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_COLORANT_ROLE, getOtherColorantRole());
	return true;
}

String UNIX_PrintSupply::getOtherColorantRole() const
{
	return String ("");
}

Boolean UNIX_PrintSupply::getColorantName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COLORANT_NAME, getColorantName());
	return true;
}

Uint16 UNIX_PrintSupply::getColorantName() const
{
	return Uint16(0);
}

Boolean UNIX_PrintSupply::getOtherColorantName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_COLORANT_NAME, getOtherColorantName());
	return true;
}

String UNIX_PrintSupply::getOtherColorantName() const
{
	return String ("");
}

Boolean UNIX_PrintSupply::getColorantTonality(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COLORANT_TONALITY, getColorantTonality());
	return true;
}

Uint32 UNIX_PrintSupply::getColorantTonality() const
{
	return Uint32(0);
}



Boolean UNIX_PrintSupply::initialize()
{
	return false;
}

Boolean UNIX_PrintSupply::load(int &pIndex)
{
	return false;
}

Boolean UNIX_PrintSupply::finalize()
{
	return false;
}

Boolean UNIX_PrintSupply::find(Array<CIMKeyBinding> &kbArray)
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
