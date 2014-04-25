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

#ifndef __UNIX_DIAGNOSTICTEST_H
#define __UNIX_DIAGNOSTICTEST_H


#include "CIM_DiagnosticService.h"

#include "UNIX_DiagnosticTestDeps.h"


#define PROPERTY_CHARACTERISTICS				"Characteristics"
#define PROPERTY_OTHER_CHARACTERISTIC_DESCRIPTION				"OtherCharacteristicDescription"
#define PROPERTY_OTHER_CHARACTERISTICS_DESCRIPTIONS				"OtherCharacteristicsDescriptions"
#define PROPERTY_IS_IN_USE				"IsInUse"
#define PROPERTY_RESOURCES_USED				"ResourcesUsed"
#define PROPERTY_TEST_TYPES				"TestTypes"
#define PROPERTY_OTHER_TEST_TYPES_DESCRIPTIONS				"OtherTestTypesDescriptions"


class UNIX_DiagnosticTest :
	public CIM_DiagnosticService
{
public:

	UNIX_DiagnosticTest();
	~UNIX_DiagnosticTest();

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
	virtual Boolean getEnabledState(CIMProperty&) const;
	virtual Uint16 getEnabledState() const;
	virtual Boolean getOtherEnabledState(CIMProperty&) const;
	virtual String getOtherEnabledState() const;
	virtual Boolean getRequestedState(CIMProperty&) const;
	virtual Uint16 getRequestedState() const;
	virtual Boolean getEnabledDefault(CIMProperty&) const;
	virtual Uint16 getEnabledDefault() const;
	virtual Boolean getTimeOfLastStateChange(CIMProperty&) const;
	virtual CIMDateTime getTimeOfLastStateChange() const;
	virtual Boolean getAvailableRequestedStates(CIMProperty&) const;
	virtual Array<Uint16> getAvailableRequestedStates() const;
	virtual Boolean getTransitioningToState(CIMProperty&) const;
	virtual Uint16 getTransitioningToState() const;
	virtual Boolean getSystemCreationClassName(CIMProperty&) const;
	virtual String getSystemCreationClassName() const;
	virtual Boolean getSystemName(CIMProperty&) const;
	virtual String getSystemName() const;
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual Boolean getPrimaryOwnerName(CIMProperty&) const;
	virtual String getPrimaryOwnerName() const;
	virtual Boolean getPrimaryOwnerContact(CIMProperty&) const;
	virtual String getPrimaryOwnerContact() const;
	virtual Boolean getStartMode(CIMProperty&) const;
	virtual String getStartMode() const;
	virtual Boolean getStarted(CIMProperty&) const;
	virtual Boolean getStarted() const;
	virtual Boolean getCharacteristics(CIMProperty&) const;
	virtual Array<Uint16> getCharacteristics() const;
	virtual Boolean getOtherCharacteristicDescription(CIMProperty&) const;
	virtual String getOtherCharacteristicDescription() const;
	virtual Boolean getOtherCharacteristicsDescriptions(CIMProperty&) const;
	virtual Array<String> getOtherCharacteristicsDescriptions() const;
	virtual Boolean getIsInUse(CIMProperty&) const;
	virtual Boolean getIsInUse() const;
	virtual Boolean getResourcesUsed(CIMProperty&) const;
	virtual Array<Uint16> getResourcesUsed() const;
	virtual Boolean getTestTypes(CIMProperty&) const;
	virtual Array<Uint16> getTestTypes() const;
	virtual Boolean getOtherTestTypesDescriptions(CIMProperty&) const;
	virtual Array<String> getOtherTestTypesDescriptions() const;

private:
	CIMName currentScope;

#	include "UNIX_DiagnosticTestPrivate.h"


};

#endif /* UNIX_DIAGNOSTICTEST */
