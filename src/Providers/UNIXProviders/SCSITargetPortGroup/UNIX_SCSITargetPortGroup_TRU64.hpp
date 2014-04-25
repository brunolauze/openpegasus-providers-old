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


UNIX_SCSITargetPortGroup::UNIX_SCSITargetPortGroup(void)
{
}

UNIX_SCSITargetPortGroup::~UNIX_SCSITargetPortGroup(void)
{
}


Boolean UNIX_SCSITargetPortGroup::getInstanceID(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_INSTANCE_ID, getInstanceID());
	return true;
}

String UNIX_SCSITargetPortGroup::getInstanceID() const
{
	return String ("");
}

Boolean UNIX_SCSITargetPortGroup::getCaption(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CAPTION, getCaption());
	return true;
}

String UNIX_SCSITargetPortGroup::getCaption() const
{
	return String ("");
}

Boolean UNIX_SCSITargetPortGroup::getDescription(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DESCRIPTION, getDescription());
	return true;
}

String UNIX_SCSITargetPortGroup::getDescription() const
{
	return String ("");
}

Boolean UNIX_SCSITargetPortGroup::getElementName(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ELEMENT_NAME, getElementName());
	return true;
}

String UNIX_SCSITargetPortGroup::getElementName() const
{
	return String("SCSITargetPortGroup");
}

Boolean UNIX_SCSITargetPortGroup::getAsymmetric(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ASYMMETRIC, getAsymmetric());
	return true;
}

Boolean UNIX_SCSITargetPortGroup::getAsymmetric() const
{
	return Boolean(false);
}

Boolean UNIX_SCSITargetPortGroup::getCurrentLoadBalanceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_LOAD_BALANCE_TYPE, getCurrentLoadBalanceType());
	return true;
}

Uint16 UNIX_SCSITargetPortGroup::getCurrentLoadBalanceType() const
{
	return Uint16(0);
}

Boolean UNIX_SCSITargetPortGroup::getOtherCurrentLoadBalanceType(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_OTHER_CURRENT_LOAD_BALANCE_TYPE, getOtherCurrentLoadBalanceType());
	return true;
}

String UNIX_SCSITargetPortGroup::getOtherCurrentLoadBalanceType() const
{
	return String ("");
}

Boolean UNIX_SCSITargetPortGroup::getAutoFailbackEnabled(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_AUTO_FAILBACK_ENABLED, getAutoFailbackEnabled());
	return true;
}

Uint16 UNIX_SCSITargetPortGroup::getAutoFailbackEnabled() const
{
	return Uint16(0);
}

Boolean UNIX_SCSITargetPortGroup::getPollingRateMax(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_POLLING_RATE_MAX, getPollingRateMax());
	return true;
}

Uint32 UNIX_SCSITargetPortGroup::getPollingRateMax() const
{
	return Uint32(0);
}

Boolean UNIX_SCSITargetPortGroup::getCurrentPollingRate(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_CURRENT_POLLING_RATE, getCurrentPollingRate());
	return true;
}

Uint32 UNIX_SCSITargetPortGroup::getCurrentPollingRate() const
{
	return Uint32(0);
}

Boolean UNIX_SCSITargetPortGroup::getAccessState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS_STATE, getAccessState());
	return true;
}

Uint16 UNIX_SCSITargetPortGroup::getAccessState() const
{
	return Uint16(0);
}

Boolean UNIX_SCSITargetPortGroup::getExplicitFailover(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_EXPLICIT_FAILOVER, getExplicitFailover());
	return true;
}

Boolean UNIX_SCSITargetPortGroup::getExplicitFailover() const
{
	return Boolean(false);
}

Boolean UNIX_SCSITargetPortGroup::getIdentifier(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_IDENTIFIER, getIdentifier());
	return true;
}

Uint16 UNIX_SCSITargetPortGroup::getIdentifier() const
{
	return Uint16(0);
}

Boolean UNIX_SCSITargetPortGroup::getPreferred(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PREFERRED, getPreferred());
	return true;
}

Boolean UNIX_SCSITargetPortGroup::getPreferred() const
{
	return Boolean(false);
}

Boolean UNIX_SCSITargetPortGroup::getSupportsLuAssignment(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_SUPPORTS_LU_ASSIGNMENT, getSupportsLuAssignment());
	return true;
}

Boolean UNIX_SCSITargetPortGroup::getSupportsLuAssignment() const
{
	return Boolean(false);
}



Boolean UNIX_SCSITargetPortGroup::initialize()
{
	return false;
}

Boolean UNIX_SCSITargetPortGroup::load(int &pIndex)
{
	return false;
}

Boolean UNIX_SCSITargetPortGroup::finalize()
{
	return false;
}

Boolean UNIX_SCSITargetPortGroup::find(Array<CIMKeyBinding> &kbArray)
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
