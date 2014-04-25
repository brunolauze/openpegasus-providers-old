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


UNIX_HelpService::UNIX_HelpService(void)
{
}

UNIX_HelpService::~UNIX_HelpService(void)
{
}


Boolean UNIX_HelpService::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_HelpService::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_HelpService::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_HelpService::getCaption() const
{
	return String ("");
}

Boolean UNIX_HelpService::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_HelpService::getDescription() const
{
	return String ("");
}

Boolean UNIX_HelpService::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_HelpService::getElementName() const
{
	return String("HelpService");
}

Boolean UNIX_HelpService::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_HelpService::getInstallDate() const
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

Boolean UNIX_HelpService::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_HelpService::getName() const
{
	return String ("");
}

Boolean UNIX_HelpService::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_HelpService::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_HelpService::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_HelpService::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_HelpService::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_HelpService::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_HelpService::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_HelpService::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_HelpService::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_HelpService::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_HelpService::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_HelpService::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_HelpService::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_HelpService::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_HelpService::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_HelpService::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_HelpService::getEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_STATE, getEnabledState());
	return true;
}

Uint16 UNIX_HelpService::getEnabledState() const
{
	return Uint16(DEFAULT_ENABLED_STATE);
}

Boolean UNIX_HelpService::getOtherEnabledState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ENABLED_STATE, getOtherEnabledState());
	return true;
}

String UNIX_HelpService::getOtherEnabledState() const
{
	return String ("");
}

Boolean UNIX_HelpService::getRequestedState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATE, getRequestedState());
	return true;
}

Uint16 UNIX_HelpService::getRequestedState() const
{
	return Uint16(0);
}

Boolean UNIX_HelpService::getEnabledDefault(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENABLED_DEFAULT, getEnabledDefault());
	return true;
}

Uint16 UNIX_HelpService::getEnabledDefault() const
{
	return Uint16(0);
}

Boolean UNIX_HelpService::getTimeOfLastStateChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_LAST_STATE_CHANGE, getTimeOfLastStateChange());
	return true;
}

CIMDateTime UNIX_HelpService::getTimeOfLastStateChange() const
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

Boolean UNIX_HelpService::getAvailableRequestedStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_REQUESTED_STATES, getAvailableRequestedStates());
	return true;
}

Array<Uint16> UNIX_HelpService::getAvailableRequestedStates() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_HelpService::getTransitioningToState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TRANSITIONING_TO_STATE, getTransitioningToState());
	return true;
}

Uint16 UNIX_HelpService::getTransitioningToState() const
{
	return Uint16(0);
}

Boolean UNIX_HelpService::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_HelpService::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_HelpService::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_HelpService::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_HelpService::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_HelpService::getCreationClassName() const
{
	return String("UNIX_HelpService");
}

Boolean UNIX_HelpService::getPrimaryOwnerName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_NAME, getPrimaryOwnerName());
	return true;
}

String UNIX_HelpService::getPrimaryOwnerName() const
{
	return String ("");
}

Boolean UNIX_HelpService::getPrimaryOwnerContact(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_OWNER_CONTACT, getPrimaryOwnerContact());
	return true;
}

String UNIX_HelpService::getPrimaryOwnerContact() const
{
	return String ("");
}

Boolean UNIX_HelpService::getStartMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_START_MODE, getStartMode());
	return true;
}

String UNIX_HelpService::getStartMode() const
{
	return String ("");
}

Boolean UNIX_HelpService::getStarted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTED, getStarted());
	return true;
}

Boolean UNIX_HelpService::getStarted() const
{
	return Boolean(false);
}

Boolean UNIX_HelpService::getDeliveryOptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELIVERY_OPTIONS, getDeliveryOptions());
	return true;
}

Array<Uint16> UNIX_HelpService::getDeliveryOptions() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_HelpService::getOtherDeliveryOptionDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_DELIVERY_OPTION_DESCRIPTION, getOtherDeliveryOptionDescription());
	return true;
}

String UNIX_HelpService::getOtherDeliveryOptionDescription() const
{
	return String ("");
}

Boolean UNIX_HelpService::getDocumentsAvailable(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DOCUMENTS_AVAILABLE, getDocumentsAvailable());
	return true;
}

Array<String> UNIX_HelpService::getDocumentsAvailable() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_HelpService::getDocumentDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DOCUMENT_DESCRIPTIONS, getDocumentDescriptions());
	return true;
}

Array<String> UNIX_HelpService::getDocumentDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_HelpService::getDocumentFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DOCUMENT_FORMAT, getDocumentFormat());
	return true;
}

Array<Uint16> UNIX_HelpService::getDocumentFormat() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_HelpService::getOtherDocumentFormatDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_DOCUMENT_FORMAT_DESCRIPTION, getOtherDocumentFormatDescription());
	return true;
}

String UNIX_HelpService::getOtherDocumentFormatDescription() const
{
	return String ("");
}



Boolean UNIX_HelpService::initialize()
{
	return false;
}

Boolean UNIX_HelpService::load(int &pIndex)
{
	return false;
}

Boolean UNIX_HelpService::finalize()
{
	return false;
}

Boolean UNIX_HelpService::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
