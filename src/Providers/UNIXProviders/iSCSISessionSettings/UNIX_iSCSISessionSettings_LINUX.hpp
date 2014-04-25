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


UNIX_iSCSISessionSettings::UNIX_iSCSISessionSettings(void)
{
}

UNIX_iSCSISessionSettings::~UNIX_iSCSISessionSettings(void)
{
}


Boolean UNIX_iSCSISessionSettings::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_iSCSISessionSettings::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_iSCSISessionSettings::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_iSCSISessionSettings::getCaption() const
{
	return String ("");
}

Boolean UNIX_iSCSISessionSettings::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_iSCSISessionSettings::getDescription() const
{
	return String ("");
}

Boolean UNIX_iSCSISessionSettings::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_iSCSISessionSettings::getElementName() const
{
	return String("iSCSISessionSettings");
}

Boolean UNIX_iSCSISessionSettings::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_iSCSISessionSettings::getChangeableType() const
{
	return Uint16(0);
}

Boolean UNIX_iSCSISessionSettings::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_iSCSISessionSettings::getConfigurationName() const
{
	return String ("");
}

Boolean UNIX_iSCSISessionSettings::getMaxConnectionsPerSession(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_CONNECTIONS_PER_SESSION, getMaxConnectionsPerSession());
	return true;
}

Uint32 UNIX_iSCSISessionSettings::getMaxConnectionsPerSession() const
{
	return Uint32(0);
}

Boolean UNIX_iSCSISessionSettings::getInitialR2TPreference(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INITIAL_R_2_T_PREFERENCE, getInitialR2TPreference());
	return true;
}

Boolean UNIX_iSCSISessionSettings::getInitialR2TPreference() const
{
	return Boolean(false);
}

Boolean UNIX_iSCSISessionSettings::getImmediateDataPreference(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IMMEDIATE_DATA_PREFERENCE, getImmediateDataPreference());
	return true;
}

Boolean UNIX_iSCSISessionSettings::getImmediateDataPreference() const
{
	return Boolean(false);
}

Boolean UNIX_iSCSISessionSettings::getMaxOutstandingR2T(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_OUTSTANDING_R_2_T, getMaxOutstandingR2T());
	return true;
}

Uint32 UNIX_iSCSISessionSettings::getMaxOutstandingR2T() const
{
	return Uint32(0);
}

Boolean UNIX_iSCSISessionSettings::getMaxUnsolicitedFirstDataBurstLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_UNSOLICITED_FIRST_DATA_BURST_LENGTH, getMaxUnsolicitedFirstDataBurstLength());
	return true;
}

Uint32 UNIX_iSCSISessionSettings::getMaxUnsolicitedFirstDataBurstLength() const
{
	return Uint32(0);
}

Boolean UNIX_iSCSISessionSettings::getMaxDataBurstLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_DATA_BURST_LENGTH, getMaxDataBurstLength());
	return true;
}

Uint32 UNIX_iSCSISessionSettings::getMaxDataBurstLength() const
{
	return Uint32(0);
}

Boolean UNIX_iSCSISessionSettings::getDataSequenceInOrderPreference(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_SEQUENCE_IN_ORDER_PREFERENCE, getDataSequenceInOrderPreference());
	return true;
}

Boolean UNIX_iSCSISessionSettings::getDataSequenceInOrderPreference() const
{
	return Boolean(false);
}

Boolean UNIX_iSCSISessionSettings::getDataPDUInOrderPreference(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DATA_P_D_U_IN_ORDER_PREFERENCE, getDataPDUInOrderPreference());
	return true;
}

Boolean UNIX_iSCSISessionSettings::getDataPDUInOrderPreference() const
{
	return Boolean(false);
}

Boolean UNIX_iSCSISessionSettings::getDefaultTimeToWaitPreference(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_TIME_TO_WAIT_PREFERENCE, getDefaultTimeToWaitPreference());
	return true;
}

Uint32 UNIX_iSCSISessionSettings::getDefaultTimeToWaitPreference() const
{
	return Uint32(0);
}

Boolean UNIX_iSCSISessionSettings::getDefaultTimeToRetainPreference(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_TIME_TO_RETAIN_PREFERENCE, getDefaultTimeToRetainPreference());
	return true;
}

Uint32 UNIX_iSCSISessionSettings::getDefaultTimeToRetainPreference() const
{
	return Uint32(0);
}

Boolean UNIX_iSCSISessionSettings::getErrorRecoveryLevelPreference(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_RECOVERY_LEVEL_PREFERENCE, getErrorRecoveryLevelPreference());
	return true;
}

Uint32 UNIX_iSCSISessionSettings::getErrorRecoveryLevelPreference() const
{
	return Uint32(0);
}



Boolean UNIX_iSCSISessionSettings::initialize()
{
	return false;
}

Boolean UNIX_iSCSISessionSettings::load(int &pIndex)
{
	return false;
}

Boolean UNIX_iSCSISessionSettings::finalize()
{
	return false;
}

Boolean UNIX_iSCSISessionSettings::find(Array<CIMKeyBinding> &kbArray)
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
