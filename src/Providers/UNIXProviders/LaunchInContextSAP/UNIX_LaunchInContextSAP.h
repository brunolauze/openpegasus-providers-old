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

#ifndef __UNIX_LAUNCHINCONTEXTSAP_H
#define __UNIX_LAUNCHINCONTEXTSAP_H


#include "CIM_RemoteServiceAccessPoint.h"

#include "UNIX_LaunchInContextSAPDeps.h"


#define PROPERTY_PARAMETER_NAME				"ParameterName"
#define PROPERTY_PARAMETER_DESCRIPTION				"ParameterDescription"
#define PROPERTY_PARAMETER_DERIVATION				"ParameterDerivation"
#define PROPERTY_PARAMETER_CONSTRAINTS				"ParameterConstraints"
#define PROPERTY_PARAMETER_TYPE				"ParameterType"
#define PROPERTY_SUPPORTED_FEATURE_NAME				"SupportedFeatureName"
#define PROPERTY_SUPPORTED_FEATURE_DESCRIPTION				"SupportedFeatureDescription"
#define PROPERTY_MANAGED_CLASSES				"ManagedClasses"
#define PROPERTY_MANAGEMENT_IS_RESTRICTED				"ManagementIsRestricted"
#define PROPERTY_LAUNCH_MESSAGE				"LaunchMessage"
#define PROPERTY_LAUNCH_MESSAGE_PROTOCOL_OPERATION				"LaunchMessageProtocolOperation"


class UNIX_LaunchInContextSAP :
	public CIM_RemoteServiceAccessPoint
{
public:

	UNIX_LaunchInContextSAP();
	~UNIX_LaunchInContextSAP();

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
	virtual Boolean getAccessInfo(CIMProperty&) const;
	virtual String getAccessInfo() const;
	virtual Boolean getInfoFormat(CIMProperty&) const;
	virtual Uint16 getInfoFormat() const;
	virtual Boolean getOtherInfoFormatDescription(CIMProperty&) const;
	virtual String getOtherInfoFormatDescription() const;
	virtual Boolean getAccessContext(CIMProperty&) const;
	virtual Uint16 getAccessContext() const;
	virtual Boolean getOtherAccessContext(CIMProperty&) const;
	virtual String getOtherAccessContext() const;
	virtual Boolean getParameterName(CIMProperty&) const;
	virtual Array<String> getParameterName() const;
	virtual Boolean getParameterDescription(CIMProperty&) const;
	virtual Array<String> getParameterDescription() const;
	virtual Boolean getParameterDerivation(CIMProperty&) const;
	virtual Array<String> getParameterDerivation() const;
	virtual Boolean getParameterConstraints(CIMProperty&) const;
	virtual Array<String> getParameterConstraints() const;
	virtual Boolean getParameterType(CIMProperty&) const;
	virtual Array<Uint16> getParameterType() const;
	virtual Boolean getSupportedFeatureName(CIMProperty&) const;
	virtual Array<String> getSupportedFeatureName() const;
	virtual Boolean getSupportedFeatureDescription(CIMProperty&) const;
	virtual Array<String> getSupportedFeatureDescription() const;
	virtual Boolean getManagedClasses(CIMProperty&) const;
	virtual Array<String> getManagedClasses() const;
	virtual Boolean getManagementIsRestricted(CIMProperty&) const;
	virtual Boolean getManagementIsRestricted() const;
	virtual Boolean getLaunchMessage(CIMProperty&) const;
	virtual String getLaunchMessage() const;
	virtual Boolean getLaunchMessageProtocolOperation(CIMProperty&) const;
	virtual Uint16 getLaunchMessageProtocolOperation() const;

private:
	CIMName currentScope;

#	include "UNIX_LaunchInContextSAPPrivate.h"


};

#endif /* UNIX_LAUNCHINCONTEXTSAP */
