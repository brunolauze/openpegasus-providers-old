#ifdef PEGASUS_OS_FREEBSD


#ifndef __UNIX_ACCOUNTMANAGEMENTSERVICE_PRIVATE_H
#define __UNIX_ACCOUNTMANAGEMENTSERVICE_PRIVATE_H

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

#include "UNIX_AccountManagementService.h"

class OpenPAMService :
	public UNIX_AccountManagementService
{
public:

	OpenPAMService();
	~OpenPAMService();

	Boolean initialize();
	Boolean load(int&);
	Boolean finalize();
	Boolean find(Array<CIMKeyBinding>&) { return false; };
	Boolean validateKey(CIMKeyBinding&) const { return false; };
	void setScope(CIMName scope) { currentScope = scope; };

	Boolean getInstanceID(CIMProperty&) const;
	String getInstanceID() const;
	Boolean getCaption(CIMProperty&) const;
	String getCaption() const;
	Boolean getDescription(CIMProperty&) const;
	String getDescription() const;
	Boolean getElementName(CIMProperty&) const;
	String getElementName() const;
	Boolean getInstallDate(CIMProperty&) const;
	CIMDateTime getInstallDate() const;
	Boolean getName(CIMProperty&) const;
	String getName() const;
	Boolean getOperationalStatus(CIMProperty&) const;
	Array<Uint16> getOperationalStatus() const;
	Boolean getStatusDescriptions(CIMProperty&) const;
	Array<String> getStatusDescriptions() const;
	Boolean getStatus(CIMProperty&) const;
	String getStatus() const;
	Boolean getHealthState(CIMProperty&) const;
	Uint16 getHealthState() const;
	Boolean getCommunicationStatus(CIMProperty&) const;
	Uint16 getCommunicationStatus() const;
	Boolean getDetailedStatus(CIMProperty&) const;
	Uint16 getDetailedStatus() const;
	Boolean getOperatingStatus(CIMProperty&) const;
	Uint16 getOperatingStatus() const;
	Boolean getPrimaryStatus(CIMProperty&) const;
	Uint16 getPrimaryStatus() const;
	Boolean getEnabledState(CIMProperty&) const;
	Uint16 getEnabledState() const;
	Boolean getOtherEnabledState(CIMProperty&) const;
	String getOtherEnabledState() const;
	Boolean getRequestedState(CIMProperty&) const;
	Uint16 getRequestedState() const;
	Boolean getEnabledDefault(CIMProperty&) const;
	Uint16 getEnabledDefault() const;
	Boolean getTimeOfLastStateChange(CIMProperty&) const;
	CIMDateTime getTimeOfLastStateChange() const;
	Boolean getAvailableRequestedStates(CIMProperty&) const;
	Array<Uint16> getAvailableRequestedStates() const;
	Boolean getTransitioningToState(CIMProperty&) const;
	Uint16 getTransitioningToState() const;
	Boolean getSystemCreationClassName(CIMProperty&) const;
	String getSystemCreationClassName() const;
	Boolean getSystemName(CIMProperty&) const;
	String getSystemName() const;
	Boolean getCreationClassName(CIMProperty&) const;
	String getCreationClassName() const;
	Boolean getPrimaryOwnerName(CIMProperty&) const;
	String getPrimaryOwnerName() const;
	Boolean getPrimaryOwnerContact(CIMProperty&) const;
	String getPrimaryOwnerContact() const;
	Boolean getStartMode(CIMProperty&) const;
	String getStartMode() const;
	Boolean getStarted(CIMProperty&) const;
	Boolean getStarted() const;

	Boolean createAccount(
						CIMObjectPath accountTemplate,
						Array<CIMInstance> &accountIdenties,
						CIMInstance &account,
						CIMInstance computerSystem) const;

private:
	CIMName currentScope;

}; /* OpenPAMService */


