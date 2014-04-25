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


UNIX_Synchronized::UNIX_Synchronized(void)
{
}

UNIX_Synchronized::~UNIX_Synchronized(void)
{
}


Boolean UNIX_Synchronized::getSystemElement(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_ELEMENT, getSystemElement());
	return true;
}

CIMInstance UNIX_Synchronized::getSystemElement() const
{
	return CIMInstance(CIMName("CIM_ManagedElement"));
}

Boolean UNIX_Synchronized::getSyncedElement(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYNCED_ELEMENT, getSyncedElement());
	return true;
}

CIMInstance UNIX_Synchronized::getSyncedElement() const
{
	return CIMInstance(CIMName("CIM_ManagedElement"));
}

Boolean UNIX_Synchronized::getWhenSynced(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WHEN_SYNCED, getWhenSynced());
	return true;
}

CIMDateTime UNIX_Synchronized::getWhenSynced() const
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

Boolean UNIX_Synchronized::getSyncMaintained(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYNC_MAINTAINED, getSyncMaintained());
	return true;
}

Boolean UNIX_Synchronized::getSyncMaintained() const
{
	return Boolean(false);
}



Boolean UNIX_Synchronized::initialize()
{
	return false;
}

Boolean UNIX_Synchronized::load(int &pIndex)
{
	return false;
}

Boolean UNIX_Synchronized::finalize()
{
	return false;
}

Boolean UNIX_Synchronized::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemElementKey;
	String syncedElementKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_ELEMENT)) systemElementKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYNCED_ELEMENT)) syncedElementKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
