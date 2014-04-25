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


UNIX_ExecuteProgram::UNIX_ExecuteProgram(void)
{
}

UNIX_ExecuteProgram::~UNIX_ExecuteProgram(void)
{
}


Boolean UNIX_ExecuteProgram::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ExecuteProgram::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_ExecuteProgram::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ExecuteProgram::getCaption() const
{
	return String ("");
}

Boolean UNIX_ExecuteProgram::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ExecuteProgram::getDescription() const
{
	return String ("");
}

Boolean UNIX_ExecuteProgram::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ExecuteProgram::getElementName() const
{
	return String("ExecuteProgram");
}

Boolean UNIX_ExecuteProgram::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_ExecuteProgram::getName() const
{
	return String ("");
}

Boolean UNIX_ExecuteProgram::getVersion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERSION, getVersion());
	return true;
}

String UNIX_ExecuteProgram::getVersion() const
{
	return String ("");
}

Boolean UNIX_ExecuteProgram::getSoftwareElementState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOFTWARE_ELEMENT_STATE, getSoftwareElementState());
	return true;
}

Uint16 UNIX_ExecuteProgram::getSoftwareElementState() const
{
	return Uint16(0);
}

Boolean UNIX_ExecuteProgram::getSoftwareElementID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SOFTWARE_ELEMENT_ID, getSoftwareElementID());
	return true;
}

String UNIX_ExecuteProgram::getSoftwareElementID() const
{
	return String ("");
}

Boolean UNIX_ExecuteProgram::getTargetOperatingSystem(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TARGET_OPERATING_SYSTEM, getTargetOperatingSystem());
	return true;
}

Uint16 UNIX_ExecuteProgram::getTargetOperatingSystem() const
{
	return Uint16(0);
}

Boolean UNIX_ExecuteProgram::getActionID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACTION_ID, getActionID());
	return true;
}

String UNIX_ExecuteProgram::getActionID() const
{
	return String ("");
}

Boolean UNIX_ExecuteProgram::getDirection(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DIRECTION, getDirection());
	return true;
}

Uint16 UNIX_ExecuteProgram::getDirection() const
{
	return Uint16(0);
}

Boolean UNIX_ExecuteProgram::getProgramPath(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PROGRAM_PATH, getProgramPath());
	return true;
}

String UNIX_ExecuteProgram::getProgramPath() const
{
	return String ("");
}

Boolean UNIX_ExecuteProgram::getCommandLine(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COMMAND_LINE, getCommandLine());
	return true;
}

String UNIX_ExecuteProgram::getCommandLine() const
{
	return String ("");
}



Boolean UNIX_ExecuteProgram::initialize()
{
	return false;
}

Boolean UNIX_ExecuteProgram::load(int &pIndex)
{
	return false;
}

Boolean UNIX_ExecuteProgram::finalize()
{
	return false;
}

Boolean UNIX_ExecuteProgram::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String nameKey;
	String versionKey;
	String softwareElementStateKey;
	String softwareElementIDKey;
	String targetOperatingSystemKey;
	String actionIDKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_VERSION)) versionKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SOFTWARE_ELEMENT_STATE)) softwareElementStateKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SOFTWARE_ELEMENT_ID)) softwareElementIDKey = kb.getValue();
		else if (keyName.equal(PROPERTY_TARGET_OPERATING_SYSTEM)) targetOperatingSystemKey = kb.getValue();
		else if (keyName.equal(PROPERTY_ACTION_ID)) actionIDKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
