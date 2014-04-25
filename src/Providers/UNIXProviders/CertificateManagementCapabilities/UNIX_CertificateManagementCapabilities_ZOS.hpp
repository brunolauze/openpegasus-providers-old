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


UNIX_CertificateManagementCapabilities::UNIX_CertificateManagementCapabilities(void)
{
}

UNIX_CertificateManagementCapabilities::~UNIX_CertificateManagementCapabilities(void)
{
}


Boolean UNIX_CertificateManagementCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_CertificateManagementCapabilities::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_CertificateManagementCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_CertificateManagementCapabilities::getCaption() const
{
	return String ("");
}

Boolean UNIX_CertificateManagementCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_CertificateManagementCapabilities::getDescription() const
{
	return String ("");
}

Boolean UNIX_CertificateManagementCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_CertificateManagementCapabilities::getElementName() const
{
	return String("CertificateManagementCapabilities");
}

Boolean UNIX_CertificateManagementCapabilities::getElementNameEditSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_EDIT_SUPPORTED, getElementNameEditSupported());
	return true;
}

Boolean UNIX_CertificateManagementCapabilities::getElementNameEditSupported() const
{
	return Boolean(false);
}

Boolean UNIX_CertificateManagementCapabilities::getMaxElementNameLen(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_MAX_ELEMENT_NAME_LEN, getMaxElementNameLen());
	return true;
}

Uint16 UNIX_CertificateManagementCapabilities::getMaxElementNameLen() const
{
	return Uint16(0);
}

Boolean UNIX_CertificateManagementCapabilities::getRequestedStatesSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_REQUESTED_STATES_SUPPORTED, getRequestedStatesSupported());
	return true;
}

Array<Uint16> UNIX_CertificateManagementCapabilities::getRequestedStatesSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_CertificateManagementCapabilities::getElementNameMask(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME_MASK, getElementNameMask());
	return true;
}

String UNIX_CertificateManagementCapabilities::getElementNameMask() const
{
	return String ("");
}

Boolean UNIX_CertificateManagementCapabilities::getSupportedMethods(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_METHODS, getSupportedMethods());
	return true;
}

Array<Uint16> UNIX_CertificateManagementCapabilities::getSupportedMethods() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_CertificateManagementCapabilities::getCumulativePrivilegeMethodology(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CUMULATIVE_PRIVILEGE_METHODOLOGY, getCumulativePrivilegeMethodology());
	return true;
}

Uint16 UNIX_CertificateManagementCapabilities::getCumulativePrivilegeMethodology() const
{
	return Uint16(0);
}

Boolean UNIX_CertificateManagementCapabilities::getKeyAlgorithmSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_KEY_ALGORITHM_SUPPORTED, getKeyAlgorithmSupported());
	return true;
}

Array<Uint16> UNIX_CertificateManagementCapabilities::getKeyAlgorithmSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_CertificateManagementCapabilities::getInputFormatsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INPUT_FORMATS_SUPPORTED, getInputFormatsSupported());
	return true;
}

Array<Uint16> UNIX_CertificateManagementCapabilities::getInputFormatsSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_CertificateManagementCapabilities::getOutputFormatsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUTPUT_FORMATS_SUPPORTED, getOutputFormatsSupported());
	return true;
}

Array<Uint16> UNIX_CertificateManagementCapabilities::getOutputFormatsSupported() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_CertificateManagementCapabilities::getAsymmetricKeyGeneration(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ASYMMETRIC_KEY_GENERATION, getAsymmetricKeyGeneration());
	return true;
}

Boolean UNIX_CertificateManagementCapabilities::getAsymmetricKeyGeneration() const
{
	return Boolean(false);
}

Boolean UNIX_CertificateManagementCapabilities::getSupportedSignatureAlgorithms(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_SIGNATURE_ALGORITHMS, getSupportedSignatureAlgorithms());
	return true;
}

Array<Uint16> UNIX_CertificateManagementCapabilities::getSupportedSignatureAlgorithms() const
{
	Array<Uint16> as;
	

	return as;

}



Boolean UNIX_CertificateManagementCapabilities::initialize()
{
	return false;
}

Boolean UNIX_CertificateManagementCapabilities::load(int &pIndex)
{
	return false;
}

Boolean UNIX_CertificateManagementCapabilities::finalize()
{
	return false;
}

Boolean UNIX_CertificateManagementCapabilities::find(Array<CIMKeyBinding> &kbArray)
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
