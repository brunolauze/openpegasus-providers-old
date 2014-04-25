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

#ifndef __CIM_LOGICALDEVICE_H
#define __CIM_LOGICALDEVICE_H


#include "CIM_EnabledLogicalElement.h"


#define PROPERTY_SYSTEM_CREATION_CLASS_NAME				"SystemCreationClassName"
#define PROPERTY_SYSTEM_NAME				"SystemName"
#define PROPERTY_CREATION_CLASS_NAME				"CreationClassName"
#define PROPERTY_DEVICE_ID				"DeviceID"
#define PROPERTY_POWER_MANAGEMENT_SUPPORTED				"PowerManagementSupported"
#define PROPERTY_POWER_MANAGEMENT_CAPABILITIES				"PowerManagementCapabilities"
#define PROPERTY_AVAILABILITY				"Availability"
#define PROPERTY_STATUS_INFO				"StatusInfo"
#define PROPERTY_LAST_ERROR_CODE				"LastErrorCode"
#define PROPERTY_ERROR_DESCRIPTION				"ErrorDescription"
#define PROPERTY_ERROR_CLEARED				"ErrorCleared"
#define PROPERTY_OTHER_IDENTIFYING_INFO				"OtherIdentifyingInfo"
#define PROPERTY_POWER_ON_HOURS				"PowerOnHours"
#define PROPERTY_TOTAL_POWER_ON_HOURS				"TotalPowerOnHours"
#define PROPERTY_IDENTIFYING_DESCRIPTIONS				"IdentifyingDescriptions"
#define PROPERTY_ADDITIONAL_AVAILABILITY				"AdditionalAvailability"
#define PROPERTY_MAX_QUIESCE_TIME				"MaxQuiesceTime"


class CIM_LogicalDevice :
	public CIM_EnabledLogicalElement
{
public:

	virtual Boolean initialize()=0;
	virtual Boolean load(int&)=0;
	virtual Boolean finalize()=0;
	virtual Boolean find(Array<CIMKeyBinding>&)=0;
	virtual Boolean validateKey(CIMKeyBinding&) const=0;
	virtual void setScope(CIMName)=0;

	virtual Boolean getSystemCreationClassName(CIMProperty&) const=0;
	virtual String getSystemCreationClassName() const=0;
	virtual Boolean getSystemName(CIMProperty&) const=0;
	virtual String getSystemName() const=0;
	virtual Boolean getCreationClassName(CIMProperty&) const=0;
	virtual String getCreationClassName() const=0;
	virtual Boolean getDeviceID(CIMProperty&) const=0;
	virtual String getDeviceID() const=0;
	virtual Boolean getPowerManagementSupported(CIMProperty&) const=0;
	virtual Boolean getPowerManagementSupported() const=0;
	virtual Boolean getPowerManagementCapabilities(CIMProperty&) const=0;
	virtual Array<Uint16> getPowerManagementCapabilities() const=0;
	virtual Boolean getAvailability(CIMProperty&) const=0;
	virtual Uint16 getAvailability() const=0;
	virtual Boolean getStatusInfo(CIMProperty&) const=0;
	virtual Uint16 getStatusInfo() const=0;
	virtual Boolean getLastErrorCode(CIMProperty&) const=0;
	virtual Uint32 getLastErrorCode() const=0;
	virtual Boolean getErrorDescription(CIMProperty&) const=0;
	virtual String getErrorDescription() const=0;
	virtual Boolean getErrorCleared(CIMProperty&) const=0;
	virtual Boolean getErrorCleared() const=0;
	virtual Boolean getOtherIdentifyingInfo(CIMProperty&) const=0;
	virtual Array<String> getOtherIdentifyingInfo() const=0;
	virtual Boolean getPowerOnHours(CIMProperty&) const=0;
	virtual Uint64 getPowerOnHours() const=0;
	virtual Boolean getTotalPowerOnHours(CIMProperty&) const=0;
	virtual Uint64 getTotalPowerOnHours() const=0;
	virtual Boolean getIdentifyingDescriptions(CIMProperty&) const=0;
	virtual Array<String> getIdentifyingDescriptions() const=0;
	virtual Boolean getAdditionalAvailability(CIMProperty&) const=0;
	virtual Array<Uint16> getAdditionalAvailability() const=0;
	virtual Boolean getMaxQuiesceTime(CIMProperty&) const=0;
	virtual Uint64 getMaxQuiesceTime() const=0;

private:

};

#endif /* CIM_LOGICALDEVICE */
