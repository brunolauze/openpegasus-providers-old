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


UNIX_DiagnosticSettingData::UNIX_DiagnosticSettingData(void)
{
}

UNIX_DiagnosticSettingData::~UNIX_DiagnosticSettingData(void)
{
}


Boolean UNIX_DiagnosticSettingData::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DiagnosticSettingData::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_DiagnosticSettingData::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DiagnosticSettingData::getCaption() const
{
	return String ("");
}

Boolean UNIX_DiagnosticSettingData::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DiagnosticSettingData::getDescription() const
{
	return String ("");
}

Boolean UNIX_DiagnosticSettingData::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DiagnosticSettingData::getElementName() const
{
	return String("DiagnosticSettingData");
}

Boolean UNIX_DiagnosticSettingData::getChangeableType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CHANGEABLE_TYPE, getChangeableType());
	return true;
}

Uint16 UNIX_DiagnosticSettingData::getChangeableType() const
{
	return Uint16(0);
}

Boolean UNIX_DiagnosticSettingData::getConfigurationName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CONFIGURATION_NAME, getConfigurationName());
	return true;
}

String UNIX_DiagnosticSettingData::getConfigurationName() const
{
	return String ("");
}

Boolean UNIX_DiagnosticSettingData::getHaltOnError(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HALT_ON_ERROR, getHaltOnError());
	return true;
}

Boolean UNIX_DiagnosticSettingData::getHaltOnError() const
{
	return Boolean(false);
}

Boolean UNIX_DiagnosticSettingData::getQuickMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_QUICK_MODE, getQuickMode());
	return true;
}

Boolean UNIX_DiagnosticSettingData::getQuickMode() const
{
	return Boolean(false);
}

Boolean UNIX_DiagnosticSettingData::getPercentOfTestCoverage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERCENT_OF_TEST_COVERAGE, getPercentOfTestCoverage());
	return true;
}

Uint8 UNIX_DiagnosticSettingData::getPercentOfTestCoverage() const
{
	return Uint8(0);
}

Boolean UNIX_DiagnosticSettingData::getLoopControlParameter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOOP_CONTROL_PARAMETER, getLoopControlParameter());
	return true;
}

Array<String> UNIX_DiagnosticSettingData::getLoopControlParameter() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_DiagnosticSettingData::getLoopControl(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOOP_CONTROL, getLoopControl());
	return true;
}

Array<Uint16> UNIX_DiagnosticSettingData::getLoopControl() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DiagnosticSettingData::getOtherLoopControlDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOOP_CONTROL_DESCRIPTIONS, getOtherLoopControlDescriptions());
	return true;
}

Array<String> UNIX_DiagnosticSettingData::getOtherLoopControlDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_DiagnosticSettingData::getResultPersistence(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESULT_PERSISTENCE, getResultPersistence());
	return true;
}

Uint32 UNIX_DiagnosticSettingData::getResultPersistence() const
{
	return Uint32(0);
}

Boolean UNIX_DiagnosticSettingData::getLogOptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_OPTIONS, getLogOptions());
	return true;
}

Array<Uint16> UNIX_DiagnosticSettingData::getLogOptions() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DiagnosticSettingData::getOtherLogOptionsDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOG_OPTIONS_DESCRIPTIONS, getOtherLogOptionsDescriptions());
	return true;
}

Array<String> UNIX_DiagnosticSettingData::getOtherLogOptionsDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_DiagnosticSettingData::getLogStorage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_STORAGE, getLogStorage());
	return true;
}

Array<Uint16> UNIX_DiagnosticSettingData::getLogStorage() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DiagnosticSettingData::getOtherLogStorageDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOG_STORAGE_DESCRIPTIONS, getOtherLogStorageDescriptions());
	return true;
}

Array<String> UNIX_DiagnosticSettingData::getOtherLogStorageDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_DiagnosticSettingData::getVerbosityLevel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERBOSITY_LEVEL, getVerbosityLevel());
	return true;
}

Array<Uint16> UNIX_DiagnosticSettingData::getVerbosityLevel() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DiagnosticSettingData::getQueryTimeout(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_QUERY_TIMEOUT, getQueryTimeout());
	return true;
}

Uint32 UNIX_DiagnosticSettingData::getQueryTimeout() const
{
	return Uint32(0);
}

Boolean UNIX_DiagnosticSettingData::getNonDestructive(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NON_DESTRUCTIVE, getNonDestructive());
	return true;
}

Boolean UNIX_DiagnosticSettingData::getNonDestructive() const
{
	return Boolean(false);
}



Boolean UNIX_DiagnosticSettingData::initialize()
{
	return false;
}

Boolean UNIX_DiagnosticSettingData::load(int &pIndex)
{
	return false;
}

Boolean UNIX_DiagnosticSettingData::finalize()
{
	return false;
}

Boolean UNIX_DiagnosticSettingData::find(Array<CIMKeyBinding> &kbArray)
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
