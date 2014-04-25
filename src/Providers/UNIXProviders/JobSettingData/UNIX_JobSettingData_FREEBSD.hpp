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


UNIX_JobSettingData::UNIX_JobSettingData(void)
{
}

UNIX_JobSettingData::~UNIX_JobSettingData(void)
{
}


Boolean UNIX_JobSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_JobSettingData::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_JobSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_JobSettingData::getCaption() const
{
	return String ("");
}

Boolean UNIX_JobSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_JobSettingData::getDescription() const
{
	return String ("");
}

Boolean UNIX_JobSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_JobSettingData::getElementName() const
{
	return String("JobSettingData");
}

Boolean UNIX_JobSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_JobSettingData::getChangeableType() const
{
	return Uint16(0);
}

Boolean UNIX_JobSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_JobSettingData::getConfigurationName() const
{
	return String ("");
}

Boolean UNIX_JobSettingData::getDeleteOnCompletion(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DELETE_ON_COMPLETION, getDeleteOnCompletion());
	return true;
}

Boolean UNIX_JobSettingData::getDeleteOnCompletion() const
{
	return Boolean(false);
}

Boolean UNIX_JobSettingData::getRecoveryAction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RECOVERY_ACTION, getRecoveryAction());
	return true;
}

Uint16 UNIX_JobSettingData::getRecoveryAction() const
{
	return Uint16(0);
}

Boolean UNIX_JobSettingData::getOtherRecoveryAction(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_RECOVERY_ACTION, getOtherRecoveryAction());
	return true;
}

String UNIX_JobSettingData::getOtherRecoveryAction() const
{
	return String ("");
}



Boolean UNIX_JobSettingData::initialize()
{
	return false;
}

Boolean UNIX_JobSettingData::load(int &pIndex)
{
	return false;
}

Boolean UNIX_JobSettingData::finalize()
{
	return false;
}

Boolean UNIX_JobSettingData::find(Array<CIMKeyBinding> &kbArray)
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
