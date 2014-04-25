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


UNIX_VirtualSystemSettingData::UNIX_VirtualSystemSettingData(void)
{
}

UNIX_VirtualSystemSettingData::~UNIX_VirtualSystemSettingData(void)
{
}


Boolean UNIX_VirtualSystemSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_VirtualSystemSettingData::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_VirtualSystemSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_VirtualSystemSettingData::getCaption() const
{
	return String ("");
}

Boolean UNIX_VirtualSystemSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_VirtualSystemSettingData::getDescription() const
{
	return String ("");
}

Boolean UNIX_VirtualSystemSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_VirtualSystemSettingData::getElementName() const
{
	return String("VirtualSystemSettingData");
}

Boolean UNIX_VirtualSystemSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_VirtualSystemSettingData::getChangeableType() const
{
	return Uint16(0);
}

Boolean UNIX_VirtualSystemSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_VirtualSystemSettingData::getConfigurationName() const
{
	return String ("");
}

Boolean UNIX_VirtualSystemSettingData::getVirtualSystemIdentifier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIRTUAL_SYSTEM_IDENTIFIER, getVirtualSystemIdentifier());
	return true;
}

String UNIX_VirtualSystemSettingData::getVirtualSystemIdentifier() const
{
	return String ("");
}

Boolean UNIX_VirtualSystemSettingData::getVirtualSystemType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VIRTUAL_SYSTEM_TYPE, getVirtualSystemType());
	return true;
}

String UNIX_VirtualSystemSettingData::getVirtualSystemType() const
{
	return String ("");
}

Boolean UNIX_VirtualSystemSettingData::getNotes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NOTES, getNotes());
	return true;
}

Array<String> UNIX_VirtualSystemSettingData::getNotes() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_VirtualSystemSettingData::getCreationTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_TIME, getCreationTime());
	return true;
}

CIMDateTime UNIX_VirtualSystemSettingData::getCreationTime() const
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

Boolean UNIX_VirtualSystemSettingData::getConfigurationID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_ID, getConfigurationID());
	return true;
}

String UNIX_VirtualSystemSettingData::getConfigurationID() const
{
	return String ("");
}

Boolean UNIX_VirtualSystemSettingData::getConfigurationDataRoot(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_DATA_ROOT, getConfigurationDataRoot());
	return true;
}

String UNIX_VirtualSystemSettingData::getConfigurationDataRoot() const
{
	return String ("");
}

Boolean UNIX_VirtualSystemSettingData::getConfigurationFile(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_FILE, getConfigurationFile());
	return true;
}

String UNIX_VirtualSystemSettingData::getConfigurationFile() const
{
	return String ("");
}

Boolean UNIX_VirtualSystemSettingData::getSnapshotDataRoot(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SNAPSHOT_DATA_ROOT, getSnapshotDataRoot());
	return true;
}

String UNIX_VirtualSystemSettingData::getSnapshotDataRoot() const
{
	return String ("");
}

Boolean UNIX_VirtualSystemSettingData::getSuspendDataRoot(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUSPEND_DATA_ROOT, getSuspendDataRoot());
	return true;
}

String UNIX_VirtualSystemSettingData::getSuspendDataRoot() const
{
	return String ("");
}

Boolean UNIX_VirtualSystemSettingData::getSwapFileDataRoot(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SWAP_FILE_DATA_ROOT, getSwapFileDataRoot());
	return true;
}

String UNIX_VirtualSystemSettingData::getSwapFileDataRoot() const
{
	return String ("");
}

Boolean UNIX_VirtualSystemSettingData::getLogDataRoot(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_DATA_ROOT, getLogDataRoot());
	return true;
}

String UNIX_VirtualSystemSettingData::getLogDataRoot() const
{
	return String ("");
}

Boolean UNIX_VirtualSystemSettingData::getAutomaticStartupAction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTOMATIC_STARTUP_ACTION, getAutomaticStartupAction());
	return true;
}

Uint16 UNIX_VirtualSystemSettingData::getAutomaticStartupAction() const
{
	return Uint16(0);
}

Boolean UNIX_VirtualSystemSettingData::getAutomaticStartupActionDelay(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTOMATIC_STARTUP_ACTION_DELAY, getAutomaticStartupActionDelay());
	return true;
}

CIMDateTime UNIX_VirtualSystemSettingData::getAutomaticStartupActionDelay() const
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

Boolean UNIX_VirtualSystemSettingData::getAutomaticStartupActionSequenceNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTOMATIC_STARTUP_ACTION_SEQUENCE_NUMBER, getAutomaticStartupActionSequenceNumber());
	return true;
}

Uint16 UNIX_VirtualSystemSettingData::getAutomaticStartupActionSequenceNumber() const
{
	return Uint16(0);
}

Boolean UNIX_VirtualSystemSettingData::getAutomaticShutdownAction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTOMATIC_SHUTDOWN_ACTION, getAutomaticShutdownAction());
	return true;
}

Uint16 UNIX_VirtualSystemSettingData::getAutomaticShutdownAction() const
{
	return Uint16(0);
}

Boolean UNIX_VirtualSystemSettingData::getAutomaticRecoveryAction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTOMATIC_RECOVERY_ACTION, getAutomaticRecoveryAction());
	return true;
}

Uint16 UNIX_VirtualSystemSettingData::getAutomaticRecoveryAction() const
{
	return Uint16(0);
}

Boolean UNIX_VirtualSystemSettingData::getRecoveryFile(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECOVERY_FILE, getRecoveryFile());
	return true;
}

String UNIX_VirtualSystemSettingData::getRecoveryFile() const
{
	return String ("");
}



Boolean UNIX_VirtualSystemSettingData::initialize()
{
	return false;
}

Boolean UNIX_VirtualSystemSettingData::load(int &pIndex)
{
	return false;
}

Boolean UNIX_VirtualSystemSettingData::finalize()
{
	return false;
}

Boolean UNIX_VirtualSystemSettingData::find(Array<CIMKeyBinding> &kbArray)
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
