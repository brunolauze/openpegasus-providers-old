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


UNIX_SerialInterface::UNIX_SerialInterface(void)
{
}

UNIX_SerialInterface::~UNIX_SerialInterface(void)
{
}


Boolean UNIX_SerialInterface::getAntecedent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ANTECEDENT, getAntecedent());
	return true;
}

CIMInstance UNIX_SerialInterface::getAntecedent() const
{
	return CIMInstance(CIMName("CIM_Dependency"));
}

Boolean UNIX_SerialInterface::getDependent(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEPENDENT, getDependent());
	return true;
}

CIMInstance UNIX_SerialInterface::getDependent() const
{
	return CIMInstance(CIMName("CIM_Dependency"));
}

Boolean UNIX_SerialInterface::getNegotiatedSpeed(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NEGOTIATED_SPEED, getNegotiatedSpeed());
	return true;
}

Uint64 UNIX_SerialInterface::getNegotiatedSpeed() const
{
	return Uint64(0);
}

Boolean UNIX_SerialInterface::getNegotiatedDataWidth(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NEGOTIATED_DATA_WIDTH, getNegotiatedDataWidth());
	return true;
}

Uint32 UNIX_SerialInterface::getNegotiatedDataWidth() const
{
	return Uint32(0);
}

Boolean UNIX_SerialInterface::getAccessState(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS_STATE, getAccessState());
	return true;
}

Uint16 UNIX_SerialInterface::getAccessState() const
{
	return Uint16(0);
}

Boolean UNIX_SerialInterface::getTimeOfDeviceReset(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_TIME_OF_DEVICE_RESET, getTimeOfDeviceReset());
	return true;
}

CIMDateTime UNIX_SerialInterface::getTimeOfDeviceReset() const
{
	struct tm* clock;			// create a time structure
	time_t val = time(NULL);
	clock = gmtime(&(val));	// Get the last modified time and put it into the time structure
	return CIMDateTime(
		clock->tm_year + 1900,
		clock->tm_mon + 1,
		clock->tm_mday,
		clock->tm_hour,
		clock->tm_min,
		clock->tm_sec,
		0,0,
		clock->tm_gmtoff);
}

Boolean UNIX_SerialInterface::getNumberOfHardResets(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_HARD_RESETS, getNumberOfHardResets());
	return true;
}

Uint32 UNIX_SerialInterface::getNumberOfHardResets() const
{
	return Uint32(0);
}

Boolean UNIX_SerialInterface::getNumberOfSoftResets(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_SOFT_RESETS, getNumberOfSoftResets());
	return true;
}

Uint32 UNIX_SerialInterface::getNumberOfSoftResets() const
{
	return Uint32(0);
}

Boolean UNIX_SerialInterface::getDeviceNumber(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_DEVICE_NUMBER, getDeviceNumber());
	return true;
}

String UNIX_SerialInterface::getDeviceNumber() const
{
	return String ("");
}

Boolean UNIX_SerialInterface::getAccessMode(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS_MODE, getAccessMode());
	return true;
}

Uint16 UNIX_SerialInterface::getAccessMode() const
{
	return Uint16(0);
}

Boolean UNIX_SerialInterface::getAccessPriority(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_ACCESS_PRIORITY, getAccessPriority());
	return true;
}

Uint16 UNIX_SerialInterface::getAccessPriority() const
{
	return Uint16(0);
}

Boolean UNIX_SerialInterface::getNumberOfStopBits(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_NUMBER_OF_STOP_BITS, getNumberOfStopBits());
	return true;
}

Uint16 UNIX_SerialInterface::getNumberOfStopBits() const
{
	return Uint16(0);
}

Boolean UNIX_SerialInterface::getParityInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_PARITY_INFO, getParityInfo());
	return true;
}

Uint16 UNIX_SerialInterface::getParityInfo() const
{
	return Uint16(0);
}

Boolean UNIX_SerialInterface::getFlowControlInfo(CIMProperty &p) const
{
	p = CIMProperty(PROPERTY_FLOW_CONTROL_INFO, getFlowControlInfo());
	return true;
}

Uint16 UNIX_SerialInterface::getFlowControlInfo() const
{
	return Uint16(0);
}



Boolean UNIX_SerialInterface::initialize()
{
	return false;
}

Boolean UNIX_SerialInterface::load(int &pIndex)
{
	return false;
}

Boolean UNIX_SerialInterface::finalize()
{
	return false;
}

Boolean UNIX_SerialInterface::find(Array<CIMKeyBinding> &kbArray)
{
	CIMKeyBinding kb;
	String antecedentKey;
	String dependentKey;


	for(Uint32 i = 0; i < kbArray.size(); i++)
	{
		kb = kbArray[i];
		CIMName keyName = kb.getName();
		if (keyName.equal(PROPERTY_ANTECEDENT)) antecedentKey = kb.getValue();
		else if (keyName.equal(PROPERTY_DEPENDENT)) dependentKey = kb.getValue();
	}



/* EXecute find with extracted keys */

	return false;
}
