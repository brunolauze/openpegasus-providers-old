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


UNIX_FileSpecification::UNIX_FileSpecification(void)
{
}

UNIX_FileSpecification::~UNIX_FileSpecification(void)
{
}


Boolean UNIX_FileSpecification::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FileSpecification::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_FileSpecification::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FileSpecification::getCaption() const
{
	return String ("");
}

Boolean UNIX_FileSpecification::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FileSpecification::getDescription() const
{
	return String ("");
}

Boolean UNIX_FileSpecification::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FileSpecification::getElementName() const
{
	return String("FileSpecification");
}

Boolean UNIX_FileSpecification::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_FileSpecification::getName() const
{
	return String ("");
}

Boolean UNIX_FileSpecification::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_FileSpecification::getVersion() const
{
	return String ("");
}

Boolean UNIX_FileSpecification::getSoftwareElementState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOFTWARE_ELEMENT_STATE, getSoftwareElementState());
	return true;
}

Uint16 UNIX_FileSpecification::getSoftwareElementState() const
{
	return Uint16(0);
}

Boolean UNIX_FileSpecification::getSoftwareElementID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOFTWARE_ELEMENT_ID, getSoftwareElementID());
	return true;
}

String UNIX_FileSpecification::getSoftwareElementID() const
{
	return String ("");
}

Boolean UNIX_FileSpecification::getTargetOperatingSystem(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TARGET_OPERATING_SYSTEM, getTargetOperatingSystem());
	return true;
}

Uint16 UNIX_FileSpecification::getTargetOperatingSystem() const
{
	return Uint16(0);
}

Boolean UNIX_FileSpecification::getCheckID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHECK_ID, getCheckID());
	return true;
}

String UNIX_FileSpecification::getCheckID() const
{
	return String ("");
}

Boolean UNIX_FileSpecification::getCheckMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHECK_MODE, getCheckMode());
	return true;
}

Boolean UNIX_FileSpecification::getCheckMode() const
{
	return Boolean(false);
}

Boolean UNIX_FileSpecification::getFileName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILE_NAME, getFileName());
	return true;
}

String UNIX_FileSpecification::getFileName() const
{
	return String ("");
}

Boolean UNIX_FileSpecification::getCreateTimeStamp(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATE_TIME_STAMP, getCreateTimeStamp());
	return true;
}

CIMDateTime UNIX_FileSpecification::getCreateTimeStamp() const
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

Boolean UNIX_FileSpecification::getFileSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FILE_SIZE, getFileSize());
	return true;
}

Uint64 UNIX_FileSpecification::getFileSize() const
{
	return Uint64(0);
}

Boolean UNIX_FileSpecification::getCheckSum(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHECK_SUM, getCheckSum());
	return true;
}

Uint32 UNIX_FileSpecification::getCheckSum() const
{
	return Uint32(0);
}

Boolean UNIX_FileSpecification::getCRC1(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_C_R_C_1, getCRC1());
	return true;
}

Uint32 UNIX_FileSpecification::getCRC1() const
{
	return Uint32(0);
}

Boolean UNIX_FileSpecification::getCRC2(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_C_R_C_2, getCRC2());
	return true;
}

Uint32 UNIX_FileSpecification::getCRC2() const
{
	return Uint32(0);
}

Boolean UNIX_FileSpecification::getMD5Checksum(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_M_D_5_CHECKSUM, getMD5Checksum());
	return true;
}

String UNIX_FileSpecification::getMD5Checksum() const
{
	return String ("");
}



Boolean UNIX_FileSpecification::initialize()
{
	return false;
}

Boolean UNIX_FileSpecification::load(int &pIndex)
{
	return false;
}

Boolean UNIX_FileSpecification::finalize()
{
	return false;
}

Boolean UNIX_FileSpecification::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String nameKey;
	String versionKey;
	String softwareElementStateKey;
	String softwareElementIDKey;
	String targetOperatingSystemKey;
	String checkIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_VERSION)) versionKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SOFTWARE_ELEMENT_STATE)) softwareElementStateKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SOFTWARE_ELEMENT_ID)) softwareElementIDKey = kb.getValue();
		else if (keyName.equal(PROPERTY_TARGET_OPERATING_SYSTEM)) targetOperatingSystemKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CHECK_ID)) checkIDKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
