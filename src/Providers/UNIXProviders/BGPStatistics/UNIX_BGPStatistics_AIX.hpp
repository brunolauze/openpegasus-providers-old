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


UNIX_BGPStatistics::UNIX_BGPStatistics(void)
{
}

UNIX_BGPStatistics::~UNIX_BGPStatistics(void)
{
}


Boolean UNIX_BGPStatistics::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_BGPStatistics::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_BGPStatistics::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_BGPStatistics::getCaption() const
{
	return String ("");
}

Boolean UNIX_BGPStatistics::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_BGPStatistics::getDescription() const
{
	return String ("");
}

Boolean UNIX_BGPStatistics::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_BGPStatistics::getElementName() const
{
	return String("BGPStatistics");
}

Boolean UNIX_BGPStatistics::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_BGPStatistics::getName() const
{
	return String ("");
}

Boolean UNIX_BGPStatistics::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_BGPStatistics::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_BGPStatistics::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_BGPStatistics::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_BGPStatistics::getServiceCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_CREATION_CLASS_NAME, getServiceCreationClassName());
	return true;
}

String UNIX_BGPStatistics::getServiceCreationClassName() const
{
	return String ("");
}

Boolean UNIX_BGPStatistics::getServiceName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SERVICE_NAME, getServiceName());
	return true;
}

String UNIX_BGPStatistics::getServiceName() const
{
	return String ("");
}

Boolean UNIX_BGPStatistics::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_BGPStatistics::getCreationClassName() const
{
	return String("UNIX_BGPStatistics");
}

Boolean UNIX_BGPStatistics::getInUpdates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IN_UPDATES, getInUpdates());
	return true;
}

Uint32 UNIX_BGPStatistics::getInUpdates() const
{
	return Uint32(0);
}

Boolean UNIX_BGPStatistics::getOutUpdates(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUT_UPDATES, getOutUpdates());
	return true;
}

Uint32 UNIX_BGPStatistics::getOutUpdates() const
{
	return Uint32(0);
}

Boolean UNIX_BGPStatistics::getInTotalMessages(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IN_TOTAL_MESSAGES, getInTotalMessages());
	return true;
}

Uint32 UNIX_BGPStatistics::getInTotalMessages() const
{
	return Uint32(0);
}

Boolean UNIX_BGPStatistics::getOutTotalMessages(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OUT_TOTAL_MESSAGES, getOutTotalMessages());
	return true;
}

Uint32 UNIX_BGPStatistics::getOutTotalMessages() const
{
	return Uint32(0);
}

Boolean UNIX_BGPStatistics::getLastError(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LAST_ERROR, getLastError());
	return true;
}

Array<Uint8> UNIX_BGPStatistics::getLastError() const
{
	Array<Uint8> as;
	

	return as;

}

Boolean UNIX_BGPStatistics::getFsmEstablishedTransitions(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FSM_ESTABLISHED_TRANSITIONS, getFsmEstablishedTransitions());
	return true;
}

Uint32 UNIX_BGPStatistics::getFsmEstablishedTransitions() const
{
	return Uint32(0);
}

Boolean UNIX_BGPStatistics::getFsmEstablishedTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FSM_ESTABLISHED_TIME, getFsmEstablishedTime());
	return true;
}

Uint32 UNIX_BGPStatistics::getFsmEstablishedTime() const
{
	return Uint32(0);
}

Boolean UNIX_BGPStatistics::getInUpdateElapsedTime(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IN_UPDATE_ELAPSED_TIME, getInUpdateElapsedTime());
	return true;
}

Uint32 UNIX_BGPStatistics::getInUpdateElapsedTime() const
{
	return Uint32(0);
}



Boolean UNIX_BGPStatistics::initialize()
{
	return false;
}

Boolean UNIX_BGPStatistics::load(int &pIndex)
{
	return false;
}

Boolean UNIX_BGPStatistics::finalize()
{
	return false;
}

Boolean UNIX_BGPStatistics::find(Array<CIMKeyBinding> &kbArray)
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
