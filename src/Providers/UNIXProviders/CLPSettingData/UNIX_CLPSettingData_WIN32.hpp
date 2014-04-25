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


UNIX_CLPSettingData::UNIX_CLPSettingData(void)
{
}

UNIX_CLPSettingData::~UNIX_CLPSettingData(void)
{
}


Boolean UNIX_CLPSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_CLPSettingData::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_CLPSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_CLPSettingData::getCaption() const
{
	return String ("");
}

Boolean UNIX_CLPSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_CLPSettingData::getDescription() const
{
	return String ("");
}

Boolean UNIX_CLPSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_CLPSettingData::getElementName() const
{
	return String("CLPSettingData");
}

Boolean UNIX_CLPSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_CLPSettingData::getChangeableType() const
{
	return Uint16(0);
}

Boolean UNIX_CLPSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_CLPSettingData::getConfigurationName() const
{
	return String ("");
}

Boolean UNIX_CLPSettingData::getCurrentDefaultTarget(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_DEFAULT_TARGET, getCurrentDefaultTarget());
	return true;
}

String UNIX_CLPSettingData::getCurrentDefaultTarget() const
{
	return String ("");
}

Boolean UNIX_CLPSettingData::getKeepTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_KEEP_TIME, getKeepTime());
	return true;
}

Uint16 UNIX_CLPSettingData::getKeepTime() const
{
	return Uint16(0);
}

Boolean UNIX_CLPSettingData::getWaitBehavior(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_WAIT_BEHAVIOR, getWaitBehavior());
	return true;
}

Boolean UNIX_CLPSettingData::getWaitBehavior() const
{
	return Boolean(false);
}

Boolean UNIX_CLPSettingData::getOutputFormat(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUTPUT_FORMAT, getOutputFormat());
	return true;
}

Uint16 UNIX_CLPSettingData::getOutputFormat() const
{
	return Uint16(0);
}

Boolean UNIX_CLPSettingData::getOutputVerbosity(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUTPUT_VERBOSITY, getOutputVerbosity());
	return true;
}

Uint16 UNIX_CLPSettingData::getOutputVerbosity() const
{
	return Uint16(0);
}

Boolean UNIX_CLPSettingData::getOutputLanguage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUTPUT_LANGUAGE, getOutputLanguage());
	return true;
}

String UNIX_CLPSettingData::getOutputLanguage() const
{
	return String ("");
}

Boolean UNIX_CLPSettingData::getOutputPosition(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUTPUT_POSITION, getOutputPosition());
	return true;
}

Uint16 UNIX_CLPSettingData::getOutputPosition() const
{
	return Uint16(0);
}

Boolean UNIX_CLPSettingData::getOutputOrder(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUTPUT_ORDER, getOutputOrder());
	return true;
}

Uint16 UNIX_CLPSettingData::getOutputOrder() const
{
	return Uint16(0);
}

Boolean UNIX_CLPSettingData::getOutputCount(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUTPUT_COUNT, getOutputCount());
	return true;
}

Uint32 UNIX_CLPSettingData::getOutputCount() const
{
	return Uint32(0);
}

Boolean UNIX_CLPSettingData::getDisplayOption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DISPLAY_OPTION, getDisplayOption());
	return true;
}

String UNIX_CLPSettingData::getDisplayOption() const
{
	return String ("");
}



Boolean UNIX_CLPSettingData::initialize()
{
	return false;
}

Boolean UNIX_CLPSettingData::load(int &pIndex)
{
	return false;
}

Boolean UNIX_CLPSettingData::finalize()
{
	return false;
}

Boolean UNIX_CLPSettingData::find(Array<CIMKeyBinding> &kbArray)
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
