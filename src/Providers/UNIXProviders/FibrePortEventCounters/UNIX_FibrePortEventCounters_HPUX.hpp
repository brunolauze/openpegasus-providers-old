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


UNIX_FibrePortEventCounters::UNIX_FibrePortEventCounters(void)
{
}

UNIX_FibrePortEventCounters::~UNIX_FibrePortEventCounters(void)
{
}


Boolean UNIX_FibrePortEventCounters::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FibrePortEventCounters::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_FibrePortEventCounters::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FibrePortEventCounters::getCaption() const
{
	return String ("");
}

Boolean UNIX_FibrePortEventCounters::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FibrePortEventCounters::getDescription() const
{
	return String ("");
}

Boolean UNIX_FibrePortEventCounters::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FibrePortEventCounters::getElementName() const
{
	return String("FibrePortEventCounters");
}

Boolean UNIX_FibrePortEventCounters::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_FibrePortEventCounters::getName() const
{
	return String ("");
}

Boolean UNIX_FibrePortEventCounters::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_FibrePortEventCounters::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_FibrePortEventCounters::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_FibrePortEventCounters::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_FibrePortEventCounters::getDeviceCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_CREATION_CLASS_NAME, getDeviceCreationClassName());
	return true;
}

String UNIX_FibrePortEventCounters::getDeviceCreationClassName() const
{
	return String ("");
}

Boolean UNIX_FibrePortEventCounters::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_FibrePortEventCounters::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_FibrePortEventCounters::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_FibrePortEventCounters::getCreationClassName() const
{
	return String("UNIX_FibrePortEventCounters");
}

Boolean UNIX_FibrePortEventCounters::getPLOGIsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_L_O_G_IS_RECEIVED, getPLOGIsReceived());
	return true;
}

Uint64 UNIX_FibrePortEventCounters::getPLOGIsReceived() const
{
	return Uint64(0);
}

Boolean UNIX_FibrePortEventCounters::getPLOGIsSent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_L_O_G_IS_SENT, getPLOGIsSent());
	return true;
}

Uint64 UNIX_FibrePortEventCounters::getPLOGIsSent() const
{
	return Uint64(0);
}

Boolean UNIX_FibrePortEventCounters::getEOFAbortsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_E_O_F_ABORTS_RECEIVED, getEOFAbortsReceived());
	return true;
}

Uint64 UNIX_FibrePortEventCounters::getEOFAbortsReceived() const
{
	return Uint64(0);
}

Boolean UNIX_FibrePortEventCounters::getEOFAbortsTransmitted(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_E_O_F_ABORTS_TRANSMITTED, getEOFAbortsTransmitted());
	return true;
}

Uint64 UNIX_FibrePortEventCounters::getEOFAbortsTransmitted() const
{
	return Uint64(0);
}

Boolean UNIX_FibrePortEventCounters::getPLOGOsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_L_O_G_OS_RECEIVED, getPLOGOsReceived());
	return true;
}

Uint64 UNIX_FibrePortEventCounters::getPLOGOsReceived() const
{
	return Uint64(0);
}

Boolean UNIX_FibrePortEventCounters::getPLOGOsSent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_L_O_G_OS_SENT, getPLOGOsSent());
	return true;
}

Uint64 UNIX_FibrePortEventCounters::getPLOGOsSent() const
{
	return Uint64(0);
}

Boolean UNIX_FibrePortEventCounters::getPLOGIsRejected(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_L_O_G_IS_REJECTED, getPLOGIsRejected());
	return true;
}

Uint64 UNIX_FibrePortEventCounters::getPLOGIsRejected() const
{
	return Uint64(0);
}

Boolean UNIX_FibrePortEventCounters::getPLOGOsRejected(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_L_O_G_OS_REJECTED, getPLOGOsRejected());
	return true;
}

Uint64 UNIX_FibrePortEventCounters::getPLOGOsRejected() const
{
	return Uint64(0);
}



Boolean UNIX_FibrePortEventCounters::initialize()
{
	return false;
}

Boolean UNIX_FibrePortEventCounters::load(int &pIndex)
{
	return false;
}

Boolean UNIX_FibrePortEventCounters::finalize()
{
	return false;
}

Boolean UNIX_FibrePortEventCounters::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String deviceCreationClassNameKey;
	String deviceIDKey;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DEVICE_CREATION_CLASS_NAME)) deviceCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DEVICE_ID)) deviceIDKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
