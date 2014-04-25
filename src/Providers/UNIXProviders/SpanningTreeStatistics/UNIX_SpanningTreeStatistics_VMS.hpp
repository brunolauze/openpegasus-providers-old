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


UNIX_SpanningTreeStatistics::UNIX_SpanningTreeStatistics(void)
{
}

UNIX_SpanningTreeStatistics::~UNIX_SpanningTreeStatistics(void)
{
}


Boolean UNIX_SpanningTreeStatistics::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SpanningTreeStatistics::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_SpanningTreeStatistics::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SpanningTreeStatistics::getCaption() const
{
	return String ("");
}

Boolean UNIX_SpanningTreeStatistics::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SpanningTreeStatistics::getDescription() const
{
	return String ("");
}

Boolean UNIX_SpanningTreeStatistics::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SpanningTreeStatistics::getElementName() const
{
	return String("SpanningTreeStatistics");
}

Boolean UNIX_SpanningTreeStatistics::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_SpanningTreeStatistics::getName() const
{
	return String ("");
}

Boolean UNIX_SpanningTreeStatistics::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_SpanningTreeStatistics::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_SpanningTreeStatistics::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_SpanningTreeStatistics::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_SpanningTreeStatistics::getServiceCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_CREATION_CLASS_NAME, getServiceCreationClassName());
	return true;
}

String UNIX_SpanningTreeStatistics::getServiceCreationClassName() const
{
	return String ("");
}

Boolean UNIX_SpanningTreeStatistics::getServiceName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_NAME, getServiceName());
	return true;
}

String UNIX_SpanningTreeStatistics::getServiceName() const
{
	return String ("");
}

Boolean UNIX_SpanningTreeStatistics::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_SpanningTreeStatistics::getCreationClassName() const
{
	return String("UNIX_SpanningTreeStatistics");
}

Boolean UNIX_SpanningTreeStatistics::getTimeSinceTopologyChange(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_SINCE_TOPOLOGY_CHANGE, getTimeSinceTopologyChange());
	return true;
}

Uint32 UNIX_SpanningTreeStatistics::getTimeSinceTopologyChange() const
{
	return Uint32(0);
}

Boolean UNIX_SpanningTreeStatistics::getTopChanges(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TOP_CHANGES, getTopChanges());
	return true;
}

Uint32 UNIX_SpanningTreeStatistics::getTopChanges() const
{
	return Uint32(0);
}



Boolean UNIX_SpanningTreeStatistics::initialize()
{
	return false;
}

Boolean UNIX_SpanningTreeStatistics::load(int &pIndex)
{
	return false;
}

Boolean UNIX_SpanningTreeStatistics::finalize()
{
	return false;
}

Boolean UNIX_SpanningTreeStatistics::find(Array<CIMKeyBinding> &kbArray)
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
