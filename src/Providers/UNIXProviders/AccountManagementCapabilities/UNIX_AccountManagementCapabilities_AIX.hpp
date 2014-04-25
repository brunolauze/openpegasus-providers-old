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


UNIX_AccountManagementCapabilities::UNIX_AccountManagementCapabilities(void)
{
}

UNIX_AccountManagementCapabilities::~UNIX_AccountManagementCapabilities(void)
{
}


Boolean UNIX_AccountManagementCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_AccountManagementCapabilities::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_AccountManagementCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_AccountManagementCapabilities::getCaption() const
{
	return String ("");
}

Boolean UNIX_AccountManagementCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_AccountManagementCapabilities::getDescription() const
{
	return String ("");
}

Boolean UNIX_AccountManagementCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_AccountManagementCapabilities::getElementName() const
{
	return String("AccountManagementCapabilities");
}

Boolean UNIX_AccountManagementCapabilities::getElementNameEditSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_EDIT_SUPPORTED, getElementNameEditSupported());
	return true;
}

Boolean UNIX_AccountManagementCapabilities::getElementNameEditSupported() const
{
	return Boolean(false);
}

Boolean UNIX_AccountManagementCapabilities::getMaxElementNameLen(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ELEMENT_NAME_LEN, getMaxElementNameLen());
	return true;
}

Uint16 UNIX_AccountManagementCapabilities::getMaxElementNameLen() const
{
	return Uint16(0);
}

Boolean UNIX_AccountManagementCapabilities::getRequestedStatesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATES_SUPPORTED, getRequestedStatesSupported());
	return true;
}

Array<Uint16> UNIX_AccountManagementCapabilities::getRequestedStatesSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_AccountManagementCapabilities::getElementNameMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_MASK, getElementNameMask());
	return true;
}

String UNIX_AccountManagementCapabilities::getElementNameMask() const
{
	return String ("");
}

Boolean UNIX_AccountManagementCapabilities::getOperationsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OPERATIONS_SUPPORTED, getOperationsSupported());
	return true;
}

Array<Uint16> UNIX_AccountManagementCapabilities::getOperationsSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_AccountManagementCapabilities::getOtherSupportedUserPasswordEncryptionAlgorithms(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_SUPPORTED_USER_PASSWORD_ENCRYPTION_ALGORITHMS, getOtherSupportedUserPasswordEncryptionAlgorithms());
	return true;
}

Array<String> UNIX_AccountManagementCapabilities::getOtherSupportedUserPasswordEncryptionAlgorithms() const
{
	Array<String> as;
	

	return as;

}

Boolean UNIX_AccountManagementCapabilities::getSupportedUserPasswordEncryptionAlgorithms(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_USER_PASSWORD_ENCRYPTION_ALGORITHMS, getSupportedUserPasswordEncryptionAlgorithms());
	return true;
}

Array<Uint16> UNIX_AccountManagementCapabilities::getSupportedUserPasswordEncryptionAlgorithms() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_AccountManagementCapabilities::getUserPasswordEncryptionSalt(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_USER_PASSWORD_ENCRYPTION_SALT, getUserPasswordEncryptionSalt());
	return true;
}

String UNIX_AccountManagementCapabilities::getUserPasswordEncryptionSalt() const
{
	return String ("");
}

Boolean UNIX_AccountManagementCapabilities::getMaximumAccountsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAXIMUM_ACCOUNTS_SUPPORTED, getMaximumAccountsSupported());
	return true;
}

Uint16 UNIX_AccountManagementCapabilities::getMaximumAccountsSupported() const
{
	return Uint16(0);
}

Boolean UNIX_AccountManagementCapabilities::getSupportedUserPasswordEncodings(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_USER_PASSWORD_ENCODINGS, getSupportedUserPasswordEncodings());
	return true;
}

Array<Uint32> UNIX_AccountManagementCapabilities::getSupportedUserPasswordEncodings() const
{
	Array<Uint32> as;
	

	return as;

}



Boolean UNIX_AccountManagementCapabilities::initialize()
{
	return false;
}

Boolean UNIX_AccountManagementCapabilities::load(int &pIndex)
{
	return false;
}

Boolean UNIX_AccountManagementCapabilities::finalize()
{
	return false;
}

Boolean UNIX_AccountManagementCapabilities::find(Array<CIMKeyBinding> &kbArray)
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
