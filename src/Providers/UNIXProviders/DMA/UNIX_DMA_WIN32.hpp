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


UNIX_DMA::UNIX_DMA(void)
{
}

UNIX_DMA::~UNIX_DMA(void)
{
}


Boolean UNIX_DMA::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DMA::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_DMA::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DMA::getCaption() const
{
	return String ("");
}

Boolean UNIX_DMA::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DMA::getDescription() const
{
	return String ("");
}

Boolean UNIX_DMA::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DMA::getElementName() const
{
	return String("DMA");
}

Boolean UNIX_DMA::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_DMA::getInstallDate() const
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

Boolean UNIX_DMA::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_DMA::getName() const
{
	return String ("");
}

Boolean UNIX_DMA::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_DMA::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DMA::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_DMA::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_DMA::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_DMA::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_DMA::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_DMA::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_DMA::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_DMA::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_DMA::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_DMA::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_DMA::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_DMA::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_DMA::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_DMA::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_DMA::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_DMA::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_DMA::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_DMA::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_DMA::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_DMA::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_DMA::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_DMA::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_DMA::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_DMA::getTimeOfLastStateChange() const
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

Boolean UNIX_DMA::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_DMA::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DMA::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_DMA::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_DMA::getShareable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SHAREABLE, getShareable());
	return true;
}

Boolean UNIX_DMA::getShareable() const
{
	return Boolean(false);
}

Boolean UNIX_DMA::getImplementationInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IMPLEMENTATION_INFO, getImplementationInfo());
	return true;
}

Uint16 UNIX_DMA::getImplementationInfo() const
{
	return Uint16(0);
}

Boolean UNIX_DMA::getCSCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_CREATION_CLASS_NAME, getCSCreationClassName());
	return true;
}

String UNIX_DMA::getCSCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_DMA::getCSName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CS_NAME, getCSName());
	return true;
}

String UNIX_DMA::getCSName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_DMA::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_DMA::getCreationClassName() const
{
	return String("UNIX_DMA");
}

Boolean UNIX_DMA::getDMAChannel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_D_M_A_CHANNEL, getDMAChannel());
	return true;
}

Uint32 UNIX_DMA::getDMAChannel() const
{
	return Uint32(0);
}

Boolean UNIX_DMA::getAvailability(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABILITY, getAvailability());
	return true;
}

Uint16 UNIX_DMA::getAvailability() const
{
	return Uint16(0);
}

Boolean UNIX_DMA::getBurstMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BURST_MODE, getBurstMode());
	return true;
}

Boolean UNIX_DMA::getBurstMode() const
{
	return Boolean(false);
}

Boolean UNIX_DMA::getTransferWidths(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSFER_WIDTHS, getTransferWidths());
	return true;
}

Array<Uint16> UNIX_DMA::getTransferWidths() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DMA::getAddressSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDRESS_SIZE, getAddressSize());
	return true;
}

Uint16 UNIX_DMA::getAddressSize() const
{
	return Uint16(0);
}

Boolean UNIX_DMA::getMaxTransferSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_TRANSFER_SIZE, getMaxTransferSize());
	return true;
}

Uint32 UNIX_DMA::getMaxTransferSize() const
{
	return Uint32(0);
}

Boolean UNIX_DMA::getByteMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BYTE_MODE, getByteMode());
	return true;
}

Uint16 UNIX_DMA::getByteMode() const
{
	return Uint16(0);
}

Boolean UNIX_DMA::getWordMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WORD_MODE, getWordMode());
	return true;
}

Uint16 UNIX_DMA::getWordMode() const
{
	return Uint16(0);
}

Boolean UNIX_DMA::getChannelTiming(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANNEL_TIMING, getChannelTiming());
	return true;
}

Uint16 UNIX_DMA::getChannelTiming() const
{
	return Uint16(0);
}

Boolean UNIX_DMA::getTypeCTiming(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TYPE_C_TIMING, getTypeCTiming());
	return true;
}

Uint16 UNIX_DMA::getTypeCTiming() const
{
	return Uint16(0);
}



Boolean UNIX_DMA::initialize()
{
	return false;
}

Boolean UNIX_DMA::load(int &pIndex)
{
	return false;
}

Boolean UNIX_DMA::finalize()
{
	return false;
}

Boolean UNIX_DMA::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String cSCreationClassNameKey;
	String cSNameKey;
	String creationClassNameKey;
	String dMAChannelKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_CS_CREATION_CLASS_NAME)) cSCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CS_NAME)) cSNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_D_M_A_CHANNEL)) dMAChannelKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
