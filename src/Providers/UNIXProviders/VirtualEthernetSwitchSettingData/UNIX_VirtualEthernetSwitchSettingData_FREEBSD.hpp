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


UNIX_VirtualEthernetSwitchSettingData::UNIX_VirtualEthernetSwitchSettingData(void)
{
}

UNIX_VirtualEthernetSwitchSettingData::~UNIX_VirtualEthernetSwitchSettingData(void)
{
}


Boolean UNIX_VirtualEthernetSwitchSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_VirtualEthernetSwitchSettingData::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_VirtualEthernetSwitchSettingData::getCaption() const
{
	return String ("");
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_VirtualEthernetSwitchSettingData::getDescription() const
{
	return String ("");
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_VirtualEthernetSwitchSettingData::getElementName() const
{
	return String("VirtualEthernetSwitchSettingData");
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_VirtualEthernetSwitchSettingData::getChangeableType() const
{
	return Uint16(0);
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_VirtualEthernetSwitchSettingData::getConfigurationName() const
{
	return String ("");
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getVirtualSystemIdentifier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIRTUAL_SYSTEM_IDENTIFIER, getVirtualSystemIdentifier());
	return true;
}

String UNIX_VirtualEthernetSwitchSettingData::getVirtualSystemIdentifier() const
{
	return String ("");
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getVirtualSystemType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIRTUAL_SYSTEM_TYPE, getVirtualSystemType());
	return true;
}

String UNIX_VirtualEthernetSwitchSettingData::getVirtualSystemType() const
{
	return String ("");
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getNotes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NOTES, getNotes());
	return true;
}

Array<String> UNIX_VirtualEthernetSwitchSettingData::getNotes() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_VirtualEthernetSwitchSettingData::getCreationTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_TIME, getCreationTime());
	return true;
}

CIMDateTime UNIX_VirtualEthernetSwitchSettingData::getCreationTime() const
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

Boolean UNIX_VirtualEthernetSwitchSettingData::getConfigurationID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_ID, getConfigurationID());
	return true;
}

String UNIX_VirtualEthernetSwitchSettingData::getConfigurationID() const
{
	return String ("");
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getConfigurationDataRoot(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_DATA_ROOT, getConfigurationDataRoot());
	return true;
}

String UNIX_VirtualEthernetSwitchSettingData::getConfigurationDataRoot() const
{
	return String ("");
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getConfigurationFile(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_FILE, getConfigurationFile());
	return true;
}

String UNIX_VirtualEthernetSwitchSettingData::getConfigurationFile() const
{
	return String ("");
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getSnapshotDataRoot(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SNAPSHOT_DATA_ROOT, getSnapshotDataRoot());
	return true;
}

String UNIX_VirtualEthernetSwitchSettingData::getSnapshotDataRoot() const
{
	return String ("");
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getSuspendDataRoot(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUSPEND_DATA_ROOT, getSuspendDataRoot());
	return true;
}

String UNIX_VirtualEthernetSwitchSettingData::getSuspendDataRoot() const
{
	return String ("");
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getSwapFileDataRoot(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SWAP_FILE_DATA_ROOT, getSwapFileDataRoot());
	return true;
}

String UNIX_VirtualEthernetSwitchSettingData::getSwapFileDataRoot() const
{
	return String ("");
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getLogDataRoot(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_DATA_ROOT, getLogDataRoot());
	return true;
}

String UNIX_VirtualEthernetSwitchSettingData::getLogDataRoot() const
{
	return String ("");
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getAutomaticStartupAction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTOMATIC_STARTUP_ACTION, getAutomaticStartupAction());
	return true;
}

Uint16 UNIX_VirtualEthernetSwitchSettingData::getAutomaticStartupAction() const
{
	return Uint16(0);
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getAutomaticStartupActionDelay(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTOMATIC_STARTUP_ACTION_DELAY, getAutomaticStartupActionDelay());
	return true;
}

CIMDateTime UNIX_VirtualEthernetSwitchSettingData::getAutomaticStartupActionDelay() const
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

Boolean UNIX_VirtualEthernetSwitchSettingData::getAutomaticStartupActionSequenceNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTOMATIC_STARTUP_ACTION_SEQUENCE_NUMBER, getAutomaticStartupActionSequenceNumber());
	return true;
}

Uint16 UNIX_VirtualEthernetSwitchSettingData::getAutomaticStartupActionSequenceNumber() const
{
	return Uint16(0);
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getAutomaticShutdownAction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTOMATIC_SHUTDOWN_ACTION, getAutomaticShutdownAction());
	return true;
}

Uint16 UNIX_VirtualEthernetSwitchSettingData::getAutomaticShutdownAction() const
{
	return Uint16(0);
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getAutomaticRecoveryAction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTOMATIC_RECOVERY_ACTION, getAutomaticRecoveryAction());
	return true;
}

Uint16 UNIX_VirtualEthernetSwitchSettingData::getAutomaticRecoveryAction() const
{
	return Uint16(0);
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getRecoveryFile(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECOVERY_FILE, getRecoveryFile());
	return true;
}

String UNIX_VirtualEthernetSwitchSettingData::getRecoveryFile() const
{
	return String ("");
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getVLANConnection(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_V_L_A_N_CONNECTION, getVLANConnection());
	return true;
}

Array<String> UNIX_VirtualEthernetSwitchSettingData::getVLANConnection() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_VirtualEthernetSwitchSettingData::getAssociatedResourcePool(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ASSOCIATED_RESOURCE_POOL, getAssociatedResourcePool());
	return true;
}

Array<String> UNIX_VirtualEthernetSwitchSettingData::getAssociatedResourcePool() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_VirtualEthernetSwitchSettingData::getMaxNumMACAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_NUM_M_A_C_ADDRESS, getMaxNumMACAddress());
	return true;
}

Uint32 UNIX_VirtualEthernetSwitchSettingData::getMaxNumMACAddress() const
{
	return Uint32(0);
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getEVBMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_E_V_B_MODE, getEVBMode());
	return true;
}

Uint16 UNIX_VirtualEthernetSwitchSettingData::getEVBMode() const
{
	return Uint16(0);
}

Boolean UNIX_VirtualEthernetSwitchSettingData::getOtherEVBMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_E_V_B_MODE, getOtherEVBMode());
	return true;
}

String UNIX_VirtualEthernetSwitchSettingData::getOtherEVBMode() const
{
	return String ("");
}



Boolean UNIX_VirtualEthernetSwitchSettingData::initialize()
{
	return false;
}

Boolean UNIX_VirtualEthernetSwitchSettingData::load(int &pIndex)
{
	return false;
}

Boolean UNIX_VirtualEthernetSwitchSettingData::finalize()
{
	return false;
}

Boolean UNIX_VirtualEthernetSwitchSettingData::find(Array<CIMKeyBinding> &kbArray)
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
