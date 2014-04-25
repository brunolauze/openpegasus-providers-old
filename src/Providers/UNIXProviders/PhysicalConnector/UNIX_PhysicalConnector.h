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

#ifndef __UNIX_PHYSICALCONNECTOR_H
#define __UNIX_PHYSICALCONNECTOR_H


#include "CIM_PhysicalElement.h"

#include "UNIX_PhysicalConnectorDeps.h"


#define PROPERTY_CONNECTOR_PINOUT				"ConnectorPinout"
#define PROPERTY_CONNECTOR_TYPE				"ConnectorType"
#define PROPERTY_OTHER_TYPE_DESCRIPTION				"OtherTypeDescription"
#define PROPERTY_CONNECTOR_GENDER				"ConnectorGender"
#define PROPERTY_CONNECTOR_ELECTRICAL_CHARACTERISTICS				"ConnectorElectricalCharacteristics"
#define PROPERTY_OTHER_ELECTRICAL_CHARACTERISTICS				"OtherElectricalCharacteristics"
#define PROPERTY_NUM_PHYSICAL_PINS				"NumPhysicalPins"
#define PROPERTY_CONNECTOR_LAYOUT				"ConnectorLayout"
#define PROPERTY_CONNECTOR_DESCRIPTION				"ConnectorDescription"


class UNIX_PhysicalConnector :
	public CIM_PhysicalElement
{
public:

	UNIX_PhysicalConnector();
	~UNIX_PhysicalConnector();

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
	virtual Boolean getTag(CIMProperty&) const;
	virtual String getTag() const;
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual Boolean getManufacturer(CIMProperty&) const;
	virtual String getManufacturer() const;
	virtual Boolean getModel(CIMProperty&) const;
	virtual String getModel() const;
	virtual Boolean getSKU(CIMProperty&) const;
	virtual String getSKU() const;
	virtual Boolean getSerialNumber(CIMProperty&) const;
	virtual String getSerialNumber() const;
	virtual Boolean getVersion(CIMProperty&) const;
	virtual String getVersion() const;
	virtual Boolean getPartNumber(CIMProperty&) const;
	virtual String getPartNumber() const;
	virtual Boolean getOtherIdentifyingInfo(CIMProperty&) const;
	virtual String getOtherIdentifyingInfo() const;
	virtual Boolean getPoweredOn(CIMProperty&) const;
	virtual Boolean getPoweredOn() const;
	virtual Boolean getManufactureDate(CIMProperty&) const;
	virtual CIMDateTime getManufactureDate() const;
	virtual Boolean getVendorEquipmentType(CIMProperty&) const;
	virtual String getVendorEquipmentType() const;
	virtual Boolean getUserTracking(CIMProperty&) const;
	virtual String getUserTracking() const;
	virtual Boolean getCanBeFRUed(CIMProperty&) const;
	virtual Boolean getCanBeFRUed() const;
	virtual Boolean getConnectorPinout(CIMProperty&) const;
	virtual String getConnectorPinout() const;
	virtual Boolean getConnectorType(CIMProperty&) const;
	virtual Array<Uint16> getConnectorType() const;
	virtual Boolean getOtherTypeDescription(CIMProperty&) const;
	virtual String getOtherTypeDescription() const;
	virtual Boolean getConnectorGender(CIMProperty&) const;
	virtual Uint16 getConnectorGender() const;
	virtual Boolean getConnectorElectricalCharacteristics(CIMProperty&) const;
	virtual Array<Uint16> getConnectorElectricalCharacteristics() const;
	virtual Boolean getOtherElectricalCharacteristics(CIMProperty&) const;
	virtual Array<String> getOtherElectricalCharacteristics() const;
	virtual Boolean getNumPhysicalPins(CIMProperty&) const;
	virtual Uint32 getNumPhysicalPins() const;
	virtual Boolean getConnectorLayout(CIMProperty&) const;
	virtual Uint16 getConnectorLayout() const;
	virtual Boolean getConnectorDescription(CIMProperty&) const;
	virtual String getConnectorDescription() const;

private:
	CIMName currentScope;

#	include "UNIX_PhysicalConnectorPrivate.h"


};

#endif /* UNIX_PHYSICALCONNECTOR */
