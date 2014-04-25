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


UNIX_StorageConfigurationCapabilities::UNIX_StorageConfigurationCapabilities(void)
{
}

UNIX_StorageConfigurationCapabilities::~UNIX_StorageConfigurationCapabilities(void)
{
}


Boolean UNIX_StorageConfigurationCapabilities::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_StorageConfigurationCapabilities::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_StorageConfigurationCapabilities::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_StorageConfigurationCapabilities::getCaption() const
{
	return String ("");
}

Boolean UNIX_StorageConfigurationCapabilities::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_StorageConfigurationCapabilities::getDescription() const
{
	return String ("");
}

Boolean UNIX_StorageConfigurationCapabilities::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_StorageConfigurationCapabilities::getElementName() const
{
	return String("StorageConfigurationCapabilities");
}

Boolean UNIX_StorageConfigurationCapabilities::getSupportedAsynchronousActions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_ASYNCHRONOUS_ACTIONS, getSupportedAsynchronousActions());
	return true;
}

Array<Uint16> UNIX_StorageConfigurationCapabilities::getSupportedAsynchronousActions() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_StorageConfigurationCapabilities::getSupportedSynchronousActions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_SYNCHRONOUS_ACTIONS, getSupportedSynchronousActions());
	return true;
}

Array<Uint16> UNIX_StorageConfigurationCapabilities::getSupportedSynchronousActions() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_StorageConfigurationCapabilities::getSupportedStorageElementTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_STORAGE_ELEMENT_TYPES, getSupportedStorageElementTypes());
	return true;
}

Array<Uint16> UNIX_StorageConfigurationCapabilities::getSupportedStorageElementTypes() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_StorageConfigurationCapabilities::getSupportedStoragePoolFeatures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_STORAGE_POOL_FEATURES, getSupportedStoragePoolFeatures());
	return true;
}

Array<Uint16> UNIX_StorageConfigurationCapabilities::getSupportedStoragePoolFeatures() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_StorageConfigurationCapabilities::getSupportedStorageElementFeatures(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_STORAGE_ELEMENT_FEATURES, getSupportedStorageElementFeatures());
	return true;
}

Array<Uint16> UNIX_StorageConfigurationCapabilities::getSupportedStorageElementFeatures() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_StorageConfigurationCapabilities::getSupportedCopyTypes(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTED_COPY_TYPES, getSupportedCopyTypes());
	return true;
}

Array<Uint16> UNIX_StorageConfigurationCapabilities::getSupportedCopyTypes() const
{
	Array<Uint16> as;
	

	return as;

}

Boolean UNIX_StorageConfigurationCapabilities::getInitialReplicationState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INITIAL_REPLICATION_STATE, getInitialReplicationState());
	return true;
}

Uint16 UNIX_StorageConfigurationCapabilities::getInitialReplicationState() const
{
	return Uint16(0);
}



Boolean UNIX_StorageConfigurationCapabilities::initialize()
{
	return false;
}

Boolean UNIX_StorageConfigurationCapabilities::load(int &pIndex)
{
	return false;
}

Boolean UNIX_StorageConfigurationCapabilities::finalize()
{
	return false;
}

Boolean UNIX_StorageConfigurationCapabilities::find(Array<CIMKeyBinding> &kbArray)
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
