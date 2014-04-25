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


UNIX_BIOSEnumeration::UNIX_BIOSEnumeration(void)
{
}

UNIX_BIOSEnumeration::~UNIX_BIOSEnumeration(void)
{
}


Boolean UNIX_BIOSEnumeration::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BIOSEnumeration::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_BIOSEnumeration::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BIOSEnumeration::getCaption() const
{
	return String ("");
}

Boolean UNIX_BIOSEnumeration::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BIOSEnumeration::getDescription() const
{
	return String ("");
}

Boolean UNIX_BIOSEnumeration::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BIOSEnumeration::getElementName() const
{
	return String("BIOSEnumeration");
}

Boolean UNIX_BIOSEnumeration::getAttributeName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ATTRIBUTE_NAME, getAttributeName());
	return true;
}

String UNIX_BIOSEnumeration::getAttributeName() const
{
	return String ("");
}

Boolean UNIX_BIOSEnumeration::getCurrentValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_VALUE, getCurrentValue());
	return true;
}

Array<String> UNIX_BIOSEnumeration::getCurrentValue() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_BIOSEnumeration::getDefaultValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_VALUE, getDefaultValue());
	return true;
}

Array<String> UNIX_BIOSEnumeration::getDefaultValue() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_BIOSEnumeration::getPendingValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PENDING_VALUE, getPendingValue());
	return true;
}

Array<String> UNIX_BIOSEnumeration::getPendingValue() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_BIOSEnumeration::getIsOrderedList(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_ORDERED_LIST, getIsOrderedList());
	return true;
}

Boolean UNIX_BIOSEnumeration::getIsOrderedList() const
{
	return Boolean(false);
}

Boolean UNIX_BIOSEnumeration::getIsReadOnly(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_READ_ONLY, getIsReadOnly());
	return true;
}

Boolean UNIX_BIOSEnumeration::getIsReadOnly() const
{
	return Boolean(false);
}

Boolean UNIX_BIOSEnumeration::getPossibleValues(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSSIBLE_VALUES, getPossibleValues());
	return true;
}

Array<String> UNIX_BIOSEnumeration::getPossibleValues() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_BIOSEnumeration::getPossibleValuesDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POSSIBLE_VALUES_DESCRIPTION, getPossibleValuesDescription());
	return true;
}

Array<String> UNIX_BIOSEnumeration::getPossibleValuesDescription() const
{
	Array<String> as;
	

	return as;

}



Boolean UNIX_BIOSEnumeration::initialize()
{
	return false;
}

Boolean UNIX_BIOSEnumeration::load(int &pIndex)
{
	return false;
}

Boolean UNIX_BIOSEnumeration::finalize()
{
	return false;
}

Boolean UNIX_BIOSEnumeration::find(Array<CIMKeyBinding> &kbArray)
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
