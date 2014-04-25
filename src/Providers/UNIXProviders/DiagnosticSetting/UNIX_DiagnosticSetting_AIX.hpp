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


UNIX_DiagnosticSetting::UNIX_DiagnosticSetting(void)
{
}

UNIX_DiagnosticSetting::~UNIX_DiagnosticSetting(void)
{
}


Boolean UNIX_DiagnosticSetting::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DiagnosticSetting::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_DiagnosticSetting::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DiagnosticSetting::getCaption() const
{
	return String ("");
}

Boolean UNIX_DiagnosticSetting::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DiagnosticSetting::getDescription() const
{
	return String ("");
}

Boolean UNIX_DiagnosticSetting::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DiagnosticSetting::getElementName() const
{
	return String("DiagnosticSetting");
}

Boolean UNIX_DiagnosticSetting::getSettingID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SETTING_ID, getSettingID());
	return true;
}

String UNIX_DiagnosticSetting::getSettingID() const
{
	return String ("");
}

Boolean UNIX_DiagnosticSetting::getTestWarningLevel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TEST_WARNING_LEVEL, getTestWarningLevel());
	return true;
}

Uint16 UNIX_DiagnosticSetting::getTestWarningLevel() const
{
	return Uint16(0);
}

Boolean UNIX_DiagnosticSetting::getReportSoftErrors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPORT_SOFT_ERRORS, getReportSoftErrors());
	return true;
}

Boolean UNIX_DiagnosticSetting::getReportSoftErrors() const
{
	return Boolean(false);
}

Boolean UNIX_DiagnosticSetting::getReportStatusMessages(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REPORT_STATUS_MESSAGES, getReportStatusMessages());
	return true;
}

Boolean UNIX_DiagnosticSetting::getReportStatusMessages() const
{
	return Boolean(false);
}

Boolean UNIX_DiagnosticSetting::getHaltOnError(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_HALT_ON_ERROR, getHaltOnError());
	return true;
}

Boolean UNIX_DiagnosticSetting::getHaltOnError() const
{
	return Boolean(false);
}

Boolean UNIX_DiagnosticSetting::getQuickMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_QUICK_MODE, getQuickMode());
	return true;
}

Boolean UNIX_DiagnosticSetting::getQuickMode() const
{
	return Boolean(false);
}

Boolean UNIX_DiagnosticSetting::getPercentOfTestCoverage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PERCENT_OF_TEST_COVERAGE, getPercentOfTestCoverage());
	return true;
}

Uint8 UNIX_DiagnosticSetting::getPercentOfTestCoverage() const
{
	return Uint8(0);
}

Boolean UNIX_DiagnosticSetting::getLoopControlParameter(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOOP_CONTROL_PARAMETER, getLoopControlParameter());
	return true;
}

Array<String> UNIX_DiagnosticSetting::getLoopControlParameter() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_DiagnosticSetting::getLoopControl(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOOP_CONTROL, getLoopControl());
	return true;
}

Array<Uint16> UNIX_DiagnosticSetting::getLoopControl() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DiagnosticSetting::getOtherLoopControlDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOOP_CONTROL_DESCRIPTION, getOtherLoopControlDescription());
	return true;
}

String UNIX_DiagnosticSetting::getOtherLoopControlDescription() const
{
	return String ("");
}

Boolean UNIX_DiagnosticSetting::getOtherLoopControlDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOOP_CONTROL_DESCRIPTIONS, getOtherLoopControlDescriptions());
	return true;
}

Array<String> UNIX_DiagnosticSetting::getOtherLoopControlDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_DiagnosticSetting::getResultPersistence(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_RESULT_PERSISTENCE, getResultPersistence());
	return true;
}

Uint32 UNIX_DiagnosticSetting::getResultPersistence() const
{
	return Uint32(0);
}

Boolean UNIX_DiagnosticSetting::getLogOptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_OPTIONS, getLogOptions());
	return true;
}

Array<Uint16> UNIX_DiagnosticSetting::getLogOptions() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DiagnosticSetting::getOtherLogOptionsDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOG_OPTIONS_DESCRIPTIONS, getOtherLogOptionsDescriptions());
	return true;
}

Array<String> UNIX_DiagnosticSetting::getOtherLogOptionsDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_DiagnosticSetting::getLogStorage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOG_STORAGE, getLogStorage());
	return true;
}

Array<Uint16> UNIX_DiagnosticSetting::getLogStorage() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DiagnosticSetting::getOtherLogStorageDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_LOG_STORAGE_DESCRIPTIONS, getOtherLogStorageDescriptions());
	return true;
}

Array<String> UNIX_DiagnosticSetting::getOtherLogStorageDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_DiagnosticSetting::getVerbosityLevel(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VERBOSITY_LEVEL, getVerbosityLevel());
	return true;
}

Array<Uint16> UNIX_DiagnosticSetting::getVerbosityLevel() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DiagnosticSetting::getLocales(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOCALES, getLocales());
	return true;
}

Array<String> UNIX_DiagnosticSetting::getLocales() const
{
	Array<String> as;
	

	return as;

}



Boolean UNIX_DiagnosticSetting::initialize()
{
	return false;
}

Boolean UNIX_DiagnosticSetting::load(int &pIndex)
{
	return false;
}

Boolean UNIX_DiagnosticSetting::finalize()
{
	return false;
}

Boolean UNIX_DiagnosticSetting::find(Array<CIMKeyBinding> &kbArray)
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
