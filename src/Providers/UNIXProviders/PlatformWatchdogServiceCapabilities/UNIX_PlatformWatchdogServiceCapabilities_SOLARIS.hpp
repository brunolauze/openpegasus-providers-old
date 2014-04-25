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


UNIX_PlatformWatchdogServiceCapabilities::UNIX_PlatformWatchdogServiceCapabilities(void)
{
}

UNIX_PlatformWatchdogServiceCapabilities::~UNIX_PlatformWatchdogServiceCapabilities(void)
{
}


Boolean UNIX_PlatformWatchdogServiceCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_PlatformWatchdogServiceCapabilities::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_PlatformWatchdogServiceCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_PlatformWatchdogServiceCapabilities::getCaption() const
{
	return String ("");
}

Boolean UNIX_PlatformWatchdogServiceCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_PlatformWatchdogServiceCapabilities::getDescription() const
{
	return String ("");
}

Boolean UNIX_PlatformWatchdogServiceCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_PlatformWatchdogServiceCapabilities::getElementName() const
{
	return String("PlatformWatchdogServiceCapabilities");
}

Boolean UNIX_PlatformWatchdogServiceCapabilities::getElementNameEditSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_EDIT_SUPPORTED, getElementNameEditSupported());
	return true;
}

Boolean UNIX_PlatformWatchdogServiceCapabilities::getElementNameEditSupported() const
{
	return Boolean(false);
}

Boolean UNIX_PlatformWatchdogServiceCapabilities::getMaxElementNameLen(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ELEMENT_NAME_LEN, getMaxElementNameLen());
	return true;
}

Uint16 UNIX_PlatformWatchdogServiceCapabilities::getMaxElementNameLen() const
{
	return Uint16(0);
}

Boolean UNIX_PlatformWatchdogServiceCapabilities::getRequestedStatesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATES_SUPPORTED, getRequestedStatesSupported());
	return true;
}

Array<Uint16> UNIX_PlatformWatchdogServiceCapabilities::getRequestedStatesSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PlatformWatchdogServiceCapabilities::getElementNameMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_MASK, getElementNameMask());
	return true;
}

String UNIX_PlatformWatchdogServiceCapabilities::getElementNameMask() const
{
	return String ("");
}

Boolean UNIX_PlatformWatchdogServiceCapabilities::getActionOnExpirationSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTION_ON_EXPIRATION_SUPPORTED, getActionOnExpirationSupported());
	return true;
}

Array<Uint16> UNIX_PlatformWatchdogServiceCapabilities::getActionOnExpirationSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PlatformWatchdogServiceCapabilities::getWatchdogTimerDataSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WATCHDOG_TIMER_DATA_SUPPORTED, getWatchdogTimerDataSupported());
	return true;
}

Array<Uint16> UNIX_PlatformWatchdogServiceCapabilities::getWatchdogTimerDataSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_PlatformWatchdogServiceCapabilities::getLastExpirationDataSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_EXPIRATION_DATA_SUPPORTED, getLastExpirationDataSupported());
	return true;
}

Array<Uint16> UNIX_PlatformWatchdogServiceCapabilities::getLastExpirationDataSupported() const
{
	Array<Uint16> as;
	

	return as;

}



Boolean UNIX_PlatformWatchdogServiceCapabilities::initialize()
{
	return false;
}

Boolean UNIX_PlatformWatchdogServiceCapabilities::load(int &pIndex)
{
	return false;
}

Boolean UNIX_PlatformWatchdogServiceCapabilities::finalize()
{
	return false;
}

Boolean UNIX_PlatformWatchdogServiceCapabilities::find(Array<CIMKeyBinding> &kbArray)
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
