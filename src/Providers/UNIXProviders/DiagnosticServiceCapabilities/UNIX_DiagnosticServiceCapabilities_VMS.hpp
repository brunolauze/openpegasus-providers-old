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


UNIX_DiagnosticServiceCapabilities::UNIX_DiagnosticServiceCapabilities(void)
{
}

UNIX_DiagnosticServiceCapabilities::~UNIX_DiagnosticServiceCapabilities(void)
{
}


Boolean UNIX_DiagnosticServiceCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_DiagnosticServiceCapabilities::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_DiagnosticServiceCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_DiagnosticServiceCapabilities::getCaption() const
{
	return String ("");
}

Boolean UNIX_DiagnosticServiceCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_DiagnosticServiceCapabilities::getDescription() const
{
	return String ("");
}

Boolean UNIX_DiagnosticServiceCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_DiagnosticServiceCapabilities::getElementName() const
{
	return String("DiagnosticServiceCapabilities");
}

Boolean UNIX_DiagnosticServiceCapabilities::getSupportedServiceModes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_SERVICE_MODES, getSupportedServiceModes());
	return true;
}

Array<Uint16> UNIX_DiagnosticServiceCapabilities::getSupportedServiceModes() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DiagnosticServiceCapabilities::getOtherSupportedServiceModesDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPORTED_SERVICE_MODES_DESCRIPTIONS, getOtherSupportedServiceModesDescriptions());
	return true;
}

Array<String> UNIX_DiagnosticServiceCapabilities::getOtherSupportedServiceModesDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_DiagnosticServiceCapabilities::getSupportedLoopControl(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_LOOP_CONTROL, getSupportedLoopControl());
	return true;
}

Array<Uint16> UNIX_DiagnosticServiceCapabilities::getSupportedLoopControl() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DiagnosticServiceCapabilities::getOtherSupportedLoopControlDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPORTED_LOOP_CONTROL_DESCRIPTIONS, getOtherSupportedLoopControlDescriptions());
	return true;
}

Array<String> UNIX_DiagnosticServiceCapabilities::getOtherSupportedLoopControlDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_DiagnosticServiceCapabilities::getSupportedLogOptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_LOG_OPTIONS, getSupportedLogOptions());
	return true;
}

Array<Uint16> UNIX_DiagnosticServiceCapabilities::getSupportedLogOptions() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DiagnosticServiceCapabilities::getOtherSupportedLogOptionsDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPORTED_LOG_OPTIONS_DESCRIPTIONS, getOtherSupportedLogOptionsDescriptions());
	return true;
}

Array<String> UNIX_DiagnosticServiceCapabilities::getOtherSupportedLogOptionsDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_DiagnosticServiceCapabilities::getSupportedLogStorage(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_LOG_STORAGE, getSupportedLogStorage());
	return true;
}

Array<Uint16> UNIX_DiagnosticServiceCapabilities::getSupportedLogStorage() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DiagnosticServiceCapabilities::getOtherSupportedLogStorageDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPORTED_LOG_STORAGE_DESCRIPTIONS, getOtherSupportedLogStorageDescriptions());
	return true;
}

Array<String> UNIX_DiagnosticServiceCapabilities::getOtherSupportedLogStorageDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_DiagnosticServiceCapabilities::getSupportedExecutionControls(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_EXECUTION_CONTROLS, getSupportedExecutionControls());
	return true;
}

Array<Uint16> UNIX_DiagnosticServiceCapabilities::getSupportedExecutionControls() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_DiagnosticServiceCapabilities::getOtherSupportedExecutionControlsDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPORTED_EXECUTION_CONTROLS_DESCRIPTIONS, getOtherSupportedExecutionControlsDescriptions());
	return true;
}

Array<String> UNIX_DiagnosticServiceCapabilities::getOtherSupportedExecutionControlsDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_DiagnosticServiceCapabilities::getSupportedTestWarnings(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_TEST_WARNINGS, getSupportedTestWarnings());
	return true;
}

Uint16 UNIX_DiagnosticServiceCapabilities::getSupportedTestWarnings() const
{
	return Uint16(0);
}



Boolean UNIX_DiagnosticServiceCapabilities::initialize()
{
	return false;
}

Boolean UNIX_DiagnosticServiceCapabilities::load(int &pIndex)
{
	return false;
}

Boolean UNIX_DiagnosticServiceCapabilities::finalize()
{
	return false;
}

Boolean UNIX_DiagnosticServiceCapabilities::find(Array<CIMKeyBinding> &kbArray)
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