/* OpenLdap Service */
class OpenLdapService :
	public UNIX_AccountManagementService
{
public:

	OpenLdapService();
	~OpenLdapService();

	Boolean initialize();
	Boolean load(int&);
	Boolean finalize();
	Boolean find(Array<CIMKeyBinding>&) { return false; };
	Boolean validateKey(CIMKeyBinding&) const { return false; };
	void setScope(CIMName scope) { currentScope = scope; };

	Boolean getInstanceID(CIMProperty&) const;
	String getInstanceID() const;
	Boolean getCaption(CIMProperty&) const;
	String getCaption() const;
	Boolean getDescription(CIMProperty&) const;
	String getDescription() const;
	Boolean getElementName(CIMProperty&) const;
	String getElementName() const;
	Boolean getInstallDate(CIMProperty&) const;
	CIMDateTime getInstallDate() const;
	Boolean getName(CIMProperty&) const;
	String getName() const;
	Boolean getOperationalStatus(CIMProperty&) const;
	Array<Uint16> getOperationalStatus() const;
	Boolean getStatusDescriptions(CIMProperty&) const;
	Array<String> getStatusDescriptions() const;
	Boolean getStatus(CIMProperty&) const;
	String getStatus() const;
	Boolean getHealthState(CIMProperty&) const;
	Uint16 getHealthState() const;
	Boolean getCommunicationStatus(CIMProperty&) const;
	Uint16 getCommunicationStatus() const;
	Boolean getDetailedStatus(CIMProperty&) const;
	Uint16 getDetailedStatus() const;
	Boolean getOperatingStatus(CIMProperty&) const;
	Uint16 getOperatingStatus() const;
	Boolean getPrimaryStatus(CIMProperty&) const;
	Uint16 getPrimaryStatus() const;
	Boolean getEnabledState(CIMProperty&) const;
	Uint16 getEnabledState() const;
	Boolean getOtherEnabledState(CIMProperty&) const;
	String getOtherEnabledState() const;
	Boolean getRequestedState(CIMProperty&) const;
	Uint16 getRequestedState() const;
	Boolean getEnabledDefault(CIMProperty&) const;
	Uint16 getEnabledDefault() const;
	Boolean getTimeOfLastStateChange(CIMProperty&) const;
	CIMDateTime getTimeOfLastStateChange() const;
	Boolean getAvailableRequestedStates(CIMProperty&) const;
	Array<Uint16> getAvailableRequestedStates() const;
	Boolean getTransitioningToState(CIMProperty&) const;
	Uint16 getTransitioningToState() const;
	Boolean getSystemCreationClassName(CIMProperty&) const;
	String getSystemCreationClassName() const;
	Boolean getSystemName(CIMProperty&) const;
	String getSystemName() const;
	Boolean getCreationClassName(CIMProperty&) const;
	String getCreationClassName() const;
	Boolean getPrimaryOwnerName(CIMProperty&) const;
	String getPrimaryOwnerName() const;
	Boolean getPrimaryOwnerContact(CIMProperty&) const;
	String getPrimaryOwnerContact() const;
	Boolean getStartMode(CIMProperty&) const;
	String getStartMode() const;
	Boolean getStarted(CIMProperty&) const;
	Boolean getStarted() const;

	Boolean createAccount(
						CIMObjectPath accountTemplate,
						Array<CIMInstance> &accountIdenties,
						CIMInstance &account,
						CIMInstance computerSystem) const;

private:
	CIMName currentScope;

}; /* OpenLdap Service */

/* Samba Service */
class SambaService :
	public UNIX_AccountManagementService
{
public:

	SambaService();
	~SambaService();

	Boolean initialize();
	Boolean load(int&);
	Boolean finalize();
	Boolean find(Array<CIMKeyBinding>&) { return false; };
	Boolean validateKey(CIMKeyBinding&) const { return false; };
	void setScope(CIMName scope) { currentScope = scope; };

	Boolean getInstanceID(CIMProperty&) const;
	String getInstanceID() const;
	Boolean getCaption(CIMProperty&) const;
	String getCaption() const;
	Boolean getDescription(CIMProperty&) const;
	String getDescription() const;
	Boolean getElementName(CIMProperty&) const;
	String getElementName() const;
	Boolean getInstallDate(CIMProperty&) const;
	CIMDateTime getInstallDate() const;
	Boolean getName(CIMProperty&) const;
	String getName() const;
	Boolean getOperationalStatus(CIMProperty&) const;
	Array<Uint16> getOperationalStatus() const;
	Boolean getStatusDescriptions(CIMProperty&) const;
	Array<String> getStatusDescriptions() const;
	Boolean getStatus(CIMProperty&) const;
	String getStatus() const;
	Boolean getHealthState(CIMProperty&) const;
	Uint16 getHealthState() const;
	Boolean getCommunicationStatus(CIMProperty&) const;
	Uint16 getCommunicationStatus() const;
	Boolean getDetailedStatus(CIMProperty&) const;
	Uint16 getDetailedStatus() const;
	Boolean getOperatingStatus(CIMProperty&) const;
	Uint16 getOperatingStatus() const;
	Boolean getPrimaryStatus(CIMProperty&) const;
	Uint16 getPrimaryStatus() const;
	Boolean getEnabledState(CIMProperty&) const;
	Uint16 getEnabledState() const;
	Boolean getOtherEnabledState(CIMProperty&) const;
	String getOtherEnabledState() const;
	Boolean getRequestedState(CIMProperty&) const;
	Uint16 getRequestedState() const;
	Boolean getEnabledDefault(CIMProperty&) const;
	Uint16 getEnabledDefault() const;
	Boolean getTimeOfLastStateChange(CIMProperty&) const;
	CIMDateTime getTimeOfLastStateChange() const;
	Boolean getAvailableRequestedStates(CIMProperty&) const;
	Array<Uint16> getAvailableRequestedStates() const;
	Boolean getTransitioningToState(CIMProperty&) const;
	Uint16 getTransitioningToState() const;
	Boolean getSystemCreationClassName(CIMProperty&) const;
	String getSystemCreationClassName() const;
	Boolean getSystemName(CIMProperty&) const;
	String getSystemName() const;
	Boolean getCreationClassName(CIMProperty&) const;
	String getCreationClassName() const;
	Boolean getPrimaryOwnerName(CIMProperty&) const;
	String getPrimaryOwnerName() const;
	Boolean getPrimaryOwnerContact(CIMProperty&) const;
	String getPrimaryOwnerContact() const;
	Boolean getStartMode(CIMProperty&) const;
	String getStartMode() const;
	Boolean getStarted(CIMProperty&) const;
	Boolean getStarted() const;

	Boolean createAccount(
						CIMObjectPath accountTemplate,
						Array<CIMInstance> &accountIdenties,
						CIMInstance &account,
						CIMInstance computerSystem) const;

private:
	CIMName currentScope;

}; /* Samba Service */

#endif


#endif
