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


UNIX_ResourcePoolConfigurationCapabilities::UNIX_ResourcePoolConfigurationCapabilities(void)
{
}

UNIX_ResourcePoolConfigurationCapabilities::~UNIX_ResourcePoolConfigurationCapabilities(void)
{
}


Boolean UNIX_ResourcePoolConfigurationCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_ResourcePoolConfigurationCapabilities::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_ResourcePoolConfigurationCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_ResourcePoolConfigurationCapabilities::getCaption() const
{
	return String ("");
}

Boolean UNIX_ResourcePoolConfigurationCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_ResourcePoolConfigurationCapabilities::getDescription() const
{
	return String ("");
}

Boolean UNIX_ResourcePoolConfigurationCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_ResourcePoolConfigurationCapabilities::getElementName() const
{
	return String("ResourcePoolConfigurationCapabilities");
}

Boolean UNIX_ResourcePoolConfigurationCapabilities::getAsynchronousMethodsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ASYNCHRONOUS_METHODS_SUPPORTED, getAsynchronousMethodsSupported());
	return true;
}

Array<Uint32> UNIX_ResourcePoolConfigurationCapabilities::getAsynchronousMethodsSupported() const
{
	Array<Uint32> as;
	

	return as;

}

Boolean UNIX_ResourcePoolConfigurationCapabilities::getSynchronousMethodsSupported(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYNCHRONOUS_METHODS_SUPPORTED, getSynchronousMethodsSupported());
	return true;
}

Array<Uint32> UNIX_ResourcePoolConfigurationCapabilities::getSynchronousMethodsSupported() const
{
	Array<Uint32> as;
	

	return as;

}



Boolean UNIX_ResourcePoolConfigurationCapabilities::initialize()
{
	return false;
}

Boolean UNIX_ResourcePoolConfigurationCapabilities::load(int &pIndex)
{
	return false;
}

Boolean UNIX_ResourcePoolConfigurationCapabilities::finalize()
{
	return false;
}

Boolean UNIX_ResourcePoolConfigurationCapabilities::find(Array<CIMKeyBinding> &kbArray)
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
