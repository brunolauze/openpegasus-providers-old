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


UNIX_MemoryError::UNIX_MemoryError(void)
{
}

UNIX_MemoryError::~UNIX_MemoryError(void)
{
}


Boolean UNIX_MemoryError::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_MemoryError::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_MemoryError::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_MemoryError::getCaption() const
{
	return String ("");
}

Boolean UNIX_MemoryError::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_MemoryError::getDescription() const
{
	return String ("");
}

Boolean UNIX_MemoryError::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_MemoryError::getElementName() const
{
	return String("MemoryError");
}

Boolean UNIX_MemoryError::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_MemoryError::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_MemoryError::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_MemoryError::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_MemoryError::getDeviceCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_CREATION_CLASS_NAME, getDeviceCreationClassName());
	return true;
}

String UNIX_MemoryError::getDeviceCreationClassName() const
{
	return String ("");
}

Boolean UNIX_MemoryError::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_MemoryError::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_MemoryError::getStartingAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STARTING_ADDRESS, getStartingAddress());
	return true;
}

Uint64 UNIX_MemoryError::getStartingAddress() const
{
	return Uint64(0);
}

Boolean UNIX_MemoryError::getEndingAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ENDING_ADDRESS, getEndingAddress());
	return true;
}

Uint64 UNIX_MemoryError::getEndingAddress() const
{
	return Uint64(0);
}

Boolean UNIX_MemoryError::getErrorInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_INFO, getErrorInfo());
	return true;
}

Uint16 UNIX_MemoryError::getErrorInfo() const
{
	return Uint16(0);
}

Boolean UNIX_MemoryError::getOtherErrorDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_ERROR_DESCRIPTION, getOtherErrorDescription());
	return true;
}

String UNIX_MemoryError::getOtherErrorDescription() const
{
	return String ("");
}

Boolean UNIX_MemoryError::getCorrectableError(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CORRECTABLE_ERROR, getCorrectableError());
	return true;
}

Boolean UNIX_MemoryError::getCorrectableError() const
{
	return Boolean(false);
}

Boolean UNIX_MemoryError::getErrorTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_TIME, getErrorTime());
	return true;
}

CIMDateTime UNIX_MemoryError::getErrorTime() const
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

Boolean UNIX_MemoryError::getErrorAccess(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_ACCESS, getErrorAccess());
	return true;
}

Uint16 UNIX_MemoryError::getErrorAccess() const
{
	return Uint16(0);
}

Boolean UNIX_MemoryError::getErrorTransferSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_TRANSFER_SIZE, getErrorTransferSize());
	return true;
}

Uint32 UNIX_MemoryError::getErrorTransferSize() const
{
	return Uint32(0);
}

Boolean UNIX_MemoryError::getErrorData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DATA, getErrorData());
	return true;
}

Array<Uint8> UNIX_MemoryError::getErrorData() const
{
	Array<Uint8> as;
	

	return as;

}

Boolean UNIX_MemoryError::getErrorDataOrder(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_DATA_ORDER, getErrorDataOrder());
	return true;
}

Uint16 UNIX_MemoryError::getErrorDataOrder() const
{
	return Uint16(0);
}

Boolean UNIX_MemoryError::getSystemLevelAddress(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_LEVEL_ADDRESS, getSystemLevelAddress());
	return true;
}

Boolean UNIX_MemoryError::getSystemLevelAddress() const
{
	return Boolean(false);
}

Boolean UNIX_MemoryError::getErrorResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ERROR_RESOLUTION, getErrorResolution());
	return true;
}

Uint64 UNIX_MemoryError::getErrorResolution() const
{
	return Uint64(0);
}

Boolean UNIX_MemoryError::getAdditionalErrorData(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADDITIONAL_ERROR_DATA, getAdditionalErrorData());
	return true;
}

Array<Uint8> UNIX_MemoryError::getAdditionalErrorData() const
{
	Array<Uint8> as;
	

	return as;

}



Boolean UNIX_MemoryError::initialize()
{
	return false;
}

Boolean UNIX_MemoryError::load(int &pIndex)
{
	return false;
}

Boolean UNIX_MemoryError::finalize()
{
	return false;
}

Boolean UNIX_MemoryError::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String deviceCreationClassNameKey;
	String deviceIDKey;
	String startingAddressKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DEVICE_CREATION_CLASS_NAME)) deviceCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DEVICE_ID)) deviceIDKey = kb.getValue();
		else if (keyName.equal(PROPERTY_STARTING_ADDRESS)) startingAddressKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
