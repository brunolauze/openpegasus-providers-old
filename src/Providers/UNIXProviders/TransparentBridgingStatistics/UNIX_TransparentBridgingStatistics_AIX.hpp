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


UNIX_TransparentBridgingStatistics::UNIX_TransparentBridgingStatistics(void)
{
}

UNIX_TransparentBridgingStatistics::~UNIX_TransparentBridgingStatistics(void)
{
}


Boolean UNIX_TransparentBridgingStatistics::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_TransparentBridgingStatistics::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_TransparentBridgingStatistics::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_TransparentBridgingStatistics::getCaption() const
{
	return String ("");
}

Boolean UNIX_TransparentBridgingStatistics::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_TransparentBridgingStatistics::getDescription() const
{
	return String ("");
}

Boolean UNIX_TransparentBridgingStatistics::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_TransparentBridgingStatistics::getElementName() const
{
	return String("TransparentBridgingStatistics");
}

Boolean UNIX_TransparentBridgingStatistics::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_TransparentBridgingStatistics::getName() const
{
	return String ("");
}

Boolean UNIX_TransparentBridgingStatistics::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_TransparentBridgingStatistics::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_TransparentBridgingStatistics::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_TransparentBridgingStatistics::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_TransparentBridgingStatistics::getServiceCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_CREATION_CLASS_NAME, getServiceCreationClassName());
	return true;
}

String UNIX_TransparentBridgingStatistics::getServiceCreationClassName() const
{
	return String ("");
}

Boolean UNIX_TransparentBridgingStatistics::getServiceName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_NAME, getServiceName());
	return true;
}

String UNIX_TransparentBridgingStatistics::getServiceName() const
{
	return String ("");
}

Boolean UNIX_TransparentBridgingStatistics::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_TransparentBridgingStatistics::getCreationClassName() const
{
	return String("UNIX_TransparentBridgingStatistics");
}

Boolean UNIX_TransparentBridgingStatistics::getLearnedEntryDiscards(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LEARNED_ENTRY_DISCARDS, getLearnedEntryDiscards());
	return true;
}

Uint32 UNIX_TransparentBridgingStatistics::getLearnedEntryDiscards() const
{
	return Uint32(0);
}



Boolean UNIX_TransparentBridgingStatistics::initialize()
{
	return false;
}

Boolean UNIX_TransparentBridgingStatistics::load(int &pIndex)
{
	return false;
}

Boolean UNIX_TransparentBridgingStatistics::finalize()
{
	return false;
}

Boolean UNIX_TransparentBridgingStatistics::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String serviceCreationClassNameKey;
	String serviceNameKey;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SERVICE_CREATION_CLASS_NAME)) serviceCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SERVICE_NAME)) serviceNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
