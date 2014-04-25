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

#ifndef __UNIX_ISCSISESSIONSETTINGS_H
#define __UNIX_ISCSISESSIONSETTINGS_H


#include "CIM_SettingData.h"

#include "UNIX_iSCSISessionSettingsDeps.h"


#define PROPERTY_MAX_CONNECTIONS_PER_SESSION				"MaxConnectionsPerSession"
#define PROPERTY_INITIAL_R_2_T_PREFERENCE				"InitialR2TPreference"
#define PROPERTY_IMMEDIATE_DATA_PREFERENCE				"ImmediateDataPreference"
#define PROPERTY_MAX_OUTSTANDING_R_2_T				"MaxOutstandingR2T"
#define PROPERTY_MAX_UNSOLICITED_FIRST_DATA_BURST_LENGTH				"MaxUnsolicitedFirstDataBurstLength"
#define PROPERTY_MAX_DATA_BURST_LENGTH				"MaxDataBurstLength"
#define PROPERTY_DATA_SEQUENCE_IN_ORDER_PREFERENCE				"DataSequenceInOrderPreference"
#define PROPERTY_DATA_P_D_U_IN_ORDER_PREFERENCE				"DataPDUInOrderPreference"
#define PROPERTY_DEFAULT_TIME_TO_WAIT_PREFERENCE				"DefaultTimeToWaitPreference"
#define PROPERTY_DEFAULT_TIME_TO_RETAIN_PREFERENCE				"DefaultTimeToRetainPreference"
#define PROPERTY_ERROR_RECOVERY_LEVEL_PREFERENCE				"ErrorRecoveryLevelPreference"


class UNIX_iSCSISessionSettings :
	public CIM_SettingData
{
public:

	UNIX_iSCSISessionSettings();
	~UNIX_iSCSISessionSettings();

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
	virtual Boolean getChangeableType(CIMProperty&) const;
	virtual Uint16 getChangeableType() const;
	virtual Boolean getConfigurationName(CIMProperty&) const;
	virtual String getConfigurationName() const;
	virtual Boolean getMaxConnectionsPerSession(CIMProperty&) const;
	virtual Uint32 getMaxConnectionsPerSession() const;
	virtual Boolean getInitialR2TPreference(CIMProperty&) const;
	virtual Boolean getInitialR2TPreference() const;
	virtual Boolean getImmediateDataPreference(CIMProperty&) const;
	virtual Boolean getImmediateDataPreference() const;
	virtual Boolean getMaxOutstandingR2T(CIMProperty&) const;
	virtual Uint32 getMaxOutstandingR2T() const;
	virtual Boolean getMaxUnsolicitedFirstDataBurstLength(CIMProperty&) const;
	virtual Uint32 getMaxUnsolicitedFirstDataBurstLength() const;
	virtual Boolean getMaxDataBurstLength(CIMProperty&) const;
	virtual Uint32 getMaxDataBurstLength() const;
	virtual Boolean getDataSequenceInOrderPreference(CIMProperty&) const;
	virtual Boolean getDataSequenceInOrderPreference() const;
	virtual Boolean getDataPDUInOrderPreference(CIMProperty&) const;
	virtual Boolean getDataPDUInOrderPreference() const;
	virtual Boolean getDefaultTimeToWaitPreference(CIMProperty&) const;
	virtual Uint32 getDefaultTimeToWaitPreference() const;
	virtual Boolean getDefaultTimeToRetainPreference(CIMProperty&) const;
	virtual Uint32 getDefaultTimeToRetainPreference() const;
	virtual Boolean getErrorRecoveryLevelPreference(CIMProperty&) const;
	virtual Uint32 getErrorRecoveryLevelPreference() const;

private:
	CIMName currentScope;

#	include "UNIX_iSCSISessionSettingsPrivate.h"


};

#endif /* UNIX_ISCSISESSIONSETTINGS */
