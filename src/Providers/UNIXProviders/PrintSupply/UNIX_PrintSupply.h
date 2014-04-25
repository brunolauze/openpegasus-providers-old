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

#ifndef __UNIX_PRINTSUPPLY_H
#define __UNIX_PRINTSUPPLY_H


#include "CIM_PrinterElement.h"

#include "UNIX_PrintSupplyDeps.h"


#define PROPERTY_LOCALIZED_DESCRIPTION				"LocalizedDescription"
#define PROPERTY_CLASSIFICATION				"Classification"
#define PROPERTY_OTHER_CLASSIFICATION				"OtherClassification"
#define PROPERTY_TYPE				"Type"
#define PROPERTY_OTHER_TYPE_DESCRIPTION				"OtherTypeDescription"
#define PROPERTY_SUPPLY_UNIT				"SupplyUnit"
#define PROPERTY_OTHER_SUPPLY_UNIT				"OtherSupplyUnit"
#define PROPERTY_MAX_CAPACITY_BASIS				"MaxCapacityBasis"
#define PROPERTY_MAX_CAPACITY				"MaxCapacity"
#define PROPERTY_REMAINING_CAPACITY_BASIS				"RemainingCapacityBasis"
#define PROPERTY_REMAINING_CAPACITY				"RemainingCapacity"
#define PROPERTY_COLORANT_ROLE				"ColorantRole"
#define PROPERTY_OTHER_COLORANT_ROLE				"OtherColorantRole"
#define PROPERTY_COLORANT_NAME				"ColorantName"
#define PROPERTY_OTHER_COLORANT_NAME				"OtherColorantName"
#define PROPERTY_COLORANT_TONALITY				"ColorantTonality"


class UNIX_PrintSupply :
	public CIM_PrinterElement
{
public:

	UNIX_PrintSupply();
	~UNIX_PrintSupply();

	virtual Boolean initialize();
	virtual Boolean load(int&);
	virtual Boolean finalize();
	virtual Boolean find(Array<CIMKeyBinding>&);
	virtual Boolean validateKey(CIMKeyBinding&) const;
	virtual void setScope(CIMName);

	virtual Boolean getInstanceID(CIMProperty&) const;
	virtual String getInstanceID() const;
	virtual Boolean getCaption(CIMProperty&) const;
	virtual String getCaption() const;
	virtual Boolean getDescription(CIMProperty&) const;
	virtual String getDescription() const;
	virtual Boolean getElementName(CIMProperty&) const;
	virtual String getElementName() const;
	virtual Boolean getInstallDate(CIMProperty&) const;
	virtual CIMDateTime getInstallDate() const;
	virtual Boolean getName(CIMProperty&) const;
	virtual String getName() const;
	virtual Boolean getOperationalStatus(CIMProperty&) const;
	virtual Array<Uint16> getOperationalStatus() const;
	virtual Boolean getStatusDescriptions(CIMProperty&) const;
	virtual Array<String> getStatusDescriptions() const;
	virtual Boolean getStatus(CIMProperty&) const;
	virtual String getStatus() const;
	virtual Boolean getHealthState(CIMProperty&) const;
	virtual Uint16 getHealthState() const;
	virtual Boolean getCommunicationStatus(CIMProperty&) const;
	virtual Uint16 getCommunicationStatus() const;
	virtual Boolean getDetailedStatus(CIMProperty&) const;
	virtual Uint16 getDetailedStatus() const;
	virtual Boolean getOperatingStatus(CIMProperty&) const;
	virtual Uint16 getOperatingStatus() const;
	virtual Boolean getPrimaryStatus(CIMProperty&) const;
	virtual Uint16 getPrimaryStatus() const;
	virtual Boolean getSNMPRowId(CIMProperty&) const;
	virtual Uint32 getSNMPRowId() const;
	virtual Boolean getLocalizedDescription(CIMProperty&) const;
	virtual String getLocalizedDescription() const;
	virtual Boolean getClassification(CIMProperty&) const;
	virtual Uint32 getClassification() const;
	virtual Boolean getOtherClassification(CIMProperty&) const;
	virtual String getOtherClassification() const;
	virtual Boolean getType(CIMProperty&) const;
	virtual Uint32 getType() const;
	virtual Boolean getOtherTypeDescription(CIMProperty&) const;
	virtual String getOtherTypeDescription() const;
	virtual Boolean getSupplyUnit(CIMProperty&) const;
	virtual Uint32 getSupplyUnit() const;
	virtual Boolean getOtherSupplyUnit(CIMProperty&) const;
	virtual String getOtherSupplyUnit() const;
	virtual Boolean getMaxCapacityBasis(CIMProperty&) const;
	virtual Uint16 getMaxCapacityBasis() const;
	virtual Boolean getMaxCapacity(CIMProperty&) const;
	virtual Uint32 getMaxCapacity() const;
	virtual Boolean getRemainingCapacityBasis(CIMProperty&) const;
	virtual Uint16 getRemainingCapacityBasis() const;
	virtual Boolean getRemainingCapacity(CIMProperty&) const;
	virtual Uint32 getRemainingCapacity() const;
	virtual Boolean getColorantRole(CIMProperty&) const;
	virtual Uint32 getColorantRole() const;
	virtual Boolean getOtherColorantRole(CIMProperty&) const;
	virtual String getOtherColorantRole() const;
	virtual Boolean getColorantName(CIMProperty&) const;
	virtual Uint16 getColorantName() const;
	virtual Boolean getOtherColorantName(CIMProperty&) const;
	virtual String getOtherColorantName() const;
	virtual Boolean getColorantTonality(CIMProperty&) const;
	virtual Uint32 getColorantTonality() const;

private:
	CIMName currentScope;

#	include "UNIX_PrintSupplyPrivate.h"


};

#endif /* UNIX_PRINTSUPPLY */
