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


UNIX_BufferPool::UNIX_BufferPool(void)
{
}

UNIX_BufferPool::~UNIX_BufferPool(void)
{
}


Boolean UNIX_BufferPool::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BufferPool::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_BufferPool::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BufferPool::getCaption() const
{
	return String ("");
}

Boolean UNIX_BufferPool::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BufferPool::getDescription() const
{
	return String ("");
}

Boolean UNIX_BufferPool::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BufferPool::getElementName() const
{
	return String("BufferPool");
}

Boolean UNIX_BufferPool::getCollectionID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_COLLECTION_ID, getCollectionID());
	return true;
}

String UNIX_BufferPool::getCollectionID() const
{
	return String ("");
}

Boolean UNIX_BufferPool::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_BufferPool::getCreationClassName() const
{
	return String("UNIX_BufferPool");
}

Boolean UNIX_BufferPool::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_BufferPool::getName() const
{
	return String ("");
}

Boolean UNIX_BufferPool::getBufferSize(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_BUFFER_SIZE, getBufferSize());
	return true;
}

Uint16 UNIX_BufferPool::getBufferSize() const
{
	return Uint16(0);
}

Boolean UNIX_BufferPool::getSizeOfBuffers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SIZE_OF_BUFFERS, getSizeOfBuffers());
	return true;
}

Uint32 UNIX_BufferPool::getSizeOfBuffers() const
{
	return Uint32(0);
}

Boolean UNIX_BufferPool::getTotalBuffers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOTAL_BUFFERS, getTotalBuffers());
	return true;
}

Uint32 UNIX_BufferPool::getTotalBuffers() const
{
	return Uint32(0);
}

Boolean UNIX_BufferPool::getAvailableBuffers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AVAILABLE_BUFFERS, getAvailableBuffers());
	return true;
}

Uint32 UNIX_BufferPool::getAvailableBuffers() const
{
	return Uint32(0);
}

Boolean UNIX_BufferPool::getSharedBuffers(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SHARED_BUFFERS, getSharedBuffers());
	return true;
}

Uint32 UNIX_BufferPool::getSharedBuffers() const
{
	return Uint32(0);
}



Boolean UNIX_BufferPool::initialize()
{
	return false;
}

Boolean UNIX_BufferPool::load(int &pIndex)
{
	return false;
}

Boolean UNIX_BufferPool::finalize()
{
	return false;
}

Boolean UNIX_BufferPool::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String collectionIDKey;
	String creationClassNameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_COLLECTION_ID)) collectionIDKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
