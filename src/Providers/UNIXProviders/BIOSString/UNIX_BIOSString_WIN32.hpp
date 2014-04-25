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


UNIX_BIOSString::UNIX_BIOSString(void)
{
}

UNIX_BIOSString::~UNIX_BIOSString(void)
{
}


Boolean UNIX_BIOSString::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BIOSString::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_BIOSString::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BIOSString::getCaption() const
{
	return String ("");
}

Boolean UNIX_BIOSString::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BIOSString::getDescription() const
{
	return String ("");
}

Boolean UNIX_BIOSString::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BIOSString::getElementName() const
{
	return String("BIOSString");
}

Boolean UNIX_BIOSString::getAttributeName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ATTRIBUTE_NAME, getAttributeName());
	return true;
}

String UNIX_BIOSString::getAttributeName() const
{
	return String ("");
}

Boolean UNIX_BIOSString::getCurrentValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_VALUE, getCurrentValue());
	return true;
}

Array<String> UNIX_BIOSString::getCurrentValue() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_BIOSString::getDefaultValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_VALUE, getDefaultValue());
	return true;
}

Array<String> UNIX_BIOSString::getDefaultValue() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_BIOSString::getPendingValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PENDING_VALUE, getPendingValue());
	return true;
}

Array<String> UNIX_BIOSString::getPendingValue() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_BIOSString::getIsOrderedList(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_ORDERED_LIST, getIsOrderedList());
	return true;
}

Boolean UNIX_BIOSString::getIsOrderedList() const
{
	return Boolean(false);
}

Boolean UNIX_BIOSString::getIsReadOnly(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_READ_ONLY, getIsReadOnly());
	return true;
}

Boolean UNIX_BIOSString::getIsReadOnly() const
{
	return Boolean(false);
}

Boolean UNIX_BIOSString::getStringType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STRING_TYPE, getStringType());
	return true;
}

Uint32 UNIX_BIOSString::getStringType() const
{
	return Uint32(0);
}

Boolean UNIX_BIOSString::getMinLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_LENGTH, getMinLength());
	return true;
}

Uint64 UNIX_BIOSString::getMinLength() const
{
	return Uint64(0);
}

Boolean UNIX_BIOSString::getMaxLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_LENGTH, getMaxLength());
	return true;
}

Uint64 UNIX_BIOSString::getMaxLength() const
{
	return Uint64(0);
}

Boolean UNIX_BIOSString::getValueExpression(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_VALUE_EXPRESSION, getValueExpression());
	return true;
}

String UNIX_BIOSString::getValueExpression() const
{
	return String ("");
}



Boolean UNIX_BIOSString::initialize()
{
	return false;
}

Boolean UNIX_BIOSString::load(int &pIndex)
{
	return false;
}

Boolean UNIX_BIOSString::finalize()
{
	return false;
}

Boolean UNIX_BIOSString::find(Array<CIMKeyBinding> &kbArray)
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
