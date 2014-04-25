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


UNIX_FCAdapterEventCounters::UNIX_FCAdapterEventCounters(void)
{
}

UNIX_FCAdapterEventCounters::~UNIX_FCAdapterEventCounters(void)
{
}


Boolean UNIX_FCAdapterEventCounters::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_FCAdapterEventCounters::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_FCAdapterEventCounters::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_FCAdapterEventCounters::getCaption() const
{
	return String ("");
}

Boolean UNIX_FCAdapterEventCounters::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_FCAdapterEventCounters::getDescription() const
{
	return String ("");
}

Boolean UNIX_FCAdapterEventCounters::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_FCAdapterEventCounters::getElementName() const
{
	return String("FCAdapterEventCounters");
}

Boolean UNIX_FCAdapterEventCounters::getName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NAME, getName());
	return true;
}

String UNIX_FCAdapterEventCounters::getName() const
{
	return String ("");
}

Boolean UNIX_FCAdapterEventCounters::getSystemCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_CREATION_CLASS_NAME, getSystemCreationClassName());
	return true;
}

String UNIX_FCAdapterEventCounters::getSystemCreationClassName() const
{
	return String("UNIX_ComputerSystem");
}

Boolean UNIX_FCAdapterEventCounters::getSystemName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SYSTEM_NAME, getSystemName());
	return true;
}

String UNIX_FCAdapterEventCounters::getSystemName() const
{
	return CIMHelper::HostName;
}

Boolean UNIX_FCAdapterEventCounters::getDeviceCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_CREATION_CLASS_NAME, getDeviceCreationClassName());
	return true;
}

String UNIX_FCAdapterEventCounters::getDeviceCreationClassName() const
{
	return String ("");
}

Boolean UNIX_FCAdapterEventCounters::getDeviceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_ID, getDeviceID());
	return true;
}

String UNIX_FCAdapterEventCounters::getDeviceID() const
{
	return String ("");
}

Boolean UNIX_FCAdapterEventCounters::getCreationClassName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CREATION_CLASS_NAME, getCreationClassName());
	return true;
}

String UNIX_FCAdapterEventCounters::getCreationClassName() const
{
	return String("UNIX_FCAdapterEventCounters");
}

Boolean UNIX_FCAdapterEventCounters::getABTSFramesReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_A_B_T_S_FRAMES_RECEIVED, getABTSFramesReceived());
	return true;
}

Uint64 UNIX_FCAdapterEventCounters::getABTSFramesReceived() const
{
	return Uint64(0);
}

Boolean UNIX_FCAdapterEventCounters::getABTSFramesSent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_A_B_T_S_FRAMES_SENT, getABTSFramesSent());
	return true;
}

Uint64 UNIX_FCAdapterEventCounters::getABTSFramesSent() const
{
	return Uint64(0);
}

Boolean UNIX_FCAdapterEventCounters::getFBSYsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_F_B_S_YS_RECEIVED, getFBSYsReceived());
	return true;
}

Uint64 UNIX_FCAdapterEventCounters::getFBSYsReceived() const
{
	return Uint64(0);
}

Boolean UNIX_FCAdapterEventCounters::getPBSYsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_B_S_YS_RECEIVED, getPBSYsReceived());
	return true;
}

Uint64 UNIX_FCAdapterEventCounters::getPBSYsReceived() const
{
	return Uint64(0);
}

Boolean UNIX_FCAdapterEventCounters::getPBSYsSent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_B_S_YS_SENT, getPBSYsSent());
	return true;
}

Uint64 UNIX_FCAdapterEventCounters::getPBSYsSent() const
{
	return Uint64(0);
}

Boolean UNIX_FCAdapterEventCounters::getFRJTsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_F_R_J_TS_RECEIVED, getFRJTsReceived());
	return true;
}

Uint64 UNIX_FCAdapterEventCounters::getFRJTsReceived() const
{
	return Uint64(0);
}

Boolean UNIX_FCAdapterEventCounters::getPRJTsReceived(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_R_J_TS_RECEIVED, getPRJTsReceived());
	return true;
}

Uint64 UNIX_FCAdapterEventCounters::getPRJTsReceived() const
{
	return Uint64(0);
}

Boolean UNIX_FCAdapterEventCounters::getPRJTsSent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_R_J_TS_SENT, getPRJTsSent());
	return true;
}

Uint64 UNIX_FCAdapterEventCounters::getPRJTsSent() const
{
	return Uint64(0);
}

Boolean UNIX_FCAdapterEventCounters::getPRLIsRejected(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_R_L_IS_REJECTED, getPRLIsRejected());
	return true;
}

Uint64 UNIX_FCAdapterEventCounters::getPRLIsRejected() const
{
	return Uint64(0);
}

Boolean UNIX_FCAdapterEventCounters::getPRLOsRejected(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_P_R_L_OS_REJECTED, getPRLOsRejected());
	return true;
}

Uint64 UNIX_FCAdapterEventCounters::getPRLOsRejected() const
{
	return Uint64(0);
}

Boolean UNIX_FCAdapterEventCounters::getABTSFramesRejected(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_A_B_T_S_FRAMES_REJECTED, getABTSFramesRejected());
	return true;
}

Uint64 UNIX_FCAdapterEventCounters::getABTSFramesRejected() const
{
	return Uint64(0);
}



Boolean UNIX_FCAdapterEventCounters::initialize()
{
	return false;
}

Boolean UNIX_FCAdapterEventCounters::load(int &pIndex)
{
	return false;
}

Boolean UNIX_FCAdapterEventCounters::finalize()
{
	return false;
}

Boolean UNIX_FCAdapterEventCounters::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String systemCreationClassNameKey;
	String systemNameKey;
	String deviceCreationClassNameKey;
	String deviceIDKey;
	String creationClassNameKey;
	String nameKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_SYSTEM_CREATION_CLASS_NAME)) systemCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_SYSTEM_NAME)) systemNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DEVICE_CREATION_CLASS_NAME)) deviceCreationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DEVICE_ID)) deviceIDKey = kb.getValue();
		else if (keyName.equal(PROPERTY_CREATION_CLASS_NAME)) creationClassNameKey = kb.getValue();
		else if (keyName.equal(PROPERTY_NAME)) nameKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
