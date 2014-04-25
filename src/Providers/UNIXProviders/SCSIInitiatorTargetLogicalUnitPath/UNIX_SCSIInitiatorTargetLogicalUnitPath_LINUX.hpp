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


UNIX_SCSIInitiatorTargetLogicalUnitPath::UNIX_SCSIInitiatorTargetLogicalUnitPath(void)
{
}

UNIX_SCSIInitiatorTargetLogicalUnitPath::~UNIX_SCSIInitiatorTargetLogicalUnitPath(void)
{
}


Boolean UNIX_SCSIInitiatorTargetLogicalUnitPath::getInitiator(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INITIATOR, getInitiator());
	return true;
}

CIMInstance UNIX_SCSIInitiatorTargetLogicalUnitPath::getInitiator() const
{
	return CIMInstance(CIMName("CIM_ManagedElement"));
}

Boolean UNIX_SCSIInitiatorTargetLogicalUnitPath::getTarget(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TARGET, getTarget());
	return true;
}

CIMInstance UNIX_SCSIInitiatorTargetLogicalUnitPath::getTarget() const
{
	return CIMInstance(CIMName("CIM_ManagedElement"));
}

Boolean UNIX_SCSIInitiatorTargetLogicalUnitPath::getLogicalUnit(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOGICAL_UNIT, getLogicalUnit());
	return true;
}

CIMInstance UNIX_SCSIInitiatorTargetLogicalUnitPath::getLogicalUnit() const
{
	return CIMInstance(CIMName("CIM_ManagedElement"));
}

Boolean UNIX_SCSIInitiatorTargetLogicalUnitPath::getOSDeviceName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OS_DEVICE_NAME, getOSDeviceName());
	return true;
}

String UNIX_SCSIInitiatorTargetLogicalUnitPath::getOSDeviceName() const
{
	return String ("");
}

Boolean UNIX_SCSIInitiatorTargetLogicalUnitPath::getAdministrativeWeight(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADMINISTRATIVE_WEIGHT, getAdministrativeWeight());
	return true;
}

Uint32 UNIX_SCSIInitiatorTargetLogicalUnitPath::getAdministrativeWeight() const
{
	return Uint32(0);
}

Boolean UNIX_SCSIInitiatorTargetLogicalUnitPath::getState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_STATE, getState());
	return true;
}

Uint32 UNIX_SCSIInitiatorTargetLogicalUnitPath::getState() const
{
	return Uint32(0);
}

Boolean UNIX_SCSIInitiatorTargetLogicalUnitPath::getAdministrativeOverride(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ADMINISTRATIVE_OVERRIDE, getAdministrativeOverride());
	return true;
}

Uint16 UNIX_SCSIInitiatorTargetLogicalUnitPath::getAdministrativeOverride() const
{
	return Uint16(0);
}

Boolean UNIX_SCSIInitiatorTargetLogicalUnitPath::getLogicalUnitNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_LOGICAL_UNIT_NUMBER, getLogicalUnitNumber());
	return true;
}

Uint16 UNIX_SCSIInitiatorTargetLogicalUnitPath::getLogicalUnitNumber() const
{
	return Uint16(0);
}



Boolean UNIX_SCSIInitiatorTargetLogicalUnitPath::initialize()
{
	return false;
}

Boolean UNIX_SCSIInitiatorTargetLogicalUnitPath::load(int &pIndex)
{
	return false;
}

Boolean UNIX_SCSIInitiatorTargetLogicalUnitPath::finalize()
{
	return false;
}

Boolean UNIX_SCSIInitiatorTargetLogicalUnitPath::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String initiatorKey;
	String targetKey;
	String logicalUnitKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_INITIATOR)) initiatorKey = kb.getValue();
		else if (keyName.equal(PROPERTY_TARGET)) targetKey = kb.getValue();
		else if (keyName.equal(PROPERTY_LOGICAL_UNIT)) logicalUnitKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
