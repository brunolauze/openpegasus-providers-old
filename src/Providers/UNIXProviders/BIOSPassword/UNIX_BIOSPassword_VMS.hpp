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


UNIX_BIOSPassword::UNIX_BIOSPassword(void)
{
}

UNIX_BIOSPassword::~UNIX_BIOSPassword(void)
{
}


Boolean UNIX_BIOSPassword::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BIOSPassword::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_BIOSPassword::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BIOSPassword::getCaption() const
{
	return String ("");
}

Boolean UNIX_BIOSPassword::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BIOSPassword::getDescription() const
{
	return String ("");
}

Boolean UNIX_BIOSPassword::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BIOSPassword::getElementName() const
{
	return String("BIOSPassword");
}

Boolean UNIX_BIOSPassword::getAttributeName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ATTRIBUTE_NAME, getAttributeName());
	return true;
}

String UNIX_BIOSPassword::getAttributeName() const
{
	return String ("");
}

Boolean UNIX_BIOSPassword::getCurrentValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_VALUE, getCurrentValue());
	return true;
}

Array<String> UNIX_BIOSPassword::getCurrentValue() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_BIOSPassword::getDefaultValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEFAULT_VALUE, getDefaultValue());
	return true;
}

Array<String> UNIX_BIOSPassword::getDefaultValue() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_BIOSPassword::getPendingValue(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PENDING_VALUE, getPendingValue());
	return true;
}

Array<String> UNIX_BIOSPassword::getPendingValue() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_BIOSPassword::getIsOrderedList(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_ORDERED_LIST, getIsOrderedList());
	return true;
}

Boolean UNIX_BIOSPassword::getIsOrderedList() const
{
	return Boolean(false);
}

Boolean UNIX_BIOSPassword::getIsReadOnly(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_READ_ONLY, getIsReadOnly());
	return true;
}

Boolean UNIX_BIOSPassword::getIsReadOnly() const
{
	return Boolean(false);
}

Boolean UNIX_BIOSPassword::getMinLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MIN_LENGTH, getMinLength());
	return true;
}

Uint64 UNIX_BIOSPassword::getMinLength() const
{
	return Uint64(0);
}

Boolean UNIX_BIOSPassword::getMaxLength(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_LENGTH, getMaxLength());
	return true;
}

Uint64 UNIX_BIOSPassword::getMaxLength() const
{
	return Uint64(0);
}

Boolean UNIX_BIOSPassword::getPasswordEncoding(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PASSWORD_ENCODING, getPasswordEncoding());
	return true;
}

Uint32 UNIX_BIOSPassword::getPasswordEncoding() const
{
	return Uint32(0);
}

Boolean UNIX_BIOSPassword::getIsSet(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IS_SET, getIsSet());
	return true;
}

Boolean UNIX_BIOSPassword::getIsSet() const
{
	return Boolean(false);
}



Boolean UNIX_BIOSPassword::initialize()
{
	return false;
}

Boolean UNIX_BIOSPassword::load(int &pIndex)
{
	return false;
}

Boolean UNIX_BIOSPassword::finalize()
{
	return false;
}

Boolean UNIX_BIOSPassword::find(Array<CIMKeyBinding> &kbArray)
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
