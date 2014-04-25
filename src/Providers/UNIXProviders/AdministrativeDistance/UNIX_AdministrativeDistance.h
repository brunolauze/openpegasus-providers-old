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

#ifndef __UNIX_ADMINISTRATIVEDISTANCE_H
#define __UNIX_ADMINISTRATIVEDISTANCE_H


#include "CIM_LogicalElement.h"

#include "UNIX_AdministrativeDistanceDeps.h"


#define PROPERTY_SYSTEM_CREATION_CLASS_NAME				"SystemCreationClassName"
#define PROPERTY_SYSTEM_NAME				"SystemName"
#define PROPERTY_CREATION_CLASS_NAME				"CreationClassName"
#define PROPERTY_DIRECT_CONNECT				"DirectConnect"
#define PROPERTY_STATIC				"Static"
#define PROPERTY_E_B_G_P				"EBGP"
#define PROPERTY_E_I_G_R_P_INTERNAL				"EIGRPInternal"
#define PROPERTY_I_G_R_P				"IGRP"
#define PROPERTY_OS_P_F				"OSPF"
#define PROPERTY_I_S_I_S				"ISIS"
#define PROPERTY_R_I_P				"RIP"
#define PROPERTY_E_G_P				"EGP"
#define PROPERTY_E_I_G_R_P_EXTERNAL				"EIGRPExternal"
#define PROPERTY_I_B_G_P				"IBGP"
#define PROPERTY_B_G_P_LOCAL				"BGPLocal"
#define PROPERTY_UNKNOWN				"Unknown"


class UNIX_AdministrativeDistance :
	public CIM_LogicalElement
{
public:

	UNIX_AdministrativeDistance();
	~UNIX_AdministrativeDistance();

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
	virtual Boolean getSystemCreationClassName(CIMProperty&) const;
	virtual String getSystemCreationClassName() const;
	virtual Boolean getSystemName(CIMProperty&) const;
	virtual String getSystemName() const;
	virtual Boolean getCreationClassName(CIMProperty&) const;
	virtual String getCreationClassName() const;
	virtual Boolean getDirectConnect(CIMProperty&) const;
	virtual Uint8 getDirectConnect() const;
	virtual Boolean getStatic(CIMProperty&) const;
	virtual Uint8 getStatic() const;
	virtual Boolean getEBGP(CIMProperty&) const;
	virtual Uint8 getEBGP() const;
	virtual Boolean getEIGRPInternal(CIMProperty&) const;
	virtual Uint8 getEIGRPInternal() const;
	virtual Boolean getIGRP(CIMProperty&) const;
	virtual Uint8 getIGRP() const;
	virtual Boolean getOSPF(CIMProperty&) const;
	virtual Uint8 getOSPF() const;
	virtual Boolean getISIS(CIMProperty&) const;
	virtual Uint8 getISIS() const;
	virtual Boolean getRIP(CIMProperty&) const;
	virtual Uint8 getRIP() const;
	virtual Boolean getEGP(CIMProperty&) const;
	virtual Uint8 getEGP() const;
	virtual Boolean getEIGRPExternal(CIMProperty&) const;
	virtual Uint8 getEIGRPExternal() const;
	virtual Boolean getIBGP(CIMProperty&) const;
	virtual Uint8 getIBGP() const;
	virtual Boolean getBGPLocal(CIMProperty&) const;
	virtual Uint8 getBGPLocal() const;
	virtual Boolean getUnknown(CIMProperty&) const;
	virtual Uint8 getUnknown() const;

private:
	CIMName currentScope;

#	include "UNIX_AdministrativeDistancePrivate.h"


};

#endif /* UNIX_ADMINISTRATIVEDISTANCE */
