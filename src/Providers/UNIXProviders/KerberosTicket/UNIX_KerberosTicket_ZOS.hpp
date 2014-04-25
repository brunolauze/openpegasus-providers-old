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


UNIX_KerberosTicket::UNIX_KerberosTicket(void)
{
}

UNIX_KerberosTicket::~UNIX_KerberosTicket(void)
{
}


Boolean UNIX_KerberosTicket::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_KerberosTicket::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_KerberosTicket::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_KerberosTicket::getCaption() const
{
	return String ("");
}

Boolean UNIX_KerberosTicket::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_KerberosTicket::getDescription() const
{
	return String ("");
}

Boolean UNIX_KerberosTicket::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_KerberosTicket::getElementName() const
{
	return String("KerberosTicket");
}

Boolean UNIX_KerberosTicket::getIssued(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ISSUED, getIssued());
	return true;
}

CIMDateTime UNIX_KerberosTicket::getIssued() const
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

Boolean UNIX_KerberosTicket::getExpires(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXPIRES, getExpires());
	return true;
}

CIMDateTime UNIX_KerberosTicket::getExpires() const
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

Boolean UNIX_KerberosTicket::getAccessesService(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESSES_SERVICE, getAccessesService());
	return true;
}

String UNIX_KerberosTicket::getAccessesService() const
{
	return String ("");
}

Boolean UNIX_KerberosTicket::getRemoteID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REMOTE_ID, getRemoteID());
	return true;
}

String UNIX_KerberosTicket::getRemoteID() const
{
	return String ("");
}

Boolean UNIX_KerberosTicket::getTicketType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TICKET_TYPE, getTicketType());
	return true;
}

Uint16 UNIX_KerberosTicket::getTicketType() const
{
	return Uint16(0);
}

Boolean UNIX_KerberosTicket::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_KerberosTicket::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_KerberosTicket::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_KerberosTicket::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_KerberosTicket::getServiceCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_CREATION_CLASS_NAME, getServiceCreationClassName());
	return true;
}

String UNIX_KerberosTicket::getServiceCreationClassName() const
{
	return String ("");
}

Boolean UNIX_KerberosTicket::getServiceName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_NAME, getServiceName());
	return true;
}

String UNIX_KerberosTicket::getServiceName() const
{
	return String ("");
}



Boolean UNIX_KerberosTicket::initialize()
{
	return false;
}

Boolean UNIX_KerberosTicket::load(int &pIndex)
{
	return false;
}

Boolean UNIX_KerberosTicket::finalize()
{
	return false;
}

Boolean UNIX_KerberosTicket::find(Array<CIMKeyBinding> &kbArray)
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
