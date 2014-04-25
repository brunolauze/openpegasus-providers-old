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


UNIX_AdministrativeDistance::UNIX_AdministrativeDistance(void)
{
}

UNIX_AdministrativeDistance::~UNIX_AdministrativeDistance(void)
{
}


Boolean UNIX_AdministrativeDistance::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_AdministrativeDistance::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_AdministrativeDistance::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_AdministrativeDistance::getCaption() const
{
	return String ("");
}

Boolean UNIX_AdministrativeDistance::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_AdministrativeDistance::getDescription() const
{
	return String ("");
}

Boolean UNIX_AdministrativeDistance::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_AdministrativeDistance::getElementName() const
{
	return String("AdministrativeDistance");
}

Boolean UNIX_AdministrativeDistance::getInstallDate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTALL_DATE, getInstallDate());
	return true;
}

CIMDateTime UNIX_AdministrativeDistance::getInstallDate() const
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

Boolean UNIX_AdministrativeDistance::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_AdministrativeDistance::getName() const
{
	return String ("");
}

Boolean UNIX_AdministrativeDistance::getOperationalStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONAL_STATUS, getOperationalStatus());
	return true;
}

Array<Uint16> UNIX_AdministrativeDistance::getOperationalStatus() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_AdministrativeDistance::getStatusDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS_DESCRIPTIONS, getStatusDescriptions());
	return true;
}

Array<String> UNIX_AdministrativeDistance::getStatusDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_AdministrativeDistance::getStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATUS, getStatus());
	return true;
}

String UNIX_AdministrativeDistance::getStatus() const
{
	return String(DEFAULT_STATUS);
}

Boolean UNIX_AdministrativeDistance::getHealthState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HEALTH_STATE, getHealthState());
	return true;
}

Uint16 UNIX_AdministrativeDistance::getHealthState() const
{
	return Uint16(DEFAULT_HEALTH_STATE);
}

Boolean UNIX_AdministrativeDistance::getCommunicationStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMUNICATION_STATUS, getCommunicationStatus());
	return true;
}

Uint16 UNIX_AdministrativeDistance::getCommunicationStatus() const
{
	return Uint16(0);
}

Boolean UNIX_AdministrativeDistance::getDetailedStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DETAILED_STATUS, getDetailedStatus());
	return true;
}

Uint16 UNIX_AdministrativeDistance::getDetailedStatus() const
{
	return Uint16(0);
}

Boolean UNIX_AdministrativeDistance::getOperatingStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATING_STATUS, getOperatingStatus());
	return true;
}

Uint16 UNIX_AdministrativeDistance::getOperatingStatus() const
{
	return Uint16(DEFAULT_OPERATING_STATUS);
}

Boolean UNIX_AdministrativeDistance::getPrimaryStatus(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PRIMARY_STATUS, getPrimaryStatus());
	return true;
}

Uint16 UNIX_AdministrativeDistance::getPrimaryStatus() const
{
	return Uint16(DEFAULT_PRIMARY_STATUS);
}

Boolean UNIX_AdministrativeDistance::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_AdministrativeDistance::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_AdministrativeDistance::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_AdministrativeDistance::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_AdministrativeDistance::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_AdministrativeDistance::getCreationClassName() const
{
	return String("UNIX_AdministrativeDistance");
}

Boolean UNIX_AdministrativeDistance::getDirectConnect(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DIRECT_CONNECT, getDirectConnect());
	return true;
}

Uint8 UNIX_AdministrativeDistance::getDirectConnect() const
{
	return Uint8(0);
}

Boolean UNIX_AdministrativeDistance::getStatic(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATIC, getStatic());
	return true;
}

Uint8 UNIX_AdministrativeDistance::getStatic() const
{
	return Uint8(0);
}

Boolean UNIX_AdministrativeDistance::getEBGP(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_E_B_G_P, getEBGP());
	return true;
}

Uint8 UNIX_AdministrativeDistance::getEBGP() const
{
	return Uint8(0);
}

Boolean UNIX_AdministrativeDistance::getEIGRPInternal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_E_I_G_R_P_INTERNAL, getEIGRPInternal());
	return true;
}

Uint8 UNIX_AdministrativeDistance::getEIGRPInternal() const
{
	return Uint8(0);
}

Boolean UNIX_AdministrativeDistance::getIGRP(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_I_G_R_P, getIGRP());
	return true;
}

Uint8 UNIX_AdministrativeDistance::getIGRP() const
{
	return Uint8(0);
}

Boolean UNIX_AdministrativeDistance::getOSPF(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OS_P_F, getOSPF());
	return true;
}

Uint8 UNIX_AdministrativeDistance::getOSPF() const
{
	return Uint8(0);
}

Boolean UNIX_AdministrativeDistance::getISIS(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_I_S_I_S, getISIS());
	return true;
}

Uint8 UNIX_AdministrativeDistance::getISIS() const
{
	return Uint8(0);
}

Boolean UNIX_AdministrativeDistance::getRIP(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_R_I_P, getRIP());
	return true;
}

Uint8 UNIX_AdministrativeDistance::getRIP() const
{
	return Uint8(0);
}

Boolean UNIX_AdministrativeDistance::getEGP(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_E_G_P, getEGP());
	return true;
}

Uint8 UNIX_AdministrativeDistance::getEGP() const
{
	return Uint8(0);
}

Boolean UNIX_AdministrativeDistance::getEIGRPExternal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_E_I_G_R_P_EXTERNAL, getEIGRPExternal());
	return true;
}

Uint8 UNIX_AdministrativeDistance::getEIGRPExternal() const
{
	return Uint8(0);
}

Boolean UNIX_AdministrativeDistance::getIBGP(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_I_B_G_P, getIBGP());
	return true;
}

Uint8 UNIX_AdministrativeDistance::getIBGP() const
{
	return Uint8(0);
}

Boolean UNIX_AdministrativeDistance::getBGPLocal(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_B_G_P_LOCAL, getBGPLocal());
	return true;
}

Uint8 UNIX_AdministrativeDistance::getBGPLocal() const
{
	return Uint8(0);
}

Boolean UNIX_AdministrativeDistance::getUnknown(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_UNKNOWN, getUnknown());
	return true;
}

Uint8 UNIX_AdministrativeDistance::getUnknown() const
{
	return Uint8(0);
}



Boolean UNIX_AdministrativeDistance::initialize()
{
	return false;
}

Boolean UNIX_AdministrativeDistance::load(int &pIndex)
{
	return false;
}

Boolean UNIX_AdministrativeDistance::finalize()
{
	return false;
}

Boolean UNIX_AdministrativeDistance::find(Array<CIMKeyBinding> &kbArray)
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
