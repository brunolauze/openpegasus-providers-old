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


UNIX_IndicatorLEDCapabilities::UNIX_IndicatorLEDCapabilities(void)
{
}

UNIX_IndicatorLEDCapabilities::~UNIX_IndicatorLEDCapabilities(void)
{
}


Boolean UNIX_IndicatorLEDCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_IndicatorLEDCapabilities::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_IndicatorLEDCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_IndicatorLEDCapabilities::getCaption() const
{
	return String ("");
}

Boolean UNIX_IndicatorLEDCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_IndicatorLEDCapabilities::getDescription() const
{
	return String ("");
}

Boolean UNIX_IndicatorLEDCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_IndicatorLEDCapabilities::getElementName() const
{
	return String("IndicatorLEDCapabilities");
}

Boolean UNIX_IndicatorLEDCapabilities::getElementNameEditSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_EDIT_SUPPORTED, getElementNameEditSupported());
	return true;
}

Boolean UNIX_IndicatorLEDCapabilities::getElementNameEditSupported() const
{
	return Boolean(false);
}

Boolean UNIX_IndicatorLEDCapabilities::getMaxElementNameLen(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ELEMENT_NAME_LEN, getMaxElementNameLen());
	return true;
}

Uint16 UNIX_IndicatorLEDCapabilities::getMaxElementNameLen() const
{
	return Uint16(0);
}

Boolean UNIX_IndicatorLEDCapabilities::getRequestedStatesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATES_SUPPORTED, getRequestedStatesSupported());
	return true;
}

Array<Uint16> UNIX_IndicatorLEDCapabilities::getRequestedStatesSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_IndicatorLEDCapabilities::getElementNameMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_MASK, getElementNameMask());
	return true;
}

String UNIX_IndicatorLEDCapabilities::getElementNameMask() const
{
	return String ("");
}

Boolean UNIX_IndicatorLEDCapabilities::getSupportedIndicatedConditions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_INDICATED_CONDITIONS, getSupportedIndicatedConditions());
	return true;
}

Array<Uint16> UNIX_IndicatorLEDCapabilities::getSupportedIndicatedConditions() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_IndicatorLEDCapabilities::getOtherSupportedIndicatedConditionDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPORTED_INDICATED_CONDITION_DESCRIPTIONS, getOtherSupportedIndicatedConditionDescriptions());
	return true;
}

Array<String> UNIX_IndicatorLEDCapabilities::getOtherSupportedIndicatedConditionDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_IndicatorLEDCapabilities::getSupportedControlModes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_CONTROL_MODES, getSupportedControlModes());
	return true;
}

Array<Uint16> UNIX_IndicatorLEDCapabilities::getSupportedControlModes() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_IndicatorLEDCapabilities::getSupportedColors(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_COLORS, getSupportedColors());
	return true;
}

Array<Uint16> UNIX_IndicatorLEDCapabilities::getSupportedColors() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_IndicatorLEDCapabilities::getOtherSupportedColorDescriptions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPORTED_COLOR_DESCRIPTIONS, getOtherSupportedColorDescriptions());
	return true;
}

Array<String> UNIX_IndicatorLEDCapabilities::getOtherSupportedColorDescriptions() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_IndicatorLEDCapabilities::getSupportedControlPatterns(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_CONTROL_PATTERNS, getSupportedControlPatterns());
	return true;
}

Array<String> UNIX_IndicatorLEDCapabilities::getSupportedControlPatterns() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_IndicatorLEDCapabilities::getSupportedActivationStates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_ACTIVATION_STATES, getSupportedActivationStates());
	return true;
}

Array<Uint16> UNIX_IndicatorLEDCapabilities::getSupportedActivationStates() const
{
	Array<Uint16> as;
	

	return as;

}



Boolean UNIX_IndicatorLEDCapabilities::initialize()
{
	return false;
}

Boolean UNIX_IndicatorLEDCapabilities::load(int &pIndex)
{
	return false;
}

Boolean UNIX_IndicatorLEDCapabilities::finalize()
{
	return false;
}

Boolean UNIX_IndicatorLEDCapabilities::find(Array<CIMKeyBinding> &kbArray)
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
