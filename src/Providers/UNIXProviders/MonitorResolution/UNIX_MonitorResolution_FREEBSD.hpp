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


UNIX_MonitorResolution::UNIX_MonitorResolution(void)
{
}

UNIX_MonitorResolution::~UNIX_MonitorResolution(void)
{
}


Boolean UNIX_MonitorResolution::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_MonitorResolution::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_MonitorResolution::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_MonitorResolution::getCaption() const
{
	return String ("");
}

Boolean UNIX_MonitorResolution::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_MonitorResolution::getDescription() const
{
	return String ("");
}

Boolean UNIX_MonitorResolution::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_MonitorResolution::getElementName() const
{
	return String("MonitorResolution");
}

Boolean UNIX_MonitorResolution::getSettingID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SETTING_ID, getSettingID());
	return true;
}

String UNIX_MonitorResolution::getSettingID() const
{
	return String ("");
}

Boolean UNIX_MonitorResolution::getHorizontalResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HORIZONTAL_RESOLUTION, getHorizontalResolution());
	return true;
}

Uint32 UNIX_MonitorResolution::getHorizontalResolution() const
{
	return Uint32(0);
}

Boolean UNIX_MonitorResolution::getVerticalResolution(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERTICAL_RESOLUTION, getVerticalResolution());
	return true;
}

Uint32 UNIX_MonitorResolution::getVerticalResolution() const
{
	return Uint32(0);
}

Boolean UNIX_MonitorResolution::getRefreshRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REFRESH_RATE, getRefreshRate());
	return true;
}

Uint32 UNIX_MonitorResolution::getRefreshRate() const
{
	return Uint32(0);
}

Boolean UNIX_MonitorResolution::getMinRefreshRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_REFRESH_RATE, getMinRefreshRate());
	return true;
}

Uint32 UNIX_MonitorResolution::getMinRefreshRate() const
{
	return Uint32(0);
}

Boolean UNIX_MonitorResolution::getMaxRefreshRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_REFRESH_RATE, getMaxRefreshRate());
	return true;
}

Uint32 UNIX_MonitorResolution::getMaxRefreshRate() const
{
	return Uint32(0);
}

Boolean UNIX_MonitorResolution::getScanMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SCAN_MODE, getScanMode());
	return true;
}

Uint16 UNIX_MonitorResolution::getScanMode() const
{
	return Uint16(0);
}



Boolean UNIX_MonitorResolution::initialize()
{
	return false;
}

Boolean UNIX_MonitorResolution::load(int &pIndex)
{
	return false;
}

Boolean UNIX_MonitorResolution::finalize()
{
	return false;
}

Boolean UNIX_MonitorResolution::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String settingIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SETTING_ID)) settingIDKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
